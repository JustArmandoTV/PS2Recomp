#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027EB60
// Address: 0x27eb60 - 0x27f080
void sub_0027EB60_0x27eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EB60_0x27eb60");
#endif

    switch (ctx->pc) {
        case 0x27eb60u: goto label_27eb60;
        case 0x27eb64u: goto label_27eb64;
        case 0x27eb68u: goto label_27eb68;
        case 0x27eb6cu: goto label_27eb6c;
        case 0x27eb70u: goto label_27eb70;
        case 0x27eb74u: goto label_27eb74;
        case 0x27eb78u: goto label_27eb78;
        case 0x27eb7cu: goto label_27eb7c;
        case 0x27eb80u: goto label_27eb80;
        case 0x27eb84u: goto label_27eb84;
        case 0x27eb88u: goto label_27eb88;
        case 0x27eb8cu: goto label_27eb8c;
        case 0x27eb90u: goto label_27eb90;
        case 0x27eb94u: goto label_27eb94;
        case 0x27eb98u: goto label_27eb98;
        case 0x27eb9cu: goto label_27eb9c;
        case 0x27eba0u: goto label_27eba0;
        case 0x27eba4u: goto label_27eba4;
        case 0x27eba8u: goto label_27eba8;
        case 0x27ebacu: goto label_27ebac;
        case 0x27ebb0u: goto label_27ebb0;
        case 0x27ebb4u: goto label_27ebb4;
        case 0x27ebb8u: goto label_27ebb8;
        case 0x27ebbcu: goto label_27ebbc;
        case 0x27ebc0u: goto label_27ebc0;
        case 0x27ebc4u: goto label_27ebc4;
        case 0x27ebc8u: goto label_27ebc8;
        case 0x27ebccu: goto label_27ebcc;
        case 0x27ebd0u: goto label_27ebd0;
        case 0x27ebd4u: goto label_27ebd4;
        case 0x27ebd8u: goto label_27ebd8;
        case 0x27ebdcu: goto label_27ebdc;
        case 0x27ebe0u: goto label_27ebe0;
        case 0x27ebe4u: goto label_27ebe4;
        case 0x27ebe8u: goto label_27ebe8;
        case 0x27ebecu: goto label_27ebec;
        case 0x27ebf0u: goto label_27ebf0;
        case 0x27ebf4u: goto label_27ebf4;
        case 0x27ebf8u: goto label_27ebf8;
        case 0x27ebfcu: goto label_27ebfc;
        case 0x27ec00u: goto label_27ec00;
        case 0x27ec04u: goto label_27ec04;
        case 0x27ec08u: goto label_27ec08;
        case 0x27ec0cu: goto label_27ec0c;
        case 0x27ec10u: goto label_27ec10;
        case 0x27ec14u: goto label_27ec14;
        case 0x27ec18u: goto label_27ec18;
        case 0x27ec1cu: goto label_27ec1c;
        case 0x27ec20u: goto label_27ec20;
        case 0x27ec24u: goto label_27ec24;
        case 0x27ec28u: goto label_27ec28;
        case 0x27ec2cu: goto label_27ec2c;
        case 0x27ec30u: goto label_27ec30;
        case 0x27ec34u: goto label_27ec34;
        case 0x27ec38u: goto label_27ec38;
        case 0x27ec3cu: goto label_27ec3c;
        case 0x27ec40u: goto label_27ec40;
        case 0x27ec44u: goto label_27ec44;
        case 0x27ec48u: goto label_27ec48;
        case 0x27ec4cu: goto label_27ec4c;
        case 0x27ec50u: goto label_27ec50;
        case 0x27ec54u: goto label_27ec54;
        case 0x27ec58u: goto label_27ec58;
        case 0x27ec5cu: goto label_27ec5c;
        case 0x27ec60u: goto label_27ec60;
        case 0x27ec64u: goto label_27ec64;
        case 0x27ec68u: goto label_27ec68;
        case 0x27ec6cu: goto label_27ec6c;
        case 0x27ec70u: goto label_27ec70;
        case 0x27ec74u: goto label_27ec74;
        case 0x27ec78u: goto label_27ec78;
        case 0x27ec7cu: goto label_27ec7c;
        case 0x27ec80u: goto label_27ec80;
        case 0x27ec84u: goto label_27ec84;
        case 0x27ec88u: goto label_27ec88;
        case 0x27ec8cu: goto label_27ec8c;
        case 0x27ec90u: goto label_27ec90;
        case 0x27ec94u: goto label_27ec94;
        case 0x27ec98u: goto label_27ec98;
        case 0x27ec9cu: goto label_27ec9c;
        case 0x27eca0u: goto label_27eca0;
        case 0x27eca4u: goto label_27eca4;
        case 0x27eca8u: goto label_27eca8;
        case 0x27ecacu: goto label_27ecac;
        case 0x27ecb0u: goto label_27ecb0;
        case 0x27ecb4u: goto label_27ecb4;
        case 0x27ecb8u: goto label_27ecb8;
        case 0x27ecbcu: goto label_27ecbc;
        case 0x27ecc0u: goto label_27ecc0;
        case 0x27ecc4u: goto label_27ecc4;
        case 0x27ecc8u: goto label_27ecc8;
        case 0x27ecccu: goto label_27eccc;
        case 0x27ecd0u: goto label_27ecd0;
        case 0x27ecd4u: goto label_27ecd4;
        case 0x27ecd8u: goto label_27ecd8;
        case 0x27ecdcu: goto label_27ecdc;
        case 0x27ece0u: goto label_27ece0;
        case 0x27ece4u: goto label_27ece4;
        case 0x27ece8u: goto label_27ece8;
        case 0x27ececu: goto label_27ecec;
        case 0x27ecf0u: goto label_27ecf0;
        case 0x27ecf4u: goto label_27ecf4;
        case 0x27ecf8u: goto label_27ecf8;
        case 0x27ecfcu: goto label_27ecfc;
        case 0x27ed00u: goto label_27ed00;
        case 0x27ed04u: goto label_27ed04;
        case 0x27ed08u: goto label_27ed08;
        case 0x27ed0cu: goto label_27ed0c;
        case 0x27ed10u: goto label_27ed10;
        case 0x27ed14u: goto label_27ed14;
        case 0x27ed18u: goto label_27ed18;
        case 0x27ed1cu: goto label_27ed1c;
        case 0x27ed20u: goto label_27ed20;
        case 0x27ed24u: goto label_27ed24;
        case 0x27ed28u: goto label_27ed28;
        case 0x27ed2cu: goto label_27ed2c;
        case 0x27ed30u: goto label_27ed30;
        case 0x27ed34u: goto label_27ed34;
        case 0x27ed38u: goto label_27ed38;
        case 0x27ed3cu: goto label_27ed3c;
        case 0x27ed40u: goto label_27ed40;
        case 0x27ed44u: goto label_27ed44;
        case 0x27ed48u: goto label_27ed48;
        case 0x27ed4cu: goto label_27ed4c;
        case 0x27ed50u: goto label_27ed50;
        case 0x27ed54u: goto label_27ed54;
        case 0x27ed58u: goto label_27ed58;
        case 0x27ed5cu: goto label_27ed5c;
        case 0x27ed60u: goto label_27ed60;
        case 0x27ed64u: goto label_27ed64;
        case 0x27ed68u: goto label_27ed68;
        case 0x27ed6cu: goto label_27ed6c;
        case 0x27ed70u: goto label_27ed70;
        case 0x27ed74u: goto label_27ed74;
        case 0x27ed78u: goto label_27ed78;
        case 0x27ed7cu: goto label_27ed7c;
        case 0x27ed80u: goto label_27ed80;
        case 0x27ed84u: goto label_27ed84;
        case 0x27ed88u: goto label_27ed88;
        case 0x27ed8cu: goto label_27ed8c;
        case 0x27ed90u: goto label_27ed90;
        case 0x27ed94u: goto label_27ed94;
        case 0x27ed98u: goto label_27ed98;
        case 0x27ed9cu: goto label_27ed9c;
        case 0x27eda0u: goto label_27eda0;
        case 0x27eda4u: goto label_27eda4;
        case 0x27eda8u: goto label_27eda8;
        case 0x27edacu: goto label_27edac;
        case 0x27edb0u: goto label_27edb0;
        case 0x27edb4u: goto label_27edb4;
        case 0x27edb8u: goto label_27edb8;
        case 0x27edbcu: goto label_27edbc;
        case 0x27edc0u: goto label_27edc0;
        case 0x27edc4u: goto label_27edc4;
        case 0x27edc8u: goto label_27edc8;
        case 0x27edccu: goto label_27edcc;
        case 0x27edd0u: goto label_27edd0;
        case 0x27edd4u: goto label_27edd4;
        case 0x27edd8u: goto label_27edd8;
        case 0x27eddcu: goto label_27eddc;
        case 0x27ede0u: goto label_27ede0;
        case 0x27ede4u: goto label_27ede4;
        case 0x27ede8u: goto label_27ede8;
        case 0x27edecu: goto label_27edec;
        case 0x27edf0u: goto label_27edf0;
        case 0x27edf4u: goto label_27edf4;
        case 0x27edf8u: goto label_27edf8;
        case 0x27edfcu: goto label_27edfc;
        case 0x27ee00u: goto label_27ee00;
        case 0x27ee04u: goto label_27ee04;
        case 0x27ee08u: goto label_27ee08;
        case 0x27ee0cu: goto label_27ee0c;
        case 0x27ee10u: goto label_27ee10;
        case 0x27ee14u: goto label_27ee14;
        case 0x27ee18u: goto label_27ee18;
        case 0x27ee1cu: goto label_27ee1c;
        case 0x27ee20u: goto label_27ee20;
        case 0x27ee24u: goto label_27ee24;
        case 0x27ee28u: goto label_27ee28;
        case 0x27ee2cu: goto label_27ee2c;
        case 0x27ee30u: goto label_27ee30;
        case 0x27ee34u: goto label_27ee34;
        case 0x27ee38u: goto label_27ee38;
        case 0x27ee3cu: goto label_27ee3c;
        case 0x27ee40u: goto label_27ee40;
        case 0x27ee44u: goto label_27ee44;
        case 0x27ee48u: goto label_27ee48;
        case 0x27ee4cu: goto label_27ee4c;
        case 0x27ee50u: goto label_27ee50;
        case 0x27ee54u: goto label_27ee54;
        case 0x27ee58u: goto label_27ee58;
        case 0x27ee5cu: goto label_27ee5c;
        case 0x27ee60u: goto label_27ee60;
        case 0x27ee64u: goto label_27ee64;
        case 0x27ee68u: goto label_27ee68;
        case 0x27ee6cu: goto label_27ee6c;
        case 0x27ee70u: goto label_27ee70;
        case 0x27ee74u: goto label_27ee74;
        case 0x27ee78u: goto label_27ee78;
        case 0x27ee7cu: goto label_27ee7c;
        case 0x27ee80u: goto label_27ee80;
        case 0x27ee84u: goto label_27ee84;
        case 0x27ee88u: goto label_27ee88;
        case 0x27ee8cu: goto label_27ee8c;
        case 0x27ee90u: goto label_27ee90;
        case 0x27ee94u: goto label_27ee94;
        case 0x27ee98u: goto label_27ee98;
        case 0x27ee9cu: goto label_27ee9c;
        case 0x27eea0u: goto label_27eea0;
        case 0x27eea4u: goto label_27eea4;
        case 0x27eea8u: goto label_27eea8;
        case 0x27eeacu: goto label_27eeac;
        case 0x27eeb0u: goto label_27eeb0;
        case 0x27eeb4u: goto label_27eeb4;
        case 0x27eeb8u: goto label_27eeb8;
        case 0x27eebcu: goto label_27eebc;
        case 0x27eec0u: goto label_27eec0;
        case 0x27eec4u: goto label_27eec4;
        case 0x27eec8u: goto label_27eec8;
        case 0x27eeccu: goto label_27eecc;
        case 0x27eed0u: goto label_27eed0;
        case 0x27eed4u: goto label_27eed4;
        case 0x27eed8u: goto label_27eed8;
        case 0x27eedcu: goto label_27eedc;
        case 0x27eee0u: goto label_27eee0;
        case 0x27eee4u: goto label_27eee4;
        case 0x27eee8u: goto label_27eee8;
        case 0x27eeecu: goto label_27eeec;
        case 0x27eef0u: goto label_27eef0;
        case 0x27eef4u: goto label_27eef4;
        case 0x27eef8u: goto label_27eef8;
        case 0x27eefcu: goto label_27eefc;
        case 0x27ef00u: goto label_27ef00;
        case 0x27ef04u: goto label_27ef04;
        case 0x27ef08u: goto label_27ef08;
        case 0x27ef0cu: goto label_27ef0c;
        case 0x27ef10u: goto label_27ef10;
        case 0x27ef14u: goto label_27ef14;
        case 0x27ef18u: goto label_27ef18;
        case 0x27ef1cu: goto label_27ef1c;
        case 0x27ef20u: goto label_27ef20;
        case 0x27ef24u: goto label_27ef24;
        case 0x27ef28u: goto label_27ef28;
        case 0x27ef2cu: goto label_27ef2c;
        case 0x27ef30u: goto label_27ef30;
        case 0x27ef34u: goto label_27ef34;
        case 0x27ef38u: goto label_27ef38;
        case 0x27ef3cu: goto label_27ef3c;
        case 0x27ef40u: goto label_27ef40;
        case 0x27ef44u: goto label_27ef44;
        case 0x27ef48u: goto label_27ef48;
        case 0x27ef4cu: goto label_27ef4c;
        case 0x27ef50u: goto label_27ef50;
        case 0x27ef54u: goto label_27ef54;
        case 0x27ef58u: goto label_27ef58;
        case 0x27ef5cu: goto label_27ef5c;
        case 0x27ef60u: goto label_27ef60;
        case 0x27ef64u: goto label_27ef64;
        case 0x27ef68u: goto label_27ef68;
        case 0x27ef6cu: goto label_27ef6c;
        case 0x27ef70u: goto label_27ef70;
        case 0x27ef74u: goto label_27ef74;
        case 0x27ef78u: goto label_27ef78;
        case 0x27ef7cu: goto label_27ef7c;
        case 0x27ef80u: goto label_27ef80;
        case 0x27ef84u: goto label_27ef84;
        case 0x27ef88u: goto label_27ef88;
        case 0x27ef8cu: goto label_27ef8c;
        case 0x27ef90u: goto label_27ef90;
        case 0x27ef94u: goto label_27ef94;
        case 0x27ef98u: goto label_27ef98;
        case 0x27ef9cu: goto label_27ef9c;
        case 0x27efa0u: goto label_27efa0;
        case 0x27efa4u: goto label_27efa4;
        case 0x27efa8u: goto label_27efa8;
        case 0x27efacu: goto label_27efac;
        case 0x27efb0u: goto label_27efb0;
        case 0x27efb4u: goto label_27efb4;
        case 0x27efb8u: goto label_27efb8;
        case 0x27efbcu: goto label_27efbc;
        case 0x27efc0u: goto label_27efc0;
        case 0x27efc4u: goto label_27efc4;
        case 0x27efc8u: goto label_27efc8;
        case 0x27efccu: goto label_27efcc;
        case 0x27efd0u: goto label_27efd0;
        case 0x27efd4u: goto label_27efd4;
        case 0x27efd8u: goto label_27efd8;
        case 0x27efdcu: goto label_27efdc;
        case 0x27efe0u: goto label_27efe0;
        case 0x27efe4u: goto label_27efe4;
        case 0x27efe8u: goto label_27efe8;
        case 0x27efecu: goto label_27efec;
        case 0x27eff0u: goto label_27eff0;
        case 0x27eff4u: goto label_27eff4;
        case 0x27eff8u: goto label_27eff8;
        case 0x27effcu: goto label_27effc;
        case 0x27f000u: goto label_27f000;
        case 0x27f004u: goto label_27f004;
        case 0x27f008u: goto label_27f008;
        case 0x27f00cu: goto label_27f00c;
        case 0x27f010u: goto label_27f010;
        case 0x27f014u: goto label_27f014;
        case 0x27f018u: goto label_27f018;
        case 0x27f01cu: goto label_27f01c;
        case 0x27f020u: goto label_27f020;
        case 0x27f024u: goto label_27f024;
        case 0x27f028u: goto label_27f028;
        case 0x27f02cu: goto label_27f02c;
        case 0x27f030u: goto label_27f030;
        case 0x27f034u: goto label_27f034;
        case 0x27f038u: goto label_27f038;
        case 0x27f03cu: goto label_27f03c;
        case 0x27f040u: goto label_27f040;
        case 0x27f044u: goto label_27f044;
        case 0x27f048u: goto label_27f048;
        case 0x27f04cu: goto label_27f04c;
        case 0x27f050u: goto label_27f050;
        case 0x27f054u: goto label_27f054;
        case 0x27f058u: goto label_27f058;
        case 0x27f05cu: goto label_27f05c;
        case 0x27f060u: goto label_27f060;
        case 0x27f064u: goto label_27f064;
        case 0x27f068u: goto label_27f068;
        case 0x27f06cu: goto label_27f06c;
        case 0x27f070u: goto label_27f070;
        case 0x27f074u: goto label_27f074;
        case 0x27f078u: goto label_27f078;
        case 0x27f07cu: goto label_27f07c;
        default: break;
    }

    ctx->pc = 0x27eb60u;

label_27eb60:
    // 0x27eb60: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x27eb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
label_27eb64:
    // 0x27eb64: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27eb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27eb68:
    // 0x27eb68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27eb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_27eb6c:
    // 0x27eb6c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x27eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_27eb70:
    // 0x27eb70: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27eb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_27eb74:
    // 0x27eb74: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27eb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_27eb78:
    // 0x27eb78: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27eb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27eb7c:
    // 0x27eb7c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x27eb7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27eb80:
    // 0x27eb80: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27eb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_27eb84:
    // 0x27eb84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27eb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27eb88:
    // 0x27eb88: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x27eb88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27eb8c:
    // 0x27eb8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27eb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27eb90:
    // 0x27eb90: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x27eb90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27eb94:
    // 0x27eb94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27eb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27eb98:
    // 0x27eb98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27eb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27eb9c:
    // 0x27eb9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27eb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27eba0:
    // 0x27eba0: 0xafa800a8  sw          $t0, 0xA8($sp)
    ctx->pc = 0x27eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 8));
label_27eba4:
    // 0x27eba4: 0xafa900a4  sw          $t1, 0xA4($sp)
    ctx->pc = 0x27eba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 9));
label_27eba8:
    // 0x27eba8: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x27eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
label_27ebac:
    // 0x27ebac: 0xafaa00a0  sw          $t2, 0xA0($sp)
    ctx->pc = 0x27ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 10));
label_27ebb0:
    // 0x27ebb0: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x27ebb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_27ebb4:
    // 0x27ebb4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27ebb8:
    // 0x27ebb8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x27ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_27ebbc:
    // 0x27ebbc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x27ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_27ebc0:
    // 0x27ebc0: 0x8c96000c  lw          $s6, 0xC($a0)
    ctx->pc = 0x27ebc0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_27ebc4:
    // 0x27ebc4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x27ebc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_27ebc8:
    // 0x27ebc8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x27ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_27ebcc:
    // 0x27ebcc: 0x2c53021  addu        $a2, $s6, $a1
    ctx->pc = 0x27ebccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_27ebd0:
    // 0x27ebd0: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x27ebd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_27ebd4:
    // 0x27ebd4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_27ebd8:
    if (ctx->pc == 0x27EBD8u) {
        ctx->pc = 0x27EBD8u;
            // 0x27ebd8: 0x160982d  daddu       $s3, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27EBDCu;
        goto label_27ebdc;
    }
    ctx->pc = 0x27EBD4u;
    {
        const bool branch_taken_0x27ebd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EBD4u;
            // 0x27ebd8: 0x160982d  daddu       $s3, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebd4) {
            ctx->pc = 0x27EBE8u;
            goto label_27ebe8;
        }
    }
    ctx->pc = 0x27EBDCu;
label_27ebdc:
    // 0x27ebdc: 0x10000008  b           . + 4 + (0x8 << 2)
label_27ebe0:
    if (ctx->pc == 0x27EBE0u) {
        ctx->pc = 0x27EBE0u;
            // 0x27ebe0: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x27EBE4u;
        goto label_27ebe4;
    }
    ctx->pc = 0x27EBDCu;
    {
        const bool branch_taken_0x27ebdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EBDCu;
            // 0x27ebe0: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebdc) {
            ctx->pc = 0x27EC00u;
            goto label_27ec00;
        }
    }
    ctx->pc = 0x27EBE4u;
label_27ebe4:
    // 0x27ebe4: 0x0  nop
    ctx->pc = 0x27ebe4u;
    // NOP
label_27ebe8:
    // 0x27ebe8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27ebe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27ebec:
    // 0x27ebec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27ebecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27ebf0:
    // 0x27ebf0: 0x320f809  jalr        $t9
label_27ebf4:
    if (ctx->pc == 0x27EBF4u) {
        ctx->pc = 0x27EBF8u;
        goto label_27ebf8;
    }
    ctx->pc = 0x27EBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27EBF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27EBF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27EBF8u; }
            if (ctx->pc != 0x27EBF8u) { return; }
        }
        }
    }
    ctx->pc = 0x27EBF8u;
label_27ebf8:
    // 0x27ebf8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27ebf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ebfc:
    // 0x27ebfc: 0x0  nop
    ctx->pc = 0x27ebfcu;
    // NOP
label_27ec00:
    // 0x27ec00: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x27ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_27ec04:
    // 0x27ec04: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x27ec04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27ec08:
    // 0x27ec08: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x27ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_27ec0c:
    // 0x27ec0c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x27ec0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27ec10:
    // 0x27ec10: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
label_27ec14:
    if (ctx->pc == 0x27EC14u) {
        ctx->pc = 0x27EC14u;
            // 0x27ec14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27EC18u;
        goto label_27ec18;
    }
    ctx->pc = 0x27EC10u;
    {
        const bool branch_taken_0x27ec10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC10u;
            // 0x27ec14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec10) {
            ctx->pc = 0x27ED48u;
            goto label_27ed48;
        }
    }
    ctx->pc = 0x27EC18u;
label_27ec18:
    // 0x27ec18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27ec18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ec1c:
    // 0x27ec1c: 0x0  nop
    ctx->pc = 0x27ec1cu;
    // NOP
label_27ec20:
    // 0x27ec20: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x27ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_27ec24:
    // 0x27ec24: 0x8ee4000c  lw          $a0, 0xC($s7)
    ctx->pc = 0x27ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_27ec28:
    // 0x27ec28: 0x25260010  addiu       $a2, $t1, 0x10
    ctx->pc = 0x27ec28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_27ec2c:
    // 0x27ec2c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x27ec2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_27ec30:
    // 0x27ec30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27ec34:
    // 0x27ec34: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_27ec38:
    // 0x27ec38: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x27ec38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27ec3c:
    // 0x27ec3c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x27ec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_27ec40:
    // 0x27ec40: 0x8ce30068  lw          $v1, 0x68($a3)
    ctx->pc = 0x27ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 104)));
label_27ec44:
    // 0x27ec44: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27ec48:
    // 0x27ec48: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x27ec48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ec4c:
    // 0x27ec4c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x27ec4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_27ec50:
    // 0x27ec50: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x27ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ec54:
    // 0x27ec54: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x27ec54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_27ec58:
    // 0x27ec58: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x27ec58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ec5c:
    // 0x27ec5c: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x27ec5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_27ec60:
    // 0x27ec60: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x27ec60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ec64:
    // 0x27ec64: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x27ec64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_27ec68:
    // 0x27ec68: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x27ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ec6c:
    // 0x27ec6c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x27ec6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_27ec70:
    // 0x27ec70: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x27ec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ec74:
    // 0x27ec74: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x27ec74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_27ec78:
    // 0x27ec78: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x27ec78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ec7c:
    // 0x27ec7c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x27ec7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_27ec80:
    // 0x27ec80: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x27ec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ec84:
    // 0x27ec84: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x27ec84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_27ec88:
    // 0x27ec88: 0xc4e10100  lwc1        $f1, 0x100($a3)
    ctx->pc = 0x27ec88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ec8c:
    // 0x27ec8c: 0xc4e000f0  lwc1        $f0, 0xF0($a3)
    ctx->pc = 0x27ec8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ec90:
    // 0x27ec90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27ec90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27ec94:
    // 0x27ec94: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x27ec94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_27ec98:
    // 0x27ec98: 0xc4e10104  lwc1        $f1, 0x104($a3)
    ctx->pc = 0x27ec98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ec9c:
    // 0x27ec9c: 0xc4e000f4  lwc1        $f0, 0xF4($a3)
    ctx->pc = 0x27ec9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27eca0:
    // 0x27eca0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27eca0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27eca4:
    // 0x27eca4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x27eca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_27eca8:
    // 0x27eca8: 0xc4e10108  lwc1        $f1, 0x108($a3)
    ctx->pc = 0x27eca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ecac:
    // 0x27ecac: 0xc4e000f8  lwc1        $f0, 0xF8($a3)
    ctx->pc = 0x27ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ecb0:
    // 0x27ecb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27ecb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27ecb4:
    // 0x27ecb4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x27ecb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_27ecb8:
    // 0x27ecb8: 0xc4e1010c  lwc1        $f1, 0x10C($a3)
    ctx->pc = 0x27ecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ecbc:
    // 0x27ecbc: 0xc4e000fc  lwc1        $f0, 0xFC($a3)
    ctx->pc = 0x27ecbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ecc0:
    // 0x27ecc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27ecc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27ecc4:
    // 0x27ecc4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x27ecc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_27ecc8:
    // 0x27ecc8: 0xc4e1010c  lwc1        $f1, 0x10C($a3)
    ctx->pc = 0x27ecc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27eccc:
    // 0x27eccc: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x27ecccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ecd0:
    // 0x27ecd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27ecd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_27ecd4:
    // 0x27ecd4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x27ecd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_27ecd8:
    // 0x27ecd8: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x27ecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ecdc:
    // 0x27ecdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27ecdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_27ece0:
    // 0x27ece0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x27ece0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_27ece4:
    // 0x27ece4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x27ece4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ece8:
    // 0x27ece8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27ece8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_27ecec:
    // 0x27ecec: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x27ececu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_27ecf0:
    // 0x27ecf0: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x27ecf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ecf4:
    // 0x27ecf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27ecf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_27ecf8:
    // 0x27ecf8: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x27ecf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_27ecfc:
    // 0x27ecfc: 0xc4e1010c  lwc1        $f1, 0x10C($a3)
    ctx->pc = 0x27ecfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ed00:
    // 0x27ed00: 0xc4e00140  lwc1        $f0, 0x140($a3)
    ctx->pc = 0x27ed00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ed04:
    // 0x27ed04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27ed04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27ed08:
    // 0x27ed08: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x27ed08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_27ed0c:
    // 0x27ed0c: 0xc4e00144  lwc1        $f0, 0x144($a3)
    ctx->pc = 0x27ed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ed10:
    // 0x27ed10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27ed10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27ed14:
    // 0x27ed14: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x27ed14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_27ed18:
    // 0x27ed18: 0xc4e00148  lwc1        $f0, 0x148($a3)
    ctx->pc = 0x27ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ed1c:
    // 0x27ed1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27ed1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27ed20:
    // 0x27ed20: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x27ed20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_27ed24:
    // 0x27ed24: 0xc4e0014c  lwc1        $f0, 0x14C($a3)
    ctx->pc = 0x27ed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ed28:
    // 0x27ed28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27ed28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27ed2c:
    // 0x27ed2c: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x27ed2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_27ed30:
    // 0x27ed30: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x27ed30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_27ed34:
    // 0x27ed34: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x27ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_27ed38:
    // 0x27ed38: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x27ed38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27ed3c:
    // 0x27ed3c: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
label_27ed40:
    if (ctx->pc == 0x27ED40u) {
        ctx->pc = 0x27ED40u;
            // 0x27ed40: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->pc = 0x27ED44u;
        goto label_27ed44;
    }
    ctx->pc = 0x27ED3Cu;
    {
        const bool branch_taken_0x27ed3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ED40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED3Cu;
            // 0x27ed40: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed3c) {
            ctx->pc = 0x27EC20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27ec20;
        }
    }
    ctx->pc = 0x27ED44u;
label_27ed44:
    // 0x27ed44: 0x0  nop
    ctx->pc = 0x27ed44u;
    // NOP
label_27ed48:
    // 0x27ed48: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x27ed48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27ed4c:
    // 0x27ed4c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x27ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_27ed50:
    // 0x27ed50: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x27ed50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27ed54:
    // 0x27ed54: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
label_27ed58:
    if (ctx->pc == 0x27ED58u) {
        ctx->pc = 0x27ED58u;
            // 0x27ed58: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x27ED5Cu;
        goto label_27ed5c;
    }
    ctx->pc = 0x27ED54u;
    {
        const bool branch_taken_0x27ed54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED54u;
            // 0x27ed58: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed54) {
            ctx->pc = 0x27EF80u;
            goto label_27ef80;
        }
    }
    ctx->pc = 0x27ED5Cu;
label_27ed5c:
    // 0x27ed5c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x27ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_27ed60:
    // 0x27ed60: 0x3f080  sll         $fp, $v1, 2
    ctx->pc = 0x27ed60u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27ed64:
    // 0x27ed64: 0x0  nop
    ctx->pc = 0x27ed64u;
    // NOP
label_27ed68:
    // 0x27ed68: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x27ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_27ed6c:
    // 0x27ed6c: 0x7e8021  addu        $s0, $v1, $fp
    ctx->pc = 0x27ed6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_27ed70:
    // 0x27ed70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x27ed70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27ed74:
    // 0x27ed74: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x27ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_27ed78:
    // 0x27ed78: 0x90a4001c  lbu         $a0, 0x1C($a1)
    ctx->pc = 0x27ed78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
label_27ed7c:
    // 0x27ed7c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x27ed7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27ed80:
    // 0x27ed80: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x27ed80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_27ed84:
    // 0x27ed84: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
label_27ed88:
    if (ctx->pc == 0x27ED88u) {
        ctx->pc = 0x27ED8Cu;
        goto label_27ed8c;
    }
    ctx->pc = 0x27ED84u;
    {
        const bool branch_taken_0x27ed84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ed84) {
            ctx->pc = 0x27EF68u;
            goto label_27ef68;
        }
    }
    ctx->pc = 0x27ED8Cu;
label_27ed8c:
    // 0x27ed8c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x27ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_27ed90:
    // 0x27ed90: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x27ed90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27ed94:
    // 0x27ed94: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x27ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_27ed98:
    // 0x27ed98: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x27ed98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27ed9c:
    // 0x27ed9c: 0x24a70004  addiu       $a3, $a1, 0x4
    ctx->pc = 0x27ed9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_27eda0:
    // 0x27eda0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x27eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27eda4:
    // 0x27eda4: 0x9463006c  lhu         $v1, 0x6C($v1)
    ctx->pc = 0x27eda4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
label_27eda8:
    // 0x27eda8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x27eda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_27edac:
    // 0x27edac: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x27edacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27edb0:
    // 0x27edb0: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x27edb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
label_27edb4:
    // 0x27edb4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27edb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27edb8:
    // 0x27edb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27edbc:
    // 0x27edbc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x27edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_27edc0:
    // 0x27edc0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x27edc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27edc4:
    // 0x27edc4: 0x9623006c  lhu         $v1, 0x6C($s1)
    ctx->pc = 0x27edc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
label_27edc8:
    // 0x27edc8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x27edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_27edcc:
    // 0x27edcc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x27edccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27edd0:
    // 0x27edd0: 0x1464001f  bne         $v1, $a0, . + 4 + (0x1F << 2)
label_27edd4:
    if (ctx->pc == 0x27EDD4u) {
        ctx->pc = 0x27EDD8u;
        goto label_27edd8;
    }
    ctx->pc = 0x27EDD0u;
    {
        const bool branch_taken_0x27edd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x27edd0) {
            ctx->pc = 0x27EE50u;
            goto label_27ee50;
        }
    }
    ctx->pc = 0x27EDD8u;
label_27edd8:
    // 0x27edd8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x27edd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27eddc:
    // 0x27eddc: 0x27a304c0  addiu       $v1, $sp, 0x4C0
    ctx->pc = 0x27eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_27ede0:
    // 0x27ede0: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x27ede0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_27ede4:
    // 0x27ede4: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x27ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_27ede8:
    // 0x27ede8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x27ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_27edec:
    // 0x27edec: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x27edecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
label_27edf0:
    // 0x27edf0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x27edf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_27edf4:
    // 0x27edf4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x27edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_27edf8:
    // 0x27edf8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27edfc:
    // 0x27edfc: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x27edfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27ee00:
    // 0x27ee00: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x27ee00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ee04:
    // 0x27ee04: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x27ee04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ee08:
    // 0x27ee08: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x27ee08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27ee0c:
    // 0x27ee0c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27ee0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27ee10:
    // 0x27ee10: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27ee10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27ee14:
    // 0x27ee14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27ee18:
    // 0x27ee18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x27ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_27ee1c:
    // 0x27ee1c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x27ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_27ee20:
    // 0x27ee20: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x27ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_27ee24:
    // 0x27ee24: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27ee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ee28:
    // 0x27ee28: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x27ee28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_27ee2c:
    // 0x27ee2c: 0x8fa304c0  lw          $v1, 0x4C0($sp)
    ctx->pc = 0x27ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1216)));
label_27ee30:
    // 0x27ee30: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x27ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_27ee34:
    // 0x27ee34: 0x27a304c4  addiu       $v1, $sp, 0x4C4
    ctx->pc = 0x27ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1220));
label_27ee38:
    // 0x27ee38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27ee3c:
    // 0x27ee3c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x27ee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_27ee40:
    // 0x27ee40: 0x27a304c8  addiu       $v1, $sp, 0x4C8
    ctx->pc = 0x27ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1224));
label_27ee44:
    // 0x27ee44: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27ee44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ee48:
    // 0x27ee48: 0x10000047  b           . + 4 + (0x47 << 2)
label_27ee4c:
    if (ctx->pc == 0x27EE4Cu) {
        ctx->pc = 0x27EE4Cu;
            // 0x27ee4c: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->pc = 0x27EE50u;
        goto label_27ee50;
    }
    ctx->pc = 0x27EE48u;
    {
        const bool branch_taken_0x27ee48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE48u;
            // 0x27ee4c: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee48) {
            ctx->pc = 0x27EF68u;
            goto label_27ef68;
        }
    }
    ctx->pc = 0x27EE50u;
label_27ee50:
    // 0x27ee50: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x27ee50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_27ee54:
    // 0x27ee54: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x27ee54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_27ee58:
    // 0x27ee58: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x27ee58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_27ee5c:
    // 0x27ee5c: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x27ee5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_27ee60:
    // 0x27ee60: 0xc086850  jal         func_21A140
label_27ee64:
    if (ctx->pc == 0x27EE64u) {
        ctx->pc = 0x27EE64u;
            // 0x27ee64: 0x27a800b0  addiu       $t0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27EE68u;
        goto label_27ee68;
    }
    ctx->pc = 0x27EE60u;
    SET_GPR_U32(ctx, 31, 0x27EE68u);
    ctx->pc = 0x27EE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE60u;
            // 0x27ee64: 0x27a800b0  addiu       $t0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A140u;
    if (runtime->hasFunction(0x21A140u)) {
        auto targetFn = runtime->lookupFunction(0x21A140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE68u; }
        if (ctx->pc != 0x27EE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A140_0x21a140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE68u; }
        if (ctx->pc != 0x27EE68u) { return; }
    }
    ctx->pc = 0x27EE68u;
label_27ee68:
    // 0x27ee68: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x27ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_27ee6c:
    // 0x27ee6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ee6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ee70:
    // 0x27ee70: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x27ee70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_27ee74:
    // 0x27ee74: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27ee78:
    // 0x27ee78: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x27ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27ee7c:
    // 0x27ee7c: 0xc09fabc  jal         func_27EAF0
label_27ee80:
    if (ctx->pc == 0x27EE80u) {
        ctx->pc = 0x27EE80u;
            // 0x27ee80: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27EE84u;
        goto label_27ee84;
    }
    ctx->pc = 0x27EE7Cu;
    SET_GPR_U32(ctx, 31, 0x27EE84u);
    ctx->pc = 0x27EE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE7Cu;
            // 0x27ee80: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27EAF0u;
    if (runtime->hasFunction(0x27EAF0u)) {
        auto targetFn = runtime->lookupFunction(0x27EAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE84u; }
        if (ctx->pc != 0x27EE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027EAF0_0x27eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE84u; }
        if (ctx->pc != 0x27EE84u) { return; }
    }
    ctx->pc = 0x27EE84u;
label_27ee84:
    // 0x27ee84: 0x401827  not         $v1, $v0
    ctx->pc = 0x27ee84u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_27ee88:
    // 0x27ee88: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27ee88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27ee8c:
    // 0x27ee8c: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
label_27ee90:
    if (ctx->pc == 0x27EE90u) {
        ctx->pc = 0x27EE94u;
        goto label_27ee94;
    }
    ctx->pc = 0x27EE8Cu;
    {
        const bool branch_taken_0x27ee8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ee8c) {
            ctx->pc = 0x27EF68u;
            goto label_27ef68;
        }
    }
    ctx->pc = 0x27EE94u;
label_27ee94:
    // 0x27ee94: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x27ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_27ee98:
    // 0x27ee98: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27ee98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27ee9c:
    // 0x27ee9c: 0x9624006c  lhu         $a0, 0x6C($s1)
    ctx->pc = 0x27ee9cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
label_27eea0:
    // 0x27eea0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27eea4:
    // 0x27eea4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27eea8:
    // 0x27eea8: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x27eea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_27eeac:
    // 0x27eeac: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x27eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_27eeb0:
    // 0x27eeb0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x27eeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27eeb4:
    // 0x27eeb4: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x27eeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_27eeb8:
    // 0x27eeb8: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x27eeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_27eebc:
    // 0x27eebc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_27eec0:
    if (ctx->pc == 0x27EEC0u) {
        ctx->pc = 0x27EEC0u;
            // 0x27eec0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27EEC4u;
        goto label_27eec4;
    }
    ctx->pc = 0x27EEBCu;
    {
        const bool branch_taken_0x27eebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x27EEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EEBCu;
            // 0x27eec0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eebc) {
            ctx->pc = 0x27EED0u;
            goto label_27eed0;
        }
    }
    ctx->pc = 0x27EEC4u;
label_27eec4:
    // 0x27eec4: 0xc0a728c  jal         func_29CA30
label_27eec8:
    if (ctx->pc == 0x27EEC8u) {
        ctx->pc = 0x27EECCu;
        goto label_27eecc;
    }
    ctx->pc = 0x27EEC4u;
    SET_GPR_U32(ctx, 31, 0x27EECCu);
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EECCu; }
        if (ctx->pc != 0x27EECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EECCu; }
        if (ctx->pc != 0x27EECCu) { return; }
    }
    ctx->pc = 0x27EECCu;
label_27eecc:
    // 0x27eecc: 0x0  nop
    ctx->pc = 0x27eeccu;
    // NOP
label_27eed0:
    // 0x27eed0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x27eed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27eed4:
    // 0x27eed4: 0x27a304b0  addiu       $v1, $sp, 0x4B0
    ctx->pc = 0x27eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_27eed8:
    // 0x27eed8: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x27eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_27eedc:
    // 0x27eedc: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x27eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
label_27eee0:
    // 0x27eee0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x27eee0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_27eee4:
    // 0x27eee4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x27eee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27eee8:
    // 0x27eee8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27eee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27eeec:
    // 0x27eeec: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x27eeecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_27eef0:
    // 0x27eef0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x27eef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_27eef4:
    // 0x27eef4: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x27eef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27eef8:
    // 0x27eef8: 0x9e3021  addu        $a2, $a0, $fp
    ctx->pc = 0x27eef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_27eefc:
    // 0x27eefc: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x27eefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_27ef00:
    // 0x27ef00: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x27ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_27ef04:
    // 0x27ef04: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x27ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_27ef08:
    // 0x27ef08: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x27ef08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
label_27ef0c:
    // 0x27ef0c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x27ef0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_27ef10:
    // 0x27ef10: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x27ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_27ef14:
    // 0x27ef14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27ef18:
    // 0x27ef18: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x27ef18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27ef1c:
    // 0x27ef1c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x27ef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ef20:
    // 0x27ef20: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x27ef20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ef24:
    // 0x27ef24: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x27ef24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27ef28:
    // 0x27ef28: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27ef28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27ef2c:
    // 0x27ef2c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27ef2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27ef30:
    // 0x27ef30: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x27ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_27ef34:
    // 0x27ef34: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x27ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_27ef38:
    // 0x27ef38: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27ef3c:
    // 0x27ef3c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x27ef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_27ef40:
    // 0x27ef40: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x27ef40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ef44:
    // 0x27ef44: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x27ef44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_27ef48:
    // 0x27ef48: 0x8fa304b0  lw          $v1, 0x4B0($sp)
    ctx->pc = 0x27ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_27ef4c:
    // 0x27ef4c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x27ef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_27ef50:
    // 0x27ef50: 0x27a304b4  addiu       $v1, $sp, 0x4B4
    ctx->pc = 0x27ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1204));
label_27ef54:
    // 0x27ef54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27ef58:
    // 0x27ef58: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27ef58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27ef5c:
    // 0x27ef5c: 0x27a304b8  addiu       $v1, $sp, 0x4B8
    ctx->pc = 0x27ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
label_27ef60:
    // 0x27ef60: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27ef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ef64:
    // 0x27ef64: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x27ef64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_27ef68:
    // 0x27ef68: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x27ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_27ef6c:
    // 0x27ef6c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27ef6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_27ef70:
    // 0x27ef70: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x27ef70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27ef74:
    // 0x27ef74: 0x1460ff7c  bnez        $v1, . + 4 + (-0x84 << 2)
label_27ef78:
    if (ctx->pc == 0x27EF78u) {
        ctx->pc = 0x27EF78u;
            // 0x27ef78: 0x27de000c  addiu       $fp, $fp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
        ctx->pc = 0x27EF7Cu;
        goto label_27ef7c;
    }
    ctx->pc = 0x27EF74u;
    {
        const bool branch_taken_0x27ef74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF74u;
            // 0x27ef78: 0x27de000c  addiu       $fp, $fp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef74) {
            ctx->pc = 0x27ED68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27ed68;
        }
    }
    ctx->pc = 0x27EF7Cu;
label_27ef7c:
    // 0x27ef7c: 0x0  nop
    ctx->pc = 0x27ef7cu;
    // NOP
label_27ef80:
    // 0x27ef80: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x27ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_27ef84:
    // 0x27ef84: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x27ef84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27ef88:
    // 0x27ef88: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x27ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_27ef8c:
    // 0x27ef8c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x27ef8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27ef90:
    // 0x27ef90: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_27ef94:
    if (ctx->pc == 0x27EF94u) {
        ctx->pc = 0x27EF94u;
            // 0x27ef94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27EF98u;
        goto label_27ef98;
    }
    ctx->pc = 0x27EF90u;
    {
        const bool branch_taken_0x27ef90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF90u;
            // 0x27ef94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef90) {
            ctx->pc = 0x27F020u;
            goto label_27f020;
        }
    }
    ctx->pc = 0x27EF98u;
label_27ef98:
    // 0x27ef98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27ef98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ef9c:
    // 0x27ef9c: 0x0  nop
    ctx->pc = 0x27ef9cu;
    // NOP
label_27efa0:
    // 0x27efa0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x27efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_27efa4:
    // 0x27efa4: 0x8ee4000c  lw          $a0, 0xC($s7)
    ctx->pc = 0x27efa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_27efa8:
    // 0x27efa8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x27efa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27efac:
    // 0x27efac: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x27efacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_27efb0:
    // 0x27efb0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x27efb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_27efb4:
    // 0x27efb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27efb8:
    // 0x27efb8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_27efbc:
    // 0x27efbc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27efc0:
    // 0x27efc0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x27efc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_27efc4:
    // 0x27efc4: 0x8c630068  lw          $v1, 0x68($v1)
    ctx->pc = 0x27efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_27efc8:
    // 0x27efc8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27efcc:
    // 0x27efcc: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x27efccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_27efd0:
    // 0x27efd0: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x27efd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27efd4:
    // 0x27efd4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x27efd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_27efd8:
    // 0x27efd8: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x27efd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27efdc:
    // 0x27efdc: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x27efdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_27efe0:
    // 0x27efe0: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x27efe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27efe4:
    // 0x27efe4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x27efe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_27efe8:
    // 0x27efe8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x27efe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27efec:
    // 0x27efec: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x27efecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_27eff0:
    // 0x27eff0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x27eff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27eff4:
    // 0x27eff4: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x27eff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_27eff8:
    // 0x27eff8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x27eff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27effc:
    // 0x27effc: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x27effcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_27f000:
    // 0x27f000: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x27f000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27f004:
    // 0x27f004: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x27f004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_27f008:
    // 0x27f008: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x27f008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_27f00c:
    // 0x27f00c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x27f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_27f010:
    // 0x27f010: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x27f010u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27f014:
    // 0x27f014: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_27f018:
    if (ctx->pc == 0x27F018u) {
        ctx->pc = 0x27F018u;
            // 0x27f018: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->pc = 0x27F01Cu;
        goto label_27f01c;
    }
    ctx->pc = 0x27F014u;
    {
        const bool branch_taken_0x27f014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F014u;
            // 0x27f018: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f014) {
            ctx->pc = 0x27EFA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27efa0;
        }
    }
    ctx->pc = 0x27F01Cu;
label_27f01c:
    // 0x27f01c: 0x0  nop
    ctx->pc = 0x27f01cu;
    // NOP
label_27f020:
    // 0x27f020: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27f020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27f024:
    // 0x27f024: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27f024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27f028:
    // 0x27f028: 0xac96000c  sw          $s6, 0xC($a0)
    ctx->pc = 0x27f028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 22));
label_27f02c:
    // 0x27f02c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x27f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_27f030:
    // 0x27f030: 0x16c30005  bne         $s6, $v1, . + 4 + (0x5 << 2)
label_27f034:
    if (ctx->pc == 0x27F034u) {
        ctx->pc = 0x27F038u;
        goto label_27f038;
    }
    ctx->pc = 0x27F030u;
    {
        const bool branch_taken_0x27f030 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x27f030) {
            ctx->pc = 0x27F048u;
            goto label_27f048;
        }
    }
    ctx->pc = 0x27F038u;
label_27f038:
    // 0x27f038: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27f038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27f03c:
    // 0x27f03c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x27f03cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_27f040:
    // 0x27f040: 0x320f809  jalr        $t9
label_27f044:
    if (ctx->pc == 0x27F044u) {
        ctx->pc = 0x27F044u;
            // 0x27f044: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F048u;
        goto label_27f048;
    }
    ctx->pc = 0x27F040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27F048u);
        ctx->pc = 0x27F044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F040u;
            // 0x27f044: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27F048u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27F048u; }
            if (ctx->pc != 0x27F048u) { return; }
        }
        }
    }
    ctx->pc = 0x27F048u;
label_27f048:
    // 0x27f048: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27f048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_27f04c:
    // 0x27f04c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27f04cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27f050:
    // 0x27f050: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27f050u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27f054:
    // 0x27f054: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27f054u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27f058:
    // 0x27f058: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27f058u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27f05c:
    // 0x27f05c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27f05cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27f060:
    // 0x27f060: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27f060u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27f064:
    // 0x27f064: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27f064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27f068:
    // 0x27f068: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27f068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27f06c:
    // 0x27f06c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27f070:
    // 0x27f070: 0x3e00008  jr          $ra
label_27f074:
    if (ctx->pc == 0x27F074u) {
        ctx->pc = 0x27F074u;
            // 0x27f074: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->pc = 0x27F078u;
        goto label_27f078;
    }
    ctx->pc = 0x27F070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F070u;
            // 0x27f074: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27F078u;
label_27f078:
    // 0x27f078: 0x0  nop
    ctx->pc = 0x27f078u;
    // NOP
label_27f07c:
    // 0x27f07c: 0x0  nop
    ctx->pc = 0x27f07cu;
    // NOP
}
