#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046B8A0
// Address: 0x46b8a0 - 0x46be10
void sub_0046B8A0_0x46b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B8A0_0x46b8a0");
#endif

    switch (ctx->pc) {
        case 0x46b8a0u: goto label_46b8a0;
        case 0x46b8a4u: goto label_46b8a4;
        case 0x46b8a8u: goto label_46b8a8;
        case 0x46b8acu: goto label_46b8ac;
        case 0x46b8b0u: goto label_46b8b0;
        case 0x46b8b4u: goto label_46b8b4;
        case 0x46b8b8u: goto label_46b8b8;
        case 0x46b8bcu: goto label_46b8bc;
        case 0x46b8c0u: goto label_46b8c0;
        case 0x46b8c4u: goto label_46b8c4;
        case 0x46b8c8u: goto label_46b8c8;
        case 0x46b8ccu: goto label_46b8cc;
        case 0x46b8d0u: goto label_46b8d0;
        case 0x46b8d4u: goto label_46b8d4;
        case 0x46b8d8u: goto label_46b8d8;
        case 0x46b8dcu: goto label_46b8dc;
        case 0x46b8e0u: goto label_46b8e0;
        case 0x46b8e4u: goto label_46b8e4;
        case 0x46b8e8u: goto label_46b8e8;
        case 0x46b8ecu: goto label_46b8ec;
        case 0x46b8f0u: goto label_46b8f0;
        case 0x46b8f4u: goto label_46b8f4;
        case 0x46b8f8u: goto label_46b8f8;
        case 0x46b8fcu: goto label_46b8fc;
        case 0x46b900u: goto label_46b900;
        case 0x46b904u: goto label_46b904;
        case 0x46b908u: goto label_46b908;
        case 0x46b90cu: goto label_46b90c;
        case 0x46b910u: goto label_46b910;
        case 0x46b914u: goto label_46b914;
        case 0x46b918u: goto label_46b918;
        case 0x46b91cu: goto label_46b91c;
        case 0x46b920u: goto label_46b920;
        case 0x46b924u: goto label_46b924;
        case 0x46b928u: goto label_46b928;
        case 0x46b92cu: goto label_46b92c;
        case 0x46b930u: goto label_46b930;
        case 0x46b934u: goto label_46b934;
        case 0x46b938u: goto label_46b938;
        case 0x46b93cu: goto label_46b93c;
        case 0x46b940u: goto label_46b940;
        case 0x46b944u: goto label_46b944;
        case 0x46b948u: goto label_46b948;
        case 0x46b94cu: goto label_46b94c;
        case 0x46b950u: goto label_46b950;
        case 0x46b954u: goto label_46b954;
        case 0x46b958u: goto label_46b958;
        case 0x46b95cu: goto label_46b95c;
        case 0x46b960u: goto label_46b960;
        case 0x46b964u: goto label_46b964;
        case 0x46b968u: goto label_46b968;
        case 0x46b96cu: goto label_46b96c;
        case 0x46b970u: goto label_46b970;
        case 0x46b974u: goto label_46b974;
        case 0x46b978u: goto label_46b978;
        case 0x46b97cu: goto label_46b97c;
        case 0x46b980u: goto label_46b980;
        case 0x46b984u: goto label_46b984;
        case 0x46b988u: goto label_46b988;
        case 0x46b98cu: goto label_46b98c;
        case 0x46b990u: goto label_46b990;
        case 0x46b994u: goto label_46b994;
        case 0x46b998u: goto label_46b998;
        case 0x46b99cu: goto label_46b99c;
        case 0x46b9a0u: goto label_46b9a0;
        case 0x46b9a4u: goto label_46b9a4;
        case 0x46b9a8u: goto label_46b9a8;
        case 0x46b9acu: goto label_46b9ac;
        case 0x46b9b0u: goto label_46b9b0;
        case 0x46b9b4u: goto label_46b9b4;
        case 0x46b9b8u: goto label_46b9b8;
        case 0x46b9bcu: goto label_46b9bc;
        case 0x46b9c0u: goto label_46b9c0;
        case 0x46b9c4u: goto label_46b9c4;
        case 0x46b9c8u: goto label_46b9c8;
        case 0x46b9ccu: goto label_46b9cc;
        case 0x46b9d0u: goto label_46b9d0;
        case 0x46b9d4u: goto label_46b9d4;
        case 0x46b9d8u: goto label_46b9d8;
        case 0x46b9dcu: goto label_46b9dc;
        case 0x46b9e0u: goto label_46b9e0;
        case 0x46b9e4u: goto label_46b9e4;
        case 0x46b9e8u: goto label_46b9e8;
        case 0x46b9ecu: goto label_46b9ec;
        case 0x46b9f0u: goto label_46b9f0;
        case 0x46b9f4u: goto label_46b9f4;
        case 0x46b9f8u: goto label_46b9f8;
        case 0x46b9fcu: goto label_46b9fc;
        case 0x46ba00u: goto label_46ba00;
        case 0x46ba04u: goto label_46ba04;
        case 0x46ba08u: goto label_46ba08;
        case 0x46ba0cu: goto label_46ba0c;
        case 0x46ba10u: goto label_46ba10;
        case 0x46ba14u: goto label_46ba14;
        case 0x46ba18u: goto label_46ba18;
        case 0x46ba1cu: goto label_46ba1c;
        case 0x46ba20u: goto label_46ba20;
        case 0x46ba24u: goto label_46ba24;
        case 0x46ba28u: goto label_46ba28;
        case 0x46ba2cu: goto label_46ba2c;
        case 0x46ba30u: goto label_46ba30;
        case 0x46ba34u: goto label_46ba34;
        case 0x46ba38u: goto label_46ba38;
        case 0x46ba3cu: goto label_46ba3c;
        case 0x46ba40u: goto label_46ba40;
        case 0x46ba44u: goto label_46ba44;
        case 0x46ba48u: goto label_46ba48;
        case 0x46ba4cu: goto label_46ba4c;
        case 0x46ba50u: goto label_46ba50;
        case 0x46ba54u: goto label_46ba54;
        case 0x46ba58u: goto label_46ba58;
        case 0x46ba5cu: goto label_46ba5c;
        case 0x46ba60u: goto label_46ba60;
        case 0x46ba64u: goto label_46ba64;
        case 0x46ba68u: goto label_46ba68;
        case 0x46ba6cu: goto label_46ba6c;
        case 0x46ba70u: goto label_46ba70;
        case 0x46ba74u: goto label_46ba74;
        case 0x46ba78u: goto label_46ba78;
        case 0x46ba7cu: goto label_46ba7c;
        case 0x46ba80u: goto label_46ba80;
        case 0x46ba84u: goto label_46ba84;
        case 0x46ba88u: goto label_46ba88;
        case 0x46ba8cu: goto label_46ba8c;
        case 0x46ba90u: goto label_46ba90;
        case 0x46ba94u: goto label_46ba94;
        case 0x46ba98u: goto label_46ba98;
        case 0x46ba9cu: goto label_46ba9c;
        case 0x46baa0u: goto label_46baa0;
        case 0x46baa4u: goto label_46baa4;
        case 0x46baa8u: goto label_46baa8;
        case 0x46baacu: goto label_46baac;
        case 0x46bab0u: goto label_46bab0;
        case 0x46bab4u: goto label_46bab4;
        case 0x46bab8u: goto label_46bab8;
        case 0x46babcu: goto label_46babc;
        case 0x46bac0u: goto label_46bac0;
        case 0x46bac4u: goto label_46bac4;
        case 0x46bac8u: goto label_46bac8;
        case 0x46baccu: goto label_46bacc;
        case 0x46bad0u: goto label_46bad0;
        case 0x46bad4u: goto label_46bad4;
        case 0x46bad8u: goto label_46bad8;
        case 0x46badcu: goto label_46badc;
        case 0x46bae0u: goto label_46bae0;
        case 0x46bae4u: goto label_46bae4;
        case 0x46bae8u: goto label_46bae8;
        case 0x46baecu: goto label_46baec;
        case 0x46baf0u: goto label_46baf0;
        case 0x46baf4u: goto label_46baf4;
        case 0x46baf8u: goto label_46baf8;
        case 0x46bafcu: goto label_46bafc;
        case 0x46bb00u: goto label_46bb00;
        case 0x46bb04u: goto label_46bb04;
        case 0x46bb08u: goto label_46bb08;
        case 0x46bb0cu: goto label_46bb0c;
        case 0x46bb10u: goto label_46bb10;
        case 0x46bb14u: goto label_46bb14;
        case 0x46bb18u: goto label_46bb18;
        case 0x46bb1cu: goto label_46bb1c;
        case 0x46bb20u: goto label_46bb20;
        case 0x46bb24u: goto label_46bb24;
        case 0x46bb28u: goto label_46bb28;
        case 0x46bb2cu: goto label_46bb2c;
        case 0x46bb30u: goto label_46bb30;
        case 0x46bb34u: goto label_46bb34;
        case 0x46bb38u: goto label_46bb38;
        case 0x46bb3cu: goto label_46bb3c;
        case 0x46bb40u: goto label_46bb40;
        case 0x46bb44u: goto label_46bb44;
        case 0x46bb48u: goto label_46bb48;
        case 0x46bb4cu: goto label_46bb4c;
        case 0x46bb50u: goto label_46bb50;
        case 0x46bb54u: goto label_46bb54;
        case 0x46bb58u: goto label_46bb58;
        case 0x46bb5cu: goto label_46bb5c;
        case 0x46bb60u: goto label_46bb60;
        case 0x46bb64u: goto label_46bb64;
        case 0x46bb68u: goto label_46bb68;
        case 0x46bb6cu: goto label_46bb6c;
        case 0x46bb70u: goto label_46bb70;
        case 0x46bb74u: goto label_46bb74;
        case 0x46bb78u: goto label_46bb78;
        case 0x46bb7cu: goto label_46bb7c;
        case 0x46bb80u: goto label_46bb80;
        case 0x46bb84u: goto label_46bb84;
        case 0x46bb88u: goto label_46bb88;
        case 0x46bb8cu: goto label_46bb8c;
        case 0x46bb90u: goto label_46bb90;
        case 0x46bb94u: goto label_46bb94;
        case 0x46bb98u: goto label_46bb98;
        case 0x46bb9cu: goto label_46bb9c;
        case 0x46bba0u: goto label_46bba0;
        case 0x46bba4u: goto label_46bba4;
        case 0x46bba8u: goto label_46bba8;
        case 0x46bbacu: goto label_46bbac;
        case 0x46bbb0u: goto label_46bbb0;
        case 0x46bbb4u: goto label_46bbb4;
        case 0x46bbb8u: goto label_46bbb8;
        case 0x46bbbcu: goto label_46bbbc;
        case 0x46bbc0u: goto label_46bbc0;
        case 0x46bbc4u: goto label_46bbc4;
        case 0x46bbc8u: goto label_46bbc8;
        case 0x46bbccu: goto label_46bbcc;
        case 0x46bbd0u: goto label_46bbd0;
        case 0x46bbd4u: goto label_46bbd4;
        case 0x46bbd8u: goto label_46bbd8;
        case 0x46bbdcu: goto label_46bbdc;
        case 0x46bbe0u: goto label_46bbe0;
        case 0x46bbe4u: goto label_46bbe4;
        case 0x46bbe8u: goto label_46bbe8;
        case 0x46bbecu: goto label_46bbec;
        case 0x46bbf0u: goto label_46bbf0;
        case 0x46bbf4u: goto label_46bbf4;
        case 0x46bbf8u: goto label_46bbf8;
        case 0x46bbfcu: goto label_46bbfc;
        case 0x46bc00u: goto label_46bc00;
        case 0x46bc04u: goto label_46bc04;
        case 0x46bc08u: goto label_46bc08;
        case 0x46bc0cu: goto label_46bc0c;
        case 0x46bc10u: goto label_46bc10;
        case 0x46bc14u: goto label_46bc14;
        case 0x46bc18u: goto label_46bc18;
        case 0x46bc1cu: goto label_46bc1c;
        case 0x46bc20u: goto label_46bc20;
        case 0x46bc24u: goto label_46bc24;
        case 0x46bc28u: goto label_46bc28;
        case 0x46bc2cu: goto label_46bc2c;
        case 0x46bc30u: goto label_46bc30;
        case 0x46bc34u: goto label_46bc34;
        case 0x46bc38u: goto label_46bc38;
        case 0x46bc3cu: goto label_46bc3c;
        case 0x46bc40u: goto label_46bc40;
        case 0x46bc44u: goto label_46bc44;
        case 0x46bc48u: goto label_46bc48;
        case 0x46bc4cu: goto label_46bc4c;
        case 0x46bc50u: goto label_46bc50;
        case 0x46bc54u: goto label_46bc54;
        case 0x46bc58u: goto label_46bc58;
        case 0x46bc5cu: goto label_46bc5c;
        case 0x46bc60u: goto label_46bc60;
        case 0x46bc64u: goto label_46bc64;
        case 0x46bc68u: goto label_46bc68;
        case 0x46bc6cu: goto label_46bc6c;
        case 0x46bc70u: goto label_46bc70;
        case 0x46bc74u: goto label_46bc74;
        case 0x46bc78u: goto label_46bc78;
        case 0x46bc7cu: goto label_46bc7c;
        case 0x46bc80u: goto label_46bc80;
        case 0x46bc84u: goto label_46bc84;
        case 0x46bc88u: goto label_46bc88;
        case 0x46bc8cu: goto label_46bc8c;
        case 0x46bc90u: goto label_46bc90;
        case 0x46bc94u: goto label_46bc94;
        case 0x46bc98u: goto label_46bc98;
        case 0x46bc9cu: goto label_46bc9c;
        case 0x46bca0u: goto label_46bca0;
        case 0x46bca4u: goto label_46bca4;
        case 0x46bca8u: goto label_46bca8;
        case 0x46bcacu: goto label_46bcac;
        case 0x46bcb0u: goto label_46bcb0;
        case 0x46bcb4u: goto label_46bcb4;
        case 0x46bcb8u: goto label_46bcb8;
        case 0x46bcbcu: goto label_46bcbc;
        case 0x46bcc0u: goto label_46bcc0;
        case 0x46bcc4u: goto label_46bcc4;
        case 0x46bcc8u: goto label_46bcc8;
        case 0x46bcccu: goto label_46bccc;
        case 0x46bcd0u: goto label_46bcd0;
        case 0x46bcd4u: goto label_46bcd4;
        case 0x46bcd8u: goto label_46bcd8;
        case 0x46bcdcu: goto label_46bcdc;
        case 0x46bce0u: goto label_46bce0;
        case 0x46bce4u: goto label_46bce4;
        case 0x46bce8u: goto label_46bce8;
        case 0x46bcecu: goto label_46bcec;
        case 0x46bcf0u: goto label_46bcf0;
        case 0x46bcf4u: goto label_46bcf4;
        case 0x46bcf8u: goto label_46bcf8;
        case 0x46bcfcu: goto label_46bcfc;
        case 0x46bd00u: goto label_46bd00;
        case 0x46bd04u: goto label_46bd04;
        case 0x46bd08u: goto label_46bd08;
        case 0x46bd0cu: goto label_46bd0c;
        case 0x46bd10u: goto label_46bd10;
        case 0x46bd14u: goto label_46bd14;
        case 0x46bd18u: goto label_46bd18;
        case 0x46bd1cu: goto label_46bd1c;
        case 0x46bd20u: goto label_46bd20;
        case 0x46bd24u: goto label_46bd24;
        case 0x46bd28u: goto label_46bd28;
        case 0x46bd2cu: goto label_46bd2c;
        case 0x46bd30u: goto label_46bd30;
        case 0x46bd34u: goto label_46bd34;
        case 0x46bd38u: goto label_46bd38;
        case 0x46bd3cu: goto label_46bd3c;
        case 0x46bd40u: goto label_46bd40;
        case 0x46bd44u: goto label_46bd44;
        case 0x46bd48u: goto label_46bd48;
        case 0x46bd4cu: goto label_46bd4c;
        case 0x46bd50u: goto label_46bd50;
        case 0x46bd54u: goto label_46bd54;
        case 0x46bd58u: goto label_46bd58;
        case 0x46bd5cu: goto label_46bd5c;
        case 0x46bd60u: goto label_46bd60;
        case 0x46bd64u: goto label_46bd64;
        case 0x46bd68u: goto label_46bd68;
        case 0x46bd6cu: goto label_46bd6c;
        case 0x46bd70u: goto label_46bd70;
        case 0x46bd74u: goto label_46bd74;
        case 0x46bd78u: goto label_46bd78;
        case 0x46bd7cu: goto label_46bd7c;
        case 0x46bd80u: goto label_46bd80;
        case 0x46bd84u: goto label_46bd84;
        case 0x46bd88u: goto label_46bd88;
        case 0x46bd8cu: goto label_46bd8c;
        case 0x46bd90u: goto label_46bd90;
        case 0x46bd94u: goto label_46bd94;
        case 0x46bd98u: goto label_46bd98;
        case 0x46bd9cu: goto label_46bd9c;
        case 0x46bda0u: goto label_46bda0;
        case 0x46bda4u: goto label_46bda4;
        case 0x46bda8u: goto label_46bda8;
        case 0x46bdacu: goto label_46bdac;
        case 0x46bdb0u: goto label_46bdb0;
        case 0x46bdb4u: goto label_46bdb4;
        case 0x46bdb8u: goto label_46bdb8;
        case 0x46bdbcu: goto label_46bdbc;
        case 0x46bdc0u: goto label_46bdc0;
        case 0x46bdc4u: goto label_46bdc4;
        case 0x46bdc8u: goto label_46bdc8;
        case 0x46bdccu: goto label_46bdcc;
        case 0x46bdd0u: goto label_46bdd0;
        case 0x46bdd4u: goto label_46bdd4;
        case 0x46bdd8u: goto label_46bdd8;
        case 0x46bddcu: goto label_46bddc;
        case 0x46bde0u: goto label_46bde0;
        case 0x46bde4u: goto label_46bde4;
        case 0x46bde8u: goto label_46bde8;
        case 0x46bdecu: goto label_46bdec;
        case 0x46bdf0u: goto label_46bdf0;
        case 0x46bdf4u: goto label_46bdf4;
        case 0x46bdf8u: goto label_46bdf8;
        case 0x46bdfcu: goto label_46bdfc;
        case 0x46be00u: goto label_46be00;
        case 0x46be04u: goto label_46be04;
        case 0x46be08u: goto label_46be08;
        case 0x46be0cu: goto label_46be0c;
        default: break;
    }

    ctx->pc = 0x46b8a0u;

label_46b8a0:
    // 0x46b8a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x46b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_46b8a4:
    // 0x46b8a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x46b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_46b8a8:
    // 0x46b8a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46b8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_46b8ac:
    // 0x46b8ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46b8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46b8b0:
    // 0x46b8b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x46b8b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46b8b4:
    // 0x46b8b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46b8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46b8b8:
    // 0x46b8b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46b8b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46b8bc:
    // 0x46b8bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46b8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46b8c0:
    // 0x46b8c0: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46b8c4:
    // 0x46b8c4: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x46b8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_46b8c8:
    // 0x46b8c8: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x46b8c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46b8cc:
    // 0x46b8cc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46b8d0:
    // 0x46b8d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46b8d4:
    // 0x46b8d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46b8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46b8d8:
    // 0x46b8d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46b8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46b8dc:
    // 0x46b8dc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46b8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46b8e0:
    // 0x46b8e0: 0x320f809  jalr        $t9
label_46b8e4:
    if (ctx->pc == 0x46B8E4u) {
        ctx->pc = 0x46B8E4u;
            // 0x46b8e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B8E8u;
        goto label_46b8e8;
    }
    ctx->pc = 0x46B8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46B8E8u);
        ctx->pc = 0x46B8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B8E0u;
            // 0x46b8e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46B8E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46B8E8u; }
            if (ctx->pc != 0x46B8E8u) { return; }
        }
        }
    }
    ctx->pc = 0x46B8E8u;
label_46b8e8:
    // 0x46b8e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46b8ec:
    // 0x46b8ec: 0xa222007c  sb          $v0, 0x7C($s1)
    ctx->pc = 0x46b8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 2));
label_46b8f0:
    // 0x46b8f0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46b8f4:
    // 0x46b8f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46b8f8:
    // 0x46b8f8: 0xc123848  jal         func_48E120
label_46b8fc:
    if (ctx->pc == 0x46B8FCu) {
        ctx->pc = 0x46B8FCu;
            // 0x46b8fc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46B900u;
        goto label_46b900;
    }
    ctx->pc = 0x46B8F8u;
    SET_GPR_U32(ctx, 31, 0x46B900u);
    ctx->pc = 0x46B8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B8F8u;
            // 0x46b8fc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B900u; }
        if (ctx->pc != 0x46B900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B900u; }
        if (ctx->pc != 0x46B900u) { return; }
    }
    ctx->pc = 0x46B900u;
label_46b900:
    // 0x46b900: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x46b900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46b904:
    // 0x46b904: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x46b904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_46b908:
    // 0x46b908: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46b908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46b90c:
    // 0x46b90c: 0x2a4200a0  slti        $v0, $s2, 0xA0
    ctx->pc = 0x46b90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)160) ? 1 : 0);
label_46b910:
    // 0x46b910: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x46b910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_46b914:
    // 0x46b914: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46b914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46b918:
    // 0x46b918: 0xa4640046  sh          $a0, 0x46($v1)
    ctx->pc = 0x46b918u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 4));
label_46b91c:
    // 0x46b91c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x46b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46b920:
    // 0x46b920: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x46b920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_46b924:
    // 0x46b924: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46b924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46b928:
    // 0x46b928: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_46b92c:
    if (ctx->pc == 0x46B92Cu) {
        ctx->pc = 0x46B92Cu;
            // 0x46b92c: 0xa4600046  sh          $zero, 0x46($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x46B930u;
        goto label_46b930;
    }
    ctx->pc = 0x46B928u;
    {
        const bool branch_taken_0x46b928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46B92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B928u;
            // 0x46b92c: 0xa4600046  sh          $zero, 0x46($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b928) {
            ctx->pc = 0x46B8C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46b8c0;
        }
    }
    ctx->pc = 0x46B930u;
label_46b930:
    // 0x46b930: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x46b930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46b934:
    // 0x46b934: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x46b934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_46b938:
    // 0x46b938: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x46b938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_46b93c:
    // 0x46b93c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46b93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46b940:
    // 0x46b940: 0xc123248  jal         func_48C920
label_46b944:
    if (ctx->pc == 0x46B944u) {
        ctx->pc = 0x46B944u;
            // 0x46b944: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->pc = 0x46B948u;
        goto label_46b948;
    }
    ctx->pc = 0x46B940u;
    SET_GPR_U32(ctx, 31, 0x46B948u);
    ctx->pc = 0x46B944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B940u;
            // 0x46b944: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C920u;
    if (runtime->hasFunction(0x48C920u)) {
        auto targetFn = runtime->lookupFunction(0x48C920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B948u; }
        if (ctx->pc != 0x46B948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C920_0x48c920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B948u; }
        if (ctx->pc != 0x46B948u) { return; }
    }
    ctx->pc = 0x46B948u;
label_46b948:
    // 0x46b948: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x46b948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_46b94c:
    // 0x46b94c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46b94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46b950:
    // 0x46b950: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
label_46b954:
    if (ctx->pc == 0x46B954u) {
        ctx->pc = 0x46B954u;
            // 0x46b954: 0x8e62006c  lw          $v0, 0x6C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
        ctx->pc = 0x46B958u;
        goto label_46b958;
    }
    ctx->pc = 0x46B950u;
    {
        const bool branch_taken_0x46b950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b950) {
            ctx->pc = 0x46B954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46B950u;
            // 0x46b954: 0x8e62006c  lw          $v0, 0x6C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46BA98u;
            goto label_46ba98;
        }
    }
    ctx->pc = 0x46B958u;
label_46b958:
    // 0x46b958: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46b958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46b95c:
    // 0x46b95c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46b95cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46b960:
    // 0x46b960: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46b964:
    // 0x46b964: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46b964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46b968:
    // 0x46b968: 0x8c440238  lw          $a0, 0x238($v0)
    ctx->pc = 0x46b968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
label_46b96c:
    // 0x46b96c: 0xc12512c  jal         func_4944B0
label_46b970:
    if (ctx->pc == 0x46B970u) {
        ctx->pc = 0x46B970u;
            // 0x46b970: 0x24a5edc0  addiu       $a1, $a1, -0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
        ctx->pc = 0x46B974u;
        goto label_46b974;
    }
    ctx->pc = 0x46B96Cu;
    SET_GPR_U32(ctx, 31, 0x46B974u);
    ctx->pc = 0x46B970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B96Cu;
            // 0x46b970: 0x24a5edc0  addiu       $a1, $a1, -0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B974u; }
        if (ctx->pc != 0x46B974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B974u; }
        if (ctx->pc != 0x46B974u) { return; }
    }
    ctx->pc = 0x46B974u;
label_46b974:
    // 0x46b974: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46b974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46b978:
    // 0x46b978: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46b978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46b97c:
    // 0x46b97c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x46b97cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46b980:
    // 0x46b980: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46b980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46b984:
    // 0x46b984: 0x8c440238  lw          $a0, 0x238($v0)
    ctx->pc = 0x46b984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
label_46b988:
    // 0x46b988: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46b988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46b98c:
    // 0x46b98c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46b98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46b990:
    // 0x46b990: 0x320f809  jalr        $t9
label_46b994:
    if (ctx->pc == 0x46B994u) {
        ctx->pc = 0x46B998u;
        goto label_46b998;
    }
    ctx->pc = 0x46B990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46B998u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46B998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46B998u; }
            if (ctx->pc != 0x46B998u) { return; }
        }
        }
    }
    ctx->pc = 0x46B998u;
label_46b998:
    // 0x46b998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46b998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46b99c:
    // 0x46b99c: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46b99cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46b9a0:
    // 0x46b9a0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46b9a4:
    // 0x46b9a4: 0xc123848  jal         func_48E120
label_46b9a8:
    if (ctx->pc == 0x46B9A8u) {
        ctx->pc = 0x46B9A8u;
            // 0x46b9a8: 0x8c440238  lw          $a0, 0x238($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
        ctx->pc = 0x46B9ACu;
        goto label_46b9ac;
    }
    ctx->pc = 0x46B9A4u;
    SET_GPR_U32(ctx, 31, 0x46B9ACu);
    ctx->pc = 0x46B9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B9A4u;
            // 0x46b9a8: 0x8c440238  lw          $a0, 0x238($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B9ACu; }
        if (ctx->pc != 0x46B9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B9ACu; }
        if (ctx->pc != 0x46B9ACu) { return; }
    }
    ctx->pc = 0x46B9ACu;
label_46b9ac:
    // 0x46b9ac: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46b9b0:
    // 0x46b9b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46b9b4:
    // 0x46b9b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46b9b8:
    // 0x46b9b8: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x46b9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_46b9bc:
    // 0x46b9bc: 0x8c420238  lw          $v0, 0x238($v0)
    ctx->pc = 0x46b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
label_46b9c0:
    // 0x46b9c0: 0xa4440046  sh          $a0, 0x46($v0)
    ctx->pc = 0x46b9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 4));
label_46b9c4:
    // 0x46b9c4: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46b9c8:
    // 0x46b9c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46b9cc:
    // 0x46b9cc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46b9d0:
    // 0x46b9d0: 0x8c420238  lw          $v0, 0x238($v0)
    ctx->pc = 0x46b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
label_46b9d4:
    // 0x46b9d4: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46b9d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46b9d8:
    // 0x46b9d8: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46b9dc:
    // 0x46b9dc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46b9e0:
    // 0x46b9e0: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x46b9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
label_46b9e4:
    // 0x46b9e4: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46b9e8:
    // 0x46b9e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46b9ec:
    // 0x46b9ec: 0xc12326c  jal         func_48C9B0
label_46b9f0:
    if (ctx->pc == 0x46B9F0u) {
        ctx->pc = 0x46B9F0u;
            // 0x46b9f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B9F4u;
        goto label_46b9f4;
    }
    ctx->pc = 0x46B9ECu;
    SET_GPR_U32(ctx, 31, 0x46B9F4u);
    ctx->pc = 0x46B9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B9ECu;
            // 0x46b9f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B9F4u; }
        if (ctx->pc != 0x46B9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B9F4u; }
        if (ctx->pc != 0x46B9F4u) { return; }
    }
    ctx->pc = 0x46B9F4u;
label_46b9f4:
    // 0x46b9f4: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46b9f8:
    // 0x46b9f8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46b9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46b9fc:
    // 0x46b9fc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46ba00:
    // 0x46ba00: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46ba04:
    // 0x46ba04: 0x8c44025c  lw          $a0, 0x25C($v0)
    ctx->pc = 0x46ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_46ba08:
    // 0x46ba08: 0xc12512c  jal         func_4944B0
label_46ba0c:
    if (ctx->pc == 0x46BA0Cu) {
        ctx->pc = 0x46BA0Cu;
            // 0x46ba0c: 0x24a5edc0  addiu       $a1, $a1, -0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
        ctx->pc = 0x46BA10u;
        goto label_46ba10;
    }
    ctx->pc = 0x46BA08u;
    SET_GPR_U32(ctx, 31, 0x46BA10u);
    ctx->pc = 0x46BA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BA08u;
            // 0x46ba0c: 0x24a5edc0  addiu       $a1, $a1, -0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BA10u; }
        if (ctx->pc != 0x46BA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BA10u; }
        if (ctx->pc != 0x46BA10u) { return; }
    }
    ctx->pc = 0x46BA10u;
label_46ba10:
    // 0x46ba10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46ba10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46ba14:
    // 0x46ba14: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46ba18:
    // 0x46ba18: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x46ba18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46ba1c:
    // 0x46ba1c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46ba20:
    // 0x46ba20: 0x8c44025c  lw          $a0, 0x25C($v0)
    ctx->pc = 0x46ba20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_46ba24:
    // 0x46ba24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46ba24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46ba28:
    // 0x46ba28: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46ba28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46ba2c:
    // 0x46ba2c: 0x320f809  jalr        $t9
label_46ba30:
    if (ctx->pc == 0x46BA30u) {
        ctx->pc = 0x46BA34u;
        goto label_46ba34;
    }
    ctx->pc = 0x46BA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46BA34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46BA34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46BA34u; }
            if (ctx->pc != 0x46BA34u) { return; }
        }
        }
    }
    ctx->pc = 0x46BA34u;
label_46ba34:
    // 0x46ba34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46ba38:
    // 0x46ba38: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46ba38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46ba3c:
    // 0x46ba3c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46ba40:
    // 0x46ba40: 0xc123848  jal         func_48E120
label_46ba44:
    if (ctx->pc == 0x46BA44u) {
        ctx->pc = 0x46BA44u;
            // 0x46ba44: 0x8c44025c  lw          $a0, 0x25C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
        ctx->pc = 0x46BA48u;
        goto label_46ba48;
    }
    ctx->pc = 0x46BA40u;
    SET_GPR_U32(ctx, 31, 0x46BA48u);
    ctx->pc = 0x46BA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BA40u;
            // 0x46ba44: 0x8c44025c  lw          $a0, 0x25C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BA48u; }
        if (ctx->pc != 0x46BA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BA48u; }
        if (ctx->pc != 0x46BA48u) { return; }
    }
    ctx->pc = 0x46BA48u;
label_46ba48:
    // 0x46ba48: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46ba4c:
    // 0x46ba4c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46ba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46ba50:
    // 0x46ba50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46ba54:
    // 0x46ba54: 0x24050097  addiu       $a1, $zero, 0x97
    ctx->pc = 0x46ba54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
label_46ba58:
    // 0x46ba58: 0x8c42025c  lw          $v0, 0x25C($v0)
    ctx->pc = 0x46ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_46ba5c:
    // 0x46ba5c: 0xa4440046  sh          $a0, 0x46($v0)
    ctx->pc = 0x46ba5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 4));
label_46ba60:
    // 0x46ba60: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46ba64:
    // 0x46ba64: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46ba68:
    // 0x46ba68: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46ba6c:
    // 0x46ba6c: 0x8c42025c  lw          $v0, 0x25C($v0)
    ctx->pc = 0x46ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_46ba70:
    // 0x46ba70: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46ba70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46ba74:
    // 0x46ba74: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46ba78:
    // 0x46ba78: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46ba7c:
    // 0x46ba7c: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x46ba7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
label_46ba80:
    // 0x46ba80: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46ba84:
    // 0x46ba84: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46ba88:
    // 0x46ba88: 0xc12326c  jal         func_48C9B0
label_46ba8c:
    if (ctx->pc == 0x46BA8Cu) {
        ctx->pc = 0x46BA8Cu;
            // 0x46ba8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BA90u;
        goto label_46ba90;
    }
    ctx->pc = 0x46BA88u;
    SET_GPR_U32(ctx, 31, 0x46BA90u);
    ctx->pc = 0x46BA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BA88u;
            // 0x46ba8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BA90u; }
        if (ctx->pc != 0x46BA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BA90u; }
        if (ctx->pc != 0x46BA90u) { return; }
    }
    ctx->pc = 0x46BA90u;
label_46ba90:
    // 0x46ba90: 0x1000004f  b           . + 4 + (0x4F << 2)
label_46ba94:
    if (ctx->pc == 0x46BA94u) {
        ctx->pc = 0x46BA94u;
            // 0x46ba94: 0x8e62006c  lw          $v0, 0x6C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
        ctx->pc = 0x46BA98u;
        goto label_46ba98;
    }
    ctx->pc = 0x46BA90u;
    {
        const bool branch_taken_0x46ba90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46BA90u;
            // 0x46ba94: 0x8e62006c  lw          $v0, 0x6C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ba90) {
            ctx->pc = 0x46BBD0u;
            goto label_46bbd0;
        }
    }
    ctx->pc = 0x46BA98u;
label_46ba98:
    // 0x46ba98: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46ba98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46ba9c:
    // 0x46ba9c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46baa0:
    // 0x46baa0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46baa4:
    // 0x46baa4: 0x8c440238  lw          $a0, 0x238($v0)
    ctx->pc = 0x46baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
label_46baa8:
    // 0x46baa8: 0xc12512c  jal         func_4944B0
label_46baac:
    if (ctx->pc == 0x46BAACu) {
        ctx->pc = 0x46BAACu;
            // 0x46baac: 0x24a5edc0  addiu       $a1, $a1, -0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
        ctx->pc = 0x46BAB0u;
        goto label_46bab0;
    }
    ctx->pc = 0x46BAA8u;
    SET_GPR_U32(ctx, 31, 0x46BAB0u);
    ctx->pc = 0x46BAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BAA8u;
            // 0x46baac: 0x24a5edc0  addiu       $a1, $a1, -0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BAB0u; }
        if (ctx->pc != 0x46BAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BAB0u; }
        if (ctx->pc != 0x46BAB0u) { return; }
    }
    ctx->pc = 0x46BAB0u;
label_46bab0:
    // 0x46bab0: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x46bab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46bab4:
    // 0x46bab4: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bab8:
    // 0x46bab8: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x46bab8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46babc:
    // 0x46babc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46babcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46bac0:
    // 0x46bac0: 0x8c440238  lw          $a0, 0x238($v0)
    ctx->pc = 0x46bac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
label_46bac4:
    // 0x46bac4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46bac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46bac8:
    // 0x46bac8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46bac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46bacc:
    // 0x46bacc: 0x320f809  jalr        $t9
label_46bad0:
    if (ctx->pc == 0x46BAD0u) {
        ctx->pc = 0x46BAD4u;
        goto label_46bad4;
    }
    ctx->pc = 0x46BACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46BAD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46BAD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46BAD4u; }
            if (ctx->pc != 0x46BAD4u) { return; }
        }
        }
    }
    ctx->pc = 0x46BAD4u;
label_46bad4:
    // 0x46bad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46bad8:
    // 0x46bad8: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46bad8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46badc:
    // 0x46badc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46bae0:
    // 0x46bae0: 0xc123848  jal         func_48E120
label_46bae4:
    if (ctx->pc == 0x46BAE4u) {
        ctx->pc = 0x46BAE4u;
            // 0x46bae4: 0x8c440238  lw          $a0, 0x238($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
        ctx->pc = 0x46BAE8u;
        goto label_46bae8;
    }
    ctx->pc = 0x46BAE0u;
    SET_GPR_U32(ctx, 31, 0x46BAE8u);
    ctx->pc = 0x46BAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BAE0u;
            // 0x46bae4: 0x8c440238  lw          $a0, 0x238($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BAE8u; }
        if (ctx->pc != 0x46BAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BAE8u; }
        if (ctx->pc != 0x46BAE8u) { return; }
    }
    ctx->pc = 0x46BAE8u;
label_46bae8:
    // 0x46bae8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46baec:
    // 0x46baec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46baecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46baf0:
    // 0x46baf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46baf4:
    // 0x46baf4: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x46baf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_46baf8:
    // 0x46baf8: 0x8c420238  lw          $v0, 0x238($v0)
    ctx->pc = 0x46baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
label_46bafc:
    // 0x46bafc: 0xa4440046  sh          $a0, 0x46($v0)
    ctx->pc = 0x46bafcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 4));
label_46bb00:
    // 0x46bb00: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bb04:
    // 0x46bb04: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bb08:
    // 0x46bb08: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46bb0c:
    // 0x46bb0c: 0x8c420238  lw          $v0, 0x238($v0)
    ctx->pc = 0x46bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
label_46bb10:
    // 0x46bb10: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46bb10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46bb14:
    // 0x46bb14: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bb18:
    // 0x46bb18: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bb1c:
    // 0x46bb1c: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x46bb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
label_46bb20:
    // 0x46bb20: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bb24:
    // 0x46bb24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bb28:
    // 0x46bb28: 0xc12326c  jal         func_48C9B0
label_46bb2c:
    if (ctx->pc == 0x46BB2Cu) {
        ctx->pc = 0x46BB2Cu;
            // 0x46bb2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BB30u;
        goto label_46bb30;
    }
    ctx->pc = 0x46BB28u;
    SET_GPR_U32(ctx, 31, 0x46BB30u);
    ctx->pc = 0x46BB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BB28u;
            // 0x46bb2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BB30u; }
        if (ctx->pc != 0x46BB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BB30u; }
        if (ctx->pc != 0x46BB30u) { return; }
    }
    ctx->pc = 0x46BB30u;
label_46bb30:
    // 0x46bb30: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bb34:
    // 0x46bb34: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bb34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bb38:
    // 0x46bb38: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bb3c:
    // 0x46bb3c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46bb40:
    // 0x46bb40: 0x8c44025c  lw          $a0, 0x25C($v0)
    ctx->pc = 0x46bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_46bb44:
    // 0x46bb44: 0xc12512c  jal         func_4944B0
label_46bb48:
    if (ctx->pc == 0x46BB48u) {
        ctx->pc = 0x46BB48u;
            // 0x46bb48: 0x24a5edc0  addiu       $a1, $a1, -0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
        ctx->pc = 0x46BB4Cu;
        goto label_46bb4c;
    }
    ctx->pc = 0x46BB44u;
    SET_GPR_U32(ctx, 31, 0x46BB4Cu);
    ctx->pc = 0x46BB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BB44u;
            // 0x46bb48: 0x24a5edc0  addiu       $a1, $a1, -0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BB4Cu; }
        if (ctx->pc != 0x46BB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BB4Cu; }
        if (ctx->pc != 0x46BB4Cu) { return; }
    }
    ctx->pc = 0x46BB4Cu;
label_46bb4c:
    // 0x46bb4c: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x46bb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46bb50:
    // 0x46bb50: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bb54:
    // 0x46bb54: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x46bb54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bb58:
    // 0x46bb58: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46bb5c:
    // 0x46bb5c: 0x8c44025c  lw          $a0, 0x25C($v0)
    ctx->pc = 0x46bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_46bb60:
    // 0x46bb60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46bb60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46bb64:
    // 0x46bb64: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46bb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46bb68:
    // 0x46bb68: 0x320f809  jalr        $t9
label_46bb6c:
    if (ctx->pc == 0x46BB6Cu) {
        ctx->pc = 0x46BB70u;
        goto label_46bb70;
    }
    ctx->pc = 0x46BB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46BB70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46BB70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46BB70u; }
            if (ctx->pc != 0x46BB70u) { return; }
        }
        }
    }
    ctx->pc = 0x46BB70u;
label_46bb70:
    // 0x46bb70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46bb74:
    // 0x46bb74: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46bb74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46bb78:
    // 0x46bb78: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46bb7c:
    // 0x46bb7c: 0xc123848  jal         func_48E120
label_46bb80:
    if (ctx->pc == 0x46BB80u) {
        ctx->pc = 0x46BB80u;
            // 0x46bb80: 0x8c44025c  lw          $a0, 0x25C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
        ctx->pc = 0x46BB84u;
        goto label_46bb84;
    }
    ctx->pc = 0x46BB7Cu;
    SET_GPR_U32(ctx, 31, 0x46BB84u);
    ctx->pc = 0x46BB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BB7Cu;
            // 0x46bb80: 0x8c44025c  lw          $a0, 0x25C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BB84u; }
        if (ctx->pc != 0x46BB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BB84u; }
        if (ctx->pc != 0x46BB84u) { return; }
    }
    ctx->pc = 0x46BB84u;
label_46bb84:
    // 0x46bb84: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46bb88:
    // 0x46bb88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46bb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46bb8c:
    // 0x46bb8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46bb90:
    // 0x46bb90: 0x24050097  addiu       $a1, $zero, 0x97
    ctx->pc = 0x46bb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
label_46bb94:
    // 0x46bb94: 0x8c42025c  lw          $v0, 0x25C($v0)
    ctx->pc = 0x46bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_46bb98:
    // 0x46bb98: 0xa4440046  sh          $a0, 0x46($v0)
    ctx->pc = 0x46bb98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 4));
label_46bb9c:
    // 0x46bb9c: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bba0:
    // 0x46bba0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bba4:
    // 0x46bba4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46bba8:
    // 0x46bba8: 0x8c42025c  lw          $v0, 0x25C($v0)
    ctx->pc = 0x46bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_46bbac:
    // 0x46bbac: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46bbacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46bbb0:
    // 0x46bbb0: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bbb4:
    // 0x46bbb4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bbb8:
    // 0x46bbb8: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x46bbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
label_46bbbc:
    // 0x46bbbc: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bbc0:
    // 0x46bbc0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bbc4:
    // 0x46bbc4: 0xc12326c  jal         func_48C9B0
label_46bbc8:
    if (ctx->pc == 0x46BBC8u) {
        ctx->pc = 0x46BBC8u;
            // 0x46bbc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BBCCu;
        goto label_46bbcc;
    }
    ctx->pc = 0x46BBC4u;
    SET_GPR_U32(ctx, 31, 0x46BBCCu);
    ctx->pc = 0x46BBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BBC4u;
            // 0x46bbc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BBCCu; }
        if (ctx->pc != 0x46BBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BBCCu; }
        if (ctx->pc != 0x46BBCCu) { return; }
    }
    ctx->pc = 0x46BBCCu;
label_46bbcc:
    // 0x46bbcc: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bbd0:
    // 0x46bbd0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bbd4:
    // 0x46bbd4: 0x24a5edd0  addiu       $a1, $a1, -0x1230
    ctx->pc = 0x46bbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962640));
label_46bbd8:
    // 0x46bbd8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bbdc:
    // 0x46bbdc: 0xc123944  jal         func_48E510
label_46bbe0:
    if (ctx->pc == 0x46BBE0u) {
        ctx->pc = 0x46BBE0u;
            // 0x46bbe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BBE4u;
        goto label_46bbe4;
    }
    ctx->pc = 0x46BBDCu;
    SET_GPR_U32(ctx, 31, 0x46BBE4u);
    ctx->pc = 0x46BBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BBDCu;
            // 0x46bbe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BBE4u; }
        if (ctx->pc != 0x46BBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BBE4u; }
        if (ctx->pc != 0x46BBE4u) { return; }
    }
    ctx->pc = 0x46BBE4u;
label_46bbe4:
    // 0x46bbe4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46bbe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bbe8:
    // 0x46bbe8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bbec:
    // 0x46bbec: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bbf0:
    // 0x46bbf0: 0x24a5edd8  addiu       $a1, $a1, -0x1228
    ctx->pc = 0x46bbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962648));
label_46bbf4:
    // 0x46bbf4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bbf8:
    // 0x46bbf8: 0xc123944  jal         func_48E510
label_46bbfc:
    if (ctx->pc == 0x46BBFCu) {
        ctx->pc = 0x46BBFCu;
            // 0x46bbfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BC00u;
        goto label_46bc00;
    }
    ctx->pc = 0x46BBF8u;
    SET_GPR_U32(ctx, 31, 0x46BC00u);
    ctx->pc = 0x46BBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BBF8u;
            // 0x46bbfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BC00u; }
        if (ctx->pc != 0x46BC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BC00u; }
        if (ctx->pc != 0x46BC00u) { return; }
    }
    ctx->pc = 0x46BC00u;
label_46bc00:
    // 0x46bc00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46bc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bc04:
    // 0x46bc04: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bc04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bc08:
    // 0x46bc08: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bc0c:
    // 0x46bc0c: 0x24a5ede0  addiu       $a1, $a1, -0x1220
    ctx->pc = 0x46bc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962656));
label_46bc10:
    // 0x46bc10: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bc14:
    // 0x46bc14: 0xc123944  jal         func_48E510
label_46bc18:
    if (ctx->pc == 0x46BC18u) {
        ctx->pc = 0x46BC18u;
            // 0x46bc18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BC1Cu;
        goto label_46bc1c;
    }
    ctx->pc = 0x46BC14u;
    SET_GPR_U32(ctx, 31, 0x46BC1Cu);
    ctx->pc = 0x46BC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BC14u;
            // 0x46bc18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BC1Cu; }
        if (ctx->pc != 0x46BC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BC1Cu; }
        if (ctx->pc != 0x46BC1Cu) { return; }
    }
    ctx->pc = 0x46BC1Cu;
label_46bc1c:
    // 0x46bc1c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x46bc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46bc20:
    // 0x46bc20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46bc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46bc24:
    // 0x46bc24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46bc24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bc28:
    // 0x46bc28: 0xc123654  jal         func_48D950
label_46bc2c:
    if (ctx->pc == 0x46BC2Cu) {
        ctx->pc = 0x46BC2Cu;
            // 0x46bc2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46BC30u;
        goto label_46bc30;
    }
    ctx->pc = 0x46BC28u;
    SET_GPR_U32(ctx, 31, 0x46BC30u);
    ctx->pc = 0x46BC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BC28u;
            // 0x46bc2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BC30u; }
        if (ctx->pc != 0x46BC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BC30u; }
        if (ctx->pc != 0x46BC30u) { return; }
    }
    ctx->pc = 0x46BC30u;
label_46bc30:
    // 0x46bc30: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bc34:
    // 0x46bc34: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bc34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bc38:
    // 0x46bc38: 0x24a5edf0  addiu       $a1, $a1, -0x1210
    ctx->pc = 0x46bc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962672));
label_46bc3c:
    // 0x46bc3c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bc40:
    // 0x46bc40: 0xc123944  jal         func_48E510
label_46bc44:
    if (ctx->pc == 0x46BC44u) {
        ctx->pc = 0x46BC44u;
            // 0x46bc44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BC48u;
        goto label_46bc48;
    }
    ctx->pc = 0x46BC40u;
    SET_GPR_U32(ctx, 31, 0x46BC48u);
    ctx->pc = 0x46BC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BC40u;
            // 0x46bc44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BC48u; }
        if (ctx->pc != 0x46BC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BC48u; }
        if (ctx->pc != 0x46BC48u) { return; }
    }
    ctx->pc = 0x46BC48u;
label_46bc48:
    // 0x46bc48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46bc48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bc4c:
    // 0x46bc4c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bc50:
    // 0x46bc50: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bc54:
    // 0x46bc54: 0x24a5ee00  addiu       $a1, $a1, -0x1200
    ctx->pc = 0x46bc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
label_46bc58:
    // 0x46bc58: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bc5c:
    // 0x46bc5c: 0xc123944  jal         func_48E510
label_46bc60:
    if (ctx->pc == 0x46BC60u) {
        ctx->pc = 0x46BC60u;
            // 0x46bc60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BC64u;
        goto label_46bc64;
    }
    ctx->pc = 0x46BC5Cu;
    SET_GPR_U32(ctx, 31, 0x46BC64u);
    ctx->pc = 0x46BC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BC5Cu;
            // 0x46bc60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BC64u; }
        if (ctx->pc != 0x46BC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BC64u; }
        if (ctx->pc != 0x46BC64u) { return; }
    }
    ctx->pc = 0x46BC64u;
label_46bc64:
    // 0x46bc64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46bc64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bc68:
    // 0x46bc68: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bc6c:
    // 0x46bc6c: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bc70:
    // 0x46bc70: 0x24a5ee08  addiu       $a1, $a1, -0x11F8
    ctx->pc = 0x46bc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962696));
label_46bc74:
    // 0x46bc74: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bc78:
    // 0x46bc78: 0xc123944  jal         func_48E510
label_46bc7c:
    if (ctx->pc == 0x46BC7Cu) {
        ctx->pc = 0x46BC7Cu;
            // 0x46bc7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BC80u;
        goto label_46bc80;
    }
    ctx->pc = 0x46BC78u;
    SET_GPR_U32(ctx, 31, 0x46BC80u);
    ctx->pc = 0x46BC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BC78u;
            // 0x46bc7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BC80u; }
        if (ctx->pc != 0x46BC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BC80u; }
        if (ctx->pc != 0x46BC80u) { return; }
    }
    ctx->pc = 0x46BC80u;
label_46bc80:
    // 0x46bc80: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x46bc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_46bc84:
    // 0x46bc84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46bc84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bc88:
    // 0x46bc88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46bc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46bc8c:
    // 0x46bc8c: 0xc123654  jal         func_48D950
label_46bc90:
    if (ctx->pc == 0x46BC90u) {
        ctx->pc = 0x46BC90u;
            // 0x46bc90: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46BC94u;
        goto label_46bc94;
    }
    ctx->pc = 0x46BC8Cu;
    SET_GPR_U32(ctx, 31, 0x46BC94u);
    ctx->pc = 0x46BC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BC8Cu;
            // 0x46bc90: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BC94u; }
        if (ctx->pc != 0x46BC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BC94u; }
        if (ctx->pc != 0x46BC94u) { return; }
    }
    ctx->pc = 0x46BC94u;
label_46bc94:
    // 0x46bc94: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bc98:
    // 0x46bc98: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bc98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bc9c:
    // 0x46bc9c: 0x24a5ee18  addiu       $a1, $a1, -0x11E8
    ctx->pc = 0x46bc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962712));
label_46bca0:
    // 0x46bca0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bca4:
    // 0x46bca4: 0xc123944  jal         func_48E510
label_46bca8:
    if (ctx->pc == 0x46BCA8u) {
        ctx->pc = 0x46BCA8u;
            // 0x46bca8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BCACu;
        goto label_46bcac;
    }
    ctx->pc = 0x46BCA4u;
    SET_GPR_U32(ctx, 31, 0x46BCACu);
    ctx->pc = 0x46BCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BCA4u;
            // 0x46bca8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BCACu; }
        if (ctx->pc != 0x46BCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BCACu; }
        if (ctx->pc != 0x46BCACu) { return; }
    }
    ctx->pc = 0x46BCACu;
label_46bcac:
    // 0x46bcac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46bcacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bcb0:
    // 0x46bcb0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bcb4:
    // 0x46bcb4: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bcb8:
    // 0x46bcb8: 0x24a5ee20  addiu       $a1, $a1, -0x11E0
    ctx->pc = 0x46bcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962720));
label_46bcbc:
    // 0x46bcbc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bcc0:
    // 0x46bcc0: 0xc123944  jal         func_48E510
label_46bcc4:
    if (ctx->pc == 0x46BCC4u) {
        ctx->pc = 0x46BCC4u;
            // 0x46bcc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BCC8u;
        goto label_46bcc8;
    }
    ctx->pc = 0x46BCC0u;
    SET_GPR_U32(ctx, 31, 0x46BCC8u);
    ctx->pc = 0x46BCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BCC0u;
            // 0x46bcc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BCC8u; }
        if (ctx->pc != 0x46BCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BCC8u; }
        if (ctx->pc != 0x46BCC8u) { return; }
    }
    ctx->pc = 0x46BCC8u;
label_46bcc8:
    // 0x46bcc8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x46bcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_46bccc:
    // 0x46bccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46bcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46bcd0:
    // 0x46bcd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46bcd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bcd4:
    // 0x46bcd4: 0xc123654  jal         func_48D950
label_46bcd8:
    if (ctx->pc == 0x46BCD8u) {
        ctx->pc = 0x46BCD8u;
            // 0x46bcd8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46BCDCu;
        goto label_46bcdc;
    }
    ctx->pc = 0x46BCD4u;
    SET_GPR_U32(ctx, 31, 0x46BCDCu);
    ctx->pc = 0x46BCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BCD4u;
            // 0x46bcd8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BCDCu; }
        if (ctx->pc != 0x46BCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BCDCu; }
        if (ctx->pc != 0x46BCDCu) { return; }
    }
    ctx->pc = 0x46BCDCu;
label_46bcdc:
    // 0x46bcdc: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bce0:
    // 0x46bce0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bce4:
    // 0x46bce4: 0x24a5ee30  addiu       $a1, $a1, -0x11D0
    ctx->pc = 0x46bce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962736));
label_46bce8:
    // 0x46bce8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bcec:
    // 0x46bcec: 0xc123944  jal         func_48E510
label_46bcf0:
    if (ctx->pc == 0x46BCF0u) {
        ctx->pc = 0x46BCF0u;
            // 0x46bcf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BCF4u;
        goto label_46bcf4;
    }
    ctx->pc = 0x46BCECu;
    SET_GPR_U32(ctx, 31, 0x46BCF4u);
    ctx->pc = 0x46BCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BCECu;
            // 0x46bcf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BCF4u; }
        if (ctx->pc != 0x46BCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BCF4u; }
        if (ctx->pc != 0x46BCF4u) { return; }
    }
    ctx->pc = 0x46BCF4u;
label_46bcf4:
    // 0x46bcf4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46bcf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bcf8:
    // 0x46bcf8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bcfc:
    // 0x46bcfc: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bd00:
    // 0x46bd00: 0x24a5ee48  addiu       $a1, $a1, -0x11B8
    ctx->pc = 0x46bd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962760));
label_46bd04:
    // 0x46bd04: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bd08:
    // 0x46bd08: 0xc123944  jal         func_48E510
label_46bd0c:
    if (ctx->pc == 0x46BD0Cu) {
        ctx->pc = 0x46BD0Cu;
            // 0x46bd0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BD10u;
        goto label_46bd10;
    }
    ctx->pc = 0x46BD08u;
    SET_GPR_U32(ctx, 31, 0x46BD10u);
    ctx->pc = 0x46BD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BD08u;
            // 0x46bd0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BD10u; }
        if (ctx->pc != 0x46BD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BD10u; }
        if (ctx->pc != 0x46BD10u) { return; }
    }
    ctx->pc = 0x46BD10u;
label_46bd10:
    // 0x46bd10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46bd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bd14:
    // 0x46bd14: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bd14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bd18:
    // 0x46bd18: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bd1c:
    // 0x46bd1c: 0x24a5ee50  addiu       $a1, $a1, -0x11B0
    ctx->pc = 0x46bd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962768));
label_46bd20:
    // 0x46bd20: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bd24:
    // 0x46bd24: 0xc123944  jal         func_48E510
label_46bd28:
    if (ctx->pc == 0x46BD28u) {
        ctx->pc = 0x46BD28u;
            // 0x46bd28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BD2Cu;
        goto label_46bd2c;
    }
    ctx->pc = 0x46BD24u;
    SET_GPR_U32(ctx, 31, 0x46BD2Cu);
    ctx->pc = 0x46BD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BD24u;
            // 0x46bd28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BD2Cu; }
        if (ctx->pc != 0x46BD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BD2Cu; }
        if (ctx->pc != 0x46BD2Cu) { return; }
    }
    ctx->pc = 0x46BD2Cu;
label_46bd2c:
    // 0x46bd2c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x46bd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46bd30:
    // 0x46bd30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46bd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46bd34:
    // 0x46bd34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46bd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bd38:
    // 0x46bd38: 0xc123654  jal         func_48D950
label_46bd3c:
    if (ctx->pc == 0x46BD3Cu) {
        ctx->pc = 0x46BD3Cu;
            // 0x46bd3c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46BD40u;
        goto label_46bd40;
    }
    ctx->pc = 0x46BD38u;
    SET_GPR_U32(ctx, 31, 0x46BD40u);
    ctx->pc = 0x46BD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BD38u;
            // 0x46bd3c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BD40u; }
        if (ctx->pc != 0x46BD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BD40u; }
        if (ctx->pc != 0x46BD40u) { return; }
    }
    ctx->pc = 0x46BD40u;
label_46bd40:
    // 0x46bd40: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bd44:
    // 0x46bd44: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bd44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bd48:
    // 0x46bd48: 0x24a5ee68  addiu       $a1, $a1, -0x1198
    ctx->pc = 0x46bd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962792));
label_46bd4c:
    // 0x46bd4c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bd50:
    // 0x46bd50: 0xc123944  jal         func_48E510
label_46bd54:
    if (ctx->pc == 0x46BD54u) {
        ctx->pc = 0x46BD54u;
            // 0x46bd54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BD58u;
        goto label_46bd58;
    }
    ctx->pc = 0x46BD50u;
    SET_GPR_U32(ctx, 31, 0x46BD58u);
    ctx->pc = 0x46BD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BD50u;
            // 0x46bd54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BD58u; }
        if (ctx->pc != 0x46BD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BD58u; }
        if (ctx->pc != 0x46BD58u) { return; }
    }
    ctx->pc = 0x46BD58u;
label_46bd58:
    // 0x46bd58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46bd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bd5c:
    // 0x46bd5c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bd60:
    // 0x46bd60: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bd64:
    // 0x46bd64: 0x24a5ee78  addiu       $a1, $a1, -0x1188
    ctx->pc = 0x46bd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962808));
label_46bd68:
    // 0x46bd68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bd6c:
    // 0x46bd6c: 0xc123944  jal         func_48E510
label_46bd70:
    if (ctx->pc == 0x46BD70u) {
        ctx->pc = 0x46BD70u;
            // 0x46bd70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BD74u;
        goto label_46bd74;
    }
    ctx->pc = 0x46BD6Cu;
    SET_GPR_U32(ctx, 31, 0x46BD74u);
    ctx->pc = 0x46BD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BD6Cu;
            // 0x46bd70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BD74u; }
        if (ctx->pc != 0x46BD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BD74u; }
        if (ctx->pc != 0x46BD74u) { return; }
    }
    ctx->pc = 0x46BD74u;
label_46bd74:
    // 0x46bd74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46bd74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bd78:
    // 0x46bd78: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bd78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bd7c:
    // 0x46bd7c: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bd80:
    // 0x46bd80: 0x24a5ee80  addiu       $a1, $a1, -0x1180
    ctx->pc = 0x46bd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962816));
label_46bd84:
    // 0x46bd84: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bd88:
    // 0x46bd88: 0xc123944  jal         func_48E510
label_46bd8c:
    if (ctx->pc == 0x46BD8Cu) {
        ctx->pc = 0x46BD8Cu;
            // 0x46bd8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BD90u;
        goto label_46bd90;
    }
    ctx->pc = 0x46BD88u;
    SET_GPR_U32(ctx, 31, 0x46BD90u);
    ctx->pc = 0x46BD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BD88u;
            // 0x46bd8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BD90u; }
        if (ctx->pc != 0x46BD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BD90u; }
        if (ctx->pc != 0x46BD90u) { return; }
    }
    ctx->pc = 0x46BD90u;
label_46bd90:
    // 0x46bd90: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x46bd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_46bd94:
    // 0x46bd94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46bd94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bd98:
    // 0x46bd98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46bd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46bd9c:
    // 0x46bd9c: 0xc123654  jal         func_48D950
label_46bda0:
    if (ctx->pc == 0x46BDA0u) {
        ctx->pc = 0x46BDA0u;
            // 0x46bda0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46BDA4u;
        goto label_46bda4;
    }
    ctx->pc = 0x46BD9Cu;
    SET_GPR_U32(ctx, 31, 0x46BDA4u);
    ctx->pc = 0x46BDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BD9Cu;
            // 0x46bda0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BDA4u; }
        if (ctx->pc != 0x46BDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BDA4u; }
        if (ctx->pc != 0x46BDA4u) { return; }
    }
    ctx->pc = 0x46BDA4u;
label_46bda4:
    // 0x46bda4: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bda8:
    // 0x46bda8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bdac:
    // 0x46bdac: 0x24a5ee98  addiu       $a1, $a1, -0x1168
    ctx->pc = 0x46bdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962840));
label_46bdb0:
    // 0x46bdb0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bdb4:
    // 0x46bdb4: 0xc123944  jal         func_48E510
label_46bdb8:
    if (ctx->pc == 0x46BDB8u) {
        ctx->pc = 0x46BDB8u;
            // 0x46bdb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BDBCu;
        goto label_46bdbc;
    }
    ctx->pc = 0x46BDB4u;
    SET_GPR_U32(ctx, 31, 0x46BDBCu);
    ctx->pc = 0x46BDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BDB4u;
            // 0x46bdb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BDBCu; }
        if (ctx->pc != 0x46BDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BDBCu; }
        if (ctx->pc != 0x46BDBCu) { return; }
    }
    ctx->pc = 0x46BDBCu;
label_46bdbc:
    // 0x46bdbc: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x46bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46bdc0:
    // 0x46bdc0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bdc4:
    // 0x46bdc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46bdc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bdc8:
    // 0x46bdc8: 0x24a5eea0  addiu       $a1, $a1, -0x1160
    ctx->pc = 0x46bdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962848));
label_46bdcc:
    // 0x46bdcc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46bdd0:
    // 0x46bdd0: 0xc123944  jal         func_48E510
label_46bdd4:
    if (ctx->pc == 0x46BDD4u) {
        ctx->pc = 0x46BDD4u;
            // 0x46bdd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BDD8u;
        goto label_46bdd8;
    }
    ctx->pc = 0x46BDD0u;
    SET_GPR_U32(ctx, 31, 0x46BDD8u);
    ctx->pc = 0x46BDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BDD0u;
            // 0x46bdd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BDD8u; }
        if (ctx->pc != 0x46BDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BDD8u; }
        if (ctx->pc != 0x46BDD8u) { return; }
    }
    ctx->pc = 0x46BDD8u;
label_46bdd8:
    // 0x46bdd8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x46bdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_46bddc:
    // 0x46bddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46bddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46bde0:
    // 0x46bde0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46bde0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46bde4:
    // 0x46bde4: 0xc123654  jal         func_48D950
label_46bde8:
    if (ctx->pc == 0x46BDE8u) {
        ctx->pc = 0x46BDE8u;
            // 0x46bde8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46BDECu;
        goto label_46bdec;
    }
    ctx->pc = 0x46BDE4u;
    SET_GPR_U32(ctx, 31, 0x46BDECu);
    ctx->pc = 0x46BDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BDE4u;
            // 0x46bde8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BDECu; }
        if (ctx->pc != 0x46BDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BDECu; }
        if (ctx->pc != 0x46BDECu) { return; }
    }
    ctx->pc = 0x46BDECu;
label_46bdec:
    // 0x46bdec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x46bdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_46bdf0:
    // 0x46bdf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46bdf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46bdf4:
    // 0x46bdf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46bdf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46bdf8:
    // 0x46bdf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46bdf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46bdfc:
    // 0x46bdfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46bdfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46be00:
    // 0x46be00: 0x3e00008  jr          $ra
label_46be04:
    if (ctx->pc == 0x46BE04u) {
        ctx->pc = 0x46BE04u;
            // 0x46be04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x46BE08u;
        goto label_46be08;
    }
    ctx->pc = 0x46BE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46BE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46BE00u;
            // 0x46be04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46BE08u;
label_46be08:
    // 0x46be08: 0x0  nop
    ctx->pc = 0x46be08u;
    // NOP
label_46be0c:
    // 0x46be0c: 0x0  nop
    ctx->pc = 0x46be0cu;
    // NOP
}
