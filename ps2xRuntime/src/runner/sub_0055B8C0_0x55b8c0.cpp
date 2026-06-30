#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055B8C0
// Address: 0x55b8c0 - 0x55bd40
void sub_0055B8C0_0x55b8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055B8C0_0x55b8c0");
#endif

    switch (ctx->pc) {
        case 0x55b8c0u: goto label_55b8c0;
        case 0x55b8c4u: goto label_55b8c4;
        case 0x55b8c8u: goto label_55b8c8;
        case 0x55b8ccu: goto label_55b8cc;
        case 0x55b8d0u: goto label_55b8d0;
        case 0x55b8d4u: goto label_55b8d4;
        case 0x55b8d8u: goto label_55b8d8;
        case 0x55b8dcu: goto label_55b8dc;
        case 0x55b8e0u: goto label_55b8e0;
        case 0x55b8e4u: goto label_55b8e4;
        case 0x55b8e8u: goto label_55b8e8;
        case 0x55b8ecu: goto label_55b8ec;
        case 0x55b8f0u: goto label_55b8f0;
        case 0x55b8f4u: goto label_55b8f4;
        case 0x55b8f8u: goto label_55b8f8;
        case 0x55b8fcu: goto label_55b8fc;
        case 0x55b900u: goto label_55b900;
        case 0x55b904u: goto label_55b904;
        case 0x55b908u: goto label_55b908;
        case 0x55b90cu: goto label_55b90c;
        case 0x55b910u: goto label_55b910;
        case 0x55b914u: goto label_55b914;
        case 0x55b918u: goto label_55b918;
        case 0x55b91cu: goto label_55b91c;
        case 0x55b920u: goto label_55b920;
        case 0x55b924u: goto label_55b924;
        case 0x55b928u: goto label_55b928;
        case 0x55b92cu: goto label_55b92c;
        case 0x55b930u: goto label_55b930;
        case 0x55b934u: goto label_55b934;
        case 0x55b938u: goto label_55b938;
        case 0x55b93cu: goto label_55b93c;
        case 0x55b940u: goto label_55b940;
        case 0x55b944u: goto label_55b944;
        case 0x55b948u: goto label_55b948;
        case 0x55b94cu: goto label_55b94c;
        case 0x55b950u: goto label_55b950;
        case 0x55b954u: goto label_55b954;
        case 0x55b958u: goto label_55b958;
        case 0x55b95cu: goto label_55b95c;
        case 0x55b960u: goto label_55b960;
        case 0x55b964u: goto label_55b964;
        case 0x55b968u: goto label_55b968;
        case 0x55b96cu: goto label_55b96c;
        case 0x55b970u: goto label_55b970;
        case 0x55b974u: goto label_55b974;
        case 0x55b978u: goto label_55b978;
        case 0x55b97cu: goto label_55b97c;
        case 0x55b980u: goto label_55b980;
        case 0x55b984u: goto label_55b984;
        case 0x55b988u: goto label_55b988;
        case 0x55b98cu: goto label_55b98c;
        case 0x55b990u: goto label_55b990;
        case 0x55b994u: goto label_55b994;
        case 0x55b998u: goto label_55b998;
        case 0x55b99cu: goto label_55b99c;
        case 0x55b9a0u: goto label_55b9a0;
        case 0x55b9a4u: goto label_55b9a4;
        case 0x55b9a8u: goto label_55b9a8;
        case 0x55b9acu: goto label_55b9ac;
        case 0x55b9b0u: goto label_55b9b0;
        case 0x55b9b4u: goto label_55b9b4;
        case 0x55b9b8u: goto label_55b9b8;
        case 0x55b9bcu: goto label_55b9bc;
        case 0x55b9c0u: goto label_55b9c0;
        case 0x55b9c4u: goto label_55b9c4;
        case 0x55b9c8u: goto label_55b9c8;
        case 0x55b9ccu: goto label_55b9cc;
        case 0x55b9d0u: goto label_55b9d0;
        case 0x55b9d4u: goto label_55b9d4;
        case 0x55b9d8u: goto label_55b9d8;
        case 0x55b9dcu: goto label_55b9dc;
        case 0x55b9e0u: goto label_55b9e0;
        case 0x55b9e4u: goto label_55b9e4;
        case 0x55b9e8u: goto label_55b9e8;
        case 0x55b9ecu: goto label_55b9ec;
        case 0x55b9f0u: goto label_55b9f0;
        case 0x55b9f4u: goto label_55b9f4;
        case 0x55b9f8u: goto label_55b9f8;
        case 0x55b9fcu: goto label_55b9fc;
        case 0x55ba00u: goto label_55ba00;
        case 0x55ba04u: goto label_55ba04;
        case 0x55ba08u: goto label_55ba08;
        case 0x55ba0cu: goto label_55ba0c;
        case 0x55ba10u: goto label_55ba10;
        case 0x55ba14u: goto label_55ba14;
        case 0x55ba18u: goto label_55ba18;
        case 0x55ba1cu: goto label_55ba1c;
        case 0x55ba20u: goto label_55ba20;
        case 0x55ba24u: goto label_55ba24;
        case 0x55ba28u: goto label_55ba28;
        case 0x55ba2cu: goto label_55ba2c;
        case 0x55ba30u: goto label_55ba30;
        case 0x55ba34u: goto label_55ba34;
        case 0x55ba38u: goto label_55ba38;
        case 0x55ba3cu: goto label_55ba3c;
        case 0x55ba40u: goto label_55ba40;
        case 0x55ba44u: goto label_55ba44;
        case 0x55ba48u: goto label_55ba48;
        case 0x55ba4cu: goto label_55ba4c;
        case 0x55ba50u: goto label_55ba50;
        case 0x55ba54u: goto label_55ba54;
        case 0x55ba58u: goto label_55ba58;
        case 0x55ba5cu: goto label_55ba5c;
        case 0x55ba60u: goto label_55ba60;
        case 0x55ba64u: goto label_55ba64;
        case 0x55ba68u: goto label_55ba68;
        case 0x55ba6cu: goto label_55ba6c;
        case 0x55ba70u: goto label_55ba70;
        case 0x55ba74u: goto label_55ba74;
        case 0x55ba78u: goto label_55ba78;
        case 0x55ba7cu: goto label_55ba7c;
        case 0x55ba80u: goto label_55ba80;
        case 0x55ba84u: goto label_55ba84;
        case 0x55ba88u: goto label_55ba88;
        case 0x55ba8cu: goto label_55ba8c;
        case 0x55ba90u: goto label_55ba90;
        case 0x55ba94u: goto label_55ba94;
        case 0x55ba98u: goto label_55ba98;
        case 0x55ba9cu: goto label_55ba9c;
        case 0x55baa0u: goto label_55baa0;
        case 0x55baa4u: goto label_55baa4;
        case 0x55baa8u: goto label_55baa8;
        case 0x55baacu: goto label_55baac;
        case 0x55bab0u: goto label_55bab0;
        case 0x55bab4u: goto label_55bab4;
        case 0x55bab8u: goto label_55bab8;
        case 0x55babcu: goto label_55babc;
        case 0x55bac0u: goto label_55bac0;
        case 0x55bac4u: goto label_55bac4;
        case 0x55bac8u: goto label_55bac8;
        case 0x55baccu: goto label_55bacc;
        case 0x55bad0u: goto label_55bad0;
        case 0x55bad4u: goto label_55bad4;
        case 0x55bad8u: goto label_55bad8;
        case 0x55badcu: goto label_55badc;
        case 0x55bae0u: goto label_55bae0;
        case 0x55bae4u: goto label_55bae4;
        case 0x55bae8u: goto label_55bae8;
        case 0x55baecu: goto label_55baec;
        case 0x55baf0u: goto label_55baf0;
        case 0x55baf4u: goto label_55baf4;
        case 0x55baf8u: goto label_55baf8;
        case 0x55bafcu: goto label_55bafc;
        case 0x55bb00u: goto label_55bb00;
        case 0x55bb04u: goto label_55bb04;
        case 0x55bb08u: goto label_55bb08;
        case 0x55bb0cu: goto label_55bb0c;
        case 0x55bb10u: goto label_55bb10;
        case 0x55bb14u: goto label_55bb14;
        case 0x55bb18u: goto label_55bb18;
        case 0x55bb1cu: goto label_55bb1c;
        case 0x55bb20u: goto label_55bb20;
        case 0x55bb24u: goto label_55bb24;
        case 0x55bb28u: goto label_55bb28;
        case 0x55bb2cu: goto label_55bb2c;
        case 0x55bb30u: goto label_55bb30;
        case 0x55bb34u: goto label_55bb34;
        case 0x55bb38u: goto label_55bb38;
        case 0x55bb3cu: goto label_55bb3c;
        case 0x55bb40u: goto label_55bb40;
        case 0x55bb44u: goto label_55bb44;
        case 0x55bb48u: goto label_55bb48;
        case 0x55bb4cu: goto label_55bb4c;
        case 0x55bb50u: goto label_55bb50;
        case 0x55bb54u: goto label_55bb54;
        case 0x55bb58u: goto label_55bb58;
        case 0x55bb5cu: goto label_55bb5c;
        case 0x55bb60u: goto label_55bb60;
        case 0x55bb64u: goto label_55bb64;
        case 0x55bb68u: goto label_55bb68;
        case 0x55bb6cu: goto label_55bb6c;
        case 0x55bb70u: goto label_55bb70;
        case 0x55bb74u: goto label_55bb74;
        case 0x55bb78u: goto label_55bb78;
        case 0x55bb7cu: goto label_55bb7c;
        case 0x55bb80u: goto label_55bb80;
        case 0x55bb84u: goto label_55bb84;
        case 0x55bb88u: goto label_55bb88;
        case 0x55bb8cu: goto label_55bb8c;
        case 0x55bb90u: goto label_55bb90;
        case 0x55bb94u: goto label_55bb94;
        case 0x55bb98u: goto label_55bb98;
        case 0x55bb9cu: goto label_55bb9c;
        case 0x55bba0u: goto label_55bba0;
        case 0x55bba4u: goto label_55bba4;
        case 0x55bba8u: goto label_55bba8;
        case 0x55bbacu: goto label_55bbac;
        case 0x55bbb0u: goto label_55bbb0;
        case 0x55bbb4u: goto label_55bbb4;
        case 0x55bbb8u: goto label_55bbb8;
        case 0x55bbbcu: goto label_55bbbc;
        case 0x55bbc0u: goto label_55bbc0;
        case 0x55bbc4u: goto label_55bbc4;
        case 0x55bbc8u: goto label_55bbc8;
        case 0x55bbccu: goto label_55bbcc;
        case 0x55bbd0u: goto label_55bbd0;
        case 0x55bbd4u: goto label_55bbd4;
        case 0x55bbd8u: goto label_55bbd8;
        case 0x55bbdcu: goto label_55bbdc;
        case 0x55bbe0u: goto label_55bbe0;
        case 0x55bbe4u: goto label_55bbe4;
        case 0x55bbe8u: goto label_55bbe8;
        case 0x55bbecu: goto label_55bbec;
        case 0x55bbf0u: goto label_55bbf0;
        case 0x55bbf4u: goto label_55bbf4;
        case 0x55bbf8u: goto label_55bbf8;
        case 0x55bbfcu: goto label_55bbfc;
        case 0x55bc00u: goto label_55bc00;
        case 0x55bc04u: goto label_55bc04;
        case 0x55bc08u: goto label_55bc08;
        case 0x55bc0cu: goto label_55bc0c;
        case 0x55bc10u: goto label_55bc10;
        case 0x55bc14u: goto label_55bc14;
        case 0x55bc18u: goto label_55bc18;
        case 0x55bc1cu: goto label_55bc1c;
        case 0x55bc20u: goto label_55bc20;
        case 0x55bc24u: goto label_55bc24;
        case 0x55bc28u: goto label_55bc28;
        case 0x55bc2cu: goto label_55bc2c;
        case 0x55bc30u: goto label_55bc30;
        case 0x55bc34u: goto label_55bc34;
        case 0x55bc38u: goto label_55bc38;
        case 0x55bc3cu: goto label_55bc3c;
        case 0x55bc40u: goto label_55bc40;
        case 0x55bc44u: goto label_55bc44;
        case 0x55bc48u: goto label_55bc48;
        case 0x55bc4cu: goto label_55bc4c;
        case 0x55bc50u: goto label_55bc50;
        case 0x55bc54u: goto label_55bc54;
        case 0x55bc58u: goto label_55bc58;
        case 0x55bc5cu: goto label_55bc5c;
        case 0x55bc60u: goto label_55bc60;
        case 0x55bc64u: goto label_55bc64;
        case 0x55bc68u: goto label_55bc68;
        case 0x55bc6cu: goto label_55bc6c;
        case 0x55bc70u: goto label_55bc70;
        case 0x55bc74u: goto label_55bc74;
        case 0x55bc78u: goto label_55bc78;
        case 0x55bc7cu: goto label_55bc7c;
        case 0x55bc80u: goto label_55bc80;
        case 0x55bc84u: goto label_55bc84;
        case 0x55bc88u: goto label_55bc88;
        case 0x55bc8cu: goto label_55bc8c;
        case 0x55bc90u: goto label_55bc90;
        case 0x55bc94u: goto label_55bc94;
        case 0x55bc98u: goto label_55bc98;
        case 0x55bc9cu: goto label_55bc9c;
        case 0x55bca0u: goto label_55bca0;
        case 0x55bca4u: goto label_55bca4;
        case 0x55bca8u: goto label_55bca8;
        case 0x55bcacu: goto label_55bcac;
        case 0x55bcb0u: goto label_55bcb0;
        case 0x55bcb4u: goto label_55bcb4;
        case 0x55bcb8u: goto label_55bcb8;
        case 0x55bcbcu: goto label_55bcbc;
        case 0x55bcc0u: goto label_55bcc0;
        case 0x55bcc4u: goto label_55bcc4;
        case 0x55bcc8u: goto label_55bcc8;
        case 0x55bcccu: goto label_55bccc;
        case 0x55bcd0u: goto label_55bcd0;
        case 0x55bcd4u: goto label_55bcd4;
        case 0x55bcd8u: goto label_55bcd8;
        case 0x55bcdcu: goto label_55bcdc;
        case 0x55bce0u: goto label_55bce0;
        case 0x55bce4u: goto label_55bce4;
        case 0x55bce8u: goto label_55bce8;
        case 0x55bcecu: goto label_55bcec;
        case 0x55bcf0u: goto label_55bcf0;
        case 0x55bcf4u: goto label_55bcf4;
        case 0x55bcf8u: goto label_55bcf8;
        case 0x55bcfcu: goto label_55bcfc;
        case 0x55bd00u: goto label_55bd00;
        case 0x55bd04u: goto label_55bd04;
        case 0x55bd08u: goto label_55bd08;
        case 0x55bd0cu: goto label_55bd0c;
        case 0x55bd10u: goto label_55bd10;
        case 0x55bd14u: goto label_55bd14;
        case 0x55bd18u: goto label_55bd18;
        case 0x55bd1cu: goto label_55bd1c;
        case 0x55bd20u: goto label_55bd20;
        case 0x55bd24u: goto label_55bd24;
        case 0x55bd28u: goto label_55bd28;
        case 0x55bd2cu: goto label_55bd2c;
        case 0x55bd30u: goto label_55bd30;
        case 0x55bd34u: goto label_55bd34;
        case 0x55bd38u: goto label_55bd38;
        case 0x55bd3cu: goto label_55bd3c;
        default: break;
    }

    ctx->pc = 0x55b8c0u;

label_55b8c0:
    // 0x55b8c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x55b8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_55b8c4:
    // 0x55b8c4: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x55b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
label_55b8c8:
    // 0x55b8c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55b8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b8cc:
    // 0x55b8cc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x55b8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_55b8d0:
    // 0x55b8d0: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x55b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_55b8d4:
    // 0x55b8d4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x55b8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_55b8d8:
    // 0x55b8d8: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x55b8d8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_55b8dc:
    // 0x55b8dc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x55b8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_55b8e0:
    // 0x55b8e0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x55b8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_55b8e4:
    // 0x55b8e4: 0x3c0641c0  lui         $a2, 0x41C0
    ctx->pc = 0x55b8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16832 << 16));
label_55b8e8:
    // 0x55b8e8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x55b8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_55b8ec:
    // 0x55b8ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x55b8ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_55b8f0:
    // 0x55b8f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x55b8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_55b8f4:
    // 0x55b8f4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x55b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_55b8f8:
    // 0x55b8f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x55b8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_55b8fc:
    // 0x55b8fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x55b8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_55b900:
    // 0x55b900: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x55b900u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_55b904:
    // 0x55b904: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x55b904u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_55b908:
    // 0x55b908: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x55b908u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_55b90c:
    // 0x55b90c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x55b90cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_55b910:
    // 0x55b910: 0x26319bc0  addiu       $s1, $s1, -0x6440
    ctx->pc = 0x55b910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941632));
label_55b914:
    // 0x55b914: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x55b914u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_55b918:
    // 0x55b918: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x55b918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
label_55b91c:
    // 0x55b91c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x55b91cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_55b920:
    // 0x55b920: 0x460e0542  mul.s       $f21, $f0, $f14
    ctx->pc = 0x55b920u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
label_55b924:
    // 0x55b924: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x55b924u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b928:
    // 0x55b928: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55b928u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55b92c:
    // 0x55b92c: 0x460e0502  mul.s       $f20, $f0, $f14
    ctx->pc = 0x55b92cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
label_55b930:
    // 0x55b930: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x55b930u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_55b934:
    // 0x55b934: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x55b934u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_55b938:
    // 0x55b938: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x55b938u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
label_55b93c:
    // 0x55b93c: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x55b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_55b940:
    // 0x55b940: 0x34454dd3  ori         $a1, $v0, 0x4DD3
    ctx->pc = 0x55b940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_55b944:
    // 0x55b944: 0x3010  mfhi        $a2
    ctx->pc = 0x55b944u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_55b948:
    // 0x55b948: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x55b948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_55b94c:
    // 0x55b94c: 0xa40019  multu       $a1, $a0
    ctx->pc = 0x55b94cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55b950:
    // 0x55b950: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x55b950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_55b954:
    // 0x55b954: 0x30d6ffff  andi        $s6, $a2, 0xFFFF
    ctx->pc = 0x55b954u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_55b958:
    // 0x55b958: 0x2010  mfhi        $a0
    ctx->pc = 0x55b958u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_55b95c:
    // 0x55b95c: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x55b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_55b960:
    // 0x55b960: 0x440019  multu       $v0, $a0
    ctx->pc = 0x55b960u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55b964:
    // 0x55b964: 0x1010  mfhi        $v0
    ctx->pc = 0x55b964u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55b968:
    // 0x55b968: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x55b968u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_55b96c:
    // 0x55b96c: 0x2a942  srl         $s5, $v0, 5
    ctx->pc = 0x55b96cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_55b970:
    // 0x55b970: 0x2aa10100  slti        $at, $s5, 0x100
    ctx->pc = 0x55b970u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)256) ? 1 : 0);
label_55b974:
    // 0x55b974: 0x1010  mfhi        $v0
    ctx->pc = 0x55b974u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55b978:
    // 0x55b978: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_55b97c:
    if (ctx->pc == 0x55B97Cu) {
        ctx->pc = 0x55B97Cu;
            // 0x55b97c: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x55B980u;
        goto label_55b980;
    }
    ctx->pc = 0x55B978u;
    {
        const bool branch_taken_0x55b978 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x55B97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55B978u;
            // 0x55b97c: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55b978) {
            ctx->pc = 0x55B98Cu;
            goto label_55b98c;
        }
    }
    ctx->pc = 0x55B980u;
label_55b980:
    // 0x55b980: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x55b980u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_55b984:
    // 0x55b984: 0x641603e7  daddiu      $s6, $zero, 0x3E7
    ctx->pc = 0x55b984u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)999);
label_55b988:
    // 0x55b988: 0x6412003b  daddiu      $s2, $zero, 0x3B
    ctx->pc = 0x55b988u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)59);
label_55b98c:
    // 0x55b98c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x55b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_55b990:
    // 0x55b990: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x55b990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_55b994:
    // 0x55b994: 0x8c7389e0  lw          $s3, -0x7620($v1)
    ctx->pc = 0x55b994u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_55b998:
    // 0x55b998: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x55b998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_55b99c:
    // 0x55b99c: 0xc0506ac  jal         func_141AB0
label_55b9a0:
    if (ctx->pc == 0x55B9A0u) {
        ctx->pc = 0x55B9A0u;
            // 0x55b9a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55B9A4u;
        goto label_55b9a4;
    }
    ctx->pc = 0x55B99Cu;
    SET_GPR_U32(ctx, 31, 0x55B9A4u);
    ctx->pc = 0x55B9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B99Cu;
            // 0x55b9a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B9A4u; }
        if (ctx->pc != 0x55B9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B9A4u; }
        if (ctx->pc != 0x55B9A4u) { return; }
    }
    ctx->pc = 0x55B9A4u;
label_55b9a4:
    // 0x55b9a4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x55b9a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_55b9a8:
    // 0x55b9a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x55b9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55b9ac:
    // 0x55b9ac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55b9acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_55b9b0:
    // 0x55b9b0: 0x320f809  jalr        $t9
label_55b9b4:
    if (ctx->pc == 0x55B9B4u) {
        ctx->pc = 0x55B9B4u;
            // 0x55b9b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x55B9B8u;
        goto label_55b9b8;
    }
    ctx->pc = 0x55B9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55B9B8u);
        ctx->pc = 0x55B9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55B9B0u;
            // 0x55b9b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55B9B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55B9B8u; }
            if (ctx->pc != 0x55B9B8u) { return; }
        }
        }
    }
    ctx->pc = 0x55B9B8u;
label_55b9b8:
    // 0x55b9b8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x55b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_55b9bc:
    // 0x55b9bc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x55b9bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_55b9c0:
    // 0x55b9c0: 0x32b500ff  andi        $s5, $s5, 0xFF
    ctx->pc = 0x55b9c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_55b9c4:
    // 0x55b9c4: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x55b9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_55b9c8:
    // 0x55b9c8: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x55b9c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55b9cc:
    // 0x55b9cc: 0x152fc2  srl         $a1, $s5, 31
    ctx->pc = 0x55b9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
label_55b9d0:
    // 0x55b9d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55b9d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b9d4:
    // 0x55b9d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55b9d8:
    // 0x55b9d8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55b9d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55b9dc:
    // 0x55b9dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x55b9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55b9e0:
    // 0x55b9e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55b9e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55b9e4:
    // 0x55b9e4: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x55b9e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55b9e8:
    // 0x55b9e8: 0x1810  mfhi        $v1
    ctx->pc = 0x55b9e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_55b9ec:
    // 0x55b9ec: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x55b9ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_55b9f0:
    // 0x55b9f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x55b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_55b9f4:
    // 0x55b9f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55b9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b9f8:
    // 0x55b9f8: 0x2463002f  addiu       $v1, $v1, 0x2F
    ctx->pc = 0x55b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 47));
label_55b9fc:
    // 0x55b9fc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55b9fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55ba00:
    // 0x55ba00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x55ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_55ba04:
    // 0x55ba04: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x55ba04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_55ba08:
    // 0x55ba08: 0x4614bd00  add.s       $f20, $f23, $f20
    ctx->pc = 0x55ba08u;
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
label_55ba0c:
    // 0x55ba0c: 0x4615c380  add.s       $f14, $f24, $f21
    ctx->pc = 0x55ba0cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55ba10:
    // 0x55ba10: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x55ba10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_55ba14:
    // 0x55ba14: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x55ba14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_55ba18:
    // 0x55ba18: 0x4600b486  mov.s       $f18, $f22
    ctx->pc = 0x55ba18u;
    ctx->f[18] = FPU_MOV_S(ctx->f[22]);
label_55ba1c:
    // 0x55ba1c: 0xc0bc284  jal         func_2F0A10
label_55ba20:
    if (ctx->pc == 0x55BA20u) {
        ctx->pc = 0x55BA20u;
            // 0x55ba20: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x55BA24u;
        goto label_55ba24;
    }
    ctx->pc = 0x55BA1Cu;
    SET_GPR_U32(ctx, 31, 0x55BA24u);
    ctx->pc = 0x55BA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BA1Cu;
            // 0x55ba20: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BA24u; }
        if (ctx->pc != 0x55BA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BA24u; }
        if (ctx->pc != 0x55BA24u) { return; }
    }
    ctx->pc = 0x55BA24u;
label_55ba24:
    // 0x55ba24: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x55ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_55ba28:
    // 0x55ba28: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x55ba28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_55ba2c:
    // 0x55ba2c: 0x2a2001a  div         $zero, $s5, $v0
    ctx->pc = 0x55ba2cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_55ba30:
    // 0x55ba30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55ba30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55ba34:
    // 0x55ba34: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x55ba34u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55ba38:
    // 0x55ba38: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x55ba38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55ba3c:
    // 0x55ba3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55ba3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55ba40:
    // 0x55ba40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55ba40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55ba44:
    // 0x55ba44: 0x0  nop
    ctx->pc = 0x55ba44u;
    // NOP
label_55ba48:
    // 0x55ba48: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55ba48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55ba4c:
    // 0x55ba4c: 0x4615c380  add.s       $f14, $f24, $f21
    ctx->pc = 0x55ba4cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55ba50:
    // 0x55ba50: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x55ba50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_55ba54:
    // 0x55ba54: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x55ba54u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_55ba58:
    // 0x55ba58: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x55ba58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_55ba5c:
    // 0x55ba5c: 0x4600b486  mov.s       $f18, $f22
    ctx->pc = 0x55ba5cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[22]);
label_55ba60:
    // 0x55ba60: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x55ba60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55ba64:
    // 0x55ba64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55ba64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55ba68:
    // 0x55ba68: 0x0  nop
    ctx->pc = 0x55ba68u;
    // NOP
label_55ba6c:
    // 0x55ba6c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55ba6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55ba70:
    // 0x55ba70: 0x1010  mfhi        $v0
    ctx->pc = 0x55ba70u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55ba74:
    // 0x55ba74: 0x2442002f  addiu       $v0, $v0, 0x2F
    ctx->pc = 0x55ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
label_55ba78:
    // 0x55ba78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x55ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_55ba7c:
    // 0x55ba7c: 0xc0bc284  jal         func_2F0A10
label_55ba80:
    if (ctx->pc == 0x55BA80u) {
        ctx->pc = 0x55BA80u;
            // 0x55ba80: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x55BA84u;
        goto label_55ba84;
    }
    ctx->pc = 0x55BA7Cu;
    SET_GPR_U32(ctx, 31, 0x55BA84u);
    ctx->pc = 0x55BA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BA7Cu;
            // 0x55ba80: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BA84u; }
        if (ctx->pc != 0x55BA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BA84u; }
        if (ctx->pc != 0x55BA84u) { return; }
    }
    ctx->pc = 0x55BA84u;
label_55ba84:
    // 0x55ba84: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x55ba84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_55ba88:
    // 0x55ba88: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x55ba88u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55ba8c:
    // 0x55ba8c: 0x26350170  addiu       $s5, $s1, 0x170
    ctx->pc = 0x55ba8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_55ba90:
    // 0x55ba90: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x55ba90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55ba94:
    // 0x55ba94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55ba94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55ba98:
    // 0x55ba98: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x55ba98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55ba9c:
    // 0x55ba9c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x55ba9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55baa0:
    // 0x55baa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55baa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55baa4:
    // 0x55baa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55baa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55baa8:
    // 0x55baa8: 0x0  nop
    ctx->pc = 0x55baa8u;
    // NOP
label_55baac:
    // 0x55baac: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55baacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55bab0:
    // 0x55bab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55bab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55bab4:
    // 0x55bab4: 0x0  nop
    ctx->pc = 0x55bab4u;
    // NOP
label_55bab8:
    // 0x55bab8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55bab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55babc:
    // 0x55babc: 0xc6210178  lwc1        $f1, 0x178($s1)
    ctx->pc = 0x55babcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55bac0:
    // 0x55bac0: 0xc620017c  lwc1        $f0, 0x17C($s1)
    ctx->pc = 0x55bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55bac4:
    // 0x55bac4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x55bac4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_55bac8:
    // 0x55bac8: 0x4601c380  add.s       $f14, $f24, $f1
    ctx->pc = 0x55bac8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
label_55bacc:
    // 0x55bacc: 0x4600bbc0  add.s       $f15, $f23, $f0
    ctx->pc = 0x55baccu;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_55bad0:
    // 0x55bad0: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x55bad0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_55bad4:
    // 0x55bad4: 0xc0bc284  jal         func_2F0A10
label_55bad8:
    if (ctx->pc == 0x55BAD8u) {
        ctx->pc = 0x55BAD8u;
            // 0x55bad8: 0x4600b486  mov.s       $f18, $f22 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x55BADCu;
        goto label_55badc;
    }
    ctx->pc = 0x55BAD4u;
    SET_GPR_U32(ctx, 31, 0x55BADCu);
    ctx->pc = 0x55BAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BAD4u;
            // 0x55bad8: 0x4600b486  mov.s       $f18, $f22 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BADCu; }
        if (ctx->pc != 0x55BADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BADCu; }
        if (ctx->pc != 0x55BADCu) { return; }
    }
    ctx->pc = 0x55BADCu;
label_55badc:
    // 0x55badc: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x55badcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55bae0:
    // 0x55bae0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x55bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_55bae4:
    // 0x55bae4: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x55bae4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_55bae8:
    // 0x55bae8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x55bae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_55baec:
    // 0x55baec: 0x520018  mult        $zero, $v0, $s2
    ctx->pc = 0x55baecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55baf0:
    // 0x55baf0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x55baf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_55baf4:
    // 0x55baf4: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x55baf4u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_55baf8:
    // 0x55baf8: 0x122fc2  srl         $a1, $s2, 31
    ctx->pc = 0x55baf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_55bafc:
    // 0x55bafc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55bafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55bb00:
    // 0x55bb00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x55bb00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55bb04:
    // 0x55bb04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55bb04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55bb08:
    // 0x55bb08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55bb08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55bb0c:
    // 0x55bb0c: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x55bb0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55bb10:
    // 0x55bb10: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55bb10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55bb14:
    // 0x55bb14: 0x1810  mfhi        $v1
    ctx->pc = 0x55bb14u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_55bb18:
    // 0x55bb18: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x55bb18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_55bb1c:
    // 0x55bb1c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x55bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_55bb20:
    // 0x55bb20: 0x2463002f  addiu       $v1, $v1, 0x2F
    ctx->pc = 0x55bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 47));
label_55bb24:
    // 0x55bb24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x55bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_55bb28:
    // 0x55bb28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55bb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55bb2c:
    // 0x55bb2c: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x55bb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_55bb30:
    // 0x55bb30: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55bb30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55bb34:
    // 0x55bb34: 0x4615c380  add.s       $f14, $f24, $f21
    ctx->pc = 0x55bb34u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55bb38:
    // 0x55bb38: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x55bb38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_55bb3c:
    // 0x55bb3c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x55bb3cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_55bb40:
    // 0x55bb40: 0x4600b486  mov.s       $f18, $f22
    ctx->pc = 0x55bb40u;
    ctx->f[18] = FPU_MOV_S(ctx->f[22]);
label_55bb44:
    // 0x55bb44: 0xc0bc284  jal         func_2F0A10
label_55bb48:
    if (ctx->pc == 0x55BB48u) {
        ctx->pc = 0x55BB48u;
            // 0x55bb48: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x55BB4Cu;
        goto label_55bb4c;
    }
    ctx->pc = 0x55BB44u;
    SET_GPR_U32(ctx, 31, 0x55BB4Cu);
    ctx->pc = 0x55BB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BB44u;
            // 0x55bb48: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BB4Cu; }
        if (ctx->pc != 0x55BB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BB4Cu; }
        if (ctx->pc != 0x55BB4Cu) { return; }
    }
    ctx->pc = 0x55BB4Cu;
label_55bb4c:
    // 0x55bb4c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x55bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_55bb50:
    // 0x55bb50: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x55bb50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_55bb54:
    // 0x55bb54: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x55bb54u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_55bb58:
    // 0x55bb58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55bb5c:
    // 0x55bb5c: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x55bb5cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55bb60:
    // 0x55bb60: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x55bb60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55bb64:
    // 0x55bb64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55bb64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55bb68:
    // 0x55bb68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55bb68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55bb6c:
    // 0x55bb6c: 0x0  nop
    ctx->pc = 0x55bb6cu;
    // NOP
label_55bb70:
    // 0x55bb70: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55bb70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55bb74:
    // 0x55bb74: 0x4615c380  add.s       $f14, $f24, $f21
    ctx->pc = 0x55bb74u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55bb78:
    // 0x55bb78: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x55bb78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_55bb7c:
    // 0x55bb7c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x55bb7cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_55bb80:
    // 0x55bb80: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x55bb80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_55bb84:
    // 0x55bb84: 0x4600b486  mov.s       $f18, $f22
    ctx->pc = 0x55bb84u;
    ctx->f[18] = FPU_MOV_S(ctx->f[22]);
label_55bb88:
    // 0x55bb88: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x55bb88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55bb8c:
    // 0x55bb8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55bb8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55bb90:
    // 0x55bb90: 0x0  nop
    ctx->pc = 0x55bb90u;
    // NOP
label_55bb94:
    // 0x55bb94: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55bb94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55bb98:
    // 0x55bb98: 0x1010  mfhi        $v0
    ctx->pc = 0x55bb98u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55bb9c:
    // 0x55bb9c: 0x2442002f  addiu       $v0, $v0, 0x2F
    ctx->pc = 0x55bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
label_55bba0:
    // 0x55bba0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x55bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_55bba4:
    // 0x55bba4: 0xc0bc284  jal         func_2F0A10
label_55bba8:
    if (ctx->pc == 0x55BBA8u) {
        ctx->pc = 0x55BBA8u;
            // 0x55bba8: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x55BBACu;
        goto label_55bbac;
    }
    ctx->pc = 0x55BBA4u;
    SET_GPR_U32(ctx, 31, 0x55BBACu);
    ctx->pc = 0x55BBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BBA4u;
            // 0x55bba8: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BBACu; }
        if (ctx->pc != 0x55BBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BBACu; }
        if (ctx->pc != 0x55BBACu) { return; }
    }
    ctx->pc = 0x55BBACu;
label_55bbac:
    // 0x55bbac: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x55bbacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_55bbb0:
    // 0x55bbb0: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x55bbb0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55bbb4:
    // 0x55bbb4: 0x26320180  addiu       $s2, $s1, 0x180
    ctx->pc = 0x55bbb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_55bbb8:
    // 0x55bbb8: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x55bbb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55bbbc:
    // 0x55bbbc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55bbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55bbc0:
    // 0x55bbc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x55bbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55bbc4:
    // 0x55bbc4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x55bbc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55bbc8:
    // 0x55bbc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55bbc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55bbcc:
    // 0x55bbcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55bbccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55bbd0:
    // 0x55bbd0: 0x0  nop
    ctx->pc = 0x55bbd0u;
    // NOP
label_55bbd4:
    // 0x55bbd4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55bbd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55bbd8:
    // 0x55bbd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55bbd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55bbdc:
    // 0x55bbdc: 0x0  nop
    ctx->pc = 0x55bbdcu;
    // NOP
label_55bbe0:
    // 0x55bbe0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55bbe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55bbe4:
    // 0x55bbe4: 0xc6210188  lwc1        $f1, 0x188($s1)
    ctx->pc = 0x55bbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55bbe8:
    // 0x55bbe8: 0xc620018c  lwc1        $f0, 0x18C($s1)
    ctx->pc = 0x55bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55bbec:
    // 0x55bbec: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x55bbecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_55bbf0:
    // 0x55bbf0: 0x4601c380  add.s       $f14, $f24, $f1
    ctx->pc = 0x55bbf0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
label_55bbf4:
    // 0x55bbf4: 0x4600bbc0  add.s       $f15, $f23, $f0
    ctx->pc = 0x55bbf4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_55bbf8:
    // 0x55bbf8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x55bbf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_55bbfc:
    // 0x55bbfc: 0xc0bc284  jal         func_2F0A10
label_55bc00:
    if (ctx->pc == 0x55BC00u) {
        ctx->pc = 0x55BC00u;
            // 0x55bc00: 0x4600b486  mov.s       $f18, $f22 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x55BC04u;
        goto label_55bc04;
    }
    ctx->pc = 0x55BBFCu;
    SET_GPR_U32(ctx, 31, 0x55BC04u);
    ctx->pc = 0x55BC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BBFCu;
            // 0x55bc00: 0x4600b486  mov.s       $f18, $f22 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BC04u; }
        if (ctx->pc != 0x55BC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BC04u; }
        if (ctx->pc != 0x55BC04u) { return; }
    }
    ctx->pc = 0x55BC04u;
label_55bc04:
    // 0x55bc04: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x55bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55bc08:
    // 0x55bc08: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x55bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_55bc0c:
    // 0x55bc0c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x55bc0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_55bc10:
    // 0x55bc10: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x55bc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_55bc14:
    // 0x55bc14: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x55bc14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55bc18:
    // 0x55bc18: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55bc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55bc1c:
    // 0x55bc1c: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x55bc1cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_55bc20:
    // 0x55bc20: 0x32d2ffff  andi        $s2, $s6, 0xFFFF
    ctx->pc = 0x55bc20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_55bc24:
    // 0x55bc24: 0x520019  multu       $v0, $s2
    ctx->pc = 0x55bc24u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55bc28:
    // 0x55bc28: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x55bc28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55bc2c:
    // 0x55bc2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55bc2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55bc30:
    // 0x55bc30: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x55bc30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55bc34:
    // 0x55bc34: 0x0  nop
    ctx->pc = 0x55bc34u;
    // NOP
label_55bc38:
    // 0x55bc38: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55bc38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55bc3c:
    // 0x55bc3c: 0x1010  mfhi        $v0
    ctx->pc = 0x55bc3cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55bc40:
    // 0x55bc40: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x55bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_55bc44:
    // 0x55bc44: 0x2442002f  addiu       $v0, $v0, 0x2F
    ctx->pc = 0x55bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
label_55bc48:
    // 0x55bc48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x55bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_55bc4c:
    // 0x55bc4c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x55bc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_55bc50:
    // 0x55bc50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55bc50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55bc54:
    // 0x55bc54: 0x0  nop
    ctx->pc = 0x55bc54u;
    // NOP
label_55bc58:
    // 0x55bc58: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55bc58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55bc5c:
    // 0x55bc5c: 0x4615c380  add.s       $f14, $f24, $f21
    ctx->pc = 0x55bc5cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55bc60:
    // 0x55bc60: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x55bc60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_55bc64:
    // 0x55bc64: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x55bc64u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_55bc68:
    // 0x55bc68: 0x4600b486  mov.s       $f18, $f22
    ctx->pc = 0x55bc68u;
    ctx->f[18] = FPU_MOV_S(ctx->f[22]);
label_55bc6c:
    // 0x55bc6c: 0xc0bc284  jal         func_2F0A10
label_55bc70:
    if (ctx->pc == 0x55BC70u) {
        ctx->pc = 0x55BC70u;
            // 0x55bc70: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x55BC74u;
        goto label_55bc74;
    }
    ctx->pc = 0x55BC6Cu;
    SET_GPR_U32(ctx, 31, 0x55BC74u);
    ctx->pc = 0x55BC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BC6Cu;
            // 0x55bc70: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BC74u; }
        if (ctx->pc != 0x55BC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BC74u; }
        if (ctx->pc != 0x55BC74u) { return; }
    }
    ctx->pc = 0x55BC74u;
label_55bc74:
    // 0x55bc74: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x55bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_55bc78:
    // 0x55bc78: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x55bc78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_55bc7c:
    // 0x55bc7c: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x55bc7cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_55bc80:
    // 0x55bc80: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x55bc80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55bc84:
    // 0x55bc84: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x55bc84u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55bc88:
    // 0x55bc88: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x55bc88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55bc8c:
    // 0x55bc8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55bc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55bc90:
    // 0x55bc90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55bc90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55bc94:
    // 0x55bc94: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x55bc94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55bc98:
    // 0x55bc98: 0x0  nop
    ctx->pc = 0x55bc98u;
    // NOP
label_55bc9c:
    // 0x55bc9c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55bc9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55bca0:
    // 0x55bca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55bca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55bca4:
    // 0x55bca4: 0x0  nop
    ctx->pc = 0x55bca4u;
    // NOP
label_55bca8:
    // 0x55bca8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55bca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55bcac:
    // 0x55bcac: 0x4615c380  add.s       $f14, $f24, $f21
    ctx->pc = 0x55bcacu;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55bcb0:
    // 0x55bcb0: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x55bcb0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_55bcb4:
    // 0x55bcb4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x55bcb4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_55bcb8:
    // 0x55bcb8: 0x4600b486  mov.s       $f18, $f22
    ctx->pc = 0x55bcb8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[22]);
label_55bcbc:
    // 0x55bcbc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x55bcbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_55bcc0:
    // 0x55bcc0: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x55bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_55bcc4:
    // 0x55bcc4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x55bcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_55bcc8:
    // 0x55bcc8: 0x1810  mfhi        $v1
    ctx->pc = 0x55bcc8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_55bccc:
    // 0x55bccc: 0x430019  multu       $v0, $v1
    ctx->pc = 0x55bcccu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55bcd0:
    // 0x55bcd0: 0x1010  mfhi        $v0
    ctx->pc = 0x55bcd0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55bcd4:
    // 0x55bcd4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x55bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_55bcd8:
    // 0x55bcd8: 0x2442002f  addiu       $v0, $v0, 0x2F
    ctx->pc = 0x55bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
label_55bcdc:
    // 0x55bcdc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x55bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_55bce0:
    // 0x55bce0: 0xc0bc284  jal         func_2F0A10
label_55bce4:
    if (ctx->pc == 0x55BCE4u) {
        ctx->pc = 0x55BCE4u;
            // 0x55bce4: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x55BCE8u;
        goto label_55bce8;
    }
    ctx->pc = 0x55BCE0u;
    SET_GPR_U32(ctx, 31, 0x55BCE8u);
    ctx->pc = 0x55BCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BCE0u;
            // 0x55bce4: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BCE8u; }
        if (ctx->pc != 0x55BCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BCE8u; }
        if (ctx->pc != 0x55BCE8u) { return; }
    }
    ctx->pc = 0x55BCE8u;
label_55bce8:
    // 0x55bce8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x55bce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_55bcec:
    // 0x55bcec: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x55bcecu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55bcf0:
    // 0x55bcf0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x55bcf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55bcf4:
    // 0x55bcf4: 0x320f809  jalr        $t9
label_55bcf8:
    if (ctx->pc == 0x55BCF8u) {
        ctx->pc = 0x55BCF8u;
            // 0x55bcf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55BCFCu;
        goto label_55bcfc;
    }
    ctx->pc = 0x55BCF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55BCFCu);
        ctx->pc = 0x55BCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55BCF4u;
            // 0x55bcf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55BCFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55BCFCu; }
            if (ctx->pc != 0x55BCFCu) { return; }
        }
        }
    }
    ctx->pc = 0x55BCFCu;
label_55bcfc:
    // 0x55bcfc: 0x4600c006  mov.s       $f0, $f24
    ctx->pc = 0x55bcfcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[24]);
label_55bd00:
    // 0x55bd00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x55bd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_55bd04:
    // 0x55bd04: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x55bd04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_55bd08:
    // 0x55bd08: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x55bd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_55bd0c:
    // 0x55bd0c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x55bd0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_55bd10:
    // 0x55bd10: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x55bd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_55bd14:
    // 0x55bd14: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x55bd14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55bd18:
    // 0x55bd18: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x55bd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_55bd1c:
    // 0x55bd1c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x55bd1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55bd20:
    // 0x55bd20: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x55bd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_55bd24:
    // 0x55bd24: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x55bd24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55bd28:
    // 0x55bd28: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55bd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55bd2c:
    // 0x55bd2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x55bd2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55bd30:
    // 0x55bd30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x55bd30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55bd34:
    // 0x55bd34: 0x3e00008  jr          $ra
label_55bd38:
    if (ctx->pc == 0x55BD38u) {
        ctx->pc = 0x55BD38u;
            // 0x55bd38: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x55BD3Cu;
        goto label_55bd3c;
    }
    ctx->pc = 0x55BD34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55BD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55BD34u;
            // 0x55bd38: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55BD3Cu;
label_55bd3c:
    // 0x55bd3c: 0x0  nop
    ctx->pc = 0x55bd3cu;
    // NOP
}
