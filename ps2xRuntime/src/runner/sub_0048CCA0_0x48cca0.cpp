#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048CCA0
// Address: 0x48cca0 - 0x48d2e0
void sub_0048CCA0_0x48cca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CCA0_0x48cca0");
#endif

    switch (ctx->pc) {
        case 0x48cca0u: goto label_48cca0;
        case 0x48cca4u: goto label_48cca4;
        case 0x48cca8u: goto label_48cca8;
        case 0x48ccacu: goto label_48ccac;
        case 0x48ccb0u: goto label_48ccb0;
        case 0x48ccb4u: goto label_48ccb4;
        case 0x48ccb8u: goto label_48ccb8;
        case 0x48ccbcu: goto label_48ccbc;
        case 0x48ccc0u: goto label_48ccc0;
        case 0x48ccc4u: goto label_48ccc4;
        case 0x48ccc8u: goto label_48ccc8;
        case 0x48ccccu: goto label_48cccc;
        case 0x48ccd0u: goto label_48ccd0;
        case 0x48ccd4u: goto label_48ccd4;
        case 0x48ccd8u: goto label_48ccd8;
        case 0x48ccdcu: goto label_48ccdc;
        case 0x48cce0u: goto label_48cce0;
        case 0x48cce4u: goto label_48cce4;
        case 0x48cce8u: goto label_48cce8;
        case 0x48ccecu: goto label_48ccec;
        case 0x48ccf0u: goto label_48ccf0;
        case 0x48ccf4u: goto label_48ccf4;
        case 0x48ccf8u: goto label_48ccf8;
        case 0x48ccfcu: goto label_48ccfc;
        case 0x48cd00u: goto label_48cd00;
        case 0x48cd04u: goto label_48cd04;
        case 0x48cd08u: goto label_48cd08;
        case 0x48cd0cu: goto label_48cd0c;
        case 0x48cd10u: goto label_48cd10;
        case 0x48cd14u: goto label_48cd14;
        case 0x48cd18u: goto label_48cd18;
        case 0x48cd1cu: goto label_48cd1c;
        case 0x48cd20u: goto label_48cd20;
        case 0x48cd24u: goto label_48cd24;
        case 0x48cd28u: goto label_48cd28;
        case 0x48cd2cu: goto label_48cd2c;
        case 0x48cd30u: goto label_48cd30;
        case 0x48cd34u: goto label_48cd34;
        case 0x48cd38u: goto label_48cd38;
        case 0x48cd3cu: goto label_48cd3c;
        case 0x48cd40u: goto label_48cd40;
        case 0x48cd44u: goto label_48cd44;
        case 0x48cd48u: goto label_48cd48;
        case 0x48cd4cu: goto label_48cd4c;
        case 0x48cd50u: goto label_48cd50;
        case 0x48cd54u: goto label_48cd54;
        case 0x48cd58u: goto label_48cd58;
        case 0x48cd5cu: goto label_48cd5c;
        case 0x48cd60u: goto label_48cd60;
        case 0x48cd64u: goto label_48cd64;
        case 0x48cd68u: goto label_48cd68;
        case 0x48cd6cu: goto label_48cd6c;
        case 0x48cd70u: goto label_48cd70;
        case 0x48cd74u: goto label_48cd74;
        case 0x48cd78u: goto label_48cd78;
        case 0x48cd7cu: goto label_48cd7c;
        case 0x48cd80u: goto label_48cd80;
        case 0x48cd84u: goto label_48cd84;
        case 0x48cd88u: goto label_48cd88;
        case 0x48cd8cu: goto label_48cd8c;
        case 0x48cd90u: goto label_48cd90;
        case 0x48cd94u: goto label_48cd94;
        case 0x48cd98u: goto label_48cd98;
        case 0x48cd9cu: goto label_48cd9c;
        case 0x48cda0u: goto label_48cda0;
        case 0x48cda4u: goto label_48cda4;
        case 0x48cda8u: goto label_48cda8;
        case 0x48cdacu: goto label_48cdac;
        case 0x48cdb0u: goto label_48cdb0;
        case 0x48cdb4u: goto label_48cdb4;
        case 0x48cdb8u: goto label_48cdb8;
        case 0x48cdbcu: goto label_48cdbc;
        case 0x48cdc0u: goto label_48cdc0;
        case 0x48cdc4u: goto label_48cdc4;
        case 0x48cdc8u: goto label_48cdc8;
        case 0x48cdccu: goto label_48cdcc;
        case 0x48cdd0u: goto label_48cdd0;
        case 0x48cdd4u: goto label_48cdd4;
        case 0x48cdd8u: goto label_48cdd8;
        case 0x48cddcu: goto label_48cddc;
        case 0x48cde0u: goto label_48cde0;
        case 0x48cde4u: goto label_48cde4;
        case 0x48cde8u: goto label_48cde8;
        case 0x48cdecu: goto label_48cdec;
        case 0x48cdf0u: goto label_48cdf0;
        case 0x48cdf4u: goto label_48cdf4;
        case 0x48cdf8u: goto label_48cdf8;
        case 0x48cdfcu: goto label_48cdfc;
        case 0x48ce00u: goto label_48ce00;
        case 0x48ce04u: goto label_48ce04;
        case 0x48ce08u: goto label_48ce08;
        case 0x48ce0cu: goto label_48ce0c;
        case 0x48ce10u: goto label_48ce10;
        case 0x48ce14u: goto label_48ce14;
        case 0x48ce18u: goto label_48ce18;
        case 0x48ce1cu: goto label_48ce1c;
        case 0x48ce20u: goto label_48ce20;
        case 0x48ce24u: goto label_48ce24;
        case 0x48ce28u: goto label_48ce28;
        case 0x48ce2cu: goto label_48ce2c;
        case 0x48ce30u: goto label_48ce30;
        case 0x48ce34u: goto label_48ce34;
        case 0x48ce38u: goto label_48ce38;
        case 0x48ce3cu: goto label_48ce3c;
        case 0x48ce40u: goto label_48ce40;
        case 0x48ce44u: goto label_48ce44;
        case 0x48ce48u: goto label_48ce48;
        case 0x48ce4cu: goto label_48ce4c;
        case 0x48ce50u: goto label_48ce50;
        case 0x48ce54u: goto label_48ce54;
        case 0x48ce58u: goto label_48ce58;
        case 0x48ce5cu: goto label_48ce5c;
        case 0x48ce60u: goto label_48ce60;
        case 0x48ce64u: goto label_48ce64;
        case 0x48ce68u: goto label_48ce68;
        case 0x48ce6cu: goto label_48ce6c;
        case 0x48ce70u: goto label_48ce70;
        case 0x48ce74u: goto label_48ce74;
        case 0x48ce78u: goto label_48ce78;
        case 0x48ce7cu: goto label_48ce7c;
        case 0x48ce80u: goto label_48ce80;
        case 0x48ce84u: goto label_48ce84;
        case 0x48ce88u: goto label_48ce88;
        case 0x48ce8cu: goto label_48ce8c;
        case 0x48ce90u: goto label_48ce90;
        case 0x48ce94u: goto label_48ce94;
        case 0x48ce98u: goto label_48ce98;
        case 0x48ce9cu: goto label_48ce9c;
        case 0x48cea0u: goto label_48cea0;
        case 0x48cea4u: goto label_48cea4;
        case 0x48cea8u: goto label_48cea8;
        case 0x48ceacu: goto label_48ceac;
        case 0x48ceb0u: goto label_48ceb0;
        case 0x48ceb4u: goto label_48ceb4;
        case 0x48ceb8u: goto label_48ceb8;
        case 0x48cebcu: goto label_48cebc;
        case 0x48cec0u: goto label_48cec0;
        case 0x48cec4u: goto label_48cec4;
        case 0x48cec8u: goto label_48cec8;
        case 0x48ceccu: goto label_48cecc;
        case 0x48ced0u: goto label_48ced0;
        case 0x48ced4u: goto label_48ced4;
        case 0x48ced8u: goto label_48ced8;
        case 0x48cedcu: goto label_48cedc;
        case 0x48cee0u: goto label_48cee0;
        case 0x48cee4u: goto label_48cee4;
        case 0x48cee8u: goto label_48cee8;
        case 0x48ceecu: goto label_48ceec;
        case 0x48cef0u: goto label_48cef0;
        case 0x48cef4u: goto label_48cef4;
        case 0x48cef8u: goto label_48cef8;
        case 0x48cefcu: goto label_48cefc;
        case 0x48cf00u: goto label_48cf00;
        case 0x48cf04u: goto label_48cf04;
        case 0x48cf08u: goto label_48cf08;
        case 0x48cf0cu: goto label_48cf0c;
        case 0x48cf10u: goto label_48cf10;
        case 0x48cf14u: goto label_48cf14;
        case 0x48cf18u: goto label_48cf18;
        case 0x48cf1cu: goto label_48cf1c;
        case 0x48cf20u: goto label_48cf20;
        case 0x48cf24u: goto label_48cf24;
        case 0x48cf28u: goto label_48cf28;
        case 0x48cf2cu: goto label_48cf2c;
        case 0x48cf30u: goto label_48cf30;
        case 0x48cf34u: goto label_48cf34;
        case 0x48cf38u: goto label_48cf38;
        case 0x48cf3cu: goto label_48cf3c;
        case 0x48cf40u: goto label_48cf40;
        case 0x48cf44u: goto label_48cf44;
        case 0x48cf48u: goto label_48cf48;
        case 0x48cf4cu: goto label_48cf4c;
        case 0x48cf50u: goto label_48cf50;
        case 0x48cf54u: goto label_48cf54;
        case 0x48cf58u: goto label_48cf58;
        case 0x48cf5cu: goto label_48cf5c;
        case 0x48cf60u: goto label_48cf60;
        case 0x48cf64u: goto label_48cf64;
        case 0x48cf68u: goto label_48cf68;
        case 0x48cf6cu: goto label_48cf6c;
        case 0x48cf70u: goto label_48cf70;
        case 0x48cf74u: goto label_48cf74;
        case 0x48cf78u: goto label_48cf78;
        case 0x48cf7cu: goto label_48cf7c;
        case 0x48cf80u: goto label_48cf80;
        case 0x48cf84u: goto label_48cf84;
        case 0x48cf88u: goto label_48cf88;
        case 0x48cf8cu: goto label_48cf8c;
        case 0x48cf90u: goto label_48cf90;
        case 0x48cf94u: goto label_48cf94;
        case 0x48cf98u: goto label_48cf98;
        case 0x48cf9cu: goto label_48cf9c;
        case 0x48cfa0u: goto label_48cfa0;
        case 0x48cfa4u: goto label_48cfa4;
        case 0x48cfa8u: goto label_48cfa8;
        case 0x48cfacu: goto label_48cfac;
        case 0x48cfb0u: goto label_48cfb0;
        case 0x48cfb4u: goto label_48cfb4;
        case 0x48cfb8u: goto label_48cfb8;
        case 0x48cfbcu: goto label_48cfbc;
        case 0x48cfc0u: goto label_48cfc0;
        case 0x48cfc4u: goto label_48cfc4;
        case 0x48cfc8u: goto label_48cfc8;
        case 0x48cfccu: goto label_48cfcc;
        case 0x48cfd0u: goto label_48cfd0;
        case 0x48cfd4u: goto label_48cfd4;
        case 0x48cfd8u: goto label_48cfd8;
        case 0x48cfdcu: goto label_48cfdc;
        case 0x48cfe0u: goto label_48cfe0;
        case 0x48cfe4u: goto label_48cfe4;
        case 0x48cfe8u: goto label_48cfe8;
        case 0x48cfecu: goto label_48cfec;
        case 0x48cff0u: goto label_48cff0;
        case 0x48cff4u: goto label_48cff4;
        case 0x48cff8u: goto label_48cff8;
        case 0x48cffcu: goto label_48cffc;
        case 0x48d000u: goto label_48d000;
        case 0x48d004u: goto label_48d004;
        case 0x48d008u: goto label_48d008;
        case 0x48d00cu: goto label_48d00c;
        case 0x48d010u: goto label_48d010;
        case 0x48d014u: goto label_48d014;
        case 0x48d018u: goto label_48d018;
        case 0x48d01cu: goto label_48d01c;
        case 0x48d020u: goto label_48d020;
        case 0x48d024u: goto label_48d024;
        case 0x48d028u: goto label_48d028;
        case 0x48d02cu: goto label_48d02c;
        case 0x48d030u: goto label_48d030;
        case 0x48d034u: goto label_48d034;
        case 0x48d038u: goto label_48d038;
        case 0x48d03cu: goto label_48d03c;
        case 0x48d040u: goto label_48d040;
        case 0x48d044u: goto label_48d044;
        case 0x48d048u: goto label_48d048;
        case 0x48d04cu: goto label_48d04c;
        case 0x48d050u: goto label_48d050;
        case 0x48d054u: goto label_48d054;
        case 0x48d058u: goto label_48d058;
        case 0x48d05cu: goto label_48d05c;
        case 0x48d060u: goto label_48d060;
        case 0x48d064u: goto label_48d064;
        case 0x48d068u: goto label_48d068;
        case 0x48d06cu: goto label_48d06c;
        case 0x48d070u: goto label_48d070;
        case 0x48d074u: goto label_48d074;
        case 0x48d078u: goto label_48d078;
        case 0x48d07cu: goto label_48d07c;
        case 0x48d080u: goto label_48d080;
        case 0x48d084u: goto label_48d084;
        case 0x48d088u: goto label_48d088;
        case 0x48d08cu: goto label_48d08c;
        case 0x48d090u: goto label_48d090;
        case 0x48d094u: goto label_48d094;
        case 0x48d098u: goto label_48d098;
        case 0x48d09cu: goto label_48d09c;
        case 0x48d0a0u: goto label_48d0a0;
        case 0x48d0a4u: goto label_48d0a4;
        case 0x48d0a8u: goto label_48d0a8;
        case 0x48d0acu: goto label_48d0ac;
        case 0x48d0b0u: goto label_48d0b0;
        case 0x48d0b4u: goto label_48d0b4;
        case 0x48d0b8u: goto label_48d0b8;
        case 0x48d0bcu: goto label_48d0bc;
        case 0x48d0c0u: goto label_48d0c0;
        case 0x48d0c4u: goto label_48d0c4;
        case 0x48d0c8u: goto label_48d0c8;
        case 0x48d0ccu: goto label_48d0cc;
        case 0x48d0d0u: goto label_48d0d0;
        case 0x48d0d4u: goto label_48d0d4;
        case 0x48d0d8u: goto label_48d0d8;
        case 0x48d0dcu: goto label_48d0dc;
        case 0x48d0e0u: goto label_48d0e0;
        case 0x48d0e4u: goto label_48d0e4;
        case 0x48d0e8u: goto label_48d0e8;
        case 0x48d0ecu: goto label_48d0ec;
        case 0x48d0f0u: goto label_48d0f0;
        case 0x48d0f4u: goto label_48d0f4;
        case 0x48d0f8u: goto label_48d0f8;
        case 0x48d0fcu: goto label_48d0fc;
        case 0x48d100u: goto label_48d100;
        case 0x48d104u: goto label_48d104;
        case 0x48d108u: goto label_48d108;
        case 0x48d10cu: goto label_48d10c;
        case 0x48d110u: goto label_48d110;
        case 0x48d114u: goto label_48d114;
        case 0x48d118u: goto label_48d118;
        case 0x48d11cu: goto label_48d11c;
        case 0x48d120u: goto label_48d120;
        case 0x48d124u: goto label_48d124;
        case 0x48d128u: goto label_48d128;
        case 0x48d12cu: goto label_48d12c;
        case 0x48d130u: goto label_48d130;
        case 0x48d134u: goto label_48d134;
        case 0x48d138u: goto label_48d138;
        case 0x48d13cu: goto label_48d13c;
        case 0x48d140u: goto label_48d140;
        case 0x48d144u: goto label_48d144;
        case 0x48d148u: goto label_48d148;
        case 0x48d14cu: goto label_48d14c;
        case 0x48d150u: goto label_48d150;
        case 0x48d154u: goto label_48d154;
        case 0x48d158u: goto label_48d158;
        case 0x48d15cu: goto label_48d15c;
        case 0x48d160u: goto label_48d160;
        case 0x48d164u: goto label_48d164;
        case 0x48d168u: goto label_48d168;
        case 0x48d16cu: goto label_48d16c;
        case 0x48d170u: goto label_48d170;
        case 0x48d174u: goto label_48d174;
        case 0x48d178u: goto label_48d178;
        case 0x48d17cu: goto label_48d17c;
        case 0x48d180u: goto label_48d180;
        case 0x48d184u: goto label_48d184;
        case 0x48d188u: goto label_48d188;
        case 0x48d18cu: goto label_48d18c;
        case 0x48d190u: goto label_48d190;
        case 0x48d194u: goto label_48d194;
        case 0x48d198u: goto label_48d198;
        case 0x48d19cu: goto label_48d19c;
        case 0x48d1a0u: goto label_48d1a0;
        case 0x48d1a4u: goto label_48d1a4;
        case 0x48d1a8u: goto label_48d1a8;
        case 0x48d1acu: goto label_48d1ac;
        case 0x48d1b0u: goto label_48d1b0;
        case 0x48d1b4u: goto label_48d1b4;
        case 0x48d1b8u: goto label_48d1b8;
        case 0x48d1bcu: goto label_48d1bc;
        case 0x48d1c0u: goto label_48d1c0;
        case 0x48d1c4u: goto label_48d1c4;
        case 0x48d1c8u: goto label_48d1c8;
        case 0x48d1ccu: goto label_48d1cc;
        case 0x48d1d0u: goto label_48d1d0;
        case 0x48d1d4u: goto label_48d1d4;
        case 0x48d1d8u: goto label_48d1d8;
        case 0x48d1dcu: goto label_48d1dc;
        case 0x48d1e0u: goto label_48d1e0;
        case 0x48d1e4u: goto label_48d1e4;
        case 0x48d1e8u: goto label_48d1e8;
        case 0x48d1ecu: goto label_48d1ec;
        case 0x48d1f0u: goto label_48d1f0;
        case 0x48d1f4u: goto label_48d1f4;
        case 0x48d1f8u: goto label_48d1f8;
        case 0x48d1fcu: goto label_48d1fc;
        case 0x48d200u: goto label_48d200;
        case 0x48d204u: goto label_48d204;
        case 0x48d208u: goto label_48d208;
        case 0x48d20cu: goto label_48d20c;
        case 0x48d210u: goto label_48d210;
        case 0x48d214u: goto label_48d214;
        case 0x48d218u: goto label_48d218;
        case 0x48d21cu: goto label_48d21c;
        case 0x48d220u: goto label_48d220;
        case 0x48d224u: goto label_48d224;
        case 0x48d228u: goto label_48d228;
        case 0x48d22cu: goto label_48d22c;
        case 0x48d230u: goto label_48d230;
        case 0x48d234u: goto label_48d234;
        case 0x48d238u: goto label_48d238;
        case 0x48d23cu: goto label_48d23c;
        case 0x48d240u: goto label_48d240;
        case 0x48d244u: goto label_48d244;
        case 0x48d248u: goto label_48d248;
        case 0x48d24cu: goto label_48d24c;
        case 0x48d250u: goto label_48d250;
        case 0x48d254u: goto label_48d254;
        case 0x48d258u: goto label_48d258;
        case 0x48d25cu: goto label_48d25c;
        case 0x48d260u: goto label_48d260;
        case 0x48d264u: goto label_48d264;
        case 0x48d268u: goto label_48d268;
        case 0x48d26cu: goto label_48d26c;
        case 0x48d270u: goto label_48d270;
        case 0x48d274u: goto label_48d274;
        case 0x48d278u: goto label_48d278;
        case 0x48d27cu: goto label_48d27c;
        case 0x48d280u: goto label_48d280;
        case 0x48d284u: goto label_48d284;
        case 0x48d288u: goto label_48d288;
        case 0x48d28cu: goto label_48d28c;
        case 0x48d290u: goto label_48d290;
        case 0x48d294u: goto label_48d294;
        case 0x48d298u: goto label_48d298;
        case 0x48d29cu: goto label_48d29c;
        case 0x48d2a0u: goto label_48d2a0;
        case 0x48d2a4u: goto label_48d2a4;
        case 0x48d2a8u: goto label_48d2a8;
        case 0x48d2acu: goto label_48d2ac;
        case 0x48d2b0u: goto label_48d2b0;
        case 0x48d2b4u: goto label_48d2b4;
        case 0x48d2b8u: goto label_48d2b8;
        case 0x48d2bcu: goto label_48d2bc;
        case 0x48d2c0u: goto label_48d2c0;
        case 0x48d2c4u: goto label_48d2c4;
        case 0x48d2c8u: goto label_48d2c8;
        case 0x48d2ccu: goto label_48d2cc;
        case 0x48d2d0u: goto label_48d2d0;
        case 0x48d2d4u: goto label_48d2d4;
        case 0x48d2d8u: goto label_48d2d8;
        case 0x48d2dcu: goto label_48d2dc;
        default: break;
    }

    ctx->pc = 0x48cca0u;

label_48cca0:
    // 0x48cca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x48cca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_48cca4:
    // 0x48cca4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x48cca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_48cca8:
    // 0x48cca8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x48cca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_48ccac:
    // 0x48ccac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x48ccacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_48ccb0:
    // 0x48ccb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x48ccb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48ccb4:
    // 0x48ccb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48ccb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_48ccb8:
    // 0x48ccb8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x48ccb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_48ccbc:
    // 0x48ccbc: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x48ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_48ccc0:
    // 0x48ccc0: 0x8c90006c  lw          $s0, 0x6C($a0)
    ctx->pc = 0x48ccc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_48ccc4:
    // 0x48ccc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48ccc8:
    // 0x48ccc8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x48ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_48cccc:
    // 0x48cccc: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x48ccccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_48ccd0:
    // 0x48ccd0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48ccd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48ccd4:
    // 0x48ccd4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48ccd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48ccd8:
    // 0x48ccd8: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_48ccdc:
    if (ctx->pc == 0x48CCDCu) {
        ctx->pc = 0x48CCDCu;
            // 0x48ccdc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48CCE0u;
        goto label_48cce0;
    }
    ctx->pc = 0x48CCD8u;
    {
        const bool branch_taken_0x48ccd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CCD8u;
            // 0x48ccdc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ccd8) {
            ctx->pc = 0x48CE08u;
            goto label_48ce08;
        }
    }
    ctx->pc = 0x48CCE0u;
label_48cce0:
    // 0x48cce0: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48cce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48cce4:
    // 0x48cce4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x48cce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_48cce8:
    // 0x48cce8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48cce8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48ccec:
    // 0x48ccec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48ccf0:
    // 0x48ccf0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48ccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48ccf4:
    // 0x48ccf4: 0xc04af96  jal         func_12BE58
label_48ccf8:
    if (ctx->pc == 0x48CCF8u) {
        ctx->pc = 0x48CCF8u;
            // 0x48ccf8: 0x24a507f0  addiu       $a1, $a1, 0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2032));
        ctx->pc = 0x48CCFCu;
        goto label_48ccfc;
    }
    ctx->pc = 0x48CCF4u;
    SET_GPR_U32(ctx, 31, 0x48CCFCu);
    ctx->pc = 0x48CCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48CCF4u;
            // 0x48ccf8: 0x24a507f0  addiu       $a1, $a1, 0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48CCFCu; }
        if (ctx->pc != 0x48CCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48CCFCu; }
        if (ctx->pc != 0x48CCFCu) { return; }
    }
    ctx->pc = 0x48CCFCu;
label_48ccfc:
    // 0x48ccfc: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
label_48cd00:
    if (ctx->pc == 0x48CD00u) {
        ctx->pc = 0x48CD00u;
            // 0x48cd00: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x48CD04u;
        goto label_48cd04;
    }
    ctx->pc = 0x48CCFCu;
    {
        const bool branch_taken_0x48ccfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48ccfc) {
            ctx->pc = 0x48CD00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CCFCu;
            // 0x48cd00: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CDD8u;
            goto label_48cdd8;
        }
    }
    ctx->pc = 0x48CD04u;
label_48cd04:
    // 0x48cd04: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48cd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48cd08:
    // 0x48cd08: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x48cd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_48cd0c:
    // 0x48cd0c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48cd0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48cd10:
    // 0x48cd10: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x48cd10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_48cd14:
    // 0x48cd14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48cd18:
    // 0x48cd18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48cd1c:
    // 0x48cd1c: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x48cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_48cd20:
    // 0x48cd20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_48cd24:
    // 0x48cd24: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x48cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_48cd28:
    // 0x48cd28: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x48cd28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_48cd2c:
    // 0x48cd2c: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
label_48cd30:
    if (ctx->pc == 0x48CD30u) {
        ctx->pc = 0x48CD30u;
            // 0x48cd30: 0xc4940008  lwc1        $f20, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x48CD34u;
        goto label_48cd34;
    }
    ctx->pc = 0x48CD2Cu;
    {
        const bool branch_taken_0x48cd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48cd2c) {
            ctx->pc = 0x48CD30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CD2Cu;
            // 0x48cd30: 0xc4940008  lwc1        $f20, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CD94u;
            goto label_48cd94;
        }
    }
    ctx->pc = 0x48CD34u;
label_48cd34:
    // 0x48cd34: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x48cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_48cd38:
    // 0x48cd38: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
label_48cd3c:
    if (ctx->pc == 0x48CD3Cu) {
        ctx->pc = 0x48CD3Cu;
            // 0x48cd3c: 0xdc840008  ld          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x48CD40u;
        goto label_48cd40;
    }
    ctx->pc = 0x48CD38u;
    {
        const bool branch_taken_0x48cd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48cd38) {
            ctx->pc = 0x48CD3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CD38u;
            // 0x48cd3c: 0xdc840008  ld          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CD88u;
            goto label_48cd88;
        }
    }
    ctx->pc = 0x48CD40u;
label_48cd40:
    // 0x48cd40: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x48cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_48cd44:
    // 0x48cd44: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_48cd48:
    if (ctx->pc == 0x48CD48u) {
        ctx->pc = 0x48CD48u;
            // 0x48cd48: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x48CD4Cu;
        goto label_48cd4c;
    }
    ctx->pc = 0x48CD44u;
    {
        const bool branch_taken_0x48cd44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48cd44) {
            ctx->pc = 0x48CD48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CD44u;
            // 0x48cd48: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CD54u;
            goto label_48cd54;
        }
    }
    ctx->pc = 0x48CD4Cu;
label_48cd4c:
    // 0x48cd4c: 0x10000012  b           . + 4 + (0x12 << 2)
label_48cd50:
    if (ctx->pc == 0x48CD50u) {
        ctx->pc = 0x48CD50u;
            // 0x48cd50: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->pc = 0x48CD54u;
        goto label_48cd54;
    }
    ctx->pc = 0x48CD4Cu;
    {
        const bool branch_taken_0x48cd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CD4Cu;
            // 0x48cd50: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cd4c) {
            ctx->pc = 0x48CD98u;
            goto label_48cd98;
        }
    }
    ctx->pc = 0x48CD54u;
label_48cd54:
    // 0x48cd54: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_48cd58:
    if (ctx->pc == 0x48CD58u) {
        ctx->pc = 0x48CD58u;
            // 0x48cd58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x48CD5Cu;
        goto label_48cd5c;
    }
    ctx->pc = 0x48CD54u;
    {
        const bool branch_taken_0x48cd54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x48cd54) {
            ctx->pc = 0x48CD58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CD54u;
            // 0x48cd58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CD68u;
            goto label_48cd68;
        }
    }
    ctx->pc = 0x48CD5Cu;
label_48cd5c:
    // 0x48cd5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48cd5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48cd60:
    // 0x48cd60: 0x10000007  b           . + 4 + (0x7 << 2)
label_48cd64:
    if (ctx->pc == 0x48CD64u) {
        ctx->pc = 0x48CD64u;
            // 0x48cd64: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x48CD68u;
        goto label_48cd68;
    }
    ctx->pc = 0x48CD60u;
    {
        const bool branch_taken_0x48cd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CD60u;
            // 0x48cd64: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cd60) {
            ctx->pc = 0x48CD80u;
            goto label_48cd80;
        }
    }
    ctx->pc = 0x48CD68u;
label_48cd68:
    // 0x48cd68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x48cd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_48cd6c:
    // 0x48cd6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x48cd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_48cd70:
    // 0x48cd70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x48cd70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48cd74:
    // 0x48cd74: 0x0  nop
    ctx->pc = 0x48cd74u;
    // NOP
label_48cd78:
    // 0x48cd78: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x48cd78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_48cd7c:
    // 0x48cd7c: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x48cd7cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_48cd80:
    // 0x48cd80: 0x10000004  b           . + 4 + (0x4 << 2)
label_48cd84:
    if (ctx->pc == 0x48CD84u) {
        ctx->pc = 0x48CD88u;
        goto label_48cd88;
    }
    ctx->pc = 0x48CD80u;
    {
        const bool branch_taken_0x48cd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cd80) {
            ctx->pc = 0x48CD94u;
            goto label_48cd94;
        }
    }
    ctx->pc = 0x48CD88u;
label_48cd88:
    // 0x48cd88: 0xc0497dc  jal         func_125F70
label_48cd8c:
    if (ctx->pc == 0x48CD8Cu) {
        ctx->pc = 0x48CD90u;
        goto label_48cd90;
    }
    ctx->pc = 0x48CD88u;
    SET_GPR_U32(ctx, 31, 0x48CD90u);
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48CD90u; }
        if (ctx->pc != 0x48CD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48CD90u; }
        if (ctx->pc != 0x48CD90u) { return; }
    }
    ctx->pc = 0x48CD90u;
label_48cd90:
    // 0x48cd90: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x48cd90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_48cd94:
    // 0x48cd94: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x48cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_48cd98:
    // 0x48cd98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48cd98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48cd9c:
    // 0x48cd9c: 0x0  nop
    ctx->pc = 0x48cd9cu;
    // NOP
label_48cda0:
    // 0x48cda0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x48cda0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48cda4:
    // 0x48cda4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_48cda8:
    if (ctx->pc == 0x48CDA8u) {
        ctx->pc = 0x48CDA8u;
            // 0x48cda8: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x48CDACu;
        goto label_48cdac;
    }
    ctx->pc = 0x48CDA4u;
    {
        const bool branch_taken_0x48cda4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48cda4) {
            ctx->pc = 0x48CDA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CDA4u;
            // 0x48cda8: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CDBCu;
            goto label_48cdbc;
        }
    }
    ctx->pc = 0x48CDACu;
label_48cdac:
    // 0x48cdac: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x48cdacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_48cdb0:
    // 0x48cdb0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x48cdb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_48cdb4:
    // 0x48cdb4: 0x10000006  b           . + 4 + (0x6 << 2)
label_48cdb8:
    if (ctx->pc == 0x48CDB8u) {
        ctx->pc = 0x48CDBCu;
        goto label_48cdbc;
    }
    ctx->pc = 0x48CDB4u;
    {
        const bool branch_taken_0x48cdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cdb4) {
            ctx->pc = 0x48CDD0u;
            goto label_48cdd0;
        }
    }
    ctx->pc = 0x48CDBCu;
label_48cdbc:
    // 0x48cdbc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x48cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_48cdc0:
    // 0x48cdc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x48cdc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_48cdc4:
    // 0x48cdc4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x48cdc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_48cdc8:
    // 0x48cdc8: 0x0  nop
    ctx->pc = 0x48cdc8u;
    // NOP
label_48cdcc:
    // 0x48cdcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48cdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_48cdd0:
    // 0x48cdd0: 0x1000000f  b           . + 4 + (0xF << 2)
label_48cdd4:
    if (ctx->pc == 0x48CDD4u) {
        ctx->pc = 0x48CDD4u;
            // 0x48cdd4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x48CDD8u;
        goto label_48cdd8;
    }
    ctx->pc = 0x48CDD0u;
    {
        const bool branch_taken_0x48cdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CDD0u;
            // 0x48cdd4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cdd0) {
            ctx->pc = 0x48CE10u;
            goto label_48ce10;
        }
    }
    ctx->pc = 0x48CDD8u;
label_48cdd8:
    // 0x48cdd8: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x48cdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_48cddc:
    // 0x48cddc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48cddcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48cde0:
    // 0x48cde0: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x48cde0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_48cde4:
    // 0x48cde4: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x48cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_48cde8:
    // 0x48cde8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48cdec:
    // 0x48cdec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48cdf0:
    // 0x48cdf0: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x48cdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_48cdf4:
    // 0x48cdf4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48cdf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48cdf8:
    // 0x48cdf8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48cdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48cdfc:
    // 0x48cdfc: 0x5440ffb9  bnel        $v0, $zero, . + 4 + (-0x47 << 2)
label_48ce00:
    if (ctx->pc == 0x48CE00u) {
        ctx->pc = 0x48CE00u;
            // 0x48ce00: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x48CE04u;
        goto label_48ce04;
    }
    ctx->pc = 0x48CDFCu;
    {
        const bool branch_taken_0x48cdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48cdfc) {
            ctx->pc = 0x48CE00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CDFCu;
            // 0x48ce00: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CCE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48cce4;
        }
    }
    ctx->pc = 0x48CE04u;
label_48ce04:
    // 0x48ce04: 0x0  nop
    ctx->pc = 0x48ce04u;
    // NOP
label_48ce08:
    // 0x48ce08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48ce08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48ce0c:
    // 0x48ce0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x48ce0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_48ce10:
    // 0x48ce10: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x48ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_48ce14:
    // 0x48ce14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x48ce14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48ce18:
    // 0x48ce18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x48ce18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48ce1c:
    // 0x48ce1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x48ce1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48ce20:
    // 0x48ce20: 0x3e00008  jr          $ra
label_48ce24:
    if (ctx->pc == 0x48CE24u) {
        ctx->pc = 0x48CE24u;
            // 0x48ce24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x48CE28u;
        goto label_48ce28;
    }
    ctx->pc = 0x48CE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CE20u;
            // 0x48ce24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48CE28u;
label_48ce28:
    // 0x48ce28: 0x0  nop
    ctx->pc = 0x48ce28u;
    // NOP
label_48ce2c:
    // 0x48ce2c: 0x0  nop
    ctx->pc = 0x48ce2cu;
    // NOP
label_48ce30:
    // 0x48ce30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x48ce30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_48ce34:
    // 0x48ce34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x48ce34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_48ce38:
    // 0x48ce38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48ce38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48ce3c:
    // 0x48ce3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48ce3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48ce40:
    // 0x48ce40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48ce40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48ce44:
    // 0x48ce44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48ce44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48ce48:
    // 0x48ce48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48ce4c:
    // 0x48ce4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48ce4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48ce50:
    // 0x48ce50: 0x1220011a  beqz        $s1, . + 4 + (0x11A << 2)
label_48ce54:
    if (ctx->pc == 0x48CE54u) {
        ctx->pc = 0x48CE54u;
            // 0x48ce54: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48CE58u;
        goto label_48ce58;
    }
    ctx->pc = 0x48CE50u;
    {
        const bool branch_taken_0x48ce50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CE50u;
            // 0x48ce54: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ce50) {
            ctx->pc = 0x48D2BCu;
            goto label_48d2bc;
        }
    }
    ctx->pc = 0x48CE58u;
label_48ce58:
    // 0x48ce58: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_48ce5c:
    // 0x48ce5c: 0x2442fa10  addiu       $v0, $v0, -0x5F0
    ctx->pc = 0x48ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965776));
label_48ce60:
    // 0x48ce60: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x48ce60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_48ce64:
    // 0x48ce64: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x48ce64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_48ce68:
    // 0x48ce68: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x48ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_48ce6c:
    // 0x48ce6c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x48ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_48ce70:
    // 0x48ce70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48ce74:
    // 0x48ce74: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x48ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_48ce78:
    // 0x48ce78: 0x831026  xor         $v0, $a0, $v1
    ctx->pc = 0x48ce78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_48ce7c:
    // 0x48ce7c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48ce7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48ce80:
    // 0x48ce80: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48ce80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48ce84:
    // 0x48ce84: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_48ce88:
    if (ctx->pc == 0x48CE88u) {
        ctx->pc = 0x48CE8Cu;
        goto label_48ce8c;
    }
    ctx->pc = 0x48CE84u;
    {
        const bool branch_taken_0x48ce84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ce84) {
            ctx->pc = 0x48CEC8u;
            goto label_48cec8;
        }
    }
    ctx->pc = 0x48CE8Cu;
label_48ce8c:
    // 0x48ce8c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x48ce8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_48ce90:
    // 0x48ce90: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x48ce90u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_48ce94:
    // 0x48ce94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x48ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_48ce98:
    // 0x48ce98: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
label_48ce9c:
    if (ctx->pc == 0x48CE9Cu) {
        ctx->pc = 0x48CE9Cu;
            // 0x48ce9c: 0x24a40004  addiu       $a0, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x48CEA0u;
        goto label_48cea0;
    }
    ctx->pc = 0x48CE98u;
    {
        const bool branch_taken_0x48ce98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x48ce98) {
            ctx->pc = 0x48CE9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CE98u;
            // 0x48ce9c: 0x24a40004  addiu       $a0, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CEB0u;
            goto label_48ceb0;
        }
    }
    ctx->pc = 0x48CEA0u;
label_48cea0:
    // 0x48cea0: 0xc12575c  jal         func_495D70
label_48cea4:
    if (ctx->pc == 0x48CEA4u) {
        ctx->pc = 0x48CEA4u;
            // 0x48cea4: 0x24c40004  addiu       $a0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x48CEA8u;
        goto label_48cea8;
    }
    ctx->pc = 0x48CEA0u;
    SET_GPR_U32(ctx, 31, 0x48CEA8u);
    ctx->pc = 0x48CEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48CEA0u;
            // 0x48cea4: 0x24c40004  addiu       $a0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x495D70u;
    if (runtime->hasFunction(0x495D70u)) {
        auto targetFn = runtime->lookupFunction(0x495D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48CEA8u; }
        if (ctx->pc != 0x48CEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00495D70_0x495d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48CEA8u; }
        if (ctx->pc != 0x48CEA8u) { return; }
    }
    ctx->pc = 0x48CEA8u;
label_48cea8:
    // 0x48cea8: 0x10000007  b           . + 4 + (0x7 << 2)
label_48ceac:
    if (ctx->pc == 0x48CEACu) {
        ctx->pc = 0x48CEB0u;
        goto label_48ceb0;
    }
    ctx->pc = 0x48CEA8u;
    {
        const bool branch_taken_0x48cea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cea8) {
            ctx->pc = 0x48CEC8u;
            goto label_48cec8;
        }
    }
    ctx->pc = 0x48CEB0u;
label_48ceb0:
    // 0x48ceb0: 0x831026  xor         $v0, $a0, $v1
    ctx->pc = 0x48ceb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_48ceb4:
    // 0x48ceb4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48ceb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48ceb8:
    // 0x48ceb8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48ceb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48cebc:
    // 0x48cebc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_48cec0:
    if (ctx->pc == 0x48CEC0u) {
        ctx->pc = 0x48CEC0u;
            // 0x48cec0: 0x4283c  dsll32      $a1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        ctx->pc = 0x48CEC4u;
        goto label_48cec4;
    }
    ctx->pc = 0x48CEBCu;
    {
        const bool branch_taken_0x48cebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48cebc) {
            ctx->pc = 0x48CEC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CEBCu;
            // 0x48cec0: 0x4283c  dsll32      $a1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CE90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48ce90;
        }
    }
    ctx->pc = 0x48CEC4u;
label_48cec4:
    // 0x48cec4: 0x0  nop
    ctx->pc = 0x48cec4u;
    // NOP
label_48cec8:
    // 0x48cec8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x48cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_48cecc:
    // 0x48cecc: 0x8e32002c  lw          $s2, 0x2C($s1)
    ctx->pc = 0x48ceccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_48ced0:
    // 0x48ced0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48ced4:
    // 0x48ced4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x48ced4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_48ced8:
    // 0x48ced8: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x48ced8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
label_48cedc:
    // 0x48cedc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48cedcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48cee0:
    // 0x48cee0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48cee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48cee4:
    // 0x48cee4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_48cee8:
    if (ctx->pc == 0x48CEE8u) {
        ctx->pc = 0x48CEECu;
        goto label_48ceec;
    }
    ctx->pc = 0x48CEE4u;
    {
        const bool branch_taken_0x48cee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cee4) {
            ctx->pc = 0x48CF40u;
            goto label_48cf40;
        }
    }
    ctx->pc = 0x48CEECu;
label_48ceec:
    // 0x48ceec: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x48ceecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_48cef0:
    // 0x48cef0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48cef0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48cef4:
    // 0x48cef4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48cef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48cef8:
    // 0x48cef8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_48cefc:
    if (ctx->pc == 0x48CEFCu) {
        ctx->pc = 0x48CF00u;
        goto label_48cf00;
    }
    ctx->pc = 0x48CEF8u;
    {
        const bool branch_taken_0x48cef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cef8) {
            ctx->pc = 0x48CF10u;
            goto label_48cf10;
        }
    }
    ctx->pc = 0x48CF00u;
label_48cf00:
    // 0x48cf00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48cf00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48cf04:
    // 0x48cf04: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x48cf04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_48cf08:
    // 0x48cf08: 0x320f809  jalr        $t9
label_48cf0c:
    if (ctx->pc == 0x48CF0Cu) {
        ctx->pc = 0x48CF0Cu;
            // 0x48cf0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x48CF10u;
        goto label_48cf10;
    }
    ctx->pc = 0x48CF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48CF10u);
        ctx->pc = 0x48CF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CF08u;
            // 0x48cf0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48CF10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48CF10u; }
            if (ctx->pc != 0x48CF10u) { return; }
        }
        }
    }
    ctx->pc = 0x48CF10u;
label_48cf10:
    // 0x48cf10: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x48cf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_48cf14:
    // 0x48cf14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48cf14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48cf18:
    // 0x48cf18: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x48cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_48cf1c:
    // 0x48cf1c: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x48cf1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_48cf20:
    // 0x48cf20: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x48cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_48cf24:
    // 0x48cf24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48cf24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48cf28:
    // 0x48cf28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48cf2c:
    // 0x48cf2c: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x48cf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
label_48cf30:
    // 0x48cf30: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48cf30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48cf34:
    // 0x48cf34: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48cf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48cf38:
    // 0x48cf38: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_48cf3c:
    if (ctx->pc == 0x48CF3Cu) {
        ctx->pc = 0x48CF3Cu;
            // 0x48cf3c: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->pc = 0x48CF40u;
        goto label_48cf40;
    }
    ctx->pc = 0x48CF38u;
    {
        const bool branch_taken_0x48cf38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48cf38) {
            ctx->pc = 0x48CF3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CF38u;
            // 0x48cf3c: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CEF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48cef0;
        }
    }
    ctx->pc = 0x48CF40u;
label_48cf40:
    // 0x48cf40: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x48cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_48cf44:
    // 0x48cf44: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x48cf44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_48cf48:
    // 0x48cf48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48cf4c:
    // 0x48cf4c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x48cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_48cf50:
    // 0x48cf50: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x48cf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
label_48cf54:
    // 0x48cf54: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48cf54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48cf58:
    // 0x48cf58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48cf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48cf5c:
    // 0x48cf5c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_48cf60:
    if (ctx->pc == 0x48CF60u) {
        ctx->pc = 0x48CF64u;
        goto label_48cf64;
    }
    ctx->pc = 0x48CF5Cu;
    {
        const bool branch_taken_0x48cf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cf5c) {
            ctx->pc = 0x48CFB8u;
            goto label_48cfb8;
        }
    }
    ctx->pc = 0x48CF64u;
label_48cf64:
    // 0x48cf64: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x48cf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_48cf68:
    // 0x48cf68: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48cf68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48cf6c:
    // 0x48cf6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48cf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48cf70:
    // 0x48cf70: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_48cf74:
    if (ctx->pc == 0x48CF74u) {
        ctx->pc = 0x48CF78u;
        goto label_48cf78;
    }
    ctx->pc = 0x48CF70u;
    {
        const bool branch_taken_0x48cf70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cf70) {
            ctx->pc = 0x48CF88u;
            goto label_48cf88;
        }
    }
    ctx->pc = 0x48CF78u;
label_48cf78:
    // 0x48cf78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48cf78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48cf7c:
    // 0x48cf7c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x48cf7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_48cf80:
    // 0x48cf80: 0x320f809  jalr        $t9
label_48cf84:
    if (ctx->pc == 0x48CF84u) {
        ctx->pc = 0x48CF84u;
            // 0x48cf84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x48CF88u;
        goto label_48cf88;
    }
    ctx->pc = 0x48CF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48CF88u);
        ctx->pc = 0x48CF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CF80u;
            // 0x48cf84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48CF88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48CF88u; }
            if (ctx->pc != 0x48CF88u) { return; }
        }
        }
    }
    ctx->pc = 0x48CF88u;
label_48cf88:
    // 0x48cf88: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x48cf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_48cf8c:
    // 0x48cf8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48cf8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48cf90:
    // 0x48cf90: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x48cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_48cf94:
    // 0x48cf94: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x48cf94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_48cf98:
    // 0x48cf98: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x48cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_48cf9c:
    // 0x48cf9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48cfa0:
    // 0x48cfa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48cfa4:
    // 0x48cfa4: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x48cfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
label_48cfa8:
    // 0x48cfa8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48cfa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48cfac:
    // 0x48cfac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48cfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48cfb0:
    // 0x48cfb0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_48cfb4:
    if (ctx->pc == 0x48CFB4u) {
        ctx->pc = 0x48CFB4u;
            // 0x48cfb4: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->pc = 0x48CFB8u;
        goto label_48cfb8;
    }
    ctx->pc = 0x48CFB0u;
    {
        const bool branch_taken_0x48cfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48cfb0) {
            ctx->pc = 0x48CFB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CFB0u;
            // 0x48cfb4: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48cf68;
        }
    }
    ctx->pc = 0x48CFB8u;
label_48cfb8:
    // 0x48cfb8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x48cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_48cfbc:
    // 0x48cfbc: 0x8e320020  lw          $s2, 0x20($s1)
    ctx->pc = 0x48cfbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_48cfc0:
    // 0x48cfc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48cfc4:
    // 0x48cfc4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x48cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_48cfc8:
    // 0x48cfc8: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x48cfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
label_48cfcc:
    // 0x48cfcc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48cfccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48cfd0:
    // 0x48cfd0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48cfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48cfd4:
    // 0x48cfd4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_48cfd8:
    if (ctx->pc == 0x48CFD8u) {
        ctx->pc = 0x48CFDCu;
        goto label_48cfdc;
    }
    ctx->pc = 0x48CFD4u;
    {
        const bool branch_taken_0x48cfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cfd4) {
            ctx->pc = 0x48D030u;
            goto label_48d030;
        }
    }
    ctx->pc = 0x48CFDCu;
label_48cfdc:
    // 0x48cfdc: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x48cfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_48cfe0:
    // 0x48cfe0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48cfe0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48cfe4:
    // 0x48cfe4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48cfe8:
    // 0x48cfe8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_48cfec:
    if (ctx->pc == 0x48CFECu) {
        ctx->pc = 0x48CFF0u;
        goto label_48cff0;
    }
    ctx->pc = 0x48CFE8u;
    {
        const bool branch_taken_0x48cfe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cfe8) {
            ctx->pc = 0x48D000u;
            goto label_48d000;
        }
    }
    ctx->pc = 0x48CFF0u;
label_48cff0:
    // 0x48cff0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48cff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48cff4:
    // 0x48cff4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x48cff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_48cff8:
    // 0x48cff8: 0x320f809  jalr        $t9
label_48cffc:
    if (ctx->pc == 0x48CFFCu) {
        ctx->pc = 0x48CFFCu;
            // 0x48cffc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x48D000u;
        goto label_48d000;
    }
    ctx->pc = 0x48CFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48D000u);
        ctx->pc = 0x48CFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CFF8u;
            // 0x48cffc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48D000u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48D000u; }
            if (ctx->pc != 0x48D000u) { return; }
        }
        }
    }
    ctx->pc = 0x48D000u;
label_48d000:
    // 0x48d000: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x48d000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_48d004:
    // 0x48d004: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48d004u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48d008:
    // 0x48d008: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x48d008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_48d00c:
    // 0x48d00c: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x48d00cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_48d010:
    // 0x48d010: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x48d010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_48d014:
    // 0x48d014: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48d014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48d018:
    // 0x48d018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48d018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48d01c:
    // 0x48d01c: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x48d01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
label_48d020:
    // 0x48d020: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48d020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48d024:
    // 0x48d024: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48d024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48d028:
    // 0x48d028: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_48d02c:
    if (ctx->pc == 0x48D02Cu) {
        ctx->pc = 0x48D02Cu;
            // 0x48d02c: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->pc = 0x48D030u;
        goto label_48d030;
    }
    ctx->pc = 0x48D028u;
    {
        const bool branch_taken_0x48d028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d028) {
            ctx->pc = 0x48D02Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D028u;
            // 0x48d02c: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CFE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48cfe0;
        }
    }
    ctx->pc = 0x48D030u;
label_48d030:
    // 0x48d030: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x48d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_48d034:
    // 0x48d034: 0x8e33006c  lw          $s3, 0x6C($s1)
    ctx->pc = 0x48d034u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_48d038:
    // 0x48d038: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48d038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48d03c:
    // 0x48d03c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x48d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_48d040:
    // 0x48d040: 0x2621026  xor         $v0, $s3, $v0
    ctx->pc = 0x48d040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 2));
label_48d044:
    // 0x48d044: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48d044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48d048:
    // 0x48d048: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48d048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48d04c:
    // 0x48d04c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_48d050:
    if (ctx->pc == 0x48D050u) {
        ctx->pc = 0x48D054u;
        goto label_48d054;
    }
    ctx->pc = 0x48D04Cu;
    {
        const bool branch_taken_0x48d04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d04c) {
            ctx->pc = 0x48D168u;
            goto label_48d168;
        }
    }
    ctx->pc = 0x48D054u;
label_48d054:
    // 0x48d054: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x48d054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
label_48d058:
    // 0x48d058: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48d058u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48d05c:
    // 0x48d05c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x48d05cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48d060:
    // 0x48d060: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x48d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_48d064:
    // 0x48d064: 0x8e92001c  lw          $s2, 0x1C($s4)
    ctx->pc = 0x48d064u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_48d068:
    // 0x48d068: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x48d068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_48d06c:
    // 0x48d06c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x48d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_48d070:
    // 0x48d070: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x48d070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
label_48d074:
    // 0x48d074: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48d074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48d078:
    // 0x48d078: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48d078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48d07c:
    // 0x48d07c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_48d080:
    if (ctx->pc == 0x48D080u) {
        ctx->pc = 0x48D084u;
        goto label_48d084;
    }
    ctx->pc = 0x48D07Cu;
    {
        const bool branch_taken_0x48d07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d07c) {
            ctx->pc = 0x48D0D8u;
            goto label_48d0d8;
        }
    }
    ctx->pc = 0x48D084u;
label_48d084:
    // 0x48d084: 0x0  nop
    ctx->pc = 0x48d084u;
    // NOP
label_48d088:
    // 0x48d088: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x48d088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_48d08c:
    // 0x48d08c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48d08cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48d090:
    // 0x48d090: 0xc0400a8  jal         func_1002A0
label_48d094:
    if (ctx->pc == 0x48D094u) {
        ctx->pc = 0x48D094u;
            // 0x48d094: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x48D098u;
        goto label_48d098;
    }
    ctx->pc = 0x48D090u;
    SET_GPR_U32(ctx, 31, 0x48D098u);
    ctx->pc = 0x48D094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D090u;
            // 0x48d094: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D098u; }
        if (ctx->pc != 0x48D098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D098u; }
        if (ctx->pc != 0x48D098u) { return; }
    }
    ctx->pc = 0x48D098u;
label_48d098:
    // 0x48d098: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x48d098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
label_48d09c:
    // 0x48d09c: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x48d09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
label_48d0a0:
    // 0x48d0a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48d0a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48d0a4:
    // 0x48d0a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48d0a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48d0a8:
    // 0x48d0a8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x48d0a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48d0ac:
    // 0x48d0ac: 0x24720008  addiu       $s2, $v1, 0x8
    ctx->pc = 0x48d0acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_48d0b0:
    // 0x48d0b0: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x48d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_48d0b4:
    // 0x48d0b4: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x48d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_48d0b8:
    // 0x48d0b8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x48d0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_48d0bc:
    // 0x48d0bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48d0c0:
    // 0x48d0c0: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x48d0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
label_48d0c4:
    // 0x48d0c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48d0c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48d0c8:
    // 0x48d0c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48d0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48d0cc:
    // 0x48d0cc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_48d0d0:
    if (ctx->pc == 0x48D0D0u) {
        ctx->pc = 0x48D0D4u;
        goto label_48d0d4;
    }
    ctx->pc = 0x48D0CCu;
    {
        const bool branch_taken_0x48d0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d0cc) {
            ctx->pc = 0x48D088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48d088;
        }
    }
    ctx->pc = 0x48D0D4u;
label_48d0d4:
    // 0x48d0d4: 0x0  nop
    ctx->pc = 0x48d0d4u;
    // NOP
label_48d0d8:
    // 0x48d0d8: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x48d0d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_48d0dc:
    // 0x48d0dc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x48d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_48d0e0:
    // 0x48d0e0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_48d0e4:
    if (ctx->pc == 0x48D0E4u) {
        ctx->pc = 0x48D0E8u;
        goto label_48d0e8;
    }
    ctx->pc = 0x48D0E0u;
    {
        const bool branch_taken_0x48d0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48d0e0) {
            ctx->pc = 0x48D138u;
            goto label_48d138;
        }
    }
    ctx->pc = 0x48D0E8u;
label_48d0e8:
    // 0x48d0e8: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
label_48d0ec:
    if (ctx->pc == 0x48D0ECu) {
        ctx->pc = 0x48D0F0u;
        goto label_48d0f0;
    }
    ctx->pc = 0x48D0E8u;
    {
        const bool branch_taken_0x48d0e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d0e8) {
            ctx->pc = 0x48D138u;
            goto label_48d138;
        }
    }
    ctx->pc = 0x48D0F0u;
label_48d0f0:
    // 0x48d0f0: 0x26840014  addiu       $a0, $s4, 0x14
    ctx->pc = 0x48d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_48d0f4:
    // 0x48d0f4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_48d0f8:
    if (ctx->pc == 0x48D0F8u) {
        ctx->pc = 0x48D0FCu;
        goto label_48d0fc;
    }
    ctx->pc = 0x48D0F4u;
    {
        const bool branch_taken_0x48d0f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d0f4) {
            ctx->pc = 0x48D110u;
            goto label_48d110;
        }
    }
    ctx->pc = 0x48D0FCu;
label_48d0fc:
    // 0x48d0fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_48d100:
    if (ctx->pc == 0x48D100u) {
        ctx->pc = 0x48D104u;
        goto label_48d104;
    }
    ctx->pc = 0x48D0FCu;
    {
        const bool branch_taken_0x48d0fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d0fc) {
            ctx->pc = 0x48D110u;
            goto label_48d110;
        }
    }
    ctx->pc = 0x48D104u;
label_48d104:
    // 0x48d104: 0xc125f60  jal         func_497D80
label_48d108:
    if (ctx->pc == 0x48D108u) {
        ctx->pc = 0x48D108u;
            // 0x48d108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D10Cu;
        goto label_48d10c;
    }
    ctx->pc = 0x48D104u;
    SET_GPR_U32(ctx, 31, 0x48D10Cu);
    ctx->pc = 0x48D108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D104u;
            // 0x48d108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x497D80u;
    if (runtime->hasFunction(0x497D80u)) {
        auto targetFn = runtime->lookupFunction(0x497D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D10Cu; }
        if (ctx->pc != 0x48D10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497D80_0x497d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D10Cu; }
        if (ctx->pc != 0x48D10Cu) { return; }
    }
    ctx->pc = 0x48D10Cu;
label_48d10c:
    // 0x48d10c: 0x0  nop
    ctx->pc = 0x48d10cu;
    // NOP
label_48d110:
    // 0x48d110: 0x26840008  addiu       $a0, $s4, 0x8
    ctx->pc = 0x48d110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_48d114:
    // 0x48d114: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_48d118:
    if (ctx->pc == 0x48D118u) {
        ctx->pc = 0x48D11Cu;
        goto label_48d11c;
    }
    ctx->pc = 0x48D114u;
    {
        const bool branch_taken_0x48d114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d114) {
            ctx->pc = 0x48D130u;
            goto label_48d130;
        }
    }
    ctx->pc = 0x48D11Cu;
label_48d11c:
    // 0x48d11c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_48d120:
    if (ctx->pc == 0x48D120u) {
        ctx->pc = 0x48D124u;
        goto label_48d124;
    }
    ctx->pc = 0x48D11Cu;
    {
        const bool branch_taken_0x48d11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d11c) {
            ctx->pc = 0x48D130u;
            goto label_48d130;
        }
    }
    ctx->pc = 0x48D124u;
label_48d124:
    // 0x48d124: 0xc125f44  jal         func_497D10
label_48d128:
    if (ctx->pc == 0x48D128u) {
        ctx->pc = 0x48D128u;
            // 0x48d128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D12Cu;
        goto label_48d12c;
    }
    ctx->pc = 0x48D124u;
    SET_GPR_U32(ctx, 31, 0x48D12Cu);
    ctx->pc = 0x48D128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D124u;
            // 0x48d128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x497D10u;
    if (runtime->hasFunction(0x497D10u)) {
        auto targetFn = runtime->lookupFunction(0x497D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D12Cu; }
        if (ctx->pc != 0x48D12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497D10_0x497d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D12Cu; }
        if (ctx->pc != 0x48D12Cu) { return; }
    }
    ctx->pc = 0x48D12Cu;
label_48d12c:
    // 0x48d12c: 0x0  nop
    ctx->pc = 0x48d12cu;
    // NOP
label_48d130:
    // 0x48d130: 0xc0400a8  jal         func_1002A0
label_48d134:
    if (ctx->pc == 0x48D134u) {
        ctx->pc = 0x48D134u;
            // 0x48d134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D138u;
        goto label_48d138;
    }
    ctx->pc = 0x48D130u;
    SET_GPR_U32(ctx, 31, 0x48D138u);
    ctx->pc = 0x48D134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D130u;
            // 0x48d134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D138u; }
        if (ctx->pc != 0x48D138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D138u; }
        if (ctx->pc != 0x48D138u) { return; }
    }
    ctx->pc = 0x48D138u;
label_48d138:
    // 0x48d138: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x48d138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
label_48d13c:
    // 0x48d13c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48d13cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48d140:
    // 0x48d140: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x48d140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_48d144:
    // 0x48d144: 0x24530004  addiu       $s3, $v0, 0x4
    ctx->pc = 0x48d144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_48d148:
    // 0x48d148: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x48d148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_48d14c:
    // 0x48d14c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48d150:
    // 0x48d150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48d154:
    // 0x48d154: 0x2621026  xor         $v0, $s3, $v0
    ctx->pc = 0x48d154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 2));
label_48d158:
    // 0x48d158: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48d158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48d15c:
    // 0x48d15c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48d15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48d160:
    // 0x48d160: 0x5440ffbd  bnel        $v0, $zero, . + 4 + (-0x43 << 2)
label_48d164:
    if (ctx->pc == 0x48D164u) {
        ctx->pc = 0x48D164u;
            // 0x48d164: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->pc = 0x48D168u;
        goto label_48d168;
    }
    ctx->pc = 0x48D160u;
    {
        const bool branch_taken_0x48d160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d160) {
            ctx->pc = 0x48D164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D160u;
            // 0x48d164: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48d058;
        }
    }
    ctx->pc = 0x48D168u;
label_48d168:
    // 0x48d168: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x48d168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_48d16c:
    // 0x48d16c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_48d170:
    if (ctx->pc == 0x48D170u) {
        ctx->pc = 0x48D170u;
            // 0x48d170: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x48D174u;
        goto label_48d174;
    }
    ctx->pc = 0x48D16Cu;
    {
        const bool branch_taken_0x48d16c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d16c) {
            ctx->pc = 0x48D170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D16Cu;
            // 0x48d170: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D188u;
            goto label_48d188;
        }
    }
    ctx->pc = 0x48D174u;
label_48d174:
    // 0x48d174: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_48d178:
    if (ctx->pc == 0x48D178u) {
        ctx->pc = 0x48D17Cu;
        goto label_48d17c;
    }
    ctx->pc = 0x48D174u;
    {
        const bool branch_taken_0x48d174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d174) {
            ctx->pc = 0x48D184u;
            goto label_48d184;
        }
    }
    ctx->pc = 0x48D17Cu;
label_48d17c:
    // 0x48d17c: 0xc125f44  jal         func_497D10
label_48d180:
    if (ctx->pc == 0x48D180u) {
        ctx->pc = 0x48D180u;
            // 0x48d180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D184u;
        goto label_48d184;
    }
    ctx->pc = 0x48D17Cu;
    SET_GPR_U32(ctx, 31, 0x48D184u);
    ctx->pc = 0x48D180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D17Cu;
            // 0x48d180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x497D10u;
    if (runtime->hasFunction(0x497D10u)) {
        auto targetFn = runtime->lookupFunction(0x497D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D184u; }
        if (ctx->pc != 0x48D184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497D10_0x497d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D184u; }
        if (ctx->pc != 0x48D184u) { return; }
    }
    ctx->pc = 0x48D184u;
label_48d184:
    // 0x48d184: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x48d184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_48d188:
    // 0x48d188: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_48d18c:
    if (ctx->pc == 0x48D18Cu) {
        ctx->pc = 0x48D18Cu;
            // 0x48d18c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x48D190u;
        goto label_48d190;
    }
    ctx->pc = 0x48D188u;
    {
        const bool branch_taken_0x48d188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d188) {
            ctx->pc = 0x48D18Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D188u;
            // 0x48d18c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D1B8u;
            goto label_48d1b8;
        }
    }
    ctx->pc = 0x48D190u;
label_48d190:
    // 0x48d190: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_48d194:
    if (ctx->pc == 0x48D194u) {
        ctx->pc = 0x48D198u;
        goto label_48d198;
    }
    ctx->pc = 0x48D190u;
    {
        const bool branch_taken_0x48d190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d190) {
            ctx->pc = 0x48D1B4u;
            goto label_48d1b4;
        }
    }
    ctx->pc = 0x48D198u;
label_48d198:
    // 0x48d198: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_48d19c:
    if (ctx->pc == 0x48D19Cu) {
        ctx->pc = 0x48D1A0u;
        goto label_48d1a0;
    }
    ctx->pc = 0x48D198u;
    {
        const bool branch_taken_0x48d198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d198) {
            ctx->pc = 0x48D1B4u;
            goto label_48d1b4;
        }
    }
    ctx->pc = 0x48D1A0u;
label_48d1a0:
    // 0x48d1a0: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x48d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_48d1a4:
    // 0x48d1a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_48d1a8:
    if (ctx->pc == 0x48D1A8u) {
        ctx->pc = 0x48D1ACu;
        goto label_48d1ac;
    }
    ctx->pc = 0x48D1A4u;
    {
        const bool branch_taken_0x48d1a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d1a4) {
            ctx->pc = 0x48D1B4u;
            goto label_48d1b4;
        }
    }
    ctx->pc = 0x48D1ACu;
label_48d1ac:
    // 0x48d1ac: 0xc0400a8  jal         func_1002A0
label_48d1b0:
    if (ctx->pc == 0x48D1B0u) {
        ctx->pc = 0x48D1B4u;
        goto label_48d1b4;
    }
    ctx->pc = 0x48D1ACu;
    SET_GPR_U32(ctx, 31, 0x48D1B4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D1B4u; }
        if (ctx->pc != 0x48D1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D1B4u; }
        if (ctx->pc != 0x48D1B4u) { return; }
    }
    ctx->pc = 0x48D1B4u;
label_48d1b4:
    // 0x48d1b4: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x48d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_48d1b8:
    // 0x48d1b8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_48d1bc:
    if (ctx->pc == 0x48D1BCu) {
        ctx->pc = 0x48D1BCu;
            // 0x48d1bc: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x48D1C0u;
        goto label_48d1c0;
    }
    ctx->pc = 0x48D1B8u;
    {
        const bool branch_taken_0x48d1b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d1b8) {
            ctx->pc = 0x48D1BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D1B8u;
            // 0x48d1bc: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D1D4u;
            goto label_48d1d4;
        }
    }
    ctx->pc = 0x48D1C0u;
label_48d1c0:
    // 0x48d1c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_48d1c4:
    if (ctx->pc == 0x48D1C4u) {
        ctx->pc = 0x48D1C8u;
        goto label_48d1c8;
    }
    ctx->pc = 0x48D1C0u;
    {
        const bool branch_taken_0x48d1c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d1c0) {
            ctx->pc = 0x48D1D0u;
            goto label_48d1d0;
        }
    }
    ctx->pc = 0x48D1C8u;
label_48d1c8:
    // 0x48d1c8: 0xc125f7c  jal         func_497DF0
label_48d1cc:
    if (ctx->pc == 0x48D1CCu) {
        ctx->pc = 0x48D1CCu;
            // 0x48d1cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D1D0u;
        goto label_48d1d0;
    }
    ctx->pc = 0x48D1C8u;
    SET_GPR_U32(ctx, 31, 0x48D1D0u);
    ctx->pc = 0x48D1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D1C8u;
            // 0x48d1cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x497DF0u;
    if (runtime->hasFunction(0x497DF0u)) {
        auto targetFn = runtime->lookupFunction(0x497DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D1D0u; }
        if (ctx->pc != 0x48D1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497DF0_0x497df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D1D0u; }
        if (ctx->pc != 0x48D1D0u) { return; }
    }
    ctx->pc = 0x48D1D0u;
label_48d1d0:
    // 0x48d1d0: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x48d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_48d1d4:
    // 0x48d1d4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_48d1d8:
    if (ctx->pc == 0x48D1D8u) {
        ctx->pc = 0x48D1D8u;
            // 0x48d1d8: 0x26220024  addiu       $v0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->pc = 0x48D1DCu;
        goto label_48d1dc;
    }
    ctx->pc = 0x48D1D4u;
    {
        const bool branch_taken_0x48d1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d1d4) {
            ctx->pc = 0x48D1D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D1D4u;
            // 0x48d1d8: 0x26220024  addiu       $v0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D218u;
            goto label_48d218;
        }
    }
    ctx->pc = 0x48D1DCu;
label_48d1dc:
    // 0x48d1dc: 0x26240044  addiu       $a0, $s1, 0x44
    ctx->pc = 0x48d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_48d1e0:
    // 0x48d1e0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_48d1e4:
    if (ctx->pc == 0x48D1E4u) {
        ctx->pc = 0x48D1E4u;
            // 0x48d1e4: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->pc = 0x48D1E8u;
        goto label_48d1e8;
    }
    ctx->pc = 0x48D1E0u;
    {
        const bool branch_taken_0x48d1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d1e0) {
            ctx->pc = 0x48D1E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D1E0u;
            // 0x48d1e4: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D1FCu;
            goto label_48d1fc;
        }
    }
    ctx->pc = 0x48D1E8u;
label_48d1e8:
    // 0x48d1e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_48d1ec:
    if (ctx->pc == 0x48D1ECu) {
        ctx->pc = 0x48D1F0u;
        goto label_48d1f0;
    }
    ctx->pc = 0x48D1E8u;
    {
        const bool branch_taken_0x48d1e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d1e8) {
            ctx->pc = 0x48D1F8u;
            goto label_48d1f8;
        }
    }
    ctx->pc = 0x48D1F0u;
label_48d1f0:
    // 0x48d1f0: 0xc125f60  jal         func_497D80
label_48d1f4:
    if (ctx->pc == 0x48D1F4u) {
        ctx->pc = 0x48D1F4u;
            // 0x48d1f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D1F8u;
        goto label_48d1f8;
    }
    ctx->pc = 0x48D1F0u;
    SET_GPR_U32(ctx, 31, 0x48D1F8u);
    ctx->pc = 0x48D1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D1F0u;
            // 0x48d1f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x497D80u;
    if (runtime->hasFunction(0x497D80u)) {
        auto targetFn = runtime->lookupFunction(0x497D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D1F8u; }
        if (ctx->pc != 0x48D1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497D80_0x497d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D1F8u; }
        if (ctx->pc != 0x48D1F8u) { return; }
    }
    ctx->pc = 0x48D1F8u;
label_48d1f8:
    // 0x48d1f8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x48d1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_48d1fc:
    // 0x48d1fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_48d200:
    if (ctx->pc == 0x48D200u) {
        ctx->pc = 0x48D204u;
        goto label_48d204;
    }
    ctx->pc = 0x48D1FCu;
    {
        const bool branch_taken_0x48d1fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d1fc) {
            ctx->pc = 0x48D214u;
            goto label_48d214;
        }
    }
    ctx->pc = 0x48D204u;
label_48d204:
    // 0x48d204: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_48d208:
    if (ctx->pc == 0x48D208u) {
        ctx->pc = 0x48D20Cu;
        goto label_48d20c;
    }
    ctx->pc = 0x48D204u;
    {
        const bool branch_taken_0x48d204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d204) {
            ctx->pc = 0x48D214u;
            goto label_48d214;
        }
    }
    ctx->pc = 0x48D20Cu;
label_48d20c:
    // 0x48d20c: 0xc125f44  jal         func_497D10
label_48d210:
    if (ctx->pc == 0x48D210u) {
        ctx->pc = 0x48D210u;
            // 0x48d210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D214u;
        goto label_48d214;
    }
    ctx->pc = 0x48D20Cu;
    SET_GPR_U32(ctx, 31, 0x48D214u);
    ctx->pc = 0x48D210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D20Cu;
            // 0x48d210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x497D10u;
    if (runtime->hasFunction(0x497D10u)) {
        auto targetFn = runtime->lookupFunction(0x497D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D214u; }
        if (ctx->pc != 0x48D214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497D10_0x497d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D214u; }
        if (ctx->pc != 0x48D214u) { return; }
    }
    ctx->pc = 0x48D214u;
label_48d214:
    // 0x48d214: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x48d214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_48d218:
    // 0x48d218: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_48d21c:
    if (ctx->pc == 0x48D21Cu) {
        ctx->pc = 0x48D21Cu;
            // 0x48d21c: 0x26220018  addiu       $v0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->pc = 0x48D220u;
        goto label_48d220;
    }
    ctx->pc = 0x48D218u;
    {
        const bool branch_taken_0x48d218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d218) {
            ctx->pc = 0x48D21Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D218u;
            // 0x48d21c: 0x26220018  addiu       $v0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D248u;
            goto label_48d248;
        }
    }
    ctx->pc = 0x48D220u;
label_48d220:
    // 0x48d220: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_48d224:
    if (ctx->pc == 0x48D224u) {
        ctx->pc = 0x48D228u;
        goto label_48d228;
    }
    ctx->pc = 0x48D220u;
    {
        const bool branch_taken_0x48d220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d220) {
            ctx->pc = 0x48D244u;
            goto label_48d244;
        }
    }
    ctx->pc = 0x48D228u;
label_48d228:
    // 0x48d228: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_48d22c:
    if (ctx->pc == 0x48D22Cu) {
        ctx->pc = 0x48D230u;
        goto label_48d230;
    }
    ctx->pc = 0x48D228u;
    {
        const bool branch_taken_0x48d228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d228) {
            ctx->pc = 0x48D244u;
            goto label_48d244;
        }
    }
    ctx->pc = 0x48D230u;
label_48d230:
    // 0x48d230: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x48d230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_48d234:
    // 0x48d234: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_48d238:
    if (ctx->pc == 0x48D238u) {
        ctx->pc = 0x48D23Cu;
        goto label_48d23c;
    }
    ctx->pc = 0x48D234u;
    {
        const bool branch_taken_0x48d234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d234) {
            ctx->pc = 0x48D244u;
            goto label_48d244;
        }
    }
    ctx->pc = 0x48D23Cu;
label_48d23c:
    // 0x48d23c: 0xc0400a8  jal         func_1002A0
label_48d240:
    if (ctx->pc == 0x48D240u) {
        ctx->pc = 0x48D244u;
        goto label_48d244;
    }
    ctx->pc = 0x48D23Cu;
    SET_GPR_U32(ctx, 31, 0x48D244u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D244u; }
        if (ctx->pc != 0x48D244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D244u; }
        if (ctx->pc != 0x48D244u) { return; }
    }
    ctx->pc = 0x48D244u;
label_48d244:
    // 0x48d244: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x48d244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_48d248:
    // 0x48d248: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_48d24c:
    if (ctx->pc == 0x48D24Cu) {
        ctx->pc = 0x48D24Cu;
            // 0x48d24c: 0x2622000c  addiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x48D250u;
        goto label_48d250;
    }
    ctx->pc = 0x48D248u;
    {
        const bool branch_taken_0x48d248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d248) {
            ctx->pc = 0x48D24Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D248u;
            // 0x48d24c: 0x2622000c  addiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D278u;
            goto label_48d278;
        }
    }
    ctx->pc = 0x48D250u;
label_48d250:
    // 0x48d250: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_48d254:
    if (ctx->pc == 0x48D254u) {
        ctx->pc = 0x48D258u;
        goto label_48d258;
    }
    ctx->pc = 0x48D250u;
    {
        const bool branch_taken_0x48d250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d250) {
            ctx->pc = 0x48D274u;
            goto label_48d274;
        }
    }
    ctx->pc = 0x48D258u;
label_48d258:
    // 0x48d258: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_48d25c:
    if (ctx->pc == 0x48D25Cu) {
        ctx->pc = 0x48D260u;
        goto label_48d260;
    }
    ctx->pc = 0x48D258u;
    {
        const bool branch_taken_0x48d258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d258) {
            ctx->pc = 0x48D274u;
            goto label_48d274;
        }
    }
    ctx->pc = 0x48D260u;
label_48d260:
    // 0x48d260: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x48d260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_48d264:
    // 0x48d264: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_48d268:
    if (ctx->pc == 0x48D268u) {
        ctx->pc = 0x48D26Cu;
        goto label_48d26c;
    }
    ctx->pc = 0x48D264u;
    {
        const bool branch_taken_0x48d264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d264) {
            ctx->pc = 0x48D274u;
            goto label_48d274;
        }
    }
    ctx->pc = 0x48D26Cu;
label_48d26c:
    // 0x48d26c: 0xc0400a8  jal         func_1002A0
label_48d270:
    if (ctx->pc == 0x48D270u) {
        ctx->pc = 0x48D274u;
        goto label_48d274;
    }
    ctx->pc = 0x48D26Cu;
    SET_GPR_U32(ctx, 31, 0x48D274u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D274u; }
        if (ctx->pc != 0x48D274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D274u; }
        if (ctx->pc != 0x48D274u) { return; }
    }
    ctx->pc = 0x48D274u;
label_48d274:
    // 0x48d274: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x48d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_48d278:
    // 0x48d278: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_48d27c:
    if (ctx->pc == 0x48D27Cu) {
        ctx->pc = 0x48D27Cu;
            // 0x48d27c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x48D280u;
        goto label_48d280;
    }
    ctx->pc = 0x48D278u;
    {
        const bool branch_taken_0x48d278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d278) {
            ctx->pc = 0x48D27Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D278u;
            // 0x48d27c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D2A8u;
            goto label_48d2a8;
        }
    }
    ctx->pc = 0x48D280u;
label_48d280:
    // 0x48d280: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_48d284:
    if (ctx->pc == 0x48D284u) {
        ctx->pc = 0x48D288u;
        goto label_48d288;
    }
    ctx->pc = 0x48D280u;
    {
        const bool branch_taken_0x48d280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d280) {
            ctx->pc = 0x48D2A4u;
            goto label_48d2a4;
        }
    }
    ctx->pc = 0x48D288u;
label_48d288:
    // 0x48d288: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_48d28c:
    if (ctx->pc == 0x48D28Cu) {
        ctx->pc = 0x48D290u;
        goto label_48d290;
    }
    ctx->pc = 0x48D288u;
    {
        const bool branch_taken_0x48d288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d288) {
            ctx->pc = 0x48D2A4u;
            goto label_48d2a4;
        }
    }
    ctx->pc = 0x48D290u;
label_48d290:
    // 0x48d290: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x48d290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_48d294:
    // 0x48d294: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_48d298:
    if (ctx->pc == 0x48D298u) {
        ctx->pc = 0x48D29Cu;
        goto label_48d29c;
    }
    ctx->pc = 0x48D294u;
    {
        const bool branch_taken_0x48d294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d294) {
            ctx->pc = 0x48D2A4u;
            goto label_48d2a4;
        }
    }
    ctx->pc = 0x48D29Cu;
label_48d29c:
    // 0x48d29c: 0xc0400a8  jal         func_1002A0
label_48d2a0:
    if (ctx->pc == 0x48D2A0u) {
        ctx->pc = 0x48D2A4u;
        goto label_48d2a4;
    }
    ctx->pc = 0x48D29Cu;
    SET_GPR_U32(ctx, 31, 0x48D2A4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D2A4u; }
        if (ctx->pc != 0x48D2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D2A4u; }
        if (ctx->pc != 0x48D2A4u) { return; }
    }
    ctx->pc = 0x48D2A4u;
label_48d2a4:
    // 0x48d2a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x48d2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_48d2a8:
    // 0x48d2a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48d2a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_48d2ac:
    // 0x48d2ac: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_48d2b0:
    if (ctx->pc == 0x48D2B0u) {
        ctx->pc = 0x48D2B0u;
            // 0x48d2b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D2B4u;
        goto label_48d2b4;
    }
    ctx->pc = 0x48D2ACu;
    {
        const bool branch_taken_0x48d2ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48d2ac) {
            ctx->pc = 0x48D2B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D2ACu;
            // 0x48d2b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D2C0u;
            goto label_48d2c0;
        }
    }
    ctx->pc = 0x48D2B4u;
label_48d2b4:
    // 0x48d2b4: 0xc0400a8  jal         func_1002A0
label_48d2b8:
    if (ctx->pc == 0x48D2B8u) {
        ctx->pc = 0x48D2B8u;
            // 0x48d2b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D2BCu;
        goto label_48d2bc;
    }
    ctx->pc = 0x48D2B4u;
    SET_GPR_U32(ctx, 31, 0x48D2BCu);
    ctx->pc = 0x48D2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D2B4u;
            // 0x48d2b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D2BCu; }
        if (ctx->pc != 0x48D2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D2BCu; }
        if (ctx->pc != 0x48D2BCu) { return; }
    }
    ctx->pc = 0x48D2BCu;
label_48d2bc:
    // 0x48d2bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x48d2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48d2c0:
    // 0x48d2c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x48d2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_48d2c4:
    // 0x48d2c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48d2c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48d2c8:
    // 0x48d2c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48d2c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48d2cc:
    // 0x48d2cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48d2ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48d2d0:
    // 0x48d2d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48d2d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48d2d4:
    // 0x48d2d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48d2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48d2d8:
    // 0x48d2d8: 0x3e00008  jr          $ra
label_48d2dc:
    if (ctx->pc == 0x48D2DCu) {
        ctx->pc = 0x48D2DCu;
            // 0x48d2dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x48D2E0u;
        goto label_fallthrough_0x48d2d8;
    }
    ctx->pc = 0x48D2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D2D8u;
            // 0x48d2dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x48d2d8:
    ctx->pc = 0x48D2E0u;
}
