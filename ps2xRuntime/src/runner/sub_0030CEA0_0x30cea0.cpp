#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030CEA0
// Address: 0x30cea0 - 0x30d440
void sub_0030CEA0_0x30cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CEA0_0x30cea0");
#endif

    switch (ctx->pc) {
        case 0x30cea0u: goto label_30cea0;
        case 0x30cea4u: goto label_30cea4;
        case 0x30cea8u: goto label_30cea8;
        case 0x30ceacu: goto label_30ceac;
        case 0x30ceb0u: goto label_30ceb0;
        case 0x30ceb4u: goto label_30ceb4;
        case 0x30ceb8u: goto label_30ceb8;
        case 0x30cebcu: goto label_30cebc;
        case 0x30cec0u: goto label_30cec0;
        case 0x30cec4u: goto label_30cec4;
        case 0x30cec8u: goto label_30cec8;
        case 0x30ceccu: goto label_30cecc;
        case 0x30ced0u: goto label_30ced0;
        case 0x30ced4u: goto label_30ced4;
        case 0x30ced8u: goto label_30ced8;
        case 0x30cedcu: goto label_30cedc;
        case 0x30cee0u: goto label_30cee0;
        case 0x30cee4u: goto label_30cee4;
        case 0x30cee8u: goto label_30cee8;
        case 0x30ceecu: goto label_30ceec;
        case 0x30cef0u: goto label_30cef0;
        case 0x30cef4u: goto label_30cef4;
        case 0x30cef8u: goto label_30cef8;
        case 0x30cefcu: goto label_30cefc;
        case 0x30cf00u: goto label_30cf00;
        case 0x30cf04u: goto label_30cf04;
        case 0x30cf08u: goto label_30cf08;
        case 0x30cf0cu: goto label_30cf0c;
        case 0x30cf10u: goto label_30cf10;
        case 0x30cf14u: goto label_30cf14;
        case 0x30cf18u: goto label_30cf18;
        case 0x30cf1cu: goto label_30cf1c;
        case 0x30cf20u: goto label_30cf20;
        case 0x30cf24u: goto label_30cf24;
        case 0x30cf28u: goto label_30cf28;
        case 0x30cf2cu: goto label_30cf2c;
        case 0x30cf30u: goto label_30cf30;
        case 0x30cf34u: goto label_30cf34;
        case 0x30cf38u: goto label_30cf38;
        case 0x30cf3cu: goto label_30cf3c;
        case 0x30cf40u: goto label_30cf40;
        case 0x30cf44u: goto label_30cf44;
        case 0x30cf48u: goto label_30cf48;
        case 0x30cf4cu: goto label_30cf4c;
        case 0x30cf50u: goto label_30cf50;
        case 0x30cf54u: goto label_30cf54;
        case 0x30cf58u: goto label_30cf58;
        case 0x30cf5cu: goto label_30cf5c;
        case 0x30cf60u: goto label_30cf60;
        case 0x30cf64u: goto label_30cf64;
        case 0x30cf68u: goto label_30cf68;
        case 0x30cf6cu: goto label_30cf6c;
        case 0x30cf70u: goto label_30cf70;
        case 0x30cf74u: goto label_30cf74;
        case 0x30cf78u: goto label_30cf78;
        case 0x30cf7cu: goto label_30cf7c;
        case 0x30cf80u: goto label_30cf80;
        case 0x30cf84u: goto label_30cf84;
        case 0x30cf88u: goto label_30cf88;
        case 0x30cf8cu: goto label_30cf8c;
        case 0x30cf90u: goto label_30cf90;
        case 0x30cf94u: goto label_30cf94;
        case 0x30cf98u: goto label_30cf98;
        case 0x30cf9cu: goto label_30cf9c;
        case 0x30cfa0u: goto label_30cfa0;
        case 0x30cfa4u: goto label_30cfa4;
        case 0x30cfa8u: goto label_30cfa8;
        case 0x30cfacu: goto label_30cfac;
        case 0x30cfb0u: goto label_30cfb0;
        case 0x30cfb4u: goto label_30cfb4;
        case 0x30cfb8u: goto label_30cfb8;
        case 0x30cfbcu: goto label_30cfbc;
        case 0x30cfc0u: goto label_30cfc0;
        case 0x30cfc4u: goto label_30cfc4;
        case 0x30cfc8u: goto label_30cfc8;
        case 0x30cfccu: goto label_30cfcc;
        case 0x30cfd0u: goto label_30cfd0;
        case 0x30cfd4u: goto label_30cfd4;
        case 0x30cfd8u: goto label_30cfd8;
        case 0x30cfdcu: goto label_30cfdc;
        case 0x30cfe0u: goto label_30cfe0;
        case 0x30cfe4u: goto label_30cfe4;
        case 0x30cfe8u: goto label_30cfe8;
        case 0x30cfecu: goto label_30cfec;
        case 0x30cff0u: goto label_30cff0;
        case 0x30cff4u: goto label_30cff4;
        case 0x30cff8u: goto label_30cff8;
        case 0x30cffcu: goto label_30cffc;
        case 0x30d000u: goto label_30d000;
        case 0x30d004u: goto label_30d004;
        case 0x30d008u: goto label_30d008;
        case 0x30d00cu: goto label_30d00c;
        case 0x30d010u: goto label_30d010;
        case 0x30d014u: goto label_30d014;
        case 0x30d018u: goto label_30d018;
        case 0x30d01cu: goto label_30d01c;
        case 0x30d020u: goto label_30d020;
        case 0x30d024u: goto label_30d024;
        case 0x30d028u: goto label_30d028;
        case 0x30d02cu: goto label_30d02c;
        case 0x30d030u: goto label_30d030;
        case 0x30d034u: goto label_30d034;
        case 0x30d038u: goto label_30d038;
        case 0x30d03cu: goto label_30d03c;
        case 0x30d040u: goto label_30d040;
        case 0x30d044u: goto label_30d044;
        case 0x30d048u: goto label_30d048;
        case 0x30d04cu: goto label_30d04c;
        case 0x30d050u: goto label_30d050;
        case 0x30d054u: goto label_30d054;
        case 0x30d058u: goto label_30d058;
        case 0x30d05cu: goto label_30d05c;
        case 0x30d060u: goto label_30d060;
        case 0x30d064u: goto label_30d064;
        case 0x30d068u: goto label_30d068;
        case 0x30d06cu: goto label_30d06c;
        case 0x30d070u: goto label_30d070;
        case 0x30d074u: goto label_30d074;
        case 0x30d078u: goto label_30d078;
        case 0x30d07cu: goto label_30d07c;
        case 0x30d080u: goto label_30d080;
        case 0x30d084u: goto label_30d084;
        case 0x30d088u: goto label_30d088;
        case 0x30d08cu: goto label_30d08c;
        case 0x30d090u: goto label_30d090;
        case 0x30d094u: goto label_30d094;
        case 0x30d098u: goto label_30d098;
        case 0x30d09cu: goto label_30d09c;
        case 0x30d0a0u: goto label_30d0a0;
        case 0x30d0a4u: goto label_30d0a4;
        case 0x30d0a8u: goto label_30d0a8;
        case 0x30d0acu: goto label_30d0ac;
        case 0x30d0b0u: goto label_30d0b0;
        case 0x30d0b4u: goto label_30d0b4;
        case 0x30d0b8u: goto label_30d0b8;
        case 0x30d0bcu: goto label_30d0bc;
        case 0x30d0c0u: goto label_30d0c0;
        case 0x30d0c4u: goto label_30d0c4;
        case 0x30d0c8u: goto label_30d0c8;
        case 0x30d0ccu: goto label_30d0cc;
        case 0x30d0d0u: goto label_30d0d0;
        case 0x30d0d4u: goto label_30d0d4;
        case 0x30d0d8u: goto label_30d0d8;
        case 0x30d0dcu: goto label_30d0dc;
        case 0x30d0e0u: goto label_30d0e0;
        case 0x30d0e4u: goto label_30d0e4;
        case 0x30d0e8u: goto label_30d0e8;
        case 0x30d0ecu: goto label_30d0ec;
        case 0x30d0f0u: goto label_30d0f0;
        case 0x30d0f4u: goto label_30d0f4;
        case 0x30d0f8u: goto label_30d0f8;
        case 0x30d0fcu: goto label_30d0fc;
        case 0x30d100u: goto label_30d100;
        case 0x30d104u: goto label_30d104;
        case 0x30d108u: goto label_30d108;
        case 0x30d10cu: goto label_30d10c;
        case 0x30d110u: goto label_30d110;
        case 0x30d114u: goto label_30d114;
        case 0x30d118u: goto label_30d118;
        case 0x30d11cu: goto label_30d11c;
        case 0x30d120u: goto label_30d120;
        case 0x30d124u: goto label_30d124;
        case 0x30d128u: goto label_30d128;
        case 0x30d12cu: goto label_30d12c;
        case 0x30d130u: goto label_30d130;
        case 0x30d134u: goto label_30d134;
        case 0x30d138u: goto label_30d138;
        case 0x30d13cu: goto label_30d13c;
        case 0x30d140u: goto label_30d140;
        case 0x30d144u: goto label_30d144;
        case 0x30d148u: goto label_30d148;
        case 0x30d14cu: goto label_30d14c;
        case 0x30d150u: goto label_30d150;
        case 0x30d154u: goto label_30d154;
        case 0x30d158u: goto label_30d158;
        case 0x30d15cu: goto label_30d15c;
        case 0x30d160u: goto label_30d160;
        case 0x30d164u: goto label_30d164;
        case 0x30d168u: goto label_30d168;
        case 0x30d16cu: goto label_30d16c;
        case 0x30d170u: goto label_30d170;
        case 0x30d174u: goto label_30d174;
        case 0x30d178u: goto label_30d178;
        case 0x30d17cu: goto label_30d17c;
        case 0x30d180u: goto label_30d180;
        case 0x30d184u: goto label_30d184;
        case 0x30d188u: goto label_30d188;
        case 0x30d18cu: goto label_30d18c;
        case 0x30d190u: goto label_30d190;
        case 0x30d194u: goto label_30d194;
        case 0x30d198u: goto label_30d198;
        case 0x30d19cu: goto label_30d19c;
        case 0x30d1a0u: goto label_30d1a0;
        case 0x30d1a4u: goto label_30d1a4;
        case 0x30d1a8u: goto label_30d1a8;
        case 0x30d1acu: goto label_30d1ac;
        case 0x30d1b0u: goto label_30d1b0;
        case 0x30d1b4u: goto label_30d1b4;
        case 0x30d1b8u: goto label_30d1b8;
        case 0x30d1bcu: goto label_30d1bc;
        case 0x30d1c0u: goto label_30d1c0;
        case 0x30d1c4u: goto label_30d1c4;
        case 0x30d1c8u: goto label_30d1c8;
        case 0x30d1ccu: goto label_30d1cc;
        case 0x30d1d0u: goto label_30d1d0;
        case 0x30d1d4u: goto label_30d1d4;
        case 0x30d1d8u: goto label_30d1d8;
        case 0x30d1dcu: goto label_30d1dc;
        case 0x30d1e0u: goto label_30d1e0;
        case 0x30d1e4u: goto label_30d1e4;
        case 0x30d1e8u: goto label_30d1e8;
        case 0x30d1ecu: goto label_30d1ec;
        case 0x30d1f0u: goto label_30d1f0;
        case 0x30d1f4u: goto label_30d1f4;
        case 0x30d1f8u: goto label_30d1f8;
        case 0x30d1fcu: goto label_30d1fc;
        case 0x30d200u: goto label_30d200;
        case 0x30d204u: goto label_30d204;
        case 0x30d208u: goto label_30d208;
        case 0x30d20cu: goto label_30d20c;
        case 0x30d210u: goto label_30d210;
        case 0x30d214u: goto label_30d214;
        case 0x30d218u: goto label_30d218;
        case 0x30d21cu: goto label_30d21c;
        case 0x30d220u: goto label_30d220;
        case 0x30d224u: goto label_30d224;
        case 0x30d228u: goto label_30d228;
        case 0x30d22cu: goto label_30d22c;
        case 0x30d230u: goto label_30d230;
        case 0x30d234u: goto label_30d234;
        case 0x30d238u: goto label_30d238;
        case 0x30d23cu: goto label_30d23c;
        case 0x30d240u: goto label_30d240;
        case 0x30d244u: goto label_30d244;
        case 0x30d248u: goto label_30d248;
        case 0x30d24cu: goto label_30d24c;
        case 0x30d250u: goto label_30d250;
        case 0x30d254u: goto label_30d254;
        case 0x30d258u: goto label_30d258;
        case 0x30d25cu: goto label_30d25c;
        case 0x30d260u: goto label_30d260;
        case 0x30d264u: goto label_30d264;
        case 0x30d268u: goto label_30d268;
        case 0x30d26cu: goto label_30d26c;
        case 0x30d270u: goto label_30d270;
        case 0x30d274u: goto label_30d274;
        case 0x30d278u: goto label_30d278;
        case 0x30d27cu: goto label_30d27c;
        case 0x30d280u: goto label_30d280;
        case 0x30d284u: goto label_30d284;
        case 0x30d288u: goto label_30d288;
        case 0x30d28cu: goto label_30d28c;
        case 0x30d290u: goto label_30d290;
        case 0x30d294u: goto label_30d294;
        case 0x30d298u: goto label_30d298;
        case 0x30d29cu: goto label_30d29c;
        case 0x30d2a0u: goto label_30d2a0;
        case 0x30d2a4u: goto label_30d2a4;
        case 0x30d2a8u: goto label_30d2a8;
        case 0x30d2acu: goto label_30d2ac;
        case 0x30d2b0u: goto label_30d2b0;
        case 0x30d2b4u: goto label_30d2b4;
        case 0x30d2b8u: goto label_30d2b8;
        case 0x30d2bcu: goto label_30d2bc;
        case 0x30d2c0u: goto label_30d2c0;
        case 0x30d2c4u: goto label_30d2c4;
        case 0x30d2c8u: goto label_30d2c8;
        case 0x30d2ccu: goto label_30d2cc;
        case 0x30d2d0u: goto label_30d2d0;
        case 0x30d2d4u: goto label_30d2d4;
        case 0x30d2d8u: goto label_30d2d8;
        case 0x30d2dcu: goto label_30d2dc;
        case 0x30d2e0u: goto label_30d2e0;
        case 0x30d2e4u: goto label_30d2e4;
        case 0x30d2e8u: goto label_30d2e8;
        case 0x30d2ecu: goto label_30d2ec;
        case 0x30d2f0u: goto label_30d2f0;
        case 0x30d2f4u: goto label_30d2f4;
        case 0x30d2f8u: goto label_30d2f8;
        case 0x30d2fcu: goto label_30d2fc;
        case 0x30d300u: goto label_30d300;
        case 0x30d304u: goto label_30d304;
        case 0x30d308u: goto label_30d308;
        case 0x30d30cu: goto label_30d30c;
        case 0x30d310u: goto label_30d310;
        case 0x30d314u: goto label_30d314;
        case 0x30d318u: goto label_30d318;
        case 0x30d31cu: goto label_30d31c;
        case 0x30d320u: goto label_30d320;
        case 0x30d324u: goto label_30d324;
        case 0x30d328u: goto label_30d328;
        case 0x30d32cu: goto label_30d32c;
        case 0x30d330u: goto label_30d330;
        case 0x30d334u: goto label_30d334;
        case 0x30d338u: goto label_30d338;
        case 0x30d33cu: goto label_30d33c;
        case 0x30d340u: goto label_30d340;
        case 0x30d344u: goto label_30d344;
        case 0x30d348u: goto label_30d348;
        case 0x30d34cu: goto label_30d34c;
        case 0x30d350u: goto label_30d350;
        case 0x30d354u: goto label_30d354;
        case 0x30d358u: goto label_30d358;
        case 0x30d35cu: goto label_30d35c;
        case 0x30d360u: goto label_30d360;
        case 0x30d364u: goto label_30d364;
        case 0x30d368u: goto label_30d368;
        case 0x30d36cu: goto label_30d36c;
        case 0x30d370u: goto label_30d370;
        case 0x30d374u: goto label_30d374;
        case 0x30d378u: goto label_30d378;
        case 0x30d37cu: goto label_30d37c;
        case 0x30d380u: goto label_30d380;
        case 0x30d384u: goto label_30d384;
        case 0x30d388u: goto label_30d388;
        case 0x30d38cu: goto label_30d38c;
        case 0x30d390u: goto label_30d390;
        case 0x30d394u: goto label_30d394;
        case 0x30d398u: goto label_30d398;
        case 0x30d39cu: goto label_30d39c;
        case 0x30d3a0u: goto label_30d3a0;
        case 0x30d3a4u: goto label_30d3a4;
        case 0x30d3a8u: goto label_30d3a8;
        case 0x30d3acu: goto label_30d3ac;
        case 0x30d3b0u: goto label_30d3b0;
        case 0x30d3b4u: goto label_30d3b4;
        case 0x30d3b8u: goto label_30d3b8;
        case 0x30d3bcu: goto label_30d3bc;
        case 0x30d3c0u: goto label_30d3c0;
        case 0x30d3c4u: goto label_30d3c4;
        case 0x30d3c8u: goto label_30d3c8;
        case 0x30d3ccu: goto label_30d3cc;
        case 0x30d3d0u: goto label_30d3d0;
        case 0x30d3d4u: goto label_30d3d4;
        case 0x30d3d8u: goto label_30d3d8;
        case 0x30d3dcu: goto label_30d3dc;
        case 0x30d3e0u: goto label_30d3e0;
        case 0x30d3e4u: goto label_30d3e4;
        case 0x30d3e8u: goto label_30d3e8;
        case 0x30d3ecu: goto label_30d3ec;
        case 0x30d3f0u: goto label_30d3f0;
        case 0x30d3f4u: goto label_30d3f4;
        case 0x30d3f8u: goto label_30d3f8;
        case 0x30d3fcu: goto label_30d3fc;
        case 0x30d400u: goto label_30d400;
        case 0x30d404u: goto label_30d404;
        case 0x30d408u: goto label_30d408;
        case 0x30d40cu: goto label_30d40c;
        case 0x30d410u: goto label_30d410;
        case 0x30d414u: goto label_30d414;
        case 0x30d418u: goto label_30d418;
        case 0x30d41cu: goto label_30d41c;
        case 0x30d420u: goto label_30d420;
        case 0x30d424u: goto label_30d424;
        case 0x30d428u: goto label_30d428;
        case 0x30d42cu: goto label_30d42c;
        case 0x30d430u: goto label_30d430;
        case 0x30d434u: goto label_30d434;
        case 0x30d438u: goto label_30d438;
        case 0x30d43cu: goto label_30d43c;
        default: break;
    }

    ctx->pc = 0x30cea0u;

label_30cea0:
    // 0x30cea0: 0x27bdf780  addiu       $sp, $sp, -0x880
    ctx->pc = 0x30cea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965120));
label_30cea4:
    // 0x30cea4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x30cea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_30cea8:
    // 0x30cea8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x30cea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_30ceac:
    // 0x30ceac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x30ceacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_30ceb0:
    // 0x30ceb0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30ceb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_30ceb4:
    // 0x30ceb4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30ceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_30ceb8:
    // 0x30ceb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30ceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_30cebc:
    // 0x30cebc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30cebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30cec0:
    // 0x30cec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30cec4:
    // 0x30cec4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30cec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30cec8:
    // 0x30cec8: 0x8c8500cc  lw          $a1, 0xCC($a0)
    ctx->pc = 0x30cec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_30cecc:
    // 0x30cecc: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x30ceccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_30ced0:
    // 0x30ced0: 0x8cb40008  lw          $s4, 0x8($a1)
    ctx->pc = 0x30ced0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_30ced4:
    // 0x30ced4: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x30ced4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_30ced8:
    // 0x30ced8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_30cedc:
    if (ctx->pc == 0x30CEDCu) {
        ctx->pc = 0x30CEDCu;
            // 0x30cedc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30CEE0u;
        goto label_30cee0;
    }
    ctx->pc = 0x30CED8u;
    {
        const bool branch_taken_0x30ced8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CED8u;
            // 0x30cedc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ced8) {
            ctx->pc = 0x30CEF8u;
            goto label_30cef8;
        }
    }
    ctx->pc = 0x30CEE0u;
label_30cee0:
    // 0x30cee0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x30cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_30cee4:
    // 0x30cee4: 0x8ea40098  lw          $a0, 0x98($s5)
    ctx->pc = 0x30cee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
label_30cee8:
    // 0x30cee8: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x30cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_30ceec:
    // 0x30ceec: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x30ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_30cef0:
    // 0x30cef0: 0x54830147  bnel        $a0, $v1, . + 4 + (0x147 << 2)
label_30cef4:
    if (ctx->pc == 0x30CEF4u) {
        ctx->pc = 0x30CEF4u;
            // 0x30cef4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x30CEF8u;
        goto label_30cef8;
    }
    ctx->pc = 0x30CEF0u;
    {
        const bool branch_taken_0x30cef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30cef0) {
            ctx->pc = 0x30CEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CEF0u;
            // 0x30cef4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D410u;
            goto label_30d410;
        }
    }
    ctx->pc = 0x30CEF8u;
label_30cef8:
    // 0x30cef8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30cefc:
    // 0x30cefc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30cf00:
    // 0x30cf00: 0xc440f520  lwc1        $f0, -0xAE0($v0)
    ctx->pc = 0x30cf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30cf04:
    // 0x30cf04: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x30cf04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
label_30cf08:
    // 0x30cf08: 0xc462f524  lwc1        $f2, -0xADC($v1)
    ctx->pc = 0x30cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30cf0c:
    // 0x30cf0c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30cf10:
    // 0x30cf10: 0xc441f528  lwc1        $f1, -0xAD8($v0)
    ctx->pc = 0x30cf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30cf14:
    // 0x30cf14: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30cf18:
    // 0x30cf18: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x30cf18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_30cf1c:
    // 0x30cf1c: 0xc460f52c  lwc1        $f0, -0xAD4($v1)
    ctx->pc = 0x30cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30cf20:
    // 0x30cf20: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30cf24:
    // 0x30cf24: 0xc443f530  lwc1        $f3, -0xAD0($v0)
    ctx->pc = 0x30cf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30cf28:
    // 0x30cf28: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x30cf28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_30cf2c:
    // 0x30cf2c: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x30cf2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_30cf30:
    // 0x30cf30: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x30cf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_30cf34:
    // 0x30cf34: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30cf38:
    // 0x30cf38: 0x8ea300cc  lw          $v1, 0xCC($s5)
    ctx->pc = 0x30cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_30cf3c:
    // 0x30cf3c: 0xc442f534  lwc1        $f2, -0xACC($v0)
    ctx->pc = 0x30cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30cf40:
    // 0x30cf40: 0xc4640020  lwc1        $f4, 0x20($v1)
    ctx->pc = 0x30cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30cf44:
    // 0x30cf44: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30cf48:
    // 0x30cf48: 0xc441f538  lwc1        $f1, -0xAC8($v0)
    ctx->pc = 0x30cf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30cf4c:
    // 0x30cf4c: 0xe7a400c0  swc1        $f4, 0xC0($sp)
    ctx->pc = 0x30cf4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_30cf50:
    // 0x30cf50: 0xc4640024  lwc1        $f4, 0x24($v1)
    ctx->pc = 0x30cf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30cf54:
    // 0x30cf54: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30cf58:
    // 0x30cf58: 0xc440f53c  lwc1        $f0, -0xAC4($v0)
    ctx->pc = 0x30cf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30cf5c:
    // 0x30cf5c: 0xe7a400c4  swc1        $f4, 0xC4($sp)
    ctx->pc = 0x30cf5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_30cf60:
    // 0x30cf60: 0xc4640028  lwc1        $f4, 0x28($v1)
    ctx->pc = 0x30cf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30cf64:
    // 0x30cf64: 0xe7a400c8  swc1        $f4, 0xC8($sp)
    ctx->pc = 0x30cf64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_30cf68:
    // 0x30cf68: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x30cf68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_30cf6c:
    // 0x30cf6c: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x30cf6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_30cf70:
    // 0x30cf70: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x30cf70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_30cf74:
    // 0x30cf74: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x30cf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_30cf78:
    // 0x30cf78: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x30cf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30cf7c:
    // 0x30cf7c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x30cf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_30cf80:
    // 0x30cf80: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x30cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30cf84:
    // 0x30cf84: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x30cf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_30cf88:
    // 0x30cf88: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x30cf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30cf8c:
    // 0x30cf8c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x30cf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_30cf90:
    // 0x30cf90: 0x96a20064  lhu         $v0, 0x64($s5)
    ctx->pc = 0x30cf90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 100)));
label_30cf94:
    // 0x30cf94: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x30cf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_30cf98:
    // 0x30cf98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_30cf9c:
    if (ctx->pc == 0x30CF9Cu) {
        ctx->pc = 0x30CF9Cu;
            // 0x30cf9c: 0x2610bbb0  addiu       $s0, $s0, -0x4450 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949808));
        ctx->pc = 0x30CFA0u;
        goto label_30cfa0;
    }
    ctx->pc = 0x30CF98u;
    {
        const bool branch_taken_0x30cf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CF98u;
            // 0x30cf9c: 0x2610bbb0  addiu       $s0, $s0, -0x4450 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf98) {
            ctx->pc = 0x30CFC8u;
            goto label_30cfc8;
        }
    }
    ctx->pc = 0x30CFA0u;
label_30cfa0:
    // 0x30cfa0: 0x8ea200c0  lw          $v0, 0xC0($s5)
    ctx->pc = 0x30cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
label_30cfa4:
    // 0x30cfa4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30cfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30cfa8:
    // 0x30cfa8: 0xe6a000a0  swc1        $f0, 0xA0($s5)
    ctx->pc = 0x30cfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 160), bits); }
label_30cfac:
    // 0x30cfac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x30cfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30cfb0:
    // 0x30cfb0: 0xe6a000a4  swc1        $f0, 0xA4($s5)
    ctx->pc = 0x30cfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 164), bits); }
label_30cfb4:
    // 0x30cfb4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30cfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30cfb8:
    // 0x30cfb8: 0xe6a000a8  swc1        $f0, 0xA8($s5)
    ctx->pc = 0x30cfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 168), bits); }
label_30cfbc:
    // 0x30cfbc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x30cfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30cfc0:
    // 0x30cfc0: 0xe6a000ac  swc1        $f0, 0xAC($s5)
    ctx->pc = 0x30cfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 172), bits); }
label_30cfc4:
    // 0x30cfc4: 0x8eb000c8  lw          $s0, 0xC8($s5)
    ctx->pc = 0x30cfc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_30cfc8:
    // 0x30cfc8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x30cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_30cfcc:
    // 0x30cfcc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x30cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_30cfd0:
    // 0x30cfd0: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x30cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_30cfd4:
    // 0x30cfd4: 0xc6a300a0  lwc1        $f3, 0xA0($s5)
    ctx->pc = 0x30cfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30cfd8:
    // 0x30cfd8: 0xc6a200a4  lwc1        $f2, 0xA4($s5)
    ctx->pc = 0x30cfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30cfdc:
    // 0x30cfdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30cfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30cfe0:
    // 0x30cfe0: 0xc6a100a8  lwc1        $f1, 0xA8($s5)
    ctx->pc = 0x30cfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30cfe4:
    // 0x30cfe4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x30cfe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30cfe8:
    // 0x30cfe8: 0xc6a000ac  lwc1        $f0, 0xAC($s5)
    ctx->pc = 0x30cfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30cfec:
    // 0x30cfec: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x30cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_30cff0:
    // 0x30cff0: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x30cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_30cff4:
    // 0x30cff4: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x30cff4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_30cff8:
    // 0x30cff8: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x30cff8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_30cffc:
    // 0x30cffc: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x30cffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_30d000:
    // 0x30d000: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x30d000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_30d004:
    // 0x30d004: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x30d004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_30d008:
    // 0x30d008: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30d008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_30d00c:
    // 0x30d00c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30d010:
    // 0x30d010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30d014:
    // 0x30d014: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30d014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30d018:
    // 0x30d018: 0xc04ccc4  jal         func_133310
label_30d01c:
    if (ctx->pc == 0x30D01Cu) {
        ctx->pc = 0x30D01Cu;
            // 0x30d01c: 0x24570010  addiu       $s7, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x30D020u;
        goto label_30d020;
    }
    ctx->pc = 0x30D018u;
    SET_GPR_U32(ctx, 31, 0x30D020u);
    ctx->pc = 0x30D01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D018u;
            // 0x30d01c: 0x24570010  addiu       $s7, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D020u; }
        if (ctx->pc != 0x30D020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D020u; }
        if (ctx->pc != 0x30D020u) { return; }
    }
    ctx->pc = 0x30D020u;
label_30d020:
    // 0x30d020: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x30d020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_30d024:
    // 0x30d024: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30d024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30d028:
    // 0x30d028: 0xc04ccc4  jal         func_133310
label_30d02c:
    if (ctx->pc == 0x30D02Cu) {
        ctx->pc = 0x30D02Cu;
            // 0x30d02c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D030u;
        goto label_30d030;
    }
    ctx->pc = 0x30D028u;
    SET_GPR_U32(ctx, 31, 0x30D030u);
    ctx->pc = 0x30D02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D028u;
            // 0x30d02c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D030u; }
        if (ctx->pc != 0x30D030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D030u; }
        if (ctx->pc != 0x30D030u) { return; }
    }
    ctx->pc = 0x30D030u;
label_30d030:
    // 0x30d030: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x30d030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_30d034:
    // 0x30d034: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x30d034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_30d038:
    // 0x30d038: 0x8c88d130  lw          $t0, -0x2ED0($a0)
    ctx->pc = 0x30d038u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_30d03c:
    // 0x30d03c: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x30d03cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_30d040:
    // 0x30d040: 0x8c67d120  lw          $a3, -0x2EE0($v1)
    ctx->pc = 0x30d040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_30d044:
    // 0x30d044: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x30d044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_30d048:
    // 0x30d048: 0x24c63dd0  addiu       $a2, $a2, 0x3DD0
    ctx->pc = 0x30d048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15824));
label_30d04c:
    // 0x30d04c: 0x24a53dd4  addiu       $a1, $a1, 0x3DD4
    ctx->pc = 0x30d04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15828));
label_30d050:
    // 0x30d050: 0x8d0a0130  lw          $t2, 0x130($t0)
    ctx->pc = 0x30d050u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
label_30d054:
    // 0x30d054: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x30d054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_30d058:
    // 0x30d058: 0x24843dd8  addiu       $a0, $a0, 0x3DD8
    ctx->pc = 0x30d058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15832));
label_30d05c:
    // 0x30d05c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_30d060:
    // 0x30d060: 0x8ce80010  lw          $t0, 0x10($a3)
    ctx->pc = 0x30d060u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_30d064:
    // 0x30d064: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x30d064u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_30d068:
    // 0x30d068: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x30d068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_30d06c:
    // 0x30d06c: 0xa3900  sll         $a3, $t2, 4
    ctx->pc = 0x30d06cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_30d070:
    // 0x30d070: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x30d070u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_30d074:
    // 0x30d074: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x30d074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_30d078:
    // 0x30d078: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x30d078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_30d07c:
    // 0x30d07c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x30d07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_30d080:
    // 0x30d080: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x30d080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30d084:
    // 0x30d084: 0xc50301b0  lwc1        $f3, 0x1B0($t0)
    ctx->pc = 0x30d084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30d088:
    // 0x30d088: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x30d088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30d08c:
    // 0x30d08c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x30d08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d090:
    // 0x30d090: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x30d090u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_30d094:
    // 0x30d094: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x30d094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_30d098:
    // 0x30d098: 0xc50201b4  lwc1        $f2, 0x1B4($t0)
    ctx->pc = 0x30d098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30d09c:
    // 0x30d09c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30d09cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_30d0a0:
    // 0x30d0a0: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x30d0a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_30d0a4:
    // 0x30d0a4: 0xc50101b8  lwc1        $f1, 0x1B8($t0)
    ctx->pc = 0x30d0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30d0a8:
    // 0x30d0a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30d0a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_30d0ac:
    // 0x30d0ac: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x30d0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_30d0b0:
    // 0x30d0b0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x30d0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_30d0b4:
    // 0x30d0b4: 0x96a30064  lhu         $v1, 0x64($s5)
    ctx->pc = 0x30d0b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 100)));
label_30d0b8:
    // 0x30d0b8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x30d0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_30d0bc:
    // 0x30d0bc: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
label_30d0c0:
    if (ctx->pc == 0x30D0C0u) {
        ctx->pc = 0x30D0C4u;
        goto label_30d0c4;
    }
    ctx->pc = 0x30D0BCu;
    {
        const bool branch_taken_0x30d0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d0bc) {
            ctx->pc = 0x30D278u;
            goto label_30d278;
        }
    }
    ctx->pc = 0x30D0C4u;
label_30d0c4:
    // 0x30d0c4: 0x8ea300cc  lw          $v1, 0xCC($s5)
    ctx->pc = 0x30d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_30d0c8:
    // 0x30d0c8: 0x96a20064  lhu         $v0, 0x64($s5)
    ctx->pc = 0x30d0c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 100)));
label_30d0cc:
    // 0x30d0cc: 0x84760006  lh          $s6, 0x6($v1)
    ctx->pc = 0x30d0ccu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_30d0d0:
    // 0x30d0d0: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x30d0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_30d0d4:
    // 0x30d0d4: 0xa6a20064  sh          $v0, 0x64($s5)
    ctx->pc = 0x30d0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 100), (uint16_t)GPR_U32(ctx, 2));
label_30d0d8:
    // 0x30d0d8: 0x96a20064  lhu         $v0, 0x64($s5)
    ctx->pc = 0x30d0d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 100)));
label_30d0dc:
    // 0x30d0dc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x30d0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_30d0e0:
    // 0x30d0e0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_30d0e4:
    if (ctx->pc == 0x30D0E4u) {
        ctx->pc = 0x30D0E4u;
            // 0x30d0e4: 0x86b20066  lh          $s2, 0x66($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
        ctx->pc = 0x30D0E8u;
        goto label_30d0e8;
    }
    ctx->pc = 0x30D0E0u;
    {
        const bool branch_taken_0x30d0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d0e0) {
            ctx->pc = 0x30D0E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D0E0u;
            // 0x30d0e4: 0x86b20066  lh          $s2, 0x66($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D108u;
            goto label_30d108;
        }
    }
    ctx->pc = 0x30D0E8u;
label_30d0e8:
    // 0x30d0e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30d0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30d0ec:
    // 0x30d0ec: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x30d0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_30d0f0:
    // 0x30d0f0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x30d0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_30d0f4:
    // 0x30d0f4: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x30d0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_30d0f8:
    // 0x30d0f8: 0xc0c3cb8  jal         func_30F2E0
label_30d0fc:
    if (ctx->pc == 0x30D0FCu) {
        ctx->pc = 0x30D0FCu;
            // 0x30d0fc: 0x27a80090  addiu       $t0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x30D100u;
        goto label_30d100;
    }
    ctx->pc = 0x30D0F8u;
    SET_GPR_U32(ctx, 31, 0x30D100u);
    ctx->pc = 0x30D0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D0F8u;
            // 0x30d0fc: 0x27a80090  addiu       $t0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F2E0u;
    if (runtime->hasFunction(0x30F2E0u)) {
        auto targetFn = runtime->lookupFunction(0x30F2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D100u; }
        if (ctx->pc != 0x30D100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030F2E0_0x30f2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D100u; }
        if (ctx->pc != 0x30D100u) { return; }
    }
    ctx->pc = 0x30D100u;
label_30d100:
    // 0x30d100: 0x10000032  b           . + 4 + (0x32 << 2)
label_30d104:
    if (ctx->pc == 0x30D104u) {
        ctx->pc = 0x30D104u;
            // 0x30d104: 0x86a40066  lh          $a0, 0x66($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
        ctx->pc = 0x30D108u;
        goto label_30d108;
    }
    ctx->pc = 0x30D100u;
    {
        const bool branch_taken_0x30d100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D100u;
            // 0x30d104: 0x86a40066  lh          $a0, 0x66($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d100) {
            ctx->pc = 0x30D1CCu;
            goto label_30d1cc;
        }
    }
    ctx->pc = 0x30D108u;
label_30d108:
    // 0x30d108: 0x1a40001f  blez        $s2, . + 4 + (0x1F << 2)
label_30d10c:
    if (ctx->pc == 0x30D10Cu) {
        ctx->pc = 0x30D10Cu;
            // 0x30d10c: 0x26b300d8  addiu       $s3, $s5, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 216));
        ctx->pc = 0x30D110u;
        goto label_30d110;
    }
    ctx->pc = 0x30D108u;
    {
        const bool branch_taken_0x30d108 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x30D10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D108u;
            // 0x30d10c: 0x26b300d8  addiu       $s3, $s5, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d108) {
            ctx->pc = 0x30D188u;
            goto label_30d188;
        }
    }
    ctx->pc = 0x30D110u;
label_30d110:
    // 0x30d110: 0x128840  sll         $s1, $s2, 1
    ctx->pc = 0x30d110u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_30d114:
    // 0x30d114: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x30d114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_30d118:
    // 0x30d118: 0x2644ffff  addiu       $a0, $s2, -0x1
    ctx->pc = 0x30d118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_30d11c:
    // 0x30d11c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_30d120:
    // 0x30d120: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x30d120u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_30d124:
    // 0x30d124: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30d124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30d128:
    // 0x30d128: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x30d128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_30d12c:
    // 0x30d12c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x30d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30d130:
    // 0x30d130: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x30d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_30d134:
    // 0x30d134: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x30d134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_30d138:
    // 0x30d138: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30d138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30d13c:
    // 0x30d13c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x30d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_30d140:
    // 0x30d140: 0xc04cafc  jal         func_132BF0
label_30d144:
    if (ctx->pc == 0x30D144u) {
        ctx->pc = 0x30D144u;
            // 0x30d144: 0x244500d8  addiu       $a1, $v0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
        ctx->pc = 0x30D148u;
        goto label_30d148;
    }
    ctx->pc = 0x30D140u;
    SET_GPR_U32(ctx, 31, 0x30D148u);
    ctx->pc = 0x30D144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D140u;
            // 0x30d144: 0x244500d8  addiu       $a1, $v0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D148u; }
        if (ctx->pc != 0x30D148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D148u; }
        if (ctx->pc != 0x30D148u) { return; }
    }
    ctx->pc = 0x30D148u;
label_30d148:
    // 0x30d148: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x30d148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_30d14c:
    // 0x30d14c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x30d14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_30d150:
    // 0x30d150: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30d150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_30d154:
    // 0x30d154: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x30d154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_30d158:
    // 0x30d158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30d15c:
    // 0x30d15c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_30d160:
    // 0x30d160: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30d160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30d164:
    // 0x30d164: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30d164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30d168:
    // 0x30d168: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x30d168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_30d16c:
    // 0x30d16c: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x30d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_30d170:
    // 0x30d170: 0x244500d8  addiu       $a1, $v0, 0xD8
    ctx->pc = 0x30d170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
label_30d174:
    // 0x30d174: 0xc04cafc  jal         func_132BF0
label_30d178:
    if (ctx->pc == 0x30D178u) {
        ctx->pc = 0x30D178u;
            // 0x30d178: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x30D17Cu;
        goto label_30d17c;
    }
    ctx->pc = 0x30D174u;
    SET_GPR_U32(ctx, 31, 0x30D17Cu);
    ctx->pc = 0x30D178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D174u;
            // 0x30d178: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D17Cu; }
        if (ctx->pc != 0x30D17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D17Cu; }
        if (ctx->pc != 0x30D17Cu) { return; }
    }
    ctx->pc = 0x30D17Cu;
label_30d17c:
    // 0x30d17c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x30d17cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_30d180:
    // 0x30d180: 0x1e40ffe4  bgtz        $s2, . + 4 + (-0x1C << 2)
label_30d184:
    if (ctx->pc == 0x30D184u) {
        ctx->pc = 0x30D184u;
            // 0x30d184: 0x2631fffe  addiu       $s1, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->pc = 0x30D188u;
        goto label_30d188;
    }
    ctx->pc = 0x30D180u;
    {
        const bool branch_taken_0x30d180 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x30D184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D180u;
            // 0x30d184: 0x2631fffe  addiu       $s1, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d180) {
            ctx->pc = 0x30D114u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30d114;
        }
    }
    ctx->pc = 0x30D188u;
label_30d188:
    // 0x30d188: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30d188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30d18c:
    // 0x30d18c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x30d18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_30d190:
    // 0x30d190: 0xc04cafc  jal         func_132BF0
label_30d194:
    if (ctx->pc == 0x30D194u) {
        ctx->pc = 0x30D194u;
            // 0x30d194: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x30D198u;
        goto label_30d198;
    }
    ctx->pc = 0x30D190u;
    SET_GPR_U32(ctx, 31, 0x30D198u);
    ctx->pc = 0x30D194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D190u;
            // 0x30d194: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D198u; }
        if (ctx->pc != 0x30D198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D198u; }
        if (ctx->pc != 0x30D198u) { return; }
    }
    ctx->pc = 0x30D198u;
label_30d198:
    // 0x30d198: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x30d198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_30d19c:
    // 0x30d19c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x30d19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_30d1a0:
    // 0x30d1a0: 0xc04cafc  jal         func_132BF0
label_30d1a4:
    if (ctx->pc == 0x30D1A4u) {
        ctx->pc = 0x30D1A4u;
            // 0x30d1a4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x30D1A8u;
        goto label_30d1a8;
    }
    ctx->pc = 0x30D1A0u;
    SET_GPR_U32(ctx, 31, 0x30D1A8u);
    ctx->pc = 0x30D1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D1A0u;
            // 0x30d1a4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D1A8u; }
        if (ctx->pc != 0x30D1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D1A8u; }
        if (ctx->pc != 0x30D1A8u) { return; }
    }
    ctx->pc = 0x30D1A8u;
label_30d1a8:
    // 0x30d1a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30d1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30d1ac:
    // 0x30d1ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30d1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30d1b0:
    // 0x30d1b0: 0xc04cafc  jal         func_132BF0
label_30d1b4:
    if (ctx->pc == 0x30D1B4u) {
        ctx->pc = 0x30D1B4u;
            // 0x30d1b4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x30D1B8u;
        goto label_30d1b8;
    }
    ctx->pc = 0x30D1B0u;
    SET_GPR_U32(ctx, 31, 0x30D1B8u);
    ctx->pc = 0x30D1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D1B0u;
            // 0x30d1b4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D1B8u; }
        if (ctx->pc != 0x30D1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D1B8u; }
        if (ctx->pc != 0x30D1B8u) { return; }
    }
    ctx->pc = 0x30D1B8u;
label_30d1b8:
    // 0x30d1b8: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x30d1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_30d1bc:
    // 0x30d1bc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x30d1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_30d1c0:
    // 0x30d1c0: 0xc04cb8c  jal         func_132E30
label_30d1c4:
    if (ctx->pc == 0x30D1C4u) {
        ctx->pc = 0x30D1C4u;
            // 0x30d1c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D1C8u;
        goto label_30d1c8;
    }
    ctx->pc = 0x30D1C0u;
    SET_GPR_U32(ctx, 31, 0x30D1C8u);
    ctx->pc = 0x30D1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D1C0u;
            // 0x30d1c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D1C8u; }
        if (ctx->pc != 0x30D1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D1C8u; }
        if (ctx->pc != 0x30D1C8u) { return; }
    }
    ctx->pc = 0x30D1C8u;
label_30d1c8:
    // 0x30d1c8: 0x86a40066  lh          $a0, 0x66($s5)
    ctx->pc = 0x30d1c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
label_30d1cc:
    // 0x30d1cc: 0x161c3c  dsll32      $v1, $s6, 16
    ctx->pc = 0x30d1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 16));
label_30d1d0:
    // 0x30d1d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30d1d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_30d1d4:
    // 0x30d1d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30d1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_30d1d8:
    // 0x30d1d8: 0xa6a40066  sh          $a0, 0x66($s5)
    ctx->pc = 0x30d1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 102), (uint16_t)GPR_U32(ctx, 4));
label_30d1dc:
    // 0x30d1dc: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x30d1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_30d1e0:
    // 0x30d1e0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30d1e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_30d1e4:
    // 0x30d1e4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x30d1e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30d1e8:
    // 0x30d1e8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_30d1ec:
    if (ctx->pc == 0x30D1ECu) {
        ctx->pc = 0x30D1F0u;
        goto label_30d1f0;
    }
    ctx->pc = 0x30D1E8u;
    {
        const bool branch_taken_0x30d1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d1e8) {
            ctx->pc = 0x30D1F4u;
            goto label_30d1f4;
        }
    }
    ctx->pc = 0x30D1F0u;
label_30d1f0:
    // 0x30d1f0: 0xa6b60066  sh          $s6, 0x66($s5)
    ctx->pc = 0x30d1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 102), (uint16_t)GPR_U32(ctx, 22));
label_30d1f4:
    // 0x30d1f4: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x30d1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
label_30d1f8:
    // 0x30d1f8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x30d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_30d1fc:
    // 0x30d1fc: 0x8cc6d120  lw          $a2, -0x2EE0($a2)
    ctx->pc = 0x30d1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955296)));
label_30d200:
    // 0x30d200: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x30d200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_30d204:
    // 0x30d204: 0x8ca58a08  lw          $a1, -0x75F8($a1)
    ctx->pc = 0x30d204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937096)));
label_30d208:
    // 0x30d208: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30d208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d20c:
    // 0x30d20c: 0x24633dd0  addiu       $v1, $v1, 0x3DD0
    ctx->pc = 0x30d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15824));
label_30d210:
    // 0x30d210: 0x24c90010  addiu       $t1, $a2, 0x10
    ctx->pc = 0x30d210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_30d214:
    // 0x30d214: 0x24a8007a  addiu       $t0, $a1, 0x7A
    ctx->pc = 0x30d214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 122));
label_30d218:
    // 0x30d218: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x30d218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_30d21c:
    // 0x30d21c: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x30d21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_30d220:
    // 0x30d220: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x30d220u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30d224:
    // 0x30d224: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30d224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_30d228:
    // 0x30d228: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x30d228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_30d22c:
    // 0x30d22c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x30d22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30d230:
    // 0x30d230: 0xc4a001b0  lwc1        $f0, 0x1B0($a1)
    ctx->pc = 0x30d230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d234:
    // 0x30d234: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30d234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_30d238:
    // 0x30d238: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x30d238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_30d23c:
    // 0x30d23c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x30d23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_30d240:
    // 0x30d240: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x30d240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30d244:
    // 0x30d244: 0xc4a001b4  lwc1        $f0, 0x1B4($a1)
    ctx->pc = 0x30d244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d248:
    // 0x30d248: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x30d248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_30d24c:
    // 0x30d24c: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x30d24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_30d250:
    // 0x30d250: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x30d250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_30d254:
    // 0x30d254: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x30d254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30d258:
    // 0x30d258: 0xc4a001b8  lwc1        $f0, 0x1B8($a1)
    ctx->pc = 0x30d258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d25c:
    // 0x30d25c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x30d25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_30d260:
    // 0x30d260: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x30d260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_30d264:
    // 0x30d264: 0x81050000  lb          $a1, 0x0($t0)
    ctx->pc = 0x30d264u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_30d268:
    // 0x30d268: 0x85282a  slt         $a1, $a0, $a1
    ctx->pc = 0x30d268u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_30d26c:
    // 0x30d26c: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
label_30d270:
    if (ctx->pc == 0x30D270u) {
        ctx->pc = 0x30D270u;
            // 0x30d270: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x30D274u;
        goto label_30d274;
    }
    ctx->pc = 0x30D26Cu;
    {
        const bool branch_taken_0x30d26c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D26Cu;
            // 0x30d270: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d26c) {
            ctx->pc = 0x30D21Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30d21c;
        }
    }
    ctx->pc = 0x30D274u;
label_30d274:
    // 0x30d274: 0x0  nop
    ctx->pc = 0x30d274u;
    // NOP
label_30d278:
    // 0x30d278: 0x86a30066  lh          $v1, 0x66($s5)
    ctx->pc = 0x30d278u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
label_30d27c:
    // 0x30d27c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x30d27cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_30d280:
    // 0x30d280: 0x14200062  bnez        $at, . + 4 + (0x62 << 2)
label_30d284:
    if (ctx->pc == 0x30D284u) {
        ctx->pc = 0x30D288u;
        goto label_30d288;
    }
    ctx->pc = 0x30D280u;
    {
        const bool branch_taken_0x30d280 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d280) {
            ctx->pc = 0x30D40Cu;
            goto label_30d40c;
        }
    }
    ctx->pc = 0x30D288u;
label_30d288:
    // 0x30d288: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x30d288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_30d28c:
    // 0x30d28c: 0xc04cc04  jal         func_133010
label_30d290:
    if (ctx->pc == 0x30D290u) {
        ctx->pc = 0x30D290u;
            // 0x30d290: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x30D294u;
        goto label_30d294;
    }
    ctx->pc = 0x30D28Cu;
    SET_GPR_U32(ctx, 31, 0x30D294u);
    ctx->pc = 0x30D290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D28Cu;
            // 0x30d290: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D294u; }
        if (ctx->pc != 0x30D294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D294u; }
        if (ctx->pc != 0x30D294u) { return; }
    }
    ctx->pc = 0x30D294u;
label_30d294:
    // 0x30d294: 0x96a20064  lhu         $v0, 0x64($s5)
    ctx->pc = 0x30d294u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 100)));
label_30d298:
    // 0x30d298: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x30d298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_30d29c:
    // 0x30d29c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_30d2a0:
    if (ctx->pc == 0x30D2A0u) {
        ctx->pc = 0x30D2A0u;
            // 0x30d2a0: 0x8ea200cc  lw          $v0, 0xCC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
        ctx->pc = 0x30D2A4u;
        goto label_30d2a4;
    }
    ctx->pc = 0x30D29Cu;
    {
        const bool branch_taken_0x30d29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d29c) {
            ctx->pc = 0x30D2A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D29Cu;
            // 0x30d2a0: 0x8ea200cc  lw          $v0, 0xCC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D2D8u;
            goto label_30d2d8;
        }
    }
    ctx->pc = 0x30D2A4u;
label_30d2a4:
    // 0x30d2a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x30d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30d2a8:
    // 0x30d2a8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x30d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_30d2ac:
    // 0x30d2ac: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x30d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_30d2b0:
    // 0x30d2b0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x30d2b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_30d2b4:
    // 0x30d2b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_30d2b8:
    if (ctx->pc == 0x30D2B8u) {
        ctx->pc = 0x30D2BCu;
        goto label_30d2bc;
    }
    ctx->pc = 0x30D2B4u;
    {
        const bool branch_taken_0x30d2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d2b4) {
            ctx->pc = 0x30D2D4u;
            goto label_30d2d4;
        }
    }
    ctx->pc = 0x30D2BCu;
label_30d2bc:
    // 0x30d2bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x30d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_30d2c0:
    // 0x30d2c0: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x30d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_30d2c4:
    // 0x30d2c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x30d2c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30d2c8:
    // 0x30d2c8: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x30d2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_30d2cc:
    // 0x30d2cc: 0x320f809  jalr        $t9
label_30d2d0:
    if (ctx->pc == 0x30D2D0u) {
        ctx->pc = 0x30D2D0u;
            // 0x30d2d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30D2D4u;
        goto label_30d2d4;
    }
    ctx->pc = 0x30D2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30D2D4u);
        ctx->pc = 0x30D2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D2CCu;
            // 0x30d2d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30D2D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30D2D4u; }
            if (ctx->pc != 0x30D2D4u) { return; }
        }
        }
    }
    ctx->pc = 0x30D2D4u;
label_30d2d4:
    // 0x30d2d4: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x30d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_30d2d8:
    // 0x30d2d8: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x30d2d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_30d2dc:
    // 0x30d2dc: 0xc0506ac  jal         func_141AB0
label_30d2e0:
    if (ctx->pc == 0x30D2E0u) {
        ctx->pc = 0x30D2E0u;
            // 0x30d2e0: 0x8ea404b0  lw          $a0, 0x4B0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1200)));
        ctx->pc = 0x30D2E4u;
        goto label_30d2e4;
    }
    ctx->pc = 0x30D2DCu;
    SET_GPR_U32(ctx, 31, 0x30D2E4u);
    ctx->pc = 0x30D2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D2DCu;
            // 0x30d2e0: 0x8ea404b0  lw          $a0, 0x4B0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D2E4u; }
        if (ctx->pc != 0x30D2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D2E4u; }
        if (ctx->pc != 0x30D2E4u) { return; }
    }
    ctx->pc = 0x30D2E4u;
label_30d2e4:
    // 0x30d2e4: 0xc05068c  jal         func_141A30
label_30d2e8:
    if (ctx->pc == 0x30D2E8u) {
        ctx->pc = 0x30D2E8u;
            // 0x30d2e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D2ECu;
        goto label_30d2ec;
    }
    ctx->pc = 0x30D2E4u;
    SET_GPR_U32(ctx, 31, 0x30D2ECu);
    ctx->pc = 0x30D2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D2E4u;
            // 0x30d2e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D2ECu; }
        if (ctx->pc != 0x30D2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D2ECu; }
        if (ctx->pc != 0x30D2ECu) { return; }
    }
    ctx->pc = 0x30D2ECu;
label_30d2ec:
    // 0x30d2ec: 0x96a20064  lhu         $v0, 0x64($s5)
    ctx->pc = 0x30d2ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 100)));
label_30d2f0:
    // 0x30d2f0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x30d2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_30d2f4:
    // 0x30d2f4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_30d2f8:
    if (ctx->pc == 0x30D2F8u) {
        ctx->pc = 0x30D2F8u;
            // 0x30d2f8: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D2FCu;
        goto label_30d2fc;
    }
    ctx->pc = 0x30D2F4u;
    {
        const bool branch_taken_0x30d2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d2f4) {
            ctx->pc = 0x30D2F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D2F4u;
            // 0x30d2f8: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D348u;
            goto label_30d348;
        }
    }
    ctx->pc = 0x30D2FCu;
label_30d2fc:
    // 0x30d2fc: 0x8ea200c4  lw          $v0, 0xC4($s5)
    ctx->pc = 0x30d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
label_30d300:
    // 0x30d300: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x30d300u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30d304:
    // 0x30d304: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30d304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30d308:
    // 0x30d308: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x30d308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_30d30c:
    // 0x30d30c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x30d30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_30d310:
    // 0x30d310: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x30d310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_30d314:
    // 0x30d314: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30d314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d318:
    // 0x30d318: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x30d318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_30d31c:
    // 0x30d31c: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x30d31cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_30d320:
    // 0x30d320: 0xe6a000b0  swc1        $f0, 0xB0($s5)
    ctx->pc = 0x30d320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 176), bits); }
label_30d324:
    // 0x30d324: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x30d324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d328:
    // 0x30d328: 0xe6a000b4  swc1        $f0, 0xB4($s5)
    ctx->pc = 0x30d328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 180), bits); }
label_30d32c:
    // 0x30d32c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30d32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d330:
    // 0x30d330: 0xe6a000b8  swc1        $f0, 0xB8($s5)
    ctx->pc = 0x30d330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 184), bits); }
label_30d334:
    // 0x30d334: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x30d334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d338:
    // 0x30d338: 0xc0c3a58  jal         func_30E960
label_30d33c:
    if (ctx->pc == 0x30D33Cu) {
        ctx->pc = 0x30D33Cu;
            // 0x30d33c: 0xe6a000bc  swc1        $f0, 0xBC($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 188), bits); }
        ctx->pc = 0x30D340u;
        goto label_30d340;
    }
    ctx->pc = 0x30D338u;
    SET_GPR_U32(ctx, 31, 0x30D340u);
    ctx->pc = 0x30D33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D338u;
            // 0x30d33c: 0xe6a000bc  swc1        $f0, 0xBC($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 188), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E960u;
    if (runtime->hasFunction(0x30E960u)) {
        auto targetFn = runtime->lookupFunction(0x30E960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D340u; }
        if (ctx->pc != 0x30D340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030E960_0x30e960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D340u; }
        if (ctx->pc != 0x30D340u) { return; }
    }
    ctx->pc = 0x30D340u;
label_30d340:
    // 0x30d340: 0x10000009  b           . + 4 + (0x9 << 2)
label_30d344:
    if (ctx->pc == 0x30D344u) {
        ctx->pc = 0x30D344u;
            // 0x30d344: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D348u;
        goto label_30d348;
    }
    ctx->pc = 0x30D340u;
    {
        const bool branch_taken_0x30d340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D340u;
            // 0x30d344: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d340) {
            ctx->pc = 0x30D368u;
            goto label_30d368;
        }
    }
    ctx->pc = 0x30D348u;
label_30d348:
    // 0x30d348: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30d348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30d34c:
    // 0x30d34c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x30d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_30d350:
    // 0x30d350: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x30d350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_30d354:
    // 0x30d354: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x30d354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_30d358:
    // 0x30d358: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x30d358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_30d35c:
    // 0x30d35c: 0xc0c3aec  jal         func_30EBB0
label_30d360:
    if (ctx->pc == 0x30D360u) {
        ctx->pc = 0x30D360u;
            // 0x30d360: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x30D364u;
        goto label_30d364;
    }
    ctx->pc = 0x30D35Cu;
    SET_GPR_U32(ctx, 31, 0x30D364u);
    ctx->pc = 0x30D360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D35Cu;
            // 0x30d360: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30EBB0u;
    if (runtime->hasFunction(0x30EBB0u)) {
        auto targetFn = runtime->lookupFunction(0x30EBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D364u; }
        if (ctx->pc != 0x30D364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030EBB0_0x30ebb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D364u; }
        if (ctx->pc != 0x30D364u) { return; }
    }
    ctx->pc = 0x30D364u;
label_30d364:
    // 0x30d364: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x30d364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30d368:
    // 0x30d368: 0xc0508b0  jal         func_1422C0
label_30d36c:
    if (ctx->pc == 0x30D36Cu) {
        ctx->pc = 0x30D370u;
        goto label_30d370;
    }
    ctx->pc = 0x30D368u;
    SET_GPR_U32(ctx, 31, 0x30D370u);
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D370u; }
        if (ctx->pc != 0x30D370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D370u; }
        if (ctx->pc != 0x30D370u) { return; }
    }
    ctx->pc = 0x30D370u;
label_30d370:
    // 0x30d370: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x30d370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_30d374:
    // 0x30d374: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x30d374u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_30d378:
    // 0x30d378: 0xc0506ac  jal         func_141AB0
label_30d37c:
    if (ctx->pc == 0x30D37Cu) {
        ctx->pc = 0x30D37Cu;
            // 0x30d37c: 0x8ea404b0  lw          $a0, 0x4B0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1200)));
        ctx->pc = 0x30D380u;
        goto label_30d380;
    }
    ctx->pc = 0x30D378u;
    SET_GPR_U32(ctx, 31, 0x30D380u);
    ctx->pc = 0x30D37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D378u;
            // 0x30d37c: 0x8ea404b0  lw          $a0, 0x4B0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D380u; }
        if (ctx->pc != 0x30D380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D380u; }
        if (ctx->pc != 0x30D380u) { return; }
    }
    ctx->pc = 0x30D380u;
label_30d380:
    // 0x30d380: 0xc05068c  jal         func_141A30
label_30d384:
    if (ctx->pc == 0x30D384u) {
        ctx->pc = 0x30D384u;
            // 0x30d384: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D388u;
        goto label_30d388;
    }
    ctx->pc = 0x30D380u;
    SET_GPR_U32(ctx, 31, 0x30D388u);
    ctx->pc = 0x30D384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D380u;
            // 0x30d384: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D388u; }
        if (ctx->pc != 0x30D388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D388u; }
        if (ctx->pc != 0x30D388u) { return; }
    }
    ctx->pc = 0x30D388u;
label_30d388:
    // 0x30d388: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x30d388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30d38c:
    // 0x30d38c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30d38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d390:
    // 0x30d390: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30d390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d394:
    // 0x30d394: 0xc0508b4  jal         func_1422D0
label_30d398:
    if (ctx->pc == 0x30D398u) {
        ctx->pc = 0x30D398u;
            // 0x30d398: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D39Cu;
        goto label_30d39c;
    }
    ctx->pc = 0x30D394u;
    SET_GPR_U32(ctx, 31, 0x30D39Cu);
    ctx->pc = 0x30D398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D394u;
            // 0x30d398: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D39Cu; }
        if (ctx->pc != 0x30D39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D39Cu; }
        if (ctx->pc != 0x30D39Cu) { return; }
    }
    ctx->pc = 0x30D39Cu;
label_30d39c:
    // 0x30d39c: 0x86a20066  lh          $v0, 0x66($s5)
    ctx->pc = 0x30d39cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
label_30d3a0:
    // 0x30d3a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d3a4:
    // 0x30d3a4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x30d3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_30d3a8:
    // 0x30d3a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30d3ac:
    // 0x30d3ac: 0xc050a08  jal         func_142820
label_30d3b0:
    if (ctx->pc == 0x30D3B0u) {
        ctx->pc = 0x30D3B0u;
            // 0x30d3b0: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x30D3B4u;
        goto label_30d3b4;
    }
    ctx->pc = 0x30D3ACu;
    SET_GPR_U32(ctx, 31, 0x30D3B4u);
    ctx->pc = 0x30D3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D3ACu;
            // 0x30d3b0: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D3B4u; }
        if (ctx->pc != 0x30D3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D3B4u; }
        if (ctx->pc != 0x30D3B4u) { return; }
    }
    ctx->pc = 0x30D3B4u;
label_30d3b4:
    // 0x30d3b4: 0xc050a88  jal         func_142A20
label_30d3b8:
    if (ctx->pc == 0x30D3B8u) {
        ctx->pc = 0x30D3BCu;
        goto label_30d3bc;
    }
    ctx->pc = 0x30D3B4u;
    SET_GPR_U32(ctx, 31, 0x30D3BCu);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D3BCu; }
        if (ctx->pc != 0x30D3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D3BCu; }
        if (ctx->pc != 0x30D3BCu) { return; }
    }
    ctx->pc = 0x30D3BCu;
label_30d3bc:
    // 0x30d3bc: 0xc05068c  jal         func_141A30
label_30d3c0:
    if (ctx->pc == 0x30D3C0u) {
        ctx->pc = 0x30D3C0u;
            // 0x30d3c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30D3C4u;
        goto label_30d3c4;
    }
    ctx->pc = 0x30D3BCu;
    SET_GPR_U32(ctx, 31, 0x30D3C4u);
    ctx->pc = 0x30D3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D3BCu;
            // 0x30d3c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D3C4u; }
        if (ctx->pc != 0x30D3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D3C4u; }
        if (ctx->pc != 0x30D3C4u) { return; }
    }
    ctx->pc = 0x30D3C4u;
label_30d3c4:
    // 0x30d3c4: 0xc05068c  jal         func_141A30
label_30d3c8:
    if (ctx->pc == 0x30D3C8u) {
        ctx->pc = 0x30D3C8u;
            // 0x30d3c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30D3CCu;
        goto label_30d3cc;
    }
    ctx->pc = 0x30D3C4u;
    SET_GPR_U32(ctx, 31, 0x30D3CCu);
    ctx->pc = 0x30D3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D3C4u;
            // 0x30d3c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D3CCu; }
        if (ctx->pc != 0x30D3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D3CCu; }
        if (ctx->pc != 0x30D3CCu) { return; }
    }
    ctx->pc = 0x30D3CCu;
label_30d3cc:
    // 0x30d3cc: 0x96a30064  lhu         $v1, 0x64($s5)
    ctx->pc = 0x30d3ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 100)));
label_30d3d0:
    // 0x30d3d0: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x30d3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_30d3d4:
    // 0x30d3d4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_30d3d8:
    if (ctx->pc == 0x30D3D8u) {
        ctx->pc = 0x30D3DCu;
        goto label_30d3dc;
    }
    ctx->pc = 0x30D3D4u;
    {
        const bool branch_taken_0x30d3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d3d4) {
            ctx->pc = 0x30D40Cu;
            goto label_30d40c;
        }
    }
    ctx->pc = 0x30D3DCu;
label_30d3dc:
    // 0x30d3dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x30d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_30d3e0:
    // 0x30d3e0: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x30d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_30d3e4:
    // 0x30d3e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x30d3e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30d3e8:
    // 0x30d3e8: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x30d3e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_30d3ec:
    // 0x30d3ec: 0x320f809  jalr        $t9
label_30d3f0:
    if (ctx->pc == 0x30D3F0u) {
        ctx->pc = 0x30D3F4u;
        goto label_30d3f4;
    }
    ctx->pc = 0x30D3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30D3F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x30D3F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30D3F4u; }
            if (ctx->pc != 0x30D3F4u) { return; }
        }
        }
    }
    ctx->pc = 0x30D3F4u;
label_30d3f4:
    // 0x30d3f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x30d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_30d3f8:
    // 0x30d3f8: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x30d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_30d3fc:
    // 0x30d3fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x30d3fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30d400:
    // 0x30d400: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x30d400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_30d404:
    // 0x30d404: 0x320f809  jalr        $t9
label_30d408:
    if (ctx->pc == 0x30D408u) {
        ctx->pc = 0x30D408u;
            // 0x30d408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D40Cu;
        goto label_30d40c;
    }
    ctx->pc = 0x30D404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30D40Cu);
        ctx->pc = 0x30D408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D404u;
            // 0x30d408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30D40Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30D40Cu; }
            if (ctx->pc != 0x30D40Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30D40Cu;
label_30d40c:
    // 0x30d40c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x30d40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_30d410:
    // 0x30d410: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x30d410u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30d414:
    // 0x30d414: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30d414u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30d418:
    // 0x30d418: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30d418u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30d41c:
    // 0x30d41c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30d41cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30d420:
    // 0x30d420: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30d420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30d424:
    // 0x30d424: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30d424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30d428:
    // 0x30d428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30d428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30d42c:
    // 0x30d42c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30d430:
    // 0x30d430: 0x3e00008  jr          $ra
label_30d434:
    if (ctx->pc == 0x30D434u) {
        ctx->pc = 0x30D434u;
            // 0x30d434: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->pc = 0x30D438u;
        goto label_30d438;
    }
    ctx->pc = 0x30D430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D430u;
            // 0x30d434: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30D438u;
label_30d438:
    // 0x30d438: 0x0  nop
    ctx->pc = 0x30d438u;
    // NOP
label_30d43c:
    // 0x30d43c: 0x0  nop
    ctx->pc = 0x30d43cu;
    // NOP
}
