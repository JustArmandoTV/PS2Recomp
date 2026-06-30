#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3880
// Address: 0x1f3880 - 0x1f3be0
void sub_001F3880_0x1f3880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3880_0x1f3880");
#endif

    switch (ctx->pc) {
        case 0x1f3880u: goto label_1f3880;
        case 0x1f3884u: goto label_1f3884;
        case 0x1f3888u: goto label_1f3888;
        case 0x1f388cu: goto label_1f388c;
        case 0x1f3890u: goto label_1f3890;
        case 0x1f3894u: goto label_1f3894;
        case 0x1f3898u: goto label_1f3898;
        case 0x1f389cu: goto label_1f389c;
        case 0x1f38a0u: goto label_1f38a0;
        case 0x1f38a4u: goto label_1f38a4;
        case 0x1f38a8u: goto label_1f38a8;
        case 0x1f38acu: goto label_1f38ac;
        case 0x1f38b0u: goto label_1f38b0;
        case 0x1f38b4u: goto label_1f38b4;
        case 0x1f38b8u: goto label_1f38b8;
        case 0x1f38bcu: goto label_1f38bc;
        case 0x1f38c0u: goto label_1f38c0;
        case 0x1f38c4u: goto label_1f38c4;
        case 0x1f38c8u: goto label_1f38c8;
        case 0x1f38ccu: goto label_1f38cc;
        case 0x1f38d0u: goto label_1f38d0;
        case 0x1f38d4u: goto label_1f38d4;
        case 0x1f38d8u: goto label_1f38d8;
        case 0x1f38dcu: goto label_1f38dc;
        case 0x1f38e0u: goto label_1f38e0;
        case 0x1f38e4u: goto label_1f38e4;
        case 0x1f38e8u: goto label_1f38e8;
        case 0x1f38ecu: goto label_1f38ec;
        case 0x1f38f0u: goto label_1f38f0;
        case 0x1f38f4u: goto label_1f38f4;
        case 0x1f38f8u: goto label_1f38f8;
        case 0x1f38fcu: goto label_1f38fc;
        case 0x1f3900u: goto label_1f3900;
        case 0x1f3904u: goto label_1f3904;
        case 0x1f3908u: goto label_1f3908;
        case 0x1f390cu: goto label_1f390c;
        case 0x1f3910u: goto label_1f3910;
        case 0x1f3914u: goto label_1f3914;
        case 0x1f3918u: goto label_1f3918;
        case 0x1f391cu: goto label_1f391c;
        case 0x1f3920u: goto label_1f3920;
        case 0x1f3924u: goto label_1f3924;
        case 0x1f3928u: goto label_1f3928;
        case 0x1f392cu: goto label_1f392c;
        case 0x1f3930u: goto label_1f3930;
        case 0x1f3934u: goto label_1f3934;
        case 0x1f3938u: goto label_1f3938;
        case 0x1f393cu: goto label_1f393c;
        case 0x1f3940u: goto label_1f3940;
        case 0x1f3944u: goto label_1f3944;
        case 0x1f3948u: goto label_1f3948;
        case 0x1f394cu: goto label_1f394c;
        case 0x1f3950u: goto label_1f3950;
        case 0x1f3954u: goto label_1f3954;
        case 0x1f3958u: goto label_1f3958;
        case 0x1f395cu: goto label_1f395c;
        case 0x1f3960u: goto label_1f3960;
        case 0x1f3964u: goto label_1f3964;
        case 0x1f3968u: goto label_1f3968;
        case 0x1f396cu: goto label_1f396c;
        case 0x1f3970u: goto label_1f3970;
        case 0x1f3974u: goto label_1f3974;
        case 0x1f3978u: goto label_1f3978;
        case 0x1f397cu: goto label_1f397c;
        case 0x1f3980u: goto label_1f3980;
        case 0x1f3984u: goto label_1f3984;
        case 0x1f3988u: goto label_1f3988;
        case 0x1f398cu: goto label_1f398c;
        case 0x1f3990u: goto label_1f3990;
        case 0x1f3994u: goto label_1f3994;
        case 0x1f3998u: goto label_1f3998;
        case 0x1f399cu: goto label_1f399c;
        case 0x1f39a0u: goto label_1f39a0;
        case 0x1f39a4u: goto label_1f39a4;
        case 0x1f39a8u: goto label_1f39a8;
        case 0x1f39acu: goto label_1f39ac;
        case 0x1f39b0u: goto label_1f39b0;
        case 0x1f39b4u: goto label_1f39b4;
        case 0x1f39b8u: goto label_1f39b8;
        case 0x1f39bcu: goto label_1f39bc;
        case 0x1f39c0u: goto label_1f39c0;
        case 0x1f39c4u: goto label_1f39c4;
        case 0x1f39c8u: goto label_1f39c8;
        case 0x1f39ccu: goto label_1f39cc;
        case 0x1f39d0u: goto label_1f39d0;
        case 0x1f39d4u: goto label_1f39d4;
        case 0x1f39d8u: goto label_1f39d8;
        case 0x1f39dcu: goto label_1f39dc;
        case 0x1f39e0u: goto label_1f39e0;
        case 0x1f39e4u: goto label_1f39e4;
        case 0x1f39e8u: goto label_1f39e8;
        case 0x1f39ecu: goto label_1f39ec;
        case 0x1f39f0u: goto label_1f39f0;
        case 0x1f39f4u: goto label_1f39f4;
        case 0x1f39f8u: goto label_1f39f8;
        case 0x1f39fcu: goto label_1f39fc;
        case 0x1f3a00u: goto label_1f3a00;
        case 0x1f3a04u: goto label_1f3a04;
        case 0x1f3a08u: goto label_1f3a08;
        case 0x1f3a0cu: goto label_1f3a0c;
        case 0x1f3a10u: goto label_1f3a10;
        case 0x1f3a14u: goto label_1f3a14;
        case 0x1f3a18u: goto label_1f3a18;
        case 0x1f3a1cu: goto label_1f3a1c;
        case 0x1f3a20u: goto label_1f3a20;
        case 0x1f3a24u: goto label_1f3a24;
        case 0x1f3a28u: goto label_1f3a28;
        case 0x1f3a2cu: goto label_1f3a2c;
        case 0x1f3a30u: goto label_1f3a30;
        case 0x1f3a34u: goto label_1f3a34;
        case 0x1f3a38u: goto label_1f3a38;
        case 0x1f3a3cu: goto label_1f3a3c;
        case 0x1f3a40u: goto label_1f3a40;
        case 0x1f3a44u: goto label_1f3a44;
        case 0x1f3a48u: goto label_1f3a48;
        case 0x1f3a4cu: goto label_1f3a4c;
        case 0x1f3a50u: goto label_1f3a50;
        case 0x1f3a54u: goto label_1f3a54;
        case 0x1f3a58u: goto label_1f3a58;
        case 0x1f3a5cu: goto label_1f3a5c;
        case 0x1f3a60u: goto label_1f3a60;
        case 0x1f3a64u: goto label_1f3a64;
        case 0x1f3a68u: goto label_1f3a68;
        case 0x1f3a6cu: goto label_1f3a6c;
        case 0x1f3a70u: goto label_1f3a70;
        case 0x1f3a74u: goto label_1f3a74;
        case 0x1f3a78u: goto label_1f3a78;
        case 0x1f3a7cu: goto label_1f3a7c;
        case 0x1f3a80u: goto label_1f3a80;
        case 0x1f3a84u: goto label_1f3a84;
        case 0x1f3a88u: goto label_1f3a88;
        case 0x1f3a8cu: goto label_1f3a8c;
        case 0x1f3a90u: goto label_1f3a90;
        case 0x1f3a94u: goto label_1f3a94;
        case 0x1f3a98u: goto label_1f3a98;
        case 0x1f3a9cu: goto label_1f3a9c;
        case 0x1f3aa0u: goto label_1f3aa0;
        case 0x1f3aa4u: goto label_1f3aa4;
        case 0x1f3aa8u: goto label_1f3aa8;
        case 0x1f3aacu: goto label_1f3aac;
        case 0x1f3ab0u: goto label_1f3ab0;
        case 0x1f3ab4u: goto label_1f3ab4;
        case 0x1f3ab8u: goto label_1f3ab8;
        case 0x1f3abcu: goto label_1f3abc;
        case 0x1f3ac0u: goto label_1f3ac0;
        case 0x1f3ac4u: goto label_1f3ac4;
        case 0x1f3ac8u: goto label_1f3ac8;
        case 0x1f3accu: goto label_1f3acc;
        case 0x1f3ad0u: goto label_1f3ad0;
        case 0x1f3ad4u: goto label_1f3ad4;
        case 0x1f3ad8u: goto label_1f3ad8;
        case 0x1f3adcu: goto label_1f3adc;
        case 0x1f3ae0u: goto label_1f3ae0;
        case 0x1f3ae4u: goto label_1f3ae4;
        case 0x1f3ae8u: goto label_1f3ae8;
        case 0x1f3aecu: goto label_1f3aec;
        case 0x1f3af0u: goto label_1f3af0;
        case 0x1f3af4u: goto label_1f3af4;
        case 0x1f3af8u: goto label_1f3af8;
        case 0x1f3afcu: goto label_1f3afc;
        case 0x1f3b00u: goto label_1f3b00;
        case 0x1f3b04u: goto label_1f3b04;
        case 0x1f3b08u: goto label_1f3b08;
        case 0x1f3b0cu: goto label_1f3b0c;
        case 0x1f3b10u: goto label_1f3b10;
        case 0x1f3b14u: goto label_1f3b14;
        case 0x1f3b18u: goto label_1f3b18;
        case 0x1f3b1cu: goto label_1f3b1c;
        case 0x1f3b20u: goto label_1f3b20;
        case 0x1f3b24u: goto label_1f3b24;
        case 0x1f3b28u: goto label_1f3b28;
        case 0x1f3b2cu: goto label_1f3b2c;
        case 0x1f3b30u: goto label_1f3b30;
        case 0x1f3b34u: goto label_1f3b34;
        case 0x1f3b38u: goto label_1f3b38;
        case 0x1f3b3cu: goto label_1f3b3c;
        case 0x1f3b40u: goto label_1f3b40;
        case 0x1f3b44u: goto label_1f3b44;
        case 0x1f3b48u: goto label_1f3b48;
        case 0x1f3b4cu: goto label_1f3b4c;
        case 0x1f3b50u: goto label_1f3b50;
        case 0x1f3b54u: goto label_1f3b54;
        case 0x1f3b58u: goto label_1f3b58;
        case 0x1f3b5cu: goto label_1f3b5c;
        case 0x1f3b60u: goto label_1f3b60;
        case 0x1f3b64u: goto label_1f3b64;
        case 0x1f3b68u: goto label_1f3b68;
        case 0x1f3b6cu: goto label_1f3b6c;
        case 0x1f3b70u: goto label_1f3b70;
        case 0x1f3b74u: goto label_1f3b74;
        case 0x1f3b78u: goto label_1f3b78;
        case 0x1f3b7cu: goto label_1f3b7c;
        case 0x1f3b80u: goto label_1f3b80;
        case 0x1f3b84u: goto label_1f3b84;
        case 0x1f3b88u: goto label_1f3b88;
        case 0x1f3b8cu: goto label_1f3b8c;
        case 0x1f3b90u: goto label_1f3b90;
        case 0x1f3b94u: goto label_1f3b94;
        case 0x1f3b98u: goto label_1f3b98;
        case 0x1f3b9cu: goto label_1f3b9c;
        case 0x1f3ba0u: goto label_1f3ba0;
        case 0x1f3ba4u: goto label_1f3ba4;
        case 0x1f3ba8u: goto label_1f3ba8;
        case 0x1f3bacu: goto label_1f3bac;
        case 0x1f3bb0u: goto label_1f3bb0;
        case 0x1f3bb4u: goto label_1f3bb4;
        case 0x1f3bb8u: goto label_1f3bb8;
        case 0x1f3bbcu: goto label_1f3bbc;
        case 0x1f3bc0u: goto label_1f3bc0;
        case 0x1f3bc4u: goto label_1f3bc4;
        case 0x1f3bc8u: goto label_1f3bc8;
        case 0x1f3bccu: goto label_1f3bcc;
        case 0x1f3bd0u: goto label_1f3bd0;
        case 0x1f3bd4u: goto label_1f3bd4;
        case 0x1f3bd8u: goto label_1f3bd8;
        case 0x1f3bdcu: goto label_1f3bdc;
        default: break;
    }

    ctx->pc = 0x1f3880u;

label_1f3880:
    // 0x1f3880: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1f3880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1f3884:
    // 0x1f3884: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f3884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f3888:
    // 0x1f3888: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f3888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f388c:
    // 0x1f388c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f388cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f3890:
    // 0x1f3890: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f3890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f3894:
    // 0x1f3894: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f3894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f3898:
    // 0x1f3898: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1f3898u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f389c:
    // 0x1f389c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f389cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f38a0:
    // 0x1f38a0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1f38a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f38a4:
    // 0x1f38a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f38a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f38a8:
    // 0x1f38a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1f38a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f38ac:
    // 0x1f38ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f38acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f38b0:
    // 0x1f38b0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f38b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f38b4:
    // 0x1f38b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f38b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f38b8:
    // 0x1f38b8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f38b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f38bc:
    // 0x1f38bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f38bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f38c0:
    // 0x1f38c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f38c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f38c4:
    // 0x1f38c4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1f38c8:
    // 0x1f38c8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1f38c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f38cc:
    // 0x1f38cc: 0xc4700004  lwc1        $f16, 0x4($v1)
    ctx->pc = 0x1f38ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1f38d0:
    // 0x1f38d0: 0xc46f0008  lwc1        $f15, 0x8($v1)
    ctx->pc = 0x1f38d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f38d4:
    // 0x1f38d4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1f38d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f38d8:
    // 0x1f38d8: 0xc46e000c  lwc1        $f14, 0xC($v1)
    ctx->pc = 0x1f38d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f38dc:
    // 0x1f38dc: 0xc46d0010  lwc1        $f13, 0x10($v1)
    ctx->pc = 0x1f38dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f38e0:
    // 0x1f38e0: 0xc46b0014  lwc1        $f11, 0x14($v1)
    ctx->pc = 0x1f38e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f38e4:
    // 0x1f38e4: 0xc46a0018  lwc1        $f10, 0x18($v1)
    ctx->pc = 0x1f38e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f38e8:
    // 0x1f38e8: 0xc469001c  lwc1        $f9, 0x1C($v1)
    ctx->pc = 0x1f38e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f38ec:
    // 0x1f38ec: 0xc4680020  lwc1        $f8, 0x20($v1)
    ctx->pc = 0x1f38ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f38f0:
    // 0x1f38f0: 0xc4670024  lwc1        $f7, 0x24($v1)
    ctx->pc = 0x1f38f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f38f4:
    // 0x1f38f4: 0xc4660028  lwc1        $f6, 0x28($v1)
    ctx->pc = 0x1f38f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f38f8:
    // 0x1f38f8: 0xc465002c  lwc1        $f5, 0x2C($v1)
    ctx->pc = 0x1f38f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f38fc:
    // 0x1f38fc: 0xc4640030  lwc1        $f4, 0x30($v1)
    ctx->pc = 0x1f38fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f3900:
    // 0x1f3900: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x1f3900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f3904:
    // 0x1f3904: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1f3904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f3908:
    // 0x1f3908: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f3908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f390c:
    // 0x1f390c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3910:
    // 0x1f3910: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1f3910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f3914:
    // 0x1f3914: 0xe7b000e4  swc1        $f16, 0xE4($sp)
    ctx->pc = 0x1f3914u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f3918:
    // 0x1f3918: 0xe7af00e8  swc1        $f15, 0xE8($sp)
    ctx->pc = 0x1f3918u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f391c:
    // 0x1f391c: 0xe7ae00ec  swc1        $f14, 0xEC($sp)
    ctx->pc = 0x1f391cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f3920:
    // 0x1f3920: 0xe7ad00f0  swc1        $f13, 0xF0($sp)
    ctx->pc = 0x1f3920u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f3924:
    // 0x1f3924: 0xe7ab00f4  swc1        $f11, 0xF4($sp)
    ctx->pc = 0x1f3924u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f3928:
    // 0x1f3928: 0xe7aa00f8  swc1        $f10, 0xF8($sp)
    ctx->pc = 0x1f3928u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f392c:
    // 0x1f392c: 0xe7a900fc  swc1        $f9, 0xFC($sp)
    ctx->pc = 0x1f392cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f3930:
    // 0x1f3930: 0xe7a80100  swc1        $f8, 0x100($sp)
    ctx->pc = 0x1f3930u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f3934:
    // 0x1f3934: 0xe7a70104  swc1        $f7, 0x104($sp)
    ctx->pc = 0x1f3934u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1f3938:
    // 0x1f3938: 0xe7a60108  swc1        $f6, 0x108($sp)
    ctx->pc = 0x1f3938u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f393c:
    // 0x1f393c: 0xe7a5010c  swc1        $f5, 0x10C($sp)
    ctx->pc = 0x1f393cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1f3940:
    // 0x1f3940: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x1f3940u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f3944:
    // 0x1f3944: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x1f3944u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1f3948:
    // 0x1f3948: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x1f3948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1f394c:
    // 0x1f394c: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x1f394cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1f3950:
    // 0x1f3950: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1f3950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3954:
    // 0x1f3954: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1f3954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1f3958:
    // 0x1f3958: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1f3958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f395c:
    // 0x1f395c: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1f395cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1f3960:
    // 0x1f3960: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x1f3960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3964:
    // 0x1f3964: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1f3964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1f3968:
    // 0x1f3968: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1f3968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f396c:
    // 0x1f396c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f396cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1f3970:
    // 0x1f3970: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1f3970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3974:
    // 0x1f3974: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1f3974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1f3978:
    // 0x1f3978: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1f3978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f397c:
    // 0x1f397c: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1f397cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1f3980:
    // 0x1f3980: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1f3980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3984:
    // 0x1f3984: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1f3984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1f3988:
    // 0x1f3988: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x1f3988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f398c:
    // 0x1f398c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f398cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1f3990:
    // 0x1f3990: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x1f3990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3994:
    // 0x1f3994: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1f3994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1f3998:
    // 0x1f3998: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x1f3998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f399c:
    // 0x1f399c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1f399cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1f39a0:
    // 0x1f39a0: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x1f39a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f39a4:
    // 0x1f39a4: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1f39a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1f39a8:
    // 0x1f39a8: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x1f39a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f39ac:
    // 0x1f39ac: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1f39acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1f39b0:
    // 0x1f39b0: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x1f39b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f39b4:
    // 0x1f39b4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1f39b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1f39b8:
    // 0x1f39b8: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x1f39b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f39bc:
    // 0x1f39bc: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x1f39bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_1f39c0:
    // 0x1f39c0: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x1f39c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f39c4:
    // 0x1f39c4: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1f39c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1f39c8:
    // 0x1f39c8: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x1f39c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f39cc:
    // 0x1f39cc: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x1f39ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_1f39d0:
    // 0x1f39d0: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x1f39d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f39d4:
    // 0x1f39d4: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1f39d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1f39d8:
    // 0x1f39d8: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x1f39d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f39dc:
    // 0x1f39dc: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x1f39dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_1f39e0:
    // 0x1f39e0: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x1f39e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f39e4:
    // 0x1f39e4: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x1f39e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_1f39e8:
    // 0x1f39e8: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x1f39e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f39ec:
    // 0x1f39ec: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x1f39ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_1f39f0:
    // 0x1f39f0: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1f39f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f39f4:
    // 0x1f39f4: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x1f39f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1f39f8:
    // 0x1f39f8: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x1f39f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f39fc:
    // 0x1f39fc: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x1f39fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_1f3a00:
    // 0x1f3a00: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f3a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3a04:
    // 0x1f3a04: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x1f3a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_1f3a08:
    // 0x1f3a08: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f3a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3a0c:
    // 0x1f3a0c: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x1f3a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_1f3a10:
    // 0x1f3a10: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f3a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3a14:
    // 0x1f3a14: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x1f3a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1f3a18:
    // 0x1f3a18: 0xc46000a4  lwc1        $f0, 0xA4($v1)
    ctx->pc = 0x1f3a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3a1c:
    // 0x1f3a1c: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x1f3a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_1f3a20:
    // 0x1f3a20: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x1f3a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3a24:
    // 0x1f3a24: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x1f3a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1f3a28:
    // 0x1f3a28: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1f3a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3a2c:
    // 0x1f3a2c: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x1f3a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_1f3a30:
    // 0x1f3a30: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1f3a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3a34:
    // 0x1f3a34: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x1f3a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1f3a38:
    // 0x1f3a38: 0x946200b4  lhu         $v0, 0xB4($v1)
    ctx->pc = 0x1f3a38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 180)));
label_1f3a3c:
    // 0x1f3a3c: 0xa7a20194  sh          $v0, 0x194($sp)
    ctx->pc = 0x1f3a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 404), (uint16_t)GPR_U32(ctx, 2));
label_1f3a40:
    // 0x1f3a40: 0x946200b6  lhu         $v0, 0xB6($v1)
    ctx->pc = 0x1f3a40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 182)));
label_1f3a44:
    // 0x1f3a44: 0xa7a20196  sh          $v0, 0x196($sp)
    ctx->pc = 0x1f3a44u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 406), (uint16_t)GPR_U32(ctx, 2));
label_1f3a48:
    // 0x1f3a48: 0xc46100b8  lwc1        $f1, 0xB8($v1)
    ctx->pc = 0x1f3a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3a4c:
    // 0x1f3a4c: 0xc46000bc  lwc1        $f0, 0xBC($v1)
    ctx->pc = 0x1f3a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3a50:
    // 0x1f3a50: 0xe7a10198  swc1        $f1, 0x198($sp)
    ctx->pc = 0x1f3a50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1f3a54:
    // 0x1f3a54: 0xc0827ac  jal         func_209EB0
label_1f3a58:
    if (ctx->pc == 0x1F3A58u) {
        ctx->pc = 0x1F3A58u;
            // 0x1f3a58: 0xe7a0019c  swc1        $f0, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->pc = 0x1F3A5Cu;
        goto label_1f3a5c;
    }
    ctx->pc = 0x1F3A54u;
    SET_GPR_U32(ctx, 31, 0x1F3A5Cu);
    ctx->pc = 0x1F3A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A54u;
            // 0x1f3a58: 0xe7a0019c  swc1        $f0, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A5Cu; }
        if (ctx->pc != 0x1F3A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A5Cu; }
        if (ctx->pc != 0x1F3A5Cu) { return; }
    }
    ctx->pc = 0x1F3A5Cu;
label_1f3a5c:
    // 0x1f3a5c: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x1f3a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1f3a60:
    // 0x1f3a60: 0xafb500bc  sw          $s5, 0xBC($sp)
    ctx->pc = 0x1f3a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 21));
label_1f3a64:
    // 0x1f3a64: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x1f3a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_1f3a68:
    // 0x1f3a68: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1f3a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f3a6c:
    // 0x1f3a6c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f3a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f3a70:
    // 0x1f3a70: 0x8c9e000c  lw          $fp, 0xC($a0)
    ctx->pc = 0x1f3a70u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1f3a74:
    // 0x1f3a74: 0x1860004a  blez        $v1, . + 4 + (0x4A << 2)
label_1f3a78:
    if (ctx->pc == 0x1F3A78u) {
        ctx->pc = 0x1F3A78u;
            // 0x1f3a78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A7Cu;
        goto label_1f3a7c;
    }
    ctx->pc = 0x1F3A74u;
    {
        const bool branch_taken_0x1f3a74 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F3A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A74u;
            // 0x1f3a78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a74) {
            ctx->pc = 0x1F3BA0u;
            goto label_1f3ba0;
        }
    }
    ctx->pc = 0x1F3A7Cu;
label_1f3a7c:
    // 0x1f3a7c: 0x18600048  blez        $v1, . + 4 + (0x48 << 2)
label_1f3a80:
    if (ctx->pc == 0x1F3A80u) {
        ctx->pc = 0x1F3A84u;
        goto label_1f3a84;
    }
    ctx->pc = 0x1F3A7Cu;
    {
        const bool branch_taken_0x1f3a7c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1f3a7c) {
            ctx->pc = 0x1F3BA0u;
            goto label_1f3ba0;
        }
    }
    ctx->pc = 0x1F3A84u;
label_1f3a84:
    // 0x1f3a84: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x1f3a84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1f3a88:
    // 0x1f3a88: 0xc6270004  lwc1        $f7, 0x4($s1)
    ctx->pc = 0x1f3a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f3a8c:
    // 0x1f3a8c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1f3a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1f3a90:
    // 0x1f3a90: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1f3a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3a94:
    // 0x1f3a94: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1f3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f3a98:
    // 0x1f3a98: 0xc6280000  lwc1        $f8, 0x0($s1)
    ctx->pc = 0x1f3a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f3a9c:
    // 0x1f3a9c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1f3a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1f3aa0:
    // 0x1f3aa0: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1f3aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3aa4:
    // 0x1f3aa4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f3aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f3aa8:
    // 0x1f3aa8: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1f3aa8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1f3aac:
    // 0x1f3aac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f3aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ab0:
    // 0x1f3ab0: 0xc7a50100  lwc1        $f5, 0x100($sp)
    ctx->pc = 0x1f3ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f3ab4:
    // 0x1f3ab4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1f3ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ab8:
    // 0x1f3ab8: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x1f3ab8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
label_1f3abc:
    // 0x1f3abc: 0xc6260008  lwc1        $f6, 0x8($s1)
    ctx->pc = 0x1f3abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f3ac0:
    // 0x1f3ac0: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x1f3ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3ac4:
    // 0x1f3ac4: 0xc7a300e4  lwc1        $f3, 0xE4($sp)
    ctx->pc = 0x1f3ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f3ac8:
    // 0x1f3ac8: 0x4605315c  madd.s      $f5, $f6, $f5
    ctx->pc = 0x1f3ac8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
label_1f3acc:
    // 0x1f3acc: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1f3accu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1f3ad0:
    // 0x1f3ad0: 0xc7a40104  lwc1        $f4, 0x104($sp)
    ctx->pc = 0x1f3ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f3ad4:
    // 0x1f3ad4: 0x4603401e  madda.s     $f8, $f3
    ctx->pc = 0x1f3ad4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
label_1f3ad8:
    // 0x1f3ad8: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1f3ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3adc:
    // 0x1f3adc: 0x460430dc  madd.s      $f3, $f6, $f4
    ctx->pc = 0x1f3adcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_1f3ae0:
    // 0x1f3ae0: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1f3ae0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f3ae4:
    // 0x1f3ae4: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x1f3ae4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1f3ae8:
    // 0x1f3ae8: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1f3ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3aec:
    // 0x1f3aec: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1f3aecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1f3af0:
    // 0x1f3af0: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x1f3af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f3af4:
    // 0x1f3af4: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x1f3af4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
label_1f3af8:
    // 0x1f3af8: 0xc4630030  lwc1        $f3, 0x30($v1)
    ctx->pc = 0x1f3af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f3afc:
    // 0x1f3afc: 0x4602301c  madd.s      $f0, $f6, $f2
    ctx->pc = 0x1f3afcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
label_1f3b00:
    // 0x1f3b00: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1f3b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1f3b04:
    // 0x1f3b04: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1f3b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_1f3b08:
    // 0x1f3b08: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1f3b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3b0c:
    // 0x1f3b0c: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x1f3b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f3b10:
    // 0x1f3b10: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1f3b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3b14:
    // 0x1f3b14: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1f3b14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f3b18:
    // 0x1f3b18: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x1f3b18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f3b1c:
    // 0x1f3b1c: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x1f3b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f3b20:
    // 0x1f3b20: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1f3b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3b24:
    // 0x1f3b24: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1f3b24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1f3b28:
    // 0x1f3b28: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x1f3b28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1f3b2c:
    // 0x1f3b2c: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1f3b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f3b30:
    // 0x1f3b30: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1f3b30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1f3b34:
    // 0x1f3b34: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x1f3b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1f3b38:
    // 0x1f3b38: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f3b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3b3c:
    // 0x1f3b3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f3b3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f3b40:
    // 0x1f3b40: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1f3b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1f3b44:
    // 0x1f3b44: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1f3b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3b48:
    // 0x1f3b48: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f3b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f3b4c:
    // 0x1f3b4c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1f3b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1f3b50:
    // 0x1f3b50: 0xafb200b4  sw          $s2, 0xB4($sp)
    ctx->pc = 0x1f3b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 18));
label_1f3b54:
    // 0x1f3b54: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1f3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_1f3b58:
    // 0x1f3b58: 0x8e690000  lw          $t1, 0x0($s3)
    ctx->pc = 0x1f3b58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f3b5c:
    // 0x1f3b5c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1f3b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1f3b60:
    // 0x1f3b60: 0x3c91821  addu        $v1, $fp, $t1
    ctx->pc = 0x1f3b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
label_1f3b64:
    // 0x1f3b64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3b68:
    // 0x1f3b68: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1f3b68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1f3b6c:
    // 0x1f3b6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3b70:
    // 0x1f3b70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3b74:
    // 0x1f3b74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3b78:
    // 0x1f3b78: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1f3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_1f3b7c:
    // 0x1f3b7c: 0x8c4209ac  lw          $v0, 0x9AC($v0)
    ctx->pc = 0x1f3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2476)));
label_1f3b80:
    // 0x1f3b80: 0x40f809  jalr        $v0
label_1f3b84:
    if (ctx->pc == 0x1F3B84u) {
        ctx->pc = 0x1F3B84u;
            // 0x1f3b84: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3B88u;
        goto label_1f3b88;
    }
    ctx->pc = 0x1F3B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3B88u);
        ctx->pc = 0x1F3B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B80u;
            // 0x1f3b84: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F3B88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B88u; }
            if (ctx->pc != 0x1F3B88u) { return; }
        }
        }
    }
    ctx->pc = 0x1F3B88u;
label_1f3b88:
    // 0x1f3b88: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f3b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f3b8c:
    // 0x1f3b8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f3b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f3b90:
    // 0x1f3b90: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1f3b90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f3b94:
    // 0x1f3b94: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
label_1f3b98:
    if (ctx->pc == 0x1F3B98u) {
        ctx->pc = 0x1F3B98u;
            // 0x1f3b98: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x1F3B9Cu;
        goto label_1f3b9c;
    }
    ctx->pc = 0x1F3B94u;
    {
        const bool branch_taken_0x1f3b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B94u;
            // 0x1f3b98: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b94) {
            ctx->pc = 0x1F3A88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f3a88;
        }
    }
    ctx->pc = 0x1F3B9Cu;
label_1f3b9c:
    // 0x1f3b9c: 0x0  nop
    ctx->pc = 0x1f3b9cu;
    // NOP
label_1f3ba0:
    // 0x1f3ba0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f3ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f3ba4:
    // 0x1f3ba4: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1f3ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1f3ba8:
    // 0x1f3ba8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1f3ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_1f3bac:
    // 0x1f3bac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f3bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f3bb0:
    // 0x1f3bb0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f3bb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f3bb4:
    // 0x1f3bb4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f3bb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f3bb8:
    // 0x1f3bb8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f3bb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f3bbc:
    // 0x1f3bbc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f3bbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f3bc0:
    // 0x1f3bc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f3bc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f3bc4:
    // 0x1f3bc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f3bc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f3bc8:
    // 0x1f3bc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f3bc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f3bcc:
    // 0x1f3bcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f3bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3bd0:
    // 0x1f3bd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f3bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3bd4:
    // 0x1f3bd4: 0x3e00008  jr          $ra
label_1f3bd8:
    if (ctx->pc == 0x1F3BD8u) {
        ctx->pc = 0x1F3BD8u;
            // 0x1f3bd8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x1F3BDCu;
        goto label_1f3bdc;
    }
    ctx->pc = 0x1F3BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3BD4u;
            // 0x1f3bd8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3BDCu;
label_1f3bdc:
    // 0x1f3bdc: 0x0  nop
    ctx->pc = 0x1f3bdcu;
    // NOP
}
