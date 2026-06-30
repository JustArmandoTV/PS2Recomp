#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FEE30
// Address: 0x1fee30 - 0x1ff3e0
void sub_001FEE30_0x1fee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEE30_0x1fee30");
#endif

    switch (ctx->pc) {
        case 0x1fee30u: goto label_1fee30;
        case 0x1fee34u: goto label_1fee34;
        case 0x1fee38u: goto label_1fee38;
        case 0x1fee3cu: goto label_1fee3c;
        case 0x1fee40u: goto label_1fee40;
        case 0x1fee44u: goto label_1fee44;
        case 0x1fee48u: goto label_1fee48;
        case 0x1fee4cu: goto label_1fee4c;
        case 0x1fee50u: goto label_1fee50;
        case 0x1fee54u: goto label_1fee54;
        case 0x1fee58u: goto label_1fee58;
        case 0x1fee5cu: goto label_1fee5c;
        case 0x1fee60u: goto label_1fee60;
        case 0x1fee64u: goto label_1fee64;
        case 0x1fee68u: goto label_1fee68;
        case 0x1fee6cu: goto label_1fee6c;
        case 0x1fee70u: goto label_1fee70;
        case 0x1fee74u: goto label_1fee74;
        case 0x1fee78u: goto label_1fee78;
        case 0x1fee7cu: goto label_1fee7c;
        case 0x1fee80u: goto label_1fee80;
        case 0x1fee84u: goto label_1fee84;
        case 0x1fee88u: goto label_1fee88;
        case 0x1fee8cu: goto label_1fee8c;
        case 0x1fee90u: goto label_1fee90;
        case 0x1fee94u: goto label_1fee94;
        case 0x1fee98u: goto label_1fee98;
        case 0x1fee9cu: goto label_1fee9c;
        case 0x1feea0u: goto label_1feea0;
        case 0x1feea4u: goto label_1feea4;
        case 0x1feea8u: goto label_1feea8;
        case 0x1feeacu: goto label_1feeac;
        case 0x1feeb0u: goto label_1feeb0;
        case 0x1feeb4u: goto label_1feeb4;
        case 0x1feeb8u: goto label_1feeb8;
        case 0x1feebcu: goto label_1feebc;
        case 0x1feec0u: goto label_1feec0;
        case 0x1feec4u: goto label_1feec4;
        case 0x1feec8u: goto label_1feec8;
        case 0x1feeccu: goto label_1feecc;
        case 0x1feed0u: goto label_1feed0;
        case 0x1feed4u: goto label_1feed4;
        case 0x1feed8u: goto label_1feed8;
        case 0x1feedcu: goto label_1feedc;
        case 0x1feee0u: goto label_1feee0;
        case 0x1feee4u: goto label_1feee4;
        case 0x1feee8u: goto label_1feee8;
        case 0x1feeecu: goto label_1feeec;
        case 0x1feef0u: goto label_1feef0;
        case 0x1feef4u: goto label_1feef4;
        case 0x1feef8u: goto label_1feef8;
        case 0x1feefcu: goto label_1feefc;
        case 0x1fef00u: goto label_1fef00;
        case 0x1fef04u: goto label_1fef04;
        case 0x1fef08u: goto label_1fef08;
        case 0x1fef0cu: goto label_1fef0c;
        case 0x1fef10u: goto label_1fef10;
        case 0x1fef14u: goto label_1fef14;
        case 0x1fef18u: goto label_1fef18;
        case 0x1fef1cu: goto label_1fef1c;
        case 0x1fef20u: goto label_1fef20;
        case 0x1fef24u: goto label_1fef24;
        case 0x1fef28u: goto label_1fef28;
        case 0x1fef2cu: goto label_1fef2c;
        case 0x1fef30u: goto label_1fef30;
        case 0x1fef34u: goto label_1fef34;
        case 0x1fef38u: goto label_1fef38;
        case 0x1fef3cu: goto label_1fef3c;
        case 0x1fef40u: goto label_1fef40;
        case 0x1fef44u: goto label_1fef44;
        case 0x1fef48u: goto label_1fef48;
        case 0x1fef4cu: goto label_1fef4c;
        case 0x1fef50u: goto label_1fef50;
        case 0x1fef54u: goto label_1fef54;
        case 0x1fef58u: goto label_1fef58;
        case 0x1fef5cu: goto label_1fef5c;
        case 0x1fef60u: goto label_1fef60;
        case 0x1fef64u: goto label_1fef64;
        case 0x1fef68u: goto label_1fef68;
        case 0x1fef6cu: goto label_1fef6c;
        case 0x1fef70u: goto label_1fef70;
        case 0x1fef74u: goto label_1fef74;
        case 0x1fef78u: goto label_1fef78;
        case 0x1fef7cu: goto label_1fef7c;
        case 0x1fef80u: goto label_1fef80;
        case 0x1fef84u: goto label_1fef84;
        case 0x1fef88u: goto label_1fef88;
        case 0x1fef8cu: goto label_1fef8c;
        case 0x1fef90u: goto label_1fef90;
        case 0x1fef94u: goto label_1fef94;
        case 0x1fef98u: goto label_1fef98;
        case 0x1fef9cu: goto label_1fef9c;
        case 0x1fefa0u: goto label_1fefa0;
        case 0x1fefa4u: goto label_1fefa4;
        case 0x1fefa8u: goto label_1fefa8;
        case 0x1fefacu: goto label_1fefac;
        case 0x1fefb0u: goto label_1fefb0;
        case 0x1fefb4u: goto label_1fefb4;
        case 0x1fefb8u: goto label_1fefb8;
        case 0x1fefbcu: goto label_1fefbc;
        case 0x1fefc0u: goto label_1fefc0;
        case 0x1fefc4u: goto label_1fefc4;
        case 0x1fefc8u: goto label_1fefc8;
        case 0x1fefccu: goto label_1fefcc;
        case 0x1fefd0u: goto label_1fefd0;
        case 0x1fefd4u: goto label_1fefd4;
        case 0x1fefd8u: goto label_1fefd8;
        case 0x1fefdcu: goto label_1fefdc;
        case 0x1fefe0u: goto label_1fefe0;
        case 0x1fefe4u: goto label_1fefe4;
        case 0x1fefe8u: goto label_1fefe8;
        case 0x1fefecu: goto label_1fefec;
        case 0x1feff0u: goto label_1feff0;
        case 0x1feff4u: goto label_1feff4;
        case 0x1feff8u: goto label_1feff8;
        case 0x1feffcu: goto label_1feffc;
        case 0x1ff000u: goto label_1ff000;
        case 0x1ff004u: goto label_1ff004;
        case 0x1ff008u: goto label_1ff008;
        case 0x1ff00cu: goto label_1ff00c;
        case 0x1ff010u: goto label_1ff010;
        case 0x1ff014u: goto label_1ff014;
        case 0x1ff018u: goto label_1ff018;
        case 0x1ff01cu: goto label_1ff01c;
        case 0x1ff020u: goto label_1ff020;
        case 0x1ff024u: goto label_1ff024;
        case 0x1ff028u: goto label_1ff028;
        case 0x1ff02cu: goto label_1ff02c;
        case 0x1ff030u: goto label_1ff030;
        case 0x1ff034u: goto label_1ff034;
        case 0x1ff038u: goto label_1ff038;
        case 0x1ff03cu: goto label_1ff03c;
        case 0x1ff040u: goto label_1ff040;
        case 0x1ff044u: goto label_1ff044;
        case 0x1ff048u: goto label_1ff048;
        case 0x1ff04cu: goto label_1ff04c;
        case 0x1ff050u: goto label_1ff050;
        case 0x1ff054u: goto label_1ff054;
        case 0x1ff058u: goto label_1ff058;
        case 0x1ff05cu: goto label_1ff05c;
        case 0x1ff060u: goto label_1ff060;
        case 0x1ff064u: goto label_1ff064;
        case 0x1ff068u: goto label_1ff068;
        case 0x1ff06cu: goto label_1ff06c;
        case 0x1ff070u: goto label_1ff070;
        case 0x1ff074u: goto label_1ff074;
        case 0x1ff078u: goto label_1ff078;
        case 0x1ff07cu: goto label_1ff07c;
        case 0x1ff080u: goto label_1ff080;
        case 0x1ff084u: goto label_1ff084;
        case 0x1ff088u: goto label_1ff088;
        case 0x1ff08cu: goto label_1ff08c;
        case 0x1ff090u: goto label_1ff090;
        case 0x1ff094u: goto label_1ff094;
        case 0x1ff098u: goto label_1ff098;
        case 0x1ff09cu: goto label_1ff09c;
        case 0x1ff0a0u: goto label_1ff0a0;
        case 0x1ff0a4u: goto label_1ff0a4;
        case 0x1ff0a8u: goto label_1ff0a8;
        case 0x1ff0acu: goto label_1ff0ac;
        case 0x1ff0b0u: goto label_1ff0b0;
        case 0x1ff0b4u: goto label_1ff0b4;
        case 0x1ff0b8u: goto label_1ff0b8;
        case 0x1ff0bcu: goto label_1ff0bc;
        case 0x1ff0c0u: goto label_1ff0c0;
        case 0x1ff0c4u: goto label_1ff0c4;
        case 0x1ff0c8u: goto label_1ff0c8;
        case 0x1ff0ccu: goto label_1ff0cc;
        case 0x1ff0d0u: goto label_1ff0d0;
        case 0x1ff0d4u: goto label_1ff0d4;
        case 0x1ff0d8u: goto label_1ff0d8;
        case 0x1ff0dcu: goto label_1ff0dc;
        case 0x1ff0e0u: goto label_1ff0e0;
        case 0x1ff0e4u: goto label_1ff0e4;
        case 0x1ff0e8u: goto label_1ff0e8;
        case 0x1ff0ecu: goto label_1ff0ec;
        case 0x1ff0f0u: goto label_1ff0f0;
        case 0x1ff0f4u: goto label_1ff0f4;
        case 0x1ff0f8u: goto label_1ff0f8;
        case 0x1ff0fcu: goto label_1ff0fc;
        case 0x1ff100u: goto label_1ff100;
        case 0x1ff104u: goto label_1ff104;
        case 0x1ff108u: goto label_1ff108;
        case 0x1ff10cu: goto label_1ff10c;
        case 0x1ff110u: goto label_1ff110;
        case 0x1ff114u: goto label_1ff114;
        case 0x1ff118u: goto label_1ff118;
        case 0x1ff11cu: goto label_1ff11c;
        case 0x1ff120u: goto label_1ff120;
        case 0x1ff124u: goto label_1ff124;
        case 0x1ff128u: goto label_1ff128;
        case 0x1ff12cu: goto label_1ff12c;
        case 0x1ff130u: goto label_1ff130;
        case 0x1ff134u: goto label_1ff134;
        case 0x1ff138u: goto label_1ff138;
        case 0x1ff13cu: goto label_1ff13c;
        case 0x1ff140u: goto label_1ff140;
        case 0x1ff144u: goto label_1ff144;
        case 0x1ff148u: goto label_1ff148;
        case 0x1ff14cu: goto label_1ff14c;
        case 0x1ff150u: goto label_1ff150;
        case 0x1ff154u: goto label_1ff154;
        case 0x1ff158u: goto label_1ff158;
        case 0x1ff15cu: goto label_1ff15c;
        case 0x1ff160u: goto label_1ff160;
        case 0x1ff164u: goto label_1ff164;
        case 0x1ff168u: goto label_1ff168;
        case 0x1ff16cu: goto label_1ff16c;
        case 0x1ff170u: goto label_1ff170;
        case 0x1ff174u: goto label_1ff174;
        case 0x1ff178u: goto label_1ff178;
        case 0x1ff17cu: goto label_1ff17c;
        case 0x1ff180u: goto label_1ff180;
        case 0x1ff184u: goto label_1ff184;
        case 0x1ff188u: goto label_1ff188;
        case 0x1ff18cu: goto label_1ff18c;
        case 0x1ff190u: goto label_1ff190;
        case 0x1ff194u: goto label_1ff194;
        case 0x1ff198u: goto label_1ff198;
        case 0x1ff19cu: goto label_1ff19c;
        case 0x1ff1a0u: goto label_1ff1a0;
        case 0x1ff1a4u: goto label_1ff1a4;
        case 0x1ff1a8u: goto label_1ff1a8;
        case 0x1ff1acu: goto label_1ff1ac;
        case 0x1ff1b0u: goto label_1ff1b0;
        case 0x1ff1b4u: goto label_1ff1b4;
        case 0x1ff1b8u: goto label_1ff1b8;
        case 0x1ff1bcu: goto label_1ff1bc;
        case 0x1ff1c0u: goto label_1ff1c0;
        case 0x1ff1c4u: goto label_1ff1c4;
        case 0x1ff1c8u: goto label_1ff1c8;
        case 0x1ff1ccu: goto label_1ff1cc;
        case 0x1ff1d0u: goto label_1ff1d0;
        case 0x1ff1d4u: goto label_1ff1d4;
        case 0x1ff1d8u: goto label_1ff1d8;
        case 0x1ff1dcu: goto label_1ff1dc;
        case 0x1ff1e0u: goto label_1ff1e0;
        case 0x1ff1e4u: goto label_1ff1e4;
        case 0x1ff1e8u: goto label_1ff1e8;
        case 0x1ff1ecu: goto label_1ff1ec;
        case 0x1ff1f0u: goto label_1ff1f0;
        case 0x1ff1f4u: goto label_1ff1f4;
        case 0x1ff1f8u: goto label_1ff1f8;
        case 0x1ff1fcu: goto label_1ff1fc;
        case 0x1ff200u: goto label_1ff200;
        case 0x1ff204u: goto label_1ff204;
        case 0x1ff208u: goto label_1ff208;
        case 0x1ff20cu: goto label_1ff20c;
        case 0x1ff210u: goto label_1ff210;
        case 0x1ff214u: goto label_1ff214;
        case 0x1ff218u: goto label_1ff218;
        case 0x1ff21cu: goto label_1ff21c;
        case 0x1ff220u: goto label_1ff220;
        case 0x1ff224u: goto label_1ff224;
        case 0x1ff228u: goto label_1ff228;
        case 0x1ff22cu: goto label_1ff22c;
        case 0x1ff230u: goto label_1ff230;
        case 0x1ff234u: goto label_1ff234;
        case 0x1ff238u: goto label_1ff238;
        case 0x1ff23cu: goto label_1ff23c;
        case 0x1ff240u: goto label_1ff240;
        case 0x1ff244u: goto label_1ff244;
        case 0x1ff248u: goto label_1ff248;
        case 0x1ff24cu: goto label_1ff24c;
        case 0x1ff250u: goto label_1ff250;
        case 0x1ff254u: goto label_1ff254;
        case 0x1ff258u: goto label_1ff258;
        case 0x1ff25cu: goto label_1ff25c;
        case 0x1ff260u: goto label_1ff260;
        case 0x1ff264u: goto label_1ff264;
        case 0x1ff268u: goto label_1ff268;
        case 0x1ff26cu: goto label_1ff26c;
        case 0x1ff270u: goto label_1ff270;
        case 0x1ff274u: goto label_1ff274;
        case 0x1ff278u: goto label_1ff278;
        case 0x1ff27cu: goto label_1ff27c;
        case 0x1ff280u: goto label_1ff280;
        case 0x1ff284u: goto label_1ff284;
        case 0x1ff288u: goto label_1ff288;
        case 0x1ff28cu: goto label_1ff28c;
        case 0x1ff290u: goto label_1ff290;
        case 0x1ff294u: goto label_1ff294;
        case 0x1ff298u: goto label_1ff298;
        case 0x1ff29cu: goto label_1ff29c;
        case 0x1ff2a0u: goto label_1ff2a0;
        case 0x1ff2a4u: goto label_1ff2a4;
        case 0x1ff2a8u: goto label_1ff2a8;
        case 0x1ff2acu: goto label_1ff2ac;
        case 0x1ff2b0u: goto label_1ff2b0;
        case 0x1ff2b4u: goto label_1ff2b4;
        case 0x1ff2b8u: goto label_1ff2b8;
        case 0x1ff2bcu: goto label_1ff2bc;
        case 0x1ff2c0u: goto label_1ff2c0;
        case 0x1ff2c4u: goto label_1ff2c4;
        case 0x1ff2c8u: goto label_1ff2c8;
        case 0x1ff2ccu: goto label_1ff2cc;
        case 0x1ff2d0u: goto label_1ff2d0;
        case 0x1ff2d4u: goto label_1ff2d4;
        case 0x1ff2d8u: goto label_1ff2d8;
        case 0x1ff2dcu: goto label_1ff2dc;
        case 0x1ff2e0u: goto label_1ff2e0;
        case 0x1ff2e4u: goto label_1ff2e4;
        case 0x1ff2e8u: goto label_1ff2e8;
        case 0x1ff2ecu: goto label_1ff2ec;
        case 0x1ff2f0u: goto label_1ff2f0;
        case 0x1ff2f4u: goto label_1ff2f4;
        case 0x1ff2f8u: goto label_1ff2f8;
        case 0x1ff2fcu: goto label_1ff2fc;
        case 0x1ff300u: goto label_1ff300;
        case 0x1ff304u: goto label_1ff304;
        case 0x1ff308u: goto label_1ff308;
        case 0x1ff30cu: goto label_1ff30c;
        case 0x1ff310u: goto label_1ff310;
        case 0x1ff314u: goto label_1ff314;
        case 0x1ff318u: goto label_1ff318;
        case 0x1ff31cu: goto label_1ff31c;
        case 0x1ff320u: goto label_1ff320;
        case 0x1ff324u: goto label_1ff324;
        case 0x1ff328u: goto label_1ff328;
        case 0x1ff32cu: goto label_1ff32c;
        case 0x1ff330u: goto label_1ff330;
        case 0x1ff334u: goto label_1ff334;
        case 0x1ff338u: goto label_1ff338;
        case 0x1ff33cu: goto label_1ff33c;
        case 0x1ff340u: goto label_1ff340;
        case 0x1ff344u: goto label_1ff344;
        case 0x1ff348u: goto label_1ff348;
        case 0x1ff34cu: goto label_1ff34c;
        case 0x1ff350u: goto label_1ff350;
        case 0x1ff354u: goto label_1ff354;
        case 0x1ff358u: goto label_1ff358;
        case 0x1ff35cu: goto label_1ff35c;
        case 0x1ff360u: goto label_1ff360;
        case 0x1ff364u: goto label_1ff364;
        case 0x1ff368u: goto label_1ff368;
        case 0x1ff36cu: goto label_1ff36c;
        case 0x1ff370u: goto label_1ff370;
        case 0x1ff374u: goto label_1ff374;
        case 0x1ff378u: goto label_1ff378;
        case 0x1ff37cu: goto label_1ff37c;
        case 0x1ff380u: goto label_1ff380;
        case 0x1ff384u: goto label_1ff384;
        case 0x1ff388u: goto label_1ff388;
        case 0x1ff38cu: goto label_1ff38c;
        case 0x1ff390u: goto label_1ff390;
        case 0x1ff394u: goto label_1ff394;
        case 0x1ff398u: goto label_1ff398;
        case 0x1ff39cu: goto label_1ff39c;
        case 0x1ff3a0u: goto label_1ff3a0;
        case 0x1ff3a4u: goto label_1ff3a4;
        case 0x1ff3a8u: goto label_1ff3a8;
        case 0x1ff3acu: goto label_1ff3ac;
        case 0x1ff3b0u: goto label_1ff3b0;
        case 0x1ff3b4u: goto label_1ff3b4;
        case 0x1ff3b8u: goto label_1ff3b8;
        case 0x1ff3bcu: goto label_1ff3bc;
        case 0x1ff3c0u: goto label_1ff3c0;
        case 0x1ff3c4u: goto label_1ff3c4;
        case 0x1ff3c8u: goto label_1ff3c8;
        case 0x1ff3ccu: goto label_1ff3cc;
        case 0x1ff3d0u: goto label_1ff3d0;
        case 0x1ff3d4u: goto label_1ff3d4;
        case 0x1ff3d8u: goto label_1ff3d8;
        case 0x1ff3dcu: goto label_1ff3dc;
        default: break;
    }

    ctx->pc = 0x1fee30u;

label_1fee30:
    // 0x1fee30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1fee30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1fee34:
    // 0x1fee34: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1fee34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1fee38:
    // 0x1fee38: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1fee38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1fee3c:
    // 0x1fee3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fee3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fee40:
    // 0x1fee40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fee40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fee44:
    // 0x1fee44: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1fee44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fee48:
    // 0x1fee48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fee48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fee4c:
    // 0x1fee4c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fee4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fee50:
    // 0x1fee50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fee50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fee54:
    // 0x1fee54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fee54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fee58:
    // 0x1fee58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fee5c:
    // 0x1fee5c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1fee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fee60:
    // 0x1fee60: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1fee60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fee64:
    // 0x1fee64: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x1fee64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1fee68:
    // 0x1fee68: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
label_1fee6c:
    if (ctx->pc == 0x1FEE6Cu) {
        ctx->pc = 0x1FEE6Cu;
            // 0x1fee6c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE70u;
        goto label_1fee70;
    }
    ctx->pc = 0x1FEE68u;
    {
        const bool branch_taken_0x1fee68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee68) {
            ctx->pc = 0x1FEE6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE68u;
            // 0x1fee6c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FEE74u;
            goto label_1fee74;
        }
    }
    ctx->pc = 0x1FEE70u;
label_1fee70:
    // 0x1fee70: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1fee70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fee74:
    // 0x1fee74: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1fee74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_1fee78:
    // 0x1fee78: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
label_1fee7c:
    if (ctx->pc == 0x1FEE7Cu) {
        ctx->pc = 0x1FEE80u;
        goto label_1fee80;
    }
    ctx->pc = 0x1FEE78u;
    {
        const bool branch_taken_0x1fee78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee78) {
            ctx->pc = 0x1FF000u;
            goto label_1ff000;
        }
    }
    ctx->pc = 0x1FEE80u;
label_1fee80:
    // 0x1fee80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fee80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fee84:
    // 0x1fee84: 0x18a0004e  blez        $a1, . + 4 + (0x4E << 2)
label_1fee88:
    if (ctx->pc == 0x1FEE88u) {
        ctx->pc = 0x1FEE88u;
            // 0x1fee88: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE8Cu;
        goto label_1fee8c;
    }
    ctx->pc = 0x1FEE84u;
    {
        const bool branch_taken_0x1fee84 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1FEE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE84u;
            // 0x1fee88: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee84) {
            ctx->pc = 0x1FEFC0u;
            goto label_1fefc0;
        }
    }
    ctx->pc = 0x1FEE8Cu;
label_1fee8c:
    // 0x1fee8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fee8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fee90:
    // 0x1fee90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fee90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fee94:
    // 0x1fee94: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x1fee94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1fee98:
    // 0x1fee98: 0x18c0001f  blez        $a2, . + 4 + (0x1F << 2)
label_1fee9c:
    if (ctx->pc == 0x1FEE9Cu) {
        ctx->pc = 0x1FEE9Cu;
            // 0x1fee9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FEEA0u;
        goto label_1feea0;
    }
    ctx->pc = 0x1FEE98u;
    {
        const bool branch_taken_0x1fee98 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1FEE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE98u;
            // 0x1fee9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee98) {
            ctx->pc = 0x1FEF18u;
            goto label_1fef18;
        }
    }
    ctx->pc = 0x1FEEA0u;
label_1feea0:
    // 0x1feea0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1feea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1feea4:
    // 0x1feea4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1feea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1feea8:
    // 0x1feea8: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1feea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1feeac:
    // 0x1feeac: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x1feeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1feeb0:
    // 0x1feeb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1feeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1feeb4:
    // 0x1feeb4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1feeb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1feeb8:
    // 0x1feeb8: 0x8d0d0000  lw          $t5, 0x0($t0)
    ctx->pc = 0x1feeb8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1feebc:
    // 0x1feebc: 0x15a30006  bne         $t5, $v1, . + 4 + (0x6 << 2)
label_1feec0:
    if (ctx->pc == 0x1FEEC0u) {
        ctx->pc = 0x1FEEC4u;
        goto label_1feec4;
    }
    ctx->pc = 0x1FEEBCu;
    {
        const bool branch_taken_0x1feebc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 3));
        if (branch_taken_0x1feebc) {
            ctx->pc = 0x1FEED8u;
            goto label_1feed8;
        }
    }
    ctx->pc = 0x1FEEC4u;
label_1feec4:
    // 0x1feec4: 0xa77021  addu        $t6, $a1, $a3
    ctx->pc = 0x1feec4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1feec8:
    // 0x1feec8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1feec8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1feecc:
    // 0x1feecc: 0x8dce0004  lw          $t6, 0x4($t6)
    ctx->pc = 0x1feeccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
label_1feed0:
    // 0x1feed0: 0x11cd0011  beq         $t6, $t5, . + 4 + (0x11 << 2)
label_1feed4:
    if (ctx->pc == 0x1FEED4u) {
        ctx->pc = 0x1FEED8u;
        goto label_1feed8;
    }
    ctx->pc = 0x1FEED0u;
    {
        const bool branch_taken_0x1feed0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 13));
        if (branch_taken_0x1feed0) {
            ctx->pc = 0x1FEF18u;
            goto label_1fef18;
        }
    }
    ctx->pc = 0x1FEED8u;
label_1feed8:
    // 0x1feed8: 0xa77821  addu        $t7, $a1, $a3
    ctx->pc = 0x1feed8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1feedc:
    // 0x1feedc: 0x8dee0004  lw          $t6, 0x4($t7)
    ctx->pc = 0x1feedcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
label_1feee0:
    // 0x1feee0: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x1feee0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1feee4:
    // 0x1feee4: 0x15cd0006  bne         $t6, $t5, . + 4 + (0x6 << 2)
label_1feee8:
    if (ctx->pc == 0x1FEEE8u) {
        ctx->pc = 0x1FEEECu;
        goto label_1feeec;
    }
    ctx->pc = 0x1FEEE4u;
    {
        const bool branch_taken_0x1feee4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        if (branch_taken_0x1feee4) {
            ctx->pc = 0x1FEF00u;
            goto label_1fef00;
        }
    }
    ctx->pc = 0x1FEEECu;
label_1feeec:
    // 0x1feeec: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1feeecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_1feef0:
    // 0x1feef0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1feef0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1feef4:
    // 0x1feef4: 0x11cd0008  beq         $t6, $t5, . + 4 + (0x8 << 2)
label_1feef8:
    if (ctx->pc == 0x1FEEF8u) {
        ctx->pc = 0x1FEEFCu;
        goto label_1feefc;
    }
    ctx->pc = 0x1FEEF4u;
    {
        const bool branch_taken_0x1feef4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 13));
        if (branch_taken_0x1feef4) {
            ctx->pc = 0x1FEF18u;
            goto label_1fef18;
        }
    }
    ctx->pc = 0x1FEEFCu;
label_1feefc:
    // 0x1feefc: 0x0  nop
    ctx->pc = 0x1feefcu;
    // NOP
label_1fef00:
    // 0x1fef00: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1fef00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1fef04:
    // 0x1fef04: 0x166682a  slt         $t5, $t3, $a2
    ctx->pc = 0x1fef04u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1fef08:
    // 0x1fef08: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1fef08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1fef0c:
    // 0x1fef0c: 0x15a0ffea  bnez        $t5, . + 4 + (-0x16 << 2)
label_1fef10:
    if (ctx->pc == 0x1FEF10u) {
        ctx->pc = 0x1FEF10u;
            // 0x1fef10: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->pc = 0x1FEF14u;
        goto label_1fef14;
    }
    ctx->pc = 0x1FEF0Cu;
    {
        const bool branch_taken_0x1fef0c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF0Cu;
            // 0x1fef10: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef0c) {
            ctx->pc = 0x1FEEB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1feeb8;
        }
    }
    ctx->pc = 0x1FEF14u;
label_1fef14:
    // 0x1fef14: 0x0  nop
    ctx->pc = 0x1fef14u;
    // NOP
label_1fef18:
    // 0x1fef18: 0x1566000f  bne         $t3, $a2, . + 4 + (0xF << 2)
label_1fef1c:
    if (ctx->pc == 0x1FEF1Cu) {
        ctx->pc = 0x1FEF20u;
        goto label_1fef20;
    }
    ctx->pc = 0x1FEF18u;
    {
        const bool branch_taken_0x1fef18 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 6));
        if (branch_taken_0x1fef18) {
            ctx->pc = 0x1FEF58u;
            goto label_1fef58;
        }
    }
    ctx->pc = 0x1FEF20u;
label_1fef20:
    // 0x1fef20: 0x120c0009  beq         $s0, $t4, . + 4 + (0x9 << 2)
label_1fef24:
    if (ctx->pc == 0x1FEF24u) {
        ctx->pc = 0x1FEF28u;
        goto label_1fef28;
    }
    ctx->pc = 0x1FEF20u;
    {
        const bool branch_taken_0x1fef20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x1fef20) {
            ctx->pc = 0x1FEF48u;
            goto label_1fef48;
        }
    }
    ctx->pc = 0x1FEF28u;
label_1fef28:
    // 0x1fef28: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1fef28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1fef2c:
    // 0x1fef2c: 0x6a2821  addu        $a1, $v1, $t2
    ctx->pc = 0x1fef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1fef30:
    // 0x1fef30: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x1fef30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1fef34:
    // 0x1fef34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fef38:
    // 0x1fef38: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fef38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fef3c:
    // 0x1fef3c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1fef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fef40:
    // 0x1fef40: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fef40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1fef44:
    // 0x1fef44: 0x0  nop
    ctx->pc = 0x1fef44u;
    // NOP
label_1fef48:
    // 0x1fef48: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x1fef48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_1fef4c:
    // 0x1fef4c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1fef50:
    if (ctx->pc == 0x1FEF50u) {
        ctx->pc = 0x1FEF50u;
            // 0x1fef50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x1FEF54u;
        goto label_1fef54;
    }
    ctx->pc = 0x1FEF4Cu;
    {
        const bool branch_taken_0x1fef4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF4Cu;
            // 0x1fef50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef4c) {
            ctx->pc = 0x1FEFA8u;
            goto label_1fefa8;
        }
    }
    ctx->pc = 0x1FEF54u;
label_1fef54:
    // 0x1fef54: 0x0  nop
    ctx->pc = 0x1fef54u;
    // NOP
label_1fef58:
    // 0x1fef58: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1fef58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1fef5c:
    // 0x1fef5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1fef60:
    // 0x1fef60: 0x163082a  slt         $at, $t3, $v1
    ctx->pc = 0x1fef60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fef64:
    // 0x1fef64: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_1fef68:
    if (ctx->pc == 0x1FEF68u) {
        ctx->pc = 0x1FEF68u;
            // 0x1fef68: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1FEF6Cu;
        goto label_1fef6c;
    }
    ctx->pc = 0x1FEF64u;
    {
        const bool branch_taken_0x1fef64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF64u;
            // 0x1fef68: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef64) {
            ctx->pc = 0x1FEFA8u;
            goto label_1fefa8;
        }
    }
    ctx->pc = 0x1FEF6Cu;
label_1fef6c:
    // 0x1fef6c: 0xb30c0  sll         $a2, $t3, 3
    ctx->pc = 0x1fef6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_1fef70:
    // 0x1fef70: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1fef70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1fef74:
    // 0x1fef74: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1fef74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1fef78:
    // 0x1fef78: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x1fef78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_1fef7c:
    // 0x1fef7c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1fef7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1fef80:
    // 0x1fef80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fef84:
    // 0x1fef84: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1fef84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1fef88:
    // 0x1fef88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fef88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fef8c:
    // 0x1fef8c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1fef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fef90:
    // 0x1fef90: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fef90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1fef94:
    // 0x1fef94: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1fef94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1fef98:
    // 0x1fef98: 0x163182a  slt         $v1, $t3, $v1
    ctx->pc = 0x1fef98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fef9c:
    // 0x1fef9c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_1fefa0:
    if (ctx->pc == 0x1FEFA0u) {
        ctx->pc = 0x1FEFA0u;
            // 0x1fefa0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x1FEFA4u;
        goto label_1fefa4;
    }
    ctx->pc = 0x1FEF9Cu;
    {
        const bool branch_taken_0x1fef9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF9Cu;
            // 0x1fefa0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef9c) {
            ctx->pc = 0x1FEF70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fef70;
        }
    }
    ctx->pc = 0x1FEFA4u;
label_1fefa4:
    // 0x1fefa4: 0x0  nop
    ctx->pc = 0x1fefa4u;
    // NOP
label_1fefa8:
    // 0x1fefa8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1fefa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1fefac:
    // 0x1fefac: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1fefacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_1fefb0:
    // 0x1fefb0: 0x183182a  slt         $v1, $t4, $v1
    ctx->pc = 0x1fefb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fefb4:
    // 0x1fefb4: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
label_1fefb8:
    if (ctx->pc == 0x1FEFB8u) {
        ctx->pc = 0x1FEFB8u;
            // 0x1fefb8: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->pc = 0x1FEFBCu;
        goto label_1fefbc;
    }
    ctx->pc = 0x1FEFB4u;
    {
        const bool branch_taken_0x1fefb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEFB4u;
            // 0x1fefb8: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefb4) {
            ctx->pc = 0x1FEE94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fee94;
        }
    }
    ctx->pc = 0x1FEFBCu;
label_1fefbc:
    // 0x1fefbc: 0x0  nop
    ctx->pc = 0x1fefbcu;
    // NOP
label_1fefc0:
    // 0x1fefc0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1fefc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1fefc4:
    // 0x1fefc4: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1fefc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_1fefc8:
    // 0x1fefc8: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x1fefc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_1fefcc:
    // 0x1fefcc: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x1fefccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1fefd0:
    // 0x1fefd0: 0x502000ed  beql        $at, $zero, . + 4 + (0xED << 2)
label_1fefd4:
    if (ctx->pc == 0x1FEFD4u) {
        ctx->pc = 0x1FEFD4u;
            // 0x1fefd4: 0xae900004  sw          $s0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x1FEFD8u;
        goto label_1fefd8;
    }
    ctx->pc = 0x1FEFD0u;
    {
        const bool branch_taken_0x1fefd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fefd0) {
            ctx->pc = 0x1FEFD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEFD0u;
            // 0x1fefd4: 0xae900004  sw          $s0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF388u;
            goto label_1ff388;
        }
    }
    ctx->pc = 0x1FEFD8u;
label_1fefd8:
    // 0x1fefd8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1fefd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1fefdc:
    // 0x1fefdc: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x1fefdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1fefe0:
    // 0x1fefe0: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_1fefe4:
    if (ctx->pc == 0x1FEFE4u) {
        ctx->pc = 0x1FEFE4u;
            // 0x1fefe4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFE8u;
        goto label_1fefe8;
    }
    ctx->pc = 0x1FEFE0u;
    {
        const bool branch_taken_0x1fefe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fefe0) {
            ctx->pc = 0x1FEFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEFE0u;
            // 0x1fefe4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FEFE8u;
            goto label_1fefe8;
        }
    }
    ctx->pc = 0x1FEFE8u;
label_1fefe8:
    // 0x1fefe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fefe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fefec:
    // 0x1fefec: 0xc0a725c  jal         func_29C970
label_1feff0:
    if (ctx->pc == 0x1FEFF0u) {
        ctx->pc = 0x1FEFF0u;
            // 0x1feff0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1FEFF4u;
        goto label_1feff4;
    }
    ctx->pc = 0x1FEFECu;
    SET_GPR_U32(ctx, 31, 0x1FEFF4u);
    ctx->pc = 0x1FEFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEFECu;
            // 0x1feff0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEFF4u; }
        if (ctx->pc != 0x1FEFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEFF4u; }
        if (ctx->pc != 0x1FEFF4u) { return; }
    }
    ctx->pc = 0x1FEFF4u;
label_1feff4:
    // 0x1feff4: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x1feff4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_1feff8:
    // 0x1feff8: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_1feffc:
    if (ctx->pc == 0x1FEFFCu) {
        ctx->pc = 0x1FF000u;
        goto label_1ff000;
    }
    ctx->pc = 0x1FEFF8u;
    {
        const bool branch_taken_0x1feff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feff8) {
            ctx->pc = 0x1FF388u;
            goto label_1ff388;
        }
    }
    ctx->pc = 0x1FF000u;
label_1ff000:
    // 0x1ff000: 0xc0a74b4  jal         func_29D2D0
label_1ff004:
    if (ctx->pc == 0x1FF004u) {
        ctx->pc = 0x1FF008u;
        goto label_1ff008;
    }
    ctx->pc = 0x1FF000u;
    SET_GPR_U32(ctx, 31, 0x1FF008u);
    ctx->pc = 0x29D2D0u;
    if (runtime->hasFunction(0x29D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x29D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF008u; }
        if (ctx->pc != 0x1FF008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D2D0_0x29d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF008u; }
        if (ctx->pc != 0x1FF008u) { return; }
    }
    ctx->pc = 0x1FF008u;
label_1ff008:
    // 0x1ff008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ff008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff00c:
    // 0x1ff00c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ff00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ff010:
    // 0x1ff010: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1ff010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1ff014:
    // 0x1ff014: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ff014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ff018:
    // 0x1ff018: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1ff018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_1ff01c:
    // 0x1ff01c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x1ff01cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ff020:
    // 0x1ff020: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1ff020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1ff024:
    // 0x1ff024: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1ff024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1ff028:
    // 0x1ff028: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x1ff028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1ff02c:
    // 0x1ff02c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x1ff02cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1ff030:
    // 0x1ff030: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_1ff034:
    if (ctx->pc == 0x1FF034u) {
        ctx->pc = 0x1FF034u;
            // 0x1ff034: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x1FF038u;
        goto label_1ff038;
    }
    ctx->pc = 0x1FF030u;
    {
        const bool branch_taken_0x1ff030 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff030) {
            ctx->pc = 0x1FF034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF030u;
            // 0x1ff034: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF040u;
            goto label_1ff040;
        }
    }
    ctx->pc = 0x1FF038u;
label_1ff038:
    // 0x1ff038: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ff03c:
    if (ctx->pc == 0x1FF03Cu) {
        ctx->pc = 0x1FF03Cu;
            // 0x1ff03c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x1FF040u;
        goto label_1ff040;
    }
    ctx->pc = 0x1FF038u;
    {
        const bool branch_taken_0x1ff038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF038u;
            // 0x1ff03c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff038) {
            ctx->pc = 0x1FF04Cu;
            goto label_1ff04c;
        }
    }
    ctx->pc = 0x1FF040u;
label_1ff040:
    // 0x1ff040: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1ff040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1ff044:
    // 0x1ff044: 0x320f809  jalr        $t9
label_1ff048:
    if (ctx->pc == 0x1FF048u) {
        ctx->pc = 0x1FF04Cu;
        goto label_1ff04c;
    }
    ctx->pc = 0x1FF044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FF04Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FF04Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FF04Cu; }
            if (ctx->pc != 0x1FF04Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FF04Cu;
label_1ff04c:
    // 0x1ff04c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ff04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ff050:
    // 0x1ff050: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1ff050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_1ff054:
    // 0x1ff054: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ff054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff058:
    // 0x1ff058: 0xc0a74a0  jal         func_29D280
label_1ff05c:
    if (ctx->pc == 0x1FF05Cu) {
        ctx->pc = 0x1FF05Cu;
            // 0x1ff05c: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->pc = 0x1FF060u;
        goto label_1ff060;
    }
    ctx->pc = 0x1FF058u;
    SET_GPR_U32(ctx, 31, 0x1FF060u);
    ctx->pc = 0x1FF05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF058u;
            // 0x1ff05c: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D280u;
    if (runtime->hasFunction(0x29D280u)) {
        auto targetFn = runtime->lookupFunction(0x29D280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF060u; }
        if (ctx->pc != 0x1FF060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D280_0x29d280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF060u; }
        if (ctx->pc != 0x1FF060u) { return; }
    }
    ctx->pc = 0x1FF060u;
label_1ff060:
    // 0x1ff060: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1ff060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1ff064:
    // 0x1ff064: 0x18400038  blez        $v0, . + 4 + (0x38 << 2)
label_1ff068:
    if (ctx->pc == 0x1FF068u) {
        ctx->pc = 0x1FF068u;
            // 0x1ff068: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FF06Cu;
        goto label_1ff06c;
    }
    ctx->pc = 0x1FF064u;
    {
        const bool branch_taken_0x1ff064 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FF068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF064u;
            // 0x1ff068: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff064) {
            ctx->pc = 0x1FF148u;
            goto label_1ff148;
        }
    }
    ctx->pc = 0x1FF06Cu;
label_1ff06c:
    // 0x1ff06c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ff06cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff070:
    // 0x1ff070: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ff070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff074:
    // 0x1ff074: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1ff074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1ff078:
    // 0x1ff078: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ff078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ff07c:
    // 0x1ff07c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ff07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ff080:
    // 0x1ff080: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ff080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ff084:
    // 0x1ff084: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x1ff084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1ff088:
    // 0x1ff088: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1ff088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1ff08c:
    // 0x1ff08c: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x1ff08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_1ff090:
    // 0x1ff090: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ff090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1ff094:
    // 0x1ff094: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1ff094u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ff098:
    // 0x1ff098: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1ff09c:
    if (ctx->pc == 0x1FF09Cu) {
        ctx->pc = 0x1FF0A0u;
        goto label_1ff0a0;
    }
    ctx->pc = 0x1FF098u;
    {
        const bool branch_taken_0x1ff098 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff098) {
            ctx->pc = 0x1FF0A8u;
            goto label_1ff0a8;
        }
    }
    ctx->pc = 0x1FF0A0u;
label_1ff0a0:
    // 0x1ff0a0: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x1ff0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_1ff0a4:
    // 0x1ff0a4: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x1ff0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_1ff0a8:
    // 0x1ff0a8: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1ff0a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ff0ac:
    // 0x1ff0ac: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1ff0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1ff0b0:
    // 0x1ff0b0: 0xc0a7584  jal         func_29D610
label_1ff0b4:
    if (ctx->pc == 0x1FF0B4u) {
        ctx->pc = 0x1FF0B4u;
            // 0x1ff0b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0B8u;
        goto label_1ff0b8;
    }
    ctx->pc = 0x1FF0B0u;
    SET_GPR_U32(ctx, 31, 0x1FF0B8u);
    ctx->pc = 0x1FF0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF0B0u;
            // 0x1ff0b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D610u;
    if (runtime->hasFunction(0x29D610u)) {
        auto targetFn = runtime->lookupFunction(0x29D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF0B8u; }
        if (ctx->pc != 0x1FF0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D610_0x29d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF0B8u; }
        if (ctx->pc != 0x1FF0B8u) { return; }
    }
    ctx->pc = 0x1FF0B8u;
label_1ff0b8:
    // 0x1ff0b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1ff0bc:
    // 0x1ff0bc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1ff0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1ff0c0:
    // 0x1ff0c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ff0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1ff0c4:
    // 0x1ff0c4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1ff0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_1ff0c8:
    // 0x1ff0c8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1ff0c8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_1ff0cc:
    // 0x1ff0cc: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1ff0ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1ff0d0:
    // 0x1ff0d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ff0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1ff0d4:
    // 0x1ff0d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1ff0d8:
    if (ctx->pc == 0x1FF0D8u) {
        ctx->pc = 0x1FF0DCu;
        goto label_1ff0dc;
    }
    ctx->pc = 0x1FF0D4u;
    {
        const bool branch_taken_0x1ff0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff0d4) {
            ctx->pc = 0x1FF118u;
            goto label_1ff118;
        }
    }
    ctx->pc = 0x1FF0DCu;
label_1ff0dc:
    // 0x1ff0dc: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1ff0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1ff0e0:
    // 0x1ff0e0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1ff0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1ff0e4:
    // 0x1ff0e4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1ff0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ff0e8:
    // 0x1ff0e8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ff0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1ff0ec:
    // 0x1ff0ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ff0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ff0f0:
    // 0x1ff0f0: 0xdc630008  ld          $v1, 0x8($v1)
    ctx->pc = 0x1ff0f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_1ff0f4:
    // 0x1ff0f4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ff0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ff0f8:
    // 0x1ff0f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ff0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ff0fc:
    // 0x1ff0fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ff0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ff100:
    // 0x1ff100: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x1ff100u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
label_1ff104:
    // 0x1ff104: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ff104u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
label_1ff108:
    // 0x1ff108: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1ff108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1ff10c:
    // 0x1ff10c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ff10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ff110:
    // 0x1ff110: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ff114:
    if (ctx->pc == 0x1FF114u) {
        ctx->pc = 0x1FF114u;
            // 0x1ff114: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1FF118u;
        goto label_1ff118;
    }
    ctx->pc = 0x1FF110u;
    {
        const bool branch_taken_0x1ff110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF110u;
            // 0x1ff114: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff110) {
            ctx->pc = 0x1FF130u;
            goto label_1ff130;
        }
    }
    ctx->pc = 0x1FF118u;
label_1ff118:
    // 0x1ff118: 0x36020001  ori         $v0, $s0, 0x1
    ctx->pc = 0x1ff118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_1ff11c:
    // 0x1ff11c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1ff11cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_1ff120:
    // 0x1ff120: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ff120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ff124:
    // 0x1ff124: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1ff124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1ff128:
    // 0x1ff128: 0xc0a75bc  jal         func_29D6F0
label_1ff12c:
    if (ctx->pc == 0x1FF12Cu) {
        ctx->pc = 0x1FF12Cu;
            // 0x1ff12c: 0x6303f  dsra32      $a2, $a2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
        ctx->pc = 0x1FF130u;
        goto label_1ff130;
    }
    ctx->pc = 0x1FF128u;
    SET_GPR_U32(ctx, 31, 0x1FF130u);
    ctx->pc = 0x1FF12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF128u;
            // 0x1ff12c: 0x6303f  dsra32      $a2, $a2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D6F0u;
    if (runtime->hasFunction(0x29D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF130u; }
        if (ctx->pc != 0x1FF130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D6F0_0x29d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF130u; }
        if (ctx->pc != 0x1FF130u) { return; }
    }
    ctx->pc = 0x1FF130u;
label_1ff130:
    // 0x1ff130: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1ff130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1ff134:
    // 0x1ff134: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ff134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ff138:
    // 0x1ff138: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1ff138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1ff13c:
    // 0x1ff13c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1ff13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ff140:
    // 0x1ff140: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_1ff144:
    if (ctx->pc == 0x1FF144u) {
        ctx->pc = 0x1FF144u;
            // 0x1ff144: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->pc = 0x1FF148u;
        goto label_1ff148;
    }
    ctx->pc = 0x1FF140u;
    {
        const bool branch_taken_0x1ff140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF140u;
            // 0x1ff144: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff140) {
            ctx->pc = 0x1FF074u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff074;
        }
    }
    ctx->pc = 0x1FF148u;
label_1ff148:
    // 0x1ff148: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1ff148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1ff14c:
    // 0x1ff14c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ff14cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff150:
    // 0x1ff150: 0x1840004d  blez        $v0, . + 4 + (0x4D << 2)
label_1ff154:
    if (ctx->pc == 0x1FF154u) {
        ctx->pc = 0x1FF154u;
            // 0x1ff154: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FF158u;
        goto label_1ff158;
    }
    ctx->pc = 0x1FF150u;
    {
        const bool branch_taken_0x1ff150 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FF154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF150u;
            // 0x1ff154: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff150) {
            ctx->pc = 0x1FF288u;
            goto label_1ff288;
        }
    }
    ctx->pc = 0x1FF158u;
label_1ff158:
    // 0x1ff158: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ff158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff15c:
    // 0x1ff15c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ff15cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff160:
    // 0x1ff160: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1ff160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1ff164:
    // 0x1ff164: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ff164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ff168:
    // 0x1ff168: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ff168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ff16c:
    // 0x1ff16c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ff16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ff170:
    // 0x1ff170: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x1ff170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1ff174:
    // 0x1ff174: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1ff174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1ff178:
    // 0x1ff178: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x1ff178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_1ff17c:
    // 0x1ff17c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1ff17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1ff180:
    // 0x1ff180: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1ff180u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ff184:
    // 0x1ff184: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1ff188:
    if (ctx->pc == 0x1FF188u) {
        ctx->pc = 0x1FF18Cu;
        goto label_1ff18c;
    }
    ctx->pc = 0x1FF184u;
    {
        const bool branch_taken_0x1ff184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff184) {
            ctx->pc = 0x1FF198u;
            goto label_1ff198;
        }
    }
    ctx->pc = 0x1FF18Cu;
label_1ff18c:
    // 0x1ff18c: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x1ff18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
label_1ff190:
    // 0x1ff190: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1ff190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_1ff194:
    // 0x1ff194: 0x0  nop
    ctx->pc = 0x1ff194u;
    // NOP
label_1ff198:
    // 0x1ff198: 0xdfa50088  ld          $a1, 0x88($sp)
    ctx->pc = 0x1ff198u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1ff19c:
    // 0x1ff19c: 0xc0a7584  jal         func_29D610
label_1ff1a0:
    if (ctx->pc == 0x1FF1A0u) {
        ctx->pc = 0x1FF1A0u;
            // 0x1ff1a0: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->pc = 0x1FF1A4u;
        goto label_1ff1a4;
    }
    ctx->pc = 0x1FF19Cu;
    SET_GPR_U32(ctx, 31, 0x1FF1A4u);
    ctx->pc = 0x1FF1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF19Cu;
            // 0x1ff1a0: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D610u;
    if (runtime->hasFunction(0x29D610u)) {
        auto targetFn = runtime->lookupFunction(0x29D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF1A4u; }
        if (ctx->pc != 0x1FF1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D610_0x29d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF1A4u; }
        if (ctx->pc != 0x1FF1A4u) { return; }
    }
    ctx->pc = 0x1FF1A4u;
label_1ff1a4:
    // 0x1ff1a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ff1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ff1a8:
    // 0x1ff1a8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ff1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1ff1ac:
    // 0x1ff1ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ff1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1ff1b0:
    // 0x1ff1b0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1ff1b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_1ff1b4:
    // 0x1ff1b4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1ff1b4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_1ff1b8:
    // 0x1ff1b8: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x1ff1b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1ff1bc:
    // 0x1ff1bc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1ff1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1ff1c0:
    // 0x1ff1c0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_1ff1c4:
    if (ctx->pc == 0x1FF1C4u) {
        ctx->pc = 0x1FF1C8u;
        goto label_1ff1c8;
    }
    ctx->pc = 0x1FF1C0u;
    {
        const bool branch_taken_0x1ff1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff1c0) {
            ctx->pc = 0x1FF248u;
            goto label_1ff248;
        }
    }
    ctx->pc = 0x1FF1C8u;
label_1ff1c8:
    // 0x1ff1c8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1ff1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1ff1cc:
    // 0x1ff1cc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1ff1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1ff1d0:
    // 0x1ff1d0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ff1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1ff1d4:
    // 0x1ff1d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ff1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ff1d8:
    // 0x1ff1d8: 0xdc700008  ld          $s0, 0x8($v1)
    ctx->pc = 0x1ff1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_1ff1dc:
    // 0x1ff1dc: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1ff1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_1ff1e0:
    // 0x1ff1e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1ff1e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1ff1e4:
    // 0x1ff1e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1ff1e8:
    // 0x1ff1e8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1ff1e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ff1ec:
    // 0x1ff1ec: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_1ff1f0:
    if (ctx->pc == 0x1FF1F0u) {
        ctx->pc = 0x1FF1F4u;
        goto label_1ff1f4;
    }
    ctx->pc = 0x1FF1ECu;
    {
        const bool branch_taken_0x1ff1ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff1ec) {
            ctx->pc = 0x1FF218u;
            goto label_1ff218;
        }
    }
    ctx->pc = 0x1FF1F4u;
label_1ff1f4:
    // 0x1ff1f4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ff1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1ff1f8:
    // 0x1ff1f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ff1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ff1fc:
    // 0x1ff1fc: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1ff1fcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_1ff200:
    // 0x1ff200: 0x203182d  daddu       $v1, $s0, $v1
    ctx->pc = 0x1ff200u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
label_1ff204:
    // 0x1ff204: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ff204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ff208:
    // 0x1ff208: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ff208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ff20c:
    // 0x1ff20c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ff20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ff210:
    // 0x1ff210: 0x10000017  b           . + 4 + (0x17 << 2)
label_1ff214:
    if (ctx->pc == 0x1FF214u) {
        ctx->pc = 0x1FF214u;
            // 0x1ff214: 0xfc430008  sd          $v1, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
        ctx->pc = 0x1FF218u;
        goto label_1ff218;
    }
    ctx->pc = 0x1FF210u;
    {
        const bool branch_taken_0x1ff210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF210u;
            // 0x1ff214: 0xfc430008  sd          $v1, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff210) {
            ctx->pc = 0x1FF270u;
            goto label_1ff270;
        }
    }
    ctx->pc = 0x1FF218u;
label_1ff218:
    // 0x1ff218: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ff218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff21c:
    // 0x1ff21c: 0xc0a7504  jal         func_29D410
label_1ff220:
    if (ctx->pc == 0x1FF220u) {
        ctx->pc = 0x1FF220u;
            // 0x1ff220: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->pc = 0x1FF224u;
        goto label_1ff224;
    }
    ctx->pc = 0x1FF21Cu;
    SET_GPR_U32(ctx, 31, 0x1FF224u);
    ctx->pc = 0x1FF220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF21Cu;
            // 0x1ff220: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D410u;
    if (runtime->hasFunction(0x29D410u)) {
        auto targetFn = runtime->lookupFunction(0x29D410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF224u; }
        if (ctx->pc != 0x1FF224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D410_0x29d410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF224u; }
        if (ctx->pc != 0x1FF224u) { return; }
    }
    ctx->pc = 0x1FF224u;
label_1ff224:
    // 0x1ff224: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1ff224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_1ff228:
    // 0x1ff228: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1ff228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1ff22c:
    // 0x1ff22c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1ff22cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1ff230:
    // 0x1ff230: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1ff230u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_1ff234:
    // 0x1ff234: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ff234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1ff238:
    // 0x1ff238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ff238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ff23c:
    // 0x1ff23c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1ff240:
    if (ctx->pc == 0x1FF240u) {
        ctx->pc = 0x1FF240u;
            // 0x1ff240: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1FF244u;
        goto label_1ff244;
    }
    ctx->pc = 0x1FF23Cu;
    {
        const bool branch_taken_0x1ff23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF23Cu;
            // 0x1ff240: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff23c) {
            ctx->pc = 0x1FF270u;
            goto label_1ff270;
        }
    }
    ctx->pc = 0x1FF244u;
label_1ff244:
    // 0x1ff244: 0x0  nop
    ctx->pc = 0x1ff244u;
    // NOP
label_1ff248:
    // 0x1ff248: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1ff248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1ff24c:
    // 0x1ff24c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ff24cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ff250:
    // 0x1ff250: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x1ff250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1ff254:
    // 0x1ff254: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1ff254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ff258:
    // 0x1ff258: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ff258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ff25c:
    // 0x1ff25c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1ff25cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_1ff260:
    // 0x1ff260: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ff260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ff264:
    // 0x1ff264: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ff268:
    // 0x1ff268: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ff268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1ff26c:
    // 0x1ff26c: 0x0  nop
    ctx->pc = 0x1ff26cu;
    // NOP
label_1ff270:
    // 0x1ff270: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1ff270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1ff274:
    // 0x1ff274: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ff274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ff278:
    // 0x1ff278: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1ff278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ff27c:
    // 0x1ff27c: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
label_1ff280:
    if (ctx->pc == 0x1FF280u) {
        ctx->pc = 0x1FF280u;
            // 0x1ff280: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1FF284u;
        goto label_1ff284;
    }
    ctx->pc = 0x1FF27Cu;
    {
        const bool branch_taken_0x1ff27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF27Cu;
            // 0x1ff280: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff27c) {
            ctx->pc = 0x1FF160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff160;
        }
    }
    ctx->pc = 0x1FF284u;
label_1ff284:
    // 0x1ff284: 0x0  nop
    ctx->pc = 0x1ff284u;
    // NOP
label_1ff288:
    // 0x1ff288: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1ff288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1ff28c:
    // 0x1ff28c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1ff28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_1ff290:
    // 0x1ff290: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1ff290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1ff294:
    // 0x1ff294: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x1ff294u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1ff298:
    // 0x1ff298: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
label_1ff29c:
    if (ctx->pc == 0x1FF29Cu) {
        ctx->pc = 0x1FF29Cu;
            // 0x1ff29c: 0xae930004  sw          $s3, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x1FF2A0u;
        goto label_1ff2a0;
    }
    ctx->pc = 0x1FF298u;
    {
        const bool branch_taken_0x1ff298 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff298) {
            ctx->pc = 0x1FF29Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF298u;
            // 0x1ff29c: 0xae930004  sw          $s3, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF2C0u;
            goto label_1ff2c0;
        }
    }
    ctx->pc = 0x1FF2A0u;
label_1ff2a0:
    // 0x1ff2a0: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1ff2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ff2a4:
    // 0x1ff2a4: 0x265082a  slt         $at, $s3, $a1
    ctx->pc = 0x1ff2a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1ff2a8:
    // 0x1ff2a8: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_1ff2ac:
    if (ctx->pc == 0x1FF2ACu) {
        ctx->pc = 0x1FF2ACu;
            // 0x1ff2ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2B0u;
        goto label_1ff2b0;
    }
    ctx->pc = 0x1FF2A8u;
    {
        const bool branch_taken_0x1ff2a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff2a8) {
            ctx->pc = 0x1FF2ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF2A8u;
            // 0x1ff2ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF2B0u;
            goto label_1ff2b0;
        }
    }
    ctx->pc = 0x1FF2B0u;
label_1ff2b0:
    // 0x1ff2b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ff2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ff2b4:
    // 0x1ff2b4: 0xc0a725c  jal         func_29C970
label_1ff2b8:
    if (ctx->pc == 0x1FF2B8u) {
        ctx->pc = 0x1FF2B8u;
            // 0x1ff2b8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1FF2BCu;
        goto label_1ff2bc;
    }
    ctx->pc = 0x1FF2B4u;
    SET_GPR_U32(ctx, 31, 0x1FF2BCu);
    ctx->pc = 0x1FF2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF2B4u;
            // 0x1ff2b8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF2BCu; }
        if (ctx->pc != 0x1FF2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF2BCu; }
        if (ctx->pc != 0x1FF2BCu) { return; }
    }
    ctx->pc = 0x1FF2BCu;
label_1ff2bc:
    // 0x1ff2bc: 0xae930004  sw          $s3, 0x4($s4)
    ctx->pc = 0x1ff2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
label_1ff2c0:
    // 0x1ff2c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ff2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff2c4:
    // 0x1ff2c4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1ff2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1ff2c8:
    // 0x1ff2c8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_1ff2cc:
    if (ctx->pc == 0x1FF2CCu) {
        ctx->pc = 0x1FF2CCu;
            // 0x1ff2cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2D0u;
        goto label_1ff2d0;
    }
    ctx->pc = 0x1FF2C8u;
    {
        const bool branch_taken_0x1ff2c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FF2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF2C8u;
            // 0x1ff2cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2c8) {
            ctx->pc = 0x1FF318u;
            goto label_1ff318;
        }
    }
    ctx->pc = 0x1FF2D0u;
label_1ff2d0:
    // 0x1ff2d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff2d4:
    // 0x1ff2d4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1ff2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1ff2d8:
    // 0x1ff2d8: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1ff2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ff2dc:
    // 0x1ff2dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1ff2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ff2e0:
    // 0x1ff2e0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1ff2e4:
    if (ctx->pc == 0x1FF2E4u) {
        ctx->pc = 0x1FF2E8u;
        goto label_1ff2e8;
    }
    ctx->pc = 0x1FF2E0u;
    {
        const bool branch_taken_0x1ff2e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff2e0) {
            ctx->pc = 0x1FF300u;
            goto label_1ff300;
        }
    }
    ctx->pc = 0x1FF2E8u;
label_1ff2e8:
    // 0x1ff2e8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1ff2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1ff2ec:
    // 0x1ff2ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ff2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ff2f0:
    // 0x1ff2f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ff2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ff2f4:
    // 0x1ff2f4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ff2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1ff2f8:
    // 0x1ff2f8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1ff2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ff2fc:
    // 0x1ff2fc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ff2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1ff300:
    // 0x1ff300: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1ff300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1ff304:
    // 0x1ff304: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ff304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1ff308:
    // 0x1ff308: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x1ff308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ff30c:
    // 0x1ff30c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1ff310:
    if (ctx->pc == 0x1FF310u) {
        ctx->pc = 0x1FF310u;
            // 0x1ff310: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x1FF314u;
        goto label_1ff314;
    }
    ctx->pc = 0x1FF30Cu;
    {
        const bool branch_taken_0x1ff30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF30Cu;
            // 0x1ff310: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff30c) {
            ctx->pc = 0x1FF2D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff2d4;
        }
    }
    ctx->pc = 0x1FF314u;
label_1ff314:
    // 0x1ff314: 0x0  nop
    ctx->pc = 0x1ff314u;
    // NOP
label_1ff318:
    // 0x1ff318: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1ff318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1ff31c:
    // 0x1ff31c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1ff31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_1ff320:
    // 0x1ff320: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1ff320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1ff324:
    // 0x1ff324: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x1ff324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1ff328:
    // 0x1ff328: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
label_1ff32c:
    if (ctx->pc == 0x1FF32Cu) {
        ctx->pc = 0x1FF32Cu;
            // 0x1ff32c: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->pc = 0x1FF330u;
        goto label_1ff330;
    }
    ctx->pc = 0x1FF328u;
    {
        const bool branch_taken_0x1ff328 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff328) {
            ctx->pc = 0x1FF32Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF328u;
            // 0x1ff32c: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF350u;
            goto label_1ff350;
        }
    }
    ctx->pc = 0x1FF330u;
label_1ff330:
    // 0x1ff330: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1ff330u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ff334:
    // 0x1ff334: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x1ff334u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1ff338:
    // 0x1ff338: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_1ff33c:
    if (ctx->pc == 0x1FF33Cu) {
        ctx->pc = 0x1FF33Cu;
            // 0x1ff33c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FF340u;
        goto label_1ff340;
    }
    ctx->pc = 0x1FF338u;
    {
        const bool branch_taken_0x1ff338 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff338) {
            ctx->pc = 0x1FF33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF338u;
            // 0x1ff33c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF340u;
            goto label_1ff340;
        }
    }
    ctx->pc = 0x1FF340u;
label_1ff340:
    // 0x1ff340: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ff340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ff344:
    // 0x1ff344: 0xc0a725c  jal         func_29C970
label_1ff348:
    if (ctx->pc == 0x1FF348u) {
        ctx->pc = 0x1FF348u;
            // 0x1ff348: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1FF34Cu;
        goto label_1ff34c;
    }
    ctx->pc = 0x1FF344u;
    SET_GPR_U32(ctx, 31, 0x1FF34Cu);
    ctx->pc = 0x1FF348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF344u;
            // 0x1ff348: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF34Cu; }
        if (ctx->pc != 0x1FF34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF34Cu; }
        if (ctx->pc != 0x1FF34Cu) { return; }
    }
    ctx->pc = 0x1FF34Cu;
label_1ff34c:
    // 0x1ff34c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1ff34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1ff350:
    // 0x1ff350: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ff350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ff354:
    // 0x1ff354: 0xc0a760c  jal         func_29D830
label_1ff358:
    if (ctx->pc == 0x1FF358u) {
        ctx->pc = 0x1FF358u;
            // 0x1ff358: 0xaeb00004  sw          $s0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x1FF35Cu;
        goto label_1ff35c;
    }
    ctx->pc = 0x1FF354u;
    SET_GPR_U32(ctx, 31, 0x1FF35Cu);
    ctx->pc = 0x1FF358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF354u;
            // 0x1ff358: 0xaeb00004  sw          $s0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D830u;
    if (runtime->hasFunction(0x29D830u)) {
        auto targetFn = runtime->lookupFunction(0x29D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF35Cu; }
        if (ctx->pc != 0x1FF35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D830_0x29d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF35Cu; }
        if (ctx->pc != 0x1FF35Cu) { return; }
    }
    ctx->pc = 0x1FF35Cu;
label_1ff35c:
    // 0x1ff35c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ff35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1ff360:
    // 0x1ff360: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x1ff360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1ff364:
    // 0x1ff364: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x1ff364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_1ff368:
    // 0x1ff368: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1ff368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_1ff36c:
    // 0x1ff36c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1ff36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1ff370:
    // 0x1ff370: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_1ff374:
    if (ctx->pc == 0x1FF374u) {
        ctx->pc = 0x1FF378u;
        goto label_1ff378;
    }
    ctx->pc = 0x1FF370u;
    {
        const bool branch_taken_0x1ff370 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ff370) {
            ctx->pc = 0x1FF388u;
            goto label_1ff388;
        }
    }
    ctx->pc = 0x1FF378u;
label_1ff378:
    // 0x1ff378: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ff378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ff37c:
    // 0x1ff37c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1ff37cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1ff380:
    // 0x1ff380: 0x320f809  jalr        $t9
label_1ff384:
    if (ctx->pc == 0x1FF384u) {
        ctx->pc = 0x1FF388u;
        goto label_1ff388;
    }
    ctx->pc = 0x1FF380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FF388u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FF388u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FF388u; }
            if (ctx->pc != 0x1FF388u) { return; }
        }
        }
    }
    ctx->pc = 0x1FF388u;
label_1ff388:
    // 0x1ff388: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ff388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ff38c:
    // 0x1ff38c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ff38cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ff390:
    // 0x1ff390: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ff390u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ff394:
    // 0x1ff394: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ff394u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ff398:
    // 0x1ff398: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ff398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ff39c:
    // 0x1ff39c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ff39cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ff3a0:
    // 0x1ff3a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ff3a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff3a4:
    // 0x1ff3a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff3a8:
    // 0x1ff3a8: 0x3e00008  jr          $ra
label_1ff3ac:
    if (ctx->pc == 0x1FF3ACu) {
        ctx->pc = 0x1FF3ACu;
            // 0x1ff3ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1FF3B0u;
        goto label_1ff3b0;
    }
    ctx->pc = 0x1FF3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF3A8u;
            // 0x1ff3ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF3B0u;
label_1ff3b0:
    // 0x1ff3b0: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x1ff3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ff3b4:
    // 0x1ff3b4: 0x3e00008  jr          $ra
label_1ff3b8:
    if (ctx->pc == 0x1FF3B8u) {
        ctx->pc = 0x1FF3B8u;
            // 0x1ff3b8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3BCu;
        goto label_1ff3bc;
    }
    ctx->pc = 0x1FF3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF3B4u;
            // 0x1ff3b8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF3BCu;
label_1ff3bc:
    // 0x1ff3bc: 0x0  nop
    ctx->pc = 0x1ff3bcu;
    // NOP
label_1ff3c0:
    // 0x1ff3c0: 0x3e00008  jr          $ra
label_1ff3c4:
    if (ctx->pc == 0x1FF3C4u) {
        ctx->pc = 0x1FF3C8u;
        goto label_1ff3c8;
    }
    ctx->pc = 0x1FF3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF3C8u;
label_1ff3c8:
    // 0x1ff3c8: 0x0  nop
    ctx->pc = 0x1ff3c8u;
    // NOP
label_1ff3cc:
    // 0x1ff3cc: 0x0  nop
    ctx->pc = 0x1ff3ccu;
    // NOP
label_1ff3d0:
    // 0x1ff3d0: 0x3e00008  jr          $ra
label_1ff3d4:
    if (ctx->pc == 0x1FF3D4u) {
        ctx->pc = 0x1FF3D4u;
            // 0x1ff3d4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3D8u;
        goto label_1ff3d8;
    }
    ctx->pc = 0x1FF3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF3D0u;
            // 0x1ff3d4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF3D8u;
label_1ff3d8:
    // 0x1ff3d8: 0x0  nop
    ctx->pc = 0x1ff3d8u;
    // NOP
label_1ff3dc:
    // 0x1ff3dc: 0x0  nop
    ctx->pc = 0x1ff3dcu;
    // NOP
}
