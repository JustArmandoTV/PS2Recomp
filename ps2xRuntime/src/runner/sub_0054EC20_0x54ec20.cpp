#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0054EC20
// Address: 0x54ec20 - 0x54f180
void sub_0054EC20_0x54ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0054EC20_0x54ec20");
#endif

    switch (ctx->pc) {
        case 0x54ec20u: goto label_54ec20;
        case 0x54ec24u: goto label_54ec24;
        case 0x54ec28u: goto label_54ec28;
        case 0x54ec2cu: goto label_54ec2c;
        case 0x54ec30u: goto label_54ec30;
        case 0x54ec34u: goto label_54ec34;
        case 0x54ec38u: goto label_54ec38;
        case 0x54ec3cu: goto label_54ec3c;
        case 0x54ec40u: goto label_54ec40;
        case 0x54ec44u: goto label_54ec44;
        case 0x54ec48u: goto label_54ec48;
        case 0x54ec4cu: goto label_54ec4c;
        case 0x54ec50u: goto label_54ec50;
        case 0x54ec54u: goto label_54ec54;
        case 0x54ec58u: goto label_54ec58;
        case 0x54ec5cu: goto label_54ec5c;
        case 0x54ec60u: goto label_54ec60;
        case 0x54ec64u: goto label_54ec64;
        case 0x54ec68u: goto label_54ec68;
        case 0x54ec6cu: goto label_54ec6c;
        case 0x54ec70u: goto label_54ec70;
        case 0x54ec74u: goto label_54ec74;
        case 0x54ec78u: goto label_54ec78;
        case 0x54ec7cu: goto label_54ec7c;
        case 0x54ec80u: goto label_54ec80;
        case 0x54ec84u: goto label_54ec84;
        case 0x54ec88u: goto label_54ec88;
        case 0x54ec8cu: goto label_54ec8c;
        case 0x54ec90u: goto label_54ec90;
        case 0x54ec94u: goto label_54ec94;
        case 0x54ec98u: goto label_54ec98;
        case 0x54ec9cu: goto label_54ec9c;
        case 0x54eca0u: goto label_54eca0;
        case 0x54eca4u: goto label_54eca4;
        case 0x54eca8u: goto label_54eca8;
        case 0x54ecacu: goto label_54ecac;
        case 0x54ecb0u: goto label_54ecb0;
        case 0x54ecb4u: goto label_54ecb4;
        case 0x54ecb8u: goto label_54ecb8;
        case 0x54ecbcu: goto label_54ecbc;
        case 0x54ecc0u: goto label_54ecc0;
        case 0x54ecc4u: goto label_54ecc4;
        case 0x54ecc8u: goto label_54ecc8;
        case 0x54ecccu: goto label_54eccc;
        case 0x54ecd0u: goto label_54ecd0;
        case 0x54ecd4u: goto label_54ecd4;
        case 0x54ecd8u: goto label_54ecd8;
        case 0x54ecdcu: goto label_54ecdc;
        case 0x54ece0u: goto label_54ece0;
        case 0x54ece4u: goto label_54ece4;
        case 0x54ece8u: goto label_54ece8;
        case 0x54ececu: goto label_54ecec;
        case 0x54ecf0u: goto label_54ecf0;
        case 0x54ecf4u: goto label_54ecf4;
        case 0x54ecf8u: goto label_54ecf8;
        case 0x54ecfcu: goto label_54ecfc;
        case 0x54ed00u: goto label_54ed00;
        case 0x54ed04u: goto label_54ed04;
        case 0x54ed08u: goto label_54ed08;
        case 0x54ed0cu: goto label_54ed0c;
        case 0x54ed10u: goto label_54ed10;
        case 0x54ed14u: goto label_54ed14;
        case 0x54ed18u: goto label_54ed18;
        case 0x54ed1cu: goto label_54ed1c;
        case 0x54ed20u: goto label_54ed20;
        case 0x54ed24u: goto label_54ed24;
        case 0x54ed28u: goto label_54ed28;
        case 0x54ed2cu: goto label_54ed2c;
        case 0x54ed30u: goto label_54ed30;
        case 0x54ed34u: goto label_54ed34;
        case 0x54ed38u: goto label_54ed38;
        case 0x54ed3cu: goto label_54ed3c;
        case 0x54ed40u: goto label_54ed40;
        case 0x54ed44u: goto label_54ed44;
        case 0x54ed48u: goto label_54ed48;
        case 0x54ed4cu: goto label_54ed4c;
        case 0x54ed50u: goto label_54ed50;
        case 0x54ed54u: goto label_54ed54;
        case 0x54ed58u: goto label_54ed58;
        case 0x54ed5cu: goto label_54ed5c;
        case 0x54ed60u: goto label_54ed60;
        case 0x54ed64u: goto label_54ed64;
        case 0x54ed68u: goto label_54ed68;
        case 0x54ed6cu: goto label_54ed6c;
        case 0x54ed70u: goto label_54ed70;
        case 0x54ed74u: goto label_54ed74;
        case 0x54ed78u: goto label_54ed78;
        case 0x54ed7cu: goto label_54ed7c;
        case 0x54ed80u: goto label_54ed80;
        case 0x54ed84u: goto label_54ed84;
        case 0x54ed88u: goto label_54ed88;
        case 0x54ed8cu: goto label_54ed8c;
        case 0x54ed90u: goto label_54ed90;
        case 0x54ed94u: goto label_54ed94;
        case 0x54ed98u: goto label_54ed98;
        case 0x54ed9cu: goto label_54ed9c;
        case 0x54eda0u: goto label_54eda0;
        case 0x54eda4u: goto label_54eda4;
        case 0x54eda8u: goto label_54eda8;
        case 0x54edacu: goto label_54edac;
        case 0x54edb0u: goto label_54edb0;
        case 0x54edb4u: goto label_54edb4;
        case 0x54edb8u: goto label_54edb8;
        case 0x54edbcu: goto label_54edbc;
        case 0x54edc0u: goto label_54edc0;
        case 0x54edc4u: goto label_54edc4;
        case 0x54edc8u: goto label_54edc8;
        case 0x54edccu: goto label_54edcc;
        case 0x54edd0u: goto label_54edd0;
        case 0x54edd4u: goto label_54edd4;
        case 0x54edd8u: goto label_54edd8;
        case 0x54eddcu: goto label_54eddc;
        case 0x54ede0u: goto label_54ede0;
        case 0x54ede4u: goto label_54ede4;
        case 0x54ede8u: goto label_54ede8;
        case 0x54edecu: goto label_54edec;
        case 0x54edf0u: goto label_54edf0;
        case 0x54edf4u: goto label_54edf4;
        case 0x54edf8u: goto label_54edf8;
        case 0x54edfcu: goto label_54edfc;
        case 0x54ee00u: goto label_54ee00;
        case 0x54ee04u: goto label_54ee04;
        case 0x54ee08u: goto label_54ee08;
        case 0x54ee0cu: goto label_54ee0c;
        case 0x54ee10u: goto label_54ee10;
        case 0x54ee14u: goto label_54ee14;
        case 0x54ee18u: goto label_54ee18;
        case 0x54ee1cu: goto label_54ee1c;
        case 0x54ee20u: goto label_54ee20;
        case 0x54ee24u: goto label_54ee24;
        case 0x54ee28u: goto label_54ee28;
        case 0x54ee2cu: goto label_54ee2c;
        case 0x54ee30u: goto label_54ee30;
        case 0x54ee34u: goto label_54ee34;
        case 0x54ee38u: goto label_54ee38;
        case 0x54ee3cu: goto label_54ee3c;
        case 0x54ee40u: goto label_54ee40;
        case 0x54ee44u: goto label_54ee44;
        case 0x54ee48u: goto label_54ee48;
        case 0x54ee4cu: goto label_54ee4c;
        case 0x54ee50u: goto label_54ee50;
        case 0x54ee54u: goto label_54ee54;
        case 0x54ee58u: goto label_54ee58;
        case 0x54ee5cu: goto label_54ee5c;
        case 0x54ee60u: goto label_54ee60;
        case 0x54ee64u: goto label_54ee64;
        case 0x54ee68u: goto label_54ee68;
        case 0x54ee6cu: goto label_54ee6c;
        case 0x54ee70u: goto label_54ee70;
        case 0x54ee74u: goto label_54ee74;
        case 0x54ee78u: goto label_54ee78;
        case 0x54ee7cu: goto label_54ee7c;
        case 0x54ee80u: goto label_54ee80;
        case 0x54ee84u: goto label_54ee84;
        case 0x54ee88u: goto label_54ee88;
        case 0x54ee8cu: goto label_54ee8c;
        case 0x54ee90u: goto label_54ee90;
        case 0x54ee94u: goto label_54ee94;
        case 0x54ee98u: goto label_54ee98;
        case 0x54ee9cu: goto label_54ee9c;
        case 0x54eea0u: goto label_54eea0;
        case 0x54eea4u: goto label_54eea4;
        case 0x54eea8u: goto label_54eea8;
        case 0x54eeacu: goto label_54eeac;
        case 0x54eeb0u: goto label_54eeb0;
        case 0x54eeb4u: goto label_54eeb4;
        case 0x54eeb8u: goto label_54eeb8;
        case 0x54eebcu: goto label_54eebc;
        case 0x54eec0u: goto label_54eec0;
        case 0x54eec4u: goto label_54eec4;
        case 0x54eec8u: goto label_54eec8;
        case 0x54eeccu: goto label_54eecc;
        case 0x54eed0u: goto label_54eed0;
        case 0x54eed4u: goto label_54eed4;
        case 0x54eed8u: goto label_54eed8;
        case 0x54eedcu: goto label_54eedc;
        case 0x54eee0u: goto label_54eee0;
        case 0x54eee4u: goto label_54eee4;
        case 0x54eee8u: goto label_54eee8;
        case 0x54eeecu: goto label_54eeec;
        case 0x54eef0u: goto label_54eef0;
        case 0x54eef4u: goto label_54eef4;
        case 0x54eef8u: goto label_54eef8;
        case 0x54eefcu: goto label_54eefc;
        case 0x54ef00u: goto label_54ef00;
        case 0x54ef04u: goto label_54ef04;
        case 0x54ef08u: goto label_54ef08;
        case 0x54ef0cu: goto label_54ef0c;
        case 0x54ef10u: goto label_54ef10;
        case 0x54ef14u: goto label_54ef14;
        case 0x54ef18u: goto label_54ef18;
        case 0x54ef1cu: goto label_54ef1c;
        case 0x54ef20u: goto label_54ef20;
        case 0x54ef24u: goto label_54ef24;
        case 0x54ef28u: goto label_54ef28;
        case 0x54ef2cu: goto label_54ef2c;
        case 0x54ef30u: goto label_54ef30;
        case 0x54ef34u: goto label_54ef34;
        case 0x54ef38u: goto label_54ef38;
        case 0x54ef3cu: goto label_54ef3c;
        case 0x54ef40u: goto label_54ef40;
        case 0x54ef44u: goto label_54ef44;
        case 0x54ef48u: goto label_54ef48;
        case 0x54ef4cu: goto label_54ef4c;
        case 0x54ef50u: goto label_54ef50;
        case 0x54ef54u: goto label_54ef54;
        case 0x54ef58u: goto label_54ef58;
        case 0x54ef5cu: goto label_54ef5c;
        case 0x54ef60u: goto label_54ef60;
        case 0x54ef64u: goto label_54ef64;
        case 0x54ef68u: goto label_54ef68;
        case 0x54ef6cu: goto label_54ef6c;
        case 0x54ef70u: goto label_54ef70;
        case 0x54ef74u: goto label_54ef74;
        case 0x54ef78u: goto label_54ef78;
        case 0x54ef7cu: goto label_54ef7c;
        case 0x54ef80u: goto label_54ef80;
        case 0x54ef84u: goto label_54ef84;
        case 0x54ef88u: goto label_54ef88;
        case 0x54ef8cu: goto label_54ef8c;
        case 0x54ef90u: goto label_54ef90;
        case 0x54ef94u: goto label_54ef94;
        case 0x54ef98u: goto label_54ef98;
        case 0x54ef9cu: goto label_54ef9c;
        case 0x54efa0u: goto label_54efa0;
        case 0x54efa4u: goto label_54efa4;
        case 0x54efa8u: goto label_54efa8;
        case 0x54efacu: goto label_54efac;
        case 0x54efb0u: goto label_54efb0;
        case 0x54efb4u: goto label_54efb4;
        case 0x54efb8u: goto label_54efb8;
        case 0x54efbcu: goto label_54efbc;
        case 0x54efc0u: goto label_54efc0;
        case 0x54efc4u: goto label_54efc4;
        case 0x54efc8u: goto label_54efc8;
        case 0x54efccu: goto label_54efcc;
        case 0x54efd0u: goto label_54efd0;
        case 0x54efd4u: goto label_54efd4;
        case 0x54efd8u: goto label_54efd8;
        case 0x54efdcu: goto label_54efdc;
        case 0x54efe0u: goto label_54efe0;
        case 0x54efe4u: goto label_54efe4;
        case 0x54efe8u: goto label_54efe8;
        case 0x54efecu: goto label_54efec;
        case 0x54eff0u: goto label_54eff0;
        case 0x54eff4u: goto label_54eff4;
        case 0x54eff8u: goto label_54eff8;
        case 0x54effcu: goto label_54effc;
        case 0x54f000u: goto label_54f000;
        case 0x54f004u: goto label_54f004;
        case 0x54f008u: goto label_54f008;
        case 0x54f00cu: goto label_54f00c;
        case 0x54f010u: goto label_54f010;
        case 0x54f014u: goto label_54f014;
        case 0x54f018u: goto label_54f018;
        case 0x54f01cu: goto label_54f01c;
        case 0x54f020u: goto label_54f020;
        case 0x54f024u: goto label_54f024;
        case 0x54f028u: goto label_54f028;
        case 0x54f02cu: goto label_54f02c;
        case 0x54f030u: goto label_54f030;
        case 0x54f034u: goto label_54f034;
        case 0x54f038u: goto label_54f038;
        case 0x54f03cu: goto label_54f03c;
        case 0x54f040u: goto label_54f040;
        case 0x54f044u: goto label_54f044;
        case 0x54f048u: goto label_54f048;
        case 0x54f04cu: goto label_54f04c;
        case 0x54f050u: goto label_54f050;
        case 0x54f054u: goto label_54f054;
        case 0x54f058u: goto label_54f058;
        case 0x54f05cu: goto label_54f05c;
        case 0x54f060u: goto label_54f060;
        case 0x54f064u: goto label_54f064;
        case 0x54f068u: goto label_54f068;
        case 0x54f06cu: goto label_54f06c;
        case 0x54f070u: goto label_54f070;
        case 0x54f074u: goto label_54f074;
        case 0x54f078u: goto label_54f078;
        case 0x54f07cu: goto label_54f07c;
        case 0x54f080u: goto label_54f080;
        case 0x54f084u: goto label_54f084;
        case 0x54f088u: goto label_54f088;
        case 0x54f08cu: goto label_54f08c;
        case 0x54f090u: goto label_54f090;
        case 0x54f094u: goto label_54f094;
        case 0x54f098u: goto label_54f098;
        case 0x54f09cu: goto label_54f09c;
        case 0x54f0a0u: goto label_54f0a0;
        case 0x54f0a4u: goto label_54f0a4;
        case 0x54f0a8u: goto label_54f0a8;
        case 0x54f0acu: goto label_54f0ac;
        case 0x54f0b0u: goto label_54f0b0;
        case 0x54f0b4u: goto label_54f0b4;
        case 0x54f0b8u: goto label_54f0b8;
        case 0x54f0bcu: goto label_54f0bc;
        case 0x54f0c0u: goto label_54f0c0;
        case 0x54f0c4u: goto label_54f0c4;
        case 0x54f0c8u: goto label_54f0c8;
        case 0x54f0ccu: goto label_54f0cc;
        case 0x54f0d0u: goto label_54f0d0;
        case 0x54f0d4u: goto label_54f0d4;
        case 0x54f0d8u: goto label_54f0d8;
        case 0x54f0dcu: goto label_54f0dc;
        case 0x54f0e0u: goto label_54f0e0;
        case 0x54f0e4u: goto label_54f0e4;
        case 0x54f0e8u: goto label_54f0e8;
        case 0x54f0ecu: goto label_54f0ec;
        case 0x54f0f0u: goto label_54f0f0;
        case 0x54f0f4u: goto label_54f0f4;
        case 0x54f0f8u: goto label_54f0f8;
        case 0x54f0fcu: goto label_54f0fc;
        case 0x54f100u: goto label_54f100;
        case 0x54f104u: goto label_54f104;
        case 0x54f108u: goto label_54f108;
        case 0x54f10cu: goto label_54f10c;
        case 0x54f110u: goto label_54f110;
        case 0x54f114u: goto label_54f114;
        case 0x54f118u: goto label_54f118;
        case 0x54f11cu: goto label_54f11c;
        case 0x54f120u: goto label_54f120;
        case 0x54f124u: goto label_54f124;
        case 0x54f128u: goto label_54f128;
        case 0x54f12cu: goto label_54f12c;
        case 0x54f130u: goto label_54f130;
        case 0x54f134u: goto label_54f134;
        case 0x54f138u: goto label_54f138;
        case 0x54f13cu: goto label_54f13c;
        case 0x54f140u: goto label_54f140;
        case 0x54f144u: goto label_54f144;
        case 0x54f148u: goto label_54f148;
        case 0x54f14cu: goto label_54f14c;
        case 0x54f150u: goto label_54f150;
        case 0x54f154u: goto label_54f154;
        case 0x54f158u: goto label_54f158;
        case 0x54f15cu: goto label_54f15c;
        case 0x54f160u: goto label_54f160;
        case 0x54f164u: goto label_54f164;
        case 0x54f168u: goto label_54f168;
        case 0x54f16cu: goto label_54f16c;
        case 0x54f170u: goto label_54f170;
        case 0x54f174u: goto label_54f174;
        case 0x54f178u: goto label_54f178;
        case 0x54f17cu: goto label_54f17c;
        default: break;
    }

    ctx->pc = 0x54ec20u;

label_54ec20:
    // 0x54ec20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x54ec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_54ec24:
    // 0x54ec24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54ec28:
    // 0x54ec28: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x54ec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_54ec2c:
    // 0x54ec2c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x54ec2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_54ec30:
    // 0x54ec30: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x54ec30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_54ec34:
    // 0x54ec34: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x54ec34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_54ec38:
    // 0x54ec38: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x54ec38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_54ec3c:
    // 0x54ec3c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x54ec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_54ec40:
    // 0x54ec40: 0x3c150063  lui         $s5, 0x63
    ctx->pc = 0x54ec40u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)99 << 16));
label_54ec44:
    // 0x54ec44: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x54ec44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_54ec48:
    // 0x54ec48: 0x26b5d960  addiu       $s5, $s5, -0x26A0
    ctx->pc = 0x54ec48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957408));
label_54ec4c:
    // 0x54ec4c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x54ec4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_54ec50:
    // 0x54ec50: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x54ec50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_54ec54:
    // 0x54ec54: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x54ec54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_54ec58:
    // 0x54ec58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x54ec58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_54ec5c:
    // 0x54ec5c: 0x2652e080  addiu       $s2, $s2, -0x1F80
    ctx->pc = 0x54ec5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959232));
label_54ec60:
    // 0x54ec60: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x54ec60u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_54ec64:
    // 0x54ec64: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x54ec64u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_54ec68:
    // 0x54ec68: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x54ec68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_54ec6c:
    // 0x54ec6c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x54ec6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_54ec70:
    // 0x54ec70: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x54ec70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_54ec74:
    // 0x54ec74: 0x8c460ec8  lw          $a2, 0xEC8($v0)
    ctx->pc = 0x54ec74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54ec78:
    // 0x54ec78: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x54ec78u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_54ec7c:
    // 0x54ec7c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x54ec7cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_54ec80:
    // 0x54ec80: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x54ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_54ec84:
    // 0x54ec84: 0x8cd30008  lw          $s3, 0x8($a2)
    ctx->pc = 0x54ec84u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_54ec88:
    // 0x54ec88: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x54ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_54ec8c:
    // 0x54ec8c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x54ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_54ec90:
    // 0x54ec90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x54ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_54ec94:
    // 0x54ec94: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x54ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
label_54ec98:
    // 0x54ec98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54ec98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54ec9c:
    // 0x54ec9c: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x54ec9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_54eca0:
    // 0x54eca0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54eca4:
    // 0x54eca4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54eca8:
    // 0x54eca8: 0x9450daea  lhu         $s0, -0x2516($v0)
    ctx->pc = 0x54eca8u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957802)));
label_54ecac:
    // 0x54ecac: 0x9471dae8  lhu         $s1, -0x2518($v1)
    ctx->pc = 0x54ecacu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957800)));
label_54ecb0:
    // 0x54ecb0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54ecb4:
    // 0x54ecb4: 0x8446d964  lh          $a2, -0x269C($v0)
    ctx->pc = 0x54ecb4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957412)));
label_54ecb8:
    // 0x54ecb8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x54ecb8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ecbc:
    // 0x54ecbc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54ecc0:
    // 0x54ecc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54ecc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54ecc4:
    // 0x54ecc4: 0x8443d966  lh          $v1, -0x269A($v0)
    ctx->pc = 0x54ecc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957414)));
label_54ecc8:
    // 0x54ecc8: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x54ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_54eccc:
    // 0x54eccc: 0x4600bd40  add.s       $f21, $f23, $f0
    ctx->pc = 0x54ecccu;
    ctx->f[21] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_54ecd0:
    // 0x54ecd0: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x54ecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_54ecd4:
    // 0x54ecd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ecd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ecd8:
    // 0x54ecd8: 0x0  nop
    ctx->pc = 0x54ecd8u;
    // NOP
label_54ecdc:
    // 0x54ecdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54ecdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54ece0:
    // 0x54ece0: 0xc0506ac  jal         func_141AB0
label_54ece4:
    if (ctx->pc == 0x54ECE4u) {
        ctx->pc = 0x54ECE4u;
            // 0x54ece4: 0x4600b500  add.s       $f20, $f22, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x54ECE8u;
        goto label_54ece8;
    }
    ctx->pc = 0x54ECE0u;
    SET_GPR_U32(ctx, 31, 0x54ECE8u);
    ctx->pc = 0x54ECE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54ECE0u;
            // 0x54ece4: 0x4600b500  add.s       $f20, $f22, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54ECE8u; }
        if (ctx->pc != 0x54ECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54ECE8u; }
        if (ctx->pc != 0x54ECE8u) { return; }
    }
    ctx->pc = 0x54ECE8u;
label_54ece8:
    // 0x54ece8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54ecec:
    // 0x54ecec: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54ececu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54ecf0:
    // 0x54ecf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54ecf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54ecf4:
    // 0x54ecf4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54ecf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54ecf8:
    // 0x54ecf8: 0x320f809  jalr        $t9
label_54ecfc:
    if (ctx->pc == 0x54ECFCu) {
        ctx->pc = 0x54ECFCu;
            // 0x54ecfc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54ED00u;
        goto label_54ed00;
    }
    ctx->pc = 0x54ECF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54ED00u);
        ctx->pc = 0x54ECFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54ECF8u;
            // 0x54ecfc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54ED00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54ED00u; }
            if (ctx->pc != 0x54ED00u) { return; }
        }
        }
    }
    ctx->pc = 0x54ED00u;
label_54ed00:
    // 0x54ed00: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54ed04:
    // 0x54ed04: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54ed08:
    // 0x54ed08: 0x24a5e110  addiu       $a1, $a1, -0x1EF0
    ctx->pc = 0x54ed08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959376));
label_54ed0c:
    // 0x54ed0c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x54ed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54ed10:
    // 0x54ed10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54ed10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54ed14:
    // 0x54ed14: 0xc4b80008  lwc1        $f24, 0x8($a1)
    ctx->pc = 0x54ed14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_54ed18:
    // 0x54ed18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x54ed18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_54ed1c:
    // 0x54ed1c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54ed20:
    if (ctx->pc == 0x54ED20u) {
        ctx->pc = 0x54ED20u;
            // 0x54ed20: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->pc = 0x54ED24u;
        goto label_54ed24;
    }
    ctx->pc = 0x54ED1Cu;
    {
        const bool branch_taken_0x54ed1c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54ED20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54ED1Cu;
            // 0x54ed20: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ed1c) {
            ctx->pc = 0x54ED30u;
            goto label_54ed30;
        }
    }
    ctx->pc = 0x54ED24u;
label_54ed24:
    // 0x54ed24: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54ed24u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ed28:
    // 0x54ed28: 0x10000008  b           . + 4 + (0x8 << 2)
label_54ed2c:
    if (ctx->pc == 0x54ED2Cu) {
        ctx->pc = 0x54ED2Cu;
            // 0x54ed2c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54ED30u;
        goto label_54ed30;
    }
    ctx->pc = 0x54ED28u;
    {
        const bool branch_taken_0x54ed28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54ED2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54ED28u;
            // 0x54ed2c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ed28) {
            ctx->pc = 0x54ED4Cu;
            goto label_54ed4c;
        }
    }
    ctx->pc = 0x54ED30u;
label_54ed30:
    // 0x54ed30: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54ed30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54ed34:
    // 0x54ed34: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54ed34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54ed38:
    // 0x54ed38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ed38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ed3c:
    // 0x54ed3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ed3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ed40:
    // 0x54ed40: 0x0  nop
    ctx->pc = 0x54ed40u;
    // NOP
label_54ed44:
    // 0x54ed44: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54ed44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54ed48:
    // 0x54ed48: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54ed48u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54ed4c:
    // 0x54ed4c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54ed50:
    if (ctx->pc == 0x54ED50u) {
        ctx->pc = 0x54ED50u;
            // 0x54ed50: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54ED54u;
        goto label_54ed54;
    }
    ctx->pc = 0x54ED4Cu;
    {
        const bool branch_taken_0x54ed4c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54ed4c) {
            ctx->pc = 0x54ED50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54ED4Cu;
            // 0x54ed50: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54ED60u;
            goto label_54ed60;
        }
    }
    ctx->pc = 0x54ED54u;
label_54ed54:
    // 0x54ed54: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54ed54u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ed58:
    // 0x54ed58: 0x10000007  b           . + 4 + (0x7 << 2)
label_54ed5c:
    if (ctx->pc == 0x54ED5Cu) {
        ctx->pc = 0x54ED5Cu;
            // 0x54ed5c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54ED60u;
        goto label_54ed60;
    }
    ctx->pc = 0x54ED58u;
    {
        const bool branch_taken_0x54ed58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54ED5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54ED58u;
            // 0x54ed5c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ed58) {
            ctx->pc = 0x54ED78u;
            goto label_54ed78;
        }
    }
    ctx->pc = 0x54ED60u;
label_54ed60:
    // 0x54ed60: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54ed60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54ed64:
    // 0x54ed64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ed64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ed68:
    // 0x54ed68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ed68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ed6c:
    // 0x54ed6c: 0x0  nop
    ctx->pc = 0x54ed6cu;
    // NOP
label_54ed70:
    // 0x54ed70: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54ed70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54ed74:
    // 0x54ed74: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54ed74u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54ed78:
    // 0x54ed78: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x54ed78u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_54ed7c:
    // 0x54ed7c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54ed80:
    // 0x54ed80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54ed80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54ed84:
    // 0x54ed84: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54ed84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54ed88:
    // 0x54ed88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54ed88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54ed8c:
    // 0x54ed8c: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x54ed8cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_54ed90:
    // 0x54ed90: 0x4618ab80  add.s       $f14, $f21, $f24
    ctx->pc = 0x54ed90u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
label_54ed94:
    // 0x54ed94: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54ed94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54ed98:
    // 0x54ed98: 0xc0bc284  jal         func_2F0A10
label_54ed9c:
    if (ctx->pc == 0x54ED9Cu) {
        ctx->pc = 0x54ED9Cu;
            // 0x54ed9c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x54EDA0u;
        goto label_54eda0;
    }
    ctx->pc = 0x54ED98u;
    SET_GPR_U32(ctx, 31, 0x54EDA0u);
    ctx->pc = 0x54ED9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54ED98u;
            // 0x54ed9c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EDA0u; }
        if (ctx->pc != 0x54EDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EDA0u; }
        if (ctx->pc != 0x54EDA0u) { return; }
    }
    ctx->pc = 0x54EDA0u;
label_54eda0:
    // 0x54eda0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54eda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54eda4:
    // 0x54eda4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x54eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_54eda8:
    // 0x54eda8: 0x24a5e170  addiu       $a1, $a1, -0x1E90
    ctx->pc = 0x54eda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959472));
label_54edac:
    // 0x54edac: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54edacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54edb0:
    // 0x54edb0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x54edb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54edb4:
    // 0x54edb4: 0x9042d996  lbu         $v0, -0x266A($v0)
    ctx->pc = 0x54edb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957462)));
label_54edb8:
    // 0x54edb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x54edb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54edbc:
    // 0x54edbc: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x54edbcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
label_54edc0:
    // 0x54edc0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x54edc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_54edc4:
    // 0x54edc4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_54edc8:
    if (ctx->pc == 0x54EDC8u) {
        ctx->pc = 0x54EDC8u;
            // 0x54edc8: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x54EDCCu;
        goto label_54edcc;
    }
    ctx->pc = 0x54EDC4u;
    {
        const bool branch_taken_0x54edc4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x54EDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EDC4u;
            // 0x54edc8: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54edc4) {
            ctx->pc = 0x54EDD8u;
            goto label_54edd8;
        }
    }
    ctx->pc = 0x54EDCCu;
label_54edcc:
    // 0x54edcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54edccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54edd0:
    // 0x54edd0: 0x10000008  b           . + 4 + (0x8 << 2)
label_54edd4:
    if (ctx->pc == 0x54EDD4u) {
        ctx->pc = 0x54EDD4u;
            // 0x54edd4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54EDD8u;
        goto label_54edd8;
    }
    ctx->pc = 0x54EDD0u;
    {
        const bool branch_taken_0x54edd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54EDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EDD0u;
            // 0x54edd4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54edd0) {
            ctx->pc = 0x54EDF4u;
            goto label_54edf4;
        }
    }
    ctx->pc = 0x54EDD8u;
label_54edd8:
    // 0x54edd8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x54edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_54eddc:
    // 0x54eddc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x54eddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_54ede0:
    // 0x54ede0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ede0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ede4:
    // 0x54ede4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ede4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ede8:
    // 0x54ede8: 0x0  nop
    ctx->pc = 0x54ede8u;
    // NOP
label_54edec:
    // 0x54edec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54edecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54edf0:
    // 0x54edf0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x54edf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_54edf4:
    // 0x54edf4: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54edf8:
    if (ctx->pc == 0x54EDF8u) {
        ctx->pc = 0x54EDF8u;
            // 0x54edf8: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x54EDFCu;
        goto label_54edfc;
    }
    ctx->pc = 0x54EDF4u;
    {
        const bool branch_taken_0x54edf4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54EDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EDF4u;
            // 0x54edf8: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54edf4) {
            ctx->pc = 0x54EE08u;
            goto label_54ee08;
        }
    }
    ctx->pc = 0x54EDFCu;
label_54edfc:
    // 0x54edfc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54edfcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ee00:
    // 0x54ee00: 0x10000008  b           . + 4 + (0x8 << 2)
label_54ee04:
    if (ctx->pc == 0x54EE04u) {
        ctx->pc = 0x54EE04u;
            // 0x54ee04: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54EE08u;
        goto label_54ee08;
    }
    ctx->pc = 0x54EE00u;
    {
        const bool branch_taken_0x54ee00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54EE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EE00u;
            // 0x54ee04: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ee00) {
            ctx->pc = 0x54EE24u;
            goto label_54ee24;
        }
    }
    ctx->pc = 0x54EE08u;
label_54ee08:
    // 0x54ee08: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54ee0c:
    // 0x54ee0c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54ee0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54ee10:
    // 0x54ee10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ee10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ee14:
    // 0x54ee14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ee14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ee18:
    // 0x54ee18: 0x0  nop
    ctx->pc = 0x54ee18u;
    // NOP
label_54ee1c:
    // 0x54ee1c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54ee1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54ee20:
    // 0x54ee20: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54ee20u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54ee24:
    // 0x54ee24: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54ee28:
    if (ctx->pc == 0x54EE28u) {
        ctx->pc = 0x54EE28u;
            // 0x54ee28: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54EE2Cu;
        goto label_54ee2c;
    }
    ctx->pc = 0x54EE24u;
    {
        const bool branch_taken_0x54ee24 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54ee24) {
            ctx->pc = 0x54EE28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54EE24u;
            // 0x54ee28: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54EE38u;
            goto label_54ee38;
        }
    }
    ctx->pc = 0x54EE2Cu;
label_54ee2c:
    // 0x54ee2c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54ee2cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ee30:
    // 0x54ee30: 0x10000007  b           . + 4 + (0x7 << 2)
label_54ee34:
    if (ctx->pc == 0x54EE34u) {
        ctx->pc = 0x54EE34u;
            // 0x54ee34: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54EE38u;
        goto label_54ee38;
    }
    ctx->pc = 0x54EE30u;
    {
        const bool branch_taken_0x54ee30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54EE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EE30u;
            // 0x54ee34: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ee30) {
            ctx->pc = 0x54EE50u;
            goto label_54ee50;
        }
    }
    ctx->pc = 0x54EE38u;
label_54ee38:
    // 0x54ee38: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54ee38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54ee3c:
    // 0x54ee3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ee3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ee40:
    // 0x54ee40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ee40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ee44:
    // 0x54ee44: 0x0  nop
    ctx->pc = 0x54ee44u;
    // NOP
label_54ee48:
    // 0x54ee48: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54ee48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54ee4c:
    // 0x54ee4c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54ee4cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54ee50:
    // 0x54ee50: 0x460c1380  add.s       $f14, $f2, $f12
    ctx->pc = 0x54ee50u;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_54ee54:
    // 0x54ee54: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54ee58:
    // 0x54ee58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54ee5c:
    // 0x54ee5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54ee5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54ee60:
    // 0x54ee60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54ee60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54ee64:
    // 0x54ee64: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x54ee64u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_54ee68:
    // 0x54ee68: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54ee68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54ee6c:
    // 0x54ee6c: 0xc0bc284  jal         func_2F0A10
label_54ee70:
    if (ctx->pc == 0x54EE70u) {
        ctx->pc = 0x54EE70u;
            // 0x54ee70: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->pc = 0x54EE74u;
        goto label_54ee74;
    }
    ctx->pc = 0x54EE6Cu;
    SET_GPR_U32(ctx, 31, 0x54EE74u);
    ctx->pc = 0x54EE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54EE6Cu;
            // 0x54ee70: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EE74u; }
        if (ctx->pc != 0x54EE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EE74u; }
        if (ctx->pc != 0x54EE74u) { return; }
    }
    ctx->pc = 0x54EE74u;
label_54ee74:
    // 0x54ee74: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54ee78:
    // 0x54ee78: 0x9042d997  lbu         $v0, -0x2669($v0)
    ctx->pc = 0x54ee78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957463)));
label_54ee7c:
    // 0x54ee7c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_54ee80:
    if (ctx->pc == 0x54EE80u) {
        ctx->pc = 0x54EE80u;
            // 0x54ee80: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x54EE84u;
        goto label_54ee84;
    }
    ctx->pc = 0x54EE7Cu;
    {
        const bool branch_taken_0x54ee7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x54ee7c) {
            ctx->pc = 0x54EE80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54EE7Cu;
            // 0x54ee80: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54EE90u;
            goto label_54ee90;
        }
    }
    ctx->pc = 0x54EE84u;
label_54ee84:
    // 0x54ee84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54ee84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ee88:
    // 0x54ee88: 0x10000007  b           . + 4 + (0x7 << 2)
label_54ee8c:
    if (ctx->pc == 0x54EE8Cu) {
        ctx->pc = 0x54EE8Cu;
            // 0x54ee8c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54EE90u;
        goto label_54ee90;
    }
    ctx->pc = 0x54EE88u;
    {
        const bool branch_taken_0x54ee88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54EE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EE88u;
            // 0x54ee8c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ee88) {
            ctx->pc = 0x54EEA8u;
            goto label_54eea8;
        }
    }
    ctx->pc = 0x54EE90u;
label_54ee90:
    // 0x54ee90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x54ee90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_54ee94:
    // 0x54ee94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ee94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ee98:
    // 0x54ee98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ee98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ee9c:
    // 0x54ee9c: 0x0  nop
    ctx->pc = 0x54ee9cu;
    // NOP
label_54eea0:
    // 0x54eea0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54eea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54eea4:
    // 0x54eea4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x54eea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_54eea8:
    // 0x54eea8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54eea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54eeac:
    // 0x54eeac: 0x24a5e0d0  addiu       $a1, $a1, -0x1F30
    ctx->pc = 0x54eeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959312));
label_54eeb0:
    // 0x54eeb0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x54eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_54eeb4:
    // 0x54eeb4: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x54eeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54eeb8:
    // 0x54eeb8: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54eebc:
    if (ctx->pc == 0x54EEBCu) {
        ctx->pc = 0x54EEBCu;
            // 0x54eebc: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x54EEC0u;
        goto label_54eec0;
    }
    ctx->pc = 0x54EEB8u;
    {
        const bool branch_taken_0x54eeb8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54EEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EEB8u;
            // 0x54eebc: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54eeb8) {
            ctx->pc = 0x54EECCu;
            goto label_54eecc;
        }
    }
    ctx->pc = 0x54EEC0u;
label_54eec0:
    // 0x54eec0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54eec0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54eec4:
    // 0x54eec4: 0x10000008  b           . + 4 + (0x8 << 2)
label_54eec8:
    if (ctx->pc == 0x54EEC8u) {
        ctx->pc = 0x54EEC8u;
            // 0x54eec8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54EECCu;
        goto label_54eecc;
    }
    ctx->pc = 0x54EEC4u;
    {
        const bool branch_taken_0x54eec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54EEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EEC4u;
            // 0x54eec8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54eec4) {
            ctx->pc = 0x54EEE8u;
            goto label_54eee8;
        }
    }
    ctx->pc = 0x54EECCu;
label_54eecc:
    // 0x54eecc: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54eed0:
    // 0x54eed0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54eed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54eed4:
    // 0x54eed4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54eed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54eed8:
    // 0x54eed8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54eed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54eedc:
    // 0x54eedc: 0x0  nop
    ctx->pc = 0x54eedcu;
    // NOP
label_54eee0:
    // 0x54eee0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54eee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54eee4:
    // 0x54eee4: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54eee4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54eee8:
    // 0x54eee8: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54eeec:
    if (ctx->pc == 0x54EEECu) {
        ctx->pc = 0x54EEECu;
            // 0x54eeec: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54EEF0u;
        goto label_54eef0;
    }
    ctx->pc = 0x54EEE8u;
    {
        const bool branch_taken_0x54eee8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54eee8) {
            ctx->pc = 0x54EEECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54EEE8u;
            // 0x54eeec: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54EEFCu;
            goto label_54eefc;
        }
    }
    ctx->pc = 0x54EEF0u;
label_54eef0:
    // 0x54eef0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54eef0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54eef4:
    // 0x54eef4: 0x10000007  b           . + 4 + (0x7 << 2)
label_54eef8:
    if (ctx->pc == 0x54EEF8u) {
        ctx->pc = 0x54EEF8u;
            // 0x54eef8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54EEFCu;
        goto label_54eefc;
    }
    ctx->pc = 0x54EEF4u;
    {
        const bool branch_taken_0x54eef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54EEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EEF4u;
            // 0x54eef8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54eef4) {
            ctx->pc = 0x54EF14u;
            goto label_54ef14;
        }
    }
    ctx->pc = 0x54EEFCu;
label_54eefc:
    // 0x54eefc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54eefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54ef00:
    // 0x54ef00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ef00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ef04:
    // 0x54ef04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ef04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ef08:
    // 0x54ef08: 0x0  nop
    ctx->pc = 0x54ef08u;
    // NOP
label_54ef0c:
    // 0x54ef0c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54ef0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54ef10:
    // 0x54ef10: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54ef10u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54ef14:
    // 0x54ef14: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x54ef14u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_54ef18:
    // 0x54ef18: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54ef1c:
    // 0x54ef1c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54ef20:
    // 0x54ef20: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54ef20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54ef24:
    // 0x54ef24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54ef24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54ef28:
    // 0x54ef28: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x54ef28u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_54ef2c:
    // 0x54ef2c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x54ef2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_54ef30:
    // 0x54ef30: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54ef30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54ef34:
    // 0x54ef34: 0xc0bc284  jal         func_2F0A10
label_54ef38:
    if (ctx->pc == 0x54EF38u) {
        ctx->pc = 0x54EF38u;
            // 0x54ef38: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x54EF3Cu;
        goto label_54ef3c;
    }
    ctx->pc = 0x54EF34u;
    SET_GPR_U32(ctx, 31, 0x54EF3Cu);
    ctx->pc = 0x54EF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54EF34u;
            // 0x54ef38: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EF3Cu; }
        if (ctx->pc != 0x54EF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EF3Cu; }
        if (ctx->pc != 0x54EF3Cu) { return; }
    }
    ctx->pc = 0x54EF3Cu;
label_54ef3c:
    // 0x54ef3c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54ef40:
    // 0x54ef40: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x54ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_54ef44:
    // 0x54ef44: 0x8443d968  lh          $v1, -0x2698($v0)
    ctx->pc = 0x54ef44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957416)));
label_54ef48:
    // 0x54ef48: 0x2484e1a0  addiu       $a0, $a0, -0x1E60
    ctx->pc = 0x54ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959520));
label_54ef4c:
    // 0x54ef4c: 0xc4950008  lwc1        $f21, 0x8($a0)
    ctx->pc = 0x54ef4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54ef50:
    // 0x54ef50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x54ef50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54ef54:
    // 0x54ef54: 0xc494000c  lwc1        $f20, 0xC($a0)
    ctx->pc = 0x54ef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54ef58:
    // 0x54ef58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ef58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ef5c:
    // 0x54ef5c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54ef60:
    // 0x54ef60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54ef60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54ef64:
    // 0x54ef64: 0x8442d96a  lh          $v0, -0x2696($v0)
    ctx->pc = 0x54ef64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957418)));
label_54ef68:
    // 0x54ef68: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x54ef68u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_54ef6c:
    // 0x54ef6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54ef6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ef70:
    // 0x54ef70: 0x0  nop
    ctx->pc = 0x54ef70u;
    // NOP
label_54ef74:
    // 0x54ef74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54ef74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54ef78:
    // 0x54ef78: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x54ef78u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_54ef7c:
    // 0x54ef7c: 0x86a3000c  lh          $v1, 0xC($s5)
    ctx->pc = 0x54ef7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
label_54ef80:
    // 0x54ef80: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x54ef80u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_54ef84:
    // 0x54ef84: 0x6810004  bgez        $s4, . + 4 + (0x4 << 2)
label_54ef88:
    if (ctx->pc == 0x54EF88u) {
        ctx->pc = 0x54EF88u;
            // 0x54ef88: 0x32820003  andi        $v0, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x54EF8Cu;
        goto label_54ef8c;
    }
    ctx->pc = 0x54EF84u;
    {
        const bool branch_taken_0x54ef84 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x54EF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EF84u;
            // 0x54ef88: 0x32820003  andi        $v0, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ef84) {
            ctx->pc = 0x54EF98u;
            goto label_54ef98;
        }
    }
    ctx->pc = 0x54EF8Cu;
label_54ef8c:
    // 0x54ef8c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_54ef90:
    if (ctx->pc == 0x54EF90u) {
        ctx->pc = 0x54EF90u;
            // 0x54ef90: 0x622018  mult        $a0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->pc = 0x54EF94u;
        goto label_54ef94;
    }
    ctx->pc = 0x54EF8Cu;
    {
        const bool branch_taken_0x54ef8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54ef8c) {
            ctx->pc = 0x54EF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54EF8Cu;
            // 0x54ef90: 0x622018  mult        $a0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x54EF9Cu;
            goto label_54ef9c;
        }
    }
    ctx->pc = 0x54EF94u;
label_54ef94:
    // 0x54ef94: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x54ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_54ef98:
    // 0x54ef98: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x54ef98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_54ef9c:
    // 0x54ef9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x54ef9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54efa0:
    // 0x54efa0: 0x86a3000e  lh          $v1, 0xE($s5)
    ctx->pc = 0x54efa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
label_54efa4:
    // 0x54efa4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54efa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54efa8:
    // 0x54efa8: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x54efa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_54efac:
    // 0x54efac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x54efacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_54efb0:
    // 0x54efb0: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x54efb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_54efb4:
    // 0x54efb4: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_54efb8:
    if (ctx->pc == 0x54EFB8u) {
        ctx->pc = 0x54EFB8u;
            // 0x54efb8: 0x141083  sra         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 2));
        ctx->pc = 0x54EFBCu;
        goto label_54efbc;
    }
    ctx->pc = 0x54EFB4u;
    {
        const bool branch_taken_0x54efb4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x54EFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EFB4u;
            // 0x54efb8: 0x141083  sra         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54efb4) {
            ctx->pc = 0x54EFC4u;
            goto label_54efc4;
        }
    }
    ctx->pc = 0x54EFBCu;
label_54efbc:
    // 0x54efbc: 0x26820003  addiu       $v0, $s4, 0x3
    ctx->pc = 0x54efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
label_54efc0:
    // 0x54efc0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x54efc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_54efc4:
    // 0x54efc4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x54efc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_54efc8:
    // 0x54efc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54efc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54efcc:
    // 0x54efcc: 0x2682fff9  addiu       $v0, $s4, -0x7
    ctx->pc = 0x54efccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967289));
label_54efd0:
    // 0x54efd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54efd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54efd4:
    // 0x54efd4: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x54efd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_54efd8:
    // 0x54efd8: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x54efd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_54efdc:
    // 0x54efdc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x54efdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_54efe0:
    // 0x54efe0: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x54efe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
label_54efe4:
    // 0x54efe4: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_54efe8:
    if (ctx->pc == 0x54EFE8u) {
        ctx->pc = 0x54EFECu;
        goto label_54efec;
    }
    ctx->pc = 0x54EFE4u;
    {
        const bool branch_taken_0x54efe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x54efe4) {
            ctx->pc = 0x54F048u;
            goto label_54f048;
        }
    }
    ctx->pc = 0x54EFECu;
label_54efec:
    // 0x54efec: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x54efecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_54eff0:
    // 0x54eff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x54eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_54eff4:
    // 0x54eff4: 0x2463eb90  addiu       $v1, $v1, -0x1470
    ctx->pc = 0x54eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962064));
label_54eff8:
    // 0x54eff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x54eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_54effc:
    // 0x54effc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x54effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_54f000:
    // 0x54f000: 0x400008  jr          $v0
label_54f004:
    if (ctx->pc == 0x54F004u) {
        ctx->pc = 0x54F008u;
        goto label_54f008;
    }
    ctx->pc = 0x54F000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x54F008u: goto label_54f008;
            case 0x54F020u: goto label_54f020;
            case 0x54F038u: goto label_54f038;
            default: break;
        }
        return;
    }
    ctx->pc = 0x54F008u;
label_54f008:
    // 0x54f008: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x54f008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_54f00c:
    // 0x54f00c: 0xc0b90e0  jal         func_2E4380
label_54f010:
    if (ctx->pc == 0x54F010u) {
        ctx->pc = 0x54F010u;
            // 0x54f010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54F014u;
        goto label_54f014;
    }
    ctx->pc = 0x54F00Cu;
    SET_GPR_U32(ctx, 31, 0x54F014u);
    ctx->pc = 0x54F010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F00Cu;
            // 0x54f010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F014u; }
        if (ctx->pc != 0x54F014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F014u; }
        if (ctx->pc != 0x54F014u) { return; }
    }
    ctx->pc = 0x54F014u;
label_54f014:
    // 0x54f014: 0x1000000c  b           . + 4 + (0xC << 2)
label_54f018:
    if (ctx->pc == 0x54F018u) {
        ctx->pc = 0x54F018u;
            // 0x54f018: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x54F01Cu;
        goto label_54f01c;
    }
    ctx->pc = 0x54F014u;
    {
        const bool branch_taken_0x54f014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F014u;
            // 0x54f018: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f014) {
            ctx->pc = 0x54F048u;
            goto label_54f048;
        }
    }
    ctx->pc = 0x54F01Cu;
label_54f01c:
    // 0x54f01c: 0x0  nop
    ctx->pc = 0x54f01cu;
    // NOP
label_54f020:
    // 0x54f020: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x54f020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_54f024:
    // 0x54f024: 0xc0b90e0  jal         func_2E4380
label_54f028:
    if (ctx->pc == 0x54F028u) {
        ctx->pc = 0x54F028u;
            // 0x54f028: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x54F02Cu;
        goto label_54f02c;
    }
    ctx->pc = 0x54F024u;
    SET_GPR_U32(ctx, 31, 0x54F02Cu);
    ctx->pc = 0x54F028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F024u;
            // 0x54f028: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F02Cu; }
        if (ctx->pc != 0x54F02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F02Cu; }
        if (ctx->pc != 0x54F02Cu) { return; }
    }
    ctx->pc = 0x54F02Cu;
label_54f02c:
    // 0x54f02c: 0x10000006  b           . + 4 + (0x6 << 2)
label_54f030:
    if (ctx->pc == 0x54F030u) {
        ctx->pc = 0x54F030u;
            // 0x54f030: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x54F034u;
        goto label_54f034;
    }
    ctx->pc = 0x54F02Cu;
    {
        const bool branch_taken_0x54f02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F02Cu;
            // 0x54f030: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f02c) {
            ctx->pc = 0x54F048u;
            goto label_54f048;
        }
    }
    ctx->pc = 0x54F034u;
label_54f034:
    // 0x54f034: 0x0  nop
    ctx->pc = 0x54f034u;
    // NOP
label_54f038:
    // 0x54f038: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x54f038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_54f03c:
    // 0x54f03c: 0xc0b90e0  jal         func_2E4380
label_54f040:
    if (ctx->pc == 0x54F040u) {
        ctx->pc = 0x54F040u;
            // 0x54f040: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x54F044u;
        goto label_54f044;
    }
    ctx->pc = 0x54F03Cu;
    SET_GPR_U32(ctx, 31, 0x54F044u);
    ctx->pc = 0x54F040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F03Cu;
            // 0x54f040: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F044u; }
        if (ctx->pc != 0x54F044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F044u; }
        if (ctx->pc != 0x54F044u) { return; }
    }
    ctx->pc = 0x54F044u;
label_54f044:
    // 0x54f044: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x54f044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_54f048:
    // 0x54f048: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_54f04c:
    if (ctx->pc == 0x54F04Cu) {
        ctx->pc = 0x54F04Cu;
            // 0x54f04c: 0x26450330  addiu       $a1, $s2, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
        ctx->pc = 0x54F050u;
        goto label_54f050;
    }
    ctx->pc = 0x54F048u;
    {
        const bool branch_taken_0x54f048 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x54f048) {
            ctx->pc = 0x54F04Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F048u;
            // 0x54f04c: 0x26450330  addiu       $a1, $s2, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F05Cu;
            goto label_54f05c;
        }
    }
    ctx->pc = 0x54F050u;
label_54f050:
    // 0x54f050: 0x26820012  addiu       $v0, $s4, 0x12
    ctx->pc = 0x54f050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 18));
label_54f054:
    // 0x54f054: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x54f054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_54f058:
    // 0x54f058: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x54f058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_54f05c:
    // 0x54f05c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54f05cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f060:
    // 0x54f060: 0x0  nop
    ctx->pc = 0x54f060u;
    // NOP
label_54f064:
    // 0x54f064: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54f064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_54f068:
    // 0x54f068: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x54f068u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f06c:
    // 0x54f06c: 0x0  nop
    ctx->pc = 0x54f06cu;
    // NOP
label_54f070:
    // 0x54f070: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x54f070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54f074:
    // 0x54f074: 0x46156380  add.s       $f14, $f12, $f21
    ctx->pc = 0x54f074u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
label_54f078:
    // 0x54f078: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54f07c:
    if (ctx->pc == 0x54F07Cu) {
        ctx->pc = 0x54F07Cu;
            // 0x54f07c: 0x46146bc0  add.s       $f15, $f13, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
        ctx->pc = 0x54F080u;
        goto label_54f080;
    }
    ctx->pc = 0x54F078u;
    {
        const bool branch_taken_0x54f078 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54F07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F078u;
            // 0x54f07c: 0x46146bc0  add.s       $f15, $f13, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f078) {
            ctx->pc = 0x54F08Cu;
            goto label_54f08c;
        }
    }
    ctx->pc = 0x54F080u;
label_54f080:
    // 0x54f080: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54f080u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f084:
    // 0x54f084: 0x10000008  b           . + 4 + (0x8 << 2)
label_54f088:
    if (ctx->pc == 0x54F088u) {
        ctx->pc = 0x54F088u;
            // 0x54f088: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F08Cu;
        goto label_54f08c;
    }
    ctx->pc = 0x54F084u;
    {
        const bool branch_taken_0x54f084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F084u;
            // 0x54f088: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f084) {
            ctx->pc = 0x54F0A8u;
            goto label_54f0a8;
        }
    }
    ctx->pc = 0x54F08Cu;
label_54f08c:
    // 0x54f08c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54f090:
    // 0x54f090: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54f090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54f094:
    // 0x54f094: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f098:
    // 0x54f098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f09c:
    // 0x54f09c: 0x0  nop
    ctx->pc = 0x54f09cu;
    // NOP
label_54f0a0:
    // 0x54f0a0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54f0a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54f0a4:
    // 0x54f0a4: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54f0a4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54f0a8:
    // 0x54f0a8: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54f0ac:
    if (ctx->pc == 0x54F0ACu) {
        ctx->pc = 0x54F0ACu;
            // 0x54f0ac: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54F0B0u;
        goto label_54f0b0;
    }
    ctx->pc = 0x54F0A8u;
    {
        const bool branch_taken_0x54f0a8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54f0a8) {
            ctx->pc = 0x54F0ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F0A8u;
            // 0x54f0ac: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F0BCu;
            goto label_54f0bc;
        }
    }
    ctx->pc = 0x54F0B0u;
label_54f0b0:
    // 0x54f0b0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54f0b0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f0b4:
    // 0x54f0b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_54f0b8:
    if (ctx->pc == 0x54F0B8u) {
        ctx->pc = 0x54F0B8u;
            // 0x54f0b8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F0BCu;
        goto label_54f0bc;
    }
    ctx->pc = 0x54F0B4u;
    {
        const bool branch_taken_0x54f0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F0B4u;
            // 0x54f0b8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f0b4) {
            ctx->pc = 0x54F0D4u;
            goto label_54f0d4;
        }
    }
    ctx->pc = 0x54F0BCu;
label_54f0bc:
    // 0x54f0bc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54f0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54f0c0:
    // 0x54f0c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f0c4:
    // 0x54f0c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f0c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f0c8:
    // 0x54f0c8: 0x0  nop
    ctx->pc = 0x54f0c8u;
    // NOP
label_54f0cc:
    // 0x54f0cc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54f0ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54f0d0:
    // 0x54f0d0: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54f0d0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54f0d4:
    // 0x54f0d4: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x54f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_54f0d8:
    // 0x54f0d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54f0dc:
    // 0x54f0dc: 0x2831804  sllv        $v1, $v1, $s4
    ctx->pc = 0x54f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_54f0e0:
    // 0x54f0e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x54f0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_54f0e4:
    // 0x54f0e4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_54f0e8:
    if (ctx->pc == 0x54F0E8u) {
        ctx->pc = 0x54F0E8u;
            // 0x54f0e8: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->pc = 0x54F0ECu;
        goto label_54f0ec;
    }
    ctx->pc = 0x54F0E4u;
    {
        const bool branch_taken_0x54f0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54f0e4) {
            ctx->pc = 0x54F0E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F0E4u;
            // 0x54f0e8: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F0F4u;
            goto label_54f0f4;
        }
    }
    ctx->pc = 0x54F0ECu;
label_54f0ec:
    // 0x54f0ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_54f0f0:
    if (ctx->pc == 0x54F0F0u) {
        ctx->pc = 0x54F0F0u;
            // 0x54f0f0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x54F0F4u;
        goto label_54f0f4;
    }
    ctx->pc = 0x54F0ECu;
    {
        const bool branch_taken_0x54f0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F0ECu;
            // 0x54f0f0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f0ec) {
            ctx->pc = 0x54F0F8u;
            goto label_54f0f8;
        }
    }
    ctx->pc = 0x54F0F4u;
label_54f0f4:
    // 0x54f0f4: 0x34467fff  ori         $a2, $v0, 0x7FFF
    ctx->pc = 0x54f0f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_54f0f8:
    // 0x54f0f8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54f0fc:
    // 0x54f0fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54f100:
    // 0x54f100: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54f100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54f104:
    // 0x54f104: 0xc0bc284  jal         func_2F0A10
label_54f108:
    if (ctx->pc == 0x54F108u) {
        ctx->pc = 0x54F108u;
            // 0x54f108: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54F10Cu;
        goto label_54f10c;
    }
    ctx->pc = 0x54F104u;
    SET_GPR_U32(ctx, 31, 0x54F10Cu);
    ctx->pc = 0x54F108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F104u;
            // 0x54f108: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F10Cu; }
        if (ctx->pc != 0x54F10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F10Cu; }
        if (ctx->pc != 0x54F10Cu) { return; }
    }
    ctx->pc = 0x54F10Cu;
label_54f10c:
    // 0x54f10c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x54f10cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_54f110:
    // 0x54f110: 0x2a810010  slti        $at, $s4, 0x10
    ctx->pc = 0x54f110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
label_54f114:
    // 0x54f114: 0x5420ff9a  bnel        $at, $zero, . + 4 + (-0x66 << 2)
label_54f118:
    if (ctx->pc == 0x54F118u) {
        ctx->pc = 0x54F118u;
            // 0x54f118: 0x86a3000c  lh          $v1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->pc = 0x54F11Cu;
        goto label_54f11c;
    }
    ctx->pc = 0x54F114u;
    {
        const bool branch_taken_0x54f114 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x54f114) {
            ctx->pc = 0x54F118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F114u;
            // 0x54f118: 0x86a3000c  lh          $v1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54EF80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_54ef80;
        }
    }
    ctx->pc = 0x54F11Cu;
label_54f11c:
    // 0x54f11c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54f120:
    // 0x54f120: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54f120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54f124:
    // 0x54f124: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54f124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54f128:
    // 0x54f128: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54f128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54f12c:
    // 0x54f12c: 0x320f809  jalr        $t9
label_54f130:
    if (ctx->pc == 0x54F130u) {
        ctx->pc = 0x54F134u;
        goto label_54f134;
    }
    ctx->pc = 0x54F12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54F134u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54F134u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54F134u; }
            if (ctx->pc != 0x54F134u) { return; }
        }
        }
    }
    ctx->pc = 0x54F134u;
label_54f134:
    // 0x54f134: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x54f134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_54f138:
    // 0x54f138: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x54f138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_54f13c:
    // 0x54f13c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x54f13cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_54f140:
    // 0x54f140: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x54f140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_54f144:
    // 0x54f144: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x54f144u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_54f148:
    // 0x54f148: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x54f148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54f14c:
    // 0x54f14c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x54f14cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_54f150:
    // 0x54f150: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x54f150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54f154:
    // 0x54f154: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x54f154u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_54f158:
    // 0x54f158: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x54f158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54f15c:
    // 0x54f15c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x54f15cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_54f160:
    // 0x54f160: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x54f160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_54f164:
    // 0x54f164: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x54f164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_54f168:
    // 0x54f168: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x54f168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_54f16c:
    // 0x54f16c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x54f16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54f170:
    // 0x54f170: 0x3e00008  jr          $ra
label_54f174:
    if (ctx->pc == 0x54F174u) {
        ctx->pc = 0x54F174u;
            // 0x54f174: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x54F178u;
        goto label_54f178;
    }
    ctx->pc = 0x54F170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54F174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F170u;
            // 0x54f174: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54F178u;
label_54f178:
    // 0x54f178: 0x0  nop
    ctx->pc = 0x54f178u;
    // NOP
label_54f17c:
    // 0x54f17c: 0x0  nop
    ctx->pc = 0x54f17cu;
    // NOP
}
