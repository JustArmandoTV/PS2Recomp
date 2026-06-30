#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003ECDC0
// Address: 0x3ecdc0 - 0x3ed320
void sub_003ECDC0_0x3ecdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ECDC0_0x3ecdc0");
#endif

    switch (ctx->pc) {
        case 0x3ecdc0u: goto label_3ecdc0;
        case 0x3ecdc4u: goto label_3ecdc4;
        case 0x3ecdc8u: goto label_3ecdc8;
        case 0x3ecdccu: goto label_3ecdcc;
        case 0x3ecdd0u: goto label_3ecdd0;
        case 0x3ecdd4u: goto label_3ecdd4;
        case 0x3ecdd8u: goto label_3ecdd8;
        case 0x3ecddcu: goto label_3ecddc;
        case 0x3ecde0u: goto label_3ecde0;
        case 0x3ecde4u: goto label_3ecde4;
        case 0x3ecde8u: goto label_3ecde8;
        case 0x3ecdecu: goto label_3ecdec;
        case 0x3ecdf0u: goto label_3ecdf0;
        case 0x3ecdf4u: goto label_3ecdf4;
        case 0x3ecdf8u: goto label_3ecdf8;
        case 0x3ecdfcu: goto label_3ecdfc;
        case 0x3ece00u: goto label_3ece00;
        case 0x3ece04u: goto label_3ece04;
        case 0x3ece08u: goto label_3ece08;
        case 0x3ece0cu: goto label_3ece0c;
        case 0x3ece10u: goto label_3ece10;
        case 0x3ece14u: goto label_3ece14;
        case 0x3ece18u: goto label_3ece18;
        case 0x3ece1cu: goto label_3ece1c;
        case 0x3ece20u: goto label_3ece20;
        case 0x3ece24u: goto label_3ece24;
        case 0x3ece28u: goto label_3ece28;
        case 0x3ece2cu: goto label_3ece2c;
        case 0x3ece30u: goto label_3ece30;
        case 0x3ece34u: goto label_3ece34;
        case 0x3ece38u: goto label_3ece38;
        case 0x3ece3cu: goto label_3ece3c;
        case 0x3ece40u: goto label_3ece40;
        case 0x3ece44u: goto label_3ece44;
        case 0x3ece48u: goto label_3ece48;
        case 0x3ece4cu: goto label_3ece4c;
        case 0x3ece50u: goto label_3ece50;
        case 0x3ece54u: goto label_3ece54;
        case 0x3ece58u: goto label_3ece58;
        case 0x3ece5cu: goto label_3ece5c;
        case 0x3ece60u: goto label_3ece60;
        case 0x3ece64u: goto label_3ece64;
        case 0x3ece68u: goto label_3ece68;
        case 0x3ece6cu: goto label_3ece6c;
        case 0x3ece70u: goto label_3ece70;
        case 0x3ece74u: goto label_3ece74;
        case 0x3ece78u: goto label_3ece78;
        case 0x3ece7cu: goto label_3ece7c;
        case 0x3ece80u: goto label_3ece80;
        case 0x3ece84u: goto label_3ece84;
        case 0x3ece88u: goto label_3ece88;
        case 0x3ece8cu: goto label_3ece8c;
        case 0x3ece90u: goto label_3ece90;
        case 0x3ece94u: goto label_3ece94;
        case 0x3ece98u: goto label_3ece98;
        case 0x3ece9cu: goto label_3ece9c;
        case 0x3ecea0u: goto label_3ecea0;
        case 0x3ecea4u: goto label_3ecea4;
        case 0x3ecea8u: goto label_3ecea8;
        case 0x3eceacu: goto label_3eceac;
        case 0x3eceb0u: goto label_3eceb0;
        case 0x3eceb4u: goto label_3eceb4;
        case 0x3eceb8u: goto label_3eceb8;
        case 0x3ecebcu: goto label_3ecebc;
        case 0x3ecec0u: goto label_3ecec0;
        case 0x3ecec4u: goto label_3ecec4;
        case 0x3ecec8u: goto label_3ecec8;
        case 0x3ececcu: goto label_3ececc;
        case 0x3eced0u: goto label_3eced0;
        case 0x3eced4u: goto label_3eced4;
        case 0x3eced8u: goto label_3eced8;
        case 0x3ecedcu: goto label_3ecedc;
        case 0x3ecee0u: goto label_3ecee0;
        case 0x3ecee4u: goto label_3ecee4;
        case 0x3ecee8u: goto label_3ecee8;
        case 0x3eceecu: goto label_3eceec;
        case 0x3ecef0u: goto label_3ecef0;
        case 0x3ecef4u: goto label_3ecef4;
        case 0x3ecef8u: goto label_3ecef8;
        case 0x3ecefcu: goto label_3ecefc;
        case 0x3ecf00u: goto label_3ecf00;
        case 0x3ecf04u: goto label_3ecf04;
        case 0x3ecf08u: goto label_3ecf08;
        case 0x3ecf0cu: goto label_3ecf0c;
        case 0x3ecf10u: goto label_3ecf10;
        case 0x3ecf14u: goto label_3ecf14;
        case 0x3ecf18u: goto label_3ecf18;
        case 0x3ecf1cu: goto label_3ecf1c;
        case 0x3ecf20u: goto label_3ecf20;
        case 0x3ecf24u: goto label_3ecf24;
        case 0x3ecf28u: goto label_3ecf28;
        case 0x3ecf2cu: goto label_3ecf2c;
        case 0x3ecf30u: goto label_3ecf30;
        case 0x3ecf34u: goto label_3ecf34;
        case 0x3ecf38u: goto label_3ecf38;
        case 0x3ecf3cu: goto label_3ecf3c;
        case 0x3ecf40u: goto label_3ecf40;
        case 0x3ecf44u: goto label_3ecf44;
        case 0x3ecf48u: goto label_3ecf48;
        case 0x3ecf4cu: goto label_3ecf4c;
        case 0x3ecf50u: goto label_3ecf50;
        case 0x3ecf54u: goto label_3ecf54;
        case 0x3ecf58u: goto label_3ecf58;
        case 0x3ecf5cu: goto label_3ecf5c;
        case 0x3ecf60u: goto label_3ecf60;
        case 0x3ecf64u: goto label_3ecf64;
        case 0x3ecf68u: goto label_3ecf68;
        case 0x3ecf6cu: goto label_3ecf6c;
        case 0x3ecf70u: goto label_3ecf70;
        case 0x3ecf74u: goto label_3ecf74;
        case 0x3ecf78u: goto label_3ecf78;
        case 0x3ecf7cu: goto label_3ecf7c;
        case 0x3ecf80u: goto label_3ecf80;
        case 0x3ecf84u: goto label_3ecf84;
        case 0x3ecf88u: goto label_3ecf88;
        case 0x3ecf8cu: goto label_3ecf8c;
        case 0x3ecf90u: goto label_3ecf90;
        case 0x3ecf94u: goto label_3ecf94;
        case 0x3ecf98u: goto label_3ecf98;
        case 0x3ecf9cu: goto label_3ecf9c;
        case 0x3ecfa0u: goto label_3ecfa0;
        case 0x3ecfa4u: goto label_3ecfa4;
        case 0x3ecfa8u: goto label_3ecfa8;
        case 0x3ecfacu: goto label_3ecfac;
        case 0x3ecfb0u: goto label_3ecfb0;
        case 0x3ecfb4u: goto label_3ecfb4;
        case 0x3ecfb8u: goto label_3ecfb8;
        case 0x3ecfbcu: goto label_3ecfbc;
        case 0x3ecfc0u: goto label_3ecfc0;
        case 0x3ecfc4u: goto label_3ecfc4;
        case 0x3ecfc8u: goto label_3ecfc8;
        case 0x3ecfccu: goto label_3ecfcc;
        case 0x3ecfd0u: goto label_3ecfd0;
        case 0x3ecfd4u: goto label_3ecfd4;
        case 0x3ecfd8u: goto label_3ecfd8;
        case 0x3ecfdcu: goto label_3ecfdc;
        case 0x3ecfe0u: goto label_3ecfe0;
        case 0x3ecfe4u: goto label_3ecfe4;
        case 0x3ecfe8u: goto label_3ecfe8;
        case 0x3ecfecu: goto label_3ecfec;
        case 0x3ecff0u: goto label_3ecff0;
        case 0x3ecff4u: goto label_3ecff4;
        case 0x3ecff8u: goto label_3ecff8;
        case 0x3ecffcu: goto label_3ecffc;
        case 0x3ed000u: goto label_3ed000;
        case 0x3ed004u: goto label_3ed004;
        case 0x3ed008u: goto label_3ed008;
        case 0x3ed00cu: goto label_3ed00c;
        case 0x3ed010u: goto label_3ed010;
        case 0x3ed014u: goto label_3ed014;
        case 0x3ed018u: goto label_3ed018;
        case 0x3ed01cu: goto label_3ed01c;
        case 0x3ed020u: goto label_3ed020;
        case 0x3ed024u: goto label_3ed024;
        case 0x3ed028u: goto label_3ed028;
        case 0x3ed02cu: goto label_3ed02c;
        case 0x3ed030u: goto label_3ed030;
        case 0x3ed034u: goto label_3ed034;
        case 0x3ed038u: goto label_3ed038;
        case 0x3ed03cu: goto label_3ed03c;
        case 0x3ed040u: goto label_3ed040;
        case 0x3ed044u: goto label_3ed044;
        case 0x3ed048u: goto label_3ed048;
        case 0x3ed04cu: goto label_3ed04c;
        case 0x3ed050u: goto label_3ed050;
        case 0x3ed054u: goto label_3ed054;
        case 0x3ed058u: goto label_3ed058;
        case 0x3ed05cu: goto label_3ed05c;
        case 0x3ed060u: goto label_3ed060;
        case 0x3ed064u: goto label_3ed064;
        case 0x3ed068u: goto label_3ed068;
        case 0x3ed06cu: goto label_3ed06c;
        case 0x3ed070u: goto label_3ed070;
        case 0x3ed074u: goto label_3ed074;
        case 0x3ed078u: goto label_3ed078;
        case 0x3ed07cu: goto label_3ed07c;
        case 0x3ed080u: goto label_3ed080;
        case 0x3ed084u: goto label_3ed084;
        case 0x3ed088u: goto label_3ed088;
        case 0x3ed08cu: goto label_3ed08c;
        case 0x3ed090u: goto label_3ed090;
        case 0x3ed094u: goto label_3ed094;
        case 0x3ed098u: goto label_3ed098;
        case 0x3ed09cu: goto label_3ed09c;
        case 0x3ed0a0u: goto label_3ed0a0;
        case 0x3ed0a4u: goto label_3ed0a4;
        case 0x3ed0a8u: goto label_3ed0a8;
        case 0x3ed0acu: goto label_3ed0ac;
        case 0x3ed0b0u: goto label_3ed0b0;
        case 0x3ed0b4u: goto label_3ed0b4;
        case 0x3ed0b8u: goto label_3ed0b8;
        case 0x3ed0bcu: goto label_3ed0bc;
        case 0x3ed0c0u: goto label_3ed0c0;
        case 0x3ed0c4u: goto label_3ed0c4;
        case 0x3ed0c8u: goto label_3ed0c8;
        case 0x3ed0ccu: goto label_3ed0cc;
        case 0x3ed0d0u: goto label_3ed0d0;
        case 0x3ed0d4u: goto label_3ed0d4;
        case 0x3ed0d8u: goto label_3ed0d8;
        case 0x3ed0dcu: goto label_3ed0dc;
        case 0x3ed0e0u: goto label_3ed0e0;
        case 0x3ed0e4u: goto label_3ed0e4;
        case 0x3ed0e8u: goto label_3ed0e8;
        case 0x3ed0ecu: goto label_3ed0ec;
        case 0x3ed0f0u: goto label_3ed0f0;
        case 0x3ed0f4u: goto label_3ed0f4;
        case 0x3ed0f8u: goto label_3ed0f8;
        case 0x3ed0fcu: goto label_3ed0fc;
        case 0x3ed100u: goto label_3ed100;
        case 0x3ed104u: goto label_3ed104;
        case 0x3ed108u: goto label_3ed108;
        case 0x3ed10cu: goto label_3ed10c;
        case 0x3ed110u: goto label_3ed110;
        case 0x3ed114u: goto label_3ed114;
        case 0x3ed118u: goto label_3ed118;
        case 0x3ed11cu: goto label_3ed11c;
        case 0x3ed120u: goto label_3ed120;
        case 0x3ed124u: goto label_3ed124;
        case 0x3ed128u: goto label_3ed128;
        case 0x3ed12cu: goto label_3ed12c;
        case 0x3ed130u: goto label_3ed130;
        case 0x3ed134u: goto label_3ed134;
        case 0x3ed138u: goto label_3ed138;
        case 0x3ed13cu: goto label_3ed13c;
        case 0x3ed140u: goto label_3ed140;
        case 0x3ed144u: goto label_3ed144;
        case 0x3ed148u: goto label_3ed148;
        case 0x3ed14cu: goto label_3ed14c;
        case 0x3ed150u: goto label_3ed150;
        case 0x3ed154u: goto label_3ed154;
        case 0x3ed158u: goto label_3ed158;
        case 0x3ed15cu: goto label_3ed15c;
        case 0x3ed160u: goto label_3ed160;
        case 0x3ed164u: goto label_3ed164;
        case 0x3ed168u: goto label_3ed168;
        case 0x3ed16cu: goto label_3ed16c;
        case 0x3ed170u: goto label_3ed170;
        case 0x3ed174u: goto label_3ed174;
        case 0x3ed178u: goto label_3ed178;
        case 0x3ed17cu: goto label_3ed17c;
        case 0x3ed180u: goto label_3ed180;
        case 0x3ed184u: goto label_3ed184;
        case 0x3ed188u: goto label_3ed188;
        case 0x3ed18cu: goto label_3ed18c;
        case 0x3ed190u: goto label_3ed190;
        case 0x3ed194u: goto label_3ed194;
        case 0x3ed198u: goto label_3ed198;
        case 0x3ed19cu: goto label_3ed19c;
        case 0x3ed1a0u: goto label_3ed1a0;
        case 0x3ed1a4u: goto label_3ed1a4;
        case 0x3ed1a8u: goto label_3ed1a8;
        case 0x3ed1acu: goto label_3ed1ac;
        case 0x3ed1b0u: goto label_3ed1b0;
        case 0x3ed1b4u: goto label_3ed1b4;
        case 0x3ed1b8u: goto label_3ed1b8;
        case 0x3ed1bcu: goto label_3ed1bc;
        case 0x3ed1c0u: goto label_3ed1c0;
        case 0x3ed1c4u: goto label_3ed1c4;
        case 0x3ed1c8u: goto label_3ed1c8;
        case 0x3ed1ccu: goto label_3ed1cc;
        case 0x3ed1d0u: goto label_3ed1d0;
        case 0x3ed1d4u: goto label_3ed1d4;
        case 0x3ed1d8u: goto label_3ed1d8;
        case 0x3ed1dcu: goto label_3ed1dc;
        case 0x3ed1e0u: goto label_3ed1e0;
        case 0x3ed1e4u: goto label_3ed1e4;
        case 0x3ed1e8u: goto label_3ed1e8;
        case 0x3ed1ecu: goto label_3ed1ec;
        case 0x3ed1f0u: goto label_3ed1f0;
        case 0x3ed1f4u: goto label_3ed1f4;
        case 0x3ed1f8u: goto label_3ed1f8;
        case 0x3ed1fcu: goto label_3ed1fc;
        case 0x3ed200u: goto label_3ed200;
        case 0x3ed204u: goto label_3ed204;
        case 0x3ed208u: goto label_3ed208;
        case 0x3ed20cu: goto label_3ed20c;
        case 0x3ed210u: goto label_3ed210;
        case 0x3ed214u: goto label_3ed214;
        case 0x3ed218u: goto label_3ed218;
        case 0x3ed21cu: goto label_3ed21c;
        case 0x3ed220u: goto label_3ed220;
        case 0x3ed224u: goto label_3ed224;
        case 0x3ed228u: goto label_3ed228;
        case 0x3ed22cu: goto label_3ed22c;
        case 0x3ed230u: goto label_3ed230;
        case 0x3ed234u: goto label_3ed234;
        case 0x3ed238u: goto label_3ed238;
        case 0x3ed23cu: goto label_3ed23c;
        case 0x3ed240u: goto label_3ed240;
        case 0x3ed244u: goto label_3ed244;
        case 0x3ed248u: goto label_3ed248;
        case 0x3ed24cu: goto label_3ed24c;
        case 0x3ed250u: goto label_3ed250;
        case 0x3ed254u: goto label_3ed254;
        case 0x3ed258u: goto label_3ed258;
        case 0x3ed25cu: goto label_3ed25c;
        case 0x3ed260u: goto label_3ed260;
        case 0x3ed264u: goto label_3ed264;
        case 0x3ed268u: goto label_3ed268;
        case 0x3ed26cu: goto label_3ed26c;
        case 0x3ed270u: goto label_3ed270;
        case 0x3ed274u: goto label_3ed274;
        case 0x3ed278u: goto label_3ed278;
        case 0x3ed27cu: goto label_3ed27c;
        case 0x3ed280u: goto label_3ed280;
        case 0x3ed284u: goto label_3ed284;
        case 0x3ed288u: goto label_3ed288;
        case 0x3ed28cu: goto label_3ed28c;
        case 0x3ed290u: goto label_3ed290;
        case 0x3ed294u: goto label_3ed294;
        case 0x3ed298u: goto label_3ed298;
        case 0x3ed29cu: goto label_3ed29c;
        case 0x3ed2a0u: goto label_3ed2a0;
        case 0x3ed2a4u: goto label_3ed2a4;
        case 0x3ed2a8u: goto label_3ed2a8;
        case 0x3ed2acu: goto label_3ed2ac;
        case 0x3ed2b0u: goto label_3ed2b0;
        case 0x3ed2b4u: goto label_3ed2b4;
        case 0x3ed2b8u: goto label_3ed2b8;
        case 0x3ed2bcu: goto label_3ed2bc;
        case 0x3ed2c0u: goto label_3ed2c0;
        case 0x3ed2c4u: goto label_3ed2c4;
        case 0x3ed2c8u: goto label_3ed2c8;
        case 0x3ed2ccu: goto label_3ed2cc;
        case 0x3ed2d0u: goto label_3ed2d0;
        case 0x3ed2d4u: goto label_3ed2d4;
        case 0x3ed2d8u: goto label_3ed2d8;
        case 0x3ed2dcu: goto label_3ed2dc;
        case 0x3ed2e0u: goto label_3ed2e0;
        case 0x3ed2e4u: goto label_3ed2e4;
        case 0x3ed2e8u: goto label_3ed2e8;
        case 0x3ed2ecu: goto label_3ed2ec;
        case 0x3ed2f0u: goto label_3ed2f0;
        case 0x3ed2f4u: goto label_3ed2f4;
        case 0x3ed2f8u: goto label_3ed2f8;
        case 0x3ed2fcu: goto label_3ed2fc;
        case 0x3ed300u: goto label_3ed300;
        case 0x3ed304u: goto label_3ed304;
        case 0x3ed308u: goto label_3ed308;
        case 0x3ed30cu: goto label_3ed30c;
        case 0x3ed310u: goto label_3ed310;
        case 0x3ed314u: goto label_3ed314;
        case 0x3ed318u: goto label_3ed318;
        case 0x3ed31cu: goto label_3ed31c;
        default: break;
    }

    ctx->pc = 0x3ecdc0u;

label_3ecdc0:
    // 0x3ecdc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ecdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3ecdc4:
    // 0x3ecdc4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3ecdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3ecdc8:
    // 0x3ecdc8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3ecdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3ecdcc:
    // 0x3ecdcc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ecdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ecdd0:
    // 0x3ecdd0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ecdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3ecdd4:
    // 0x3ecdd4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ecdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3ecdd8:
    // 0x3ecdd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ecdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ecddc:
    // 0x3ecddc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ecddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3ecde0:
    // 0x3ecde0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ecde0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ecde4:
    // 0x3ecde4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3ecde4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3ecde8:
    // 0x3ecde8: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x3ecde8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
label_3ecdec:
    // 0x3ecdec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ecdecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3ecdf0:
    // 0x3ecdf0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3ecdf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ecdf4:
    // 0x3ecdf4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x3ecdf4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_3ecdf8:
    // 0x3ecdf8: 0x3485282e  ori         $a1, $a0, 0x282E
    ctx->pc = 0x3ecdf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10286);
label_3ecdfc:
    // 0x3ecdfc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_3ece00:
    if (ctx->pc == 0x3ECE00u) {
        ctx->pc = 0x3ECE00u;
            // 0x3ece00: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x3ECE04u;
        goto label_3ece04;
    }
    ctx->pc = 0x3ECDFCu;
    {
        const bool branch_taken_0x3ecdfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ECE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECDFCu;
            // 0x3ece00: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecdfc) {
            ctx->pc = 0x3ECE28u;
            goto label_3ece28;
        }
    }
    ctx->pc = 0x3ECE04u;
label_3ece04:
    // 0x3ece04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ece04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ece08:
    // 0x3ece08: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_3ece0c:
    if (ctx->pc == 0x3ECE0Cu) {
        ctx->pc = 0x3ECE0Cu;
            // 0x3ece0c: 0x3c02000a  lui         $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
        ctx->pc = 0x3ECE10u;
        goto label_3ece10;
    }
    ctx->pc = 0x3ECE08u;
    {
        const bool branch_taken_0x3ece08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ece08) {
            ctx->pc = 0x3ECE0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECE08u;
            // 0x3ece0c: 0x3c02000a  lui         $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ECE20u;
            goto label_3ece20;
        }
    }
    ctx->pc = 0x3ECE10u;
label_3ece10:
    // 0x3ece10: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_3ece14:
    if (ctx->pc == 0x3ECE14u) {
        ctx->pc = 0x3ECE14u;
            // 0x3ece14: 0x24053c8d  addiu       $a1, $zero, 0x3C8D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15501));
        ctx->pc = 0x3ECE18u;
        goto label_3ece18;
    }
    ctx->pc = 0x3ECE10u;
    {
        const bool branch_taken_0x3ece10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ece10) {
            ctx->pc = 0x3ECE14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECE10u;
            // 0x3ece14: 0x24053c8d  addiu       $a1, $zero, 0x3C8D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15501));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ECE2Cu;
            goto label_3ece2c;
        }
    }
    ctx->pc = 0x3ECE18u;
label_3ece18:
    // 0x3ece18: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ece1c:
    if (ctx->pc == 0x3ECE1Cu) {
        ctx->pc = 0x3ECE1Cu;
            // 0x3ece1c: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x3ECE20u;
        goto label_3ece20;
    }
    ctx->pc = 0x3ECE18u;
    {
        const bool branch_taken_0x3ece18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECE18u;
            // 0x3ece1c: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece18) {
            ctx->pc = 0x3ECE30u;
            goto label_3ece30;
        }
    }
    ctx->pc = 0x3ECE20u;
label_3ece20:
    // 0x3ece20: 0x10000002  b           . + 4 + (0x2 << 2)
label_3ece24:
    if (ctx->pc == 0x3ECE24u) {
        ctx->pc = 0x3ECE24u;
            // 0x3ece24: 0x3445d570  ori         $a1, $v0, 0xD570 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
        ctx->pc = 0x3ECE28u;
        goto label_3ece28;
    }
    ctx->pc = 0x3ECE20u;
    {
        const bool branch_taken_0x3ece20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECE20u;
            // 0x3ece24: 0x3445d570  ori         $a1, $v0, 0xD570 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece20) {
            ctx->pc = 0x3ECE2Cu;
            goto label_3ece2c;
        }
    }
    ctx->pc = 0x3ECE28u;
label_3ece28:
    // 0x3ece28: 0x24052ee0  addiu       $a1, $zero, 0x2EE0
    ctx->pc = 0x3ece28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12000));
label_3ece2c:
    // 0x3ece2c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x3ece2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_3ece30:
    // 0x3ece30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ece30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ece34:
    // 0x3ece34: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x3ece34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ece38:
    // 0x3ece38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ece38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ece3c:
    // 0x3ece3c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3ece3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_3ece40:
    // 0x3ece40: 0xc0d1570  jal         func_3455C0
label_3ece44:
    if (ctx->pc == 0x3ECE44u) {
        ctx->pc = 0x3ECE44u;
            // 0x3ece44: 0x34460004  ori         $a2, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->pc = 0x3ECE48u;
        goto label_3ece48;
    }
    ctx->pc = 0x3ECE40u;
    SET_GPR_U32(ctx, 31, 0x3ECE48u);
    ctx->pc = 0x3ECE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECE40u;
            // 0x3ece44: 0x34460004  ori         $a2, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3455C0u;
    if (runtime->hasFunction(0x3455C0u)) {
        auto targetFn = runtime->lookupFunction(0x3455C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ECE48u; }
        if (ctx->pc != 0x3ECE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003455C0_0x3455c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ECE48u; }
        if (ctx->pc != 0x3ECE48u) { return; }
    }
    ctx->pc = 0x3ECE48u;
label_3ece48:
    // 0x3ece48: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3ece48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3ece4c:
    // 0x3ece4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ece4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ece50:
    // 0x3ece50: 0x24639e00  addiu       $v1, $v1, -0x6200
    ctx->pc = 0x3ece50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942208));
label_3ece54:
    // 0x3ece54: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3ece54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3ece58:
    // 0x3ece58: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x3ece58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_3ece5c:
    // 0x3ece5c: 0xe63500d4  swc1        $f21, 0xD4($s1)
    ctx->pc = 0x3ece5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
label_3ece60:
    // 0x3ece60: 0xe63400d8  swc1        $f20, 0xD8($s1)
    ctx->pc = 0x3ece60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
label_3ece64:
    // 0x3ece64: 0xae3000dc  sw          $s0, 0xDC($s1)
    ctx->pc = 0x3ece64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 16));
label_3ece68:
    // 0x3ece68: 0x8c500ea8  lw          $s0, 0xEA8($v0)
    ctx->pc = 0x3ece68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3752)));
label_3ece6c:
    // 0x3ece6c: 0x920208ac  lbu         $v0, 0x8AC($s0)
    ctx->pc = 0x3ece6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2220)));
label_3ece70:
    // 0x3ece70: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3ece74:
    if (ctx->pc == 0x3ECE74u) {
        ctx->pc = 0x3ECE74u;
            // 0x3ece74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE78u;
        goto label_3ece78;
    }
    ctx->pc = 0x3ECE70u;
    {
        const bool branch_taken_0x3ece70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ece70) {
            ctx->pc = 0x3ECE74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECE70u;
            // 0x3ece74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ECEACu;
            goto label_3eceac;
        }
    }
    ctx->pc = 0x3ECE78u;
label_3ece78:
    // 0x3ece78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ece78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ece7c:
    // 0x3ece7c: 0x26120054  addiu       $s2, $s0, 0x54
    ctx->pc = 0x3ece7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_3ece80:
    // 0x3ece80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ece80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ece84:
    // 0x3ece84: 0x26450064  addiu       $a1, $s2, 0x64
    ctx->pc = 0x3ece84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
label_3ece88:
    // 0x3ece88: 0xc0d1548  jal         func_345520
label_3ece8c:
    if (ctx->pc == 0x3ECE8Cu) {
        ctx->pc = 0x3ECE8Cu;
            // 0x3ece8c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE90u;
        goto label_3ece90;
    }
    ctx->pc = 0x3ECE88u;
    SET_GPR_U32(ctx, 31, 0x3ECE90u);
    ctx->pc = 0x3ECE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECE88u;
            // 0x3ece8c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345520u;
    if (runtime->hasFunction(0x345520u)) {
        auto targetFn = runtime->lookupFunction(0x345520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ECE90u; }
        if (ctx->pc != 0x3ECE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345520_0x345520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ECE90u; }
        if (ctx->pc != 0x3ECE90u) { return; }
    }
    ctx->pc = 0x3ECE90u;
label_3ece90:
    // 0x3ece90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ece90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3ece94:
    // 0x3ece94: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x3ece94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_3ece98:
    // 0x3ece98: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_3ece9c:
    if (ctx->pc == 0x3ECE9Cu) {
        ctx->pc = 0x3ECE9Cu;
            // 0x3ece9c: 0x26520034  addiu       $s2, $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
        ctx->pc = 0x3ECEA0u;
        goto label_3ecea0;
    }
    ctx->pc = 0x3ECE98u;
    {
        const bool branch_taken_0x3ece98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECE98u;
            // 0x3ece9c: 0x26520034  addiu       $s2, $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece98) {
            ctx->pc = 0x3ECE80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ece80;
        }
    }
    ctx->pc = 0x3ECEA0u;
label_3ecea0:
    // 0x3ecea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ecea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ecea4:
    // 0x3ecea4: 0xa20208ac  sb          $v0, 0x8AC($s0)
    ctx->pc = 0x3ecea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2220), (uint8_t)GPR_U32(ctx, 2));
label_3ecea8:
    // 0x3ecea8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ecea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eceac:
    // 0x3eceac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3eceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3eceb0:
    // 0x3eceb0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3eceb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3eceb4:
    // 0x3eceb4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3eceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3eceb8:
    // 0x3eceb8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3eceb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ecebc:
    // 0x3ecebc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ecebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ecec0:
    // 0x3ecec0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ecec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ecec4:
    // 0x3ecec4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ecec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ecec8:
    // 0x3ecec8: 0x3e00008  jr          $ra
label_3ececc:
    if (ctx->pc == 0x3ECECCu) {
        ctx->pc = 0x3ECECCu;
            // 0x3ececc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3ECED0u;
        goto label_3eced0;
    }
    ctx->pc = 0x3ECEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ECECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECEC8u;
            // 0x3ececc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ECED0u;
label_3eced0:
    // 0x3eced0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3eced0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3eced4:
    // 0x3eced4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3eced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3eced8:
    // 0x3eced8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3eced8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3ecedc:
    // 0x3ecedc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ecedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ecee0:
    // 0x3ecee0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ecee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ecee4:
    // 0x3ecee4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ecee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ecee8:
    // 0x3ecee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ecee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3eceec:
    // 0x3eceec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3eceecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ecef0:
    // 0x3ecef0: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3ecef0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3ecef4:
    // 0x3ecef4: 0x5483005b  bnel        $a0, $v1, . + 4 + (0x5B << 2)
label_3ecef8:
    if (ctx->pc == 0x3ECEF8u) {
        ctx->pc = 0x3ECEF8u;
            // 0x3ecef8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3ECEFCu;
        goto label_3ecefc;
    }
    ctx->pc = 0x3ECEF4u;
    {
        const bool branch_taken_0x3ecef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ecef4) {
            ctx->pc = 0x3ECEF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECEF4u;
            // 0x3ecef8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED064u;
            goto label_3ed064;
        }
    }
    ctx->pc = 0x3ECEFCu;
label_3ecefc:
    // 0x3ecefc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ecefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ecf00:
    // 0x3ecf00: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x3ecf00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_3ecf04:
    // 0x3ecf04: 0x8c518a08  lw          $s1, -0x75F8($v0)
    ctx->pc = 0x3ecf04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3ecf08:
    // 0x3ecf08: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3ecf08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_3ecf0c:
    // 0x3ecf0c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3ecf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_3ecf10:
    // 0x3ecf10: 0x2508eb70  addiu       $t0, $t0, -0x1490
    ctx->pc = 0x3ecf10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962032));
label_3ecf14:
    // 0x3ecf14: 0x24e7ec60  addiu       $a3, $a3, -0x13A0
    ctx->pc = 0x3ecf14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962272));
label_3ecf18:
    // 0x3ecf18: 0x24c6e7b0  addiu       $a2, $a2, -0x1850
    ctx->pc = 0x3ecf18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961072));
label_3ecf1c:
    // 0x3ecf1c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ecf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ecf20:
    // 0x3ecf20: 0x8230007a  lb          $s0, 0x7A($s1)
    ctx->pc = 0x3ecf20u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 122)));
label_3ecf24:
    // 0x3ecf24: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x3ecf24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3ecf28:
    // 0x3ecf28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ecf28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ecf2c:
    // 0x3ecf2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ecf2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ecf30:
    // 0x3ecf30: 0x90890029  lbu         $t1, 0x29($a0)
    ctx->pc = 0x3ecf30u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
label_3ecf34:
    // 0x3ecf34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ecf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ecf38:
    // 0x3ecf38: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x3ecf38u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_3ecf3c:
    // 0x3ecf3c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x3ecf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3ecf40:
    // 0x3ecf40: 0x695021  addu        $t2, $v1, $t1
    ctx->pc = 0x3ecf40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3ecf44:
    // 0x3ecf44: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x3ecf44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_3ecf48:
    // 0x3ecf48: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x3ecf48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_3ecf4c:
    // 0x3ecf4c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x3ecf4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_3ecf50:
    // 0x3ecf50: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x3ecf50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_3ecf54:
    // 0x3ecf54: 0xae280050  sw          $t0, 0x50($s1)
    ctx->pc = 0x3ecf54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 8));
label_3ecf58:
    // 0x3ecf58: 0xae270064  sw          $a3, 0x64($s1)
    ctx->pc = 0x3ecf58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 7));
label_3ecf5c:
    // 0x3ecf5c: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x3ecf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3ecf60:
    // 0x3ecf60: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x3ecf60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_3ecf64:
    // 0x3ecf64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ecf64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ecf68:
    // 0x3ecf68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ecf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ecf6c:
    // 0x3ecf6c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3ecf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3ecf70:
    // 0x3ecf70: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3ecf70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ecf74:
    // 0x3ecf74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ecf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3ecf78:
    // 0x3ecf78: 0xc0575cc  jal         func_15D730
label_3ecf7c:
    if (ctx->pc == 0x3ECF7Cu) {
        ctx->pc = 0x3ECF7Cu;
            // 0x3ecf7c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x3ECF80u;
        goto label_3ecf80;
    }
    ctx->pc = 0x3ECF78u;
    SET_GPR_U32(ctx, 31, 0x3ECF80u);
    ctx->pc = 0x3ECF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECF78u;
            // 0x3ecf7c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ECF80u; }
        if (ctx->pc != 0x3ECF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ECF80u; }
        if (ctx->pc != 0x3ECF80u) { return; }
    }
    ctx->pc = 0x3ECF80u;
label_3ecf80:
    // 0x3ecf80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ecf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ecf84:
    // 0x3ecf84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ecf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ecf88:
    // 0x3ecf88: 0xa222007a  sb          $v0, 0x7A($s1)
    ctx->pc = 0x3ecf88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 2));
label_3ecf8c:
    // 0x3ecf8c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3ecf8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ecf90:
    // 0x3ecf90: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ecf90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ecf94:
    // 0x3ecf94: 0x320f809  jalr        $t9
label_3ecf98:
    if (ctx->pc == 0x3ECF98u) {
        ctx->pc = 0x3ECF98u;
            // 0x3ecf98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ECF9Cu;
        goto label_3ecf9c;
    }
    ctx->pc = 0x3ECF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ECF9Cu);
        ctx->pc = 0x3ECF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECF94u;
            // 0x3ecf98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ECF9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ECF9Cu; }
            if (ctx->pc != 0x3ECF9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3ECF9Cu;
label_3ecf9c:
    // 0x3ecf9c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3ecf9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ecfa0:
    // 0x3ecfa0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ecfa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ecfa4:
    // 0x3ecfa4: 0x320f809  jalr        $t9
label_3ecfa8:
    if (ctx->pc == 0x3ECFA8u) {
        ctx->pc = 0x3ECFA8u;
            // 0x3ecfa8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ECFACu;
        goto label_3ecfac;
    }
    ctx->pc = 0x3ECFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ECFACu);
        ctx->pc = 0x3ECFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECFA4u;
            // 0x3ecfa8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ECFACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ECFACu; }
            if (ctx->pc != 0x3ECFACu) { return; }
        }
        }
    }
    ctx->pc = 0x3ECFACu;
label_3ecfac:
    // 0x3ecfac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ecfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ecfb0:
    // 0x3ecfb0: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3ecfb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_3ecfb4:
    // 0x3ecfb4: 0x8c4589f0  lw          $a1, -0x7610($v0)
    ctx->pc = 0x3ecfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3ecfb8:
    // 0x3ecfb8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3ecfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3ecfbc:
    // 0x3ecfbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ecfbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ecfc0:
    // 0x3ecfc0: 0x24e7eb70  addiu       $a3, $a3, -0x1490
    ctx->pc = 0x3ecfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962032));
label_3ecfc4:
    // 0x3ecfc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ecfc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ecfc8:
    // 0x3ecfc8: 0x2463e7b0  addiu       $v1, $v1, -0x1850
    ctx->pc = 0x3ecfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961072));
label_3ecfcc:
    // 0x3ecfcc: 0x90a60029  lbu         $a2, 0x29($a1)
    ctx->pc = 0x3ecfccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
label_3ecfd0:
    // 0x3ecfd0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ecfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ecfd4:
    // 0x3ecfd4: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x3ecfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3ecfd8:
    // 0x3ecfd8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3ecfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3ecfdc:
    // 0x3ecfdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ecfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ecfe0:
    // 0x3ecfe0: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x3ecfe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_3ecfe4:
    // 0x3ecfe4: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x3ecfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3ecfe8:
    // 0x3ecfe8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3ecfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_3ecfec:
    // 0x3ecfec: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3ecfecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3ecff0:
    // 0x3ecff0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x3ecff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_3ecff4:
    // 0x3ecff4: 0xae260050  sw          $a2, 0x50($s1)
    ctx->pc = 0x3ecff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 6));
label_3ecff8:
    // 0x3ecff8: 0xae270064  sw          $a3, 0x64($s1)
    ctx->pc = 0x3ecff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 7));
label_3ecffc:
    // 0x3ecffc: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x3ecffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3ed000:
    // 0x3ed000: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x3ed000u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_3ed004:
    // 0x3ed004: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ed004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ed008:
    // 0x3ed008: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x3ed008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_3ed00c:
    // 0x3ed00c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x3ed00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3ed010:
    // 0x3ed010: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3ed010u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3ed014:
    // 0x3ed014: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ed014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3ed018:
    // 0x3ed018: 0xc0575cc  jal         func_15D730
label_3ed01c:
    if (ctx->pc == 0x3ED01Cu) {
        ctx->pc = 0x3ED01Cu;
            // 0x3ed01c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3ED020u;
        goto label_3ed020;
    }
    ctx->pc = 0x3ED018u;
    SET_GPR_U32(ctx, 31, 0x3ED020u);
    ctx->pc = 0x3ED01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED018u;
            // 0x3ed01c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED020u; }
        if (ctx->pc != 0x3ED020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED020u; }
        if (ctx->pc != 0x3ED020u) { return; }
    }
    ctx->pc = 0x3ED020u;
label_3ed020:
    // 0x3ed020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ed020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ed024:
    // 0x3ed024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ed024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ed028:
    // 0x3ed028: 0xa222007a  sb          $v0, 0x7A($s1)
    ctx->pc = 0x3ed028u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 2));
label_3ed02c:
    // 0x3ed02c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3ed02cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ed030:
    // 0x3ed030: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ed030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ed034:
    // 0x3ed034: 0x320f809  jalr        $t9
label_3ed038:
    if (ctx->pc == 0x3ED038u) {
        ctx->pc = 0x3ED038u;
            // 0x3ed038: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED03Cu;
        goto label_3ed03c;
    }
    ctx->pc = 0x3ED034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ED03Cu);
        ctx->pc = 0x3ED038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED034u;
            // 0x3ed038: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ED03Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ED03Cu; }
            if (ctx->pc != 0x3ED03Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3ED03Cu;
label_3ed03c:
    // 0x3ed03c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3ed03cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ed040:
    // 0x3ed040: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ed040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ed044:
    // 0x3ed044: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3ed044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3ed048:
    // 0x3ed048: 0x320f809  jalr        $t9
label_3ed04c:
    if (ctx->pc == 0x3ED04Cu) {
        ctx->pc = 0x3ED04Cu;
            // 0x3ed04c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED050u;
        goto label_3ed050;
    }
    ctx->pc = 0x3ED048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ED050u);
        ctx->pc = 0x3ED04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED048u;
            // 0x3ed04c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ED050u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ED050u; }
            if (ctx->pc != 0x3ED050u) { return; }
        }
        }
    }
    ctx->pc = 0x3ED050u;
label_3ed050:
    // 0x3ed050: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ed050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ed054:
    // 0x3ed054: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x3ed054u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3ed058:
    // 0x3ed058: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_3ed05c:
    if (ctx->pc == 0x3ED05Cu) {
        ctx->pc = 0x3ED05Cu;
            // 0x3ed05c: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x3ED060u;
        goto label_3ed060;
    }
    ctx->pc = 0x3ED058u;
    {
        const bool branch_taken_0x3ed058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed058) {
            ctx->pc = 0x3ED05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED058u;
            // 0x3ed05c: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ed040;
        }
    }
    ctx->pc = 0x3ED060u;
label_3ed060:
    // 0x3ed060: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ed060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3ed064:
    // 0x3ed064: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ed064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ed068:
    // 0x3ed068: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ed068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ed06c:
    // 0x3ed06c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ed06cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed070:
    // 0x3ed070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ed070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ed074:
    // 0x3ed074: 0x3e00008  jr          $ra
label_3ed078:
    if (ctx->pc == 0x3ED078u) {
        ctx->pc = 0x3ED078u;
            // 0x3ed078: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3ED07Cu;
        goto label_3ed07c;
    }
    ctx->pc = 0x3ED074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED074u;
            // 0x3ed078: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ED07Cu;
label_3ed07c:
    // 0x3ed07c: 0x0  nop
    ctx->pc = 0x3ed07cu;
    // NOP
label_3ed080:
    // 0x3ed080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ed080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ed084:
    // 0x3ed084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ed084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ed088:
    // 0x3ed088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ed088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3ed08c:
    // 0x3ed08c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ed08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ed090:
    // 0x3ed090: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3ed090u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3ed094:
    // 0x3ed094: 0x10a30085  beq         $a1, $v1, . + 4 + (0x85 << 2)
label_3ed098:
    if (ctx->pc == 0x3ED098u) {
        ctx->pc = 0x3ED098u;
            // 0x3ed098: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED09Cu;
        goto label_3ed09c;
    }
    ctx->pc = 0x3ED094u;
    {
        const bool branch_taken_0x3ed094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3ED098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED094u;
            // 0x3ed098: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed094) {
            ctx->pc = 0x3ED2ACu;
            goto label_3ed2ac;
        }
    }
    ctx->pc = 0x3ED09Cu;
label_3ed09c:
    // 0x3ed09c: 0x50a00080  beql        $a1, $zero, . + 4 + (0x80 << 2)
label_3ed0a0:
    if (ctx->pc == 0x3ED0A0u) {
        ctx->pc = 0x3ED0A0u;
            // 0x3ed0a0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3ED0A4u;
        goto label_3ed0a4;
    }
    ctx->pc = 0x3ED09Cu;
    {
        const bool branch_taken_0x3ed09c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed09c) {
            ctx->pc = 0x3ED0A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED09Cu;
            // 0x3ed0a0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED2A0u;
            goto label_3ed2a0;
        }
    }
    ctx->pc = 0x3ED0A4u;
label_3ed0a4:
    // 0x3ed0a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ed0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ed0a8:
    // 0x3ed0a8: 0x50a30020  beql        $a1, $v1, . + 4 + (0x20 << 2)
label_3ed0ac:
    if (ctx->pc == 0x3ED0ACu) {
        ctx->pc = 0x3ED0ACu;
            // 0x3ed0ac: 0x8e0300e8  lw          $v1, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->pc = 0x3ED0B0u;
        goto label_3ed0b0;
    }
    ctx->pc = 0x3ED0A8u;
    {
        const bool branch_taken_0x3ed0a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ed0a8) {
            ctx->pc = 0x3ED0ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED0A8u;
            // 0x3ed0ac: 0x8e0300e8  lw          $v1, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED12Cu;
            goto label_3ed12c;
        }
    }
    ctx->pc = 0x3ED0B0u;
label_3ed0b0:
    // 0x3ed0b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ed0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ed0b4:
    // 0x3ed0b4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3ed0b8:
    if (ctx->pc == 0x3ED0B8u) {
        ctx->pc = 0x3ED0B8u;
            // 0x3ed0b8: 0x8e0300e8  lw          $v1, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->pc = 0x3ED0BCu;
        goto label_3ed0bc;
    }
    ctx->pc = 0x3ED0B4u;
    {
        const bool branch_taken_0x3ed0b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ed0b4) {
            ctx->pc = 0x3ED0B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED0B4u;
            // 0x3ed0b8: 0x8e0300e8  lw          $v1, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED0C4u;
            goto label_3ed0c4;
        }
    }
    ctx->pc = 0x3ED0BCu;
label_3ed0bc:
    // 0x3ed0bc: 0x1000007c  b           . + 4 + (0x7C << 2)
label_3ed0c0:
    if (ctx->pc == 0x3ED0C0u) {
        ctx->pc = 0x3ED0C0u;
            // 0x3ed0c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3ED0C4u;
        goto label_3ed0c4;
    }
    ctx->pc = 0x3ED0BCu;
    {
        const bool branch_taken_0x3ed0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED0BCu;
            // 0x3ed0c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed0bc) {
            ctx->pc = 0x3ED2B0u;
            goto label_3ed2b0;
        }
    }
    ctx->pc = 0x3ED0C4u;
label_3ed0c4:
    // 0x3ed0c4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_3ed0c8:
    if (ctx->pc == 0x3ED0C8u) {
        ctx->pc = 0x3ED0CCu;
        goto label_3ed0cc;
    }
    ctx->pc = 0x3ED0C4u;
    {
        const bool branch_taken_0x3ed0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed0c4) {
            ctx->pc = 0x3ED0F0u;
            goto label_3ed0f0;
        }
    }
    ctx->pc = 0x3ED0CCu;
label_3ed0cc:
    // 0x3ed0cc: 0x8c640790  lw          $a0, 0x790($v1)
    ctx->pc = 0x3ed0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1936)));
label_3ed0d0:
    // 0x3ed0d0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3ed0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3ed0d4:
    // 0x3ed0d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ed0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3ed0d8:
    // 0x3ed0d8: 0x14600074  bnez        $v1, . + 4 + (0x74 << 2)
label_3ed0dc:
    if (ctx->pc == 0x3ED0DCu) {
        ctx->pc = 0x3ED0E0u;
        goto label_3ed0e0;
    }
    ctx->pc = 0x3ED0D8u;
    {
        const bool branch_taken_0x3ed0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed0d8) {
            ctx->pc = 0x3ED2ACu;
            goto label_3ed2ac;
        }
    }
    ctx->pc = 0x3ED0E0u;
label_3ed0e0:
    // 0x3ed0e0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3ed0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_3ed0e4:
    // 0x3ed0e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ed0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3ed0e8:
    // 0x3ed0e8: 0x14600070  bnez        $v1, . + 4 + (0x70 << 2)
label_3ed0ec:
    if (ctx->pc == 0x3ED0ECu) {
        ctx->pc = 0x3ED0F0u;
        goto label_3ed0f0;
    }
    ctx->pc = 0x3ED0E8u;
    {
        const bool branch_taken_0x3ed0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed0e8) {
            ctx->pc = 0x3ED2ACu;
            goto label_3ed2ac;
        }
    }
    ctx->pc = 0x3ED0F0u;
label_3ed0f0:
    // 0x3ed0f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3ed0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3ed0f4:
    // 0x3ed0f4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3ed0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3ed0f8:
    // 0x3ed0f8: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x3ed0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ed0fc:
    // 0x3ed0fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ed0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ed100:
    // 0x3ed100: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3ed100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ed104:
    // 0x3ed104: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3ed104u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3ed108:
    // 0x3ed108: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ed108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ed10c:
    // 0x3ed10c: 0x45000067  bc1f        . + 4 + (0x67 << 2)
label_3ed110:
    if (ctx->pc == 0x3ED110u) {
        ctx->pc = 0x3ED110u;
            // 0x3ed110: 0xe60100e0  swc1        $f1, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->pc = 0x3ED114u;
        goto label_3ed114;
    }
    ctx->pc = 0x3ED10Cu;
    {
        const bool branch_taken_0x3ed10c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ED110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED10Cu;
            // 0x3ed110: 0xe60100e0  swc1        $f1, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed10c) {
            ctx->pc = 0x3ED2ACu;
            goto label_3ed2ac;
        }
    }
    ctx->pc = 0x3ED114u;
label_3ed114:
    // 0x3ed114: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3ed114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ed118:
    // 0x3ed118: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3ed118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3ed11c:
    // 0x3ed11c: 0x320f809  jalr        $t9
label_3ed120:
    if (ctx->pc == 0x3ED120u) {
        ctx->pc = 0x3ED120u;
            // 0x3ed120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED124u;
        goto label_3ed124;
    }
    ctx->pc = 0x3ED11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ED124u);
        ctx->pc = 0x3ED120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED11Cu;
            // 0x3ed120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ED124u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ED124u; }
            if (ctx->pc != 0x3ED124u) { return; }
        }
        }
    }
    ctx->pc = 0x3ED124u;
label_3ed124:
    // 0x3ed124: 0x10000061  b           . + 4 + (0x61 << 2)
label_3ed128:
    if (ctx->pc == 0x3ED128u) {
        ctx->pc = 0x3ED12Cu;
        goto label_3ed12c;
    }
    ctx->pc = 0x3ED124u;
    {
        const bool branch_taken_0x3ed124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed124) {
            ctx->pc = 0x3ED2ACu;
            goto label_3ed2ac;
        }
    }
    ctx->pc = 0x3ED12Cu;
label_3ed12c:
    // 0x3ed12c: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_3ed130:
    if (ctx->pc == 0x3ED130u) {
        ctx->pc = 0x3ED130u;
            // 0x3ed130: 0x920300e4  lbu         $v1, 0xE4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 228)));
        ctx->pc = 0x3ED134u;
        goto label_3ed134;
    }
    ctx->pc = 0x3ED12Cu;
    {
        const bool branch_taken_0x3ed12c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed12c) {
            ctx->pc = 0x3ED130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED12Cu;
            // 0x3ed130: 0x920300e4  lbu         $v1, 0xE4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED15Cu;
            goto label_3ed15c;
        }
    }
    ctx->pc = 0x3ED134u;
label_3ed134:
    // 0x3ed134: 0x8c640790  lw          $a0, 0x790($v1)
    ctx->pc = 0x3ed134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1936)));
label_3ed138:
    // 0x3ed138: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3ed138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3ed13c:
    // 0x3ed13c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ed13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3ed140:
    // 0x3ed140: 0x1460005a  bnez        $v1, . + 4 + (0x5A << 2)
label_3ed144:
    if (ctx->pc == 0x3ED144u) {
        ctx->pc = 0x3ED148u;
        goto label_3ed148;
    }
    ctx->pc = 0x3ED140u;
    {
        const bool branch_taken_0x3ed140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed140) {
            ctx->pc = 0x3ED2ACu;
            goto label_3ed2ac;
        }
    }
    ctx->pc = 0x3ED148u;
label_3ed148:
    // 0x3ed148: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3ed148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_3ed14c:
    // 0x3ed14c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ed14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3ed150:
    // 0x3ed150: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
label_3ed154:
    if (ctx->pc == 0x3ED154u) {
        ctx->pc = 0x3ED158u;
        goto label_3ed158;
    }
    ctx->pc = 0x3ED150u;
    {
        const bool branch_taken_0x3ed150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed150) {
            ctx->pc = 0x3ED2ACu;
            goto label_3ed2ac;
        }
    }
    ctx->pc = 0x3ED158u;
label_3ed158:
    // 0x3ed158: 0x920300e4  lbu         $v1, 0xE4($s0)
    ctx->pc = 0x3ed158u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 228)));
label_3ed15c:
    // 0x3ed15c: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_3ed160:
    if (ctx->pc == 0x3ED160u) {
        ctx->pc = 0x3ED160u;
            // 0x3ed160: 0x920400d0  lbu         $a0, 0xD0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->pc = 0x3ED164u;
        goto label_3ed164;
    }
    ctx->pc = 0x3ED15Cu;
    {
        const bool branch_taken_0x3ed15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed15c) {
            ctx->pc = 0x3ED160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED15Cu;
            // 0x3ed160: 0x920400d0  lbu         $a0, 0xD0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED1A0u;
            goto label_3ed1a0;
        }
    }
    ctx->pc = 0x3ED164u;
label_3ed164:
    // 0x3ed164: 0x860300e6  lh          $v1, 0xE6($s0)
    ctx->pc = 0x3ed164u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 230)));
label_3ed168:
    // 0x3ed168: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ed168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3ed16c:
    // 0x3ed16c: 0xa60300e6  sh          $v1, 0xE6($s0)
    ctx->pc = 0x3ed16cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 230), (uint16_t)GPR_U32(ctx, 3));
label_3ed170:
    // 0x3ed170: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3ed170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_3ed174:
    // 0x3ed174: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3ed174u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3ed178:
    // 0x3ed178: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_3ed17c:
    if (ctx->pc == 0x3ED17Cu) {
        ctx->pc = 0x3ED180u;
        goto label_3ed180;
    }
    ctx->pc = 0x3ED178u;
    {
        const bool branch_taken_0x3ed178 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3ed178) {
            ctx->pc = 0x3ED19Cu;
            goto label_3ed19c;
        }
    }
    ctx->pc = 0x3ED180u;
label_3ed180:
    // 0x3ed180: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3ed180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ed184:
    // 0x3ed184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed188:
    // 0x3ed188: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ed188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ed18c:
    // 0x3ed18c: 0x320f809  jalr        $t9
label_3ed190:
    if (ctx->pc == 0x3ED190u) {
        ctx->pc = 0x3ED190u;
            // 0x3ed190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED194u;
        goto label_3ed194;
    }
    ctx->pc = 0x3ED18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ED194u);
        ctx->pc = 0x3ED190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED18Cu;
            // 0x3ed190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ED194u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ED194u; }
            if (ctx->pc != 0x3ED194u) { return; }
        }
        }
    }
    ctx->pc = 0x3ED194u;
label_3ed194:
    // 0x3ed194: 0x10000045  b           . + 4 + (0x45 << 2)
label_3ed198:
    if (ctx->pc == 0x3ED198u) {
        ctx->pc = 0x3ED19Cu;
        goto label_3ed19c;
    }
    ctx->pc = 0x3ED194u;
    {
        const bool branch_taken_0x3ed194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed194) {
            ctx->pc = 0x3ED2ACu;
            goto label_3ed2ac;
        }
    }
    ctx->pc = 0x3ED19Cu;
label_3ed19c:
    // 0x3ed19c: 0x920400d0  lbu         $a0, 0xD0($s0)
    ctx->pc = 0x3ed19cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 208)));
label_3ed1a0:
    // 0x3ed1a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ed1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ed1a4:
    // 0x3ed1a4: 0x50830019  beql        $a0, $v1, . + 4 + (0x19 << 2)
label_3ed1a8:
    if (ctx->pc == 0x3ED1A8u) {
        ctx->pc = 0x3ED1A8u;
            // 0x3ed1a8: 0xc60000dc  lwc1        $f0, 0xDC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3ED1ACu;
        goto label_3ed1ac;
    }
    ctx->pc = 0x3ED1A4u;
    {
        const bool branch_taken_0x3ed1a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ed1a4) {
            ctx->pc = 0x3ED1A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED1A4u;
            // 0x3ed1a8: 0xc60000dc  lwc1        $f0, 0xDC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED20Cu;
            goto label_3ed20c;
        }
    }
    ctx->pc = 0x3ED1ACu;
label_3ed1ac:
    // 0x3ed1ac: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_3ed1b0:
    if (ctx->pc == 0x3ED1B0u) {
        ctx->pc = 0x3ED1B0u;
            // 0x3ed1b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED1B4u;
        goto label_3ed1b4;
    }
    ctx->pc = 0x3ED1ACu;
    {
        const bool branch_taken_0x3ed1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed1ac) {
            ctx->pc = 0x3ED1B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED1ACu;
            // 0x3ed1b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED1BCu;
            goto label_3ed1bc;
        }
    }
    ctx->pc = 0x3ED1B4u;
label_3ed1b4:
    // 0x3ed1b4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_3ed1b8:
    if (ctx->pc == 0x3ED1B8u) {
        ctx->pc = 0x3ED1BCu;
        goto label_3ed1bc;
    }
    ctx->pc = 0x3ED1B4u;
    {
        const bool branch_taken_0x3ed1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed1b4) {
            ctx->pc = 0x3ED2ACu;
            goto label_3ed2ac;
        }
    }
    ctx->pc = 0x3ED1BCu;
label_3ed1bc:
    // 0x3ed1bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ed1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed1c0:
    // 0x3ed1c0: 0x920300d1  lbu         $v1, 0xD1($s0)
    ctx->pc = 0x3ed1c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 209)));
label_3ed1c4:
    // 0x3ed1c4: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3ed1c8:
    if (ctx->pc == 0x3ED1C8u) {
        ctx->pc = 0x3ED1C8u;
            // 0x3ed1c8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3ED1CCu;
        goto label_3ed1cc;
    }
    ctx->pc = 0x3ED1C4u;
    {
        const bool branch_taken_0x3ed1c4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3ed1c4) {
            ctx->pc = 0x3ED1C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED1C4u;
            // 0x3ed1c8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED1D8u;
            goto label_3ed1d8;
        }
    }
    ctx->pc = 0x3ED1CCu;
label_3ed1cc:
    // 0x3ed1cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ed1ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ed1d0:
    // 0x3ed1d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ed1d4:
    if (ctx->pc == 0x3ED1D4u) {
        ctx->pc = 0x3ED1D4u;
            // 0x3ed1d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3ED1D8u;
        goto label_3ed1d8;
    }
    ctx->pc = 0x3ED1D0u;
    {
        const bool branch_taken_0x3ed1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED1D0u;
            // 0x3ed1d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed1d0) {
            ctx->pc = 0x3ED1F0u;
            goto label_3ed1f0;
        }
    }
    ctx->pc = 0x3ED1D8u;
label_3ed1d8:
    // 0x3ed1d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3ed1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3ed1dc:
    // 0x3ed1dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ed1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3ed1e0:
    // 0x3ed1e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ed1e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ed1e4:
    // 0x3ed1e4: 0x0  nop
    ctx->pc = 0x3ed1e4u;
    // NOP
label_3ed1e8:
    // 0x3ed1e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ed1e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ed1ec:
    // 0x3ed1ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3ed1ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3ed1f0:
    // 0x3ed1f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ed1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3ed1f4:
    // 0x3ed1f4: 0xe4a000a0  swc1        $f0, 0xA0($a1)
    ctx->pc = 0x3ed1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 160), bits); }
label_3ed1f8:
    // 0x3ed1f8: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x3ed1f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_3ed1fc:
    // 0x3ed1fc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_3ed200:
    if (ctx->pc == 0x3ED200u) {
        ctx->pc = 0x3ED200u;
            // 0x3ed200: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3ED204u;
        goto label_3ed204;
    }
    ctx->pc = 0x3ED1FCu;
    {
        const bool branch_taken_0x3ed1fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED1FCu;
            // 0x3ed200: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed1fc) {
            ctx->pc = 0x3ED1C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ed1c0;
        }
    }
    ctx->pc = 0x3ED204u;
label_3ed204:
    // 0x3ed204: 0x10000029  b           . + 4 + (0x29 << 2)
label_3ed208:
    if (ctx->pc == 0x3ED208u) {
        ctx->pc = 0x3ED20Cu;
        goto label_3ed20c;
    }
    ctx->pc = 0x3ED204u;
    {
        const bool branch_taken_0x3ed204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed204) {
            ctx->pc = 0x3ED2ACu;
            goto label_3ed2ac;
        }
    }
    ctx->pc = 0x3ED20Cu;
label_3ed20c:
    // 0x3ed20c: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x3ed20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ed210:
    // 0x3ed210: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3ed210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ed214:
    // 0x3ed214: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_3ed218:
    if (ctx->pc == 0x3ED218u) {
        ctx->pc = 0x3ED218u;
            // 0x3ed218: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3ED21Cu;
        goto label_3ed21c;
    }
    ctx->pc = 0x3ED214u;
    {
        const bool branch_taken_0x3ed214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ed214) {
            ctx->pc = 0x3ED218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED214u;
            // 0x3ed218: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED244u;
            goto label_3ed244;
        }
    }
    ctx->pc = 0x3ED21Cu;
label_3ed21c:
    // 0x3ed21c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3ed21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3ed220:
    // 0x3ed220: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3ed220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3ed224:
    // 0x3ed224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ed224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ed228:
    // 0x3ed228: 0x0  nop
    ctx->pc = 0x3ed228u;
    // NOP
label_3ed22c:
    // 0x3ed22c: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x3ed22cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3ed230:
    // 0x3ed230: 0xc60100d8  lwc1        $f1, 0xD8($s0)
    ctx->pc = 0x3ed230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ed234:
    // 0x3ed234: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3ed234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ed238:
    // 0x3ed238: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x3ed238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_3ed23c:
    // 0x3ed23c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ed240:
    if (ctx->pc == 0x3ED240u) {
        ctx->pc = 0x3ED240u;
            // 0x3ed240: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x3ED244u;
        goto label_3ed244;
    }
    ctx->pc = 0x3ED23Cu;
    {
        const bool branch_taken_0x3ed23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED23Cu;
            // 0x3ed240: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed23c) {
            ctx->pc = 0x3ED254u;
            goto label_3ed254;
        }
    }
    ctx->pc = 0x3ED244u;
label_3ed244:
    // 0x3ed244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed248:
    // 0x3ed248: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ed248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ed24c:
    // 0x3ed24c: 0x320f809  jalr        $t9
label_3ed250:
    if (ctx->pc == 0x3ED250u) {
        ctx->pc = 0x3ED250u;
            // 0x3ed250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED254u;
        goto label_3ed254;
    }
    ctx->pc = 0x3ED24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ED254u);
        ctx->pc = 0x3ED250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED24Cu;
            // 0x3ed250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ED254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ED254u; }
            if (ctx->pc != 0x3ED254u) { return; }
        }
        }
    }
    ctx->pc = 0x3ED254u;
label_3ed254:
    // 0x3ed254: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x3ed254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_3ed258:
    // 0x3ed258: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3ed258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ed25c:
    // 0x3ed25c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ed25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed260:
    // 0x3ed260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ed260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ed264:
    // 0x3ed264: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x3ed264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ed268:
    // 0x3ed268: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3ed268u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ed26c:
    // 0x3ed26c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_3ed270:
    if (ctx->pc == 0x3ED270u) {
        ctx->pc = 0x3ED274u;
        goto label_3ed274;
    }
    ctx->pc = 0x3ED26Cu;
    {
        const bool branch_taken_0x3ed26c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ed26c) {
            ctx->pc = 0x3ED280u;
            goto label_3ed280;
        }
    }
    ctx->pc = 0x3ED274u;
label_3ed274:
    // 0x3ed274: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ed278:
    if (ctx->pc == 0x3ED278u) {
        ctx->pc = 0x3ED278u;
            // 0x3ed278: 0xe4a000a0  swc1        $f0, 0xA0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 160), bits); }
        ctx->pc = 0x3ED27Cu;
        goto label_3ed27c;
    }
    ctx->pc = 0x3ED274u;
    {
        const bool branch_taken_0x3ed274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED274u;
            // 0x3ed278: 0xe4a000a0  swc1        $f0, 0xA0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed274) {
            ctx->pc = 0x3ED288u;
            goto label_3ed288;
        }
    }
    ctx->pc = 0x3ED27Cu;
label_3ed27c:
    // 0x3ed27c: 0x0  nop
    ctx->pc = 0x3ed27cu;
    // NOP
label_3ed280:
    // 0x3ed280: 0xe4a100a0  swc1        $f1, 0xA0($a1)
    ctx->pc = 0x3ed280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 160), bits); }
label_3ed284:
    // 0x3ed284: 0x0  nop
    ctx->pc = 0x3ed284u;
    // NOP
label_3ed288:
    // 0x3ed288: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ed288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3ed28c:
    // 0x3ed28c: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x3ed28cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_3ed290:
    // 0x3ed290: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_3ed294:
    if (ctx->pc == 0x3ED294u) {
        ctx->pc = 0x3ED294u;
            // 0x3ed294: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3ED298u;
        goto label_3ed298;
    }
    ctx->pc = 0x3ED290u;
    {
        const bool branch_taken_0x3ed290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED290u;
            // 0x3ed294: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed290) {
            ctx->pc = 0x3ED264u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ed264;
        }
    }
    ctx->pc = 0x3ED298u;
label_3ed298:
    // 0x3ed298: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ed29c:
    if (ctx->pc == 0x3ED29Cu) {
        ctx->pc = 0x3ED2A0u;
        goto label_3ed2a0;
    }
    ctx->pc = 0x3ED298u;
    {
        const bool branch_taken_0x3ed298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed298) {
            ctx->pc = 0x3ED2ACu;
            goto label_3ed2ac;
        }
    }
    ctx->pc = 0x3ED2A0u;
label_3ed2a0:
    // 0x3ed2a0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3ed2a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3ed2a4:
    // 0x3ed2a4: 0x320f809  jalr        $t9
label_3ed2a8:
    if (ctx->pc == 0x3ED2A8u) {
        ctx->pc = 0x3ED2ACu;
        goto label_3ed2ac;
    }
    ctx->pc = 0x3ED2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ED2ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ED2ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ED2ACu; }
            if (ctx->pc != 0x3ED2ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3ED2ACu;
label_3ed2ac:
    // 0x3ed2ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ed2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed2b0:
    // 0x3ed2b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ed2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ed2b4:
    // 0x3ed2b4: 0x3e00008  jr          $ra
label_3ed2b8:
    if (ctx->pc == 0x3ED2B8u) {
        ctx->pc = 0x3ED2B8u;
            // 0x3ed2b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3ED2BCu;
        goto label_3ed2bc;
    }
    ctx->pc = 0x3ED2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED2B4u;
            // 0x3ed2b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ED2BCu;
label_3ed2bc:
    // 0x3ed2bc: 0x0  nop
    ctx->pc = 0x3ed2bcu;
    // NOP
label_3ed2c0:
    // 0x3ed2c0: 0x84850014  lh          $a1, 0x14($a0)
    ctx->pc = 0x3ed2c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_3ed2c4:
    // 0x3ed2c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ed2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ed2c8:
    // 0x3ed2c8: 0x80d2f48  j           func_34BD20
label_3ed2cc:
    if (ctx->pc == 0x3ED2CCu) {
        ctx->pc = 0x3ED2CCu;
            // 0x3ed2cc: 0x8c440ea8  lw          $a0, 0xEA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3752)));
        ctx->pc = 0x3ED2D0u;
        goto label_3ed2d0;
    }
    ctx->pc = 0x3ED2C8u;
    ctx->pc = 0x3ED2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED2C8u;
            // 0x3ed2cc: 0x8c440ea8  lw          $a0, 0xEA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3752)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BD20u;
    {
        auto targetFn = runtime->lookupFunction(0x34BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3ED2D0u;
label_3ed2d0:
    // 0x3ed2d0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x3ed2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_3ed2d4:
    // 0x3ed2d4: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x3ed2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_3ed2d8:
    // 0x3ed2d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ed2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ed2dc:
    // 0x3ed2dc: 0x90850014  lbu         $a1, 0x14($a0)
    ctx->pc = 0x3ed2dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_3ed2e0:
    // 0x3ed2e0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3ed2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_3ed2e4:
    // 0x3ed2e4: 0x90860024  lbu         $a2, 0x24($a0)
    ctx->pc = 0x3ed2e4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
label_3ed2e8:
    // 0x3ed2e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ed2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ed2ec:
    // 0x3ed2ec: 0x90870034  lbu         $a3, 0x34($a0)
    ctx->pc = 0x3ed2ecu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
label_3ed2f0:
    // 0x3ed2f0: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x3ed2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ed2f4:
    // 0x3ed2f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ed2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ed2f8:
    // 0x3ed2f8: 0xc48f0054  lwc1        $f15, 0x54($a0)
    ctx->pc = 0x3ed2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_3ed2fc:
    // 0x3ed2fc: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x3ed2fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3ed300:
    // 0x3ed300: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x3ed300u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[13] = ctx->f[1] / ctx->f[0];
label_3ed304:
    // 0x3ed304: 0x0  nop
    ctx->pc = 0x3ed304u;
    // NOP
label_3ed308:
    // 0x3ed308: 0x0  nop
    ctx->pc = 0x3ed308u;
    // NOP
label_3ed30c:
    // 0x3ed30c: 0x80d2f4c  j           func_34BD30
label_3ed310:
    if (ctx->pc == 0x3ED310u) {
        ctx->pc = 0x3ED310u;
            // 0x3ed310: 0x8c440ea8  lw          $a0, 0xEA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3752)));
        ctx->pc = 0x3ED314u;
        goto label_3ed314;
    }
    ctx->pc = 0x3ED30Cu;
    ctx->pc = 0x3ED310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED30Cu;
            // 0x3ed310: 0x8c440ea8  lw          $a0, 0xEA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3752)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BD30u;
    {
        auto targetFn = runtime->lookupFunction(0x34BD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3ED314u;
label_3ed314:
    // 0x3ed314: 0x0  nop
    ctx->pc = 0x3ed314u;
    // NOP
label_3ed318:
    // 0x3ed318: 0x0  nop
    ctx->pc = 0x3ed318u;
    // NOP
label_3ed31c:
    // 0x3ed31c: 0x0  nop
    ctx->pc = 0x3ed31cu;
    // NOP
}
