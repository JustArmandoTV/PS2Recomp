#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033CC00
// Address: 0x33cc00 - 0x33eea0
void sub_0033CC00_0x33cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CC00_0x33cc00");
#endif

    switch (ctx->pc) {
        case 0x33cc00u: goto label_33cc00;
        case 0x33cc04u: goto label_33cc04;
        case 0x33cc08u: goto label_33cc08;
        case 0x33cc0cu: goto label_33cc0c;
        case 0x33cc10u: goto label_33cc10;
        case 0x33cc14u: goto label_33cc14;
        case 0x33cc18u: goto label_33cc18;
        case 0x33cc1cu: goto label_33cc1c;
        case 0x33cc20u: goto label_33cc20;
        case 0x33cc24u: goto label_33cc24;
        case 0x33cc28u: goto label_33cc28;
        case 0x33cc2cu: goto label_33cc2c;
        case 0x33cc30u: goto label_33cc30;
        case 0x33cc34u: goto label_33cc34;
        case 0x33cc38u: goto label_33cc38;
        case 0x33cc3cu: goto label_33cc3c;
        case 0x33cc40u: goto label_33cc40;
        case 0x33cc44u: goto label_33cc44;
        case 0x33cc48u: goto label_33cc48;
        case 0x33cc4cu: goto label_33cc4c;
        case 0x33cc50u: goto label_33cc50;
        case 0x33cc54u: goto label_33cc54;
        case 0x33cc58u: goto label_33cc58;
        case 0x33cc5cu: goto label_33cc5c;
        case 0x33cc60u: goto label_33cc60;
        case 0x33cc64u: goto label_33cc64;
        case 0x33cc68u: goto label_33cc68;
        case 0x33cc6cu: goto label_33cc6c;
        case 0x33cc70u: goto label_33cc70;
        case 0x33cc74u: goto label_33cc74;
        case 0x33cc78u: goto label_33cc78;
        case 0x33cc7cu: goto label_33cc7c;
        case 0x33cc80u: goto label_33cc80;
        case 0x33cc84u: goto label_33cc84;
        case 0x33cc88u: goto label_33cc88;
        case 0x33cc8cu: goto label_33cc8c;
        case 0x33cc90u: goto label_33cc90;
        case 0x33cc94u: goto label_33cc94;
        case 0x33cc98u: goto label_33cc98;
        case 0x33cc9cu: goto label_33cc9c;
        case 0x33cca0u: goto label_33cca0;
        case 0x33cca4u: goto label_33cca4;
        case 0x33cca8u: goto label_33cca8;
        case 0x33ccacu: goto label_33ccac;
        case 0x33ccb0u: goto label_33ccb0;
        case 0x33ccb4u: goto label_33ccb4;
        case 0x33ccb8u: goto label_33ccb8;
        case 0x33ccbcu: goto label_33ccbc;
        case 0x33ccc0u: goto label_33ccc0;
        case 0x33ccc4u: goto label_33ccc4;
        case 0x33ccc8u: goto label_33ccc8;
        case 0x33ccccu: goto label_33cccc;
        case 0x33ccd0u: goto label_33ccd0;
        case 0x33ccd4u: goto label_33ccd4;
        case 0x33ccd8u: goto label_33ccd8;
        case 0x33ccdcu: goto label_33ccdc;
        case 0x33cce0u: goto label_33cce0;
        case 0x33cce4u: goto label_33cce4;
        case 0x33cce8u: goto label_33cce8;
        case 0x33ccecu: goto label_33ccec;
        case 0x33ccf0u: goto label_33ccf0;
        case 0x33ccf4u: goto label_33ccf4;
        case 0x33ccf8u: goto label_33ccf8;
        case 0x33ccfcu: goto label_33ccfc;
        case 0x33cd00u: goto label_33cd00;
        case 0x33cd04u: goto label_33cd04;
        case 0x33cd08u: goto label_33cd08;
        case 0x33cd0cu: goto label_33cd0c;
        case 0x33cd10u: goto label_33cd10;
        case 0x33cd14u: goto label_33cd14;
        case 0x33cd18u: goto label_33cd18;
        case 0x33cd1cu: goto label_33cd1c;
        case 0x33cd20u: goto label_33cd20;
        case 0x33cd24u: goto label_33cd24;
        case 0x33cd28u: goto label_33cd28;
        case 0x33cd2cu: goto label_33cd2c;
        case 0x33cd30u: goto label_33cd30;
        case 0x33cd34u: goto label_33cd34;
        case 0x33cd38u: goto label_33cd38;
        case 0x33cd3cu: goto label_33cd3c;
        case 0x33cd40u: goto label_33cd40;
        case 0x33cd44u: goto label_33cd44;
        case 0x33cd48u: goto label_33cd48;
        case 0x33cd4cu: goto label_33cd4c;
        case 0x33cd50u: goto label_33cd50;
        case 0x33cd54u: goto label_33cd54;
        case 0x33cd58u: goto label_33cd58;
        case 0x33cd5cu: goto label_33cd5c;
        case 0x33cd60u: goto label_33cd60;
        case 0x33cd64u: goto label_33cd64;
        case 0x33cd68u: goto label_33cd68;
        case 0x33cd6cu: goto label_33cd6c;
        case 0x33cd70u: goto label_33cd70;
        case 0x33cd74u: goto label_33cd74;
        case 0x33cd78u: goto label_33cd78;
        case 0x33cd7cu: goto label_33cd7c;
        case 0x33cd80u: goto label_33cd80;
        case 0x33cd84u: goto label_33cd84;
        case 0x33cd88u: goto label_33cd88;
        case 0x33cd8cu: goto label_33cd8c;
        case 0x33cd90u: goto label_33cd90;
        case 0x33cd94u: goto label_33cd94;
        case 0x33cd98u: goto label_33cd98;
        case 0x33cd9cu: goto label_33cd9c;
        case 0x33cda0u: goto label_33cda0;
        case 0x33cda4u: goto label_33cda4;
        case 0x33cda8u: goto label_33cda8;
        case 0x33cdacu: goto label_33cdac;
        case 0x33cdb0u: goto label_33cdb0;
        case 0x33cdb4u: goto label_33cdb4;
        case 0x33cdb8u: goto label_33cdb8;
        case 0x33cdbcu: goto label_33cdbc;
        case 0x33cdc0u: goto label_33cdc0;
        case 0x33cdc4u: goto label_33cdc4;
        case 0x33cdc8u: goto label_33cdc8;
        case 0x33cdccu: goto label_33cdcc;
        case 0x33cdd0u: goto label_33cdd0;
        case 0x33cdd4u: goto label_33cdd4;
        case 0x33cdd8u: goto label_33cdd8;
        case 0x33cddcu: goto label_33cddc;
        case 0x33cde0u: goto label_33cde0;
        case 0x33cde4u: goto label_33cde4;
        case 0x33cde8u: goto label_33cde8;
        case 0x33cdecu: goto label_33cdec;
        case 0x33cdf0u: goto label_33cdf0;
        case 0x33cdf4u: goto label_33cdf4;
        case 0x33cdf8u: goto label_33cdf8;
        case 0x33cdfcu: goto label_33cdfc;
        case 0x33ce00u: goto label_33ce00;
        case 0x33ce04u: goto label_33ce04;
        case 0x33ce08u: goto label_33ce08;
        case 0x33ce0cu: goto label_33ce0c;
        case 0x33ce10u: goto label_33ce10;
        case 0x33ce14u: goto label_33ce14;
        case 0x33ce18u: goto label_33ce18;
        case 0x33ce1cu: goto label_33ce1c;
        case 0x33ce20u: goto label_33ce20;
        case 0x33ce24u: goto label_33ce24;
        case 0x33ce28u: goto label_33ce28;
        case 0x33ce2cu: goto label_33ce2c;
        case 0x33ce30u: goto label_33ce30;
        case 0x33ce34u: goto label_33ce34;
        case 0x33ce38u: goto label_33ce38;
        case 0x33ce3cu: goto label_33ce3c;
        case 0x33ce40u: goto label_33ce40;
        case 0x33ce44u: goto label_33ce44;
        case 0x33ce48u: goto label_33ce48;
        case 0x33ce4cu: goto label_33ce4c;
        case 0x33ce50u: goto label_33ce50;
        case 0x33ce54u: goto label_33ce54;
        case 0x33ce58u: goto label_33ce58;
        case 0x33ce5cu: goto label_33ce5c;
        case 0x33ce60u: goto label_33ce60;
        case 0x33ce64u: goto label_33ce64;
        case 0x33ce68u: goto label_33ce68;
        case 0x33ce6cu: goto label_33ce6c;
        case 0x33ce70u: goto label_33ce70;
        case 0x33ce74u: goto label_33ce74;
        case 0x33ce78u: goto label_33ce78;
        case 0x33ce7cu: goto label_33ce7c;
        case 0x33ce80u: goto label_33ce80;
        case 0x33ce84u: goto label_33ce84;
        case 0x33ce88u: goto label_33ce88;
        case 0x33ce8cu: goto label_33ce8c;
        case 0x33ce90u: goto label_33ce90;
        case 0x33ce94u: goto label_33ce94;
        case 0x33ce98u: goto label_33ce98;
        case 0x33ce9cu: goto label_33ce9c;
        case 0x33cea0u: goto label_33cea0;
        case 0x33cea4u: goto label_33cea4;
        case 0x33cea8u: goto label_33cea8;
        case 0x33ceacu: goto label_33ceac;
        case 0x33ceb0u: goto label_33ceb0;
        case 0x33ceb4u: goto label_33ceb4;
        case 0x33ceb8u: goto label_33ceb8;
        case 0x33cebcu: goto label_33cebc;
        case 0x33cec0u: goto label_33cec0;
        case 0x33cec4u: goto label_33cec4;
        case 0x33cec8u: goto label_33cec8;
        case 0x33ceccu: goto label_33cecc;
        case 0x33ced0u: goto label_33ced0;
        case 0x33ced4u: goto label_33ced4;
        case 0x33ced8u: goto label_33ced8;
        case 0x33cedcu: goto label_33cedc;
        case 0x33cee0u: goto label_33cee0;
        case 0x33cee4u: goto label_33cee4;
        case 0x33cee8u: goto label_33cee8;
        case 0x33ceecu: goto label_33ceec;
        case 0x33cef0u: goto label_33cef0;
        case 0x33cef4u: goto label_33cef4;
        case 0x33cef8u: goto label_33cef8;
        case 0x33cefcu: goto label_33cefc;
        case 0x33cf00u: goto label_33cf00;
        case 0x33cf04u: goto label_33cf04;
        case 0x33cf08u: goto label_33cf08;
        case 0x33cf0cu: goto label_33cf0c;
        case 0x33cf10u: goto label_33cf10;
        case 0x33cf14u: goto label_33cf14;
        case 0x33cf18u: goto label_33cf18;
        case 0x33cf1cu: goto label_33cf1c;
        case 0x33cf20u: goto label_33cf20;
        case 0x33cf24u: goto label_33cf24;
        case 0x33cf28u: goto label_33cf28;
        case 0x33cf2cu: goto label_33cf2c;
        case 0x33cf30u: goto label_33cf30;
        case 0x33cf34u: goto label_33cf34;
        case 0x33cf38u: goto label_33cf38;
        case 0x33cf3cu: goto label_33cf3c;
        case 0x33cf40u: goto label_33cf40;
        case 0x33cf44u: goto label_33cf44;
        case 0x33cf48u: goto label_33cf48;
        case 0x33cf4cu: goto label_33cf4c;
        case 0x33cf50u: goto label_33cf50;
        case 0x33cf54u: goto label_33cf54;
        case 0x33cf58u: goto label_33cf58;
        case 0x33cf5cu: goto label_33cf5c;
        case 0x33cf60u: goto label_33cf60;
        case 0x33cf64u: goto label_33cf64;
        case 0x33cf68u: goto label_33cf68;
        case 0x33cf6cu: goto label_33cf6c;
        case 0x33cf70u: goto label_33cf70;
        case 0x33cf74u: goto label_33cf74;
        case 0x33cf78u: goto label_33cf78;
        case 0x33cf7cu: goto label_33cf7c;
        case 0x33cf80u: goto label_33cf80;
        case 0x33cf84u: goto label_33cf84;
        case 0x33cf88u: goto label_33cf88;
        case 0x33cf8cu: goto label_33cf8c;
        case 0x33cf90u: goto label_33cf90;
        case 0x33cf94u: goto label_33cf94;
        case 0x33cf98u: goto label_33cf98;
        case 0x33cf9cu: goto label_33cf9c;
        case 0x33cfa0u: goto label_33cfa0;
        case 0x33cfa4u: goto label_33cfa4;
        case 0x33cfa8u: goto label_33cfa8;
        case 0x33cfacu: goto label_33cfac;
        case 0x33cfb0u: goto label_33cfb0;
        case 0x33cfb4u: goto label_33cfb4;
        case 0x33cfb8u: goto label_33cfb8;
        case 0x33cfbcu: goto label_33cfbc;
        case 0x33cfc0u: goto label_33cfc0;
        case 0x33cfc4u: goto label_33cfc4;
        case 0x33cfc8u: goto label_33cfc8;
        case 0x33cfccu: goto label_33cfcc;
        case 0x33cfd0u: goto label_33cfd0;
        case 0x33cfd4u: goto label_33cfd4;
        case 0x33cfd8u: goto label_33cfd8;
        case 0x33cfdcu: goto label_33cfdc;
        case 0x33cfe0u: goto label_33cfe0;
        case 0x33cfe4u: goto label_33cfe4;
        case 0x33cfe8u: goto label_33cfe8;
        case 0x33cfecu: goto label_33cfec;
        case 0x33cff0u: goto label_33cff0;
        case 0x33cff4u: goto label_33cff4;
        case 0x33cff8u: goto label_33cff8;
        case 0x33cffcu: goto label_33cffc;
        case 0x33d000u: goto label_33d000;
        case 0x33d004u: goto label_33d004;
        case 0x33d008u: goto label_33d008;
        case 0x33d00cu: goto label_33d00c;
        case 0x33d010u: goto label_33d010;
        case 0x33d014u: goto label_33d014;
        case 0x33d018u: goto label_33d018;
        case 0x33d01cu: goto label_33d01c;
        case 0x33d020u: goto label_33d020;
        case 0x33d024u: goto label_33d024;
        case 0x33d028u: goto label_33d028;
        case 0x33d02cu: goto label_33d02c;
        case 0x33d030u: goto label_33d030;
        case 0x33d034u: goto label_33d034;
        case 0x33d038u: goto label_33d038;
        case 0x33d03cu: goto label_33d03c;
        case 0x33d040u: goto label_33d040;
        case 0x33d044u: goto label_33d044;
        case 0x33d048u: goto label_33d048;
        case 0x33d04cu: goto label_33d04c;
        case 0x33d050u: goto label_33d050;
        case 0x33d054u: goto label_33d054;
        case 0x33d058u: goto label_33d058;
        case 0x33d05cu: goto label_33d05c;
        case 0x33d060u: goto label_33d060;
        case 0x33d064u: goto label_33d064;
        case 0x33d068u: goto label_33d068;
        case 0x33d06cu: goto label_33d06c;
        case 0x33d070u: goto label_33d070;
        case 0x33d074u: goto label_33d074;
        case 0x33d078u: goto label_33d078;
        case 0x33d07cu: goto label_33d07c;
        case 0x33d080u: goto label_33d080;
        case 0x33d084u: goto label_33d084;
        case 0x33d088u: goto label_33d088;
        case 0x33d08cu: goto label_33d08c;
        case 0x33d090u: goto label_33d090;
        case 0x33d094u: goto label_33d094;
        case 0x33d098u: goto label_33d098;
        case 0x33d09cu: goto label_33d09c;
        case 0x33d0a0u: goto label_33d0a0;
        case 0x33d0a4u: goto label_33d0a4;
        case 0x33d0a8u: goto label_33d0a8;
        case 0x33d0acu: goto label_33d0ac;
        case 0x33d0b0u: goto label_33d0b0;
        case 0x33d0b4u: goto label_33d0b4;
        case 0x33d0b8u: goto label_33d0b8;
        case 0x33d0bcu: goto label_33d0bc;
        case 0x33d0c0u: goto label_33d0c0;
        case 0x33d0c4u: goto label_33d0c4;
        case 0x33d0c8u: goto label_33d0c8;
        case 0x33d0ccu: goto label_33d0cc;
        case 0x33d0d0u: goto label_33d0d0;
        case 0x33d0d4u: goto label_33d0d4;
        case 0x33d0d8u: goto label_33d0d8;
        case 0x33d0dcu: goto label_33d0dc;
        case 0x33d0e0u: goto label_33d0e0;
        case 0x33d0e4u: goto label_33d0e4;
        case 0x33d0e8u: goto label_33d0e8;
        case 0x33d0ecu: goto label_33d0ec;
        case 0x33d0f0u: goto label_33d0f0;
        case 0x33d0f4u: goto label_33d0f4;
        case 0x33d0f8u: goto label_33d0f8;
        case 0x33d0fcu: goto label_33d0fc;
        case 0x33d100u: goto label_33d100;
        case 0x33d104u: goto label_33d104;
        case 0x33d108u: goto label_33d108;
        case 0x33d10cu: goto label_33d10c;
        case 0x33d110u: goto label_33d110;
        case 0x33d114u: goto label_33d114;
        case 0x33d118u: goto label_33d118;
        case 0x33d11cu: goto label_33d11c;
        case 0x33d120u: goto label_33d120;
        case 0x33d124u: goto label_33d124;
        case 0x33d128u: goto label_33d128;
        case 0x33d12cu: goto label_33d12c;
        case 0x33d130u: goto label_33d130;
        case 0x33d134u: goto label_33d134;
        case 0x33d138u: goto label_33d138;
        case 0x33d13cu: goto label_33d13c;
        case 0x33d140u: goto label_33d140;
        case 0x33d144u: goto label_33d144;
        case 0x33d148u: goto label_33d148;
        case 0x33d14cu: goto label_33d14c;
        case 0x33d150u: goto label_33d150;
        case 0x33d154u: goto label_33d154;
        case 0x33d158u: goto label_33d158;
        case 0x33d15cu: goto label_33d15c;
        case 0x33d160u: goto label_33d160;
        case 0x33d164u: goto label_33d164;
        case 0x33d168u: goto label_33d168;
        case 0x33d16cu: goto label_33d16c;
        case 0x33d170u: goto label_33d170;
        case 0x33d174u: goto label_33d174;
        case 0x33d178u: goto label_33d178;
        case 0x33d17cu: goto label_33d17c;
        case 0x33d180u: goto label_33d180;
        case 0x33d184u: goto label_33d184;
        case 0x33d188u: goto label_33d188;
        case 0x33d18cu: goto label_33d18c;
        case 0x33d190u: goto label_33d190;
        case 0x33d194u: goto label_33d194;
        case 0x33d198u: goto label_33d198;
        case 0x33d19cu: goto label_33d19c;
        case 0x33d1a0u: goto label_33d1a0;
        case 0x33d1a4u: goto label_33d1a4;
        case 0x33d1a8u: goto label_33d1a8;
        case 0x33d1acu: goto label_33d1ac;
        case 0x33d1b0u: goto label_33d1b0;
        case 0x33d1b4u: goto label_33d1b4;
        case 0x33d1b8u: goto label_33d1b8;
        case 0x33d1bcu: goto label_33d1bc;
        case 0x33d1c0u: goto label_33d1c0;
        case 0x33d1c4u: goto label_33d1c4;
        case 0x33d1c8u: goto label_33d1c8;
        case 0x33d1ccu: goto label_33d1cc;
        case 0x33d1d0u: goto label_33d1d0;
        case 0x33d1d4u: goto label_33d1d4;
        case 0x33d1d8u: goto label_33d1d8;
        case 0x33d1dcu: goto label_33d1dc;
        case 0x33d1e0u: goto label_33d1e0;
        case 0x33d1e4u: goto label_33d1e4;
        case 0x33d1e8u: goto label_33d1e8;
        case 0x33d1ecu: goto label_33d1ec;
        case 0x33d1f0u: goto label_33d1f0;
        case 0x33d1f4u: goto label_33d1f4;
        case 0x33d1f8u: goto label_33d1f8;
        case 0x33d1fcu: goto label_33d1fc;
        case 0x33d200u: goto label_33d200;
        case 0x33d204u: goto label_33d204;
        case 0x33d208u: goto label_33d208;
        case 0x33d20cu: goto label_33d20c;
        case 0x33d210u: goto label_33d210;
        case 0x33d214u: goto label_33d214;
        case 0x33d218u: goto label_33d218;
        case 0x33d21cu: goto label_33d21c;
        case 0x33d220u: goto label_33d220;
        case 0x33d224u: goto label_33d224;
        case 0x33d228u: goto label_33d228;
        case 0x33d22cu: goto label_33d22c;
        case 0x33d230u: goto label_33d230;
        case 0x33d234u: goto label_33d234;
        case 0x33d238u: goto label_33d238;
        case 0x33d23cu: goto label_33d23c;
        case 0x33d240u: goto label_33d240;
        case 0x33d244u: goto label_33d244;
        case 0x33d248u: goto label_33d248;
        case 0x33d24cu: goto label_33d24c;
        case 0x33d250u: goto label_33d250;
        case 0x33d254u: goto label_33d254;
        case 0x33d258u: goto label_33d258;
        case 0x33d25cu: goto label_33d25c;
        case 0x33d260u: goto label_33d260;
        case 0x33d264u: goto label_33d264;
        case 0x33d268u: goto label_33d268;
        case 0x33d26cu: goto label_33d26c;
        case 0x33d270u: goto label_33d270;
        case 0x33d274u: goto label_33d274;
        case 0x33d278u: goto label_33d278;
        case 0x33d27cu: goto label_33d27c;
        case 0x33d280u: goto label_33d280;
        case 0x33d284u: goto label_33d284;
        case 0x33d288u: goto label_33d288;
        case 0x33d28cu: goto label_33d28c;
        case 0x33d290u: goto label_33d290;
        case 0x33d294u: goto label_33d294;
        case 0x33d298u: goto label_33d298;
        case 0x33d29cu: goto label_33d29c;
        case 0x33d2a0u: goto label_33d2a0;
        case 0x33d2a4u: goto label_33d2a4;
        case 0x33d2a8u: goto label_33d2a8;
        case 0x33d2acu: goto label_33d2ac;
        case 0x33d2b0u: goto label_33d2b0;
        case 0x33d2b4u: goto label_33d2b4;
        case 0x33d2b8u: goto label_33d2b8;
        case 0x33d2bcu: goto label_33d2bc;
        case 0x33d2c0u: goto label_33d2c0;
        case 0x33d2c4u: goto label_33d2c4;
        case 0x33d2c8u: goto label_33d2c8;
        case 0x33d2ccu: goto label_33d2cc;
        case 0x33d2d0u: goto label_33d2d0;
        case 0x33d2d4u: goto label_33d2d4;
        case 0x33d2d8u: goto label_33d2d8;
        case 0x33d2dcu: goto label_33d2dc;
        case 0x33d2e0u: goto label_33d2e0;
        case 0x33d2e4u: goto label_33d2e4;
        case 0x33d2e8u: goto label_33d2e8;
        case 0x33d2ecu: goto label_33d2ec;
        case 0x33d2f0u: goto label_33d2f0;
        case 0x33d2f4u: goto label_33d2f4;
        case 0x33d2f8u: goto label_33d2f8;
        case 0x33d2fcu: goto label_33d2fc;
        case 0x33d300u: goto label_33d300;
        case 0x33d304u: goto label_33d304;
        case 0x33d308u: goto label_33d308;
        case 0x33d30cu: goto label_33d30c;
        case 0x33d310u: goto label_33d310;
        case 0x33d314u: goto label_33d314;
        case 0x33d318u: goto label_33d318;
        case 0x33d31cu: goto label_33d31c;
        case 0x33d320u: goto label_33d320;
        case 0x33d324u: goto label_33d324;
        case 0x33d328u: goto label_33d328;
        case 0x33d32cu: goto label_33d32c;
        case 0x33d330u: goto label_33d330;
        case 0x33d334u: goto label_33d334;
        case 0x33d338u: goto label_33d338;
        case 0x33d33cu: goto label_33d33c;
        case 0x33d340u: goto label_33d340;
        case 0x33d344u: goto label_33d344;
        case 0x33d348u: goto label_33d348;
        case 0x33d34cu: goto label_33d34c;
        case 0x33d350u: goto label_33d350;
        case 0x33d354u: goto label_33d354;
        case 0x33d358u: goto label_33d358;
        case 0x33d35cu: goto label_33d35c;
        case 0x33d360u: goto label_33d360;
        case 0x33d364u: goto label_33d364;
        case 0x33d368u: goto label_33d368;
        case 0x33d36cu: goto label_33d36c;
        case 0x33d370u: goto label_33d370;
        case 0x33d374u: goto label_33d374;
        case 0x33d378u: goto label_33d378;
        case 0x33d37cu: goto label_33d37c;
        case 0x33d380u: goto label_33d380;
        case 0x33d384u: goto label_33d384;
        case 0x33d388u: goto label_33d388;
        case 0x33d38cu: goto label_33d38c;
        case 0x33d390u: goto label_33d390;
        case 0x33d394u: goto label_33d394;
        case 0x33d398u: goto label_33d398;
        case 0x33d39cu: goto label_33d39c;
        case 0x33d3a0u: goto label_33d3a0;
        case 0x33d3a4u: goto label_33d3a4;
        case 0x33d3a8u: goto label_33d3a8;
        case 0x33d3acu: goto label_33d3ac;
        case 0x33d3b0u: goto label_33d3b0;
        case 0x33d3b4u: goto label_33d3b4;
        case 0x33d3b8u: goto label_33d3b8;
        case 0x33d3bcu: goto label_33d3bc;
        case 0x33d3c0u: goto label_33d3c0;
        case 0x33d3c4u: goto label_33d3c4;
        case 0x33d3c8u: goto label_33d3c8;
        case 0x33d3ccu: goto label_33d3cc;
        case 0x33d3d0u: goto label_33d3d0;
        case 0x33d3d4u: goto label_33d3d4;
        case 0x33d3d8u: goto label_33d3d8;
        case 0x33d3dcu: goto label_33d3dc;
        case 0x33d3e0u: goto label_33d3e0;
        case 0x33d3e4u: goto label_33d3e4;
        case 0x33d3e8u: goto label_33d3e8;
        case 0x33d3ecu: goto label_33d3ec;
        case 0x33d3f0u: goto label_33d3f0;
        case 0x33d3f4u: goto label_33d3f4;
        case 0x33d3f8u: goto label_33d3f8;
        case 0x33d3fcu: goto label_33d3fc;
        case 0x33d400u: goto label_33d400;
        case 0x33d404u: goto label_33d404;
        case 0x33d408u: goto label_33d408;
        case 0x33d40cu: goto label_33d40c;
        case 0x33d410u: goto label_33d410;
        case 0x33d414u: goto label_33d414;
        case 0x33d418u: goto label_33d418;
        case 0x33d41cu: goto label_33d41c;
        case 0x33d420u: goto label_33d420;
        case 0x33d424u: goto label_33d424;
        case 0x33d428u: goto label_33d428;
        case 0x33d42cu: goto label_33d42c;
        case 0x33d430u: goto label_33d430;
        case 0x33d434u: goto label_33d434;
        case 0x33d438u: goto label_33d438;
        case 0x33d43cu: goto label_33d43c;
        case 0x33d440u: goto label_33d440;
        case 0x33d444u: goto label_33d444;
        case 0x33d448u: goto label_33d448;
        case 0x33d44cu: goto label_33d44c;
        case 0x33d450u: goto label_33d450;
        case 0x33d454u: goto label_33d454;
        case 0x33d458u: goto label_33d458;
        case 0x33d45cu: goto label_33d45c;
        case 0x33d460u: goto label_33d460;
        case 0x33d464u: goto label_33d464;
        case 0x33d468u: goto label_33d468;
        case 0x33d46cu: goto label_33d46c;
        case 0x33d470u: goto label_33d470;
        case 0x33d474u: goto label_33d474;
        case 0x33d478u: goto label_33d478;
        case 0x33d47cu: goto label_33d47c;
        case 0x33d480u: goto label_33d480;
        case 0x33d484u: goto label_33d484;
        case 0x33d488u: goto label_33d488;
        case 0x33d48cu: goto label_33d48c;
        case 0x33d490u: goto label_33d490;
        case 0x33d494u: goto label_33d494;
        case 0x33d498u: goto label_33d498;
        case 0x33d49cu: goto label_33d49c;
        case 0x33d4a0u: goto label_33d4a0;
        case 0x33d4a4u: goto label_33d4a4;
        case 0x33d4a8u: goto label_33d4a8;
        case 0x33d4acu: goto label_33d4ac;
        case 0x33d4b0u: goto label_33d4b0;
        case 0x33d4b4u: goto label_33d4b4;
        case 0x33d4b8u: goto label_33d4b8;
        case 0x33d4bcu: goto label_33d4bc;
        case 0x33d4c0u: goto label_33d4c0;
        case 0x33d4c4u: goto label_33d4c4;
        case 0x33d4c8u: goto label_33d4c8;
        case 0x33d4ccu: goto label_33d4cc;
        case 0x33d4d0u: goto label_33d4d0;
        case 0x33d4d4u: goto label_33d4d4;
        case 0x33d4d8u: goto label_33d4d8;
        case 0x33d4dcu: goto label_33d4dc;
        case 0x33d4e0u: goto label_33d4e0;
        case 0x33d4e4u: goto label_33d4e4;
        case 0x33d4e8u: goto label_33d4e8;
        case 0x33d4ecu: goto label_33d4ec;
        case 0x33d4f0u: goto label_33d4f0;
        case 0x33d4f4u: goto label_33d4f4;
        case 0x33d4f8u: goto label_33d4f8;
        case 0x33d4fcu: goto label_33d4fc;
        case 0x33d500u: goto label_33d500;
        case 0x33d504u: goto label_33d504;
        case 0x33d508u: goto label_33d508;
        case 0x33d50cu: goto label_33d50c;
        case 0x33d510u: goto label_33d510;
        case 0x33d514u: goto label_33d514;
        case 0x33d518u: goto label_33d518;
        case 0x33d51cu: goto label_33d51c;
        case 0x33d520u: goto label_33d520;
        case 0x33d524u: goto label_33d524;
        case 0x33d528u: goto label_33d528;
        case 0x33d52cu: goto label_33d52c;
        case 0x33d530u: goto label_33d530;
        case 0x33d534u: goto label_33d534;
        case 0x33d538u: goto label_33d538;
        case 0x33d53cu: goto label_33d53c;
        case 0x33d540u: goto label_33d540;
        case 0x33d544u: goto label_33d544;
        case 0x33d548u: goto label_33d548;
        case 0x33d54cu: goto label_33d54c;
        case 0x33d550u: goto label_33d550;
        case 0x33d554u: goto label_33d554;
        case 0x33d558u: goto label_33d558;
        case 0x33d55cu: goto label_33d55c;
        case 0x33d560u: goto label_33d560;
        case 0x33d564u: goto label_33d564;
        case 0x33d568u: goto label_33d568;
        case 0x33d56cu: goto label_33d56c;
        case 0x33d570u: goto label_33d570;
        case 0x33d574u: goto label_33d574;
        case 0x33d578u: goto label_33d578;
        case 0x33d57cu: goto label_33d57c;
        case 0x33d580u: goto label_33d580;
        case 0x33d584u: goto label_33d584;
        case 0x33d588u: goto label_33d588;
        case 0x33d58cu: goto label_33d58c;
        case 0x33d590u: goto label_33d590;
        case 0x33d594u: goto label_33d594;
        case 0x33d598u: goto label_33d598;
        case 0x33d59cu: goto label_33d59c;
        case 0x33d5a0u: goto label_33d5a0;
        case 0x33d5a4u: goto label_33d5a4;
        case 0x33d5a8u: goto label_33d5a8;
        case 0x33d5acu: goto label_33d5ac;
        case 0x33d5b0u: goto label_33d5b0;
        case 0x33d5b4u: goto label_33d5b4;
        case 0x33d5b8u: goto label_33d5b8;
        case 0x33d5bcu: goto label_33d5bc;
        case 0x33d5c0u: goto label_33d5c0;
        case 0x33d5c4u: goto label_33d5c4;
        case 0x33d5c8u: goto label_33d5c8;
        case 0x33d5ccu: goto label_33d5cc;
        case 0x33d5d0u: goto label_33d5d0;
        case 0x33d5d4u: goto label_33d5d4;
        case 0x33d5d8u: goto label_33d5d8;
        case 0x33d5dcu: goto label_33d5dc;
        case 0x33d5e0u: goto label_33d5e0;
        case 0x33d5e4u: goto label_33d5e4;
        case 0x33d5e8u: goto label_33d5e8;
        case 0x33d5ecu: goto label_33d5ec;
        case 0x33d5f0u: goto label_33d5f0;
        case 0x33d5f4u: goto label_33d5f4;
        case 0x33d5f8u: goto label_33d5f8;
        case 0x33d5fcu: goto label_33d5fc;
        case 0x33d600u: goto label_33d600;
        case 0x33d604u: goto label_33d604;
        case 0x33d608u: goto label_33d608;
        case 0x33d60cu: goto label_33d60c;
        case 0x33d610u: goto label_33d610;
        case 0x33d614u: goto label_33d614;
        case 0x33d618u: goto label_33d618;
        case 0x33d61cu: goto label_33d61c;
        case 0x33d620u: goto label_33d620;
        case 0x33d624u: goto label_33d624;
        case 0x33d628u: goto label_33d628;
        case 0x33d62cu: goto label_33d62c;
        case 0x33d630u: goto label_33d630;
        case 0x33d634u: goto label_33d634;
        case 0x33d638u: goto label_33d638;
        case 0x33d63cu: goto label_33d63c;
        case 0x33d640u: goto label_33d640;
        case 0x33d644u: goto label_33d644;
        case 0x33d648u: goto label_33d648;
        case 0x33d64cu: goto label_33d64c;
        case 0x33d650u: goto label_33d650;
        case 0x33d654u: goto label_33d654;
        case 0x33d658u: goto label_33d658;
        case 0x33d65cu: goto label_33d65c;
        case 0x33d660u: goto label_33d660;
        case 0x33d664u: goto label_33d664;
        case 0x33d668u: goto label_33d668;
        case 0x33d66cu: goto label_33d66c;
        case 0x33d670u: goto label_33d670;
        case 0x33d674u: goto label_33d674;
        case 0x33d678u: goto label_33d678;
        case 0x33d67cu: goto label_33d67c;
        case 0x33d680u: goto label_33d680;
        case 0x33d684u: goto label_33d684;
        case 0x33d688u: goto label_33d688;
        case 0x33d68cu: goto label_33d68c;
        case 0x33d690u: goto label_33d690;
        case 0x33d694u: goto label_33d694;
        case 0x33d698u: goto label_33d698;
        case 0x33d69cu: goto label_33d69c;
        case 0x33d6a0u: goto label_33d6a0;
        case 0x33d6a4u: goto label_33d6a4;
        case 0x33d6a8u: goto label_33d6a8;
        case 0x33d6acu: goto label_33d6ac;
        case 0x33d6b0u: goto label_33d6b0;
        case 0x33d6b4u: goto label_33d6b4;
        case 0x33d6b8u: goto label_33d6b8;
        case 0x33d6bcu: goto label_33d6bc;
        case 0x33d6c0u: goto label_33d6c0;
        case 0x33d6c4u: goto label_33d6c4;
        case 0x33d6c8u: goto label_33d6c8;
        case 0x33d6ccu: goto label_33d6cc;
        case 0x33d6d0u: goto label_33d6d0;
        case 0x33d6d4u: goto label_33d6d4;
        case 0x33d6d8u: goto label_33d6d8;
        case 0x33d6dcu: goto label_33d6dc;
        case 0x33d6e0u: goto label_33d6e0;
        case 0x33d6e4u: goto label_33d6e4;
        case 0x33d6e8u: goto label_33d6e8;
        case 0x33d6ecu: goto label_33d6ec;
        case 0x33d6f0u: goto label_33d6f0;
        case 0x33d6f4u: goto label_33d6f4;
        case 0x33d6f8u: goto label_33d6f8;
        case 0x33d6fcu: goto label_33d6fc;
        case 0x33d700u: goto label_33d700;
        case 0x33d704u: goto label_33d704;
        case 0x33d708u: goto label_33d708;
        case 0x33d70cu: goto label_33d70c;
        case 0x33d710u: goto label_33d710;
        case 0x33d714u: goto label_33d714;
        case 0x33d718u: goto label_33d718;
        case 0x33d71cu: goto label_33d71c;
        case 0x33d720u: goto label_33d720;
        case 0x33d724u: goto label_33d724;
        case 0x33d728u: goto label_33d728;
        case 0x33d72cu: goto label_33d72c;
        case 0x33d730u: goto label_33d730;
        case 0x33d734u: goto label_33d734;
        case 0x33d738u: goto label_33d738;
        case 0x33d73cu: goto label_33d73c;
        case 0x33d740u: goto label_33d740;
        case 0x33d744u: goto label_33d744;
        case 0x33d748u: goto label_33d748;
        case 0x33d74cu: goto label_33d74c;
        case 0x33d750u: goto label_33d750;
        case 0x33d754u: goto label_33d754;
        case 0x33d758u: goto label_33d758;
        case 0x33d75cu: goto label_33d75c;
        case 0x33d760u: goto label_33d760;
        case 0x33d764u: goto label_33d764;
        case 0x33d768u: goto label_33d768;
        case 0x33d76cu: goto label_33d76c;
        case 0x33d770u: goto label_33d770;
        case 0x33d774u: goto label_33d774;
        case 0x33d778u: goto label_33d778;
        case 0x33d77cu: goto label_33d77c;
        case 0x33d780u: goto label_33d780;
        case 0x33d784u: goto label_33d784;
        case 0x33d788u: goto label_33d788;
        case 0x33d78cu: goto label_33d78c;
        case 0x33d790u: goto label_33d790;
        case 0x33d794u: goto label_33d794;
        case 0x33d798u: goto label_33d798;
        case 0x33d79cu: goto label_33d79c;
        case 0x33d7a0u: goto label_33d7a0;
        case 0x33d7a4u: goto label_33d7a4;
        case 0x33d7a8u: goto label_33d7a8;
        case 0x33d7acu: goto label_33d7ac;
        case 0x33d7b0u: goto label_33d7b0;
        case 0x33d7b4u: goto label_33d7b4;
        case 0x33d7b8u: goto label_33d7b8;
        case 0x33d7bcu: goto label_33d7bc;
        case 0x33d7c0u: goto label_33d7c0;
        case 0x33d7c4u: goto label_33d7c4;
        case 0x33d7c8u: goto label_33d7c8;
        case 0x33d7ccu: goto label_33d7cc;
        case 0x33d7d0u: goto label_33d7d0;
        case 0x33d7d4u: goto label_33d7d4;
        case 0x33d7d8u: goto label_33d7d8;
        case 0x33d7dcu: goto label_33d7dc;
        case 0x33d7e0u: goto label_33d7e0;
        case 0x33d7e4u: goto label_33d7e4;
        case 0x33d7e8u: goto label_33d7e8;
        case 0x33d7ecu: goto label_33d7ec;
        case 0x33d7f0u: goto label_33d7f0;
        case 0x33d7f4u: goto label_33d7f4;
        case 0x33d7f8u: goto label_33d7f8;
        case 0x33d7fcu: goto label_33d7fc;
        case 0x33d800u: goto label_33d800;
        case 0x33d804u: goto label_33d804;
        case 0x33d808u: goto label_33d808;
        case 0x33d80cu: goto label_33d80c;
        case 0x33d810u: goto label_33d810;
        case 0x33d814u: goto label_33d814;
        case 0x33d818u: goto label_33d818;
        case 0x33d81cu: goto label_33d81c;
        case 0x33d820u: goto label_33d820;
        case 0x33d824u: goto label_33d824;
        case 0x33d828u: goto label_33d828;
        case 0x33d82cu: goto label_33d82c;
        case 0x33d830u: goto label_33d830;
        case 0x33d834u: goto label_33d834;
        case 0x33d838u: goto label_33d838;
        case 0x33d83cu: goto label_33d83c;
        case 0x33d840u: goto label_33d840;
        case 0x33d844u: goto label_33d844;
        case 0x33d848u: goto label_33d848;
        case 0x33d84cu: goto label_33d84c;
        case 0x33d850u: goto label_33d850;
        case 0x33d854u: goto label_33d854;
        case 0x33d858u: goto label_33d858;
        case 0x33d85cu: goto label_33d85c;
        case 0x33d860u: goto label_33d860;
        case 0x33d864u: goto label_33d864;
        case 0x33d868u: goto label_33d868;
        case 0x33d86cu: goto label_33d86c;
        case 0x33d870u: goto label_33d870;
        case 0x33d874u: goto label_33d874;
        case 0x33d878u: goto label_33d878;
        case 0x33d87cu: goto label_33d87c;
        case 0x33d880u: goto label_33d880;
        case 0x33d884u: goto label_33d884;
        case 0x33d888u: goto label_33d888;
        case 0x33d88cu: goto label_33d88c;
        case 0x33d890u: goto label_33d890;
        case 0x33d894u: goto label_33d894;
        case 0x33d898u: goto label_33d898;
        case 0x33d89cu: goto label_33d89c;
        case 0x33d8a0u: goto label_33d8a0;
        case 0x33d8a4u: goto label_33d8a4;
        case 0x33d8a8u: goto label_33d8a8;
        case 0x33d8acu: goto label_33d8ac;
        case 0x33d8b0u: goto label_33d8b0;
        case 0x33d8b4u: goto label_33d8b4;
        case 0x33d8b8u: goto label_33d8b8;
        case 0x33d8bcu: goto label_33d8bc;
        case 0x33d8c0u: goto label_33d8c0;
        case 0x33d8c4u: goto label_33d8c4;
        case 0x33d8c8u: goto label_33d8c8;
        case 0x33d8ccu: goto label_33d8cc;
        case 0x33d8d0u: goto label_33d8d0;
        case 0x33d8d4u: goto label_33d8d4;
        case 0x33d8d8u: goto label_33d8d8;
        case 0x33d8dcu: goto label_33d8dc;
        case 0x33d8e0u: goto label_33d8e0;
        case 0x33d8e4u: goto label_33d8e4;
        case 0x33d8e8u: goto label_33d8e8;
        case 0x33d8ecu: goto label_33d8ec;
        case 0x33d8f0u: goto label_33d8f0;
        case 0x33d8f4u: goto label_33d8f4;
        case 0x33d8f8u: goto label_33d8f8;
        case 0x33d8fcu: goto label_33d8fc;
        case 0x33d900u: goto label_33d900;
        case 0x33d904u: goto label_33d904;
        case 0x33d908u: goto label_33d908;
        case 0x33d90cu: goto label_33d90c;
        case 0x33d910u: goto label_33d910;
        case 0x33d914u: goto label_33d914;
        case 0x33d918u: goto label_33d918;
        case 0x33d91cu: goto label_33d91c;
        case 0x33d920u: goto label_33d920;
        case 0x33d924u: goto label_33d924;
        case 0x33d928u: goto label_33d928;
        case 0x33d92cu: goto label_33d92c;
        case 0x33d930u: goto label_33d930;
        case 0x33d934u: goto label_33d934;
        case 0x33d938u: goto label_33d938;
        case 0x33d93cu: goto label_33d93c;
        case 0x33d940u: goto label_33d940;
        case 0x33d944u: goto label_33d944;
        case 0x33d948u: goto label_33d948;
        case 0x33d94cu: goto label_33d94c;
        case 0x33d950u: goto label_33d950;
        case 0x33d954u: goto label_33d954;
        case 0x33d958u: goto label_33d958;
        case 0x33d95cu: goto label_33d95c;
        case 0x33d960u: goto label_33d960;
        case 0x33d964u: goto label_33d964;
        case 0x33d968u: goto label_33d968;
        case 0x33d96cu: goto label_33d96c;
        case 0x33d970u: goto label_33d970;
        case 0x33d974u: goto label_33d974;
        case 0x33d978u: goto label_33d978;
        case 0x33d97cu: goto label_33d97c;
        case 0x33d980u: goto label_33d980;
        case 0x33d984u: goto label_33d984;
        case 0x33d988u: goto label_33d988;
        case 0x33d98cu: goto label_33d98c;
        case 0x33d990u: goto label_33d990;
        case 0x33d994u: goto label_33d994;
        case 0x33d998u: goto label_33d998;
        case 0x33d99cu: goto label_33d99c;
        case 0x33d9a0u: goto label_33d9a0;
        case 0x33d9a4u: goto label_33d9a4;
        case 0x33d9a8u: goto label_33d9a8;
        case 0x33d9acu: goto label_33d9ac;
        case 0x33d9b0u: goto label_33d9b0;
        case 0x33d9b4u: goto label_33d9b4;
        case 0x33d9b8u: goto label_33d9b8;
        case 0x33d9bcu: goto label_33d9bc;
        case 0x33d9c0u: goto label_33d9c0;
        case 0x33d9c4u: goto label_33d9c4;
        case 0x33d9c8u: goto label_33d9c8;
        case 0x33d9ccu: goto label_33d9cc;
        case 0x33d9d0u: goto label_33d9d0;
        case 0x33d9d4u: goto label_33d9d4;
        case 0x33d9d8u: goto label_33d9d8;
        case 0x33d9dcu: goto label_33d9dc;
        case 0x33d9e0u: goto label_33d9e0;
        case 0x33d9e4u: goto label_33d9e4;
        case 0x33d9e8u: goto label_33d9e8;
        case 0x33d9ecu: goto label_33d9ec;
        case 0x33d9f0u: goto label_33d9f0;
        case 0x33d9f4u: goto label_33d9f4;
        case 0x33d9f8u: goto label_33d9f8;
        case 0x33d9fcu: goto label_33d9fc;
        case 0x33da00u: goto label_33da00;
        case 0x33da04u: goto label_33da04;
        case 0x33da08u: goto label_33da08;
        case 0x33da0cu: goto label_33da0c;
        case 0x33da10u: goto label_33da10;
        case 0x33da14u: goto label_33da14;
        case 0x33da18u: goto label_33da18;
        case 0x33da1cu: goto label_33da1c;
        case 0x33da20u: goto label_33da20;
        case 0x33da24u: goto label_33da24;
        case 0x33da28u: goto label_33da28;
        case 0x33da2cu: goto label_33da2c;
        case 0x33da30u: goto label_33da30;
        case 0x33da34u: goto label_33da34;
        case 0x33da38u: goto label_33da38;
        case 0x33da3cu: goto label_33da3c;
        case 0x33da40u: goto label_33da40;
        case 0x33da44u: goto label_33da44;
        case 0x33da48u: goto label_33da48;
        case 0x33da4cu: goto label_33da4c;
        case 0x33da50u: goto label_33da50;
        case 0x33da54u: goto label_33da54;
        case 0x33da58u: goto label_33da58;
        case 0x33da5cu: goto label_33da5c;
        case 0x33da60u: goto label_33da60;
        case 0x33da64u: goto label_33da64;
        case 0x33da68u: goto label_33da68;
        case 0x33da6cu: goto label_33da6c;
        case 0x33da70u: goto label_33da70;
        case 0x33da74u: goto label_33da74;
        case 0x33da78u: goto label_33da78;
        case 0x33da7cu: goto label_33da7c;
        case 0x33da80u: goto label_33da80;
        case 0x33da84u: goto label_33da84;
        case 0x33da88u: goto label_33da88;
        case 0x33da8cu: goto label_33da8c;
        case 0x33da90u: goto label_33da90;
        case 0x33da94u: goto label_33da94;
        case 0x33da98u: goto label_33da98;
        case 0x33da9cu: goto label_33da9c;
        case 0x33daa0u: goto label_33daa0;
        case 0x33daa4u: goto label_33daa4;
        case 0x33daa8u: goto label_33daa8;
        case 0x33daacu: goto label_33daac;
        case 0x33dab0u: goto label_33dab0;
        case 0x33dab4u: goto label_33dab4;
        case 0x33dab8u: goto label_33dab8;
        case 0x33dabcu: goto label_33dabc;
        case 0x33dac0u: goto label_33dac0;
        case 0x33dac4u: goto label_33dac4;
        case 0x33dac8u: goto label_33dac8;
        case 0x33daccu: goto label_33dacc;
        case 0x33dad0u: goto label_33dad0;
        case 0x33dad4u: goto label_33dad4;
        case 0x33dad8u: goto label_33dad8;
        case 0x33dadcu: goto label_33dadc;
        case 0x33dae0u: goto label_33dae0;
        case 0x33dae4u: goto label_33dae4;
        case 0x33dae8u: goto label_33dae8;
        case 0x33daecu: goto label_33daec;
        case 0x33daf0u: goto label_33daf0;
        case 0x33daf4u: goto label_33daf4;
        case 0x33daf8u: goto label_33daf8;
        case 0x33dafcu: goto label_33dafc;
        case 0x33db00u: goto label_33db00;
        case 0x33db04u: goto label_33db04;
        case 0x33db08u: goto label_33db08;
        case 0x33db0cu: goto label_33db0c;
        case 0x33db10u: goto label_33db10;
        case 0x33db14u: goto label_33db14;
        case 0x33db18u: goto label_33db18;
        case 0x33db1cu: goto label_33db1c;
        case 0x33db20u: goto label_33db20;
        case 0x33db24u: goto label_33db24;
        case 0x33db28u: goto label_33db28;
        case 0x33db2cu: goto label_33db2c;
        case 0x33db30u: goto label_33db30;
        case 0x33db34u: goto label_33db34;
        case 0x33db38u: goto label_33db38;
        case 0x33db3cu: goto label_33db3c;
        case 0x33db40u: goto label_33db40;
        case 0x33db44u: goto label_33db44;
        case 0x33db48u: goto label_33db48;
        case 0x33db4cu: goto label_33db4c;
        case 0x33db50u: goto label_33db50;
        case 0x33db54u: goto label_33db54;
        case 0x33db58u: goto label_33db58;
        case 0x33db5cu: goto label_33db5c;
        case 0x33db60u: goto label_33db60;
        case 0x33db64u: goto label_33db64;
        case 0x33db68u: goto label_33db68;
        case 0x33db6cu: goto label_33db6c;
        case 0x33db70u: goto label_33db70;
        case 0x33db74u: goto label_33db74;
        case 0x33db78u: goto label_33db78;
        case 0x33db7cu: goto label_33db7c;
        case 0x33db80u: goto label_33db80;
        case 0x33db84u: goto label_33db84;
        case 0x33db88u: goto label_33db88;
        case 0x33db8cu: goto label_33db8c;
        case 0x33db90u: goto label_33db90;
        case 0x33db94u: goto label_33db94;
        case 0x33db98u: goto label_33db98;
        case 0x33db9cu: goto label_33db9c;
        case 0x33dba0u: goto label_33dba0;
        case 0x33dba4u: goto label_33dba4;
        case 0x33dba8u: goto label_33dba8;
        case 0x33dbacu: goto label_33dbac;
        case 0x33dbb0u: goto label_33dbb0;
        case 0x33dbb4u: goto label_33dbb4;
        case 0x33dbb8u: goto label_33dbb8;
        case 0x33dbbcu: goto label_33dbbc;
        case 0x33dbc0u: goto label_33dbc0;
        case 0x33dbc4u: goto label_33dbc4;
        case 0x33dbc8u: goto label_33dbc8;
        case 0x33dbccu: goto label_33dbcc;
        case 0x33dbd0u: goto label_33dbd0;
        case 0x33dbd4u: goto label_33dbd4;
        case 0x33dbd8u: goto label_33dbd8;
        case 0x33dbdcu: goto label_33dbdc;
        case 0x33dbe0u: goto label_33dbe0;
        case 0x33dbe4u: goto label_33dbe4;
        case 0x33dbe8u: goto label_33dbe8;
        case 0x33dbecu: goto label_33dbec;
        case 0x33dbf0u: goto label_33dbf0;
        case 0x33dbf4u: goto label_33dbf4;
        case 0x33dbf8u: goto label_33dbf8;
        case 0x33dbfcu: goto label_33dbfc;
        case 0x33dc00u: goto label_33dc00;
        case 0x33dc04u: goto label_33dc04;
        case 0x33dc08u: goto label_33dc08;
        case 0x33dc0cu: goto label_33dc0c;
        case 0x33dc10u: goto label_33dc10;
        case 0x33dc14u: goto label_33dc14;
        case 0x33dc18u: goto label_33dc18;
        case 0x33dc1cu: goto label_33dc1c;
        case 0x33dc20u: goto label_33dc20;
        case 0x33dc24u: goto label_33dc24;
        case 0x33dc28u: goto label_33dc28;
        case 0x33dc2cu: goto label_33dc2c;
        case 0x33dc30u: goto label_33dc30;
        case 0x33dc34u: goto label_33dc34;
        case 0x33dc38u: goto label_33dc38;
        case 0x33dc3cu: goto label_33dc3c;
        case 0x33dc40u: goto label_33dc40;
        case 0x33dc44u: goto label_33dc44;
        case 0x33dc48u: goto label_33dc48;
        case 0x33dc4cu: goto label_33dc4c;
        case 0x33dc50u: goto label_33dc50;
        case 0x33dc54u: goto label_33dc54;
        case 0x33dc58u: goto label_33dc58;
        case 0x33dc5cu: goto label_33dc5c;
        case 0x33dc60u: goto label_33dc60;
        case 0x33dc64u: goto label_33dc64;
        case 0x33dc68u: goto label_33dc68;
        case 0x33dc6cu: goto label_33dc6c;
        case 0x33dc70u: goto label_33dc70;
        case 0x33dc74u: goto label_33dc74;
        case 0x33dc78u: goto label_33dc78;
        case 0x33dc7cu: goto label_33dc7c;
        case 0x33dc80u: goto label_33dc80;
        case 0x33dc84u: goto label_33dc84;
        case 0x33dc88u: goto label_33dc88;
        case 0x33dc8cu: goto label_33dc8c;
        case 0x33dc90u: goto label_33dc90;
        case 0x33dc94u: goto label_33dc94;
        case 0x33dc98u: goto label_33dc98;
        case 0x33dc9cu: goto label_33dc9c;
        case 0x33dca0u: goto label_33dca0;
        case 0x33dca4u: goto label_33dca4;
        case 0x33dca8u: goto label_33dca8;
        case 0x33dcacu: goto label_33dcac;
        case 0x33dcb0u: goto label_33dcb0;
        case 0x33dcb4u: goto label_33dcb4;
        case 0x33dcb8u: goto label_33dcb8;
        case 0x33dcbcu: goto label_33dcbc;
        case 0x33dcc0u: goto label_33dcc0;
        case 0x33dcc4u: goto label_33dcc4;
        case 0x33dcc8u: goto label_33dcc8;
        case 0x33dcccu: goto label_33dccc;
        case 0x33dcd0u: goto label_33dcd0;
        case 0x33dcd4u: goto label_33dcd4;
        case 0x33dcd8u: goto label_33dcd8;
        case 0x33dcdcu: goto label_33dcdc;
        case 0x33dce0u: goto label_33dce0;
        case 0x33dce4u: goto label_33dce4;
        case 0x33dce8u: goto label_33dce8;
        case 0x33dcecu: goto label_33dcec;
        case 0x33dcf0u: goto label_33dcf0;
        case 0x33dcf4u: goto label_33dcf4;
        case 0x33dcf8u: goto label_33dcf8;
        case 0x33dcfcu: goto label_33dcfc;
        case 0x33dd00u: goto label_33dd00;
        case 0x33dd04u: goto label_33dd04;
        case 0x33dd08u: goto label_33dd08;
        case 0x33dd0cu: goto label_33dd0c;
        case 0x33dd10u: goto label_33dd10;
        case 0x33dd14u: goto label_33dd14;
        case 0x33dd18u: goto label_33dd18;
        case 0x33dd1cu: goto label_33dd1c;
        case 0x33dd20u: goto label_33dd20;
        case 0x33dd24u: goto label_33dd24;
        case 0x33dd28u: goto label_33dd28;
        case 0x33dd2cu: goto label_33dd2c;
        case 0x33dd30u: goto label_33dd30;
        case 0x33dd34u: goto label_33dd34;
        case 0x33dd38u: goto label_33dd38;
        case 0x33dd3cu: goto label_33dd3c;
        case 0x33dd40u: goto label_33dd40;
        case 0x33dd44u: goto label_33dd44;
        case 0x33dd48u: goto label_33dd48;
        case 0x33dd4cu: goto label_33dd4c;
        case 0x33dd50u: goto label_33dd50;
        case 0x33dd54u: goto label_33dd54;
        case 0x33dd58u: goto label_33dd58;
        case 0x33dd5cu: goto label_33dd5c;
        case 0x33dd60u: goto label_33dd60;
        case 0x33dd64u: goto label_33dd64;
        case 0x33dd68u: goto label_33dd68;
        case 0x33dd6cu: goto label_33dd6c;
        case 0x33dd70u: goto label_33dd70;
        case 0x33dd74u: goto label_33dd74;
        case 0x33dd78u: goto label_33dd78;
        case 0x33dd7cu: goto label_33dd7c;
        case 0x33dd80u: goto label_33dd80;
        case 0x33dd84u: goto label_33dd84;
        case 0x33dd88u: goto label_33dd88;
        case 0x33dd8cu: goto label_33dd8c;
        case 0x33dd90u: goto label_33dd90;
        case 0x33dd94u: goto label_33dd94;
        case 0x33dd98u: goto label_33dd98;
        case 0x33dd9cu: goto label_33dd9c;
        case 0x33dda0u: goto label_33dda0;
        case 0x33dda4u: goto label_33dda4;
        case 0x33dda8u: goto label_33dda8;
        case 0x33ddacu: goto label_33ddac;
        case 0x33ddb0u: goto label_33ddb0;
        case 0x33ddb4u: goto label_33ddb4;
        case 0x33ddb8u: goto label_33ddb8;
        case 0x33ddbcu: goto label_33ddbc;
        case 0x33ddc0u: goto label_33ddc0;
        case 0x33ddc4u: goto label_33ddc4;
        case 0x33ddc8u: goto label_33ddc8;
        case 0x33ddccu: goto label_33ddcc;
        case 0x33ddd0u: goto label_33ddd0;
        case 0x33ddd4u: goto label_33ddd4;
        case 0x33ddd8u: goto label_33ddd8;
        case 0x33dddcu: goto label_33dddc;
        case 0x33dde0u: goto label_33dde0;
        case 0x33dde4u: goto label_33dde4;
        case 0x33dde8u: goto label_33dde8;
        case 0x33ddecu: goto label_33ddec;
        case 0x33ddf0u: goto label_33ddf0;
        case 0x33ddf4u: goto label_33ddf4;
        case 0x33ddf8u: goto label_33ddf8;
        case 0x33ddfcu: goto label_33ddfc;
        case 0x33de00u: goto label_33de00;
        case 0x33de04u: goto label_33de04;
        case 0x33de08u: goto label_33de08;
        case 0x33de0cu: goto label_33de0c;
        case 0x33de10u: goto label_33de10;
        case 0x33de14u: goto label_33de14;
        case 0x33de18u: goto label_33de18;
        case 0x33de1cu: goto label_33de1c;
        case 0x33de20u: goto label_33de20;
        case 0x33de24u: goto label_33de24;
        case 0x33de28u: goto label_33de28;
        case 0x33de2cu: goto label_33de2c;
        case 0x33de30u: goto label_33de30;
        case 0x33de34u: goto label_33de34;
        case 0x33de38u: goto label_33de38;
        case 0x33de3cu: goto label_33de3c;
        case 0x33de40u: goto label_33de40;
        case 0x33de44u: goto label_33de44;
        case 0x33de48u: goto label_33de48;
        case 0x33de4cu: goto label_33de4c;
        case 0x33de50u: goto label_33de50;
        case 0x33de54u: goto label_33de54;
        case 0x33de58u: goto label_33de58;
        case 0x33de5cu: goto label_33de5c;
        case 0x33de60u: goto label_33de60;
        case 0x33de64u: goto label_33de64;
        case 0x33de68u: goto label_33de68;
        case 0x33de6cu: goto label_33de6c;
        case 0x33de70u: goto label_33de70;
        case 0x33de74u: goto label_33de74;
        case 0x33de78u: goto label_33de78;
        case 0x33de7cu: goto label_33de7c;
        case 0x33de80u: goto label_33de80;
        case 0x33de84u: goto label_33de84;
        case 0x33de88u: goto label_33de88;
        case 0x33de8cu: goto label_33de8c;
        case 0x33de90u: goto label_33de90;
        case 0x33de94u: goto label_33de94;
        case 0x33de98u: goto label_33de98;
        case 0x33de9cu: goto label_33de9c;
        case 0x33dea0u: goto label_33dea0;
        case 0x33dea4u: goto label_33dea4;
        case 0x33dea8u: goto label_33dea8;
        case 0x33deacu: goto label_33deac;
        case 0x33deb0u: goto label_33deb0;
        case 0x33deb4u: goto label_33deb4;
        case 0x33deb8u: goto label_33deb8;
        case 0x33debcu: goto label_33debc;
        case 0x33dec0u: goto label_33dec0;
        case 0x33dec4u: goto label_33dec4;
        case 0x33dec8u: goto label_33dec8;
        case 0x33deccu: goto label_33decc;
        case 0x33ded0u: goto label_33ded0;
        case 0x33ded4u: goto label_33ded4;
        case 0x33ded8u: goto label_33ded8;
        case 0x33dedcu: goto label_33dedc;
        case 0x33dee0u: goto label_33dee0;
        case 0x33dee4u: goto label_33dee4;
        case 0x33dee8u: goto label_33dee8;
        case 0x33deecu: goto label_33deec;
        case 0x33def0u: goto label_33def0;
        case 0x33def4u: goto label_33def4;
        case 0x33def8u: goto label_33def8;
        case 0x33defcu: goto label_33defc;
        case 0x33df00u: goto label_33df00;
        case 0x33df04u: goto label_33df04;
        case 0x33df08u: goto label_33df08;
        case 0x33df0cu: goto label_33df0c;
        case 0x33df10u: goto label_33df10;
        case 0x33df14u: goto label_33df14;
        case 0x33df18u: goto label_33df18;
        case 0x33df1cu: goto label_33df1c;
        case 0x33df20u: goto label_33df20;
        case 0x33df24u: goto label_33df24;
        case 0x33df28u: goto label_33df28;
        case 0x33df2cu: goto label_33df2c;
        case 0x33df30u: goto label_33df30;
        case 0x33df34u: goto label_33df34;
        case 0x33df38u: goto label_33df38;
        case 0x33df3cu: goto label_33df3c;
        case 0x33df40u: goto label_33df40;
        case 0x33df44u: goto label_33df44;
        case 0x33df48u: goto label_33df48;
        case 0x33df4cu: goto label_33df4c;
        case 0x33df50u: goto label_33df50;
        case 0x33df54u: goto label_33df54;
        case 0x33df58u: goto label_33df58;
        case 0x33df5cu: goto label_33df5c;
        case 0x33df60u: goto label_33df60;
        case 0x33df64u: goto label_33df64;
        case 0x33df68u: goto label_33df68;
        case 0x33df6cu: goto label_33df6c;
        case 0x33df70u: goto label_33df70;
        case 0x33df74u: goto label_33df74;
        case 0x33df78u: goto label_33df78;
        case 0x33df7cu: goto label_33df7c;
        case 0x33df80u: goto label_33df80;
        case 0x33df84u: goto label_33df84;
        case 0x33df88u: goto label_33df88;
        case 0x33df8cu: goto label_33df8c;
        case 0x33df90u: goto label_33df90;
        case 0x33df94u: goto label_33df94;
        case 0x33df98u: goto label_33df98;
        case 0x33df9cu: goto label_33df9c;
        case 0x33dfa0u: goto label_33dfa0;
        case 0x33dfa4u: goto label_33dfa4;
        case 0x33dfa8u: goto label_33dfa8;
        case 0x33dfacu: goto label_33dfac;
        case 0x33dfb0u: goto label_33dfb0;
        case 0x33dfb4u: goto label_33dfb4;
        case 0x33dfb8u: goto label_33dfb8;
        case 0x33dfbcu: goto label_33dfbc;
        case 0x33dfc0u: goto label_33dfc0;
        case 0x33dfc4u: goto label_33dfc4;
        case 0x33dfc8u: goto label_33dfc8;
        case 0x33dfccu: goto label_33dfcc;
        case 0x33dfd0u: goto label_33dfd0;
        case 0x33dfd4u: goto label_33dfd4;
        case 0x33dfd8u: goto label_33dfd8;
        case 0x33dfdcu: goto label_33dfdc;
        case 0x33dfe0u: goto label_33dfe0;
        case 0x33dfe4u: goto label_33dfe4;
        case 0x33dfe8u: goto label_33dfe8;
        case 0x33dfecu: goto label_33dfec;
        case 0x33dff0u: goto label_33dff0;
        case 0x33dff4u: goto label_33dff4;
        case 0x33dff8u: goto label_33dff8;
        case 0x33dffcu: goto label_33dffc;
        case 0x33e000u: goto label_33e000;
        case 0x33e004u: goto label_33e004;
        case 0x33e008u: goto label_33e008;
        case 0x33e00cu: goto label_33e00c;
        case 0x33e010u: goto label_33e010;
        case 0x33e014u: goto label_33e014;
        case 0x33e018u: goto label_33e018;
        case 0x33e01cu: goto label_33e01c;
        case 0x33e020u: goto label_33e020;
        case 0x33e024u: goto label_33e024;
        case 0x33e028u: goto label_33e028;
        case 0x33e02cu: goto label_33e02c;
        case 0x33e030u: goto label_33e030;
        case 0x33e034u: goto label_33e034;
        case 0x33e038u: goto label_33e038;
        case 0x33e03cu: goto label_33e03c;
        case 0x33e040u: goto label_33e040;
        case 0x33e044u: goto label_33e044;
        case 0x33e048u: goto label_33e048;
        case 0x33e04cu: goto label_33e04c;
        case 0x33e050u: goto label_33e050;
        case 0x33e054u: goto label_33e054;
        case 0x33e058u: goto label_33e058;
        case 0x33e05cu: goto label_33e05c;
        case 0x33e060u: goto label_33e060;
        case 0x33e064u: goto label_33e064;
        case 0x33e068u: goto label_33e068;
        case 0x33e06cu: goto label_33e06c;
        case 0x33e070u: goto label_33e070;
        case 0x33e074u: goto label_33e074;
        case 0x33e078u: goto label_33e078;
        case 0x33e07cu: goto label_33e07c;
        case 0x33e080u: goto label_33e080;
        case 0x33e084u: goto label_33e084;
        case 0x33e088u: goto label_33e088;
        case 0x33e08cu: goto label_33e08c;
        case 0x33e090u: goto label_33e090;
        case 0x33e094u: goto label_33e094;
        case 0x33e098u: goto label_33e098;
        case 0x33e09cu: goto label_33e09c;
        case 0x33e0a0u: goto label_33e0a0;
        case 0x33e0a4u: goto label_33e0a4;
        case 0x33e0a8u: goto label_33e0a8;
        case 0x33e0acu: goto label_33e0ac;
        case 0x33e0b0u: goto label_33e0b0;
        case 0x33e0b4u: goto label_33e0b4;
        case 0x33e0b8u: goto label_33e0b8;
        case 0x33e0bcu: goto label_33e0bc;
        case 0x33e0c0u: goto label_33e0c0;
        case 0x33e0c4u: goto label_33e0c4;
        case 0x33e0c8u: goto label_33e0c8;
        case 0x33e0ccu: goto label_33e0cc;
        case 0x33e0d0u: goto label_33e0d0;
        case 0x33e0d4u: goto label_33e0d4;
        case 0x33e0d8u: goto label_33e0d8;
        case 0x33e0dcu: goto label_33e0dc;
        case 0x33e0e0u: goto label_33e0e0;
        case 0x33e0e4u: goto label_33e0e4;
        case 0x33e0e8u: goto label_33e0e8;
        case 0x33e0ecu: goto label_33e0ec;
        case 0x33e0f0u: goto label_33e0f0;
        case 0x33e0f4u: goto label_33e0f4;
        case 0x33e0f8u: goto label_33e0f8;
        case 0x33e0fcu: goto label_33e0fc;
        case 0x33e100u: goto label_33e100;
        case 0x33e104u: goto label_33e104;
        case 0x33e108u: goto label_33e108;
        case 0x33e10cu: goto label_33e10c;
        case 0x33e110u: goto label_33e110;
        case 0x33e114u: goto label_33e114;
        case 0x33e118u: goto label_33e118;
        case 0x33e11cu: goto label_33e11c;
        case 0x33e120u: goto label_33e120;
        case 0x33e124u: goto label_33e124;
        case 0x33e128u: goto label_33e128;
        case 0x33e12cu: goto label_33e12c;
        case 0x33e130u: goto label_33e130;
        case 0x33e134u: goto label_33e134;
        case 0x33e138u: goto label_33e138;
        case 0x33e13cu: goto label_33e13c;
        case 0x33e140u: goto label_33e140;
        case 0x33e144u: goto label_33e144;
        case 0x33e148u: goto label_33e148;
        case 0x33e14cu: goto label_33e14c;
        case 0x33e150u: goto label_33e150;
        case 0x33e154u: goto label_33e154;
        case 0x33e158u: goto label_33e158;
        case 0x33e15cu: goto label_33e15c;
        case 0x33e160u: goto label_33e160;
        case 0x33e164u: goto label_33e164;
        case 0x33e168u: goto label_33e168;
        case 0x33e16cu: goto label_33e16c;
        case 0x33e170u: goto label_33e170;
        case 0x33e174u: goto label_33e174;
        case 0x33e178u: goto label_33e178;
        case 0x33e17cu: goto label_33e17c;
        case 0x33e180u: goto label_33e180;
        case 0x33e184u: goto label_33e184;
        case 0x33e188u: goto label_33e188;
        case 0x33e18cu: goto label_33e18c;
        case 0x33e190u: goto label_33e190;
        case 0x33e194u: goto label_33e194;
        case 0x33e198u: goto label_33e198;
        case 0x33e19cu: goto label_33e19c;
        case 0x33e1a0u: goto label_33e1a0;
        case 0x33e1a4u: goto label_33e1a4;
        case 0x33e1a8u: goto label_33e1a8;
        case 0x33e1acu: goto label_33e1ac;
        case 0x33e1b0u: goto label_33e1b0;
        case 0x33e1b4u: goto label_33e1b4;
        case 0x33e1b8u: goto label_33e1b8;
        case 0x33e1bcu: goto label_33e1bc;
        case 0x33e1c0u: goto label_33e1c0;
        case 0x33e1c4u: goto label_33e1c4;
        case 0x33e1c8u: goto label_33e1c8;
        case 0x33e1ccu: goto label_33e1cc;
        case 0x33e1d0u: goto label_33e1d0;
        case 0x33e1d4u: goto label_33e1d4;
        case 0x33e1d8u: goto label_33e1d8;
        case 0x33e1dcu: goto label_33e1dc;
        case 0x33e1e0u: goto label_33e1e0;
        case 0x33e1e4u: goto label_33e1e4;
        case 0x33e1e8u: goto label_33e1e8;
        case 0x33e1ecu: goto label_33e1ec;
        case 0x33e1f0u: goto label_33e1f0;
        case 0x33e1f4u: goto label_33e1f4;
        case 0x33e1f8u: goto label_33e1f8;
        case 0x33e1fcu: goto label_33e1fc;
        case 0x33e200u: goto label_33e200;
        case 0x33e204u: goto label_33e204;
        case 0x33e208u: goto label_33e208;
        case 0x33e20cu: goto label_33e20c;
        case 0x33e210u: goto label_33e210;
        case 0x33e214u: goto label_33e214;
        case 0x33e218u: goto label_33e218;
        case 0x33e21cu: goto label_33e21c;
        case 0x33e220u: goto label_33e220;
        case 0x33e224u: goto label_33e224;
        case 0x33e228u: goto label_33e228;
        case 0x33e22cu: goto label_33e22c;
        case 0x33e230u: goto label_33e230;
        case 0x33e234u: goto label_33e234;
        case 0x33e238u: goto label_33e238;
        case 0x33e23cu: goto label_33e23c;
        case 0x33e240u: goto label_33e240;
        case 0x33e244u: goto label_33e244;
        case 0x33e248u: goto label_33e248;
        case 0x33e24cu: goto label_33e24c;
        case 0x33e250u: goto label_33e250;
        case 0x33e254u: goto label_33e254;
        case 0x33e258u: goto label_33e258;
        case 0x33e25cu: goto label_33e25c;
        case 0x33e260u: goto label_33e260;
        case 0x33e264u: goto label_33e264;
        case 0x33e268u: goto label_33e268;
        case 0x33e26cu: goto label_33e26c;
        case 0x33e270u: goto label_33e270;
        case 0x33e274u: goto label_33e274;
        case 0x33e278u: goto label_33e278;
        case 0x33e27cu: goto label_33e27c;
        case 0x33e280u: goto label_33e280;
        case 0x33e284u: goto label_33e284;
        case 0x33e288u: goto label_33e288;
        case 0x33e28cu: goto label_33e28c;
        case 0x33e290u: goto label_33e290;
        case 0x33e294u: goto label_33e294;
        case 0x33e298u: goto label_33e298;
        case 0x33e29cu: goto label_33e29c;
        case 0x33e2a0u: goto label_33e2a0;
        case 0x33e2a4u: goto label_33e2a4;
        case 0x33e2a8u: goto label_33e2a8;
        case 0x33e2acu: goto label_33e2ac;
        case 0x33e2b0u: goto label_33e2b0;
        case 0x33e2b4u: goto label_33e2b4;
        case 0x33e2b8u: goto label_33e2b8;
        case 0x33e2bcu: goto label_33e2bc;
        case 0x33e2c0u: goto label_33e2c0;
        case 0x33e2c4u: goto label_33e2c4;
        case 0x33e2c8u: goto label_33e2c8;
        case 0x33e2ccu: goto label_33e2cc;
        case 0x33e2d0u: goto label_33e2d0;
        case 0x33e2d4u: goto label_33e2d4;
        case 0x33e2d8u: goto label_33e2d8;
        case 0x33e2dcu: goto label_33e2dc;
        case 0x33e2e0u: goto label_33e2e0;
        case 0x33e2e4u: goto label_33e2e4;
        case 0x33e2e8u: goto label_33e2e8;
        case 0x33e2ecu: goto label_33e2ec;
        case 0x33e2f0u: goto label_33e2f0;
        case 0x33e2f4u: goto label_33e2f4;
        case 0x33e2f8u: goto label_33e2f8;
        case 0x33e2fcu: goto label_33e2fc;
        case 0x33e300u: goto label_33e300;
        case 0x33e304u: goto label_33e304;
        case 0x33e308u: goto label_33e308;
        case 0x33e30cu: goto label_33e30c;
        case 0x33e310u: goto label_33e310;
        case 0x33e314u: goto label_33e314;
        case 0x33e318u: goto label_33e318;
        case 0x33e31cu: goto label_33e31c;
        case 0x33e320u: goto label_33e320;
        case 0x33e324u: goto label_33e324;
        case 0x33e328u: goto label_33e328;
        case 0x33e32cu: goto label_33e32c;
        case 0x33e330u: goto label_33e330;
        case 0x33e334u: goto label_33e334;
        case 0x33e338u: goto label_33e338;
        case 0x33e33cu: goto label_33e33c;
        case 0x33e340u: goto label_33e340;
        case 0x33e344u: goto label_33e344;
        case 0x33e348u: goto label_33e348;
        case 0x33e34cu: goto label_33e34c;
        case 0x33e350u: goto label_33e350;
        case 0x33e354u: goto label_33e354;
        case 0x33e358u: goto label_33e358;
        case 0x33e35cu: goto label_33e35c;
        case 0x33e360u: goto label_33e360;
        case 0x33e364u: goto label_33e364;
        case 0x33e368u: goto label_33e368;
        case 0x33e36cu: goto label_33e36c;
        case 0x33e370u: goto label_33e370;
        case 0x33e374u: goto label_33e374;
        case 0x33e378u: goto label_33e378;
        case 0x33e37cu: goto label_33e37c;
        case 0x33e380u: goto label_33e380;
        case 0x33e384u: goto label_33e384;
        case 0x33e388u: goto label_33e388;
        case 0x33e38cu: goto label_33e38c;
        case 0x33e390u: goto label_33e390;
        case 0x33e394u: goto label_33e394;
        case 0x33e398u: goto label_33e398;
        case 0x33e39cu: goto label_33e39c;
        case 0x33e3a0u: goto label_33e3a0;
        case 0x33e3a4u: goto label_33e3a4;
        case 0x33e3a8u: goto label_33e3a8;
        case 0x33e3acu: goto label_33e3ac;
        case 0x33e3b0u: goto label_33e3b0;
        case 0x33e3b4u: goto label_33e3b4;
        case 0x33e3b8u: goto label_33e3b8;
        case 0x33e3bcu: goto label_33e3bc;
        case 0x33e3c0u: goto label_33e3c0;
        case 0x33e3c4u: goto label_33e3c4;
        case 0x33e3c8u: goto label_33e3c8;
        case 0x33e3ccu: goto label_33e3cc;
        case 0x33e3d0u: goto label_33e3d0;
        case 0x33e3d4u: goto label_33e3d4;
        case 0x33e3d8u: goto label_33e3d8;
        case 0x33e3dcu: goto label_33e3dc;
        case 0x33e3e0u: goto label_33e3e0;
        case 0x33e3e4u: goto label_33e3e4;
        case 0x33e3e8u: goto label_33e3e8;
        case 0x33e3ecu: goto label_33e3ec;
        case 0x33e3f0u: goto label_33e3f0;
        case 0x33e3f4u: goto label_33e3f4;
        case 0x33e3f8u: goto label_33e3f8;
        case 0x33e3fcu: goto label_33e3fc;
        case 0x33e400u: goto label_33e400;
        case 0x33e404u: goto label_33e404;
        case 0x33e408u: goto label_33e408;
        case 0x33e40cu: goto label_33e40c;
        case 0x33e410u: goto label_33e410;
        case 0x33e414u: goto label_33e414;
        case 0x33e418u: goto label_33e418;
        case 0x33e41cu: goto label_33e41c;
        case 0x33e420u: goto label_33e420;
        case 0x33e424u: goto label_33e424;
        case 0x33e428u: goto label_33e428;
        case 0x33e42cu: goto label_33e42c;
        case 0x33e430u: goto label_33e430;
        case 0x33e434u: goto label_33e434;
        case 0x33e438u: goto label_33e438;
        case 0x33e43cu: goto label_33e43c;
        case 0x33e440u: goto label_33e440;
        case 0x33e444u: goto label_33e444;
        case 0x33e448u: goto label_33e448;
        case 0x33e44cu: goto label_33e44c;
        case 0x33e450u: goto label_33e450;
        case 0x33e454u: goto label_33e454;
        case 0x33e458u: goto label_33e458;
        case 0x33e45cu: goto label_33e45c;
        case 0x33e460u: goto label_33e460;
        case 0x33e464u: goto label_33e464;
        case 0x33e468u: goto label_33e468;
        case 0x33e46cu: goto label_33e46c;
        case 0x33e470u: goto label_33e470;
        case 0x33e474u: goto label_33e474;
        case 0x33e478u: goto label_33e478;
        case 0x33e47cu: goto label_33e47c;
        case 0x33e480u: goto label_33e480;
        case 0x33e484u: goto label_33e484;
        case 0x33e488u: goto label_33e488;
        case 0x33e48cu: goto label_33e48c;
        case 0x33e490u: goto label_33e490;
        case 0x33e494u: goto label_33e494;
        case 0x33e498u: goto label_33e498;
        case 0x33e49cu: goto label_33e49c;
        case 0x33e4a0u: goto label_33e4a0;
        case 0x33e4a4u: goto label_33e4a4;
        case 0x33e4a8u: goto label_33e4a8;
        case 0x33e4acu: goto label_33e4ac;
        case 0x33e4b0u: goto label_33e4b0;
        case 0x33e4b4u: goto label_33e4b4;
        case 0x33e4b8u: goto label_33e4b8;
        case 0x33e4bcu: goto label_33e4bc;
        case 0x33e4c0u: goto label_33e4c0;
        case 0x33e4c4u: goto label_33e4c4;
        case 0x33e4c8u: goto label_33e4c8;
        case 0x33e4ccu: goto label_33e4cc;
        case 0x33e4d0u: goto label_33e4d0;
        case 0x33e4d4u: goto label_33e4d4;
        case 0x33e4d8u: goto label_33e4d8;
        case 0x33e4dcu: goto label_33e4dc;
        case 0x33e4e0u: goto label_33e4e0;
        case 0x33e4e4u: goto label_33e4e4;
        case 0x33e4e8u: goto label_33e4e8;
        case 0x33e4ecu: goto label_33e4ec;
        case 0x33e4f0u: goto label_33e4f0;
        case 0x33e4f4u: goto label_33e4f4;
        case 0x33e4f8u: goto label_33e4f8;
        case 0x33e4fcu: goto label_33e4fc;
        case 0x33e500u: goto label_33e500;
        case 0x33e504u: goto label_33e504;
        case 0x33e508u: goto label_33e508;
        case 0x33e50cu: goto label_33e50c;
        case 0x33e510u: goto label_33e510;
        case 0x33e514u: goto label_33e514;
        case 0x33e518u: goto label_33e518;
        case 0x33e51cu: goto label_33e51c;
        case 0x33e520u: goto label_33e520;
        case 0x33e524u: goto label_33e524;
        case 0x33e528u: goto label_33e528;
        case 0x33e52cu: goto label_33e52c;
        case 0x33e530u: goto label_33e530;
        case 0x33e534u: goto label_33e534;
        case 0x33e538u: goto label_33e538;
        case 0x33e53cu: goto label_33e53c;
        case 0x33e540u: goto label_33e540;
        case 0x33e544u: goto label_33e544;
        case 0x33e548u: goto label_33e548;
        case 0x33e54cu: goto label_33e54c;
        case 0x33e550u: goto label_33e550;
        case 0x33e554u: goto label_33e554;
        case 0x33e558u: goto label_33e558;
        case 0x33e55cu: goto label_33e55c;
        case 0x33e560u: goto label_33e560;
        case 0x33e564u: goto label_33e564;
        case 0x33e568u: goto label_33e568;
        case 0x33e56cu: goto label_33e56c;
        case 0x33e570u: goto label_33e570;
        case 0x33e574u: goto label_33e574;
        case 0x33e578u: goto label_33e578;
        case 0x33e57cu: goto label_33e57c;
        case 0x33e580u: goto label_33e580;
        case 0x33e584u: goto label_33e584;
        case 0x33e588u: goto label_33e588;
        case 0x33e58cu: goto label_33e58c;
        case 0x33e590u: goto label_33e590;
        case 0x33e594u: goto label_33e594;
        case 0x33e598u: goto label_33e598;
        case 0x33e59cu: goto label_33e59c;
        case 0x33e5a0u: goto label_33e5a0;
        case 0x33e5a4u: goto label_33e5a4;
        case 0x33e5a8u: goto label_33e5a8;
        case 0x33e5acu: goto label_33e5ac;
        case 0x33e5b0u: goto label_33e5b0;
        case 0x33e5b4u: goto label_33e5b4;
        case 0x33e5b8u: goto label_33e5b8;
        case 0x33e5bcu: goto label_33e5bc;
        case 0x33e5c0u: goto label_33e5c0;
        case 0x33e5c4u: goto label_33e5c4;
        case 0x33e5c8u: goto label_33e5c8;
        case 0x33e5ccu: goto label_33e5cc;
        case 0x33e5d0u: goto label_33e5d0;
        case 0x33e5d4u: goto label_33e5d4;
        case 0x33e5d8u: goto label_33e5d8;
        case 0x33e5dcu: goto label_33e5dc;
        case 0x33e5e0u: goto label_33e5e0;
        case 0x33e5e4u: goto label_33e5e4;
        case 0x33e5e8u: goto label_33e5e8;
        case 0x33e5ecu: goto label_33e5ec;
        case 0x33e5f0u: goto label_33e5f0;
        case 0x33e5f4u: goto label_33e5f4;
        case 0x33e5f8u: goto label_33e5f8;
        case 0x33e5fcu: goto label_33e5fc;
        case 0x33e600u: goto label_33e600;
        case 0x33e604u: goto label_33e604;
        case 0x33e608u: goto label_33e608;
        case 0x33e60cu: goto label_33e60c;
        case 0x33e610u: goto label_33e610;
        case 0x33e614u: goto label_33e614;
        case 0x33e618u: goto label_33e618;
        case 0x33e61cu: goto label_33e61c;
        case 0x33e620u: goto label_33e620;
        case 0x33e624u: goto label_33e624;
        case 0x33e628u: goto label_33e628;
        case 0x33e62cu: goto label_33e62c;
        case 0x33e630u: goto label_33e630;
        case 0x33e634u: goto label_33e634;
        case 0x33e638u: goto label_33e638;
        case 0x33e63cu: goto label_33e63c;
        case 0x33e640u: goto label_33e640;
        case 0x33e644u: goto label_33e644;
        case 0x33e648u: goto label_33e648;
        case 0x33e64cu: goto label_33e64c;
        case 0x33e650u: goto label_33e650;
        case 0x33e654u: goto label_33e654;
        case 0x33e658u: goto label_33e658;
        case 0x33e65cu: goto label_33e65c;
        case 0x33e660u: goto label_33e660;
        case 0x33e664u: goto label_33e664;
        case 0x33e668u: goto label_33e668;
        case 0x33e66cu: goto label_33e66c;
        case 0x33e670u: goto label_33e670;
        case 0x33e674u: goto label_33e674;
        case 0x33e678u: goto label_33e678;
        case 0x33e67cu: goto label_33e67c;
        case 0x33e680u: goto label_33e680;
        case 0x33e684u: goto label_33e684;
        case 0x33e688u: goto label_33e688;
        case 0x33e68cu: goto label_33e68c;
        case 0x33e690u: goto label_33e690;
        case 0x33e694u: goto label_33e694;
        case 0x33e698u: goto label_33e698;
        case 0x33e69cu: goto label_33e69c;
        case 0x33e6a0u: goto label_33e6a0;
        case 0x33e6a4u: goto label_33e6a4;
        case 0x33e6a8u: goto label_33e6a8;
        case 0x33e6acu: goto label_33e6ac;
        case 0x33e6b0u: goto label_33e6b0;
        case 0x33e6b4u: goto label_33e6b4;
        case 0x33e6b8u: goto label_33e6b8;
        case 0x33e6bcu: goto label_33e6bc;
        case 0x33e6c0u: goto label_33e6c0;
        case 0x33e6c4u: goto label_33e6c4;
        case 0x33e6c8u: goto label_33e6c8;
        case 0x33e6ccu: goto label_33e6cc;
        case 0x33e6d0u: goto label_33e6d0;
        case 0x33e6d4u: goto label_33e6d4;
        case 0x33e6d8u: goto label_33e6d8;
        case 0x33e6dcu: goto label_33e6dc;
        case 0x33e6e0u: goto label_33e6e0;
        case 0x33e6e4u: goto label_33e6e4;
        case 0x33e6e8u: goto label_33e6e8;
        case 0x33e6ecu: goto label_33e6ec;
        case 0x33e6f0u: goto label_33e6f0;
        case 0x33e6f4u: goto label_33e6f4;
        case 0x33e6f8u: goto label_33e6f8;
        case 0x33e6fcu: goto label_33e6fc;
        case 0x33e700u: goto label_33e700;
        case 0x33e704u: goto label_33e704;
        case 0x33e708u: goto label_33e708;
        case 0x33e70cu: goto label_33e70c;
        case 0x33e710u: goto label_33e710;
        case 0x33e714u: goto label_33e714;
        case 0x33e718u: goto label_33e718;
        case 0x33e71cu: goto label_33e71c;
        case 0x33e720u: goto label_33e720;
        case 0x33e724u: goto label_33e724;
        case 0x33e728u: goto label_33e728;
        case 0x33e72cu: goto label_33e72c;
        case 0x33e730u: goto label_33e730;
        case 0x33e734u: goto label_33e734;
        case 0x33e738u: goto label_33e738;
        case 0x33e73cu: goto label_33e73c;
        case 0x33e740u: goto label_33e740;
        case 0x33e744u: goto label_33e744;
        case 0x33e748u: goto label_33e748;
        case 0x33e74cu: goto label_33e74c;
        case 0x33e750u: goto label_33e750;
        case 0x33e754u: goto label_33e754;
        case 0x33e758u: goto label_33e758;
        case 0x33e75cu: goto label_33e75c;
        case 0x33e760u: goto label_33e760;
        case 0x33e764u: goto label_33e764;
        case 0x33e768u: goto label_33e768;
        case 0x33e76cu: goto label_33e76c;
        case 0x33e770u: goto label_33e770;
        case 0x33e774u: goto label_33e774;
        case 0x33e778u: goto label_33e778;
        case 0x33e77cu: goto label_33e77c;
        case 0x33e780u: goto label_33e780;
        case 0x33e784u: goto label_33e784;
        case 0x33e788u: goto label_33e788;
        case 0x33e78cu: goto label_33e78c;
        case 0x33e790u: goto label_33e790;
        case 0x33e794u: goto label_33e794;
        case 0x33e798u: goto label_33e798;
        case 0x33e79cu: goto label_33e79c;
        case 0x33e7a0u: goto label_33e7a0;
        case 0x33e7a4u: goto label_33e7a4;
        case 0x33e7a8u: goto label_33e7a8;
        case 0x33e7acu: goto label_33e7ac;
        case 0x33e7b0u: goto label_33e7b0;
        case 0x33e7b4u: goto label_33e7b4;
        case 0x33e7b8u: goto label_33e7b8;
        case 0x33e7bcu: goto label_33e7bc;
        case 0x33e7c0u: goto label_33e7c0;
        case 0x33e7c4u: goto label_33e7c4;
        case 0x33e7c8u: goto label_33e7c8;
        case 0x33e7ccu: goto label_33e7cc;
        case 0x33e7d0u: goto label_33e7d0;
        case 0x33e7d4u: goto label_33e7d4;
        case 0x33e7d8u: goto label_33e7d8;
        case 0x33e7dcu: goto label_33e7dc;
        case 0x33e7e0u: goto label_33e7e0;
        case 0x33e7e4u: goto label_33e7e4;
        case 0x33e7e8u: goto label_33e7e8;
        case 0x33e7ecu: goto label_33e7ec;
        case 0x33e7f0u: goto label_33e7f0;
        case 0x33e7f4u: goto label_33e7f4;
        case 0x33e7f8u: goto label_33e7f8;
        case 0x33e7fcu: goto label_33e7fc;
        case 0x33e800u: goto label_33e800;
        case 0x33e804u: goto label_33e804;
        case 0x33e808u: goto label_33e808;
        case 0x33e80cu: goto label_33e80c;
        case 0x33e810u: goto label_33e810;
        case 0x33e814u: goto label_33e814;
        case 0x33e818u: goto label_33e818;
        case 0x33e81cu: goto label_33e81c;
        case 0x33e820u: goto label_33e820;
        case 0x33e824u: goto label_33e824;
        case 0x33e828u: goto label_33e828;
        case 0x33e82cu: goto label_33e82c;
        case 0x33e830u: goto label_33e830;
        case 0x33e834u: goto label_33e834;
        case 0x33e838u: goto label_33e838;
        case 0x33e83cu: goto label_33e83c;
        case 0x33e840u: goto label_33e840;
        case 0x33e844u: goto label_33e844;
        case 0x33e848u: goto label_33e848;
        case 0x33e84cu: goto label_33e84c;
        case 0x33e850u: goto label_33e850;
        case 0x33e854u: goto label_33e854;
        case 0x33e858u: goto label_33e858;
        case 0x33e85cu: goto label_33e85c;
        case 0x33e860u: goto label_33e860;
        case 0x33e864u: goto label_33e864;
        case 0x33e868u: goto label_33e868;
        case 0x33e86cu: goto label_33e86c;
        case 0x33e870u: goto label_33e870;
        case 0x33e874u: goto label_33e874;
        case 0x33e878u: goto label_33e878;
        case 0x33e87cu: goto label_33e87c;
        case 0x33e880u: goto label_33e880;
        case 0x33e884u: goto label_33e884;
        case 0x33e888u: goto label_33e888;
        case 0x33e88cu: goto label_33e88c;
        case 0x33e890u: goto label_33e890;
        case 0x33e894u: goto label_33e894;
        case 0x33e898u: goto label_33e898;
        case 0x33e89cu: goto label_33e89c;
        case 0x33e8a0u: goto label_33e8a0;
        case 0x33e8a4u: goto label_33e8a4;
        case 0x33e8a8u: goto label_33e8a8;
        case 0x33e8acu: goto label_33e8ac;
        case 0x33e8b0u: goto label_33e8b0;
        case 0x33e8b4u: goto label_33e8b4;
        case 0x33e8b8u: goto label_33e8b8;
        case 0x33e8bcu: goto label_33e8bc;
        case 0x33e8c0u: goto label_33e8c0;
        case 0x33e8c4u: goto label_33e8c4;
        case 0x33e8c8u: goto label_33e8c8;
        case 0x33e8ccu: goto label_33e8cc;
        case 0x33e8d0u: goto label_33e8d0;
        case 0x33e8d4u: goto label_33e8d4;
        case 0x33e8d8u: goto label_33e8d8;
        case 0x33e8dcu: goto label_33e8dc;
        case 0x33e8e0u: goto label_33e8e0;
        case 0x33e8e4u: goto label_33e8e4;
        case 0x33e8e8u: goto label_33e8e8;
        case 0x33e8ecu: goto label_33e8ec;
        case 0x33e8f0u: goto label_33e8f0;
        case 0x33e8f4u: goto label_33e8f4;
        case 0x33e8f8u: goto label_33e8f8;
        case 0x33e8fcu: goto label_33e8fc;
        case 0x33e900u: goto label_33e900;
        case 0x33e904u: goto label_33e904;
        case 0x33e908u: goto label_33e908;
        case 0x33e90cu: goto label_33e90c;
        case 0x33e910u: goto label_33e910;
        case 0x33e914u: goto label_33e914;
        case 0x33e918u: goto label_33e918;
        case 0x33e91cu: goto label_33e91c;
        case 0x33e920u: goto label_33e920;
        case 0x33e924u: goto label_33e924;
        case 0x33e928u: goto label_33e928;
        case 0x33e92cu: goto label_33e92c;
        case 0x33e930u: goto label_33e930;
        case 0x33e934u: goto label_33e934;
        case 0x33e938u: goto label_33e938;
        case 0x33e93cu: goto label_33e93c;
        case 0x33e940u: goto label_33e940;
        case 0x33e944u: goto label_33e944;
        case 0x33e948u: goto label_33e948;
        case 0x33e94cu: goto label_33e94c;
        case 0x33e950u: goto label_33e950;
        case 0x33e954u: goto label_33e954;
        case 0x33e958u: goto label_33e958;
        case 0x33e95cu: goto label_33e95c;
        case 0x33e960u: goto label_33e960;
        case 0x33e964u: goto label_33e964;
        case 0x33e968u: goto label_33e968;
        case 0x33e96cu: goto label_33e96c;
        case 0x33e970u: goto label_33e970;
        case 0x33e974u: goto label_33e974;
        case 0x33e978u: goto label_33e978;
        case 0x33e97cu: goto label_33e97c;
        case 0x33e980u: goto label_33e980;
        case 0x33e984u: goto label_33e984;
        case 0x33e988u: goto label_33e988;
        case 0x33e98cu: goto label_33e98c;
        case 0x33e990u: goto label_33e990;
        case 0x33e994u: goto label_33e994;
        case 0x33e998u: goto label_33e998;
        case 0x33e99cu: goto label_33e99c;
        case 0x33e9a0u: goto label_33e9a0;
        case 0x33e9a4u: goto label_33e9a4;
        case 0x33e9a8u: goto label_33e9a8;
        case 0x33e9acu: goto label_33e9ac;
        case 0x33e9b0u: goto label_33e9b0;
        case 0x33e9b4u: goto label_33e9b4;
        case 0x33e9b8u: goto label_33e9b8;
        case 0x33e9bcu: goto label_33e9bc;
        case 0x33e9c0u: goto label_33e9c0;
        case 0x33e9c4u: goto label_33e9c4;
        case 0x33e9c8u: goto label_33e9c8;
        case 0x33e9ccu: goto label_33e9cc;
        case 0x33e9d0u: goto label_33e9d0;
        case 0x33e9d4u: goto label_33e9d4;
        case 0x33e9d8u: goto label_33e9d8;
        case 0x33e9dcu: goto label_33e9dc;
        case 0x33e9e0u: goto label_33e9e0;
        case 0x33e9e4u: goto label_33e9e4;
        case 0x33e9e8u: goto label_33e9e8;
        case 0x33e9ecu: goto label_33e9ec;
        case 0x33e9f0u: goto label_33e9f0;
        case 0x33e9f4u: goto label_33e9f4;
        case 0x33e9f8u: goto label_33e9f8;
        case 0x33e9fcu: goto label_33e9fc;
        case 0x33ea00u: goto label_33ea00;
        case 0x33ea04u: goto label_33ea04;
        case 0x33ea08u: goto label_33ea08;
        case 0x33ea0cu: goto label_33ea0c;
        case 0x33ea10u: goto label_33ea10;
        case 0x33ea14u: goto label_33ea14;
        case 0x33ea18u: goto label_33ea18;
        case 0x33ea1cu: goto label_33ea1c;
        case 0x33ea20u: goto label_33ea20;
        case 0x33ea24u: goto label_33ea24;
        case 0x33ea28u: goto label_33ea28;
        case 0x33ea2cu: goto label_33ea2c;
        case 0x33ea30u: goto label_33ea30;
        case 0x33ea34u: goto label_33ea34;
        case 0x33ea38u: goto label_33ea38;
        case 0x33ea3cu: goto label_33ea3c;
        case 0x33ea40u: goto label_33ea40;
        case 0x33ea44u: goto label_33ea44;
        case 0x33ea48u: goto label_33ea48;
        case 0x33ea4cu: goto label_33ea4c;
        case 0x33ea50u: goto label_33ea50;
        case 0x33ea54u: goto label_33ea54;
        case 0x33ea58u: goto label_33ea58;
        case 0x33ea5cu: goto label_33ea5c;
        case 0x33ea60u: goto label_33ea60;
        case 0x33ea64u: goto label_33ea64;
        case 0x33ea68u: goto label_33ea68;
        case 0x33ea6cu: goto label_33ea6c;
        case 0x33ea70u: goto label_33ea70;
        case 0x33ea74u: goto label_33ea74;
        case 0x33ea78u: goto label_33ea78;
        case 0x33ea7cu: goto label_33ea7c;
        case 0x33ea80u: goto label_33ea80;
        case 0x33ea84u: goto label_33ea84;
        case 0x33ea88u: goto label_33ea88;
        case 0x33ea8cu: goto label_33ea8c;
        case 0x33ea90u: goto label_33ea90;
        case 0x33ea94u: goto label_33ea94;
        case 0x33ea98u: goto label_33ea98;
        case 0x33ea9cu: goto label_33ea9c;
        case 0x33eaa0u: goto label_33eaa0;
        case 0x33eaa4u: goto label_33eaa4;
        case 0x33eaa8u: goto label_33eaa8;
        case 0x33eaacu: goto label_33eaac;
        case 0x33eab0u: goto label_33eab0;
        case 0x33eab4u: goto label_33eab4;
        case 0x33eab8u: goto label_33eab8;
        case 0x33eabcu: goto label_33eabc;
        case 0x33eac0u: goto label_33eac0;
        case 0x33eac4u: goto label_33eac4;
        case 0x33eac8u: goto label_33eac8;
        case 0x33eaccu: goto label_33eacc;
        case 0x33ead0u: goto label_33ead0;
        case 0x33ead4u: goto label_33ead4;
        case 0x33ead8u: goto label_33ead8;
        case 0x33eadcu: goto label_33eadc;
        case 0x33eae0u: goto label_33eae0;
        case 0x33eae4u: goto label_33eae4;
        case 0x33eae8u: goto label_33eae8;
        case 0x33eaecu: goto label_33eaec;
        case 0x33eaf0u: goto label_33eaf0;
        case 0x33eaf4u: goto label_33eaf4;
        case 0x33eaf8u: goto label_33eaf8;
        case 0x33eafcu: goto label_33eafc;
        case 0x33eb00u: goto label_33eb00;
        case 0x33eb04u: goto label_33eb04;
        case 0x33eb08u: goto label_33eb08;
        case 0x33eb0cu: goto label_33eb0c;
        case 0x33eb10u: goto label_33eb10;
        case 0x33eb14u: goto label_33eb14;
        case 0x33eb18u: goto label_33eb18;
        case 0x33eb1cu: goto label_33eb1c;
        case 0x33eb20u: goto label_33eb20;
        case 0x33eb24u: goto label_33eb24;
        case 0x33eb28u: goto label_33eb28;
        case 0x33eb2cu: goto label_33eb2c;
        case 0x33eb30u: goto label_33eb30;
        case 0x33eb34u: goto label_33eb34;
        case 0x33eb38u: goto label_33eb38;
        case 0x33eb3cu: goto label_33eb3c;
        case 0x33eb40u: goto label_33eb40;
        case 0x33eb44u: goto label_33eb44;
        case 0x33eb48u: goto label_33eb48;
        case 0x33eb4cu: goto label_33eb4c;
        case 0x33eb50u: goto label_33eb50;
        case 0x33eb54u: goto label_33eb54;
        case 0x33eb58u: goto label_33eb58;
        case 0x33eb5cu: goto label_33eb5c;
        case 0x33eb60u: goto label_33eb60;
        case 0x33eb64u: goto label_33eb64;
        case 0x33eb68u: goto label_33eb68;
        case 0x33eb6cu: goto label_33eb6c;
        case 0x33eb70u: goto label_33eb70;
        case 0x33eb74u: goto label_33eb74;
        case 0x33eb78u: goto label_33eb78;
        case 0x33eb7cu: goto label_33eb7c;
        case 0x33eb80u: goto label_33eb80;
        case 0x33eb84u: goto label_33eb84;
        case 0x33eb88u: goto label_33eb88;
        case 0x33eb8cu: goto label_33eb8c;
        case 0x33eb90u: goto label_33eb90;
        case 0x33eb94u: goto label_33eb94;
        case 0x33eb98u: goto label_33eb98;
        case 0x33eb9cu: goto label_33eb9c;
        case 0x33eba0u: goto label_33eba0;
        case 0x33eba4u: goto label_33eba4;
        case 0x33eba8u: goto label_33eba8;
        case 0x33ebacu: goto label_33ebac;
        case 0x33ebb0u: goto label_33ebb0;
        case 0x33ebb4u: goto label_33ebb4;
        case 0x33ebb8u: goto label_33ebb8;
        case 0x33ebbcu: goto label_33ebbc;
        case 0x33ebc0u: goto label_33ebc0;
        case 0x33ebc4u: goto label_33ebc4;
        case 0x33ebc8u: goto label_33ebc8;
        case 0x33ebccu: goto label_33ebcc;
        case 0x33ebd0u: goto label_33ebd0;
        case 0x33ebd4u: goto label_33ebd4;
        case 0x33ebd8u: goto label_33ebd8;
        case 0x33ebdcu: goto label_33ebdc;
        case 0x33ebe0u: goto label_33ebe0;
        case 0x33ebe4u: goto label_33ebe4;
        case 0x33ebe8u: goto label_33ebe8;
        case 0x33ebecu: goto label_33ebec;
        case 0x33ebf0u: goto label_33ebf0;
        case 0x33ebf4u: goto label_33ebf4;
        case 0x33ebf8u: goto label_33ebf8;
        case 0x33ebfcu: goto label_33ebfc;
        case 0x33ec00u: goto label_33ec00;
        case 0x33ec04u: goto label_33ec04;
        case 0x33ec08u: goto label_33ec08;
        case 0x33ec0cu: goto label_33ec0c;
        case 0x33ec10u: goto label_33ec10;
        case 0x33ec14u: goto label_33ec14;
        case 0x33ec18u: goto label_33ec18;
        case 0x33ec1cu: goto label_33ec1c;
        case 0x33ec20u: goto label_33ec20;
        case 0x33ec24u: goto label_33ec24;
        case 0x33ec28u: goto label_33ec28;
        case 0x33ec2cu: goto label_33ec2c;
        case 0x33ec30u: goto label_33ec30;
        case 0x33ec34u: goto label_33ec34;
        case 0x33ec38u: goto label_33ec38;
        case 0x33ec3cu: goto label_33ec3c;
        case 0x33ec40u: goto label_33ec40;
        case 0x33ec44u: goto label_33ec44;
        case 0x33ec48u: goto label_33ec48;
        case 0x33ec4cu: goto label_33ec4c;
        case 0x33ec50u: goto label_33ec50;
        case 0x33ec54u: goto label_33ec54;
        case 0x33ec58u: goto label_33ec58;
        case 0x33ec5cu: goto label_33ec5c;
        case 0x33ec60u: goto label_33ec60;
        case 0x33ec64u: goto label_33ec64;
        case 0x33ec68u: goto label_33ec68;
        case 0x33ec6cu: goto label_33ec6c;
        case 0x33ec70u: goto label_33ec70;
        case 0x33ec74u: goto label_33ec74;
        case 0x33ec78u: goto label_33ec78;
        case 0x33ec7cu: goto label_33ec7c;
        case 0x33ec80u: goto label_33ec80;
        case 0x33ec84u: goto label_33ec84;
        case 0x33ec88u: goto label_33ec88;
        case 0x33ec8cu: goto label_33ec8c;
        case 0x33ec90u: goto label_33ec90;
        case 0x33ec94u: goto label_33ec94;
        case 0x33ec98u: goto label_33ec98;
        case 0x33ec9cu: goto label_33ec9c;
        case 0x33eca0u: goto label_33eca0;
        case 0x33eca4u: goto label_33eca4;
        case 0x33eca8u: goto label_33eca8;
        case 0x33ecacu: goto label_33ecac;
        case 0x33ecb0u: goto label_33ecb0;
        case 0x33ecb4u: goto label_33ecb4;
        case 0x33ecb8u: goto label_33ecb8;
        case 0x33ecbcu: goto label_33ecbc;
        case 0x33ecc0u: goto label_33ecc0;
        case 0x33ecc4u: goto label_33ecc4;
        case 0x33ecc8u: goto label_33ecc8;
        case 0x33ecccu: goto label_33eccc;
        case 0x33ecd0u: goto label_33ecd0;
        case 0x33ecd4u: goto label_33ecd4;
        case 0x33ecd8u: goto label_33ecd8;
        case 0x33ecdcu: goto label_33ecdc;
        case 0x33ece0u: goto label_33ece0;
        case 0x33ece4u: goto label_33ece4;
        case 0x33ece8u: goto label_33ece8;
        case 0x33ececu: goto label_33ecec;
        case 0x33ecf0u: goto label_33ecf0;
        case 0x33ecf4u: goto label_33ecf4;
        case 0x33ecf8u: goto label_33ecf8;
        case 0x33ecfcu: goto label_33ecfc;
        case 0x33ed00u: goto label_33ed00;
        case 0x33ed04u: goto label_33ed04;
        case 0x33ed08u: goto label_33ed08;
        case 0x33ed0cu: goto label_33ed0c;
        case 0x33ed10u: goto label_33ed10;
        case 0x33ed14u: goto label_33ed14;
        case 0x33ed18u: goto label_33ed18;
        case 0x33ed1cu: goto label_33ed1c;
        case 0x33ed20u: goto label_33ed20;
        case 0x33ed24u: goto label_33ed24;
        case 0x33ed28u: goto label_33ed28;
        case 0x33ed2cu: goto label_33ed2c;
        case 0x33ed30u: goto label_33ed30;
        case 0x33ed34u: goto label_33ed34;
        case 0x33ed38u: goto label_33ed38;
        case 0x33ed3cu: goto label_33ed3c;
        case 0x33ed40u: goto label_33ed40;
        case 0x33ed44u: goto label_33ed44;
        case 0x33ed48u: goto label_33ed48;
        case 0x33ed4cu: goto label_33ed4c;
        case 0x33ed50u: goto label_33ed50;
        case 0x33ed54u: goto label_33ed54;
        case 0x33ed58u: goto label_33ed58;
        case 0x33ed5cu: goto label_33ed5c;
        case 0x33ed60u: goto label_33ed60;
        case 0x33ed64u: goto label_33ed64;
        case 0x33ed68u: goto label_33ed68;
        case 0x33ed6cu: goto label_33ed6c;
        case 0x33ed70u: goto label_33ed70;
        case 0x33ed74u: goto label_33ed74;
        case 0x33ed78u: goto label_33ed78;
        case 0x33ed7cu: goto label_33ed7c;
        case 0x33ed80u: goto label_33ed80;
        case 0x33ed84u: goto label_33ed84;
        case 0x33ed88u: goto label_33ed88;
        case 0x33ed8cu: goto label_33ed8c;
        case 0x33ed90u: goto label_33ed90;
        case 0x33ed94u: goto label_33ed94;
        case 0x33ed98u: goto label_33ed98;
        case 0x33ed9cu: goto label_33ed9c;
        case 0x33eda0u: goto label_33eda0;
        case 0x33eda4u: goto label_33eda4;
        case 0x33eda8u: goto label_33eda8;
        case 0x33edacu: goto label_33edac;
        case 0x33edb0u: goto label_33edb0;
        case 0x33edb4u: goto label_33edb4;
        case 0x33edb8u: goto label_33edb8;
        case 0x33edbcu: goto label_33edbc;
        case 0x33edc0u: goto label_33edc0;
        case 0x33edc4u: goto label_33edc4;
        case 0x33edc8u: goto label_33edc8;
        case 0x33edccu: goto label_33edcc;
        case 0x33edd0u: goto label_33edd0;
        case 0x33edd4u: goto label_33edd4;
        case 0x33edd8u: goto label_33edd8;
        case 0x33eddcu: goto label_33eddc;
        case 0x33ede0u: goto label_33ede0;
        case 0x33ede4u: goto label_33ede4;
        case 0x33ede8u: goto label_33ede8;
        case 0x33edecu: goto label_33edec;
        case 0x33edf0u: goto label_33edf0;
        case 0x33edf4u: goto label_33edf4;
        case 0x33edf8u: goto label_33edf8;
        case 0x33edfcu: goto label_33edfc;
        case 0x33ee00u: goto label_33ee00;
        case 0x33ee04u: goto label_33ee04;
        case 0x33ee08u: goto label_33ee08;
        case 0x33ee0cu: goto label_33ee0c;
        case 0x33ee10u: goto label_33ee10;
        case 0x33ee14u: goto label_33ee14;
        case 0x33ee18u: goto label_33ee18;
        case 0x33ee1cu: goto label_33ee1c;
        case 0x33ee20u: goto label_33ee20;
        case 0x33ee24u: goto label_33ee24;
        case 0x33ee28u: goto label_33ee28;
        case 0x33ee2cu: goto label_33ee2c;
        case 0x33ee30u: goto label_33ee30;
        case 0x33ee34u: goto label_33ee34;
        case 0x33ee38u: goto label_33ee38;
        case 0x33ee3cu: goto label_33ee3c;
        case 0x33ee40u: goto label_33ee40;
        case 0x33ee44u: goto label_33ee44;
        case 0x33ee48u: goto label_33ee48;
        case 0x33ee4cu: goto label_33ee4c;
        case 0x33ee50u: goto label_33ee50;
        case 0x33ee54u: goto label_33ee54;
        case 0x33ee58u: goto label_33ee58;
        case 0x33ee5cu: goto label_33ee5c;
        case 0x33ee60u: goto label_33ee60;
        case 0x33ee64u: goto label_33ee64;
        case 0x33ee68u: goto label_33ee68;
        case 0x33ee6cu: goto label_33ee6c;
        case 0x33ee70u: goto label_33ee70;
        case 0x33ee74u: goto label_33ee74;
        case 0x33ee78u: goto label_33ee78;
        case 0x33ee7cu: goto label_33ee7c;
        case 0x33ee80u: goto label_33ee80;
        case 0x33ee84u: goto label_33ee84;
        case 0x33ee88u: goto label_33ee88;
        case 0x33ee8cu: goto label_33ee8c;
        case 0x33ee90u: goto label_33ee90;
        case 0x33ee94u: goto label_33ee94;
        case 0x33ee98u: goto label_33ee98;
        case 0x33ee9cu: goto label_33ee9c;
        default: break;
    }

    ctx->pc = 0x33cc00u;

label_33cc00:
    // 0x33cc00: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x33cc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_33cc04:
    // 0x33cc04: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33cc08:
    // 0x33cc08: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x33cc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_33cc0c:
    // 0x33cc0c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x33cc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_33cc10:
    // 0x33cc10: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x33cc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_33cc14:
    // 0x33cc14: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x33cc14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_33cc18:
    // 0x33cc18: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x33cc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_33cc1c:
    // 0x33cc1c: 0x3c170064  lui         $s7, 0x64
    ctx->pc = 0x33cc1cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)100 << 16));
label_33cc20:
    // 0x33cc20: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x33cc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_33cc24:
    // 0x33cc24: 0x26f72108  addiu       $s7, $s7, 0x2108
    ctx->pc = 0x33cc24u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8456));
label_33cc28:
    // 0x33cc28: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x33cc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_33cc2c:
    // 0x33cc2c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x33cc2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33cc30:
    // 0x33cc30: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x33cc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_33cc34:
    // 0x33cc34: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x33cc34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33cc38:
    // 0x33cc38: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x33cc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_33cc3c:
    // 0x33cc3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33cc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_33cc40:
    // 0x33cc40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33cc40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33cc44:
    // 0x33cc44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33cc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_33cc48:
    // 0x33cc48: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x33cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_33cc4c:
    // 0x33cc4c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x33cc4cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_33cc50:
    // 0x33cc50: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x33cc50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_33cc54:
    // 0x33cc54: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x33cc54u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_33cc58:
    // 0x33cc58: 0x2610a890  addiu       $s0, $s0, -0x5770
    ctx->pc = 0x33cc58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944912));
label_33cc5c:
    // 0x33cc5c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x33cc5cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_33cc60:
    // 0x33cc60: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x33cc60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_33cc64:
    // 0x33cc64: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x33cc64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_33cc68:
    // 0x33cc68: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x33cc68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_33cc6c:
    // 0x33cc6c: 0x8c7189f0  lw          $s1, -0x7610($v1)
    ctx->pc = 0x33cc6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_33cc70:
    // 0x33cc70: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x33cc70u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_33cc74:
    // 0x33cc74: 0x8c9689e0  lw          $s6, -0x7620($a0)
    ctx->pc = 0x33cc74u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937056)));
label_33cc78:
    // 0x33cc78: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x33cc78u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_33cc7c:
    // 0x33cc7c: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x33cc7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_33cc80:
    // 0x33cc80: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33cc84:
    // 0x33cc84: 0x8c6589d0  lw          $a1, -0x7630($v1)
    ctx->pc = 0x33cc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_33cc88:
    // 0x33cc88: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33cc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33cc8c:
    // 0x33cc8c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x33cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_33cc90:
    // 0x33cc90: 0x8ca50084  lw          $a1, 0x84($a1)
    ctx->pc = 0x33cc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
label_33cc94:
    // 0x33cc94: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x33cc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_33cc98:
    // 0x33cc98: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x33cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_33cc9c:
    // 0x33cc9c: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
label_33cca0:
    if (ctx->pc == 0x33CCA0u) {
        ctx->pc = 0x33CCA0u;
            // 0x33cca0: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->pc = 0x33CCA4u;
        goto label_33cca4;
    }
    ctx->pc = 0x33CC9Cu;
    {
        const bool branch_taken_0x33cc9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x33CCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33CC9Cu;
            // 0x33cca0: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc9c) {
            ctx->pc = 0x33CCB0u;
            goto label_33ccb0;
        }
    }
    ctx->pc = 0x33CCA4u;
label_33cca4:
    // 0x33cca4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x33cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_33cca8:
    // 0x33cca8: 0x54a3010b  bnel        $a1, $v1, . + 4 + (0x10B << 2)
label_33ccac:
    if (ctx->pc == 0x33CCACu) {
        ctx->pc = 0x33CCACu;
            // 0x33ccac: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x33CCB0u;
        goto label_33ccb0;
    }
    ctx->pc = 0x33CCA8u;
    {
        const bool branch_taken_0x33cca8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x33cca8) {
            ctx->pc = 0x33CCACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33CCA8u;
            // 0x33ccac: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D0D8u;
            goto label_33d0d8;
        }
    }
    ctx->pc = 0x33CCB0u;
label_33ccb0:
    // 0x33ccb0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33ccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_33ccb4:
    // 0x33ccb4: 0x8c643e78  lw          $a0, 0x3E78($v1)
    ctx->pc = 0x33ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15992)));
label_33ccb8:
    // 0x33ccb8: 0x10800106  beqz        $a0, . + 4 + (0x106 << 2)
label_33ccbc:
    if (ctx->pc == 0x33CCBCu) {
        ctx->pc = 0x33CCC0u;
        goto label_33ccc0;
    }
    ctx->pc = 0x33CCB8u;
    {
        const bool branch_taken_0x33ccb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ccb8) {
            ctx->pc = 0x33D0D4u;
            goto label_33d0d4;
        }
    }
    ctx->pc = 0x33CCC0u;
label_33ccc0:
    // 0x33ccc0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x33ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_33ccc4:
    // 0x33ccc4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_33ccc8:
    // 0x33ccc8: 0x9063fe01  lbu         $v1, -0x1FF($v1)
    ctx->pc = 0x33ccc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294966785)));
label_33cccc:
    // 0x33cccc: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_33ccd0:
    if (ctx->pc == 0x33CCD0u) {
        ctx->pc = 0x33CCD0u;
            // 0x33ccd0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33CCD4u;
        goto label_33ccd4;
    }
    ctx->pc = 0x33CCCCu;
    {
        const bool branch_taken_0x33cccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cccc) {
            ctx->pc = 0x33CCD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33CCCCu;
            // 0x33ccd0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33CCDCu;
            goto label_33ccdc;
        }
    }
    ctx->pc = 0x33CCD4u;
label_33ccd4:
    // 0x33ccd4: 0x3401fda0  ori         $at, $zero, 0xFDA0
    ctx->pc = 0x33ccd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64928);
label_33ccd8:
    // 0x33ccd8: 0x819821  addu        $s3, $a0, $at
    ctx->pc = 0x33ccd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_33ccdc:
    // 0x33ccdc: 0x126000fd  beqz        $s3, . + 4 + (0xFD << 2)
label_33cce0:
    if (ctx->pc == 0x33CCE0u) {
        ctx->pc = 0x33CCE4u;
        goto label_33cce4;
    }
    ctx->pc = 0x33CCDCu;
    {
        const bool branch_taken_0x33ccdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ccdc) {
            ctx->pc = 0x33D0D4u;
            goto label_33d0d4;
        }
    }
    ctx->pc = 0x33CCE4u;
label_33cce4:
    // 0x33cce4: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x33cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_33cce8:
    // 0x33cce8: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_33ccec:
    if (ctx->pc == 0x33CCECu) {
        ctx->pc = 0x33CCECu;
            // 0x33ccec: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->pc = 0x33CCF0u;
        goto label_33ccf0;
    }
    ctx->pc = 0x33CCE8u;
    {
        const bool branch_taken_0x33cce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cce8) {
            ctx->pc = 0x33CCECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33CCE8u;
            // 0x33ccec: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33CD4Cu;
            goto label_33cd4c;
        }
    }
    ctx->pc = 0x33CCF0u;
label_33ccf0:
    // 0x33ccf0: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x33ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_33ccf4:
    // 0x33ccf4: 0x8063010f  lb          $v1, 0x10F($v1)
    ctx->pc = 0x33ccf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 271)));
label_33ccf8:
    // 0x33ccf8: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x33ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_33ccfc:
    // 0x33ccfc: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_33cd00:
    if (ctx->pc == 0x33CD00u) {
        ctx->pc = 0x33CD04u;
        goto label_33cd04;
    }
    ctx->pc = 0x33CCFCu;
    {
        const bool branch_taken_0x33ccfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ccfc) {
            ctx->pc = 0x33CD54u;
            goto label_33cd54;
        }
    }
    ctx->pc = 0x33CD04u;
label_33cd04:
    // 0x33cd04: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x33cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_33cd08:
    // 0x33cd08: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_33cd0c:
    if (ctx->pc == 0x33CD0Cu) {
        ctx->pc = 0x33CD10u;
        goto label_33cd10;
    }
    ctx->pc = 0x33CD08u;
    {
        const bool branch_taken_0x33cd08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33cd08) {
            ctx->pc = 0x33CD54u;
            goto label_33cd54;
        }
    }
    ctx->pc = 0x33CD10u;
label_33cd10:
    // 0x33cd10: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x33cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_33cd14:
    // 0x33cd14: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_33cd18:
    if (ctx->pc == 0x33CD18u) {
        ctx->pc = 0x33CD1Cu;
        goto label_33cd1c;
    }
    ctx->pc = 0x33CD14u;
    {
        const bool branch_taken_0x33cd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33cd14) {
            ctx->pc = 0x33CD54u;
            goto label_33cd54;
        }
    }
    ctx->pc = 0x33CD1Cu;
label_33cd1c:
    // 0x33cd1c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x33cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_33cd20:
    // 0x33cd20: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_33cd24:
    if (ctx->pc == 0x33CD24u) {
        ctx->pc = 0x33CD28u;
        goto label_33cd28;
    }
    ctx->pc = 0x33CD20u;
    {
        const bool branch_taken_0x33cd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33cd20) {
            ctx->pc = 0x33CD54u;
            goto label_33cd54;
        }
    }
    ctx->pc = 0x33CD28u;
label_33cd28:
    // 0x33cd28: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x33cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33cd2c:
    // 0x33cd2c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_33cd30:
    if (ctx->pc == 0x33CD30u) {
        ctx->pc = 0x33CD34u;
        goto label_33cd34;
    }
    ctx->pc = 0x33CD2Cu;
    {
        const bool branch_taken_0x33cd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33cd2c) {
            ctx->pc = 0x33CD54u;
            goto label_33cd54;
        }
    }
    ctx->pc = 0x33CD34u;
label_33cd34:
    // 0x33cd34: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x33cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_33cd38:
    // 0x33cd38: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x33cd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_33cd3c:
    // 0x33cd3c: 0xc04cce8  jal         func_1333A0
label_33cd40:
    if (ctx->pc == 0x33CD40u) {
        ctx->pc = 0x33CD44u;
        goto label_33cd44;
    }
    ctx->pc = 0x33CD3Cu;
    SET_GPR_U32(ctx, 31, 0x33CD44u);
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CD44u; }
        if (ctx->pc != 0x33CD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CD44u; }
        if (ctx->pc != 0x33CD44u) { return; }
    }
    ctx->pc = 0x33CD44u;
label_33cd44:
    // 0x33cd44: 0x10000003  b           . + 4 + (0x3 << 2)
label_33cd48:
    if (ctx->pc == 0x33CD48u) {
        ctx->pc = 0x33CD4Cu;
        goto label_33cd4c;
    }
    ctx->pc = 0x33CD44u;
    {
        const bool branch_taken_0x33cd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cd44) {
            ctx->pc = 0x33CD54u;
            goto label_33cd54;
        }
    }
    ctx->pc = 0x33CD4Cu;
label_33cd4c:
    // 0x33cd4c: 0xc04cce8  jal         func_1333A0
label_33cd50:
    if (ctx->pc == 0x33CD50u) {
        ctx->pc = 0x33CD50u;
            // 0x33cd50: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x33CD54u;
        goto label_33cd54;
    }
    ctx->pc = 0x33CD4Cu;
    SET_GPR_U32(ctx, 31, 0x33CD54u);
    ctx->pc = 0x33CD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33CD4Cu;
            // 0x33cd50: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CD54u; }
        if (ctx->pc != 0x33CD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CD54u; }
        if (ctx->pc != 0x33CD54u) { return; }
    }
    ctx->pc = 0x33CD54u;
label_33cd54:
    // 0x33cd54: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x33cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33cd58:
    // 0x33cd58: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x33cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_33cd5c:
    // 0x33cd5c: 0x8c47d130  lw          $a3, -0x2ED0($v0)
    ctx->pc = 0x33cd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_33cd60:
    // 0x33cd60: 0x2463caf0  addiu       $v1, $v1, -0x3510
    ctx->pc = 0x33cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953712));
label_33cd64:
    // 0x33cd64: 0x92640060  lbu         $a0, 0x60($s3)
    ctx->pc = 0x33cd64u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
label_33cd68:
    // 0x33cd68: 0x26450060  addiu       $a1, $s2, 0x60
    ctx->pc = 0x33cd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_33cd6c:
    // 0x33cd6c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x33cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33cd70:
    // 0x33cd70: 0x8ce70130  lw          $a3, 0x130($a3)
    ctx->pc = 0x33cd70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_33cd74:
    // 0x33cd74: 0x8c46d120  lw          $a2, -0x2EE0($v0)
    ctx->pc = 0x33cd74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_33cd78:
    // 0x33cd78: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x33cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_33cd7c:
    // 0x33cd7c: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x33cd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_33cd80:
    // 0x33cd80: 0xc44307f0  lwc1        $f3, 0x7F0($v0)
    ctx->pc = 0x33cd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_33cd84:
    // 0x33cd84: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x33cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_33cd88:
    // 0x33cd88: 0xc44207f4  lwc1        $f2, 0x7F4($v0)
    ctx->pc = 0x33cd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33cd8c:
    // 0x33cd8c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x33cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_33cd90:
    // 0x33cd90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_33cd94:
    // 0x33cd94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33cd98:
    // 0x33cd98: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x33cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_33cd9c:
    // 0x33cd9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33cda0:
    // 0x33cda0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x33cda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_33cda4:
    // 0x33cda4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x33cda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33cda8:
    // 0x33cda8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33cdac:
    // 0x33cdac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x33cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_33cdb0:
    // 0x33cdb0: 0x24720150  addiu       $s2, $v1, 0x150
    ctx->pc = 0x33cdb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
label_33cdb4:
    // 0x33cdb4: 0xc44107f8  lwc1        $f1, 0x7F8($v0)
    ctx->pc = 0x33cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33cdb8:
    // 0x33cdb8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x33cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_33cdbc:
    // 0x33cdbc: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x33cdbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_33cdc0:
    // 0x33cdc0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x33cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_33cdc4:
    // 0x33cdc4: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x33cdc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_33cdc8:
    // 0x33cdc8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x33cdc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33cdcc:
    // 0x33cdcc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x33cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_33cdd0:
    // 0x33cdd0: 0xc44207fc  lwc1        $f2, 0x7FC($v0)
    ctx->pc = 0x33cdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33cdd4:
    // 0x33cdd4: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x33cdd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_33cdd8:
    // 0x33cdd8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x33cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_33cddc:
    // 0x33cddc: 0xc4410800  lwc1        $f1, 0x800($v0)
    ctx->pc = 0x33cddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33cde0:
    // 0x33cde0: 0xe7a200fc  swc1        $f2, 0xFC($sp)
    ctx->pc = 0x33cde0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_33cde4:
    // 0x33cde4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x33cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_33cde8:
    // 0x33cde8: 0xc4420808  lwc1        $f2, 0x808($v0)
    ctx->pc = 0x33cde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33cdec:
    // 0x33cdec: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x33cdecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_33cdf0:
    // 0x33cdf0: 0xc461080c  lwc1        $f1, 0x80C($v1)
    ctx->pc = 0x33cdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33cdf4:
    // 0x33cdf4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x33cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_33cdf8:
    // 0x33cdf8: 0x8c420804  lw          $v0, 0x804($v0)
    ctx->pc = 0x33cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2052)));
label_33cdfc:
    // 0x33cdfc: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x33cdfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_33ce00:
    // 0x33ce00: 0xe7a100ec  swc1        $f1, 0xEC($sp)
    ctx->pc = 0x33ce00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_33ce04:
    // 0x33ce04: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x33ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_33ce08:
    // 0x33ce08: 0xc04ccc4  jal         func_133310
label_33ce0c:
    if (ctx->pc == 0x33CE0Cu) {
        ctx->pc = 0x33CE0Cu;
            // 0x33ce0c: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->pc = 0x33CE10u;
        goto label_33ce10;
    }
    ctx->pc = 0x33CE08u;
    SET_GPR_U32(ctx, 31, 0x33CE10u);
    ctx->pc = 0x33CE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33CE08u;
            // 0x33ce0c: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CE10u; }
        if (ctx->pc != 0x33CE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CE10u; }
        if (ctx->pc != 0x33CE10u) { return; }
    }
    ctx->pc = 0x33CE10u;
label_33ce10:
    // 0x33ce10: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x33ce10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_33ce14:
    // 0x33ce14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33ce14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33ce18:
    // 0x33ce18: 0xc04cbe0  jal         func_132F80
label_33ce1c:
    if (ctx->pc == 0x33CE1Cu) {
        ctx->pc = 0x33CE1Cu;
            // 0x33ce1c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x33CE20u;
        goto label_33ce20;
    }
    ctx->pc = 0x33CE18u;
    SET_GPR_U32(ctx, 31, 0x33CE20u);
    ctx->pc = 0x33CE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33CE18u;
            // 0x33ce1c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CE20u; }
        if (ctx->pc != 0x33CE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CE20u; }
        if (ctx->pc != 0x33CE20u) { return; }
    }
    ctx->pc = 0x33CE20u;
label_33ce20:
    // 0x33ce20: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x33ce20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_33ce24:
    // 0x33ce24: 0xc04cc1c  jal         func_133070
label_33ce28:
    if (ctx->pc == 0x33CE28u) {
        ctx->pc = 0x33CE28u;
            // 0x33ce28: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x33CE2Cu;
        goto label_33ce2c;
    }
    ctx->pc = 0x33CE24u;
    SET_GPR_U32(ctx, 31, 0x33CE2Cu);
    ctx->pc = 0x33CE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33CE24u;
            // 0x33ce28: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CE2Cu; }
        if (ctx->pc != 0x33CE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CE2Cu; }
        if (ctx->pc != 0x33CE2Cu) { return; }
    }
    ctx->pc = 0x33CE2Cu;
label_33ce2c:
    // 0x33ce2c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x33ce2cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_33ce30:
    // 0x33ce30: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x33ce30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_33ce34:
    // 0x33ce34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33ce34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33ce38:
    // 0x33ce38: 0xc075094  jal         func_1D4250
label_33ce3c:
    if (ctx->pc == 0x33CE3Cu) {
        ctx->pc = 0x33CE3Cu;
            // 0x33ce3c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x33CE40u;
        goto label_33ce40;
    }
    ctx->pc = 0x33CE38u;
    SET_GPR_U32(ctx, 31, 0x33CE40u);
    ctx->pc = 0x33CE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33CE38u;
            // 0x33ce3c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CE40u; }
        if (ctx->pc != 0x33CE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CE40u; }
        if (ctx->pc != 0x33CE40u) { return; }
    }
    ctx->pc = 0x33CE40u;
label_33ce40:
    // 0x33ce40: 0x3c02bf93  lui         $v0, 0xBF93
    ctx->pc = 0x33ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49043 << 16));
label_33ce44:
    // 0x33ce44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33ce44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33ce48:
    // 0x33ce48: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x33ce48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_33ce4c:
    // 0x33ce4c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x33ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_33ce50:
    // 0x33ce50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33ce50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33ce54:
    // 0x33ce54: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x33ce54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_33ce58:
    // 0x33ce58: 0xc04cc7c  jal         func_1331F0
label_33ce5c:
    if (ctx->pc == 0x33CE5Cu) {
        ctx->pc = 0x33CE5Cu;
            // 0x33ce5c: 0x46170302  mul.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->pc = 0x33CE60u;
        goto label_33ce60;
    }
    ctx->pc = 0x33CE58u;
    SET_GPR_U32(ctx, 31, 0x33CE60u);
    ctx->pc = 0x33CE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33CE58u;
            // 0x33ce5c: 0x46170302  mul.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CE60u; }
        if (ctx->pc != 0x33CE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CE60u; }
        if (ctx->pc != 0x33CE60u) { return; }
    }
    ctx->pc = 0x33CE60u;
label_33ce60:
    // 0x33ce60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33ce60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33ce64:
    // 0x33ce64: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x33ce64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_33ce68:
    // 0x33ce68: 0xc075094  jal         func_1D4250
label_33ce6c:
    if (ctx->pc == 0x33CE6Cu) {
        ctx->pc = 0x33CE6Cu;
            // 0x33ce6c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x33CE70u;
        goto label_33ce70;
    }
    ctx->pc = 0x33CE68u;
    SET_GPR_U32(ctx, 31, 0x33CE70u);
    ctx->pc = 0x33CE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33CE68u;
            // 0x33ce6c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CE70u; }
        if (ctx->pc != 0x33CE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CE70u; }
        if (ctx->pc != 0x33CE70u) { return; }
    }
    ctx->pc = 0x33CE70u;
label_33ce70:
    // 0x33ce70: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x33ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_33ce74:
    // 0x33ce74: 0xc460c058  lwc1        $f0, -0x3FA8($v1)
    ctx->pc = 0x33ce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294951000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33ce78:
    // 0x33ce78: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x33ce78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33ce7c:
    // 0x33ce7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33ce7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33ce80:
    // 0x33ce80: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_33ce84:
    if (ctx->pc == 0x33CE84u) {
        ctx->pc = 0x33CE84u;
            // 0x33ce84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33CE88u;
        goto label_33ce88;
    }
    ctx->pc = 0x33CE80u;
    {
        const bool branch_taken_0x33ce80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33CE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33CE80u;
            // 0x33ce84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce80) {
            ctx->pc = 0x33CE8Cu;
            goto label_33ce8c;
        }
    }
    ctx->pc = 0x33CE88u;
label_33ce88:
    // 0x33ce88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33ce88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ce8c:
    // 0x33ce8c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33ce8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33ce90:
    // 0x33ce90: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x33ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_33ce94:
    // 0x33ce94: 0xc460c060  lwc1        $f0, -0x3FA0($v1)
    ctx->pc = 0x33ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294951008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33ce98:
    // 0x33ce98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33ce98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33ce9c:
    // 0x33ce9c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_33cea0:
    if (ctx->pc == 0x33CEA0u) {
        ctx->pc = 0x33CEA0u;
            // 0x33cea0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33CEA4u;
        goto label_33cea4;
    }
    ctx->pc = 0x33CE9Cu;
    {
        const bool branch_taken_0x33ce9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33CEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33CE9Cu;
            // 0x33cea0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce9c) {
            ctx->pc = 0x33CEA8u;
            goto label_33cea8;
        }
    }
    ctx->pc = 0x33CEA4u;
label_33cea4:
    // 0x33cea4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33cea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33cea8:
    // 0x33cea8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33cea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33ceac:
    // 0x33ceac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x33ceacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_33ceb0:
    // 0x33ceb0: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
label_33ceb4:
    if (ctx->pc == 0x33CEB4u) {
        ctx->pc = 0x33CEB8u;
        goto label_33ceb8;
    }
    ctx->pc = 0x33CEB0u;
    {
        const bool branch_taken_0x33ceb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ceb0) {
            ctx->pc = 0x33D0D4u;
            goto label_33d0d4;
        }
    }
    ctx->pc = 0x33CEB8u;
label_33ceb8:
    // 0x33ceb8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33ceb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33cebc:
    // 0x33cebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33cec0:
    // 0x33cec0: 0x27a5016c  addiu       $a1, $sp, 0x16C
    ctx->pc = 0x33cec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_33cec4:
    // 0x33cec4: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x33cec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_33cec8:
    // 0x33cec8: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x33cec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_33cecc:
    // 0x33cecc: 0x320f809  jalr        $t9
label_33ced0:
    if (ctx->pc == 0x33CED0u) {
        ctx->pc = 0x33CED0u;
            // 0x33ced0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33CED4u;
        goto label_33ced4;
    }
    ctx->pc = 0x33CECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33CED4u);
        ctx->pc = 0x33CED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33CECCu;
            // 0x33ced0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33CED4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33CED4u; }
            if (ctx->pc != 0x33CED4u) { return; }
        }
        }
    }
    ctx->pc = 0x33CED4u;
label_33ced4:
    // 0x33ced4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33ced4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33ced8:
    // 0x33ced8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x33ced8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33cedc:
    // 0x33cedc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33cee0:
    // 0x33cee0: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x33cee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_33cee4:
    // 0x33cee4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x33cee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_33cee8:
    // 0x33cee8: 0x320f809  jalr        $t9
label_33ceec:
    if (ctx->pc == 0x33CEECu) {
        ctx->pc = 0x33CEECu;
            // 0x33ceec: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x33CEF0u;
        goto label_33cef0;
    }
    ctx->pc = 0x33CEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33CEF0u);
        ctx->pc = 0x33CEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33CEE8u;
            // 0x33ceec: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33CEF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33CEF0u; }
            if (ctx->pc != 0x33CEF0u) { return; }
        }
        }
    }
    ctx->pc = 0x33CEF0u;
label_33cef0:
    // 0x33cef0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33cef4:
    // 0x33cef4: 0x8c6389f0  lw          $v1, -0x7610($v1)
    ctx->pc = 0x33cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_33cef8:
    // 0x33cef8: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x33cef8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
label_33cefc:
    // 0x33cefc: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_33cf00:
    if (ctx->pc == 0x33CF00u) {
        ctx->pc = 0x33CF00u;
            // 0x33cf00: 0x87a4016c  lh          $a0, 0x16C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 364)));
        ctx->pc = 0x33CF04u;
        goto label_33cf04;
    }
    ctx->pc = 0x33CEFCu;
    {
        const bool branch_taken_0x33cefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cefc) {
            ctx->pc = 0x33CF00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33CEFCu;
            // 0x33cf00: 0x87a4016c  lh          $a0, 0x16C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 364)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33CF58u;
            goto label_33cf58;
        }
    }
    ctx->pc = 0x33CF04u;
label_33cf04:
    // 0x33cf04: 0x87a4016e  lh          $a0, 0x16E($sp)
    ctx->pc = 0x33cf04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 366)));
label_33cf08:
    // 0x33cf08: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x33cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
label_33cf0c:
    // 0x33cf0c: 0x34672493  ori         $a3, $v1, 0x2493
    ctx->pc = 0x33cf0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
label_33cf10:
    // 0x33cf10: 0x87a3016a  lh          $v1, 0x16A($sp)
    ctx->pc = 0x33cf10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 362)));
label_33cf14:
    // 0x33cf14: 0x44240  sll         $t0, $a0, 9
    ctx->pc = 0x33cf14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
label_33cf18:
    // 0x33cf18: 0xe80018  mult        $zero, $a3, $t0
    ctx->pc = 0x33cf18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_33cf1c:
    // 0x33cf1c: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x33cf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_33cf20:
    // 0x33cf20: 0x32a40  sll         $a1, $v1, 9
    ctx->pc = 0x33cf20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_33cf24:
    // 0x33cf24: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x33cf24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_33cf28:
    // 0x33cf28: 0x1810  mfhi        $v1
    ctx->pc = 0x33cf28u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_33cf2c:
    // 0x33cf2c: 0xe50018  mult        $zero, $a3, $a1
    ctx->pc = 0x33cf2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_33cf30:
    // 0x33cf30: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x33cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_33cf34:
    // 0x33cf34: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x33cf34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_33cf38:
    // 0x33cf38: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_33cf3c:
    // 0x33cf3c: 0xa7a3016e  sh          $v1, 0x16E($sp)
    ctx->pc = 0x33cf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 366), (uint16_t)GPR_U32(ctx, 3));
label_33cf40:
    // 0x33cf40: 0x1810  mfhi        $v1
    ctx->pc = 0x33cf40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_33cf44:
    // 0x33cf44: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33cf48:
    // 0x33cf48: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x33cf48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_33cf4c:
    // 0x33cf4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33cf50:
    // 0x33cf50: 0xa7a3016a  sh          $v1, 0x16A($sp)
    ctx->pc = 0x33cf50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 362), (uint16_t)GPR_U32(ctx, 3));
label_33cf54:
    // 0x33cf54: 0x87a4016c  lh          $a0, 0x16C($sp)
    ctx->pc = 0x33cf54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 364)));
label_33cf58:
    // 0x33cf58: 0x1880005e  blez        $a0, . + 4 + (0x5E << 2)
label_33cf5c:
    if (ctx->pc == 0x33CF5Cu) {
        ctx->pc = 0x33CF5Cu;
            // 0x33cf5c: 0x4600bdc7  neg.s       $f23, $f23 (Delay Slot)
        ctx->f[23] = FPU_NEG_S(ctx->f[23]);
        ctx->pc = 0x33CF60u;
        goto label_33cf60;
    }
    ctx->pc = 0x33CF58u;
    {
        const bool branch_taken_0x33cf58 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x33CF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33CF58u;
            // 0x33cf5c: 0x4600bdc7  neg.s       $f23, $f23 (Delay Slot)
        ctx->f[23] = FPU_NEG_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cf58) {
            ctx->pc = 0x33D0D4u;
            goto label_33d0d4;
        }
    }
    ctx->pc = 0x33CF60u;
label_33cf60:
    // 0x33cf60: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x33cf60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_33cf64:
    // 0x33cf64: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33cf64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_33cf68:
    // 0x33cf68: 0x1020005a  beqz        $at, . + 4 + (0x5A << 2)
label_33cf6c:
    if (ctx->pc == 0x33CF6Cu) {
        ctx->pc = 0x33CF70u;
        goto label_33cf70;
    }
    ctx->pc = 0x33CF68u;
    {
        const bool branch_taken_0x33cf68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cf68) {
            ctx->pc = 0x33D0D4u;
            goto label_33d0d4;
        }
    }
    ctx->pc = 0x33CF70u;
label_33cf70:
    // 0x33cf70: 0x87a4016e  lh          $a0, 0x16E($sp)
    ctx->pc = 0x33cf70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 366)));
label_33cf74:
    // 0x33cf74: 0x18800057  blez        $a0, . + 4 + (0x57 << 2)
label_33cf78:
    if (ctx->pc == 0x33CF78u) {
        ctx->pc = 0x33CF7Cu;
        goto label_33cf7c;
    }
    ctx->pc = 0x33CF74u;
    {
        const bool branch_taken_0x33cf74 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x33cf74) {
            ctx->pc = 0x33D0D4u;
            goto label_33d0d4;
        }
    }
    ctx->pc = 0x33CF7Cu;
label_33cf7c:
    // 0x33cf7c: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x33cf7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_33cf80:
    // 0x33cf80: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33cf80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_33cf84:
    // 0x33cf84: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
label_33cf88:
    if (ctx->pc == 0x33CF88u) {
        ctx->pc = 0x33CF8Cu;
        goto label_33cf8c;
    }
    ctx->pc = 0x33CF84u;
    {
        const bool branch_taken_0x33cf84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cf84) {
            ctx->pc = 0x33D0D4u;
            goto label_33d0d4;
        }
    }
    ctx->pc = 0x33CF8Cu;
label_33cf8c:
    // 0x33cf8c: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x33cf8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_33cf90:
    // 0x33cf90: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_33cf94:
    if (ctx->pc == 0x33CF94u) {
        ctx->pc = 0x33CF94u;
            // 0x33cf94: 0x87a50168  lh          $a1, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->pc = 0x33CF98u;
        goto label_33cf98;
    }
    ctx->pc = 0x33CF90u;
    {
        const bool branch_taken_0x33cf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33cf90) {
            ctx->pc = 0x33CF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33CF90u;
            // 0x33cf94: 0x87a50168  lh          $a1, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33CFC8u;
            goto label_33cfc8;
        }
    }
    ctx->pc = 0x33CF98u;
label_33cf98:
    // 0x33cf98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33cf9c:
    // 0x33cf9c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x33cf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_33cfa0:
    // 0x33cfa0: 0xc0506ac  jal         func_141AB0
label_33cfa4:
    if (ctx->pc == 0x33CFA4u) {
        ctx->pc = 0x33CFA4u;
            // 0x33cfa4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x33CFA8u;
        goto label_33cfa8;
    }
    ctx->pc = 0x33CFA0u;
    SET_GPR_U32(ctx, 31, 0x33CFA8u);
    ctx->pc = 0x33CFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33CFA0u;
            // 0x33cfa4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CFA8u; }
        if (ctx->pc != 0x33CFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CFA8u; }
        if (ctx->pc != 0x33CFA8u) { return; }
    }
    ctx->pc = 0x33CFA8u;
label_33cfa8:
    // 0x33cfa8: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x33cfa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_33cfac:
    // 0x33cfac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x33cfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_33cfb0:
    // 0x33cfb0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x33cfb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_33cfb4:
    // 0x33cfb4: 0x320f809  jalr        $t9
label_33cfb8:
    if (ctx->pc == 0x33CFB8u) {
        ctx->pc = 0x33CFB8u;
            // 0x33cfb8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x33CFBCu;
        goto label_33cfbc;
    }
    ctx->pc = 0x33CFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33CFBCu);
        ctx->pc = 0x33CFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33CFB4u;
            // 0x33cfb8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33CFBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33CFBCu; }
            if (ctx->pc != 0x33CFBCu) { return; }
        }
        }
    }
    ctx->pc = 0x33CFBCu;
label_33cfbc:
    // 0x33cfbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33cfc0:
    // 0x33cfc0: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x33cfc0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_33cfc4:
    // 0x33cfc4: 0x87a50168  lh          $a1, 0x168($sp)
    ctx->pc = 0x33cfc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 360)));
label_33cfc8:
    // 0x33cfc8: 0x87a4016c  lh          $a0, 0x16C($sp)
    ctx->pc = 0x33cfc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 364)));
label_33cfcc:
    // 0x33cfcc: 0x87a3016a  lh          $v1, 0x16A($sp)
    ctx->pc = 0x33cfccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 362)));
label_33cfd0:
    // 0x33cfd0: 0x87a2016e  lh          $v0, 0x16E($sp)
    ctx->pc = 0x33cfd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 366)));
label_33cfd4:
    // 0x33cfd4: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x33cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_33cfd8:
    // 0x33cfd8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x33cfd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33cfdc:
    // 0x33cfdc: 0x0  nop
    ctx->pc = 0x33cfdcu;
    // NOP
label_33cfe0:
    // 0x33cfe0: 0x46800660  cvt.s.w     $f25, $f0
    ctx->pc = 0x33cfe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_33cfe4:
    // 0x33cfe4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x33cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33cfe8:
    // 0x33cfe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cfe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33cfec:
    // 0x33cfec: 0x0  nop
    ctx->pc = 0x33cfecu;
    // NOP
label_33cff0:
    // 0x33cff0: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x33cff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_33cff4:
    // 0x33cff4: 0x4618c01a  mula.s      $f24, $f24
    ctx->pc = 0x33cff4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[24], ctx->f[24]);
label_33cff8:
    // 0x33cff8: 0xc04c710  jal         func_131C40
label_33cffc:
    if (ctx->pc == 0x33CFFCu) {
        ctx->pc = 0x33CFFCu;
            // 0x33cffc: 0x4619cb1c  madd.s      $f12, $f25, $f25 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[25]));
        ctx->pc = 0x33D000u;
        goto label_33d000;
    }
    ctx->pc = 0x33CFF8u;
    SET_GPR_U32(ctx, 31, 0x33D000u);
    ctx->pc = 0x33CFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33CFF8u;
            // 0x33cffc: 0x4619cb1c  madd.s      $f12, $f25, $f25 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[25]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D000u; }
        if (ctx->pc != 0x33D000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D000u; }
        if (ctx->pc != 0x33D000u) { return; }
    }
    ctx->pc = 0x33D000u;
label_33d000:
    // 0x33d000: 0x4600c847  neg.s       $f1, $f25
    ctx->pc = 0x33d000u;
    ctx->f[1] = FPU_NEG_S(ctx->f[25]);
label_33d004:
    // 0x33d004: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x33d004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_33d008:
    // 0x33d008: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x33d008u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_33d00c:
    // 0x33d00c: 0x0  nop
    ctx->pc = 0x33d00cu;
    // NOP
label_33d010:
    // 0x33d010: 0x0  nop
    ctx->pc = 0x33d010u;
    // NOP
label_33d014:
    // 0x33d014: 0x4600c343  div.s       $f13, $f24, $f0
    ctx->pc = 0x33d014u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[24] * 0.0f); } else ctx->f[13] = ctx->f[24] / ctx->f[0];
label_33d018:
    // 0x33d018: 0x0  nop
    ctx->pc = 0x33d018u;
    // NOP
label_33d01c:
    // 0x33d01c: 0x0  nop
    ctx->pc = 0x33d01cu;
    // NOP
label_33d020:
    // 0x33d020: 0xc04f2fc  jal         func_13CBF0
label_33d024:
    if (ctx->pc == 0x33D024u) {
        ctx->pc = 0x33D028u;
        goto label_33d028;
    }
    ctx->pc = 0x33D020u;
    SET_GPR_U32(ctx, 31, 0x33D028u);
    ctx->pc = 0x13CBF0u;
    if (runtime->hasFunction(0x13CBF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D028u; }
        if (ctx->pc != 0x33D028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CBF0_0x13cbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D028u; }
        if (ctx->pc != 0x33D028u) { return; }
    }
    ctx->pc = 0x33D028u;
label_33d028:
    // 0x33d028: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33d028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_33d02c:
    // 0x33d02c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x33d02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_33d030:
    // 0x33d030: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x33d030u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_33d034:
    // 0x33d034: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33d034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33d038:
    // 0x33d038: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x33d038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_33d03c:
    // 0x33d03c: 0xc04ce50  jal         func_133940
label_33d040:
    if (ctx->pc == 0x33D040u) {
        ctx->pc = 0x33D040u;
            // 0x33d040: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x33D044u;
        goto label_33d044;
    }
    ctx->pc = 0x33D03Cu;
    SET_GPR_U32(ctx, 31, 0x33D044u);
    ctx->pc = 0x33D040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D03Cu;
            // 0x33d040: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D044u; }
        if (ctx->pc != 0x33D044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D044u; }
        if (ctx->pc != 0x33D044u) { return; }
    }
    ctx->pc = 0x33D044u;
label_33d044:
    // 0x33d044: 0x87a2016c  lh          $v0, 0x16C($sp)
    ctx->pc = 0x33d044u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 364)));
label_33d048:
    // 0x33d048: 0xc6030128  lwc1        $f3, 0x128($s0)
    ctx->pc = 0x33d048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_33d04c:
    // 0x33d04c: 0x87a9016e  lh          $t1, 0x16E($sp)
    ctx->pc = 0x33d04cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 366)));
label_33d050:
    // 0x33d050: 0x4600bc86  mov.s       $f18, $f23
    ctx->pc = 0x33d050u;
    ctx->f[18] = FPU_MOV_S(ctx->f[23]);
label_33d054:
    // 0x33d054: 0x86e80000  lh          $t0, 0x0($s7)
    ctx->pc = 0x33d054u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_33d058:
    // 0x33d058: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x33d058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_33d05c:
    // 0x33d05c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33d060:
    // 0x33d060: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x33d060u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_33d064:
    // 0x33d064: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33d064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33d068:
    // 0x33d068: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x33d068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_33d06c:
    // 0x33d06c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x33d06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_33d070:
    // 0x33d070: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33d070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33d074:
    // 0x33d074: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x33d074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33d078:
    // 0x33d078: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x33d078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_33d07c:
    // 0x33d07c: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x33d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
label_33d080:
    // 0x33d080: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x33d080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_33d084:
    // 0x33d084: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x33d084u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33d088:
    // 0x33d088: 0x0  nop
    ctx->pc = 0x33d088u;
    // NOP
label_33d08c:
    // 0x33d08c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33d08cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33d090:
    // 0x33d090: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x33d090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_33d094:
    // 0x33d094: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x33d094u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33d098:
    // 0x33d098: 0x0  nop
    ctx->pc = 0x33d098u;
    // NOP
label_33d09c:
    // 0x33d09c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x33d09cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_33d0a0:
    // 0x33d0a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33d0a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33d0a4:
    // 0x33d0a4: 0x0  nop
    ctx->pc = 0x33d0a4u;
    // NOP
label_33d0a8:
    // 0x33d0a8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x33d0a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_33d0ac:
    // 0x33d0ac: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x33d0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33d0b0:
    // 0x33d0b0: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x33d0b0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
label_33d0b4:
    // 0x33d0b4: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x33d0b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_33d0b8:
    // 0x33d0b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x33d0b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_33d0bc:
    // 0x33d0bc: 0x46140342  mul.s       $f13, $f0, $f20
    ctx->pc = 0x33d0bcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_33d0c0:
    // 0x33d0c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33d0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33d0c4:
    // 0x33d0c4: 0x46141802  mul.s       $f0, $f3, $f20
    ctx->pc = 0x33d0c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_33d0c8:
    // 0x33d0c8: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x33d0c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_33d0cc:
    // 0x33d0cc: 0xc0bc284  jal         func_2F0A10
label_33d0d0:
    if (ctx->pc == 0x33D0D0u) {
        ctx->pc = 0x33D0D0u;
            // 0x33d0d0: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x33D0D4u;
        goto label_33d0d4;
    }
    ctx->pc = 0x33D0CCu;
    SET_GPR_U32(ctx, 31, 0x33D0D4u);
    ctx->pc = 0x33D0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D0CCu;
            // 0x33d0d0: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D0D4u; }
        if (ctx->pc != 0x33D0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D0D4u; }
        if (ctx->pc != 0x33D0D4u) { return; }
    }
    ctx->pc = 0x33D0D4u;
label_33d0d4:
    // 0x33d0d4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x33d0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_33d0d8:
    // 0x33d0d8: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x33d0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_33d0dc:
    // 0x33d0dc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x33d0dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_33d0e0:
    // 0x33d0e0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x33d0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_33d0e4:
    // 0x33d0e4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x33d0e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_33d0e8:
    // 0x33d0e8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x33d0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_33d0ec:
    // 0x33d0ec: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x33d0ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_33d0f0:
    // 0x33d0f0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x33d0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_33d0f4:
    // 0x33d0f4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x33d0f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_33d0f8:
    // 0x33d0f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x33d0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_33d0fc:
    // 0x33d0fc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x33d0fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33d100:
    // 0x33d100: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x33d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_33d104:
    // 0x33d104: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x33d104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33d108:
    // 0x33d108: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x33d108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33d10c:
    // 0x33d10c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33d10cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33d110:
    // 0x33d110: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33d110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33d114:
    // 0x33d114: 0x3e00008  jr          $ra
label_33d118:
    if (ctx->pc == 0x33D118u) {
        ctx->pc = 0x33D118u;
            // 0x33d118: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x33D11Cu;
        goto label_33d11c;
    }
    ctx->pc = 0x33D114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D114u;
            // 0x33d118: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33D11Cu;
label_33d11c:
    // 0x33d11c: 0x0  nop
    ctx->pc = 0x33d11cu;
    // NOP
label_33d120:
    // 0x33d120: 0x90820ce5  lbu         $v0, 0xCE5($a0)
    ctx->pc = 0x33d120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3301)));
label_33d124:
    // 0x33d124: 0x3e00008  jr          $ra
label_33d128:
    if (ctx->pc == 0x33D128u) {
        ctx->pc = 0x33D128u;
            // 0x33d128: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x33D12Cu;
        goto label_33d12c;
    }
    ctx->pc = 0x33D124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D124u;
            // 0x33d128: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33D12Cu;
label_33d12c:
    // 0x33d12c: 0x0  nop
    ctx->pc = 0x33d12cu;
    // NOP
label_33d130:
    // 0x33d130: 0x90830ce4  lbu         $v1, 0xCE4($a0)
    ctx->pc = 0x33d130u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3300)));
label_33d134:
    // 0x33d134: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_33d138:
    if (ctx->pc == 0x33D138u) {
        ctx->pc = 0x33D138u;
            // 0x33d138: 0xc4810844  lwc1        $f1, 0x844($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x33D13Cu;
        goto label_33d13c;
    }
    ctx->pc = 0x33D134u;
    {
        const bool branch_taken_0x33d134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d134) {
            ctx->pc = 0x33D138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D134u;
            // 0x33d138: 0xc4810844  lwc1        $f1, 0x844($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D14Cu;
            goto label_33d14c;
        }
    }
    ctx->pc = 0x33D13Cu;
label_33d13c:
    // 0x33d13c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x33d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_33d140:
    // 0x33d140: 0x54620021  bnel        $v1, $v0, . + 4 + (0x21 << 2)
label_33d144:
    if (ctx->pc == 0x33D144u) {
        ctx->pc = 0x33D144u;
            // 0x33d144: 0xc4810844  lwc1        $f1, 0x844($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x33D148u;
        goto label_33d148;
    }
    ctx->pc = 0x33D140u;
    {
        const bool branch_taken_0x33d140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d140) {
            ctx->pc = 0x33D144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D140u;
            // 0x33d144: 0xc4810844  lwc1        $f1, 0x844($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D1C8u;
            goto label_33d1c8;
        }
    }
    ctx->pc = 0x33D148u;
label_33d148:
    // 0x33d148: 0xc4810844  lwc1        $f1, 0x844($a0)
    ctx->pc = 0x33d148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33d14c:
    // 0x33d14c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x33d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_33d150:
    // 0x33d150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33d154:
    // 0x33d154: 0x0  nop
    ctx->pc = 0x33d154u;
    // NOP
label_33d158:
    // 0x33d158: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33d158u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33d15c:
    // 0x33d15c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_33d160:
    if (ctx->pc == 0x33D160u) {
        ctx->pc = 0x33D160u;
            // 0x33d160: 0x24860838  addiu       $a2, $a0, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2104));
        ctx->pc = 0x33D164u;
        goto label_33d164;
    }
    ctx->pc = 0x33D15Cu;
    {
        const bool branch_taken_0x33d15c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33D160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D15Cu;
            // 0x33d160: 0x24860838  addiu       $a2, $a0, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d15c) {
            ctx->pc = 0x33D174u;
            goto label_33d174;
        }
    }
    ctx->pc = 0x33D164u;
label_33d164:
    // 0x33d164: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33d164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33d168:
    // 0x33d168: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33d168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_33d16c:
    // 0x33d16c: 0x10000008  b           . + 4 + (0x8 << 2)
label_33d170:
    if (ctx->pc == 0x33D170u) {
        ctx->pc = 0x33D170u;
            // 0x33d170: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x33D174u;
        goto label_33d174;
    }
    ctx->pc = 0x33D16Cu;
    {
        const bool branch_taken_0x33d16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D16Cu;
            // 0x33d170: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d16c) {
            ctx->pc = 0x33D190u;
            goto label_33d190;
        }
    }
    ctx->pc = 0x33D174u;
label_33d174:
    // 0x33d174: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33d174u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_33d178:
    // 0x33d178: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33d178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_33d17c:
    // 0x33d17c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33d17cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33d180:
    // 0x33d180: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33d180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_33d184:
    // 0x33d184: 0x0  nop
    ctx->pc = 0x33d184u;
    // NOP
label_33d188:
    // 0x33d188: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33d188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_33d18c:
    // 0x33d18c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33d190:
    // 0x33d190: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x33d190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_33d194:
    // 0x33d194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33d198:
    // 0x33d198: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x33d198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_33d19c:
    // 0x33d19c: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x33d19cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_33d1a0:
    // 0x33d1a0: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x33d1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_33d1a4:
    // 0x33d1a4: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x33d1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_33d1a8:
    // 0x33d1a8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x33d1a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33d1ac:
    // 0x33d1ac: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x33d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_33d1b0:
    // 0x33d1b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33d1b4:
    // 0x33d1b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33d1b8:
    // 0x33d1b8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_33d1bc:
    // 0x33d1bc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x33d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_33d1c0:
    // 0x33d1c0: 0x10000021  b           . + 4 + (0x21 << 2)
label_33d1c4:
    if (ctx->pc == 0x33D1C4u) {
        ctx->pc = 0x33D1C4u;
            // 0x33d1c4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x33D1C8u;
        goto label_33d1c8;
    }
    ctx->pc = 0x33D1C0u;
    {
        const bool branch_taken_0x33d1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D1C0u;
            // 0x33d1c4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d1c0) {
            ctx->pc = 0x33D248u;
            goto label_33d248;
        }
    }
    ctx->pc = 0x33D1C8u;
label_33d1c8:
    // 0x33d1c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x33d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_33d1cc:
    // 0x33d1cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33d1d0:
    // 0x33d1d0: 0x0  nop
    ctx->pc = 0x33d1d0u;
    // NOP
label_33d1d4:
    // 0x33d1d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33d1d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33d1d8:
    // 0x33d1d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_33d1dc:
    if (ctx->pc == 0x33D1DCu) {
        ctx->pc = 0x33D1DCu;
            // 0x33d1dc: 0x24880838  addiu       $t0, $a0, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2104));
        ctx->pc = 0x33D1E0u;
        goto label_33d1e0;
    }
    ctx->pc = 0x33D1D8u;
    {
        const bool branch_taken_0x33d1d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33D1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D1D8u;
            // 0x33d1dc: 0x24880838  addiu       $t0, $a0, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d1d8) {
            ctx->pc = 0x33D1F0u;
            goto label_33d1f0;
        }
    }
    ctx->pc = 0x33D1E0u;
label_33d1e0:
    // 0x33d1e0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33d1e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33d1e4:
    // 0x33d1e4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x33d1e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_33d1e8:
    // 0x33d1e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_33d1ec:
    if (ctx->pc == 0x33D1ECu) {
        ctx->pc = 0x33D1ECu;
            // 0x33d1ec: 0x8c820cd4  lw          $v0, 0xCD4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3284)));
        ctx->pc = 0x33D1F0u;
        goto label_33d1f0;
    }
    ctx->pc = 0x33D1E8u;
    {
        const bool branch_taken_0x33d1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D1E8u;
            // 0x33d1ec: 0x8c820cd4  lw          $v0, 0xCD4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d1e8) {
            ctx->pc = 0x33D20Cu;
            goto label_33d20c;
        }
    }
    ctx->pc = 0x33D1F0u;
label_33d1f0:
    // 0x33d1f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33d1f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_33d1f4:
    // 0x33d1f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_33d1f8:
    // 0x33d1f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33d1f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33d1fc:
    // 0x33d1fc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x33d1fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_33d200:
    // 0x33d200: 0x0  nop
    ctx->pc = 0x33d200u;
    // NOP
label_33d204:
    // 0x33d204: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x33d204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_33d208:
    // 0x33d208: 0x8c820cd4  lw          $v0, 0xCD4($a0)
    ctx->pc = 0x33d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3284)));
label_33d20c:
    // 0x33d20c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x33d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_33d210:
    // 0x33d210: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33d210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33d214:
    // 0x33d214: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x33d214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_33d218:
    // 0x33d218: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x33d218u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_33d21c:
    // 0x33d21c: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x33d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_33d220:
    // 0x33d220: 0x3403ea60  ori         $v1, $zero, 0xEA60
    ctx->pc = 0x33d220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_33d224:
    // 0x33d224: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x33d224u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_33d228:
    // 0x33d228: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x33d228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33d22c:
    // 0x33d22c: 0xa62023  subu        $a0, $a1, $a2
    ctx->pc = 0x33d22cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_33d230:
    // 0x33d230: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33d230u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_33d234:
    // 0x33d234: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33d234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_33d238:
    // 0x33d238: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x33d238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_33d23c:
    // 0x33d23c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x33d23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_33d240:
    // 0x33d240: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33d240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_33d244:
    // 0x33d244: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x33d244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33d248:
    // 0x33d248: 0x3e00008  jr          $ra
label_33d24c:
    if (ctx->pc == 0x33D24Cu) {
        ctx->pc = 0x33D250u;
        goto label_33d250;
    }
    ctx->pc = 0x33D248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33D250u;
label_33d250:
    // 0x33d250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33d250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_33d254:
    // 0x33d254: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33d254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_33d258:
    // 0x33d258: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33d258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_33d25c:
    // 0x33d25c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33d25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33d260:
    // 0x33d260: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33d260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33d264:
    // 0x33d264: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33d264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33d268:
    // 0x33d268: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x33d268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d26c:
    // 0x33d26c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33d26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33d270:
    // 0x33d270: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x33d270u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_33d274:
    // 0x33d274: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x33d274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_33d278:
    // 0x33d278: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x33d278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33d27c:
    // 0x33d27c: 0x8e620780  lw          $v0, 0x780($s3)
    ctx->pc = 0x33d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1920)));
label_33d280:
    // 0x33d280: 0x242082b  sltu        $at, $s2, $v0
    ctx->pc = 0x33d280u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_33d284:
    // 0x33d284: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_33d288:
    if (ctx->pc == 0x33D288u) {
        ctx->pc = 0x33D288u;
            // 0x33d288: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x33D28Cu;
        goto label_33d28c;
    }
    ctx->pc = 0x33D284u;
    {
        const bool branch_taken_0x33d284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D284u;
            // 0x33d288: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d284) {
            ctx->pc = 0x33D294u;
            goto label_33d294;
        }
    }
    ctx->pc = 0x33D28Cu;
label_33d28c:
    // 0x33d28c: 0x10000002  b           . + 4 + (0x2 << 2)
label_33d290:
    if (ctx->pc == 0x33D290u) {
        ctx->pc = 0x33D290u;
            // 0x33d290: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D294u;
        goto label_33d294;
    }
    ctx->pc = 0x33D28Cu;
    {
        const bool branch_taken_0x33d28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D28Cu;
            // 0x33d290: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d28c) {
            ctx->pc = 0x33D298u;
            goto label_33d298;
        }
    }
    ctx->pc = 0x33D294u;
label_33d294:
    // 0x33d294: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33d294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33d298:
    // 0x33d298: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x33d298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_33d29c:
    // 0x33d29c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33d29cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33d2a0:
    // 0x33d2a0: 0x92090758  lbu         $t1, 0x758($s0)
    ctx->pc = 0x33d2a0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1880)));
label_33d2a4:
    // 0x33d2a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33d2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d2a8:
    // 0x33d2a8: 0x90430cf6  lbu         $v1, 0xCF6($v0)
    ctx->pc = 0x33d2a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3318)));
label_33d2ac:
    // 0x33d2ac: 0x92080759  lbu         $t0, 0x759($s0)
    ctx->pc = 0x33d2acu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1881)));
label_33d2b0:
    // 0x33d2b0: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x33d2b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_33d2b4:
    // 0x33d2b4: 0x3127001f  andi        $a3, $t1, 0x1F
    ctx->pc = 0x33d2b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
label_33d2b8:
    // 0x33d2b8: 0x9167c  dsll32      $v0, $t1, 25
    ctx->pc = 0x33d2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 25));
label_33d2bc:
    // 0x33d2bc: 0x34840  sll         $t1, $v1, 1
    ctx->pc = 0x33d2bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_33d2c0:
    // 0x33d2c0: 0x320f809  jalr        $t9
label_33d2c4:
    if (ctx->pc == 0x33D2C4u) {
        ctx->pc = 0x33D2C4u;
            // 0x33d2c4: 0x257be  dsrl32      $t2, $v0, 30 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) >> (32 + 30));
        ctx->pc = 0x33D2C8u;
        goto label_33d2c8;
    }
    ctx->pc = 0x33D2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33D2C8u);
        ctx->pc = 0x33D2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D2C0u;
            // 0x33d2c4: 0x257be  dsrl32      $t2, $v0, 30 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) >> (32 + 30));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33D2C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33D2C8u; }
            if (ctx->pc != 0x33D2C8u) { return; }
        }
        }
    }
    ctx->pc = 0x33D2C8u;
label_33d2c8:
    // 0x33d2c8: 0x8e63077c  lw          $v1, 0x77C($s3)
    ctx->pc = 0x33d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1916)));
label_33d2cc:
    // 0x33d2cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33d2ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33d2d0:
    // 0x33d2d0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x33d2d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_33d2d4:
    // 0x33d2d4: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x33d2d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_33d2d8:
    // 0x33d2d8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_33d2dc:
    if (ctx->pc == 0x33D2DCu) {
        ctx->pc = 0x33D2DCu;
            // 0x33d2dc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x33D2E0u;
        goto label_33d2e0;
    }
    ctx->pc = 0x33D2D8u;
    {
        const bool branch_taken_0x33d2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D2D8u;
            // 0x33d2dc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d2d8) {
            ctx->pc = 0x33D27Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33d27c;
        }
    }
    ctx->pc = 0x33D2E0u;
label_33d2e0:
    // 0x33d2e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33d2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_33d2e4:
    // 0x33d2e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33d2e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33d2e8:
    // 0x33d2e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33d2e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33d2ec:
    // 0x33d2ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33d2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33d2f0:
    // 0x33d2f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33d2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33d2f4:
    // 0x33d2f4: 0x3e00008  jr          $ra
label_33d2f8:
    if (ctx->pc == 0x33D2F8u) {
        ctx->pc = 0x33D2F8u;
            // 0x33d2f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x33D2FCu;
        goto label_33d2fc;
    }
    ctx->pc = 0x33D2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D2F4u;
            // 0x33d2f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33D2FCu;
label_33d2fc:
    // 0x33d2fc: 0x0  nop
    ctx->pc = 0x33d2fcu;
    // NOP
label_33d300:
    // 0x33d300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33d300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_33d304:
    // 0x33d304: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x33d304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33d308:
    // 0x33d308: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33d308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_33d30c:
    // 0x33d30c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33d30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33d310:
    // 0x33d310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33d310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33d314:
    // 0x33d314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33d314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33d318:
    // 0x33d318: 0x8c50d130  lw          $s0, -0x2ED0($v0)
    ctx->pc = 0x33d318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_33d31c:
    // 0x33d31c: 0xc0cc978  jal         func_3325E0
label_33d320:
    if (ctx->pc == 0x33D320u) {
        ctx->pc = 0x33D320u;
            // 0x33d320: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D324u;
        goto label_33d324;
    }
    ctx->pc = 0x33D31Cu;
    SET_GPR_U32(ctx, 31, 0x33D324u);
    ctx->pc = 0x33D320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D31Cu;
            // 0x33d320: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3325E0u;
    if (runtime->hasFunction(0x3325E0u)) {
        auto targetFn = runtime->lookupFunction(0x3325E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D324u; }
        if (ctx->pc != 0x33D324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003325E0_0x3325e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D324u; }
        if (ctx->pc != 0x33D324u) { return; }
    }
    ctx->pc = 0x33D324u;
label_33d324:
    // 0x33d324: 0x8e450d04  lw          $a1, 0xD04($s2)
    ctx->pc = 0x33d324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3332)));
label_33d328:
    // 0x33d328: 0xc057b7c  jal         func_15EDF0
label_33d32c:
    if (ctx->pc == 0x33D32Cu) {
        ctx->pc = 0x33D32Cu;
            // 0x33d32c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x33D330u;
        goto label_33d330;
    }
    ctx->pc = 0x33D328u;
    SET_GPR_U32(ctx, 31, 0x33D330u);
    ctx->pc = 0x33D32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D328u;
            // 0x33d32c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D330u; }
        if (ctx->pc != 0x33D330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D330u; }
        if (ctx->pc != 0x33D330u) { return; }
    }
    ctx->pc = 0x33D330u;
label_33d330:
    // 0x33d330: 0xae400d04  sw          $zero, 0xD04($s2)
    ctx->pc = 0x33d330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3332), GPR_U32(ctx, 0));
label_33d334:
    // 0x33d334: 0x92440ce4  lbu         $a0, 0xCE4($s2)
    ctx->pc = 0x33d334u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
label_33d338:
    // 0x33d338: 0x5080002d  beql        $a0, $zero, . + 4 + (0x2D << 2)
label_33d33c:
    if (ctx->pc == 0x33D33Cu) {
        ctx->pc = 0x33D33Cu;
            // 0x33d33c: 0x8e430784  lw          $v1, 0x784($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1924)));
        ctx->pc = 0x33D340u;
        goto label_33d340;
    }
    ctx->pc = 0x33D338u;
    {
        const bool branch_taken_0x33d338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d338) {
            ctx->pc = 0x33D33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D338u;
            // 0x33d33c: 0x8e430784  lw          $v1, 0x784($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1924)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D3F0u;
            goto label_33d3f0;
        }
    }
    ctx->pc = 0x33D340u;
label_33d340:
    // 0x33d340: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33d340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d344:
    // 0x33d344: 0x10850029  beq         $a0, $a1, . + 4 + (0x29 << 2)
label_33d348:
    if (ctx->pc == 0x33D348u) {
        ctx->pc = 0x33D34Cu;
        goto label_33d34c;
    }
    ctx->pc = 0x33D344u;
    {
        const bool branch_taken_0x33d344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x33d344) {
            ctx->pc = 0x33D3ECu;
            goto label_33d3ec;
        }
    }
    ctx->pc = 0x33D34Cu;
label_33d34c:
    // 0x33d34c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33d350:
    // 0x33d350: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
label_33d354:
    if (ctx->pc == 0x33D354u) {
        ctx->pc = 0x33D358u;
        goto label_33d358;
    }
    ctx->pc = 0x33D350u;
    {
        const bool branch_taken_0x33d350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33d350) {
            ctx->pc = 0x33D3ECu;
            goto label_33d3ec;
        }
    }
    ctx->pc = 0x33D358u;
label_33d358:
    // 0x33d358: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x33d358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_33d35c:
    // 0x33d35c: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
label_33d360:
    if (ctx->pc == 0x33D360u) {
        ctx->pc = 0x33D364u;
        goto label_33d364;
    }
    ctx->pc = 0x33D35Cu;
    {
        const bool branch_taken_0x33d35c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33d35c) {
            ctx->pc = 0x33D3ECu;
            goto label_33d3ec;
        }
    }
    ctx->pc = 0x33D364u;
label_33d364:
    // 0x33d364: 0xc040160  jal         func_100580
label_33d368:
    if (ctx->pc == 0x33D368u) {
        ctx->pc = 0x33D368u;
            // 0x33d368: 0x240400e4  addiu       $a0, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->pc = 0x33D36Cu;
        goto label_33d36c;
    }
    ctx->pc = 0x33D364u;
    SET_GPR_U32(ctx, 31, 0x33D36Cu);
    ctx->pc = 0x33D368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D364u;
            // 0x33d368: 0x240400e4  addiu       $a0, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D36Cu; }
        if (ctx->pc != 0x33D36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D36Cu; }
        if (ctx->pc != 0x33D36Cu) { return; }
    }
    ctx->pc = 0x33D36Cu;
label_33d36c:
    // 0x33d36c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_33d370:
    if (ctx->pc == 0x33D370u) {
        ctx->pc = 0x33D370u;
            // 0x33d370: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D374u;
        goto label_33d374;
    }
    ctx->pc = 0x33D36Cu;
    {
        const bool branch_taken_0x33d36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D36Cu;
            // 0x33d370: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d36c) {
            ctx->pc = 0x33D3E8u;
            goto label_33d3e8;
        }
    }
    ctx->pc = 0x33D374u;
label_33d374:
    // 0x33d374: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33d374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33d378:
    // 0x33d378: 0x92500ce4  lbu         $s0, 0xCE4($s2)
    ctx->pc = 0x33d378u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
label_33d37c:
    // 0x33d37c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33d37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33d380:
    // 0x33d380: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33d380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33d384:
    // 0x33d384: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33d384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33d388:
    // 0x33d388: 0xc10ca68  jal         func_4329A0
label_33d38c:
    if (ctx->pc == 0x33D38Cu) {
        ctx->pc = 0x33D38Cu;
            // 0x33d38c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33D390u;
        goto label_33d390;
    }
    ctx->pc = 0x33D388u;
    SET_GPR_U32(ctx, 31, 0x33D390u);
    ctx->pc = 0x33D38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D388u;
            // 0x33d38c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D390u; }
        if (ctx->pc != 0x33D390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D390u; }
        if (ctx->pc != 0x33D390u) { return; }
    }
    ctx->pc = 0x33D390u;
label_33d390:
    // 0x33d390: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33d390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33d394:
    // 0x33d394: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x33d394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_33d398:
    // 0x33d398: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33d398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33d39c:
    // 0x33d39c: 0xc148880  jal         func_522200
label_33d3a0:
    if (ctx->pc == 0x33D3A0u) {
        ctx->pc = 0x33D3A0u;
            // 0x33d3a0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33D3A4u;
        goto label_33d3a4;
    }
    ctx->pc = 0x33D39Cu;
    SET_GPR_U32(ctx, 31, 0x33D3A4u);
    ctx->pc = 0x33D3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D39Cu;
            // 0x33d3a0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D3A4u; }
        if (ctx->pc != 0x33D3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D3A4u; }
        if (ctx->pc != 0x33D3A4u) { return; }
    }
    ctx->pc = 0x33D3A4u;
label_33d3a4:
    // 0x33d3a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33d3a8:
    // 0x33d3a8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33d3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33d3ac:
    // 0x33d3ac: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x33d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
label_33d3b0:
    // 0x33d3b0: 0x24635600  addiu       $v1, $v1, 0x5600
    ctx->pc = 0x33d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22016));
label_33d3b4:
    // 0x33d3b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x33d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_33d3b8:
    // 0x33d3b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33d3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33d3bc:
    // 0x33d3bc: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x33d3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_33d3c0:
    // 0x33d3c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33d3c4:
    // 0x33d3c4: 0xae300098  sw          $s0, 0x98($s1)
    ctx->pc = 0x33d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 16));
label_33d3c8:
    // 0x33d3c8: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x33d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_33d3cc:
    // 0x33d3cc: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x33d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_33d3d0:
    // 0x33d3d0: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x33d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_33d3d4:
    // 0x33d3d4: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x33d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
label_33d3d8:
    // 0x33d3d8: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x33d3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
label_33d3dc:
    // 0x33d3dc: 0xae2000cc  sw          $zero, 0xCC($s1)
    ctx->pc = 0x33d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
label_33d3e0:
    // 0x33d3e0: 0xc0e030c  jal         func_380C30
label_33d3e4:
    if (ctx->pc == 0x33D3E4u) {
        ctx->pc = 0x33D3E4u;
            // 0x33d3e4: 0xae2000d0  sw          $zero, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33D3E8u;
        goto label_33d3e8;
    }
    ctx->pc = 0x33D3E0u;
    SET_GPR_U32(ctx, 31, 0x33D3E8u);
    ctx->pc = 0x33D3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D3E0u;
            // 0x33d3e4: 0xae2000d0  sw          $zero, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380C30u;
    if (runtime->hasFunction(0x380C30u)) {
        auto targetFn = runtime->lookupFunction(0x380C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D3E8u; }
        if (ctx->pc != 0x33D3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380C30_0x380c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D3E8u; }
        if (ctx->pc != 0x33D3E8u) { return; }
    }
    ctx->pc = 0x33D3E8u;
label_33d3e8:
    // 0x33d3e8: 0xae510d04  sw          $s1, 0xD04($s2)
    ctx->pc = 0x33d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3332), GPR_U32(ctx, 17));
label_33d3ec:
    // 0x33d3ec: 0x8e430784  lw          $v1, 0x784($s2)
    ctx->pc = 0x33d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1924)));
label_33d3f0:
    // 0x33d3f0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_33d3f4:
    if (ctx->pc == 0x33D3F4u) {
        ctx->pc = 0x33D3F4u;
            // 0x33d3f4: 0x92440ce4  lbu         $a0, 0xCE4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
        ctx->pc = 0x33D3F8u;
        goto label_33d3f8;
    }
    ctx->pc = 0x33D3F0u;
    {
        const bool branch_taken_0x33d3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d3f0) {
            ctx->pc = 0x33D3F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D3F0u;
            // 0x33d3f4: 0x92440ce4  lbu         $a0, 0xCE4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D408u;
            goto label_33d408;
        }
    }
    ctx->pc = 0x33D3F8u;
label_33d3f8:
    // 0x33d3f8: 0x8e430960  lw          $v1, 0x960($s2)
    ctx->pc = 0x33d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2400)));
label_33d3fc:
    // 0x33d3fc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x33d3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_33d400:
    // 0x33d400: 0xae430960  sw          $v1, 0x960($s2)
    ctx->pc = 0x33d400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2400), GPR_U32(ctx, 3));
label_33d404:
    // 0x33d404: 0x92440ce4  lbu         $a0, 0xCE4($s2)
    ctx->pc = 0x33d404u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
label_33d408:
    // 0x33d408: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x33d408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_33d40c:
    // 0x33d40c: 0x5083005b  beql        $a0, $v1, . + 4 + (0x5B << 2)
label_33d410:
    if (ctx->pc == 0x33D410u) {
        ctx->pc = 0x33D410u;
            // 0x33d410: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x33D414u;
        goto label_33d414;
    }
    ctx->pc = 0x33D40Cu;
    {
        const bool branch_taken_0x33d40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33d40c) {
            ctx->pc = 0x33D410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D40Cu;
            // 0x33d410: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D57Cu;
            goto label_33d57c;
        }
    }
    ctx->pc = 0x33D414u;
label_33d414:
    // 0x33d414: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x33d414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_33d418:
    // 0x33d418: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
label_33d41c:
    if (ctx->pc == 0x33D41Cu) {
        ctx->pc = 0x33D420u;
        goto label_33d420;
    }
    ctx->pc = 0x33D418u;
    {
        const bool branch_taken_0x33d418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33d418) {
            ctx->pc = 0x33D558u;
            goto label_33d558;
        }
    }
    ctx->pc = 0x33D420u;
label_33d420:
    // 0x33d420: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x33d420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_33d424:
    // 0x33d424: 0x1083004c  beq         $a0, $v1, . + 4 + (0x4C << 2)
label_33d428:
    if (ctx->pc == 0x33D428u) {
        ctx->pc = 0x33D42Cu;
        goto label_33d42c;
    }
    ctx->pc = 0x33D424u;
    {
        const bool branch_taken_0x33d424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33d424) {
            ctx->pc = 0x33D558u;
            goto label_33d558;
        }
    }
    ctx->pc = 0x33D42Cu;
label_33d42c:
    // 0x33d42c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x33d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33d430:
    // 0x33d430: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
label_33d434:
    if (ctx->pc == 0x33D434u) {
        ctx->pc = 0x33D438u;
        goto label_33d438;
    }
    ctx->pc = 0x33D430u;
    {
        const bool branch_taken_0x33d430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33d430) {
            ctx->pc = 0x33D558u;
            goto label_33d558;
        }
    }
    ctx->pc = 0x33D438u;
label_33d438:
    // 0x33d438: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x33d438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_33d43c:
    // 0x33d43c: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
label_33d440:
    if (ctx->pc == 0x33D440u) {
        ctx->pc = 0x33D444u;
        goto label_33d444;
    }
    ctx->pc = 0x33D43Cu;
    {
        const bool branch_taken_0x33d43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33d43c) {
            ctx->pc = 0x33D4D0u;
            goto label_33d4d0;
        }
    }
    ctx->pc = 0x33D444u;
label_33d444:
    // 0x33d444: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33d444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_33d448:
    // 0x33d448: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
label_33d44c:
    if (ctx->pc == 0x33D44Cu) {
        ctx->pc = 0x33D450u;
        goto label_33d450;
    }
    ctx->pc = 0x33D448u;
    {
        const bool branch_taken_0x33d448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33d448) {
            ctx->pc = 0x33D4D0u;
            goto label_33d4d0;
        }
    }
    ctx->pc = 0x33D450u;
label_33d450:
    // 0x33d450: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33d450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33d454:
    // 0x33d454: 0x5083001a  beql        $a0, $v1, . + 4 + (0x1A << 2)
label_33d458:
    if (ctx->pc == 0x33D458u) {
        ctx->pc = 0x33D458u;
            // 0x33d458: 0x8e440964  lw          $a0, 0x964($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2404)));
        ctx->pc = 0x33D45Cu;
        goto label_33d45c;
    }
    ctx->pc = 0x33D454u;
    {
        const bool branch_taken_0x33d454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33d454) {
            ctx->pc = 0x33D458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D454u;
            // 0x33d458: 0x8e440964  lw          $a0, 0x964($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2404)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D4C0u;
            goto label_33d4c0;
        }
    }
    ctx->pc = 0x33D45Cu;
label_33d45c:
    // 0x33d45c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33d460:
    // 0x33d460: 0x5083000f  beql        $a0, $v1, . + 4 + (0xF << 2)
label_33d464:
    if (ctx->pc == 0x33D464u) {
        ctx->pc = 0x33D464u;
            // 0x33d464: 0x8e450964  lw          $a1, 0x964($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2404)));
        ctx->pc = 0x33D468u;
        goto label_33d468;
    }
    ctx->pc = 0x33D460u;
    {
        const bool branch_taken_0x33d460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33d460) {
            ctx->pc = 0x33D464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D460u;
            // 0x33d464: 0x8e450964  lw          $a1, 0x964($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2404)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D4A0u;
            goto label_33d4a0;
        }
    }
    ctx->pc = 0x33D468u;
label_33d468:
    // 0x33d468: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x33d468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_33d46c:
    // 0x33d46c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_33d470:
    if (ctx->pc == 0x33D470u) {
        ctx->pc = 0x33D470u;
            // 0x33d470: 0x8e440968  lw          $a0, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->pc = 0x33D474u;
        goto label_33d474;
    }
    ctx->pc = 0x33D46Cu;
    {
        const bool branch_taken_0x33d46c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33d46c) {
            ctx->pc = 0x33D470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D46Cu;
            // 0x33d470: 0x8e440968  lw          $a0, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D47Cu;
            goto label_33d47c;
        }
    }
    ctx->pc = 0x33D474u;
label_33d474:
    // 0x33d474: 0x10000040  b           . + 4 + (0x40 << 2)
label_33d478:
    if (ctx->pc == 0x33D478u) {
        ctx->pc = 0x33D47Cu;
        goto label_33d47c;
    }
    ctx->pc = 0x33D474u;
    {
        const bool branch_taken_0x33d474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d474) {
            ctx->pc = 0x33D578u;
            goto label_33d578;
        }
    }
    ctx->pc = 0x33D47Cu;
label_33d47c:
    // 0x33d47c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x33d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_33d480:
    // 0x33d480: 0x2463ff70  addiu       $v1, $v1, -0x90
    ctx->pc = 0x33d480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967152));
label_33d484:
    // 0x33d484: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33d484u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_33d488:
    // 0x33d488: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33d488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33d48c:
    // 0x33d48c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x33d48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33d490:
    // 0x33d490: 0xe6400c7c  swc1        $f0, 0xC7C($s2)
    ctx->pc = 0x33d490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3196), bits); }
label_33d494:
    // 0x33d494: 0xe6400c80  swc1        $f0, 0xC80($s2)
    ctx->pc = 0x33d494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3200), bits); }
label_33d498:
    // 0x33d498: 0x10000037  b           . + 4 + (0x37 << 2)
label_33d49c:
    if (ctx->pc == 0x33D49Cu) {
        ctx->pc = 0x33D49Cu;
            // 0x33d49c: 0xe6400c84  swc1        $f0, 0xC84($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3204), bits); }
        ctx->pc = 0x33D4A0u;
        goto label_33d4a0;
    }
    ctx->pc = 0x33D498u;
    {
        const bool branch_taken_0x33d498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D498u;
            // 0x33d49c: 0xe6400c84  swc1        $f0, 0xC84($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d498) {
            ctx->pc = 0x33D578u;
            goto label_33d578;
        }
    }
    ctx->pc = 0x33D4A0u;
label_33d4a0:
    // 0x33d4a0: 0x2404ffd7  addiu       $a0, $zero, -0x29
    ctx->pc = 0x33d4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967255));
label_33d4a4:
    // 0x33d4a4: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x33d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_33d4a8:
    // 0x33d4a8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x33d4a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_33d4ac:
    // 0x33d4ac: 0xae440964  sw          $a0, 0x964($s2)
    ctx->pc = 0x33d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2404), GPR_U32(ctx, 4));
label_33d4b0:
    // 0x33d4b0: 0x8e440960  lw          $a0, 0x960($s2)
    ctx->pc = 0x33d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2400)));
label_33d4b4:
    // 0x33d4b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x33d4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_33d4b8:
    // 0x33d4b8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_33d4bc:
    if (ctx->pc == 0x33D4BCu) {
        ctx->pc = 0x33D4BCu;
            // 0x33d4bc: 0xae430960  sw          $v1, 0x960($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2400), GPR_U32(ctx, 3));
        ctx->pc = 0x33D4C0u;
        goto label_33d4c0;
    }
    ctx->pc = 0x33D4B8u;
    {
        const bool branch_taken_0x33d4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D4B8u;
            // 0x33d4bc: 0xae430960  sw          $v1, 0x960($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d4b8) {
            ctx->pc = 0x33D578u;
            goto label_33d578;
        }
    }
    ctx->pc = 0x33D4C0u;
label_33d4c0:
    // 0x33d4c0: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x33d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_33d4c4:
    // 0x33d4c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x33d4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_33d4c8:
    // 0x33d4c8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_33d4cc:
    if (ctx->pc == 0x33D4CCu) {
        ctx->pc = 0x33D4CCu;
            // 0x33d4cc: 0xae430964  sw          $v1, 0x964($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2404), GPR_U32(ctx, 3));
        ctx->pc = 0x33D4D0u;
        goto label_33d4d0;
    }
    ctx->pc = 0x33D4C8u;
    {
        const bool branch_taken_0x33d4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D4C8u;
            // 0x33d4cc: 0xae430964  sw          $v1, 0x964($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d4c8) {
            ctx->pc = 0x33D578u;
            goto label_33d578;
        }
    }
    ctx->pc = 0x33D4D0u;
label_33d4d0:
    // 0x33d4d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33d4d4:
    // 0x33d4d4: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x33d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_33d4d8:
    // 0x33d4d8: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x33d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_33d4dc:
    // 0x33d4dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x33d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_33d4e0:
    // 0x33d4e0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x33d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_33d4e4:
    // 0x33d4e4: 0xc040138  jal         func_1004E0
label_33d4e8:
    if (ctx->pc == 0x33D4E8u) {
        ctx->pc = 0x33D4E8u;
            // 0x33d4e8: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x33D4ECu;
        goto label_33d4ec;
    }
    ctx->pc = 0x33D4E4u;
    SET_GPR_U32(ctx, 31, 0x33D4ECu);
    ctx->pc = 0x33D4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D4E4u;
            // 0x33d4e8: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D4ECu; }
        if (ctx->pc != 0x33D4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D4ECu; }
        if (ctx->pc != 0x33D4ECu) { return; }
    }
    ctx->pc = 0x33D4ECu;
label_33d4ec:
    // 0x33d4ec: 0xae420d28  sw          $v0, 0xD28($s2)
    ctx->pc = 0x33d4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3368), GPR_U32(ctx, 2));
label_33d4f0:
    // 0x33d4f0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_33d4f4:
    // 0x33d4f4: 0x8c633e98  lw          $v1, 0x3E98($v1)
    ctx->pc = 0x33d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16024)));
label_33d4f8:
    // 0x33d4f8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_33d4fc:
    if (ctx->pc == 0x33D4FCu) {
        ctx->pc = 0x33D500u;
        goto label_33d500;
    }
    ctx->pc = 0x33D4F8u;
    {
        const bool branch_taken_0x33d4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d4f8) {
            ctx->pc = 0x33D520u;
            goto label_33d520;
        }
    }
    ctx->pc = 0x33D500u;
label_33d500:
    // 0x33d500: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33d500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d504:
    // 0x33d504: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33d504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_33d508:
    // 0x33d508: 0xa2440d3b  sb          $a0, 0xD3B($s2)
    ctx->pc = 0x33d508u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3387), (uint8_t)GPR_U32(ctx, 4));
label_33d50c:
    // 0x33d50c: 0x8c633e98  lw          $v1, 0x3E98($v1)
    ctx->pc = 0x33d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16024)));
label_33d510:
    // 0x33d510: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_33d514:
    if (ctx->pc == 0x33D514u) {
        ctx->pc = 0x33D514u;
            // 0x33d514: 0xae430cc8  sw          $v1, 0xCC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3272), GPR_U32(ctx, 3));
        ctx->pc = 0x33D518u;
        goto label_33d518;
    }
    ctx->pc = 0x33D510u;
    {
        const bool branch_taken_0x33d510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d510) {
            ctx->pc = 0x33D514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D510u;
            // 0x33d514: 0xae430cc8  sw          $v1, 0xCC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D520u;
            goto label_33d520;
        }
    }
    ctx->pc = 0x33D518u;
label_33d518:
    // 0x33d518: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x33d518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_33d51c:
    // 0x33d51c: 0xae430cc8  sw          $v1, 0xCC8($s2)
    ctx->pc = 0x33d51cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3272), GPR_U32(ctx, 3));
label_33d520:
    // 0x33d520: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33d520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_33d524:
    // 0x33d524: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x33d524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_33d528:
    // 0x33d528: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_33d52c:
    if (ctx->pc == 0x33D52Cu) {
        ctx->pc = 0x33D530u;
        goto label_33d530;
    }
    ctx->pc = 0x33D528u;
    {
        const bool branch_taken_0x33d528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d528) {
            ctx->pc = 0x33D578u;
            goto label_33d578;
        }
    }
    ctx->pc = 0x33D530u;
label_33d530:
    // 0x33d530: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33d530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d534:
    // 0x33d534: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33d534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_33d538:
    // 0x33d538: 0xa2440d3b  sb          $a0, 0xD3B($s2)
    ctx->pc = 0x33d538u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3387), (uint8_t)GPR_U32(ctx, 4));
label_33d53c:
    // 0x33d53c: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x33d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_33d540:
    // 0x33d540: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_33d544:
    if (ctx->pc == 0x33D544u) {
        ctx->pc = 0x33D544u;
            // 0x33d544: 0xae430cc8  sw          $v1, 0xCC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3272), GPR_U32(ctx, 3));
        ctx->pc = 0x33D548u;
        goto label_33d548;
    }
    ctx->pc = 0x33D540u;
    {
        const bool branch_taken_0x33d540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d540) {
            ctx->pc = 0x33D544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D540u;
            // 0x33d544: 0xae430cc8  sw          $v1, 0xCC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D578u;
            goto label_33d578;
        }
    }
    ctx->pc = 0x33D548u;
label_33d548:
    // 0x33d548: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x33d548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_33d54c:
    // 0x33d54c: 0xae430cc8  sw          $v1, 0xCC8($s2)
    ctx->pc = 0x33d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3272), GPR_U32(ctx, 3));
label_33d550:
    // 0x33d550: 0x10000009  b           . + 4 + (0x9 << 2)
label_33d554:
    if (ctx->pc == 0x33D554u) {
        ctx->pc = 0x33D558u;
        goto label_33d558;
    }
    ctx->pc = 0x33D550u;
    {
        const bool branch_taken_0x33d550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d550) {
            ctx->pc = 0x33D578u;
            goto label_33d578;
        }
    }
    ctx->pc = 0x33D558u;
label_33d558:
    // 0x33d558: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33d558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_33d55c:
    // 0x33d55c: 0x8c630cd8  lw          $v1, 0xCD8($v1)
    ctx->pc = 0x33d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3288)));
label_33d560:
    // 0x33d560: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_33d564:
    if (ctx->pc == 0x33D564u) {
        ctx->pc = 0x33D568u;
        goto label_33d568;
    }
    ctx->pc = 0x33D560u;
    {
        const bool branch_taken_0x33d560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d560) {
            ctx->pc = 0x33D578u;
            goto label_33d578;
        }
    }
    ctx->pc = 0x33D568u;
label_33d568:
    // 0x33d568: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_33d56c:
    if (ctx->pc == 0x33D56Cu) {
        ctx->pc = 0x33D56Cu;
            // 0x33d56c: 0xae430cc8  sw          $v1, 0xCC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3272), GPR_U32(ctx, 3));
        ctx->pc = 0x33D570u;
        goto label_33d570;
    }
    ctx->pc = 0x33D568u;
    {
        const bool branch_taken_0x33d568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d568) {
            ctx->pc = 0x33D56Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D568u;
            // 0x33d56c: 0xae430cc8  sw          $v1, 0xCC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D578u;
            goto label_33d578;
        }
    }
    ctx->pc = 0x33D570u;
label_33d570:
    // 0x33d570: 0x246300a8  addiu       $v1, $v1, 0xA8
    ctx->pc = 0x33d570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 168));
label_33d574:
    // 0x33d574: 0xae430cc8  sw          $v1, 0xCC8($s2)
    ctx->pc = 0x33d574u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3272), GPR_U32(ctx, 3));
label_33d578:
    // 0x33d578: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33d578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33d57c:
    // 0x33d57c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33d57cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33d580:
    // 0x33d580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33d580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33d584:
    // 0x33d584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33d584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33d588:
    // 0x33d588: 0x3e00008  jr          $ra
label_33d58c:
    if (ctx->pc == 0x33D58Cu) {
        ctx->pc = 0x33D58Cu;
            // 0x33d58c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x33D590u;
        goto label_33d590;
    }
    ctx->pc = 0x33D588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D588u;
            // 0x33d58c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33D590u;
label_33d590:
    // 0x33d590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33d590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33d594:
    // 0x33d594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33d594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_33d598:
    // 0x33d598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33d598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33d59c:
    // 0x33d59c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33d59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33d5a0:
    // 0x33d5a0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_33d5a4:
    if (ctx->pc == 0x33D5A4u) {
        ctx->pc = 0x33D5A4u;
            // 0x33d5a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D5A8u;
        goto label_33d5a8;
    }
    ctx->pc = 0x33D5A0u;
    {
        const bool branch_taken_0x33d5a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d5a0) {
            ctx->pc = 0x33D5A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D5A0u;
            // 0x33d5a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D5CCu;
            goto label_33d5cc;
        }
    }
    ctx->pc = 0x33D5A8u;
label_33d5a8:
    // 0x33d5a8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x33d5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_33d5ac:
    // 0x33d5ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33d5b0:
    // 0x33d5b0: 0x246355c0  addiu       $v1, $v1, 0x55C0
    ctx->pc = 0x33d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21952));
label_33d5b4:
    // 0x33d5b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33d5b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33d5b8:
    // 0x33d5b8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_33d5bc:
    if (ctx->pc == 0x33D5BCu) {
        ctx->pc = 0x33D5BCu;
            // 0x33d5bc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x33D5C0u;
        goto label_33d5c0;
    }
    ctx->pc = 0x33D5B8u;
    {
        const bool branch_taken_0x33d5b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33D5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D5B8u;
            // 0x33d5bc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d5b8) {
            ctx->pc = 0x33D5C8u;
            goto label_33d5c8;
        }
    }
    ctx->pc = 0x33D5C0u;
label_33d5c0:
    // 0x33d5c0: 0xc0400a8  jal         func_1002A0
label_33d5c4:
    if (ctx->pc == 0x33D5C4u) {
        ctx->pc = 0x33D5C8u;
        goto label_33d5c8;
    }
    ctx->pc = 0x33D5C0u;
    SET_GPR_U32(ctx, 31, 0x33D5C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D5C8u; }
        if (ctx->pc != 0x33D5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D5C8u; }
        if (ctx->pc != 0x33D5C8u) { return; }
    }
    ctx->pc = 0x33D5C8u;
label_33d5c8:
    // 0x33d5c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33d5c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33d5cc:
    // 0x33d5cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33d5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33d5d0:
    // 0x33d5d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33d5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33d5d4:
    // 0x33d5d4: 0x3e00008  jr          $ra
label_33d5d8:
    if (ctx->pc == 0x33D5D8u) {
        ctx->pc = 0x33D5D8u;
            // 0x33d5d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x33D5DCu;
        goto label_33d5dc;
    }
    ctx->pc = 0x33D5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D5D4u;
            // 0x33d5d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33D5DCu;
label_33d5dc:
    // 0x33d5dc: 0x0  nop
    ctx->pc = 0x33d5dcu;
    // NOP
label_33d5e0:
    // 0x33d5e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33d5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_33d5e4:
    // 0x33d5e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33d5e8:
    // 0x33d5e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33d5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_33d5ec:
    // 0x33d5ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33d5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_33d5f0:
    // 0x33d5f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33d5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33d5f4:
    // 0x33d5f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33d5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33d5f8:
    // 0x33d5f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33d5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33d5fc:
    // 0x33d5fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33d5fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33d600:
    // 0x33d600: 0x8c500e84  lw          $s0, 0xE84($v0)
    ctx->pc = 0x33d600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_33d604:
    // 0x33d604: 0xc0bc6ec  jal         func_2F1BB0
label_33d608:
    if (ctx->pc == 0x33D608u) {
        ctx->pc = 0x33D608u;
            // 0x33d608: 0x26240838  addiu       $a0, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->pc = 0x33D60Cu;
        goto label_33d60c;
    }
    ctx->pc = 0x33D604u;
    SET_GPR_U32(ctx, 31, 0x33D60Cu);
    ctx->pc = 0x33D608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D604u;
            // 0x33d608: 0x26240838  addiu       $a0, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BB0u;
    if (runtime->hasFunction(0x2F1BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D60Cu; }
        if (ctx->pc != 0x33D60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BB0_0x2f1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D60Cu; }
        if (ctx->pc != 0x33D60Cu) { return; }
    }
    ctx->pc = 0x33D60Cu;
label_33d60c:
    // 0x33d60c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33d60cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33d610:
    // 0x33d610: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x33d610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_33d614:
    // 0x33d614: 0x320f809  jalr        $t9
label_33d618:
    if (ctx->pc == 0x33D618u) {
        ctx->pc = 0x33D618u;
            // 0x33d618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D61Cu;
        goto label_33d61c;
    }
    ctx->pc = 0x33D614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33D61Cu);
        ctx->pc = 0x33D618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D614u;
            // 0x33d618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33D61Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33D61Cu; }
            if (ctx->pc != 0x33D61Cu) { return; }
        }
        }
    }
    ctx->pc = 0x33D61Cu;
label_33d61c:
    // 0x33d61c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33d61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33d620:
    // 0x33d620: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x33d620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_33d624:
    // 0x33d624: 0x320f809  jalr        $t9
label_33d628:
    if (ctx->pc == 0x33D628u) {
        ctx->pc = 0x33D628u;
            // 0x33d628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D62Cu;
        goto label_33d62c;
    }
    ctx->pc = 0x33D624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33D62Cu);
        ctx->pc = 0x33D628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D624u;
            // 0x33d628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33D62Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33D62Cu; }
            if (ctx->pc != 0x33D62Cu) { return; }
        }
        }
    }
    ctx->pc = 0x33D62Cu;
label_33d62c:
    // 0x33d62c: 0x92220859  lbu         $v0, 0x859($s1)
    ctx->pc = 0x33d62cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2137)));
label_33d630:
    // 0x33d630: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
label_33d634:
    if (ctx->pc == 0x33D634u) {
        ctx->pc = 0x33D634u;
            // 0x33d634: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x33D638u;
        goto label_33d638;
    }
    ctx->pc = 0x33D630u;
    {
        const bool branch_taken_0x33d630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d630) {
            ctx->pc = 0x33D634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D630u;
            // 0x33d634: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D774u;
            goto label_33d774;
        }
    }
    ctx->pc = 0x33D638u;
label_33d638:
    // 0x33d638: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33d638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33d63c:
    // 0x33d63c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d640:
    // 0x33d640: 0x8c440e84  lw          $a0, 0xE84($v0)
    ctx->pc = 0x33d640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_33d644:
    // 0x33d644: 0x8c920550  lw          $s2, 0x550($a0)
    ctx->pc = 0x33d644u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_33d648:
    // 0x33d648: 0x8c930d70  lw          $s3, 0xD70($a0)
    ctx->pc = 0x33d648u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_33d64c:
    // 0x33d64c: 0xc07634c  jal         func_1D8D30
label_33d650:
    if (ctx->pc == 0x33D650u) {
        ctx->pc = 0x33D650u;
            // 0x33d650: 0xa2230d10  sb          $v1, 0xD10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3344), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x33D654u;
        goto label_33d654;
    }
    ctx->pc = 0x33D64Cu;
    SET_GPR_U32(ctx, 31, 0x33D654u);
    ctx->pc = 0x33D650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D64Cu;
            // 0x33d650: 0xa2230d10  sb          $v1, 0xD10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3344), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D30u;
    if (runtime->hasFunction(0x1D8D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D654u; }
        if (ctx->pc != 0x33D654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8D30_0x1d8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D654u; }
        if (ctx->pc != 0x33D654u) { return; }
    }
    ctx->pc = 0x33D654u;
label_33d654:
    // 0x33d654: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x33d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_33d658:
    // 0x33d658: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_33d65c:
    if (ctx->pc == 0x33D65Cu) {
        ctx->pc = 0x33D65Cu;
            // 0x33d65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D660u;
        goto label_33d660;
    }
    ctx->pc = 0x33D658u;
    {
        const bool branch_taken_0x33d658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d658) {
            ctx->pc = 0x33D65Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D658u;
            // 0x33d65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D6C8u;
            goto label_33d6c8;
        }
    }
    ctx->pc = 0x33D660u;
label_33d660:
    // 0x33d660: 0x8245010c  lb          $a1, 0x10C($s2)
    ctx->pc = 0x33d660u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_33d664:
    // 0x33d664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33d664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d668:
    // 0x33d668: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x33d668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_33d66c:
    // 0x33d66c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x33d66cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33d670:
    // 0x33d670: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33d670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_33d674:
    // 0x33d674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33d674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d678:
    // 0x33d678: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x33d678u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33d67c:
    // 0x33d67c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x33d67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_33d680:
    // 0x33d680: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x33d680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_33d684:
    // 0x33d684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33d688:
    // 0x33d688: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33d688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_33d68c:
    // 0x33d68c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x33d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_33d690:
    // 0x33d690: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x33d690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_33d694:
    // 0x33d694: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33d694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33d698:
    // 0x33d698: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x33d698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_33d69c:
    // 0x33d69c: 0x8245010d  lb          $a1, 0x10D($s2)
    ctx->pc = 0x33d69cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_33d6a0:
    // 0x33d6a0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x33d6a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_33d6a4:
    // 0x33d6a4: 0x320f809  jalr        $t9
label_33d6a8:
    if (ctx->pc == 0x33D6A8u) {
        ctx->pc = 0x33D6A8u;
            // 0x33d6a8: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x33D6ACu;
        goto label_33d6ac;
    }
    ctx->pc = 0x33D6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33D6ACu);
        ctx->pc = 0x33D6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D6A4u;
            // 0x33d6a8: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33D6ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33D6ACu; }
            if (ctx->pc != 0x33D6ACu) { return; }
        }
        }
    }
    ctx->pc = 0x33D6ACu;
label_33d6ac:
    // 0x33d6ac: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x33d6acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_33d6b0:
    // 0x33d6b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33d6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33d6b4:
    // 0x33d6b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33d6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d6b8:
    // 0x33d6b8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x33d6b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_33d6bc:
    // 0x33d6bc: 0x320f809  jalr        $t9
label_33d6c0:
    if (ctx->pc == 0x33D6C0u) {
        ctx->pc = 0x33D6C0u;
            // 0x33d6c0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D6C4u;
        goto label_33d6c4;
    }
    ctx->pc = 0x33D6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33D6C4u);
        ctx->pc = 0x33D6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D6BCu;
            // 0x33d6c0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33D6C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33D6C4u; }
            if (ctx->pc != 0x33D6C4u) { return; }
        }
        }
    }
    ctx->pc = 0x33D6C4u;
label_33d6c4:
    // 0x33d6c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33d6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33d6c8:
    // 0x33d6c8: 0xc0cc24c  jal         func_330930
label_33d6cc:
    if (ctx->pc == 0x33D6CCu) {
        ctx->pc = 0x33D6D0u;
        goto label_33d6d0;
    }
    ctx->pc = 0x33D6C8u;
    SET_GPR_U32(ctx, 31, 0x33D6D0u);
    ctx->pc = 0x330930u;
    if (runtime->hasFunction(0x330930u)) {
        auto targetFn = runtime->lookupFunction(0x330930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D6D0u; }
        if (ctx->pc != 0x33D6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330930_0x330930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D6D0u; }
        if (ctx->pc != 0x33D6D0u) { return; }
    }
    ctx->pc = 0x33D6D0u;
label_33d6d0:
    // 0x33d6d0: 0x240400d4  addiu       $a0, $zero, 0xD4
    ctx->pc = 0x33d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_33d6d4:
    // 0x33d6d4: 0xc040180  jal         func_100600
label_33d6d8:
    if (ctx->pc == 0x33D6D8u) {
        ctx->pc = 0x33D6D8u;
            // 0x33d6d8: 0xa2200cc2  sb          $zero, 0xCC2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3266), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33D6DCu;
        goto label_33d6dc;
    }
    ctx->pc = 0x33D6D4u;
    SET_GPR_U32(ctx, 31, 0x33D6DCu);
    ctx->pc = 0x33D6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D6D4u;
            // 0x33d6d8: 0xa2200cc2  sb          $zero, 0xCC2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3266), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D6DCu; }
        if (ctx->pc != 0x33D6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D6DCu; }
        if (ctx->pc != 0x33D6DCu) { return; }
    }
    ctx->pc = 0x33D6DCu;
label_33d6dc:
    // 0x33d6dc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_33d6e0:
    if (ctx->pc == 0x33D6E0u) {
        ctx->pc = 0x33D6E0u;
            // 0x33d6e0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D6E4u;
        goto label_33d6e4;
    }
    ctx->pc = 0x33D6DCu;
    {
        const bool branch_taken_0x33d6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D6DCu;
            // 0x33d6e0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d6dc) {
            ctx->pc = 0x33D744u;
            goto label_33d744;
        }
    }
    ctx->pc = 0x33D6E4u;
label_33d6e4:
    // 0x33d6e4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33d6e8:
    // 0x33d6e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33d6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d6ec:
    // 0x33d6ec: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33d6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33d6f0:
    // 0x33d6f0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33d6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33d6f4:
    // 0x33d6f4: 0xc10ca68  jal         func_4329A0
label_33d6f8:
    if (ctx->pc == 0x33D6F8u) {
        ctx->pc = 0x33D6F8u;
            // 0x33d6f8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33D6FCu;
        goto label_33d6fc;
    }
    ctx->pc = 0x33D6F4u;
    SET_GPR_U32(ctx, 31, 0x33D6FCu);
    ctx->pc = 0x33D6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D6F4u;
            // 0x33d6f8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D6FCu; }
        if (ctx->pc != 0x33D6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D6FCu; }
        if (ctx->pc != 0x33D6FCu) { return; }
    }
    ctx->pc = 0x33D6FCu;
label_33d6fc:
    // 0x33d6fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33d700:
    // 0x33d700: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x33d700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
label_33d704:
    // 0x33d704: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33d704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33d708:
    // 0x33d708: 0xc148880  jal         func_522200
label_33d70c:
    if (ctx->pc == 0x33D70Cu) {
        ctx->pc = 0x33D70Cu;
            // 0x33d70c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33D710u;
        goto label_33d710;
    }
    ctx->pc = 0x33D708u;
    SET_GPR_U32(ctx, 31, 0x33D710u);
    ctx->pc = 0x33D70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D708u;
            // 0x33d70c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D710u; }
        if (ctx->pc != 0x33D710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D710u; }
        if (ctx->pc != 0x33D710u) { return; }
    }
    ctx->pc = 0x33D710u;
label_33d710:
    // 0x33d710: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33d710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33d714:
    // 0x33d714: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33d714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33d718:
    // 0x33d718: 0x24635580  addiu       $v1, $v1, 0x5580
    ctx->pc = 0x33d718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21888));
label_33d71c:
    // 0x33d71c: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x33d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
label_33d720:
    // 0x33d720: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x33d720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_33d724:
    // 0x33d724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33d724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d728:
    // 0x33d728: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x33d728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_33d72c:
    // 0x33d72c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33d730:
    // 0x33d730: 0x26220cc2  addiu       $v0, $s1, 0xCC2
    ctx->pc = 0x33d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3266));
label_33d734:
    // 0x33d734: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x33d734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_33d738:
    // 0x33d738: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x33d738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_33d73c:
    // 0x33d73c: 0xc156828  jal         func_55A0A0
label_33d740:
    if (ctx->pc == 0x33D740u) {
        ctx->pc = 0x33D740u;
            // 0x33d740: 0xae4000d0  sw          $zero, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33D744u;
        goto label_33d744;
    }
    ctx->pc = 0x33D73Cu;
    SET_GPR_U32(ctx, 31, 0x33D744u);
    ctx->pc = 0x33D740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D73Cu;
            // 0x33d740: 0xae4000d0  sw          $zero, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55A0A0u;
    if (runtime->hasFunction(0x55A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x55A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D744u; }
        if (ctx->pc != 0x33D744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055A0A0_0x55a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D744u; }
        if (ctx->pc != 0x33D744u) { return; }
    }
    ctx->pc = 0x33D744u;
label_33d744:
    // 0x33d744: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x33d744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_33d748:
    // 0x33d748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33d748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33d74c:
    // 0x33d74c: 0xae220cb4  sw          $v0, 0xCB4($s1)
    ctx->pc = 0x33d74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3252), GPR_U32(ctx, 2));
label_33d750:
    // 0x33d750: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33d750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33d754:
    // 0x33d754: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x33d754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_33d758:
    // 0x33d758: 0x320f809  jalr        $t9
label_33d75c:
    if (ctx->pc == 0x33D75Cu) {
        ctx->pc = 0x33D75Cu;
            // 0x33d75c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x33D760u;
        goto label_33d760;
    }
    ctx->pc = 0x33D758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33D760u);
        ctx->pc = 0x33D75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D758u;
            // 0x33d75c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33D760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33D760u; }
            if (ctx->pc != 0x33D760u) { return; }
        }
        }
    }
    ctx->pc = 0x33D760u;
label_33d760:
    // 0x33d760: 0x26041150  addiu       $a0, $s0, 0x1150
    ctx->pc = 0x33d760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
label_33d764:
    // 0x33d764: 0xc12ca3c  jal         func_4B28F0
label_33d768:
    if (ctx->pc == 0x33D768u) {
        ctx->pc = 0x33D768u;
            // 0x33d768: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x33D76Cu;
        goto label_33d76c;
    }
    ctx->pc = 0x33D764u;
    SET_GPR_U32(ctx, 31, 0x33D76Cu);
    ctx->pc = 0x33D768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D764u;
            // 0x33d768: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D76Cu; }
        if (ctx->pc != 0x33D76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D76Cu; }
        if (ctx->pc != 0x33D76Cu) { return; }
    }
    ctx->pc = 0x33D76Cu;
label_33d76c:
    // 0x33d76c: 0x10000156  b           . + 4 + (0x156 << 2)
label_33d770:
    if (ctx->pc == 0x33D770u) {
        ctx->pc = 0x33D770u;
            // 0x33d770: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x33D774u;
        goto label_33d774;
    }
    ctx->pc = 0x33D76Cu;
    {
        const bool branch_taken_0x33d76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D76Cu;
            // 0x33d770: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d76c) {
            ctx->pc = 0x33DCC8u;
            goto label_33dcc8;
        }
    }
    ctx->pc = 0x33D774u;
label_33d774:
    // 0x33d774: 0x8f3900cc  lw          $t9, 0xCC($t9)
    ctx->pc = 0x33d774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 204)));
label_33d778:
    // 0x33d778: 0x320f809  jalr        $t9
label_33d77c:
    if (ctx->pc == 0x33D77Cu) {
        ctx->pc = 0x33D77Cu;
            // 0x33d77c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D780u;
        goto label_33d780;
    }
    ctx->pc = 0x33D778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33D780u);
        ctx->pc = 0x33D77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D778u;
            // 0x33d77c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33D780u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33D780u; }
            if (ctx->pc != 0x33D780u) { return; }
        }
        }
    }
    ctx->pc = 0x33D780u;
label_33d780:
    // 0x33d780: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
label_33d784:
    if (ctx->pc == 0x33D784u) {
        ctx->pc = 0x33D784u;
            // 0x33d784: 0x8e230968  lw          $v1, 0x968($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
        ctx->pc = 0x33D788u;
        goto label_33d788;
    }
    ctx->pc = 0x33D780u;
    {
        const bool branch_taken_0x33d780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d780) {
            ctx->pc = 0x33D784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D780u;
            // 0x33d784: 0x8e230968  lw          $v1, 0x968($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D8C4u;
            goto label_33d8c4;
        }
    }
    ctx->pc = 0x33D788u;
label_33d788:
    // 0x33d788: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33d788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33d78c:
    // 0x33d78c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d790:
    // 0x33d790: 0x8c440e84  lw          $a0, 0xE84($v0)
    ctx->pc = 0x33d790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_33d794:
    // 0x33d794: 0x8c920550  lw          $s2, 0x550($a0)
    ctx->pc = 0x33d794u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_33d798:
    // 0x33d798: 0x8c930d70  lw          $s3, 0xD70($a0)
    ctx->pc = 0x33d798u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_33d79c:
    // 0x33d79c: 0xc07634c  jal         func_1D8D30
label_33d7a0:
    if (ctx->pc == 0x33D7A0u) {
        ctx->pc = 0x33D7A0u;
            // 0x33d7a0: 0xa2230d10  sb          $v1, 0xD10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3344), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x33D7A4u;
        goto label_33d7a4;
    }
    ctx->pc = 0x33D79Cu;
    SET_GPR_U32(ctx, 31, 0x33D7A4u);
    ctx->pc = 0x33D7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D79Cu;
            // 0x33d7a0: 0xa2230d10  sb          $v1, 0xD10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3344), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D30u;
    if (runtime->hasFunction(0x1D8D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D7A4u; }
        if (ctx->pc != 0x33D7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8D30_0x1d8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D7A4u; }
        if (ctx->pc != 0x33D7A4u) { return; }
    }
    ctx->pc = 0x33D7A4u;
label_33d7a4:
    // 0x33d7a4: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x33d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_33d7a8:
    // 0x33d7a8: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_33d7ac:
    if (ctx->pc == 0x33D7ACu) {
        ctx->pc = 0x33D7ACu;
            // 0x33d7ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D7B0u;
        goto label_33d7b0;
    }
    ctx->pc = 0x33D7A8u;
    {
        const bool branch_taken_0x33d7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d7a8) {
            ctx->pc = 0x33D7ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D7A8u;
            // 0x33d7ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D818u;
            goto label_33d818;
        }
    }
    ctx->pc = 0x33D7B0u;
label_33d7b0:
    // 0x33d7b0: 0x8245010c  lb          $a1, 0x10C($s2)
    ctx->pc = 0x33d7b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_33d7b4:
    // 0x33d7b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d7b8:
    // 0x33d7b8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x33d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_33d7bc:
    // 0x33d7bc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x33d7bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33d7c0:
    // 0x33d7c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33d7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_33d7c4:
    // 0x33d7c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33d7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d7c8:
    // 0x33d7c8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x33d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33d7cc:
    // 0x33d7cc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x33d7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_33d7d0:
    // 0x33d7d0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x33d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_33d7d4:
    // 0x33d7d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33d7d8:
    // 0x33d7d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_33d7dc:
    // 0x33d7dc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x33d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_33d7e0:
    // 0x33d7e0: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x33d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_33d7e4:
    // 0x33d7e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33d7e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33d7e8:
    // 0x33d7e8: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x33d7e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_33d7ec:
    // 0x33d7ec: 0x8245010d  lb          $a1, 0x10D($s2)
    ctx->pc = 0x33d7ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_33d7f0:
    // 0x33d7f0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x33d7f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_33d7f4:
    // 0x33d7f4: 0x320f809  jalr        $t9
label_33d7f8:
    if (ctx->pc == 0x33D7F8u) {
        ctx->pc = 0x33D7F8u;
            // 0x33d7f8: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x33D7FCu;
        goto label_33d7fc;
    }
    ctx->pc = 0x33D7F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33D7FCu);
        ctx->pc = 0x33D7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D7F4u;
            // 0x33d7f8: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33D7FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33D7FCu; }
            if (ctx->pc != 0x33D7FCu) { return; }
        }
        }
    }
    ctx->pc = 0x33D7FCu;
label_33d7fc:
    // 0x33d7fc: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x33d7fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_33d800:
    // 0x33d800: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33d800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33d804:
    // 0x33d804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33d804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d808:
    // 0x33d808: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x33d808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_33d80c:
    // 0x33d80c: 0x320f809  jalr        $t9
label_33d810:
    if (ctx->pc == 0x33D810u) {
        ctx->pc = 0x33D810u;
            // 0x33d810: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D814u;
        goto label_33d814;
    }
    ctx->pc = 0x33D80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33D814u);
        ctx->pc = 0x33D810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D80Cu;
            // 0x33d810: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33D814u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33D814u; }
            if (ctx->pc != 0x33D814u) { return; }
        }
        }
    }
    ctx->pc = 0x33D814u;
label_33d814:
    // 0x33d814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33d814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33d818:
    // 0x33d818: 0xc0cc24c  jal         func_330930
label_33d81c:
    if (ctx->pc == 0x33D81Cu) {
        ctx->pc = 0x33D820u;
        goto label_33d820;
    }
    ctx->pc = 0x33D818u;
    SET_GPR_U32(ctx, 31, 0x33D820u);
    ctx->pc = 0x330930u;
    if (runtime->hasFunction(0x330930u)) {
        auto targetFn = runtime->lookupFunction(0x330930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D820u; }
        if (ctx->pc != 0x33D820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330930_0x330930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D820u; }
        if (ctx->pc != 0x33D820u) { return; }
    }
    ctx->pc = 0x33D820u;
label_33d820:
    // 0x33d820: 0x240400d4  addiu       $a0, $zero, 0xD4
    ctx->pc = 0x33d820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_33d824:
    // 0x33d824: 0xc040180  jal         func_100600
label_33d828:
    if (ctx->pc == 0x33D828u) {
        ctx->pc = 0x33D828u;
            // 0x33d828: 0xa2200cc2  sb          $zero, 0xCC2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3266), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33D82Cu;
        goto label_33d82c;
    }
    ctx->pc = 0x33D824u;
    SET_GPR_U32(ctx, 31, 0x33D82Cu);
    ctx->pc = 0x33D828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D824u;
            // 0x33d828: 0xa2200cc2  sb          $zero, 0xCC2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3266), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D82Cu; }
        if (ctx->pc != 0x33D82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D82Cu; }
        if (ctx->pc != 0x33D82Cu) { return; }
    }
    ctx->pc = 0x33D82Cu;
label_33d82c:
    // 0x33d82c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_33d830:
    if (ctx->pc == 0x33D830u) {
        ctx->pc = 0x33D830u;
            // 0x33d830: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D834u;
        goto label_33d834;
    }
    ctx->pc = 0x33D82Cu;
    {
        const bool branch_taken_0x33d82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D82Cu;
            // 0x33d830: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d82c) {
            ctx->pc = 0x33D894u;
            goto label_33d894;
        }
    }
    ctx->pc = 0x33D834u;
label_33d834:
    // 0x33d834: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33d834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33d838:
    // 0x33d838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33d838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d83c:
    // 0x33d83c: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33d83cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33d840:
    // 0x33d840: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33d840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33d844:
    // 0x33d844: 0xc10ca68  jal         func_4329A0
label_33d848:
    if (ctx->pc == 0x33D848u) {
        ctx->pc = 0x33D848u;
            // 0x33d848: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33D84Cu;
        goto label_33d84c;
    }
    ctx->pc = 0x33D844u;
    SET_GPR_U32(ctx, 31, 0x33D84Cu);
    ctx->pc = 0x33D848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D844u;
            // 0x33d848: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D84Cu; }
        if (ctx->pc != 0x33D84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D84Cu; }
        if (ctx->pc != 0x33D84Cu) { return; }
    }
    ctx->pc = 0x33D84Cu;
label_33d84c:
    // 0x33d84c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33d850:
    // 0x33d850: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x33d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
label_33d854:
    // 0x33d854: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33d854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33d858:
    // 0x33d858: 0xc148880  jal         func_522200
label_33d85c:
    if (ctx->pc == 0x33D85Cu) {
        ctx->pc = 0x33D85Cu;
            // 0x33d85c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33D860u;
        goto label_33d860;
    }
    ctx->pc = 0x33D858u;
    SET_GPR_U32(ctx, 31, 0x33D860u);
    ctx->pc = 0x33D85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D858u;
            // 0x33d85c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D860u; }
        if (ctx->pc != 0x33D860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D860u; }
        if (ctx->pc != 0x33D860u) { return; }
    }
    ctx->pc = 0x33D860u;
label_33d860:
    // 0x33d860: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33d860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33d864:
    // 0x33d864: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33d864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33d868:
    // 0x33d868: 0x24635580  addiu       $v1, $v1, 0x5580
    ctx->pc = 0x33d868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21888));
label_33d86c:
    // 0x33d86c: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x33d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
label_33d870:
    // 0x33d870: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x33d870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_33d874:
    // 0x33d874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33d874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d878:
    // 0x33d878: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x33d878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_33d87c:
    // 0x33d87c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33d87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d880:
    // 0x33d880: 0x26220cc2  addiu       $v0, $s1, 0xCC2
    ctx->pc = 0x33d880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3266));
label_33d884:
    // 0x33d884: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x33d884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_33d888:
    // 0x33d888: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x33d888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_33d88c:
    // 0x33d88c: 0xc156828  jal         func_55A0A0
label_33d890:
    if (ctx->pc == 0x33D890u) {
        ctx->pc = 0x33D890u;
            // 0x33d890: 0xae4000d0  sw          $zero, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33D894u;
        goto label_33d894;
    }
    ctx->pc = 0x33D88Cu;
    SET_GPR_U32(ctx, 31, 0x33D894u);
    ctx->pc = 0x33D890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D88Cu;
            // 0x33d890: 0xae4000d0  sw          $zero, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55A0A0u;
    if (runtime->hasFunction(0x55A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x55A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D894u; }
        if (ctx->pc != 0x33D894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055A0A0_0x55a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D894u; }
        if (ctx->pc != 0x33D894u) { return; }
    }
    ctx->pc = 0x33D894u;
label_33d894:
    // 0x33d894: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x33d894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_33d898:
    // 0x33d898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33d898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33d89c:
    // 0x33d89c: 0xae220cb4  sw          $v0, 0xCB4($s1)
    ctx->pc = 0x33d89cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3252), GPR_U32(ctx, 2));
label_33d8a0:
    // 0x33d8a0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33d8a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33d8a4:
    // 0x33d8a4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x33d8a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_33d8a8:
    // 0x33d8a8: 0x320f809  jalr        $t9
label_33d8ac:
    if (ctx->pc == 0x33D8ACu) {
        ctx->pc = 0x33D8ACu;
            // 0x33d8ac: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x33D8B0u;
        goto label_33d8b0;
    }
    ctx->pc = 0x33D8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33D8B0u);
        ctx->pc = 0x33D8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D8A8u;
            // 0x33d8ac: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33D8B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33D8B0u; }
            if (ctx->pc != 0x33D8B0u) { return; }
        }
        }
    }
    ctx->pc = 0x33D8B0u;
label_33d8b0:
    // 0x33d8b0: 0x26041150  addiu       $a0, $s0, 0x1150
    ctx->pc = 0x33d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
label_33d8b4:
    // 0x33d8b4: 0xc12ca3c  jal         func_4B28F0
label_33d8b8:
    if (ctx->pc == 0x33D8B8u) {
        ctx->pc = 0x33D8B8u;
            // 0x33d8b8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x33D8BCu;
        goto label_33d8bc;
    }
    ctx->pc = 0x33D8B4u;
    SET_GPR_U32(ctx, 31, 0x33D8BCu);
    ctx->pc = 0x33D8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D8B4u;
            // 0x33d8b8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D8BCu; }
        if (ctx->pc != 0x33D8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D8BCu; }
        if (ctx->pc != 0x33D8BCu) { return; }
    }
    ctx->pc = 0x33D8BCu;
label_33d8bc:
    // 0x33d8bc: 0x10000101  b           . + 4 + (0x101 << 2)
label_33d8c0:
    if (ctx->pc == 0x33D8C0u) {
        ctx->pc = 0x33D8C4u;
        goto label_33d8c4;
    }
    ctx->pc = 0x33D8BCu;
    {
        const bool branch_taken_0x33d8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d8bc) {
            ctx->pc = 0x33DCC4u;
            goto label_33dcc4;
        }
    }
    ctx->pc = 0x33D8C4u;
label_33d8c4:
    // 0x33d8c4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x33d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_33d8c8:
    // 0x33d8c8: 0x54620069  bnel        $v1, $v0, . + 4 + (0x69 << 2)
label_33d8cc:
    if (ctx->pc == 0x33D8CCu) {
        ctx->pc = 0x33D8CCu;
            // 0x33d8cc: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x33D8D0u;
        goto label_33d8d0;
    }
    ctx->pc = 0x33D8C8u;
    {
        const bool branch_taken_0x33d8c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d8c8) {
            ctx->pc = 0x33D8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D8C8u;
            // 0x33d8cc: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33DA70u;
            goto label_33da70;
        }
    }
    ctx->pc = 0x33D8D0u;
label_33d8d0:
    // 0x33d8d0: 0x8e230cc4  lw          $v1, 0xCC4($s1)
    ctx->pc = 0x33d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3268)));
label_33d8d4:
    // 0x33d8d4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x33d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33d8d8:
    // 0x33d8d8: 0x14620064  bne         $v1, $v0, . + 4 + (0x64 << 2)
label_33d8dc:
    if (ctx->pc == 0x33D8DCu) {
        ctx->pc = 0x33D8E0u;
        goto label_33d8e0;
    }
    ctx->pc = 0x33D8D8u;
    {
        const bool branch_taken_0x33d8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d8d8) {
            ctx->pc = 0x33DA6Cu;
            goto label_33da6c;
        }
    }
    ctx->pc = 0x33D8E0u;
label_33d8e0:
    // 0x33d8e0: 0x8e230cb4  lw          $v1, 0xCB4($s1)
    ctx->pc = 0x33d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3252)));
label_33d8e4:
    // 0x33d8e4: 0x8e220cb8  lw          $v0, 0xCB8($s1)
    ctx->pc = 0x33d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3256)));
label_33d8e8:
    // 0x33d8e8: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_33d8ec:
    if (ctx->pc == 0x33D8ECu) {
        ctx->pc = 0x33D8ECu;
            // 0x33d8ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D8F0u;
        goto label_33d8f0;
    }
    ctx->pc = 0x33D8E8u;
    {
        const bool branch_taken_0x33d8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33d8e8) {
            ctx->pc = 0x33D8ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D8E8u;
            // 0x33d8ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D8F0u;
            goto label_33d8f0;
        }
    }
    ctx->pc = 0x33D8F0u;
label_33d8f0:
    // 0x33d8f0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x33d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_33d8f4:
    // 0x33d8f4: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_33d8f8:
    if (ctx->pc == 0x33D8F8u) {
        ctx->pc = 0x33D8F8u;
            // 0x33d8f8: 0x8e030db4  lw          $v1, 0xDB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3508)));
        ctx->pc = 0x33D8FCu;
        goto label_33d8fc;
    }
    ctx->pc = 0x33D8F4u;
    {
        const bool branch_taken_0x33d8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d8f4) {
            ctx->pc = 0x33D8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D8F4u;
            // 0x33d8f8: 0x8e030db4  lw          $v1, 0xDB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3508)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D924u;
            goto label_33d924;
        }
    }
    ctx->pc = 0x33D8FCu;
label_33d8fc:
    // 0x33d8fc: 0x8e030db4  lw          $v1, 0xDB4($s0)
    ctx->pc = 0x33d8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3508)));
label_33d900:
    // 0x33d900: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x33d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_33d904:
    // 0x33d904: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_33d908:
    if (ctx->pc == 0x33D908u) {
        ctx->pc = 0x33D90Cu;
        goto label_33d90c;
    }
    ctx->pc = 0x33D904u;
    {
        const bool branch_taken_0x33d904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d904) {
            ctx->pc = 0x33D920u;
            goto label_33d920;
        }
    }
    ctx->pc = 0x33D90Cu;
label_33d90c:
    // 0x33d90c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x33d90cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33d910:
    // 0x33d910: 0x8e050db0  lw          $a1, 0xDB0($s0)
    ctx->pc = 0x33d910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_33d914:
    // 0x33d914: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x33d914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_33d918:
    // 0x33d918: 0x320f809  jalr        $t9
label_33d91c:
    if (ctx->pc == 0x33D91Cu) {
        ctx->pc = 0x33D91Cu;
            // 0x33d91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D920u;
        goto label_33d920;
    }
    ctx->pc = 0x33D918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33D920u);
        ctx->pc = 0x33D91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D918u;
            // 0x33d91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33D920u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33D920u; }
            if (ctx->pc != 0x33D920u) { return; }
        }
        }
    }
    ctx->pc = 0x33D920u;
label_33d920:
    // 0x33d920: 0x8e030db4  lw          $v1, 0xDB4($s0)
    ctx->pc = 0x33d920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3508)));
label_33d924:
    // 0x33d924: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x33d924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_33d928:
    // 0x33d928: 0x14620050  bne         $v1, $v0, . + 4 + (0x50 << 2)
label_33d92c:
    if (ctx->pc == 0x33D92Cu) {
        ctx->pc = 0x33D930u;
        goto label_33d930;
    }
    ctx->pc = 0x33D928u;
    {
        const bool branch_taken_0x33d928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d928) {
            ctx->pc = 0x33DA6Cu;
            goto label_33da6c;
        }
    }
    ctx->pc = 0x33D930u;
label_33d930:
    // 0x33d930: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33d930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33d934:
    // 0x33d934: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33d934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d938:
    // 0x33d938: 0x8c440e84  lw          $a0, 0xE84($v0)
    ctx->pc = 0x33d938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_33d93c:
    // 0x33d93c: 0x8c920550  lw          $s2, 0x550($a0)
    ctx->pc = 0x33d93cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_33d940:
    // 0x33d940: 0x8c930d70  lw          $s3, 0xD70($a0)
    ctx->pc = 0x33d940u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_33d944:
    // 0x33d944: 0xc07634c  jal         func_1D8D30
label_33d948:
    if (ctx->pc == 0x33D948u) {
        ctx->pc = 0x33D948u;
            // 0x33d948: 0xa2230d10  sb          $v1, 0xD10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3344), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x33D94Cu;
        goto label_33d94c;
    }
    ctx->pc = 0x33D944u;
    SET_GPR_U32(ctx, 31, 0x33D94Cu);
    ctx->pc = 0x33D948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D944u;
            // 0x33d948: 0xa2230d10  sb          $v1, 0xD10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3344), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D30u;
    if (runtime->hasFunction(0x1D8D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D94Cu; }
        if (ctx->pc != 0x33D94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8D30_0x1d8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D94Cu; }
        if (ctx->pc != 0x33D94Cu) { return; }
    }
    ctx->pc = 0x33D94Cu;
label_33d94c:
    // 0x33d94c: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x33d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_33d950:
    // 0x33d950: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_33d954:
    if (ctx->pc == 0x33D954u) {
        ctx->pc = 0x33D954u;
            // 0x33d954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D958u;
        goto label_33d958;
    }
    ctx->pc = 0x33D950u;
    {
        const bool branch_taken_0x33d950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d950) {
            ctx->pc = 0x33D954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33D950u;
            // 0x33d954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33D9C0u;
            goto label_33d9c0;
        }
    }
    ctx->pc = 0x33D958u;
label_33d958:
    // 0x33d958: 0x8245010c  lb          $a1, 0x10C($s2)
    ctx->pc = 0x33d958u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_33d95c:
    // 0x33d95c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d960:
    // 0x33d960: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x33d960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_33d964:
    // 0x33d964: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x33d964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33d968:
    // 0x33d968: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33d968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_33d96c:
    // 0x33d96c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33d96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d970:
    // 0x33d970: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x33d970u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33d974:
    // 0x33d974: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x33d974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_33d978:
    // 0x33d978: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x33d978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_33d97c:
    // 0x33d97c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33d980:
    // 0x33d980: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33d980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_33d984:
    // 0x33d984: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x33d984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_33d988:
    // 0x33d988: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x33d988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_33d98c:
    // 0x33d98c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33d98cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33d990:
    // 0x33d990: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x33d990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_33d994:
    // 0x33d994: 0x8245010d  lb          $a1, 0x10D($s2)
    ctx->pc = 0x33d994u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_33d998:
    // 0x33d998: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x33d998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_33d99c:
    // 0x33d99c: 0x320f809  jalr        $t9
label_33d9a0:
    if (ctx->pc == 0x33D9A0u) {
        ctx->pc = 0x33D9A0u;
            // 0x33d9a0: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x33D9A4u;
        goto label_33d9a4;
    }
    ctx->pc = 0x33D99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33D9A4u);
        ctx->pc = 0x33D9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D99Cu;
            // 0x33d9a0: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33D9A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33D9A4u; }
            if (ctx->pc != 0x33D9A4u) { return; }
        }
        }
    }
    ctx->pc = 0x33D9A4u;
label_33d9a4:
    // 0x33d9a4: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x33d9a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_33d9a8:
    // 0x33d9a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33d9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33d9ac:
    // 0x33d9ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33d9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d9b0:
    // 0x33d9b0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x33d9b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_33d9b4:
    // 0x33d9b4: 0x320f809  jalr        $t9
label_33d9b8:
    if (ctx->pc == 0x33D9B8u) {
        ctx->pc = 0x33D9B8u;
            // 0x33d9b8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D9BCu;
        goto label_33d9bc;
    }
    ctx->pc = 0x33D9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33D9BCu);
        ctx->pc = 0x33D9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D9B4u;
            // 0x33d9b8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33D9BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33D9BCu; }
            if (ctx->pc != 0x33D9BCu) { return; }
        }
        }
    }
    ctx->pc = 0x33D9BCu;
label_33d9bc:
    // 0x33d9bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33d9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33d9c0:
    // 0x33d9c0: 0xc0cc24c  jal         func_330930
label_33d9c4:
    if (ctx->pc == 0x33D9C4u) {
        ctx->pc = 0x33D9C8u;
        goto label_33d9c8;
    }
    ctx->pc = 0x33D9C0u;
    SET_GPR_U32(ctx, 31, 0x33D9C8u);
    ctx->pc = 0x330930u;
    if (runtime->hasFunction(0x330930u)) {
        auto targetFn = runtime->lookupFunction(0x330930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D9C8u; }
        if (ctx->pc != 0x33D9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330930_0x330930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D9C8u; }
        if (ctx->pc != 0x33D9C8u) { return; }
    }
    ctx->pc = 0x33D9C8u;
label_33d9c8:
    // 0x33d9c8: 0x240400d4  addiu       $a0, $zero, 0xD4
    ctx->pc = 0x33d9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_33d9cc:
    // 0x33d9cc: 0xc040180  jal         func_100600
label_33d9d0:
    if (ctx->pc == 0x33D9D0u) {
        ctx->pc = 0x33D9D0u;
            // 0x33d9d0: 0xa2200cc2  sb          $zero, 0xCC2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3266), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33D9D4u;
        goto label_33d9d4;
    }
    ctx->pc = 0x33D9CCu;
    SET_GPR_U32(ctx, 31, 0x33D9D4u);
    ctx->pc = 0x33D9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D9CCu;
            // 0x33d9d0: 0xa2200cc2  sb          $zero, 0xCC2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3266), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D9D4u; }
        if (ctx->pc != 0x33D9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D9D4u; }
        if (ctx->pc != 0x33D9D4u) { return; }
    }
    ctx->pc = 0x33D9D4u;
label_33d9d4:
    // 0x33d9d4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_33d9d8:
    if (ctx->pc == 0x33D9D8u) {
        ctx->pc = 0x33D9D8u;
            // 0x33d9d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33D9DCu;
        goto label_33d9dc;
    }
    ctx->pc = 0x33D9D4u;
    {
        const bool branch_taken_0x33d9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33D9D4u;
            // 0x33d9d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d9d4) {
            ctx->pc = 0x33DA3Cu;
            goto label_33da3c;
        }
    }
    ctx->pc = 0x33D9DCu;
label_33d9dc:
    // 0x33d9dc: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33d9e0:
    // 0x33d9e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33d9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d9e4:
    // 0x33d9e4: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33d9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33d9e8:
    // 0x33d9e8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33d9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33d9ec:
    // 0x33d9ec: 0xc10ca68  jal         func_4329A0
label_33d9f0:
    if (ctx->pc == 0x33D9F0u) {
        ctx->pc = 0x33D9F0u;
            // 0x33d9f0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33D9F4u;
        goto label_33d9f4;
    }
    ctx->pc = 0x33D9ECu;
    SET_GPR_U32(ctx, 31, 0x33D9F4u);
    ctx->pc = 0x33D9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D9ECu;
            // 0x33d9f0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D9F4u; }
        if (ctx->pc != 0x33D9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D9F4u; }
        if (ctx->pc != 0x33D9F4u) { return; }
    }
    ctx->pc = 0x33D9F4u;
label_33d9f4:
    // 0x33d9f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33d9f8:
    // 0x33d9f8: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x33d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
label_33d9fc:
    // 0x33d9fc: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33da00:
    // 0x33da00: 0xc148880  jal         func_522200
label_33da04:
    if (ctx->pc == 0x33DA04u) {
        ctx->pc = 0x33DA04u;
            // 0x33da04: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33DA08u;
        goto label_33da08;
    }
    ctx->pc = 0x33DA00u;
    SET_GPR_U32(ctx, 31, 0x33DA08u);
    ctx->pc = 0x33DA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DA00u;
            // 0x33da04: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DA08u; }
        if (ctx->pc != 0x33DA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DA08u; }
        if (ctx->pc != 0x33DA08u) { return; }
    }
    ctx->pc = 0x33DA08u;
label_33da08:
    // 0x33da08: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33da08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33da0c:
    // 0x33da0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33da10:
    // 0x33da10: 0x24635580  addiu       $v1, $v1, 0x5580
    ctx->pc = 0x33da10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21888));
label_33da14:
    // 0x33da14: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x33da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
label_33da18:
    // 0x33da18: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x33da18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_33da1c:
    // 0x33da1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33da1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33da20:
    // 0x33da20: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x33da20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_33da24:
    // 0x33da24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33da24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33da28:
    // 0x33da28: 0x26220cc2  addiu       $v0, $s1, 0xCC2
    ctx->pc = 0x33da28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3266));
label_33da2c:
    // 0x33da2c: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x33da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_33da30:
    // 0x33da30: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x33da30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_33da34:
    // 0x33da34: 0xc156828  jal         func_55A0A0
label_33da38:
    if (ctx->pc == 0x33DA38u) {
        ctx->pc = 0x33DA38u;
            // 0x33da38: 0xae4000d0  sw          $zero, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33DA3Cu;
        goto label_33da3c;
    }
    ctx->pc = 0x33DA34u;
    SET_GPR_U32(ctx, 31, 0x33DA3Cu);
    ctx->pc = 0x33DA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DA34u;
            // 0x33da38: 0xae4000d0  sw          $zero, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55A0A0u;
    if (runtime->hasFunction(0x55A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x55A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DA3Cu; }
        if (ctx->pc != 0x33DA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055A0A0_0x55a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DA3Cu; }
        if (ctx->pc != 0x33DA3Cu) { return; }
    }
    ctx->pc = 0x33DA3Cu;
label_33da3c:
    // 0x33da3c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x33da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_33da40:
    // 0x33da40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33da40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33da44:
    // 0x33da44: 0xae220cb4  sw          $v0, 0xCB4($s1)
    ctx->pc = 0x33da44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3252), GPR_U32(ctx, 2));
label_33da48:
    // 0x33da48: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33da48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33da4c:
    // 0x33da4c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x33da4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_33da50:
    // 0x33da50: 0x320f809  jalr        $t9
label_33da54:
    if (ctx->pc == 0x33DA54u) {
        ctx->pc = 0x33DA54u;
            // 0x33da54: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x33DA58u;
        goto label_33da58;
    }
    ctx->pc = 0x33DA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33DA58u);
        ctx->pc = 0x33DA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DA50u;
            // 0x33da54: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33DA58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33DA58u; }
            if (ctx->pc != 0x33DA58u) { return; }
        }
        }
    }
    ctx->pc = 0x33DA58u;
label_33da58:
    // 0x33da58: 0x26041150  addiu       $a0, $s0, 0x1150
    ctx->pc = 0x33da58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
label_33da5c:
    // 0x33da5c: 0xc12ca3c  jal         func_4B28F0
label_33da60:
    if (ctx->pc == 0x33DA60u) {
        ctx->pc = 0x33DA60u;
            // 0x33da60: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x33DA64u;
        goto label_33da64;
    }
    ctx->pc = 0x33DA5Cu;
    SET_GPR_U32(ctx, 31, 0x33DA64u);
    ctx->pc = 0x33DA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DA5Cu;
            // 0x33da60: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DA64u; }
        if (ctx->pc != 0x33DA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DA64u; }
        if (ctx->pc != 0x33DA64u) { return; }
    }
    ctx->pc = 0x33DA64u;
label_33da64:
    // 0x33da64: 0x10000097  b           . + 4 + (0x97 << 2)
label_33da68:
    if (ctx->pc == 0x33DA68u) {
        ctx->pc = 0x33DA6Cu;
        goto label_33da6c;
    }
    ctx->pc = 0x33DA64u;
    {
        const bool branch_taken_0x33da64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33da64) {
            ctx->pc = 0x33DCC4u;
            goto label_33dcc4;
        }
    }
    ctx->pc = 0x33DA6Cu;
label_33da6c:
    // 0x33da6c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33da6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33da70:
    // 0x33da70: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x33da70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_33da74:
    // 0x33da74: 0x320f809  jalr        $t9
label_33da78:
    if (ctx->pc == 0x33DA78u) {
        ctx->pc = 0x33DA78u;
            // 0x33da78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33DA7Cu;
        goto label_33da7c;
    }
    ctx->pc = 0x33DA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33DA7Cu);
        ctx->pc = 0x33DA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DA74u;
            // 0x33da78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33DA7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33DA7Cu; }
            if (ctx->pc != 0x33DA7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x33DA7Cu;
label_33da7c:
    // 0x33da7c: 0x5040008f  beql        $v0, $zero, . + 4 + (0x8F << 2)
label_33da80:
    if (ctx->pc == 0x33DA80u) {
        ctx->pc = 0x33DA80u;
            // 0x33da80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33DA84u;
        goto label_33da84;
    }
    ctx->pc = 0x33DA7Cu;
    {
        const bool branch_taken_0x33da7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33da7c) {
            ctx->pc = 0x33DA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33DA7Cu;
            // 0x33da80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33DCBCu;
            goto label_33dcbc;
        }
    }
    ctx->pc = 0x33DA84u;
label_33da84:
    // 0x33da84: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x33da84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33da88:
    // 0x33da88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33da88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33da8c:
    // 0x33da8c: 0x8c52d130  lw          $s2, -0x2ED0($v0)
    ctx->pc = 0x33da8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_33da90:
    // 0x33da90: 0xa2230d10  sb          $v1, 0xD10($s1)
    ctx->pc = 0x33da90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3344), (uint8_t)GPR_U32(ctx, 3));
label_33da94:
    // 0x33da94: 0x8e250d00  lw          $a1, 0xD00($s1)
    ctx->pc = 0x33da94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3328)));
label_33da98:
    // 0x33da98: 0xc057b7c  jal         func_15EDF0
label_33da9c:
    if (ctx->pc == 0x33DA9Cu) {
        ctx->pc = 0x33DA9Cu;
            // 0x33da9c: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x33DAA0u;
        goto label_33daa0;
    }
    ctx->pc = 0x33DA98u;
    SET_GPR_U32(ctx, 31, 0x33DAA0u);
    ctx->pc = 0x33DA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DA98u;
            // 0x33da9c: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DAA0u; }
        if (ctx->pc != 0x33DAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DAA0u; }
        if (ctx->pc != 0x33DAA0u) { return; }
    }
    ctx->pc = 0x33DAA0u;
label_33daa0:
    // 0x33daa0: 0xae200d00  sw          $zero, 0xD00($s1)
    ctx->pc = 0x33daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3328), GPR_U32(ctx, 0));
label_33daa4:
    // 0x33daa4: 0x8e250d08  lw          $a1, 0xD08($s1)
    ctx->pc = 0x33daa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3336)));
label_33daa8:
    // 0x33daa8: 0xc057b7c  jal         func_15EDF0
label_33daac:
    if (ctx->pc == 0x33DAACu) {
        ctx->pc = 0x33DAACu;
            // 0x33daac: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x33DAB0u;
        goto label_33dab0;
    }
    ctx->pc = 0x33DAA8u;
    SET_GPR_U32(ctx, 31, 0x33DAB0u);
    ctx->pc = 0x33DAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DAA8u;
            // 0x33daac: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DAB0u; }
        if (ctx->pc != 0x33DAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DAB0u; }
        if (ctx->pc != 0x33DAB0u) { return; }
    }
    ctx->pc = 0x33DAB0u;
label_33dab0:
    // 0x33dab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33dab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33dab4:
    // 0x33dab4: 0xc0cc24c  jal         func_330930
label_33dab8:
    if (ctx->pc == 0x33DAB8u) {
        ctx->pc = 0x33DAB8u;
            // 0x33dab8: 0xae200d08  sw          $zero, 0xD08($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 0));
        ctx->pc = 0x33DABCu;
        goto label_33dabc;
    }
    ctx->pc = 0x33DAB4u;
    SET_GPR_U32(ctx, 31, 0x33DABCu);
    ctx->pc = 0x33DAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DAB4u;
            // 0x33dab8: 0xae200d08  sw          $zero, 0xD08($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x330930u;
    if (runtime->hasFunction(0x330930u)) {
        auto targetFn = runtime->lookupFunction(0x330930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DABCu; }
        if (ctx->pc != 0x33DABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330930_0x330930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DABCu; }
        if (ctx->pc != 0x33DABCu) { return; }
    }
    ctx->pc = 0x33DABCu;
label_33dabc:
    // 0x33dabc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x33dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_33dac0:
    // 0x33dac0: 0xae220cb4  sw          $v0, 0xCB4($s1)
    ctx->pc = 0x33dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3252), GPR_U32(ctx, 2));
label_33dac4:
    // 0x33dac4: 0x92220d3a  lbu         $v0, 0xD3A($s1)
    ctx->pc = 0x33dac4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3386)));
label_33dac8:
    // 0x33dac8: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_33dacc:
    if (ctx->pc == 0x33DACCu) {
        ctx->pc = 0x33DACCu;
            // 0x33dacc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33DAD0u;
        goto label_33dad0;
    }
    ctx->pc = 0x33DAC8u;
    {
        const bool branch_taken_0x33dac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dac8) {
            ctx->pc = 0x33DACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33DAC8u;
            // 0x33dacc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33DB90u;
            goto label_33db90;
        }
    }
    ctx->pc = 0x33DAD0u;
label_33dad0:
    // 0x33dad0: 0x92230ce4  lbu         $v1, 0xCE4($s1)
    ctx->pc = 0x33dad0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3300)));
label_33dad4:
    // 0x33dad4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x33dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33dad8:
    // 0x33dad8: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
label_33dadc:
    if (ctx->pc == 0x33DADCu) {
        ctx->pc = 0x33DADCu;
            // 0x33dadc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x33DAE0u;
        goto label_33dae0;
    }
    ctx->pc = 0x33DAD8u;
    {
        const bool branch_taken_0x33dad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33dad8) {
            ctx->pc = 0x33DADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33DAD8u;
            // 0x33dadc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33DB74u;
            goto label_33db74;
        }
    }
    ctx->pc = 0x33DAE0u;
label_33dae0:
    // 0x33dae0: 0xc6210844  lwc1        $f1, 0x844($s1)
    ctx->pc = 0x33dae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33dae4:
    // 0x33dae4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x33dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_33dae8:
    // 0x33dae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33dae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33daec:
    // 0x33daec: 0x0  nop
    ctx->pc = 0x33daecu;
    // NOP
label_33daf0:
    // 0x33daf0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33daf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33daf4:
    // 0x33daf4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_33daf8:
    if (ctx->pc == 0x33DAF8u) {
        ctx->pc = 0x33DAF8u;
            // 0x33daf8: 0x26240838  addiu       $a0, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->pc = 0x33DAFCu;
        goto label_33dafc;
    }
    ctx->pc = 0x33DAF4u;
    {
        const bool branch_taken_0x33daf4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33DAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DAF4u;
            // 0x33daf8: 0x26240838  addiu       $a0, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33daf4) {
            ctx->pc = 0x33DB0Cu;
            goto label_33db0c;
        }
    }
    ctx->pc = 0x33DAFCu;
label_33dafc:
    // 0x33dafc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33dafcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33db00:
    // 0x33db00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33db00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_33db04:
    // 0x33db04: 0x10000008  b           . + 4 + (0x8 << 2)
label_33db08:
    if (ctx->pc == 0x33DB08u) {
        ctx->pc = 0x33DB08u;
            // 0x33db08: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x33DB0Cu;
        goto label_33db0c;
    }
    ctx->pc = 0x33DB04u;
    {
        const bool branch_taken_0x33db04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DB04u;
            // 0x33db08: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db04) {
            ctx->pc = 0x33DB28u;
            goto label_33db28;
        }
    }
    ctx->pc = 0x33DB0Cu;
label_33db0c:
    // 0x33db0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33db0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_33db10:
    // 0x33db10: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33db10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_33db14:
    // 0x33db14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33db14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33db18:
    // 0x33db18: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33db18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_33db1c:
    // 0x33db1c: 0x0  nop
    ctx->pc = 0x33db1cu;
    // NOP
label_33db20:
    // 0x33db20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33db20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_33db24:
    // 0x33db24: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x33db24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33db28:
    // 0x33db28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33db28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33db2c:
    // 0x33db2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33db30:
    // 0x33db30: 0x23840  sll         $a3, $v0, 1
    ctx->pc = 0x33db30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_33db34:
    // 0x33db34: 0x8e230d40  lw          $v1, 0xD40($s1)
    ctx->pc = 0x33db34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
label_33db38:
    // 0x33db38: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x33db38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33db3c:
    // 0x33db3c: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x33db3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_33db40:
    // 0x33db40: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x33db40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_33db44:
    // 0x33db44: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x33db44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_33db48:
    // 0x33db48: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x33db48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_33db4c:
    // 0x33db4c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x33db4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33db50:
    // 0x33db50: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x33db50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_33db54:
    // 0x33db54: 0x8e220d3c  lw          $v0, 0xD3C($s1)
    ctx->pc = 0x33db54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
label_33db58:
    // 0x33db58: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x33db58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_33db5c:
    // 0x33db5c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x33db5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_33db60:
    // 0x33db60: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x33db60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_33db64:
    // 0x33db64: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x33db64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33db68:
    // 0x33db68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33db68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33db6c:
    // 0x33db6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_33db70:
    if (ctx->pc == 0x33DB70u) {
        ctx->pc = 0x33DB70u;
            // 0x33db70: 0xae220d3c  sw          $v0, 0xD3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 2));
        ctx->pc = 0x33DB74u;
        goto label_33db74;
    }
    ctx->pc = 0x33DB6Cu;
    {
        const bool branch_taken_0x33db6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DB6Cu;
            // 0x33db70: 0xae220d3c  sw          $v0, 0xD3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db6c) {
            ctx->pc = 0x33DB8Cu;
            goto label_33db8c;
        }
    }
    ctx->pc = 0x33DB74u;
label_33db74:
    // 0x33db74: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_33db78:
    if (ctx->pc == 0x33DB78u) {
        ctx->pc = 0x33DB7Cu;
        goto label_33db7c;
    }
    ctx->pc = 0x33DB74u;
    {
        const bool branch_taken_0x33db74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33db74) {
            ctx->pc = 0x33DB8Cu;
            goto label_33db8c;
        }
    }
    ctx->pc = 0x33DB7Cu;
label_33db7c:
    // 0x33db7c: 0xc6210d40  lwc1        $f1, 0xD40($s1)
    ctx->pc = 0x33db7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33db80:
    // 0x33db80: 0xc6200d3c  lwc1        $f0, 0xD3C($s1)
    ctx->pc = 0x33db80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33db84:
    // 0x33db84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33db84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_33db88:
    // 0x33db88: 0xe6200d3c  swc1        $f0, 0xD3C($s1)
    ctx->pc = 0x33db88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3388), bits); }
label_33db8c:
    // 0x33db8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33db8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33db90:
    // 0x33db90: 0xc0cfe90  jal         func_33FA40
label_33db94:
    if (ctx->pc == 0x33DB94u) {
        ctx->pc = 0x33DB94u;
            // 0x33db94: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33DB98u;
        goto label_33db98;
    }
    ctx->pc = 0x33DB90u;
    SET_GPR_U32(ctx, 31, 0x33DB98u);
    ctx->pc = 0x33DB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DB90u;
            // 0x33db94: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33FA40u;
    if (runtime->hasFunction(0x33FA40u)) {
        auto targetFn = runtime->lookupFunction(0x33FA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DB98u; }
        if (ctx->pc != 0x33DB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033FA40_0x33fa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DB98u; }
        if (ctx->pc != 0x33DB98u) { return; }
    }
    ctx->pc = 0x33DB98u;
label_33db98:
    // 0x33db98: 0xa2220cc1  sb          $v0, 0xCC1($s1)
    ctx->pc = 0x33db98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3265), (uint8_t)GPR_U32(ctx, 2));
label_33db9c:
    // 0x33db9c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33db9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33dba0:
    // 0x33dba0: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x33dba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_33dba4:
    // 0x33dba4: 0x320f809  jalr        $t9
label_33dba8:
    if (ctx->pc == 0x33DBA8u) {
        ctx->pc = 0x33DBA8u;
            // 0x33dba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33DBACu;
        goto label_33dbac;
    }
    ctx->pc = 0x33DBA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33DBACu);
        ctx->pc = 0x33DBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DBA4u;
            // 0x33dba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33DBACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33DBACu; }
            if (ctx->pc != 0x33DBACu) { return; }
        }
        }
    }
    ctx->pc = 0x33DBACu;
label_33dbac:
    // 0x33dbac: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
label_33dbb0:
    if (ctx->pc == 0x33DBB0u) {
        ctx->pc = 0x33DBB0u;
            // 0x33dbb0: 0x26041150  addiu       $a0, $s0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
        ctx->pc = 0x33DBB4u;
        goto label_33dbb4;
    }
    ctx->pc = 0x33DBACu;
    {
        const bool branch_taken_0x33dbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33dbac) {
            ctx->pc = 0x33DBB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33DBACu;
            // 0x33dbb0: 0x26041150  addiu       $a0, $s0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33DC7Cu;
            goto label_33dc7c;
        }
    }
    ctx->pc = 0x33DBB4u;
label_33dbb4:
    // 0x33dbb4: 0x26041150  addiu       $a0, $s0, 0x1150
    ctx->pc = 0x33dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
label_33dbb8:
    // 0x33dbb8: 0xc12ca3c  jal         func_4B28F0
label_33dbbc:
    if (ctx->pc == 0x33DBBCu) {
        ctx->pc = 0x33DBBCu;
            // 0x33dbbc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x33DBC0u;
        goto label_33dbc0;
    }
    ctx->pc = 0x33DBB8u;
    SET_GPR_U32(ctx, 31, 0x33DBC0u);
    ctx->pc = 0x33DBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DBB8u;
            // 0x33dbbc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DBC0u; }
        if (ctx->pc != 0x33DBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DBC0u; }
        if (ctx->pc != 0x33DBC0u) { return; }
    }
    ctx->pc = 0x33DBC0u;
label_33dbc0:
    // 0x33dbc0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33dbc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33dbc4:
    // 0x33dbc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33dbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33dbc8:
    // 0x33dbc8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x33dbc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_33dbcc:
    // 0x33dbcc: 0x320f809  jalr        $t9
label_33dbd0:
    if (ctx->pc == 0x33DBD0u) {
        ctx->pc = 0x33DBD0u;
            // 0x33dbd0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x33DBD4u;
        goto label_33dbd4;
    }
    ctx->pc = 0x33DBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33DBD4u);
        ctx->pc = 0x33DBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DBCCu;
            // 0x33dbd0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33DBD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33DBD4u; }
            if (ctx->pc != 0x33DBD4u) { return; }
        }
        }
    }
    ctx->pc = 0x33DBD4u;
label_33dbd4:
    // 0x33dbd4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33dbd8:
    // 0x33dbd8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x33dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_33dbdc:
    // 0x33dbdc: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x33dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_33dbe0:
    // 0x33dbe0: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x33dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_33dbe4:
    // 0x33dbe4: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_33dbe8:
    if (ctx->pc == 0x33DBE8u) {
        ctx->pc = 0x33DBE8u;
            // 0x33dbe8: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->pc = 0x33DBECu;
        goto label_33dbec;
    }
    ctx->pc = 0x33DBE4u;
    {
        const bool branch_taken_0x33dbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33dbe4) {
            ctx->pc = 0x33DBE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33DBE4u;
            // 0x33dbe8: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33DC04u;
            goto label_33dc04;
        }
    }
    ctx->pc = 0x33DBECu;
label_33dbec:
    // 0x33dbec: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33dbecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33dbf0:
    // 0x33dbf0: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x33dbf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_33dbf4:
    // 0x33dbf4: 0x320f809  jalr        $t9
label_33dbf8:
    if (ctx->pc == 0x33DBF8u) {
        ctx->pc = 0x33DBF8u;
            // 0x33dbf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33DBFCu;
        goto label_33dbfc;
    }
    ctx->pc = 0x33DBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33DBFCu);
        ctx->pc = 0x33DBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DBF4u;
            // 0x33dbf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33DBFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33DBFCu; }
            if (ctx->pc != 0x33DBFCu) { return; }
        }
        }
    }
    ctx->pc = 0x33DBFCu;
label_33dbfc:
    // 0x33dbfc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_33dc00:
    if (ctx->pc == 0x33DC00u) {
        ctx->pc = 0x33DC04u;
        goto label_33dc04;
    }
    ctx->pc = 0x33DBFCu;
    {
        const bool branch_taken_0x33dbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dbfc) {
            ctx->pc = 0x33DCB8u;
            goto label_33dcb8;
        }
    }
    ctx->pc = 0x33DC04u;
label_33dc04:
    // 0x33dc04: 0xc040180  jal         func_100600
label_33dc08:
    if (ctx->pc == 0x33DC08u) {
        ctx->pc = 0x33DC08u;
            // 0x33dc08: 0xa2200cc2  sb          $zero, 0xCC2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3266), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33DC0Cu;
        goto label_33dc0c;
    }
    ctx->pc = 0x33DC04u;
    SET_GPR_U32(ctx, 31, 0x33DC0Cu);
    ctx->pc = 0x33DC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DC04u;
            // 0x33dc08: 0xa2200cc2  sb          $zero, 0xCC2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3266), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DC0Cu; }
        if (ctx->pc != 0x33DC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DC0Cu; }
        if (ctx->pc != 0x33DC0Cu) { return; }
    }
    ctx->pc = 0x33DC0Cu;
label_33dc0c:
    // 0x33dc0c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_33dc10:
    if (ctx->pc == 0x33DC10u) {
        ctx->pc = 0x33DC10u;
            // 0x33dc10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33DC14u;
        goto label_33dc14;
    }
    ctx->pc = 0x33DC0Cu;
    {
        const bool branch_taken_0x33dc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DC0Cu;
            // 0x33dc10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dc0c) {
            ctx->pc = 0x33DCB8u;
            goto label_33dcb8;
        }
    }
    ctx->pc = 0x33DC14u;
label_33dc14:
    // 0x33dc14: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33dc18:
    // 0x33dc18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33dc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33dc1c:
    // 0x33dc1c: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33dc1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33dc20:
    // 0x33dc20: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33dc20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33dc24:
    // 0x33dc24: 0xc10ca68  jal         func_4329A0
label_33dc28:
    if (ctx->pc == 0x33DC28u) {
        ctx->pc = 0x33DC28u;
            // 0x33dc28: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33DC2Cu;
        goto label_33dc2c;
    }
    ctx->pc = 0x33DC24u;
    SET_GPR_U32(ctx, 31, 0x33DC2Cu);
    ctx->pc = 0x33DC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DC24u;
            // 0x33dc28: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DC2Cu; }
        if (ctx->pc != 0x33DC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DC2Cu; }
        if (ctx->pc != 0x33DC2Cu) { return; }
    }
    ctx->pc = 0x33DC2Cu;
label_33dc2c:
    // 0x33dc2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33dc30:
    // 0x33dc30: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x33dc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_33dc34:
    // 0x33dc34: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33dc38:
    // 0x33dc38: 0xc148880  jal         func_522200
label_33dc3c:
    if (ctx->pc == 0x33DC3Cu) {
        ctx->pc = 0x33DC3Cu;
            // 0x33dc3c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33DC40u;
        goto label_33dc40;
    }
    ctx->pc = 0x33DC38u;
    SET_GPR_U32(ctx, 31, 0x33DC40u);
    ctx->pc = 0x33DC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DC38u;
            // 0x33dc3c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DC40u; }
        if (ctx->pc != 0x33DC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DC40u; }
        if (ctx->pc != 0x33DC40u) { return; }
    }
    ctx->pc = 0x33DC40u;
label_33dc40:
    // 0x33dc40: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33dc44:
    // 0x33dc44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33dc48:
    // 0x33dc48: 0x24635580  addiu       $v1, $v1, 0x5580
    ctx->pc = 0x33dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21888));
label_33dc4c:
    // 0x33dc4c: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x33dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
label_33dc50:
    // 0x33dc50: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_33dc54:
    // 0x33dc54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33dc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33dc58:
    // 0x33dc58: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x33dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_33dc5c:
    // 0x33dc5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33dc60:
    // 0x33dc60: 0x26220cc2  addiu       $v0, $s1, 0xCC2
    ctx->pc = 0x33dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3266));
label_33dc64:
    // 0x33dc64: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x33dc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
label_33dc68:
    // 0x33dc68: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x33dc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_33dc6c:
    // 0x33dc6c: 0xc156828  jal         func_55A0A0
label_33dc70:
    if (ctx->pc == 0x33DC70u) {
        ctx->pc = 0x33DC70u;
            // 0x33dc70: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33DC74u;
        goto label_33dc74;
    }
    ctx->pc = 0x33DC6Cu;
    SET_GPR_U32(ctx, 31, 0x33DC74u);
    ctx->pc = 0x33DC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DC6Cu;
            // 0x33dc70: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55A0A0u;
    if (runtime->hasFunction(0x55A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x55A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DC74u; }
        if (ctx->pc != 0x33DC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055A0A0_0x55a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DC74u; }
        if (ctx->pc != 0x33DC74u) { return; }
    }
    ctx->pc = 0x33DC74u;
label_33dc74:
    // 0x33dc74: 0x10000010  b           . + 4 + (0x10 << 2)
label_33dc78:
    if (ctx->pc == 0x33DC78u) {
        ctx->pc = 0x33DC7Cu;
        goto label_33dc7c;
    }
    ctx->pc = 0x33DC74u;
    {
        const bool branch_taken_0x33dc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dc74) {
            ctx->pc = 0x33DCB8u;
            goto label_33dcb8;
        }
    }
    ctx->pc = 0x33DC7Cu;
label_33dc7c:
    // 0x33dc7c: 0xc12ca3c  jal         func_4B28F0
label_33dc80:
    if (ctx->pc == 0x33DC80u) {
        ctx->pc = 0x33DC80u;
            // 0x33dc80: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x33DC84u;
        goto label_33dc84;
    }
    ctx->pc = 0x33DC7Cu;
    SET_GPR_U32(ctx, 31, 0x33DC84u);
    ctx->pc = 0x33DC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DC7Cu;
            // 0x33dc80: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DC84u; }
        if (ctx->pc != 0x33DC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DC84u; }
        if (ctx->pc != 0x33DC84u) { return; }
    }
    ctx->pc = 0x33DC84u;
label_33dc84:
    // 0x33dc84: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33dc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33dc88:
    // 0x33dc88: 0x8f3900c0  lw          $t9, 0xC0($t9)
    ctx->pc = 0x33dc88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 192)));
label_33dc8c:
    // 0x33dc8c: 0x320f809  jalr        $t9
label_33dc90:
    if (ctx->pc == 0x33DC90u) {
        ctx->pc = 0x33DC90u;
            // 0x33dc90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33DC94u;
        goto label_33dc94;
    }
    ctx->pc = 0x33DC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33DC94u);
        ctx->pc = 0x33DC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DC8Cu;
            // 0x33dc90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33DC94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33DC94u; }
            if (ctx->pc != 0x33DC94u) { return; }
        }
        }
    }
    ctx->pc = 0x33DC94u;
label_33dc94:
    // 0x33dc94: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33dc94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33dc98:
    // 0x33dc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33dc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33dc9c:
    // 0x33dc9c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x33dc9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_33dca0:
    // 0x33dca0: 0x320f809  jalr        $t9
label_33dca4:
    if (ctx->pc == 0x33DCA4u) {
        ctx->pc = 0x33DCA4u;
            // 0x33dca4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x33DCA8u;
        goto label_33dca8;
    }
    ctx->pc = 0x33DCA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33DCA8u);
        ctx->pc = 0x33DCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DCA0u;
            // 0x33dca4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33DCA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33DCA8u; }
            if (ctx->pc != 0x33DCA8u) { return; }
        }
        }
    }
    ctx->pc = 0x33DCA8u;
label_33dca8:
    // 0x33dca8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33dca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33dcac:
    // 0x33dcac: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x33dcacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_33dcb0:
    // 0x33dcb0: 0x320f809  jalr        $t9
label_33dcb4:
    if (ctx->pc == 0x33DCB4u) {
        ctx->pc = 0x33DCB4u;
            // 0x33dcb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33DCB8u;
        goto label_33dcb8;
    }
    ctx->pc = 0x33DCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33DCB8u);
        ctx->pc = 0x33DCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DCB0u;
            // 0x33dcb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33DCB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33DCB8u; }
            if (ctx->pc != 0x33DCB8u) { return; }
        }
        }
    }
    ctx->pc = 0x33DCB8u;
label_33dcb8:
    // 0x33dcb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33dcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33dcbc:
    // 0x33dcbc: 0xc0cb814  jal         func_32E050
label_33dcc0:
    if (ctx->pc == 0x33DCC0u) {
        ctx->pc = 0x33DCC4u;
        goto label_33dcc4;
    }
    ctx->pc = 0x33DCBCu;
    SET_GPR_U32(ctx, 31, 0x33DCC4u);
    ctx->pc = 0x32E050u;
    if (runtime->hasFunction(0x32E050u)) {
        auto targetFn = runtime->lookupFunction(0x32E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DCC4u; }
        if (ctx->pc != 0x33DCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032E050_0x32e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DCC4u; }
        if (ctx->pc != 0x33DCC4u) { return; }
    }
    ctx->pc = 0x33DCC4u;
label_33dcc4:
    // 0x33dcc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33dcc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_33dcc8:
    // 0x33dcc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33dcc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33dccc:
    // 0x33dccc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33dcccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33dcd0:
    // 0x33dcd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33dcd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33dcd4:
    // 0x33dcd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33dcd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33dcd8:
    // 0x33dcd8: 0x3e00008  jr          $ra
label_33dcdc:
    if (ctx->pc == 0x33DCDCu) {
        ctx->pc = 0x33DCDCu;
            // 0x33dcdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x33DCE0u;
        goto label_33dce0;
    }
    ctx->pc = 0x33DCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DCD8u;
            // 0x33dcdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33DCE0u;
label_33dce0:
    // 0x33dce0: 0x8c83077c  lw          $v1, 0x77C($a0)
    ctx->pc = 0x33dce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
label_33dce4:
    // 0x33dce4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x33dce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33dce8:
    // 0x33dce8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x33dce8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_33dcec:
    // 0x33dcec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_33dcf0:
    if (ctx->pc == 0x33DCF0u) {
        ctx->pc = 0x33DCF0u;
            // 0x33dcf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33DCF4u;
        goto label_33dcf4;
    }
    ctx->pc = 0x33DCECu;
    {
        const bool branch_taken_0x33dcec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DCECu;
            // 0x33dcf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dcec) {
            ctx->pc = 0x33DCFCu;
            goto label_33dcfc;
        }
    }
    ctx->pc = 0x33DCF4u;
label_33dcf4:
    // 0x33dcf4: 0x10000011  b           . + 4 + (0x11 << 2)
label_33dcf8:
    if (ctx->pc == 0x33DCF8u) {
        ctx->pc = 0x33DCF8u;
            // 0x33dcf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33DCFCu;
        goto label_33dcfc;
    }
    ctx->pc = 0x33DCF4u;
    {
        const bool branch_taken_0x33dcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DCF4u;
            // 0x33dcf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dcf4) {
            ctx->pc = 0x33DD3Cu;
            goto label_33dd3c;
        }
    }
    ctx->pc = 0x33DCFCu;
label_33dcfc:
    // 0x33dcfc: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x33dcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_33dd00:
    // 0x33dd00: 0x24a50e84  addiu       $a1, $a1, 0xE84
    ctx->pc = 0x33dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3716));
label_33dd04:
    // 0x33dd04: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x33dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_33dd08:
    // 0x33dd08: 0x8c420da0  lw          $v0, 0xDA0($v0)
    ctx->pc = 0x33dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
label_33dd0c:
    // 0x33dd0c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x33dd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_33dd10:
    // 0x33dd10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33dd14:
    if (ctx->pc == 0x33DD14u) {
        ctx->pc = 0x33DD18u;
        goto label_33dd18;
    }
    ctx->pc = 0x33DD10u;
    {
        const bool branch_taken_0x33dd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dd10) {
            ctx->pc = 0x33DD20u;
            goto label_33dd20;
        }
    }
    ctx->pc = 0x33DD18u;
label_33dd18:
    // 0x33dd18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x33dd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_33dd1c:
    // 0x33dd1c: 0x0  nop
    ctx->pc = 0x33dd1cu;
    // NOP
label_33dd20:
    // 0x33dd20: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x33dd20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_33dd24:
    // 0x33dd24: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x33dd24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_33dd28:
    // 0x33dd28: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_33dd2c:
    if (ctx->pc == 0x33DD2Cu) {
        ctx->pc = 0x33DD2Cu;
            // 0x33dd2c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x33DD30u;
        goto label_33dd30;
    }
    ctx->pc = 0x33DD28u;
    {
        const bool branch_taken_0x33dd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DD28u;
            // 0x33dd2c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dd28) {
            ctx->pc = 0x33DD04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33dd04;
        }
    }
    ctx->pc = 0x33DD30u;
label_33dd30:
    // 0x33dd30: 0x8c820784  lw          $v0, 0x784($a0)
    ctx->pc = 0x33dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1924)));
label_33dd34:
    // 0x33dd34: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x33dd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
label_33dd38:
    // 0x33dd38: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x33dd38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_33dd3c:
    // 0x33dd3c: 0x3e00008  jr          $ra
label_33dd40:
    if (ctx->pc == 0x33DD40u) {
        ctx->pc = 0x33DD44u;
        goto label_33dd44;
    }
    ctx->pc = 0x33DD3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33DD44u;
label_33dd44:
    // 0x33dd44: 0x0  nop
    ctx->pc = 0x33dd44u;
    // NOP
label_33dd48:
    // 0x33dd48: 0x0  nop
    ctx->pc = 0x33dd48u;
    // NOP
label_33dd4c:
    // 0x33dd4c: 0x0  nop
    ctx->pc = 0x33dd4cu;
    // NOP
label_33dd50:
    // 0x33dd50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x33dd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_33dd54:
    // 0x33dd54: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_33dd58:
    // 0x33dd58: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x33dd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_33dd5c:
    // 0x33dd5c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x33dd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_33dd60:
    // 0x33dd60: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x33dd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_33dd64:
    // 0x33dd64: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x33dd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_33dd68:
    // 0x33dd68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x33dd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_33dd6c:
    // 0x33dd6c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x33dd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_33dd70:
    // 0x33dd70: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x33dd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_33dd74:
    // 0x33dd74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x33dd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_33dd78:
    // 0x33dd78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33dd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_33dd7c:
    // 0x33dd7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33dd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_33dd80:
    // 0x33dd80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33dd80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33dd84:
    // 0x33dd84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x33dd84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_33dd88:
    // 0x33dd88: 0x90850ce4  lbu         $a1, 0xCE4($a0)
    ctx->pc = 0x33dd88u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3300)));
label_33dd8c:
    // 0x33dd8c: 0x8c700e84  lw          $s0, 0xE84($v1)
    ctx->pc = 0x33dd8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3716)));
label_33dd90:
    // 0x33dd90: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x33dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_33dd94:
    // 0x33dd94: 0x8c940eac  lw          $s4, 0xEAC($a0)
    ctx->pc = 0x33dd94u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3756)));
label_33dd98:
    // 0x33dd98: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x33dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_33dd9c:
    // 0x33dd9c: 0x24a4fffd  addiu       $a0, $a1, -0x3
    ctx->pc = 0x33dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
label_33dda0:
    // 0x33dda0: 0x2c810011  sltiu       $at, $a0, 0x11
    ctx->pc = 0x33dda0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_33dda4:
    // 0x33dda4: 0x1020042c  beqz        $at, . + 4 + (0x42C << 2)
label_33dda8:
    if (ctx->pc == 0x33DDA8u) {
        ctx->pc = 0x33DDA8u;
            // 0x33dda8: 0x8c63d130  lw          $v1, -0x2ED0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
        ctx->pc = 0x33DDACu;
        goto label_33ddac;
    }
    ctx->pc = 0x33DDA4u;
    {
        const bool branch_taken_0x33dda4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DDA4u;
            // 0x33dda8: 0x8c63d130  lw          $v1, -0x2ED0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dda4) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33DDACu;
label_33ddac:
    // 0x33ddac: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x33ddacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_33ddb0:
    // 0x33ddb0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_33ddb4:
    // 0x33ddb4: 0x24a5ffc0  addiu       $a1, $a1, -0x40
    ctx->pc = 0x33ddb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
label_33ddb8:
    // 0x33ddb8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33ddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_33ddbc:
    // 0x33ddbc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x33ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33ddc0:
    // 0x33ddc0: 0x800008  jr          $a0
label_33ddc4:
    if (ctx->pc == 0x33DDC4u) {
        ctx->pc = 0x33DDC8u;
        goto label_33ddc8;
    }
    ctx->pc = 0x33DDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33DDC8u: goto label_33ddc8;
            case 0x33DEFCu: goto label_33defc;
            case 0x33E0ECu: goto label_33e0ec;
            case 0x33E548u: goto label_33e548;
            case 0x33E81Cu: goto label_33e81c;
            case 0x33E928u: goto label_33e928;
            case 0x33E9F4u: goto label_33e9f4;
            case 0x33EC94u: goto label_33ec94;
            case 0x33ED7Cu: goto label_33ed7c;
            case 0x33EE1Cu: goto label_33ee1c;
            case 0x33EE58u: goto label_33ee58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x33DDC8u;
label_33ddc8:
    // 0x33ddc8: 0x8e040db4  lw          $a0, 0xDB4($s0)
    ctx->pc = 0x33ddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3508)));
label_33ddcc:
    // 0x33ddcc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x33ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_33ddd0:
    // 0x33ddd0: 0x54830421  bnel        $a0, $v1, . + 4 + (0x421 << 2)
label_33ddd4:
    if (ctx->pc == 0x33DDD4u) {
        ctx->pc = 0x33DDD4u;
            // 0x33ddd4: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33DDD8u;
        goto label_33ddd8;
    }
    ctx->pc = 0x33DDD0u;
    {
        const bool branch_taken_0x33ddd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33ddd0) {
            ctx->pc = 0x33DDD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33DDD0u;
            // 0x33ddd4: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33DDD8u;
label_33ddd8:
    // 0x33ddd8: 0x8e0409d4  lw          $a0, 0x9D4($s0)
    ctx->pc = 0x33ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2516)));
label_33dddc:
    // 0x33dddc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x33dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33dde0:
    // 0x33dde0: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
label_33dde4:
    if (ctx->pc == 0x33DDE4u) {
        ctx->pc = 0x33DDE8u;
        goto label_33dde8;
    }
    ctx->pc = 0x33DDE0u;
    {
        const bool branch_taken_0x33dde0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33dde0) {
            ctx->pc = 0x33DEF0u;
            goto label_33def0;
        }
    }
    ctx->pc = 0x33DDE8u;
label_33dde8:
    // 0x33dde8: 0x92230d3a  lbu         $v1, 0xD3A($s1)
    ctx->pc = 0x33dde8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3386)));
label_33ddec:
    // 0x33ddec: 0x1460041a  bnez        $v1, . + 4 + (0x41A << 2)
label_33ddf0:
    if (ctx->pc == 0x33DDF0u) {
        ctx->pc = 0x33DDF4u;
        goto label_33ddf4;
    }
    ctx->pc = 0x33DDECu;
    {
        const bool branch_taken_0x33ddec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ddec) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33DDF4u;
label_33ddf4:
    // 0x33ddf4: 0x820309e0  lb          $v1, 0x9E0($s0)
    ctx->pc = 0x33ddf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2528)));
label_33ddf8:
    // 0x33ddf8: 0x462003b  bltzl       $v1, . + 4 + (0x3B << 2)
label_33ddfc:
    if (ctx->pc == 0x33DDFCu) {
        ctx->pc = 0x33DDFCu;
            // 0x33ddfc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33DE00u;
        goto label_33de00;
    }
    ctx->pc = 0x33DDF8u;
    {
        const bool branch_taken_0x33ddf8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x33ddf8) {
            ctx->pc = 0x33DDFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33DDF8u;
            // 0x33ddfc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33DEE8u;
            goto label_33dee8;
        }
    }
    ctx->pc = 0x33DE00u;
label_33de00:
    // 0x33de00: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x33de00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_33de04:
    // 0x33de04: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x33de04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33de08:
    // 0x33de08: 0x2484feb0  addiu       $a0, $a0, -0x150
    ctx->pc = 0x33de08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966960));
label_33de0c:
    // 0x33de0c: 0x8e870080  lw          $a3, 0x80($s4)
    ctx->pc = 0x33de0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_33de10:
    // 0x33de10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33de10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_33de14:
    // 0x33de14: 0x8e86008c  lw          $a2, 0x8C($s4)
    ctx->pc = 0x33de14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_33de18:
    // 0x33de18: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x33de18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33de1c:
    // 0x33de1c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x33de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_33de20:
    // 0x33de20: 0x8e220d3c  lw          $v0, 0xD3C($s1)
    ctx->pc = 0x33de20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
label_33de24:
    // 0x33de24: 0x24f3ff54  addiu       $s3, $a3, -0xAC
    ctx->pc = 0x33de24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967124));
label_33de28:
    // 0x33de28: 0x24d20064  addiu       $s2, $a2, 0x64
    ctx->pc = 0x33de28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
label_33de2c:
    // 0x33de2c: 0x240400e4  addiu       $a0, $zero, 0xE4
    ctx->pc = 0x33de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_33de30:
    // 0x33de30: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x33de30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_33de34:
    // 0x33de34: 0xae220d3c  sw          $v0, 0xD3C($s1)
    ctx->pc = 0x33de34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 2));
label_33de38:
    // 0x33de38: 0x80620d33  lb          $v0, 0xD33($v1)
    ctx->pc = 0x33de38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3379)));
label_33de3c:
    // 0x33de3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33de40:
    // 0x33de40: 0xc040180  jal         func_100600
label_33de44:
    if (ctx->pc == 0x33DE44u) {
        ctx->pc = 0x33DE44u;
            // 0x33de44: 0xa0620d33  sb          $v0, 0xD33($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3379), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x33DE48u;
        goto label_33de48;
    }
    ctx->pc = 0x33DE40u;
    SET_GPR_U32(ctx, 31, 0x33DE48u);
    ctx->pc = 0x33DE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DE40u;
            // 0x33de44: 0xa0620d33  sb          $v0, 0xD33($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3379), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DE48u; }
        if (ctx->pc != 0x33DE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DE48u; }
        if (ctx->pc != 0x33DE48u) { return; }
    }
    ctx->pc = 0x33DE48u;
label_33de48:
    // 0x33de48: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_33de4c:
    if (ctx->pc == 0x33DE4Cu) {
        ctx->pc = 0x33DE4Cu;
            // 0x33de4c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33DE50u;
        goto label_33de50;
    }
    ctx->pc = 0x33DE48u;
    {
        const bool branch_taken_0x33de48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DE48u;
            // 0x33de4c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33de48) {
            ctx->pc = 0x33DED8u;
            goto label_33ded8;
        }
    }
    ctx->pc = 0x33DE50u;
label_33de50:
    // 0x33de50: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33de50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33de54:
    // 0x33de54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33de54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33de58:
    // 0x33de58: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33de58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33de5c:
    // 0x33de5c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33de5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33de60:
    // 0x33de60: 0xc10ca68  jal         func_4329A0
label_33de64:
    if (ctx->pc == 0x33DE64u) {
        ctx->pc = 0x33DE64u;
            // 0x33de64: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33DE68u;
        goto label_33de68;
    }
    ctx->pc = 0x33DE60u;
    SET_GPR_U32(ctx, 31, 0x33DE68u);
    ctx->pc = 0x33DE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DE60u;
            // 0x33de64: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DE68u; }
        if (ctx->pc != 0x33DE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DE68u; }
        if (ctx->pc != 0x33DE68u) { return; }
    }
    ctx->pc = 0x33DE68u;
label_33de68:
    // 0x33de68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33de68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33de6c:
    // 0x33de6c: 0x26840054  addiu       $a0, $s4, 0x54
    ctx->pc = 0x33de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
label_33de70:
    // 0x33de70: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33de70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33de74:
    // 0x33de74: 0xc148880  jal         func_522200
label_33de78:
    if (ctx->pc == 0x33DE78u) {
        ctx->pc = 0x33DE78u;
            // 0x33de78: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33DE7Cu;
        goto label_33de7c;
    }
    ctx->pc = 0x33DE74u;
    SET_GPR_U32(ctx, 31, 0x33DE7Cu);
    ctx->pc = 0x33DE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DE74u;
            // 0x33de78: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DE7Cu; }
        if (ctx->pc != 0x33DE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DE7Cu; }
        if (ctx->pc != 0x33DE7Cu) { return; }
    }
    ctx->pc = 0x33DE7Cu;
label_33de7c:
    // 0x33de7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33de80:
    // 0x33de80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33de80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33de84:
    // 0x33de84: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x33de84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
label_33de88:
    // 0x33de88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33de88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33de8c:
    // 0x33de8c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x33de8cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33de90:
    // 0x33de90: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x33de90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_33de94:
    // 0x33de94: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33de94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33de98:
    // 0x33de98: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x33de98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_33de9c:
    // 0x33de9c: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x33de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_33dea0:
    // 0x33dea0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33dea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33dea4:
    // 0x33dea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33dea8:
    // 0x33dea8: 0xae830098  sw          $v1, 0x98($s4)
    ctx->pc = 0x33dea8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 3));
label_33deac:
    // 0x33deac: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x33deacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
label_33deb0:
    // 0x33deb0: 0xae9000a0  sw          $s0, 0xA0($s4)
    ctx->pc = 0x33deb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 16));
label_33deb4:
    // 0x33deb4: 0xe68000c0  swc1        $f0, 0xC0($s4)
    ctx->pc = 0x33deb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 192), bits); }
label_33deb8:
    // 0x33deb8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x33deb8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33debc:
    // 0x33debc: 0x0  nop
    ctx->pc = 0x33debcu;
    // NOP
label_33dec0:
    // 0x33dec0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33dec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33dec4:
    // 0x33dec4: 0xe68000c4  swc1        $f0, 0xC4($s4)
    ctx->pc = 0x33dec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 196), bits); }
label_33dec8:
    // 0x33dec8: 0xae8000c8  sw          $zero, 0xC8($s4)
    ctx->pc = 0x33dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 200), GPR_U32(ctx, 0));
label_33decc:
    // 0x33decc: 0xae8000cc  sw          $zero, 0xCC($s4)
    ctx->pc = 0x33deccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 204), GPR_U32(ctx, 0));
label_33ded0:
    // 0x33ded0: 0xc0e030c  jal         func_380C30
label_33ded4:
    if (ctx->pc == 0x33DED4u) {
        ctx->pc = 0x33DED4u;
            // 0x33ded4: 0xae8000d0  sw          $zero, 0xD0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33DED8u;
        goto label_33ded8;
    }
    ctx->pc = 0x33DED0u;
    SET_GPR_U32(ctx, 31, 0x33DED8u);
    ctx->pc = 0x33DED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DED0u;
            // 0x33ded4: 0xae8000d0  sw          $zero, 0xD0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380C30u;
    if (runtime->hasFunction(0x380C30u)) {
        auto targetFn = runtime->lookupFunction(0x380C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DED8u; }
        if (ctx->pc != 0x33DED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380C30_0x380c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DED8u; }
        if (ctx->pc != 0x33DED8u) { return; }
    }
    ctx->pc = 0x33DED8u;
label_33ded8:
    // 0x33ded8: 0x8e240d04  lw          $a0, 0xD04($s1)
    ctx->pc = 0x33ded8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3332)));
label_33dedc:
    // 0x33dedc: 0xc0e02dc  jal         func_380B70
label_33dee0:
    if (ctx->pc == 0x33DEE0u) {
        ctx->pc = 0x33DEE0u;
            // 0x33dee0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x33DEE4u;
        goto label_33dee4;
    }
    ctx->pc = 0x33DEDCu;
    SET_GPR_U32(ctx, 31, 0x33DEE4u);
    ctx->pc = 0x33DEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DEDCu;
            // 0x33dee0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380B70u;
    if (runtime->hasFunction(0x380B70u)) {
        auto targetFn = runtime->lookupFunction(0x380B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DEE4u; }
        if (ctx->pc != 0x33DEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380B70_0x380b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DEE4u; }
        if (ctx->pc != 0x33DEE4u) { return; }
    }
    ctx->pc = 0x33DEE4u;
label_33dee4:
    // 0x33dee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33dee8:
    // 0x33dee8: 0x100003db  b           . + 4 + (0x3DB << 2)
label_33deec:
    if (ctx->pc == 0x33DEECu) {
        ctx->pc = 0x33DEECu;
            // 0x33deec: 0xa2230d3a  sb          $v1, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x33DEF0u;
        goto label_33def0;
    }
    ctx->pc = 0x33DEE8u;
    {
        const bool branch_taken_0x33dee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DEE8u;
            // 0x33deec: 0xa2230d3a  sb          $v1, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dee8) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33DEF0u;
label_33def0:
    // 0x33def0: 0xa2200d3a  sb          $zero, 0xD3A($s1)
    ctx->pc = 0x33def0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
label_33def4:
    // 0x33def4: 0x100003d8  b           . + 4 + (0x3D8 << 2)
label_33def8:
    if (ctx->pc == 0x33DEF8u) {
        ctx->pc = 0x33DEFCu;
        goto label_33defc;
    }
    ctx->pc = 0x33DEF4u;
    {
        const bool branch_taken_0x33def4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33def4) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33DEFCu;
label_33defc:
    // 0x33defc: 0x8e040e10  lw          $a0, 0xE10($s0)
    ctx->pc = 0x33defcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3600)));
label_33df00:
    // 0x33df00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33df00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33df04:
    // 0x33df04: 0x5083003e  beql        $a0, $v1, . + 4 + (0x3E << 2)
label_33df08:
    if (ctx->pc == 0x33DF08u) {
        ctx->pc = 0x33DF08u;
            // 0x33df08: 0x8e050e0c  lw          $a1, 0xE0C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3596)));
        ctx->pc = 0x33DF0Cu;
        goto label_33df0c;
    }
    ctx->pc = 0x33DF04u;
    {
        const bool branch_taken_0x33df04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33df04) {
            ctx->pc = 0x33DF08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33DF04u;
            // 0x33df08: 0x8e050e0c  lw          $a1, 0xE0C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E000u;
            goto label_33e000;
        }
    }
    ctx->pc = 0x33DF0Cu;
label_33df0c:
    // 0x33df0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33df10:
    // 0x33df10: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
label_33df14:
    if (ctx->pc == 0x33DF14u) {
        ctx->pc = 0x33DF18u;
        goto label_33df18;
    }
    ctx->pc = 0x33DF10u;
    {
        const bool branch_taken_0x33df10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33df10) {
            ctx->pc = 0x33DFFCu;
            goto label_33dffc;
        }
    }
    ctx->pc = 0x33DF18u;
label_33df18:
    // 0x33df18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33df18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33df1c:
    // 0x33df1c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_33df20:
    if (ctx->pc == 0x33DF20u) {
        ctx->pc = 0x33DF20u;
            // 0x33df20: 0x8e050e0c  lw          $a1, 0xE0C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3596)));
        ctx->pc = 0x33DF24u;
        goto label_33df24;
    }
    ctx->pc = 0x33DF1Cu;
    {
        const bool branch_taken_0x33df1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33df1c) {
            ctx->pc = 0x33DF20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33DF1Cu;
            // 0x33df20: 0x8e050e0c  lw          $a1, 0xE0C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33DF2Cu;
            goto label_33df2c;
        }
    }
    ctx->pc = 0x33DF24u;
label_33df24:
    // 0x33df24: 0x10000069  b           . + 4 + (0x69 << 2)
label_33df28:
    if (ctx->pc == 0x33DF28u) {
        ctx->pc = 0x33DF28u;
            // 0x33df28: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x33DF2Cu;
        goto label_33df2c;
    }
    ctx->pc = 0x33DF24u;
    {
        const bool branch_taken_0x33df24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DF24u;
            // 0x33df28: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df24) {
            ctx->pc = 0x33E0CCu;
            goto label_33e0cc;
        }
    }
    ctx->pc = 0x33DF2Cu;
label_33df2c:
    // 0x33df2c: 0x8e230d24  lw          $v1, 0xD24($s1)
    ctx->pc = 0x33df2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3364)));
label_33df30:
    // 0x33df30: 0x50650030  beql        $v1, $a1, . + 4 + (0x30 << 2)
label_33df34:
    if (ctx->pc == 0x33DF34u) {
        ctx->pc = 0x33DF34u;
            // 0x33df34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33DF38u;
        goto label_33df38;
    }
    ctx->pc = 0x33DF30u;
    {
        const bool branch_taken_0x33df30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x33df30) {
            ctx->pc = 0x33DF34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33DF30u;
            // 0x33df34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33DFF4u;
            goto label_33dff4;
        }
    }
    ctx->pc = 0x33DF38u;
label_33df38:
    // 0x33df38: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x33df38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_33df3c:
    // 0x33df3c: 0x240400e4  addiu       $a0, $zero, 0xE4
    ctx->pc = 0x33df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_33df40:
    // 0x33df40: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x33df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_33df44:
    // 0x33df44: 0x2472ff54  addiu       $s2, $v1, -0xAC
    ctx->pc = 0x33df44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
label_33df48:
    // 0x33df48: 0xae250d24  sw          $a1, 0xD24($s1)
    ctx->pc = 0x33df48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3364), GPR_U32(ctx, 5));
label_33df4c:
    // 0x33df4c: 0x24500064  addiu       $s0, $v0, 0x64
    ctx->pc = 0x33df4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_33df50:
    // 0x33df50: 0x8e220d3c  lw          $v0, 0xD3C($s1)
    ctx->pc = 0x33df50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
label_33df54:
    // 0x33df54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33df54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33df58:
    // 0x33df58: 0xc040180  jal         func_100600
label_33df5c:
    if (ctx->pc == 0x33DF5Cu) {
        ctx->pc = 0x33DF5Cu;
            // 0x33df5c: 0xae220d3c  sw          $v0, 0xD3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 2));
        ctx->pc = 0x33DF60u;
        goto label_33df60;
    }
    ctx->pc = 0x33DF58u;
    SET_GPR_U32(ctx, 31, 0x33DF60u);
    ctx->pc = 0x33DF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DF58u;
            // 0x33df5c: 0xae220d3c  sw          $v0, 0xD3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DF60u; }
        if (ctx->pc != 0x33DF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DF60u; }
        if (ctx->pc != 0x33DF60u) { return; }
    }
    ctx->pc = 0x33DF60u;
label_33df60:
    // 0x33df60: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_33df64:
    if (ctx->pc == 0x33DF64u) {
        ctx->pc = 0x33DF64u;
            // 0x33df64: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33DF68u;
        goto label_33df68;
    }
    ctx->pc = 0x33DF60u;
    {
        const bool branch_taken_0x33df60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DF60u;
            // 0x33df64: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df60) {
            ctx->pc = 0x33DFF0u;
            goto label_33dff0;
        }
    }
    ctx->pc = 0x33DF68u;
label_33df68:
    // 0x33df68: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33df68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33df6c:
    // 0x33df6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33df6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33df70:
    // 0x33df70: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33df70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33df74:
    // 0x33df74: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33df74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33df78:
    // 0x33df78: 0xc10ca68  jal         func_4329A0
label_33df7c:
    if (ctx->pc == 0x33DF7Cu) {
        ctx->pc = 0x33DF7Cu;
            // 0x33df7c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33DF80u;
        goto label_33df80;
    }
    ctx->pc = 0x33DF78u;
    SET_GPR_U32(ctx, 31, 0x33DF80u);
    ctx->pc = 0x33DF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DF78u;
            // 0x33df7c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DF80u; }
        if (ctx->pc != 0x33DF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DF80u; }
        if (ctx->pc != 0x33DF80u) { return; }
    }
    ctx->pc = 0x33DF80u;
label_33df80:
    // 0x33df80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33df80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33df84:
    // 0x33df84: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x33df84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_33df88:
    // 0x33df88: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33df88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33df8c:
    // 0x33df8c: 0xc148880  jal         func_522200
label_33df90:
    if (ctx->pc == 0x33DF90u) {
        ctx->pc = 0x33DF90u;
            // 0x33df90: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33DF94u;
        goto label_33df94;
    }
    ctx->pc = 0x33DF8Cu;
    SET_GPR_U32(ctx, 31, 0x33DF94u);
    ctx->pc = 0x33DF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DF8Cu;
            // 0x33df90: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DF94u; }
        if (ctx->pc != 0x33DF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DF94u; }
        if (ctx->pc != 0x33DF94u) { return; }
    }
    ctx->pc = 0x33DF94u;
label_33df94:
    // 0x33df94: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33df94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33df98:
    // 0x33df98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33df98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33df9c:
    // 0x33df9c: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x33df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
label_33dfa0:
    // 0x33dfa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33dfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33dfa4:
    // 0x33dfa4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x33dfa4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33dfa8:
    // 0x33dfa8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x33dfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_33dfac:
    // 0x33dfac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33dfb0:
    // 0x33dfb0: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x33dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_33dfb4:
    // 0x33dfb4: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x33dfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_33dfb8:
    // 0x33dfb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33dfb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33dfbc:
    // 0x33dfbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33dfc0:
    // 0x33dfc0: 0xae630098  sw          $v1, 0x98($s3)
    ctx->pc = 0x33dfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
label_33dfc4:
    // 0x33dfc4: 0xae62009c  sw          $v0, 0x9C($s3)
    ctx->pc = 0x33dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
label_33dfc8:
    // 0x33dfc8: 0xae6300a0  sw          $v1, 0xA0($s3)
    ctx->pc = 0x33dfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 3));
label_33dfcc:
    // 0x33dfcc: 0xe66000c0  swc1        $f0, 0xC0($s3)
    ctx->pc = 0x33dfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_33dfd0:
    // 0x33dfd0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33dfd0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33dfd4:
    // 0x33dfd4: 0x0  nop
    ctx->pc = 0x33dfd4u;
    // NOP
label_33dfd8:
    // 0x33dfd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33dfd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33dfdc:
    // 0x33dfdc: 0xe66000c4  swc1        $f0, 0xC4($s3)
    ctx->pc = 0x33dfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 196), bits); }
label_33dfe0:
    // 0x33dfe0: 0xae6000c8  sw          $zero, 0xC8($s3)
    ctx->pc = 0x33dfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 0));
label_33dfe4:
    // 0x33dfe4: 0xae6000cc  sw          $zero, 0xCC($s3)
    ctx->pc = 0x33dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 0));
label_33dfe8:
    // 0x33dfe8: 0xc0e030c  jal         func_380C30
label_33dfec:
    if (ctx->pc == 0x33DFECu) {
        ctx->pc = 0x33DFECu;
            // 0x33dfec: 0xae6000d0  sw          $zero, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33DFF0u;
        goto label_33dff0;
    }
    ctx->pc = 0x33DFE8u;
    SET_GPR_U32(ctx, 31, 0x33DFF0u);
    ctx->pc = 0x33DFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DFE8u;
            // 0x33dfec: 0xae6000d0  sw          $zero, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380C30u;
    if (runtime->hasFunction(0x380C30u)) {
        auto targetFn = runtime->lookupFunction(0x380C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DFF0u; }
        if (ctx->pc != 0x33DFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380C30_0x380c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DFF0u; }
        if (ctx->pc != 0x33DFF0u) { return; }
    }
    ctx->pc = 0x33DFF0u;
label_33dff0:
    // 0x33dff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33dff4:
    // 0x33dff4: 0x10000398  b           . + 4 + (0x398 << 2)
label_33dff8:
    if (ctx->pc == 0x33DFF8u) {
        ctx->pc = 0x33DFF8u;
            // 0x33dff8: 0xa2230d3a  sb          $v1, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x33DFFCu;
        goto label_33dffc;
    }
    ctx->pc = 0x33DFF4u;
    {
        const bool branch_taken_0x33dff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DFF4u;
            // 0x33dff8: 0xa2230d3a  sb          $v1, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dff4) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33DFFCu;
label_33dffc:
    // 0x33dffc: 0x8e050e0c  lw          $a1, 0xE0C($s0)
    ctx->pc = 0x33dffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3596)));
label_33e000:
    // 0x33e000: 0x8e230d24  lw          $v1, 0xD24($s1)
    ctx->pc = 0x33e000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3364)));
label_33e004:
    // 0x33e004: 0x10650394  beq         $v1, $a1, . + 4 + (0x394 << 2)
label_33e008:
    if (ctx->pc == 0x33E008u) {
        ctx->pc = 0x33E00Cu;
        goto label_33e00c;
    }
    ctx->pc = 0x33E004u;
    {
        const bool branch_taken_0x33e004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x33e004) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E00Cu;
label_33e00c:
    // 0x33e00c: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x33e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_33e010:
    // 0x33e010: 0x240400e4  addiu       $a0, $zero, 0xE4
    ctx->pc = 0x33e010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_33e014:
    // 0x33e014: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x33e014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_33e018:
    // 0x33e018: 0x2472ff54  addiu       $s2, $v1, -0xAC
    ctx->pc = 0x33e018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
label_33e01c:
    // 0x33e01c: 0xae250d24  sw          $a1, 0xD24($s1)
    ctx->pc = 0x33e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3364), GPR_U32(ctx, 5));
label_33e020:
    // 0x33e020: 0x24500064  addiu       $s0, $v0, 0x64
    ctx->pc = 0x33e020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_33e024:
    // 0x33e024: 0x8e220d3c  lw          $v0, 0xD3C($s1)
    ctx->pc = 0x33e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
label_33e028:
    // 0x33e028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33e02c:
    // 0x33e02c: 0xc040180  jal         func_100600
label_33e030:
    if (ctx->pc == 0x33E030u) {
        ctx->pc = 0x33E030u;
            // 0x33e030: 0xae220d3c  sw          $v0, 0xD3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 2));
        ctx->pc = 0x33E034u;
        goto label_33e034;
    }
    ctx->pc = 0x33E02Cu;
    SET_GPR_U32(ctx, 31, 0x33E034u);
    ctx->pc = 0x33E030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E02Cu;
            // 0x33e030: 0xae220d3c  sw          $v0, 0xD3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E034u; }
        if (ctx->pc != 0x33E034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E034u; }
        if (ctx->pc != 0x33E034u) { return; }
    }
    ctx->pc = 0x33E034u;
label_33e034:
    // 0x33e034: 0x10400388  beqz        $v0, . + 4 + (0x388 << 2)
label_33e038:
    if (ctx->pc == 0x33E038u) {
        ctx->pc = 0x33E038u;
            // 0x33e038: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33E03Cu;
        goto label_33e03c;
    }
    ctx->pc = 0x33E034u;
    {
        const bool branch_taken_0x33e034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E034u;
            // 0x33e038: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e034) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E03Cu;
label_33e03c:
    // 0x33e03c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33e040:
    // 0x33e040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33e040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33e044:
    // 0x33e044: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33e044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33e048:
    // 0x33e048: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33e048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33e04c:
    // 0x33e04c: 0xc10ca68  jal         func_4329A0
label_33e050:
    if (ctx->pc == 0x33E050u) {
        ctx->pc = 0x33E050u;
            // 0x33e050: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33E054u;
        goto label_33e054;
    }
    ctx->pc = 0x33E04Cu;
    SET_GPR_U32(ctx, 31, 0x33E054u);
    ctx->pc = 0x33E050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E04Cu;
            // 0x33e050: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E054u; }
        if (ctx->pc != 0x33E054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E054u; }
        if (ctx->pc != 0x33E054u) { return; }
    }
    ctx->pc = 0x33E054u;
label_33e054:
    // 0x33e054: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e058:
    // 0x33e058: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x33e058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_33e05c:
    // 0x33e05c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33e060:
    // 0x33e060: 0xc148880  jal         func_522200
label_33e064:
    if (ctx->pc == 0x33E064u) {
        ctx->pc = 0x33E064u;
            // 0x33e064: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33E068u;
        goto label_33e068;
    }
    ctx->pc = 0x33E060u;
    SET_GPR_U32(ctx, 31, 0x33E068u);
    ctx->pc = 0x33E064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E060u;
            // 0x33e064: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E068u; }
        if (ctx->pc != 0x33E068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E068u; }
        if (ctx->pc != 0x33E068u) { return; }
    }
    ctx->pc = 0x33E068u;
label_33e068:
    // 0x33e068: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e06c:
    // 0x33e06c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33e070:
    // 0x33e070: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x33e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
label_33e074:
    // 0x33e074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33e074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33e078:
    // 0x33e078: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x33e078u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e07c:
    // 0x33e07c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x33e07cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_33e080:
    // 0x33e080: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e084:
    // 0x33e084: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x33e084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_33e088:
    // 0x33e088: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x33e088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_33e08c:
    // 0x33e08c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e08cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e090:
    // 0x33e090: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33e090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e094:
    // 0x33e094: 0xae230098  sw          $v1, 0x98($s1)
    ctx->pc = 0x33e094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
label_33e098:
    // 0x33e098: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x33e098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
label_33e09c:
    // 0x33e09c: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x33e09cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
label_33e0a0:
    // 0x33e0a0: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x33e0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_33e0a4:
    // 0x33e0a4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33e0a4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e0a8:
    // 0x33e0a8: 0x0  nop
    ctx->pc = 0x33e0a8u;
    // NOP
label_33e0ac:
    // 0x33e0ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e0acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e0b0:
    // 0x33e0b0: 0xe62000c4  swc1        $f0, 0xC4($s1)
    ctx->pc = 0x33e0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 196), bits); }
label_33e0b4:
    // 0x33e0b4: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x33e0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
label_33e0b8:
    // 0x33e0b8: 0xae2000cc  sw          $zero, 0xCC($s1)
    ctx->pc = 0x33e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
label_33e0bc:
    // 0x33e0bc: 0xc0e030c  jal         func_380C30
label_33e0c0:
    if (ctx->pc == 0x33E0C0u) {
        ctx->pc = 0x33E0C0u;
            // 0x33e0c0: 0xae2000d0  sw          $zero, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33E0C4u;
        goto label_33e0c4;
    }
    ctx->pc = 0x33E0BCu;
    SET_GPR_U32(ctx, 31, 0x33E0C4u);
    ctx->pc = 0x33E0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E0BCu;
            // 0x33e0c0: 0xae2000d0  sw          $zero, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380C30u;
    if (runtime->hasFunction(0x380C30u)) {
        auto targetFn = runtime->lookupFunction(0x380C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E0C4u; }
        if (ctx->pc != 0x33E0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380C30_0x380c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E0C4u; }
        if (ctx->pc != 0x33E0C4u) { return; }
    }
    ctx->pc = 0x33E0C4u;
label_33e0c4:
    // 0x33e0c4: 0x10000364  b           . + 4 + (0x364 << 2)
label_33e0c8:
    if (ctx->pc == 0x33E0C8u) {
        ctx->pc = 0x33E0CCu;
        goto label_33e0cc;
    }
    ctx->pc = 0x33E0C4u;
    {
        const bool branch_taken_0x33e0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e0c4) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E0CCu;
label_33e0cc:
    // 0x33e0cc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x33e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_33e0d0:
    // 0x33e0d0: 0x50830361  beql        $a0, $v1, . + 4 + (0x361 << 2)
label_33e0d4:
    if (ctx->pc == 0x33E0D4u) {
        ctx->pc = 0x33E0D4u;
            // 0x33e0d4: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33E0D8u;
        goto label_33e0d8;
    }
    ctx->pc = 0x33E0D0u;
    {
        const bool branch_taken_0x33e0d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33e0d0) {
            ctx->pc = 0x33E0D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E0D0u;
            // 0x33e0d4: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E0D8u;
label_33e0d8:
    // 0x33e0d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33e0dc:
    // 0x33e0dc: 0xae230d24  sw          $v1, 0xD24($s1)
    ctx->pc = 0x33e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3364), GPR_U32(ctx, 3));
label_33e0e0:
    // 0x33e0e0: 0xa2200d3a  sb          $zero, 0xD3A($s1)
    ctx->pc = 0x33e0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
label_33e0e4:
    // 0x33e0e4: 0x1000035c  b           . + 4 + (0x35C << 2)
label_33e0e8:
    if (ctx->pc == 0x33E0E8u) {
        ctx->pc = 0x33E0ECu;
        goto label_33e0ec;
    }
    ctx->pc = 0x33E0E4u;
    {
        const bool branch_taken_0x33e0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e0e4) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E0ECu;
label_33e0ec:
    // 0x33e0ec: 0x8e050db0  lw          $a1, 0xDB0($s0)
    ctx->pc = 0x33e0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_33e0f0:
    // 0x33e0f0: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x33e0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_33e0f4:
    // 0x33e0f4: 0x54a4005b  bnel        $a1, $a0, . + 4 + (0x5B << 2)
label_33e0f8:
    if (ctx->pc == 0x33E0F8u) {
        ctx->pc = 0x33E0F8u;
            // 0x33e0f8: 0x92240d3a  lbu         $a0, 0xD3A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3386)));
        ctx->pc = 0x33E0FCu;
        goto label_33e0fc;
    }
    ctx->pc = 0x33E0F4u;
    {
        const bool branch_taken_0x33e0f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x33e0f4) {
            ctx->pc = 0x33E0F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E0F4u;
            // 0x33e0f8: 0x92240d3a  lbu         $a0, 0xD3A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3386)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E264u;
            goto label_33e264;
        }
    }
    ctx->pc = 0x33E0FCu;
label_33e0fc:
    // 0x33e0fc: 0x8e050a74  lw          $a1, 0xA74($s0)
    ctx->pc = 0x33e0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2676)));
label_33e100:
    // 0x33e100: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33e100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33e104:
    // 0x33e104: 0x14a40354  bne         $a1, $a0, . + 4 + (0x354 << 2)
label_33e108:
    if (ctx->pc == 0x33E108u) {
        ctx->pc = 0x33E10Cu;
        goto label_33e10c;
    }
    ctx->pc = 0x33E104u;
    {
        const bool branch_taken_0x33e104 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x33e104) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E10Cu;
label_33e10c:
    // 0x33e10c: 0x92240d3a  lbu         $a0, 0xD3A($s1)
    ctx->pc = 0x33e10cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3386)));
label_33e110:
    // 0x33e110: 0x14800351  bnez        $a0, . + 4 + (0x351 << 2)
label_33e114:
    if (ctx->pc == 0x33E114u) {
        ctx->pc = 0x33E118u;
        goto label_33e118;
    }
    ctx->pc = 0x33E110u;
    {
        const bool branch_taken_0x33e110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e110) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E118u;
label_33e118:
    // 0x33e118: 0xc6210844  lwc1        $f1, 0x844($s1)
    ctx->pc = 0x33e118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33e11c:
    // 0x33e11c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x33e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_33e120:
    // 0x33e120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e124:
    // 0x33e124: 0x0  nop
    ctx->pc = 0x33e124u;
    // NOP
label_33e128:
    // 0x33e128: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33e128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33e12c:
    // 0x33e12c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_33e130:
    if (ctx->pc == 0x33E130u) {
        ctx->pc = 0x33E130u;
            // 0x33e130: 0x26260838  addiu       $a2, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->pc = 0x33E134u;
        goto label_33e134;
    }
    ctx->pc = 0x33E12Cu;
    {
        const bool branch_taken_0x33e12c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E12Cu;
            // 0x33e130: 0x26260838  addiu       $a2, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e12c) {
            ctx->pc = 0x33E144u;
            goto label_33e144;
        }
    }
    ctx->pc = 0x33E134u;
label_33e134:
    // 0x33e134: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33e134u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33e138:
    // 0x33e138: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x33e138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_33e13c:
    // 0x33e13c: 0x10000008  b           . + 4 + (0x8 << 2)
label_33e140:
    if (ctx->pc == 0x33E140u) {
        ctx->pc = 0x33E140u;
            // 0x33e140: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x33E144u;
        goto label_33e144;
    }
    ctx->pc = 0x33E13Cu;
    {
        const bool branch_taken_0x33e13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E13Cu;
            // 0x33e140: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e13c) {
            ctx->pc = 0x33E160u;
            goto label_33e160;
        }
    }
    ctx->pc = 0x33E144u;
label_33e144:
    // 0x33e144: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33e144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_33e148:
    // 0x33e148: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33e148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_33e14c:
    // 0x33e14c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33e14cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33e150:
    // 0x33e150: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x33e150u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_33e154:
    // 0x33e154: 0x0  nop
    ctx->pc = 0x33e154u;
    // NOP
label_33e158:
    // 0x33e158: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x33e158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_33e15c:
    // 0x33e15c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x33e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_33e160:
    // 0x33e160: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x33e160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_33e164:
    // 0x33e164: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_33e168:
    // 0x33e168: 0x3403ea60  ori         $v1, $zero, 0xEA60
    ctx->pc = 0x33e168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_33e16c:
    // 0x33e16c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x33e16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_33e170:
    // 0x33e170: 0x24040  sll         $t0, $v0, 1
    ctx->pc = 0x33e170u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_33e174:
    // 0x33e174: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x33e174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_33e178:
    // 0x33e178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e17c:
    // 0x33e17c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x33e17cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33e180:
    // 0x33e180: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x33e180u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_33e184:
    // 0x33e184: 0xc72823  subu        $a1, $a2, $a3
    ctx->pc = 0x33e184u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_33e188:
    // 0x33e188: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x33e188u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_33e18c:
    // 0x33e18c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x33e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_33e190:
    // 0x33e190: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x33e190u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_33e194:
    // 0x33e194: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x33e194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_33e198:
    // 0x33e198: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x33e198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_33e19c:
    // 0x33e19c: 0xae230d40  sw          $v1, 0xD40($s1)
    ctx->pc = 0x33e19cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3392), GPR_U32(ctx, 3));
label_33e1a0:
    // 0x33e1a0: 0xa2220d3a  sb          $v0, 0xD3A($s1)
    ctx->pc = 0x33e1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 2));
label_33e1a4:
    // 0x33e1a4: 0xc057b7c  jal         func_15EDF0
label_33e1a8:
    if (ctx->pc == 0x33E1A8u) {
        ctx->pc = 0x33E1A8u;
            // 0x33e1a8: 0x8e250d08  lw          $a1, 0xD08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3336)));
        ctx->pc = 0x33E1ACu;
        goto label_33e1ac;
    }
    ctx->pc = 0x33E1A4u;
    SET_GPR_U32(ctx, 31, 0x33E1ACu);
    ctx->pc = 0x33E1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E1A4u;
            // 0x33e1a8: 0x8e250d08  lw          $a1, 0xD08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3336)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E1ACu; }
        if (ctx->pc != 0x33E1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E1ACu; }
        if (ctx->pc != 0x33E1ACu) { return; }
    }
    ctx->pc = 0x33E1ACu;
label_33e1ac:
    // 0x33e1ac: 0xae200d08  sw          $zero, 0xD08($s1)
    ctx->pc = 0x33e1acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 0));
label_33e1b0:
    // 0x33e1b0: 0x240400e4  addiu       $a0, $zero, 0xE4
    ctx->pc = 0x33e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_33e1b4:
    // 0x33e1b4: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x33e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_33e1b8:
    // 0x33e1b8: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x33e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_33e1bc:
    // 0x33e1bc: 0x2473ff54  addiu       $s3, $v1, -0xAC
    ctx->pc = 0x33e1bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
label_33e1c0:
    // 0x33e1c0: 0xc040180  jal         func_100600
label_33e1c4:
    if (ctx->pc == 0x33E1C4u) {
        ctx->pc = 0x33E1C4u;
            // 0x33e1c4: 0x24520078  addiu       $s2, $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
        ctx->pc = 0x33E1C8u;
        goto label_33e1c8;
    }
    ctx->pc = 0x33E1C0u;
    SET_GPR_U32(ctx, 31, 0x33E1C8u);
    ctx->pc = 0x33E1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E1C0u;
            // 0x33e1c4: 0x24520078  addiu       $s2, $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E1C8u; }
        if (ctx->pc != 0x33E1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E1C8u; }
        if (ctx->pc != 0x33E1C8u) { return; }
    }
    ctx->pc = 0x33E1C8u;
label_33e1c8:
    // 0x33e1c8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_33e1cc:
    if (ctx->pc == 0x33E1CCu) {
        ctx->pc = 0x33E1CCu;
            // 0x33e1cc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33E1D0u;
        goto label_33e1d0;
    }
    ctx->pc = 0x33E1C8u;
    {
        const bool branch_taken_0x33e1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E1C8u;
            // 0x33e1cc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e1c8) {
            ctx->pc = 0x33E25Cu;
            goto label_33e25c;
        }
    }
    ctx->pc = 0x33E1D0u;
label_33e1d0:
    // 0x33e1d0: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33e1d4:
    // 0x33e1d4: 0x8e300d40  lw          $s0, 0xD40($s1)
    ctx->pc = 0x33e1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
label_33e1d8:
    // 0x33e1d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33e1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33e1dc:
    // 0x33e1dc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33e1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33e1e0:
    // 0x33e1e0: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33e1e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33e1e4:
    // 0x33e1e4: 0xc10ca68  jal         func_4329A0
label_33e1e8:
    if (ctx->pc == 0x33E1E8u) {
        ctx->pc = 0x33E1E8u;
            // 0x33e1e8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33E1ECu;
        goto label_33e1ec;
    }
    ctx->pc = 0x33E1E4u;
    SET_GPR_U32(ctx, 31, 0x33E1ECu);
    ctx->pc = 0x33E1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E1E4u;
            // 0x33e1e8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E1ECu; }
        if (ctx->pc != 0x33E1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E1ECu; }
        if (ctx->pc != 0x33E1ECu) { return; }
    }
    ctx->pc = 0x33E1ECu;
label_33e1ec:
    // 0x33e1ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e1f0:
    // 0x33e1f0: 0x26840054  addiu       $a0, $s4, 0x54
    ctx->pc = 0x33e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
label_33e1f4:
    // 0x33e1f4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33e1f8:
    // 0x33e1f8: 0xc148880  jal         func_522200
label_33e1fc:
    if (ctx->pc == 0x33E1FCu) {
        ctx->pc = 0x33E1FCu;
            // 0x33e1fc: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33E200u;
        goto label_33e200;
    }
    ctx->pc = 0x33E1F8u;
    SET_GPR_U32(ctx, 31, 0x33E200u);
    ctx->pc = 0x33E1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E1F8u;
            // 0x33e1fc: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E200u; }
        if (ctx->pc != 0x33E200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E200u; }
        if (ctx->pc != 0x33E200u) { return; }
    }
    ctx->pc = 0x33E200u;
label_33e200:
    // 0x33e200: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e204:
    // 0x33e204: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33e204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33e208:
    // 0x33e208: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x33e208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
label_33e20c:
    // 0x33e20c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33e20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33e210:
    // 0x33e210: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x33e210u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e214:
    // 0x33e214: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x33e214u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_33e218:
    // 0x33e218: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e21c:
    // 0x33e21c: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x33e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_33e220:
    // 0x33e220: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x33e220u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_33e224:
    // 0x33e224: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e228:
    // 0x33e228: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x33e228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33e22c:
    // 0x33e22c: 0xae830098  sw          $v1, 0x98($s4)
    ctx->pc = 0x33e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 3));
label_33e230:
    // 0x33e230: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x33e230u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
label_33e234:
    // 0x33e234: 0xae9000a0  sw          $s0, 0xA0($s4)
    ctx->pc = 0x33e234u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 16));
label_33e238:
    // 0x33e238: 0xe68000c0  swc1        $f0, 0xC0($s4)
    ctx->pc = 0x33e238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 192), bits); }
label_33e23c:
    // 0x33e23c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x33e23cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e240:
    // 0x33e240: 0x0  nop
    ctx->pc = 0x33e240u;
    // NOP
label_33e244:
    // 0x33e244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e248:
    // 0x33e248: 0xe68000c4  swc1        $f0, 0xC4($s4)
    ctx->pc = 0x33e248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 196), bits); }
label_33e24c:
    // 0x33e24c: 0xae8000c8  sw          $zero, 0xC8($s4)
    ctx->pc = 0x33e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 200), GPR_U32(ctx, 0));
label_33e250:
    // 0x33e250: 0xae8000cc  sw          $zero, 0xCC($s4)
    ctx->pc = 0x33e250u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 204), GPR_U32(ctx, 0));
label_33e254:
    // 0x33e254: 0xc0e030c  jal         func_380C30
label_33e258:
    if (ctx->pc == 0x33E258u) {
        ctx->pc = 0x33E258u;
            // 0x33e258: 0xae8000d0  sw          $zero, 0xD0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33E25Cu;
        goto label_33e25c;
    }
    ctx->pc = 0x33E254u;
    SET_GPR_U32(ctx, 31, 0x33E25Cu);
    ctx->pc = 0x33E258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E254u;
            // 0x33e258: 0xae8000d0  sw          $zero, 0xD0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380C30u;
    if (runtime->hasFunction(0x380C30u)) {
        auto targetFn = runtime->lookupFunction(0x380C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E25Cu; }
        if (ctx->pc != 0x33E25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380C30_0x380c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E25Cu; }
        if (ctx->pc != 0x33E25Cu) { return; }
    }
    ctx->pc = 0x33E25Cu;
label_33e25c:
    // 0x33e25c: 0x100002fe  b           . + 4 + (0x2FE << 2)
label_33e260:
    if (ctx->pc == 0x33E260u) {
        ctx->pc = 0x33E260u;
            // 0x33e260: 0xae340d08  sw          $s4, 0xD08($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 20));
        ctx->pc = 0x33E264u;
        goto label_33e264;
    }
    ctx->pc = 0x33E25Cu;
    {
        const bool branch_taken_0x33e25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E25Cu;
            // 0x33e260: 0xae340d08  sw          $s4, 0xD08($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e25c) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E264u;
label_33e264:
    // 0x33e264: 0x108002fc  beqz        $a0, . + 4 + (0x2FC << 2)
label_33e268:
    if (ctx->pc == 0x33E268u) {
        ctx->pc = 0x33E26Cu;
        goto label_33e26c;
    }
    ctx->pc = 0x33E264u;
    {
        const bool branch_taken_0x33e264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e264) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E26Cu;
label_33e26c:
    // 0x33e26c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x33e26cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_33e270:
    // 0x33e270: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33e270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e274:
    // 0x33e274: 0x54a40026  bnel        $a1, $a0, . + 4 + (0x26 << 2)
label_33e278:
    if (ctx->pc == 0x33E278u) {
        ctx->pc = 0x33E278u;
            // 0x33e278: 0x8e050db0  lw          $a1, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x33E27Cu;
        goto label_33e27c;
    }
    ctx->pc = 0x33E274u;
    {
        const bool branch_taken_0x33e274 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x33e274) {
            ctx->pc = 0x33E278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E274u;
            // 0x33e278: 0x8e050db0  lw          $a1, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E310u;
            goto label_33e310;
        }
    }
    ctx->pc = 0x33E27Cu;
label_33e27c:
    // 0x33e27c: 0xc6210844  lwc1        $f1, 0x844($s1)
    ctx->pc = 0x33e27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33e280:
    // 0x33e280: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x33e280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_33e284:
    // 0x33e284: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x33e284u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e288:
    // 0x33e288: 0x0  nop
    ctx->pc = 0x33e288u;
    // NOP
label_33e28c:
    // 0x33e28c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33e28cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33e290:
    // 0x33e290: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_33e294:
    if (ctx->pc == 0x33E294u) {
        ctx->pc = 0x33E294u;
            // 0x33e294: 0x26260838  addiu       $a2, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->pc = 0x33E298u;
        goto label_33e298;
    }
    ctx->pc = 0x33E290u;
    {
        const bool branch_taken_0x33e290 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E290u;
            // 0x33e294: 0x26260838  addiu       $a2, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e290) {
            ctx->pc = 0x33E2A8u;
            goto label_33e2a8;
        }
    }
    ctx->pc = 0x33E298u;
label_33e298:
    // 0x33e298: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33e298u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33e29c:
    // 0x33e29c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x33e29cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_33e2a0:
    // 0x33e2a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_33e2a4:
    if (ctx->pc == 0x33E2A4u) {
        ctx->pc = 0x33E2A4u;
            // 0x33e2a4: 0x8cc80008  lw          $t0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->pc = 0x33E2A8u;
        goto label_33e2a8;
    }
    ctx->pc = 0x33E2A0u;
    {
        const bool branch_taken_0x33e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E2A0u;
            // 0x33e2a4: 0x8cc80008  lw          $t0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e2a0) {
            ctx->pc = 0x33E2C4u;
            goto label_33e2c4;
        }
    }
    ctx->pc = 0x33E2A8u;
label_33e2a8:
    // 0x33e2a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33e2a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_33e2ac:
    // 0x33e2ac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x33e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_33e2b0:
    // 0x33e2b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33e2b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33e2b4:
    // 0x33e2b4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x33e2b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_33e2b8:
    // 0x33e2b8: 0x0  nop
    ctx->pc = 0x33e2b8u;
    // NOP
label_33e2bc:
    // 0x33e2bc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x33e2bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_33e2c0:
    // 0x33e2c0: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x33e2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_33e2c4:
    // 0x33e2c4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x33e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_33e2c8:
    // 0x33e2c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_33e2cc:
    // 0x33e2cc: 0x44840  sll         $t1, $a0, 1
    ctx->pc = 0x33e2ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_33e2d0:
    // 0x33e2d0: 0x8e250d40  lw          $a1, 0xD40($s1)
    ctx->pc = 0x33e2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
label_33e2d4:
    // 0x33e2d4: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x33e2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_33e2d8:
    // 0x33e2d8: 0x3404ea60  ori         $a0, $zero, 0xEA60
    ctx->pc = 0x33e2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_33e2dc:
    // 0x33e2dc: 0x83940  sll         $a3, $t0, 5
    ctx->pc = 0x33e2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_33e2e0:
    // 0x33e2e0: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x33e2e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_33e2e4:
    // 0x33e2e4: 0xe82023  subu        $a0, $a3, $t0
    ctx->pc = 0x33e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_33e2e8:
    // 0x33e2e8: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x33e2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_33e2ec:
    // 0x33e2ec: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x33e2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_33e2f0:
    // 0x33e2f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e2f4:
    // 0x33e2f4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x33e2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_33e2f8:
    // 0x33e2f8: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x33e2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_33e2fc:
    // 0x33e2fc: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x33e2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_33e300:
    // 0x33e300: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x33e300u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_33e304:
    // 0x33e304: 0xae250d40  sw          $a1, 0xD40($s1)
    ctx->pc = 0x33e304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3392), GPR_U32(ctx, 5));
label_33e308:
    // 0x33e308: 0xa2240d3a  sb          $a0, 0xD3A($s1)
    ctx->pc = 0x33e308u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 4));
label_33e30c:
    // 0x33e30c: 0x8e050db0  lw          $a1, 0xDB0($s0)
    ctx->pc = 0x33e30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_33e310:
    // 0x33e310: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x33e310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_33e314:
    // 0x33e314: 0x50a40005  beql        $a1, $a0, . + 4 + (0x5 << 2)
label_33e318:
    if (ctx->pc == 0x33E318u) {
        ctx->pc = 0x33E318u;
            // 0x33e318: 0x8e250d08  lw          $a1, 0xD08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3336)));
        ctx->pc = 0x33E31Cu;
        goto label_33e31c;
    }
    ctx->pc = 0x33E314u;
    {
        const bool branch_taken_0x33e314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x33e314) {
            ctx->pc = 0x33E318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E314u;
            // 0x33e318: 0x8e250d08  lw          $a1, 0xD08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E32Cu;
            goto label_33e32c;
        }
    }
    ctx->pc = 0x33E31Cu;
label_33e31c:
    // 0x33e31c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x33e31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_33e320:
    // 0x33e320: 0x54a40031  bnel        $a1, $a0, . + 4 + (0x31 << 2)
label_33e324:
    if (ctx->pc == 0x33E324u) {
        ctx->pc = 0x33E324u;
            // 0x33e324: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x33E328u;
        goto label_33e328;
    }
    ctx->pc = 0x33E320u;
    {
        const bool branch_taken_0x33e320 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x33e320) {
            ctx->pc = 0x33E324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E320u;
            // 0x33e324: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E3E8u;
            goto label_33e3e8;
        }
    }
    ctx->pc = 0x33E328u;
label_33e328:
    // 0x33e328: 0x8e250d08  lw          $a1, 0xD08($s1)
    ctx->pc = 0x33e328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3336)));
label_33e32c:
    // 0x33e32c: 0xc057b7c  jal         func_15EDF0
label_33e330:
    if (ctx->pc == 0x33E330u) {
        ctx->pc = 0x33E330u;
            // 0x33e330: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x33E334u;
        goto label_33e334;
    }
    ctx->pc = 0x33E32Cu;
    SET_GPR_U32(ctx, 31, 0x33E334u);
    ctx->pc = 0x33E330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E32Cu;
            // 0x33e330: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E334u; }
        if (ctx->pc != 0x33E334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E334u; }
        if (ctx->pc != 0x33E334u) { return; }
    }
    ctx->pc = 0x33E334u;
label_33e334:
    // 0x33e334: 0xae200d08  sw          $zero, 0xD08($s1)
    ctx->pc = 0x33e334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 0));
label_33e338:
    // 0x33e338: 0x240400e4  addiu       $a0, $zero, 0xE4
    ctx->pc = 0x33e338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_33e33c:
    // 0x33e33c: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x33e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_33e340:
    // 0x33e340: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x33e340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_33e344:
    // 0x33e344: 0x2472ff54  addiu       $s2, $v1, -0xAC
    ctx->pc = 0x33e344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
label_33e348:
    // 0x33e348: 0xc040180  jal         func_100600
label_33e34c:
    if (ctx->pc == 0x33E34Cu) {
        ctx->pc = 0x33E34Cu;
            // 0x33e34c: 0x24500078  addiu       $s0, $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
        ctx->pc = 0x33E350u;
        goto label_33e350;
    }
    ctx->pc = 0x33E348u;
    SET_GPR_U32(ctx, 31, 0x33E350u);
    ctx->pc = 0x33E34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E348u;
            // 0x33e34c: 0x24500078  addiu       $s0, $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E350u; }
        if (ctx->pc != 0x33E350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E350u; }
        if (ctx->pc != 0x33E350u) { return; }
    }
    ctx->pc = 0x33E350u;
label_33e350:
    // 0x33e350: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_33e354:
    if (ctx->pc == 0x33E354u) {
        ctx->pc = 0x33E354u;
            // 0x33e354: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33E358u;
        goto label_33e358;
    }
    ctx->pc = 0x33E350u;
    {
        const bool branch_taken_0x33e350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E350u;
            // 0x33e354: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e350) {
            ctx->pc = 0x33E3E0u;
            goto label_33e3e0;
        }
    }
    ctx->pc = 0x33E358u;
label_33e358:
    // 0x33e358: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33e358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33e35c:
    // 0x33e35c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33e35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e360:
    // 0x33e360: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33e360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33e364:
    // 0x33e364: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33e364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33e368:
    // 0x33e368: 0xc10ca68  jal         func_4329A0
label_33e36c:
    if (ctx->pc == 0x33E36Cu) {
        ctx->pc = 0x33E36Cu;
            // 0x33e36c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33E370u;
        goto label_33e370;
    }
    ctx->pc = 0x33E368u;
    SET_GPR_U32(ctx, 31, 0x33E370u);
    ctx->pc = 0x33E36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E368u;
            // 0x33e36c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E370u; }
        if (ctx->pc != 0x33E370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E370u; }
        if (ctx->pc != 0x33E370u) { return; }
    }
    ctx->pc = 0x33E370u;
label_33e370:
    // 0x33e370: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e374:
    // 0x33e374: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x33e374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_33e378:
    // 0x33e378: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33e378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33e37c:
    // 0x33e37c: 0xc148880  jal         func_522200
label_33e380:
    if (ctx->pc == 0x33E380u) {
        ctx->pc = 0x33E380u;
            // 0x33e380: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33E384u;
        goto label_33e384;
    }
    ctx->pc = 0x33E37Cu;
    SET_GPR_U32(ctx, 31, 0x33E384u);
    ctx->pc = 0x33E380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E37Cu;
            // 0x33e380: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E384u; }
        if (ctx->pc != 0x33E384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E384u; }
        if (ctx->pc != 0x33E384u) { return; }
    }
    ctx->pc = 0x33E384u;
label_33e384:
    // 0x33e384: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e388:
    // 0x33e388: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33e388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33e38c:
    // 0x33e38c: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x33e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
label_33e390:
    // 0x33e390: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33e390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e394:
    // 0x33e394: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x33e394u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e398:
    // 0x33e398: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x33e398u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_33e39c:
    // 0x33e39c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e3a0:
    // 0x33e3a0: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x33e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_33e3a4:
    // 0x33e3a4: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x33e3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_33e3a8:
    // 0x33e3a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e3a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e3ac:
    // 0x33e3ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33e3b0:
    // 0x33e3b0: 0xae630098  sw          $v1, 0x98($s3)
    ctx->pc = 0x33e3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
label_33e3b4:
    // 0x33e3b4: 0xae62009c  sw          $v0, 0x9C($s3)
    ctx->pc = 0x33e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
label_33e3b8:
    // 0x33e3b8: 0xae6300a0  sw          $v1, 0xA0($s3)
    ctx->pc = 0x33e3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 3));
label_33e3bc:
    // 0x33e3bc: 0xe66000c0  swc1        $f0, 0xC0($s3)
    ctx->pc = 0x33e3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_33e3c0:
    // 0x33e3c0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33e3c0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e3c4:
    // 0x33e3c4: 0x0  nop
    ctx->pc = 0x33e3c4u;
    // NOP
label_33e3c8:
    // 0x33e3c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e3c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e3cc:
    // 0x33e3cc: 0xe66000c4  swc1        $f0, 0xC4($s3)
    ctx->pc = 0x33e3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 196), bits); }
label_33e3d0:
    // 0x33e3d0: 0xae6000c8  sw          $zero, 0xC8($s3)
    ctx->pc = 0x33e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 0));
label_33e3d4:
    // 0x33e3d4: 0xae6000cc  sw          $zero, 0xCC($s3)
    ctx->pc = 0x33e3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 0));
label_33e3d8:
    // 0x33e3d8: 0xc0e030c  jal         func_380C30
label_33e3dc:
    if (ctx->pc == 0x33E3DCu) {
        ctx->pc = 0x33E3DCu;
            // 0x33e3dc: 0xae6000d0  sw          $zero, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33E3E0u;
        goto label_33e3e0;
    }
    ctx->pc = 0x33E3D8u;
    SET_GPR_U32(ctx, 31, 0x33E3E0u);
    ctx->pc = 0x33E3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E3D8u;
            // 0x33e3dc: 0xae6000d0  sw          $zero, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380C30u;
    if (runtime->hasFunction(0x380C30u)) {
        auto targetFn = runtime->lookupFunction(0x380C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E3E0u; }
        if (ctx->pc != 0x33E3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380C30_0x380c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E3E0u; }
        if (ctx->pc != 0x33E3E0u) { return; }
    }
    ctx->pc = 0x33E3E0u;
label_33e3e0:
    // 0x33e3e0: 0x1000029d  b           . + 4 + (0x29D << 2)
label_33e3e4:
    if (ctx->pc == 0x33E3E4u) {
        ctx->pc = 0x33E3E4u;
            // 0x33e3e4: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33E3E8u;
        goto label_33e3e8;
    }
    ctx->pc = 0x33E3E0u;
    {
        const bool branch_taken_0x33e3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E3E0u;
            // 0x33e3e4: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e3e0) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E3E8u;
label_33e3e8:
    // 0x33e3e8: 0x10a4029b  beq         $a1, $a0, . + 4 + (0x29B << 2)
label_33e3ec:
    if (ctx->pc == 0x33E3ECu) {
        ctx->pc = 0x33E3F0u;
        goto label_33e3f0;
    }
    ctx->pc = 0x33E3E8u;
    {
        const bool branch_taken_0x33e3e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x33e3e8) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E3F0u;
label_33e3f0:
    // 0x33e3f0: 0x8e250d08  lw          $a1, 0xD08($s1)
    ctx->pc = 0x33e3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3336)));
label_33e3f4:
    // 0x33e3f4: 0xc057b7c  jal         func_15EDF0
label_33e3f8:
    if (ctx->pc == 0x33E3F8u) {
        ctx->pc = 0x33E3F8u;
            // 0x33e3f8: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x33E3FCu;
        goto label_33e3fc;
    }
    ctx->pc = 0x33E3F4u;
    SET_GPR_U32(ctx, 31, 0x33E3FCu);
    ctx->pc = 0x33E3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E3F4u;
            // 0x33e3f8: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E3FCu; }
        if (ctx->pc != 0x33E3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E3FCu; }
        if (ctx->pc != 0x33E3FCu) { return; }
    }
    ctx->pc = 0x33E3FCu;
label_33e3fc:
    // 0x33e3fc: 0xae200d08  sw          $zero, 0xD08($s1)
    ctx->pc = 0x33e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 0));
label_33e400:
    // 0x33e400: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x33e400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_33e404:
    // 0x33e404: 0xc6210844  lwc1        $f1, 0x844($s1)
    ctx->pc = 0x33e404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33e408:
    // 0x33e408: 0x8e850080  lw          $a1, 0x80($s4)
    ctx->pc = 0x33e408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_33e40c:
    // 0x33e40c: 0x8e83008c  lw          $v1, 0x8C($s4)
    ctx->pc = 0x33e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_33e410:
    // 0x33e410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e414:
    // 0x33e414: 0x26240838  addiu       $a0, $s1, 0x838
    ctx->pc = 0x33e414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
label_33e418:
    // 0x33e418: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33e418u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33e41c:
    // 0x33e41c: 0x24b2ff54  addiu       $s2, $a1, -0xAC
    ctx->pc = 0x33e41cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967124));
label_33e420:
    // 0x33e420: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_33e424:
    if (ctx->pc == 0x33E424u) {
        ctx->pc = 0x33E424u;
            // 0x33e424: 0x24700078  addiu       $s0, $v1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
        ctx->pc = 0x33E428u;
        goto label_33e428;
    }
    ctx->pc = 0x33E420u;
    {
        const bool branch_taken_0x33e420 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E420u;
            // 0x33e424: 0x24700078  addiu       $s0, $v1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e420) {
            ctx->pc = 0x33E438u;
            goto label_33e438;
        }
    }
    ctx->pc = 0x33E428u;
label_33e428:
    // 0x33e428: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33e428u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33e42c:
    // 0x33e42c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33e42cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_33e430:
    // 0x33e430: 0x10000008  b           . + 4 + (0x8 << 2)
label_33e434:
    if (ctx->pc == 0x33E434u) {
        ctx->pc = 0x33E434u;
            // 0x33e434: 0x8c870008  lw          $a3, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x33E438u;
        goto label_33e438;
    }
    ctx->pc = 0x33E430u;
    {
        const bool branch_taken_0x33e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E430u;
            // 0x33e434: 0x8c870008  lw          $a3, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e430) {
            ctx->pc = 0x33E454u;
            goto label_33e454;
        }
    }
    ctx->pc = 0x33E438u;
label_33e438:
    // 0x33e438: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33e438u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_33e43c:
    // 0x33e43c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_33e440:
    // 0x33e440: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33e440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33e444:
    // 0x33e444: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33e444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_33e448:
    // 0x33e448: 0x0  nop
    ctx->pc = 0x33e448u;
    // NOP
label_33e44c:
    // 0x33e44c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33e44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_33e450:
    // 0x33e450: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x33e450u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33e454:
    // 0x33e454: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33e458:
    // 0x33e458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33e45c:
    // 0x33e45c: 0x24040  sll         $t0, $v0, 1
    ctx->pc = 0x33e45cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_33e460:
    // 0x33e460: 0x8e230d40  lw          $v1, 0xD40($s1)
    ctx->pc = 0x33e460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
label_33e464:
    // 0x33e464: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x33e464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33e468:
    // 0x33e468: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x33e468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_33e46c:
    // 0x33e46c: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x33e46cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_33e470:
    // 0x33e470: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x33e470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_33e474:
    // 0x33e474: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x33e474u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_33e478:
    // 0x33e478: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x33e478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33e47c:
    // 0x33e47c: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x33e47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_33e480:
    // 0x33e480: 0x8e220d3c  lw          $v0, 0xD3C($s1)
    ctx->pc = 0x33e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
label_33e484:
    // 0x33e484: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x33e484u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_33e488:
    // 0x33e488: 0x240400e4  addiu       $a0, $zero, 0xE4
    ctx->pc = 0x33e488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_33e48c:
    // 0x33e48c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x33e48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_33e490:
    // 0x33e490: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x33e490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_33e494:
    // 0x33e494: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x33e494u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33e498:
    // 0x33e498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33e49c:
    // 0x33e49c: 0xc040180  jal         func_100600
label_33e4a0:
    if (ctx->pc == 0x33E4A0u) {
        ctx->pc = 0x33E4A0u;
            // 0x33e4a0: 0xae220d3c  sw          $v0, 0xD3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 2));
        ctx->pc = 0x33E4A4u;
        goto label_33e4a4;
    }
    ctx->pc = 0x33E49Cu;
    SET_GPR_U32(ctx, 31, 0x33E4A4u);
    ctx->pc = 0x33E4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E49Cu;
            // 0x33e4a0: 0xae220d3c  sw          $v0, 0xD3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E4A4u; }
        if (ctx->pc != 0x33E4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E4A4u; }
        if (ctx->pc != 0x33E4A4u) { return; }
    }
    ctx->pc = 0x33E4A4u;
label_33e4a4:
    // 0x33e4a4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_33e4a8:
    if (ctx->pc == 0x33E4A8u) {
        ctx->pc = 0x33E4A8u;
            // 0x33e4a8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33E4ACu;
        goto label_33e4ac;
    }
    ctx->pc = 0x33E4A4u;
    {
        const bool branch_taken_0x33e4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E4A4u;
            // 0x33e4a8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e4a4) {
            ctx->pc = 0x33E534u;
            goto label_33e534;
        }
    }
    ctx->pc = 0x33E4ACu;
label_33e4ac:
    // 0x33e4ac: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33e4b0:
    // 0x33e4b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33e4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e4b4:
    // 0x33e4b4: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33e4b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33e4b8:
    // 0x33e4b8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33e4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33e4bc:
    // 0x33e4bc: 0xc10ca68  jal         func_4329A0
label_33e4c0:
    if (ctx->pc == 0x33E4C0u) {
        ctx->pc = 0x33E4C0u;
            // 0x33e4c0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33E4C4u;
        goto label_33e4c4;
    }
    ctx->pc = 0x33E4BCu;
    SET_GPR_U32(ctx, 31, 0x33E4C4u);
    ctx->pc = 0x33E4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E4BCu;
            // 0x33e4c0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E4C4u; }
        if (ctx->pc != 0x33E4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E4C4u; }
        if (ctx->pc != 0x33E4C4u) { return; }
    }
    ctx->pc = 0x33E4C4u;
label_33e4c4:
    // 0x33e4c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e4c8:
    // 0x33e4c8: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x33e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_33e4cc:
    // 0x33e4cc: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33e4d0:
    // 0x33e4d0: 0xc148880  jal         func_522200
label_33e4d4:
    if (ctx->pc == 0x33E4D4u) {
        ctx->pc = 0x33E4D4u;
            // 0x33e4d4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33E4D8u;
        goto label_33e4d8;
    }
    ctx->pc = 0x33E4D0u;
    SET_GPR_U32(ctx, 31, 0x33E4D8u);
    ctx->pc = 0x33E4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E4D0u;
            // 0x33e4d4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E4D8u; }
        if (ctx->pc != 0x33E4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E4D8u; }
        if (ctx->pc != 0x33E4D8u) { return; }
    }
    ctx->pc = 0x33E4D8u;
label_33e4d8:
    // 0x33e4d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e4dc:
    // 0x33e4dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33e4e0:
    // 0x33e4e0: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x33e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
label_33e4e4:
    // 0x33e4e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33e4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e4e8:
    // 0x33e4e8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x33e4e8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e4ec:
    // 0x33e4ec: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x33e4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_33e4f0:
    // 0x33e4f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e4f4:
    // 0x33e4f4: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x33e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_33e4f8:
    // 0x33e4f8: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x33e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_33e4fc:
    // 0x33e4fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e4fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e500:
    // 0x33e500: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33e500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e504:
    // 0x33e504: 0xae630098  sw          $v1, 0x98($s3)
    ctx->pc = 0x33e504u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
label_33e508:
    // 0x33e508: 0xae62009c  sw          $v0, 0x9C($s3)
    ctx->pc = 0x33e508u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
label_33e50c:
    // 0x33e50c: 0xae6300a0  sw          $v1, 0xA0($s3)
    ctx->pc = 0x33e50cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 3));
label_33e510:
    // 0x33e510: 0xe66000c0  swc1        $f0, 0xC0($s3)
    ctx->pc = 0x33e510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_33e514:
    // 0x33e514: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33e514u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e518:
    // 0x33e518: 0x0  nop
    ctx->pc = 0x33e518u;
    // NOP
label_33e51c:
    // 0x33e51c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e520:
    // 0x33e520: 0xe66000c4  swc1        $f0, 0xC4($s3)
    ctx->pc = 0x33e520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 196), bits); }
label_33e524:
    // 0x33e524: 0xae6000c8  sw          $zero, 0xC8($s3)
    ctx->pc = 0x33e524u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 0));
label_33e528:
    // 0x33e528: 0xae6000cc  sw          $zero, 0xCC($s3)
    ctx->pc = 0x33e528u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 0));
label_33e52c:
    // 0x33e52c: 0xc0e030c  jal         func_380C30
label_33e530:
    if (ctx->pc == 0x33E530u) {
        ctx->pc = 0x33E530u;
            // 0x33e530: 0xae6000d0  sw          $zero, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33E534u;
        goto label_33e534;
    }
    ctx->pc = 0x33E52Cu;
    SET_GPR_U32(ctx, 31, 0x33E534u);
    ctx->pc = 0x33E530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E52Cu;
            // 0x33e530: 0xae6000d0  sw          $zero, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380C30u;
    if (runtime->hasFunction(0x380C30u)) {
        auto targetFn = runtime->lookupFunction(0x380C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E534u; }
        if (ctx->pc != 0x33E534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380C30_0x380c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E534u; }
        if (ctx->pc != 0x33E534u) { return; }
    }
    ctx->pc = 0x33E534u;
label_33e534:
    // 0x33e534: 0x8e240d04  lw          $a0, 0xD04($s1)
    ctx->pc = 0x33e534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3332)));
label_33e538:
    // 0x33e538: 0xc0e02dc  jal         func_380B70
label_33e53c:
    if (ctx->pc == 0x33E53Cu) {
        ctx->pc = 0x33E53Cu;
            // 0x33e53c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x33E540u;
        goto label_33e540;
    }
    ctx->pc = 0x33E538u;
    SET_GPR_U32(ctx, 31, 0x33E540u);
    ctx->pc = 0x33E53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E538u;
            // 0x33e53c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380B70u;
    if (runtime->hasFunction(0x380B70u)) {
        auto targetFn = runtime->lookupFunction(0x380B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E540u; }
        if (ctx->pc != 0x33E540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380B70_0x380b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E540u; }
        if (ctx->pc != 0x33E540u) { return; }
    }
    ctx->pc = 0x33E540u;
label_33e540:
    // 0x33e540: 0x10000245  b           . + 4 + (0x245 << 2)
label_33e544:
    if (ctx->pc == 0x33E544u) {
        ctx->pc = 0x33E544u;
            // 0x33e544: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33E548u;
        goto label_33e548;
    }
    ctx->pc = 0x33E540u;
    {
        const bool branch_taken_0x33e540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E540u;
            // 0x33e544: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e540) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E548u;
label_33e548:
    // 0x33e548: 0x8e050db0  lw          $a1, 0xDB0($s0)
    ctx->pc = 0x33e548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_33e54c:
    // 0x33e54c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x33e54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_33e550:
    // 0x33e550: 0x54a40041  bnel        $a1, $a0, . + 4 + (0x41 << 2)
label_33e554:
    if (ctx->pc == 0x33E554u) {
        ctx->pc = 0x33E554u;
            // 0x33e554: 0x92240d3a  lbu         $a0, 0xD3A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3386)));
        ctx->pc = 0x33E558u;
        goto label_33e558;
    }
    ctx->pc = 0x33E550u;
    {
        const bool branch_taken_0x33e550 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x33e550) {
            ctx->pc = 0x33E554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E550u;
            // 0x33e554: 0x92240d3a  lbu         $a0, 0xD3A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3386)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E658u;
            goto label_33e658;
        }
    }
    ctx->pc = 0x33E558u;
label_33e558:
    // 0x33e558: 0x8e050a74  lw          $a1, 0xA74($s0)
    ctx->pc = 0x33e558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2676)));
label_33e55c:
    // 0x33e55c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33e55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33e560:
    // 0x33e560: 0x14a4023d  bne         $a1, $a0, . + 4 + (0x23D << 2)
label_33e564:
    if (ctx->pc == 0x33E564u) {
        ctx->pc = 0x33E568u;
        goto label_33e568;
    }
    ctx->pc = 0x33E560u;
    {
        const bool branch_taken_0x33e560 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x33e560) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E568u;
label_33e568:
    // 0x33e568: 0x92220d3a  lbu         $v0, 0xD3A($s1)
    ctx->pc = 0x33e568u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3386)));
label_33e56c:
    // 0x33e56c: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
label_33e570:
    if (ctx->pc == 0x33E570u) {
        ctx->pc = 0x33E570u;
            // 0x33e570: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x33E574u;
        goto label_33e574;
    }
    ctx->pc = 0x33E56Cu;
    {
        const bool branch_taken_0x33e56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e56c) {
            ctx->pc = 0x33E570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E56Cu;
            // 0x33e570: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E640u;
            goto label_33e640;
        }
    }
    ctx->pc = 0x33E574u;
label_33e574:
    // 0x33e574: 0xae200d40  sw          $zero, 0xD40($s1)
    ctx->pc = 0x33e574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3392), GPR_U32(ctx, 0));
label_33e578:
    // 0x33e578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e57c:
    // 0x33e57c: 0xa2220d3a  sb          $v0, 0xD3A($s1)
    ctx->pc = 0x33e57cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 2));
label_33e580:
    // 0x33e580: 0x8e250d08  lw          $a1, 0xD08($s1)
    ctx->pc = 0x33e580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3336)));
label_33e584:
    // 0x33e584: 0xc057b7c  jal         func_15EDF0
label_33e588:
    if (ctx->pc == 0x33E588u) {
        ctx->pc = 0x33E588u;
            // 0x33e588: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x33E58Cu;
        goto label_33e58c;
    }
    ctx->pc = 0x33E584u;
    SET_GPR_U32(ctx, 31, 0x33E58Cu);
    ctx->pc = 0x33E588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E584u;
            // 0x33e588: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E58Cu; }
        if (ctx->pc != 0x33E58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E58Cu; }
        if (ctx->pc != 0x33E58Cu) { return; }
    }
    ctx->pc = 0x33E58Cu;
label_33e58c:
    // 0x33e58c: 0xae200d08  sw          $zero, 0xD08($s1)
    ctx->pc = 0x33e58cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 0));
label_33e590:
    // 0x33e590: 0x240400e4  addiu       $a0, $zero, 0xE4
    ctx->pc = 0x33e590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_33e594:
    // 0x33e594: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x33e594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_33e598:
    // 0x33e598: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x33e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_33e59c:
    // 0x33e59c: 0x2472ff54  addiu       $s2, $v1, -0xAC
    ctx->pc = 0x33e59cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
label_33e5a0:
    // 0x33e5a0: 0xc040180  jal         func_100600
label_33e5a4:
    if (ctx->pc == 0x33E5A4u) {
        ctx->pc = 0x33E5A4u;
            // 0x33e5a4: 0x24500078  addiu       $s0, $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
        ctx->pc = 0x33E5A8u;
        goto label_33e5a8;
    }
    ctx->pc = 0x33E5A0u;
    SET_GPR_U32(ctx, 31, 0x33E5A8u);
    ctx->pc = 0x33E5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E5A0u;
            // 0x33e5a4: 0x24500078  addiu       $s0, $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E5A8u; }
        if (ctx->pc != 0x33E5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E5A8u; }
        if (ctx->pc != 0x33E5A8u) { return; }
    }
    ctx->pc = 0x33E5A8u;
label_33e5a8:
    // 0x33e5a8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_33e5ac:
    if (ctx->pc == 0x33E5ACu) {
        ctx->pc = 0x33E5ACu;
            // 0x33e5ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33E5B0u;
        goto label_33e5b0;
    }
    ctx->pc = 0x33E5A8u;
    {
        const bool branch_taken_0x33e5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E5A8u;
            // 0x33e5ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e5a8) {
            ctx->pc = 0x33E638u;
            goto label_33e638;
        }
    }
    ctx->pc = 0x33E5B0u;
label_33e5b0:
    // 0x33e5b0: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33e5b4:
    // 0x33e5b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33e5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e5b8:
    // 0x33e5b8: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33e5b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33e5bc:
    // 0x33e5bc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33e5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33e5c0:
    // 0x33e5c0: 0xc10ca68  jal         func_4329A0
label_33e5c4:
    if (ctx->pc == 0x33E5C4u) {
        ctx->pc = 0x33E5C4u;
            // 0x33e5c4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33E5C8u;
        goto label_33e5c8;
    }
    ctx->pc = 0x33E5C0u;
    SET_GPR_U32(ctx, 31, 0x33E5C8u);
    ctx->pc = 0x33E5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E5C0u;
            // 0x33e5c4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E5C8u; }
        if (ctx->pc != 0x33E5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E5C8u; }
        if (ctx->pc != 0x33E5C8u) { return; }
    }
    ctx->pc = 0x33E5C8u;
label_33e5c8:
    // 0x33e5c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e5cc:
    // 0x33e5cc: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x33e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_33e5d0:
    // 0x33e5d0: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33e5d4:
    // 0x33e5d4: 0xc148880  jal         func_522200
label_33e5d8:
    if (ctx->pc == 0x33E5D8u) {
        ctx->pc = 0x33E5D8u;
            // 0x33e5d8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33E5DCu;
        goto label_33e5dc;
    }
    ctx->pc = 0x33E5D4u;
    SET_GPR_U32(ctx, 31, 0x33E5DCu);
    ctx->pc = 0x33E5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E5D4u;
            // 0x33e5d8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E5DCu; }
        if (ctx->pc != 0x33E5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E5DCu; }
        if (ctx->pc != 0x33E5DCu) { return; }
    }
    ctx->pc = 0x33E5DCu;
label_33e5dc:
    // 0x33e5dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e5e0:
    // 0x33e5e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33e5e4:
    // 0x33e5e4: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x33e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
label_33e5e8:
    // 0x33e5e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33e5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e5ec:
    // 0x33e5ec: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x33e5ecu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e5f0:
    // 0x33e5f0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x33e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_33e5f4:
    // 0x33e5f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e5f8:
    // 0x33e5f8: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x33e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_33e5fc:
    // 0x33e5fc: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x33e5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_33e600:
    // 0x33e600: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e604:
    // 0x33e604: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x33e604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33e608:
    // 0x33e608: 0xae630098  sw          $v1, 0x98($s3)
    ctx->pc = 0x33e608u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
label_33e60c:
    // 0x33e60c: 0xae62009c  sw          $v0, 0x9C($s3)
    ctx->pc = 0x33e60cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
label_33e610:
    // 0x33e610: 0xae6300a0  sw          $v1, 0xA0($s3)
    ctx->pc = 0x33e610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 3));
label_33e614:
    // 0x33e614: 0xe66000c0  swc1        $f0, 0xC0($s3)
    ctx->pc = 0x33e614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_33e618:
    // 0x33e618: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33e618u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e61c:
    // 0x33e61c: 0x0  nop
    ctx->pc = 0x33e61cu;
    // NOP
label_33e620:
    // 0x33e620: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e624:
    // 0x33e624: 0xe66000c4  swc1        $f0, 0xC4($s3)
    ctx->pc = 0x33e624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 196), bits); }
label_33e628:
    // 0x33e628: 0xae6000c8  sw          $zero, 0xC8($s3)
    ctx->pc = 0x33e628u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 0));
label_33e62c:
    // 0x33e62c: 0xae6000cc  sw          $zero, 0xCC($s3)
    ctx->pc = 0x33e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 0));
label_33e630:
    // 0x33e630: 0xc0e030c  jal         func_380C30
label_33e634:
    if (ctx->pc == 0x33E634u) {
        ctx->pc = 0x33E634u;
            // 0x33e634: 0xae6000d0  sw          $zero, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33E638u;
        goto label_33e638;
    }
    ctx->pc = 0x33E630u;
    SET_GPR_U32(ctx, 31, 0x33E638u);
    ctx->pc = 0x33E634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E630u;
            // 0x33e634: 0xae6000d0  sw          $zero, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380C30u;
    if (runtime->hasFunction(0x380C30u)) {
        auto targetFn = runtime->lookupFunction(0x380C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E638u; }
        if (ctx->pc != 0x33E638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380C30_0x380c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E638u; }
        if (ctx->pc != 0x33E638u) { return; }
    }
    ctx->pc = 0x33E638u;
label_33e638:
    // 0x33e638: 0x10000207  b           . + 4 + (0x207 << 2)
label_33e63c:
    if (ctx->pc == 0x33E63Cu) {
        ctx->pc = 0x33E63Cu;
            // 0x33e63c: 0xae330d08  sw          $s3, 0xD08($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 19));
        ctx->pc = 0x33E640u;
        goto label_33e640;
    }
    ctx->pc = 0x33E638u;
    {
        const bool branch_taken_0x33e638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E638u;
            // 0x33e63c: 0xae330d08  sw          $s3, 0xD08($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e638) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E640u;
label_33e640:
    // 0x33e640: 0xc04cc1c  jal         func_133070
label_33e644:
    if (ctx->pc == 0x33E644u) {
        ctx->pc = 0x33E644u;
            // 0x33e644: 0x260502d0  addiu       $a1, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->pc = 0x33E648u;
        goto label_33e648;
    }
    ctx->pc = 0x33E640u;
    SET_GPR_U32(ctx, 31, 0x33E648u);
    ctx->pc = 0x33E644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E640u;
            // 0x33e644: 0x260502d0  addiu       $a1, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E648u; }
        if (ctx->pc != 0x33E648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E648u; }
        if (ctx->pc != 0x33E648u) { return; }
    }
    ctx->pc = 0x33E648u;
label_33e648:
    // 0x33e648: 0xc6210d40  lwc1        $f1, 0xD40($s1)
    ctx->pc = 0x33e648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33e64c:
    // 0x33e64c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33e64cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_33e650:
    // 0x33e650: 0x10000201  b           . + 4 + (0x201 << 2)
label_33e654:
    if (ctx->pc == 0x33E654u) {
        ctx->pc = 0x33E654u;
            // 0x33e654: 0xe6200d40  swc1        $f0, 0xD40($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3392), bits); }
        ctx->pc = 0x33E658u;
        goto label_33e658;
    }
    ctx->pc = 0x33E650u;
    {
        const bool branch_taken_0x33e650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E650u;
            // 0x33e654: 0xe6200d40  swc1        $f0, 0xD40($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e650) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E658u;
label_33e658:
    // 0x33e658: 0x108001ff  beqz        $a0, . + 4 + (0x1FF << 2)
label_33e65c:
    if (ctx->pc == 0x33E65Cu) {
        ctx->pc = 0x33E660u;
        goto label_33e660;
    }
    ctx->pc = 0x33E658u;
    {
        const bool branch_taken_0x33e658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e658) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E660u;
label_33e660:
    // 0x33e660: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x33e660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_33e664:
    // 0x33e664: 0x50a40005  beql        $a1, $a0, . + 4 + (0x5 << 2)
label_33e668:
    if (ctx->pc == 0x33E668u) {
        ctx->pc = 0x33E668u;
            // 0x33e668: 0x8e250d08  lw          $a1, 0xD08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3336)));
        ctx->pc = 0x33E66Cu;
        goto label_33e66c;
    }
    ctx->pc = 0x33E664u;
    {
        const bool branch_taken_0x33e664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x33e664) {
            ctx->pc = 0x33E668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E664u;
            // 0x33e668: 0x8e250d08  lw          $a1, 0xD08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E67Cu;
            goto label_33e67c;
        }
    }
    ctx->pc = 0x33E66Cu;
label_33e66c:
    // 0x33e66c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x33e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_33e670:
    // 0x33e670: 0x54a40031  bnel        $a1, $a0, . + 4 + (0x31 << 2)
label_33e674:
    if (ctx->pc == 0x33E674u) {
        ctx->pc = 0x33E674u;
            // 0x33e674: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x33E678u;
        goto label_33e678;
    }
    ctx->pc = 0x33E670u;
    {
        const bool branch_taken_0x33e670 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x33e670) {
            ctx->pc = 0x33E674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E670u;
            // 0x33e674: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E738u;
            goto label_33e738;
        }
    }
    ctx->pc = 0x33E678u;
label_33e678:
    // 0x33e678: 0x8e250d08  lw          $a1, 0xD08($s1)
    ctx->pc = 0x33e678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3336)));
label_33e67c:
    // 0x33e67c: 0xc057b7c  jal         func_15EDF0
label_33e680:
    if (ctx->pc == 0x33E680u) {
        ctx->pc = 0x33E680u;
            // 0x33e680: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x33E684u;
        goto label_33e684;
    }
    ctx->pc = 0x33E67Cu;
    SET_GPR_U32(ctx, 31, 0x33E684u);
    ctx->pc = 0x33E680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E67Cu;
            // 0x33e680: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E684u; }
        if (ctx->pc != 0x33E684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E684u; }
        if (ctx->pc != 0x33E684u) { return; }
    }
    ctx->pc = 0x33E684u;
label_33e684:
    // 0x33e684: 0xae200d08  sw          $zero, 0xD08($s1)
    ctx->pc = 0x33e684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 0));
label_33e688:
    // 0x33e688: 0x240400e4  addiu       $a0, $zero, 0xE4
    ctx->pc = 0x33e688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_33e68c:
    // 0x33e68c: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x33e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_33e690:
    // 0x33e690: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x33e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_33e694:
    // 0x33e694: 0x2472ff54  addiu       $s2, $v1, -0xAC
    ctx->pc = 0x33e694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
label_33e698:
    // 0x33e698: 0xc040180  jal         func_100600
label_33e69c:
    if (ctx->pc == 0x33E69Cu) {
        ctx->pc = 0x33E69Cu;
            // 0x33e69c: 0x24500078  addiu       $s0, $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
        ctx->pc = 0x33E6A0u;
        goto label_33e6a0;
    }
    ctx->pc = 0x33E698u;
    SET_GPR_U32(ctx, 31, 0x33E6A0u);
    ctx->pc = 0x33E69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E698u;
            // 0x33e69c: 0x24500078  addiu       $s0, $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E6A0u; }
        if (ctx->pc != 0x33E6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E6A0u; }
        if (ctx->pc != 0x33E6A0u) { return; }
    }
    ctx->pc = 0x33E6A0u;
label_33e6a0:
    // 0x33e6a0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_33e6a4:
    if (ctx->pc == 0x33E6A4u) {
        ctx->pc = 0x33E6A4u;
            // 0x33e6a4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33E6A8u;
        goto label_33e6a8;
    }
    ctx->pc = 0x33E6A0u;
    {
        const bool branch_taken_0x33e6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E6A0u;
            // 0x33e6a4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e6a0) {
            ctx->pc = 0x33E730u;
            goto label_33e730;
        }
    }
    ctx->pc = 0x33E6A8u;
label_33e6a8:
    // 0x33e6a8: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33e6ac:
    // 0x33e6ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33e6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e6b0:
    // 0x33e6b0: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33e6b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33e6b4:
    // 0x33e6b4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33e6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33e6b8:
    // 0x33e6b8: 0xc10ca68  jal         func_4329A0
label_33e6bc:
    if (ctx->pc == 0x33E6BCu) {
        ctx->pc = 0x33E6BCu;
            // 0x33e6bc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33E6C0u;
        goto label_33e6c0;
    }
    ctx->pc = 0x33E6B8u;
    SET_GPR_U32(ctx, 31, 0x33E6C0u);
    ctx->pc = 0x33E6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E6B8u;
            // 0x33e6bc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E6C0u; }
        if (ctx->pc != 0x33E6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E6C0u; }
        if (ctx->pc != 0x33E6C0u) { return; }
    }
    ctx->pc = 0x33E6C0u;
label_33e6c0:
    // 0x33e6c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e6c4:
    // 0x33e6c4: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x33e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_33e6c8:
    // 0x33e6c8: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33e6cc:
    // 0x33e6cc: 0xc148880  jal         func_522200
label_33e6d0:
    if (ctx->pc == 0x33E6D0u) {
        ctx->pc = 0x33E6D0u;
            // 0x33e6d0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33E6D4u;
        goto label_33e6d4;
    }
    ctx->pc = 0x33E6CCu;
    SET_GPR_U32(ctx, 31, 0x33E6D4u);
    ctx->pc = 0x33E6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E6CCu;
            // 0x33e6d0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E6D4u; }
        if (ctx->pc != 0x33E6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E6D4u; }
        if (ctx->pc != 0x33E6D4u) { return; }
    }
    ctx->pc = 0x33E6D4u;
label_33e6d4:
    // 0x33e6d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e6d8:
    // 0x33e6d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33e6dc:
    // 0x33e6dc: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x33e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
label_33e6e0:
    // 0x33e6e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33e6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e6e4:
    // 0x33e6e4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x33e6e4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e6e8:
    // 0x33e6e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x33e6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_33e6ec:
    // 0x33e6ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e6f0:
    // 0x33e6f0: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x33e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_33e6f4:
    // 0x33e6f4: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x33e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_33e6f8:
    // 0x33e6f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e6f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e6fc:
    // 0x33e6fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33e700:
    // 0x33e700: 0xae630098  sw          $v1, 0x98($s3)
    ctx->pc = 0x33e700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
label_33e704:
    // 0x33e704: 0xae62009c  sw          $v0, 0x9C($s3)
    ctx->pc = 0x33e704u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
label_33e708:
    // 0x33e708: 0xae6300a0  sw          $v1, 0xA0($s3)
    ctx->pc = 0x33e708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 3));
label_33e70c:
    // 0x33e70c: 0xe66000c0  swc1        $f0, 0xC0($s3)
    ctx->pc = 0x33e70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_33e710:
    // 0x33e710: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33e710u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e714:
    // 0x33e714: 0x0  nop
    ctx->pc = 0x33e714u;
    // NOP
label_33e718:
    // 0x33e718: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e71c:
    // 0x33e71c: 0xe66000c4  swc1        $f0, 0xC4($s3)
    ctx->pc = 0x33e71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 196), bits); }
label_33e720:
    // 0x33e720: 0xae6000c8  sw          $zero, 0xC8($s3)
    ctx->pc = 0x33e720u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 0));
label_33e724:
    // 0x33e724: 0xae6000cc  sw          $zero, 0xCC($s3)
    ctx->pc = 0x33e724u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 0));
label_33e728:
    // 0x33e728: 0xc0e030c  jal         func_380C30
label_33e72c:
    if (ctx->pc == 0x33E72Cu) {
        ctx->pc = 0x33E72Cu;
            // 0x33e72c: 0xae6000d0  sw          $zero, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33E730u;
        goto label_33e730;
    }
    ctx->pc = 0x33E728u;
    SET_GPR_U32(ctx, 31, 0x33E730u);
    ctx->pc = 0x33E72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E728u;
            // 0x33e72c: 0xae6000d0  sw          $zero, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380C30u;
    if (runtime->hasFunction(0x380C30u)) {
        auto targetFn = runtime->lookupFunction(0x380C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E730u; }
        if (ctx->pc != 0x33E730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380C30_0x380c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E730u; }
        if (ctx->pc != 0x33E730u) { return; }
    }
    ctx->pc = 0x33E730u;
label_33e730:
    // 0x33e730: 0x100001c9  b           . + 4 + (0x1C9 << 2)
label_33e734:
    if (ctx->pc == 0x33E734u) {
        ctx->pc = 0x33E734u;
            // 0x33e734: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33E738u;
        goto label_33e738;
    }
    ctx->pc = 0x33E730u;
    {
        const bool branch_taken_0x33e730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E730u;
            // 0x33e734: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e730) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E738u;
label_33e738:
    // 0x33e738: 0x10a401c7  beq         $a1, $a0, . + 4 + (0x1C7 << 2)
label_33e73c:
    if (ctx->pc == 0x33E73Cu) {
        ctx->pc = 0x33E740u;
        goto label_33e740;
    }
    ctx->pc = 0x33E738u;
    {
        const bool branch_taken_0x33e738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x33e738) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E740u;
label_33e740:
    // 0x33e740: 0x8e250d08  lw          $a1, 0xD08($s1)
    ctx->pc = 0x33e740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3336)));
label_33e744:
    // 0x33e744: 0xc057b7c  jal         func_15EDF0
label_33e748:
    if (ctx->pc == 0x33E748u) {
        ctx->pc = 0x33E748u;
            // 0x33e748: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x33E74Cu;
        goto label_33e74c;
    }
    ctx->pc = 0x33E744u;
    SET_GPR_U32(ctx, 31, 0x33E74Cu);
    ctx->pc = 0x33E748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E744u;
            // 0x33e748: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E74Cu; }
        if (ctx->pc != 0x33E74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E74Cu; }
        if (ctx->pc != 0x33E74Cu) { return; }
    }
    ctx->pc = 0x33E74Cu;
label_33e74c:
    // 0x33e74c: 0xae200d08  sw          $zero, 0xD08($s1)
    ctx->pc = 0x33e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 0));
label_33e750:
    // 0x33e750: 0x240400e4  addiu       $a0, $zero, 0xE4
    ctx->pc = 0x33e750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_33e754:
    // 0x33e754: 0xc6210d40  lwc1        $f1, 0xD40($s1)
    ctx->pc = 0x33e754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33e758:
    // 0x33e758: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x33e758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_33e75c:
    // 0x33e75c: 0xc6200d3c  lwc1        $f0, 0xD3C($s1)
    ctx->pc = 0x33e75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33e760:
    // 0x33e760: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x33e760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_33e764:
    // 0x33e764: 0x2472ff54  addiu       $s2, $v1, -0xAC
    ctx->pc = 0x33e764u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
label_33e768:
    // 0x33e768: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33e768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_33e76c:
    // 0x33e76c: 0x24500078  addiu       $s0, $v0, 0x78
    ctx->pc = 0x33e76cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_33e770:
    // 0x33e770: 0xc040180  jal         func_100600
label_33e774:
    if (ctx->pc == 0x33E774u) {
        ctx->pc = 0x33E774u;
            // 0x33e774: 0xe6200d3c  swc1        $f0, 0xD3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3388), bits); }
        ctx->pc = 0x33E778u;
        goto label_33e778;
    }
    ctx->pc = 0x33E770u;
    SET_GPR_U32(ctx, 31, 0x33E778u);
    ctx->pc = 0x33E774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E770u;
            // 0x33e774: 0xe6200d3c  swc1        $f0, 0xD3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3388), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E778u; }
        if (ctx->pc != 0x33E778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E778u; }
        if (ctx->pc != 0x33E778u) { return; }
    }
    ctx->pc = 0x33E778u;
label_33e778:
    // 0x33e778: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_33e77c:
    if (ctx->pc == 0x33E77Cu) {
        ctx->pc = 0x33E77Cu;
            // 0x33e77c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33E780u;
        goto label_33e780;
    }
    ctx->pc = 0x33E778u;
    {
        const bool branch_taken_0x33e778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E778u;
            // 0x33e77c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e778) {
            ctx->pc = 0x33E808u;
            goto label_33e808;
        }
    }
    ctx->pc = 0x33E780u;
label_33e780:
    // 0x33e780: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33e780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33e784:
    // 0x33e784: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33e784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e788:
    // 0x33e788: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33e788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33e78c:
    // 0x33e78c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33e78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33e790:
    // 0x33e790: 0xc10ca68  jal         func_4329A0
label_33e794:
    if (ctx->pc == 0x33E794u) {
        ctx->pc = 0x33E794u;
            // 0x33e794: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33E798u;
        goto label_33e798;
    }
    ctx->pc = 0x33E790u;
    SET_GPR_U32(ctx, 31, 0x33E798u);
    ctx->pc = 0x33E794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E790u;
            // 0x33e794: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E798u; }
        if (ctx->pc != 0x33E798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E798u; }
        if (ctx->pc != 0x33E798u) { return; }
    }
    ctx->pc = 0x33E798u;
label_33e798:
    // 0x33e798: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e79c:
    // 0x33e79c: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x33e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_33e7a0:
    // 0x33e7a0: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33e7a4:
    // 0x33e7a4: 0xc148880  jal         func_522200
label_33e7a8:
    if (ctx->pc == 0x33E7A8u) {
        ctx->pc = 0x33E7A8u;
            // 0x33e7a8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33E7ACu;
        goto label_33e7ac;
    }
    ctx->pc = 0x33E7A4u;
    SET_GPR_U32(ctx, 31, 0x33E7ACu);
    ctx->pc = 0x33E7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E7A4u;
            // 0x33e7a8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E7ACu; }
        if (ctx->pc != 0x33E7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E7ACu; }
        if (ctx->pc != 0x33E7ACu) { return; }
    }
    ctx->pc = 0x33E7ACu;
label_33e7ac:
    // 0x33e7ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e7b0:
    // 0x33e7b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33e7b4:
    // 0x33e7b4: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x33e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
label_33e7b8:
    // 0x33e7b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33e7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e7bc:
    // 0x33e7bc: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x33e7bcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e7c0:
    // 0x33e7c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x33e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_33e7c4:
    // 0x33e7c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e7c8:
    // 0x33e7c8: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x33e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_33e7cc:
    // 0x33e7cc: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x33e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_33e7d0:
    // 0x33e7d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e7d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e7d4:
    // 0x33e7d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e7d8:
    // 0x33e7d8: 0xae630098  sw          $v1, 0x98($s3)
    ctx->pc = 0x33e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
label_33e7dc:
    // 0x33e7dc: 0xae62009c  sw          $v0, 0x9C($s3)
    ctx->pc = 0x33e7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
label_33e7e0:
    // 0x33e7e0: 0xae6300a0  sw          $v1, 0xA0($s3)
    ctx->pc = 0x33e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 3));
label_33e7e4:
    // 0x33e7e4: 0xe66000c0  swc1        $f0, 0xC0($s3)
    ctx->pc = 0x33e7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_33e7e8:
    // 0x33e7e8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33e7e8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e7ec:
    // 0x33e7ec: 0x0  nop
    ctx->pc = 0x33e7ecu;
    // NOP
label_33e7f0:
    // 0x33e7f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e7f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e7f4:
    // 0x33e7f4: 0xe66000c4  swc1        $f0, 0xC4($s3)
    ctx->pc = 0x33e7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 196), bits); }
label_33e7f8:
    // 0x33e7f8: 0xae6000c8  sw          $zero, 0xC8($s3)
    ctx->pc = 0x33e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 0));
label_33e7fc:
    // 0x33e7fc: 0xae6000cc  sw          $zero, 0xCC($s3)
    ctx->pc = 0x33e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 0));
label_33e800:
    // 0x33e800: 0xc0e030c  jal         func_380C30
label_33e804:
    if (ctx->pc == 0x33E804u) {
        ctx->pc = 0x33E804u;
            // 0x33e804: 0xae6000d0  sw          $zero, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33E808u;
        goto label_33e808;
    }
    ctx->pc = 0x33E800u;
    SET_GPR_U32(ctx, 31, 0x33E808u);
    ctx->pc = 0x33E804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E800u;
            // 0x33e804: 0xae6000d0  sw          $zero, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380C30u;
    if (runtime->hasFunction(0x380C30u)) {
        auto targetFn = runtime->lookupFunction(0x380C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E808u; }
        if (ctx->pc != 0x33E808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380C30_0x380c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E808u; }
        if (ctx->pc != 0x33E808u) { return; }
    }
    ctx->pc = 0x33E808u;
label_33e808:
    // 0x33e808: 0x8e240d04  lw          $a0, 0xD04($s1)
    ctx->pc = 0x33e808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3332)));
label_33e80c:
    // 0x33e80c: 0xc0e02dc  jal         func_380B70
label_33e810:
    if (ctx->pc == 0x33E810u) {
        ctx->pc = 0x33E810u;
            // 0x33e810: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x33E814u;
        goto label_33e814;
    }
    ctx->pc = 0x33E80Cu;
    SET_GPR_U32(ctx, 31, 0x33E814u);
    ctx->pc = 0x33E810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E80Cu;
            // 0x33e810: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380B70u;
    if (runtime->hasFunction(0x380B70u)) {
        auto targetFn = runtime->lookupFunction(0x380B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E814u; }
        if (ctx->pc != 0x33E814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380B70_0x380b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E814u; }
        if (ctx->pc != 0x33E814u) { return; }
    }
    ctx->pc = 0x33E814u;
label_33e814:
    // 0x33e814: 0x10000190  b           . + 4 + (0x190 << 2)
label_33e818:
    if (ctx->pc == 0x33E818u) {
        ctx->pc = 0x33E818u;
            // 0x33e818: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33E81Cu;
        goto label_33e81c;
    }
    ctx->pc = 0x33E814u;
    {
        const bool branch_taken_0x33e814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E814u;
            // 0x33e818: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e814) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E81Cu;
label_33e81c:
    // 0x33e81c: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x33e81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_33e820:
    // 0x33e820: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x33e820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_33e824:
    // 0x33e824: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_33e828:
    if (ctx->pc == 0x33E828u) {
        ctx->pc = 0x33E828u;
            // 0x33e828: 0x8e040a68  lw          $a0, 0xA68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
        ctx->pc = 0x33E82Cu;
        goto label_33e82c;
    }
    ctx->pc = 0x33E824u;
    {
        const bool branch_taken_0x33e824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33e824) {
            ctx->pc = 0x33E828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E824u;
            // 0x33e828: 0x8e040a68  lw          $a0, 0xA68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E83Cu;
            goto label_33e83c;
        }
    }
    ctx->pc = 0x33E82Cu;
label_33e82c:
    // 0x33e82c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x33e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_33e830:
    // 0x33e830: 0x54830189  bnel        $a0, $v1, . + 4 + (0x189 << 2)
label_33e834:
    if (ctx->pc == 0x33E834u) {
        ctx->pc = 0x33E834u;
            // 0x33e834: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33E838u;
        goto label_33e838;
    }
    ctx->pc = 0x33E830u;
    {
        const bool branch_taken_0x33e830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33e830) {
            ctx->pc = 0x33E834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E830u;
            // 0x33e834: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E838u;
label_33e838:
    // 0x33e838: 0x8e040a68  lw          $a0, 0xA68($s0)
    ctx->pc = 0x33e838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
label_33e83c:
    // 0x33e83c: 0x26050a50  addiu       $a1, $s0, 0xA50
    ctx->pc = 0x33e83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_33e840:
    // 0x33e840: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33e840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e844:
    // 0x33e844: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33e844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_33e848:
    // 0x33e848: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33e848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_33e84c:
    // 0x33e84c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x33e84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33e850:
    // 0x33e850: 0x8c8401a8  lw          $a0, 0x1A8($a0)
    ctx->pc = 0x33e850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
label_33e854:
    // 0x33e854: 0x54830180  bnel        $a0, $v1, . + 4 + (0x180 << 2)
label_33e858:
    if (ctx->pc == 0x33E858u) {
        ctx->pc = 0x33E858u;
            // 0x33e858: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33E85Cu;
        goto label_33e85c;
    }
    ctx->pc = 0x33E854u;
    {
        const bool branch_taken_0x33e854 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33e854) {
            ctx->pc = 0x33E858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E854u;
            // 0x33e858: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E85Cu;
label_33e85c:
    // 0x33e85c: 0x92230d3a  lbu         $v1, 0xD3A($s1)
    ctx->pc = 0x33e85cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3386)));
label_33e860:
    // 0x33e860: 0x1460017d  bnez        $v1, . + 4 + (0x17D << 2)
label_33e864:
    if (ctx->pc == 0x33E864u) {
        ctx->pc = 0x33E868u;
        goto label_33e868;
    }
    ctx->pc = 0x33E860u;
    {
        const bool branch_taken_0x33e860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e860) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E868u;
label_33e868:
    // 0x33e868: 0x8e220d40  lw          $v0, 0xD40($s1)
    ctx->pc = 0x33e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
label_33e86c:
    // 0x33e86c: 0x240400e4  addiu       $a0, $zero, 0xE4
    ctx->pc = 0x33e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_33e870:
    // 0x33e870: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33e870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33e874:
    // 0x33e874: 0xae220d40  sw          $v0, 0xD40($s1)
    ctx->pc = 0x33e874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3392), GPR_U32(ctx, 2));
label_33e878:
    // 0x33e878: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x33e878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_33e87c:
    // 0x33e87c: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x33e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_33e880:
    // 0x33e880: 0x2472ff54  addiu       $s2, $v1, -0xAC
    ctx->pc = 0x33e880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
label_33e884:
    // 0x33e884: 0xc040180  jal         func_100600
label_33e888:
    if (ctx->pc == 0x33E888u) {
        ctx->pc = 0x33E888u;
            // 0x33e888: 0x24500064  addiu       $s0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->pc = 0x33E88Cu;
        goto label_33e88c;
    }
    ctx->pc = 0x33E884u;
    SET_GPR_U32(ctx, 31, 0x33E88Cu);
    ctx->pc = 0x33E888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E884u;
            // 0x33e888: 0x24500064  addiu       $s0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E88Cu; }
        if (ctx->pc != 0x33E88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E88Cu; }
        if (ctx->pc != 0x33E88Cu) { return; }
    }
    ctx->pc = 0x33E88Cu;
label_33e88c:
    // 0x33e88c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_33e890:
    if (ctx->pc == 0x33E890u) {
        ctx->pc = 0x33E890u;
            // 0x33e890: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33E894u;
        goto label_33e894;
    }
    ctx->pc = 0x33E88Cu;
    {
        const bool branch_taken_0x33e88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E88Cu;
            // 0x33e890: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e88c) {
            ctx->pc = 0x33E91Cu;
            goto label_33e91c;
        }
    }
    ctx->pc = 0x33E894u;
label_33e894:
    // 0x33e894: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33e894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33e898:
    // 0x33e898: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33e898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e89c:
    // 0x33e89c: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33e89cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33e8a0:
    // 0x33e8a0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33e8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33e8a4:
    // 0x33e8a4: 0xc10ca68  jal         func_4329A0
label_33e8a8:
    if (ctx->pc == 0x33E8A8u) {
        ctx->pc = 0x33E8A8u;
            // 0x33e8a8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33E8ACu;
        goto label_33e8ac;
    }
    ctx->pc = 0x33E8A4u;
    SET_GPR_U32(ctx, 31, 0x33E8ACu);
    ctx->pc = 0x33E8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E8A4u;
            // 0x33e8a8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E8ACu; }
        if (ctx->pc != 0x33E8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E8ACu; }
        if (ctx->pc != 0x33E8ACu) { return; }
    }
    ctx->pc = 0x33E8ACu;
label_33e8ac:
    // 0x33e8ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e8b0:
    // 0x33e8b0: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x33e8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_33e8b4:
    // 0x33e8b4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33e8b8:
    // 0x33e8b8: 0xc148880  jal         func_522200
label_33e8bc:
    if (ctx->pc == 0x33E8BCu) {
        ctx->pc = 0x33E8BCu;
            // 0x33e8bc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33E8C0u;
        goto label_33e8c0;
    }
    ctx->pc = 0x33E8B8u;
    SET_GPR_U32(ctx, 31, 0x33E8C0u);
    ctx->pc = 0x33E8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E8B8u;
            // 0x33e8bc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E8C0u; }
        if (ctx->pc != 0x33E8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E8C0u; }
        if (ctx->pc != 0x33E8C0u) { return; }
    }
    ctx->pc = 0x33E8C0u;
label_33e8c0:
    // 0x33e8c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e8c4:
    // 0x33e8c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33e8c8:
    // 0x33e8c8: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x33e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
label_33e8cc:
    // 0x33e8cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33e8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e8d0:
    // 0x33e8d0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x33e8d0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e8d4:
    // 0x33e8d4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x33e8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_33e8d8:
    // 0x33e8d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33e8dc:
    // 0x33e8dc: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x33e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_33e8e0:
    // 0x33e8e0: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x33e8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_33e8e4:
    // 0x33e8e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e8e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e8e8:
    // 0x33e8e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e8ec:
    // 0x33e8ec: 0xae630098  sw          $v1, 0x98($s3)
    ctx->pc = 0x33e8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
label_33e8f0:
    // 0x33e8f0: 0xae62009c  sw          $v0, 0x9C($s3)
    ctx->pc = 0x33e8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
label_33e8f4:
    // 0x33e8f4: 0xae6300a0  sw          $v1, 0xA0($s3)
    ctx->pc = 0x33e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 3));
label_33e8f8:
    // 0x33e8f8: 0xe66000c0  swc1        $f0, 0xC0($s3)
    ctx->pc = 0x33e8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_33e8fc:
    // 0x33e8fc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33e8fcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e900:
    // 0x33e900: 0x0  nop
    ctx->pc = 0x33e900u;
    // NOP
label_33e904:
    // 0x33e904: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33e904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33e908:
    // 0x33e908: 0xe66000c4  swc1        $f0, 0xC4($s3)
    ctx->pc = 0x33e908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 196), bits); }
label_33e90c:
    // 0x33e90c: 0xae6000c8  sw          $zero, 0xC8($s3)
    ctx->pc = 0x33e90cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 0));
label_33e910:
    // 0x33e910: 0xae6000cc  sw          $zero, 0xCC($s3)
    ctx->pc = 0x33e910u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 0));
label_33e914:
    // 0x33e914: 0xc0e030c  jal         func_380C30
label_33e918:
    if (ctx->pc == 0x33E918u) {
        ctx->pc = 0x33E918u;
            // 0x33e918: 0xae6000d0  sw          $zero, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33E91Cu;
        goto label_33e91c;
    }
    ctx->pc = 0x33E914u;
    SET_GPR_U32(ctx, 31, 0x33E91Cu);
    ctx->pc = 0x33E918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E914u;
            // 0x33e918: 0xae6000d0  sw          $zero, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380C30u;
    if (runtime->hasFunction(0x380C30u)) {
        auto targetFn = runtime->lookupFunction(0x380C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E91Cu; }
        if (ctx->pc != 0x33E91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380C30_0x380c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E91Cu; }
        if (ctx->pc != 0x33E91Cu) { return; }
    }
    ctx->pc = 0x33E91Cu;
label_33e91c:
    // 0x33e91c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e920:
    // 0x33e920: 0x1000014d  b           . + 4 + (0x14D << 2)
label_33e924:
    if (ctx->pc == 0x33E924u) {
        ctx->pc = 0x33E924u;
            // 0x33e924: 0xa2230d3a  sb          $v1, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x33E928u;
        goto label_33e928;
    }
    ctx->pc = 0x33E920u;
    {
        const bool branch_taken_0x33e920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E920u;
            // 0x33e924: 0xa2230d3a  sb          $v1, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e920) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E928u;
label_33e928:
    // 0x33e928: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x33e928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_33e92c:
    // 0x33e92c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x33e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_33e930:
    // 0x33e930: 0x5483002e  bnel        $a0, $v1, . + 4 + (0x2E << 2)
label_33e934:
    if (ctx->pc == 0x33E934u) {
        ctx->pc = 0x33E934u;
            // 0x33e934: 0xae200d40  sw          $zero, 0xD40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3392), GPR_U32(ctx, 0));
        ctx->pc = 0x33E938u;
        goto label_33e938;
    }
    ctx->pc = 0x33E930u;
    {
        const bool branch_taken_0x33e930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33e930) {
            ctx->pc = 0x33E934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E930u;
            // 0x33e934: 0xae200d40  sw          $zero, 0xD40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E9ECu;
            goto label_33e9ec;
        }
    }
    ctx->pc = 0x33E938u;
label_33e938:
    // 0x33e938: 0x8e040a68  lw          $a0, 0xA68($s0)
    ctx->pc = 0x33e938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
label_33e93c:
    // 0x33e93c: 0x26050a50  addiu       $a1, $s0, 0xA50
    ctx->pc = 0x33e93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_33e940:
    // 0x33e940: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33e940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e944:
    // 0x33e944: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33e944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_33e948:
    // 0x33e948: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33e948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_33e94c:
    // 0x33e94c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x33e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33e950:
    // 0x33e950: 0x8c8401a8  lw          $a0, 0x1A8($a0)
    ctx->pc = 0x33e950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
label_33e954:
    // 0x33e954: 0x54830140  bnel        $a0, $v1, . + 4 + (0x140 << 2)
label_33e958:
    if (ctx->pc == 0x33E958u) {
        ctx->pc = 0x33E958u;
            // 0x33e958: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33E95Cu;
        goto label_33e95c;
    }
    ctx->pc = 0x33E954u;
    {
        const bool branch_taken_0x33e954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33e954) {
            ctx->pc = 0x33E958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E954u;
            // 0x33e958: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E95Cu;
label_33e95c:
    // 0x33e95c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33e960:
    // 0x33e960: 0x92240d3a  lbu         $a0, 0xD3A($s1)
    ctx->pc = 0x33e960u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3386)));
label_33e964:
    // 0x33e964: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x33e964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_33e968:
    // 0x33e968: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_33e96c:
    if (ctx->pc == 0x33E96Cu) {
        ctx->pc = 0x33E96Cu;
            // 0x33e96c: 0xc4610014  lwc1        $f1, 0x14($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x33E970u;
        goto label_33e970;
    }
    ctx->pc = 0x33E968u;
    {
        const bool branch_taken_0x33e968 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E968u;
            // 0x33e96c: 0xc4610014  lwc1        $f1, 0x14($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e968) {
            ctx->pc = 0x33E984u;
            goto label_33e984;
        }
    }
    ctx->pc = 0x33E970u;
label_33e970:
    // 0x33e970: 0x8e240d40  lw          $a0, 0xD40($s1)
    ctx->pc = 0x33e970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
label_33e974:
    // 0x33e974: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33e974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e978:
    // 0x33e978: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33e978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_33e97c:
    // 0x33e97c: 0xae240d40  sw          $a0, 0xD40($s1)
    ctx->pc = 0x33e97cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3392), GPR_U32(ctx, 4));
label_33e980:
    // 0x33e980: 0xa2230d3a  sb          $v1, 0xD3A($s1)
    ctx->pc = 0x33e980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 3));
label_33e984:
    // 0x33e984: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x33e984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_33e988:
    // 0x33e988: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x33e988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_33e98c:
    // 0x33e98c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x33e98cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e990:
    // 0x33e990: 0x0  nop
    ctx->pc = 0x33e990u;
    // NOP
label_33e994:
    // 0x33e994: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x33e994u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_33e998:
    // 0x33e998: 0x0  nop
    ctx->pc = 0x33e998u;
    // NOP
label_33e99c:
    // 0x33e99c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33e99cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e9a0:
    // 0x33e9a0: 0x0  nop
    ctx->pc = 0x33e9a0u;
    // NOP
label_33e9a4:
    // 0x33e9a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33e9a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33e9a8:
    // 0x33e9a8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_33e9ac:
    if (ctx->pc == 0x33E9ACu) {
        ctx->pc = 0x33E9ACu;
            // 0x33e9ac: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x33E9B0u;
        goto label_33e9b0;
    }
    ctx->pc = 0x33E9A8u;
    {
        const bool branch_taken_0x33e9a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e9a8) {
            ctx->pc = 0x33E9ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E9A8u;
            // 0x33e9ac: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E9C0u;
            goto label_33e9c0;
        }
    }
    ctx->pc = 0x33E9B0u;
label_33e9b0:
    // 0x33e9b0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33e9b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33e9b4:
    // 0x33e9b4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x33e9b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_33e9b8:
    // 0x33e9b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_33e9bc:
    if (ctx->pc == 0x33E9BCu) {
        ctx->pc = 0x33E9BCu;
            // 0x33e9bc: 0x8e240d40  lw          $a0, 0xD40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
        ctx->pc = 0x33E9C0u;
        goto label_33e9c0;
    }
    ctx->pc = 0x33E9B8u;
    {
        const bool branch_taken_0x33e9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E9B8u;
            // 0x33e9bc: 0x8e240d40  lw          $a0, 0xD40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e9b8) {
            ctx->pc = 0x33E9D8u;
            goto label_33e9d8;
        }
    }
    ctx->pc = 0x33E9C0u;
label_33e9c0:
    // 0x33e9c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_33e9c4:
    // 0x33e9c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33e9c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33e9c8:
    // 0x33e9c8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x33e9c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_33e9cc:
    // 0x33e9cc: 0x0  nop
    ctx->pc = 0x33e9ccu;
    // NOP
label_33e9d0:
    // 0x33e9d0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x33e9d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_33e9d4:
    // 0x33e9d4: 0x8e240d40  lw          $a0, 0xD40($s1)
    ctx->pc = 0x33e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
label_33e9d8:
    // 0x33e9d8: 0x8e230d3c  lw          $v1, 0xD3C($s1)
    ctx->pc = 0x33e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
label_33e9dc:
    // 0x33e9dc: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x33e9dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_33e9e0:
    // 0x33e9e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33e9e4:
    // 0x33e9e4: 0x1000011c  b           . + 4 + (0x11C << 2)
label_33e9e8:
    if (ctx->pc == 0x33E9E8u) {
        ctx->pc = 0x33E9E8u;
            // 0x33e9e8: 0xae230d3c  sw          $v1, 0xD3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 3));
        ctx->pc = 0x33E9ECu;
        goto label_33e9ec;
    }
    ctx->pc = 0x33E9E4u;
    {
        const bool branch_taken_0x33e9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E9E4u;
            // 0x33e9e8: 0xae230d3c  sw          $v1, 0xD3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e9e4) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E9ECu;
label_33e9ec:
    // 0x33e9ec: 0x1000011a  b           . + 4 + (0x11A << 2)
label_33e9f0:
    if (ctx->pc == 0x33E9F0u) {
        ctx->pc = 0x33E9F0u;
            // 0x33e9f0: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33E9F4u;
        goto label_33e9f4;
    }
    ctx->pc = 0x33E9ECu;
    {
        const bool branch_taken_0x33e9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E9ECu;
            // 0x33e9f0: 0xa2200d3a  sb          $zero, 0xD3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3386), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e9ec) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33E9F4u;
label_33e9f4:
    // 0x33e9f4: 0x8e220d20  lw          $v0, 0xD20($s1)
    ctx->pc = 0x33e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3360)));
label_33e9f8:
    // 0x33e9f8: 0x544000a2  bnel        $v0, $zero, . + 4 + (0xA2 << 2)
label_33e9fc:
    if (ctx->pc == 0x33E9FCu) {
        ctx->pc = 0x33E9FCu;
            // 0x33e9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33EA00u;
        goto label_33ea00;
    }
    ctx->pc = 0x33E9F8u;
    {
        const bool branch_taken_0x33e9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e9f8) {
            ctx->pc = 0x33E9FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E9F8u;
            // 0x33e9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33EC84u;
            goto label_33ec84;
        }
    }
    ctx->pc = 0x33EA00u;
label_33ea00:
    // 0x33ea00: 0x8e240cc8  lw          $a0, 0xCC8($s1)
    ctx->pc = 0x33ea00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3272)));
label_33ea04:
    // 0x33ea04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33ea04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33ea08:
    // 0x33ea08: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x33ea08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_33ea0c:
    // 0x33ea0c: 0x320f809  jalr        $t9
label_33ea10:
    if (ctx->pc == 0x33EA10u) {
        ctx->pc = 0x33EA10u;
            // 0x33ea10: 0x261602c0  addiu       $s6, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x33EA14u;
        goto label_33ea14;
    }
    ctx->pc = 0x33EA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33EA14u);
        ctx->pc = 0x33EA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EA0Cu;
            // 0x33ea10: 0x261602c0  addiu       $s6, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33EA14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33EA14u; }
            if (ctx->pc != 0x33EA14u) { return; }
        }
        }
    }
    ctx->pc = 0x33EA14u;
label_33ea14:
    // 0x33ea14: 0x8e240cc8  lw          $a0, 0xCC8($s1)
    ctx->pc = 0x33ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3272)));
label_33ea18:
    // 0x33ea18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33ea18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33ea1c:
    // 0x33ea1c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x33ea1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_33ea20:
    // 0x33ea20: 0x320f809  jalr        $t9
label_33ea24:
    if (ctx->pc == 0x33EA24u) {
        ctx->pc = 0x33EA24u;
            // 0x33ea24: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33EA28u;
        goto label_33ea28;
    }
    ctx->pc = 0x33EA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33EA28u);
        ctx->pc = 0x33EA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EA20u;
            // 0x33ea24: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33EA28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33EA28u; }
            if (ctx->pc != 0x33EA28u) { return; }
        }
        }
    }
    ctx->pc = 0x33EA28u;
label_33ea28:
    // 0x33ea28: 0x96120c7e  lhu         $s2, 0xC7E($s0)
    ctx->pc = 0x33ea28u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 3198)));
label_33ea2c:
    // 0x33ea2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x33ea2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33ea30:
    // 0x33ea30: 0x8e240cc8  lw          $a0, 0xCC8($s1)
    ctx->pc = 0x33ea30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3272)));
label_33ea34:
    // 0x33ea34: 0xc0db60c  jal         func_36D830
label_33ea38:
    if (ctx->pc == 0x33EA38u) {
        ctx->pc = 0x33EA38u;
            // 0x33ea38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33EA3Cu;
        goto label_33ea3c;
    }
    ctx->pc = 0x33EA34u;
    SET_GPR_U32(ctx, 31, 0x33EA3Cu);
    ctx->pc = 0x33EA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EA34u;
            // 0x33ea38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D830u;
    if (runtime->hasFunction(0x36D830u)) {
        auto targetFn = runtime->lookupFunction(0x36D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EA3Cu; }
        if (ctx->pc != 0x33EA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D830_0x36d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EA3Cu; }
        if (ctx->pc != 0x33EA3Cu) { return; }
    }
    ctx->pc = 0x33EA3Cu;
label_33ea3c:
    // 0x33ea3c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_33ea40:
    if (ctx->pc == 0x33EA40u) {
        ctx->pc = 0x33EA40u;
            // 0x33ea40: 0xae220d20  sw          $v0, 0xD20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3360), GPR_U32(ctx, 2));
        ctx->pc = 0x33EA44u;
        goto label_33ea44;
    }
    ctx->pc = 0x33EA3Cu;
    {
        const bool branch_taken_0x33ea3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EA3Cu;
            // 0x33ea40: 0xae220d20  sw          $v0, 0xD20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ea3c) {
            ctx->pc = 0x33EB88u;
            goto label_33eb88;
        }
    }
    ctx->pc = 0x33EA44u;
label_33ea44:
    // 0x33ea44: 0xc6210844  lwc1        $f1, 0x844($s1)
    ctx->pc = 0x33ea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33ea48:
    // 0x33ea48: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x33ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_33ea4c:
    // 0x33ea4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33ea4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33ea50:
    // 0x33ea50: 0x0  nop
    ctx->pc = 0x33ea50u;
    // NOP
label_33ea54:
    // 0x33ea54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33ea54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33ea58:
    // 0x33ea58: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_33ea5c:
    if (ctx->pc == 0x33EA5Cu) {
        ctx->pc = 0x33EA5Cu;
            // 0x33ea5c: 0x26240838  addiu       $a0, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->pc = 0x33EA60u;
        goto label_33ea60;
    }
    ctx->pc = 0x33EA58u;
    {
        const bool branch_taken_0x33ea58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33EA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EA58u;
            // 0x33ea5c: 0x26240838  addiu       $a0, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ea58) {
            ctx->pc = 0x33EA70u;
            goto label_33ea70;
        }
    }
    ctx->pc = 0x33EA60u;
label_33ea60:
    // 0x33ea60: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33ea60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33ea64:
    // 0x33ea64: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33ea64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_33ea68:
    // 0x33ea68: 0x10000008  b           . + 4 + (0x8 << 2)
label_33ea6c:
    if (ctx->pc == 0x33EA6Cu) {
        ctx->pc = 0x33EA6Cu;
            // 0x33ea6c: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x33EA70u;
        goto label_33ea70;
    }
    ctx->pc = 0x33EA68u;
    {
        const bool branch_taken_0x33ea68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EA68u;
            // 0x33ea6c: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ea68) {
            ctx->pc = 0x33EA8Cu;
            goto label_33ea8c;
        }
    }
    ctx->pc = 0x33EA70u;
label_33ea70:
    // 0x33ea70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33ea70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_33ea74:
    // 0x33ea74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_33ea78:
    // 0x33ea78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33ea78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33ea7c:
    // 0x33ea7c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33ea7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_33ea80:
    // 0x33ea80: 0x0  nop
    ctx->pc = 0x33ea80u;
    // NOP
label_33ea84:
    // 0x33ea84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33ea84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_33ea88:
    // 0x33ea88: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x33ea88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33ea8c:
    // 0x33ea8c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33ea90:
    // 0x33ea90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33ea94:
    // 0x33ea94: 0x23840  sll         $a3, $v0, 1
    ctx->pc = 0x33ea94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_33ea98:
    // 0x33ea98: 0x3403ea60  ori         $v1, $zero, 0xEA60
    ctx->pc = 0x33ea98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_33ea9c:
    // 0x33ea9c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x33ea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33eaa0:
    // 0x33eaa0: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x33eaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_33eaa4:
    // 0x33eaa4: 0x8e220cd4  lw          $v0, 0xCD4($s1)
    ctx->pc = 0x33eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3284)));
label_33eaa8:
    // 0x33eaa8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x33eaa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33eaac:
    // 0x33eaac: 0xa62023  subu        $a0, $a1, $a2
    ctx->pc = 0x33eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_33eab0:
    // 0x33eab0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x33eab0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_33eab4:
    // 0x33eab4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x33eab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_33eab8:
    // 0x33eab8: 0x240400e4  addiu       $a0, $zero, 0xE4
    ctx->pc = 0x33eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_33eabc:
    // 0x33eabc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x33eabcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_33eac0:
    // 0x33eac0: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x33eac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_33eac4:
    // 0x33eac4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x33eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_33eac8:
    // 0x33eac8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x33eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33eacc:
    // 0x33eacc: 0xae220d3c  sw          $v0, 0xD3C($s1)
    ctx->pc = 0x33eaccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 2));
label_33ead0:
    // 0x33ead0: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x33ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_33ead4:
    // 0x33ead4: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x33ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_33ead8:
    // 0x33ead8: 0x2475ff54  addiu       $s5, $v1, -0xAC
    ctx->pc = 0x33ead8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
label_33eadc:
    // 0x33eadc: 0x245e0064  addiu       $fp, $v0, 0x64
    ctx->pc = 0x33eadcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_33eae0:
    // 0x33eae0: 0xc040180  jal         func_100600
label_33eae4:
    if (ctx->pc == 0x33EAE4u) {
        ctx->pc = 0x33EAE4u;
            // 0x33eae4: 0xa2200d10  sb          $zero, 0xD10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3344), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33EAE8u;
        goto label_33eae8;
    }
    ctx->pc = 0x33EAE0u;
    SET_GPR_U32(ctx, 31, 0x33EAE8u);
    ctx->pc = 0x33EAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EAE0u;
            // 0x33eae4: 0xa2200d10  sb          $zero, 0xD10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EAE8u; }
        if (ctx->pc != 0x33EAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EAE8u; }
        if (ctx->pc != 0x33EAE8u) { return; }
    }
    ctx->pc = 0x33EAE8u;
label_33eae8:
    // 0x33eae8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_33eaec:
    if (ctx->pc == 0x33EAECu) {
        ctx->pc = 0x33EAECu;
            // 0x33eaec: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33EAF0u;
        goto label_33eaf0;
    }
    ctx->pc = 0x33EAE8u;
    {
        const bool branch_taken_0x33eae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EAE8u;
            // 0x33eaec: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eae8) {
            ctx->pc = 0x33EB88u;
            goto label_33eb88;
        }
    }
    ctx->pc = 0x33EAF0u;
label_33eaf0:
    // 0x33eaf0: 0x8e220d3c  lw          $v0, 0xD3C($s1)
    ctx->pc = 0x33eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
label_33eaf4:
    // 0x33eaf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33eaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33eaf8:
    // 0x33eaf8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33eaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33eafc:
    // 0x33eafc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x33eafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33eb00:
    // 0x33eb00: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x33eb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_33eb04:
    // 0x33eb04: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33eb08:
    // 0x33eb08: 0xc10ca68  jal         func_4329A0
label_33eb0c:
    if (ctx->pc == 0x33EB0Cu) {
        ctx->pc = 0x33EB0Cu;
            // 0x33eb0c: 0x3445af29  ori         $a1, $v0, 0xAF29 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
        ctx->pc = 0x33EB10u;
        goto label_33eb10;
    }
    ctx->pc = 0x33EB08u;
    SET_GPR_U32(ctx, 31, 0x33EB10u);
    ctx->pc = 0x33EB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EB08u;
            // 0x33eb0c: 0x3445af29  ori         $a1, $v0, 0xAF29 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EB10u; }
        if (ctx->pc != 0x33EB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EB10u; }
        if (ctx->pc != 0x33EB10u) { return; }
    }
    ctx->pc = 0x33EB10u;
label_33eb10:
    // 0x33eb10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33eb14:
    // 0x33eb14: 0x26840054  addiu       $a0, $s4, 0x54
    ctx->pc = 0x33eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
label_33eb18:
    // 0x33eb18: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33eb1c:
    // 0x33eb1c: 0xc148880  jal         func_522200
label_33eb20:
    if (ctx->pc == 0x33EB20u) {
        ctx->pc = 0x33EB20u;
            // 0x33eb20: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33EB24u;
        goto label_33eb24;
    }
    ctx->pc = 0x33EB1Cu;
    SET_GPR_U32(ctx, 31, 0x33EB24u);
    ctx->pc = 0x33EB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EB1Cu;
            // 0x33eb20: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EB24u; }
        if (ctx->pc != 0x33EB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EB24u; }
        if (ctx->pc != 0x33EB24u) { return; }
    }
    ctx->pc = 0x33EB24u;
label_33eb24:
    // 0x33eb24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33eb28:
    // 0x33eb28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33eb2c:
    // 0x33eb2c: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x33eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
label_33eb30:
    // 0x33eb30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33eb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33eb34:
    // 0x33eb34: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x33eb34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_33eb38:
    // 0x33eb38: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x33eb38u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33eb3c:
    // 0x33eb3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33eb40:
    // 0x33eb40: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x33eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_33eb44:
    // 0x33eb44: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x33eb44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_33eb48:
    // 0x33eb48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33eb48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33eb4c:
    // 0x33eb4c: 0xae830098  sw          $v1, 0x98($s4)
    ctx->pc = 0x33eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 3));
label_33eb50:
    // 0x33eb50: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x33eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_33eb54:
    // 0x33eb54: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x33eb54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
label_33eb58:
    // 0x33eb58: 0x26230d10  addiu       $v1, $s1, 0xD10
    ctx->pc = 0x33eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3344));
label_33eb5c:
    // 0x33eb5c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x33eb5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_33eb60:
    // 0x33eb60: 0xae8200a0  sw          $v0, 0xA0($s4)
    ctx->pc = 0x33eb60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 2));
label_33eb64:
    // 0x33eb64: 0xe68000c0  swc1        $f0, 0xC0($s4)
    ctx->pc = 0x33eb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 192), bits); }
label_33eb68:
    // 0x33eb68: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x33eb68u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33eb6c:
    // 0x33eb6c: 0x0  nop
    ctx->pc = 0x33eb6cu;
    // NOP
label_33eb70:
    // 0x33eb70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33eb70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33eb74:
    // 0x33eb74: 0xe68000c4  swc1        $f0, 0xC4($s4)
    ctx->pc = 0x33eb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 196), bits); }
label_33eb78:
    // 0x33eb78: 0xae8300c8  sw          $v1, 0xC8($s4)
    ctx->pc = 0x33eb78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 200), GPR_U32(ctx, 3));
label_33eb7c:
    // 0x33eb7c: 0xae8000cc  sw          $zero, 0xCC($s4)
    ctx->pc = 0x33eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 204), GPR_U32(ctx, 0));
label_33eb80:
    // 0x33eb80: 0xc0e030c  jal         func_380C30
label_33eb84:
    if (ctx->pc == 0x33EB84u) {
        ctx->pc = 0x33EB84u;
            // 0x33eb84: 0xae8000d0  sw          $zero, 0xD0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33EB88u;
        goto label_33eb88;
    }
    ctx->pc = 0x33EB80u;
    SET_GPR_U32(ctx, 31, 0x33EB88u);
    ctx->pc = 0x33EB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EB80u;
            // 0x33eb84: 0xae8000d0  sw          $zero, 0xD0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380C30u;
    if (runtime->hasFunction(0x380C30u)) {
        auto targetFn = runtime->lookupFunction(0x380C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EB88u; }
        if (ctx->pc != 0x33EB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380C30_0x380c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EB88u; }
        if (ctx->pc != 0x33EB88u) { return; }
    }
    ctx->pc = 0x33EB88u;
label_33eb88:
    // 0x33eb88: 0x6620015  bltzl       $s3, . + 4 + (0x15 << 2)
label_33eb8c:
    if (ctx->pc == 0x33EB8Cu) {
        ctx->pc = 0x33EB8Cu;
            // 0x33eb8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33EB90u;
        goto label_33eb90;
    }
    ctx->pc = 0x33EB88u;
    {
        const bool branch_taken_0x33eb88 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x33eb88) {
            ctx->pc = 0x33EB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EB88u;
            // 0x33eb8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33EBE0u;
            goto label_33ebe0;
        }
    }
    ctx->pc = 0x33EB90u;
label_33eb90:
    // 0x33eb90: 0x96220d30  lhu         $v0, 0xD30($s1)
    ctx->pc = 0x33eb90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3376)));
label_33eb94:
    // 0x33eb94: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_33eb98:
    if (ctx->pc == 0x33EB98u) {
        ctx->pc = 0x33EB98u;
            // 0x33eb98: 0x8e220d28  lw          $v0, 0xD28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3368)));
        ctx->pc = 0x33EB9Cu;
        goto label_33eb9c;
    }
    ctx->pc = 0x33EB94u;
    {
        const bool branch_taken_0x33eb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33eb94) {
            ctx->pc = 0x33EB98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EB94u;
            // 0x33eb98: 0x8e220d28  lw          $v0, 0xD28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3368)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33EBCCu;
            goto label_33ebcc;
        }
    }
    ctx->pc = 0x33EB9Cu;
label_33eb9c:
    // 0x33eb9c: 0x8e230d28  lw          $v1, 0xD28($s1)
    ctx->pc = 0x33eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3368)));
label_33eba0:
    // 0x33eba0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33eba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33eba4:
    // 0x33eba4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33eba8:
    // 0x33eba8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x33eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33ebac:
    // 0x33ebac: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x33ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_33ebb0:
    // 0x33ebb0: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
label_33ebb4:
    if (ctx->pc == 0x33EBB4u) {
        ctx->pc = 0x33EBB8u;
        goto label_33ebb8;
    }
    ctx->pc = 0x33EBB0u;
    {
        const bool branch_taken_0x33ebb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ebb0) {
            ctx->pc = 0x33EBDCu;
            goto label_33ebdc;
        }
    }
    ctx->pc = 0x33EBB8u;
label_33ebb8:
    // 0x33ebb8: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x33ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_33ebbc:
    // 0x33ebbc: 0x96220d30  lhu         $v0, 0xD30($s1)
    ctx->pc = 0x33ebbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3376)));
label_33ebc0:
    // 0x33ebc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33ebc4:
    // 0x33ebc4: 0x10000005  b           . + 4 + (0x5 << 2)
label_33ebc8:
    if (ctx->pc == 0x33EBC8u) {
        ctx->pc = 0x33EBC8u;
            // 0x33ebc8: 0xa6220d30  sh          $v0, 0xD30($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 3376), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x33EBCCu;
        goto label_33ebcc;
    }
    ctx->pc = 0x33EBC4u;
    {
        const bool branch_taken_0x33ebc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EBC4u;
            // 0x33ebc8: 0xa6220d30  sh          $v0, 0xD30($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 3376), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ebc4) {
            ctx->pc = 0x33EBDCu;
            goto label_33ebdc;
        }
    }
    ctx->pc = 0x33EBCCu;
label_33ebcc:
    // 0x33ebcc: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x33ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_33ebd0:
    // 0x33ebd0: 0x96220d30  lhu         $v0, 0xD30($s1)
    ctx->pc = 0x33ebd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3376)));
label_33ebd4:
    // 0x33ebd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33ebd8:
    // 0x33ebd8: 0xa6220d30  sh          $v0, 0xD30($s1)
    ctx->pc = 0x33ebd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3376), (uint16_t)GPR_U32(ctx, 2));
label_33ebdc:
    // 0x33ebdc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x33ebdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_33ebe0:
    // 0x33ebe0: 0xc04cc1c  jal         func_133070
label_33ebe4:
    if (ctx->pc == 0x33EBE4u) {
        ctx->pc = 0x33EBE4u;
            // 0x33ebe4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33EBE8u;
        goto label_33ebe8;
    }
    ctx->pc = 0x33EBE0u;
    SET_GPR_U32(ctx, 31, 0x33EBE8u);
    ctx->pc = 0x33EBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EBE0u;
            // 0x33ebe4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EBE8u; }
        if (ctx->pc != 0x33EBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EBE8u; }
        if (ctx->pc != 0x33EBE8u) { return; }
    }
    ctx->pc = 0x33EBE8u;
label_33ebe8:
    // 0x33ebe8: 0xe6200d40  swc1        $f0, 0xD40($s1)
    ctx->pc = 0x33ebe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3392), bits); }
label_33ebec:
    // 0x33ebec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x33ebecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ebf0:
    // 0x33ebf0: 0x8e230d28  lw          $v1, 0xD28($s1)
    ctx->pc = 0x33ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3368)));
label_33ebf4:
    // 0x33ebf4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x33ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_33ebf8:
    // 0x33ebf8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33ebfc:
    // 0x33ebfc: 0x16430010  bne         $s2, $v1, . + 4 + (0x10 << 2)
label_33ec00:
    if (ctx->pc == 0x33EC00u) {
        ctx->pc = 0x33EC04u;
        goto label_33ec04;
    }
    ctx->pc = 0x33EBFCu;
    {
        const bool branch_taken_0x33ebfc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x33ebfc) {
            ctx->pc = 0x33EC40u;
            goto label_33ec40;
        }
    }
    ctx->pc = 0x33EC04u;
label_33ec04:
    // 0x33ec04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33ec08:
    // 0x33ec08: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x33ec08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_33ec0c:
    // 0x33ec0c: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x33ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_33ec10:
    // 0x33ec10: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x33ec10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33ec14:
    // 0x33ec14: 0x8c55012c  lw          $s5, 0x12C($v0)
    ctx->pc = 0x33ec14u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_33ec18:
    // 0x33ec18: 0xc0c60c4  jal         func_318310
label_33ec1c:
    if (ctx->pc == 0x33EC1Cu) {
        ctx->pc = 0x33EC1Cu;
            // 0x33ec1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33EC20u;
        goto label_33ec20;
    }
    ctx->pc = 0x33EC18u;
    SET_GPR_U32(ctx, 31, 0x33EC20u);
    ctx->pc = 0x33EC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EC18u;
            // 0x33ec1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318310u;
    if (runtime->hasFunction(0x318310u)) {
        auto targetFn = runtime->lookupFunction(0x318310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EC20u; }
        if (ctx->pc != 0x33EC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318310_0x318310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EC20u; }
        if (ctx->pc != 0x33EC20u) { return; }
    }
    ctx->pc = 0x33EC20u;
label_33ec20:
    // 0x33ec20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x33ec20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33ec24:
    // 0x33ec24: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x33ec24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_33ec28:
    // 0x33ec28: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x33ec28u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_33ec2c:
    // 0x33ec2c: 0xc0c60c4  jal         func_318310
label_33ec30:
    if (ctx->pc == 0x33EC30u) {
        ctx->pc = 0x33EC30u;
            // 0x33ec30: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33EC34u;
        goto label_33ec34;
    }
    ctx->pc = 0x33EC2Cu;
    SET_GPR_U32(ctx, 31, 0x33EC34u);
    ctx->pc = 0x33EC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EC2Cu;
            // 0x33ec30: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318310u;
    if (runtime->hasFunction(0x318310u)) {
        auto targetFn = runtime->lookupFunction(0x318310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EC34u; }
        if (ctx->pc != 0x33EC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318310_0x318310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EC34u; }
        if (ctx->pc != 0x33EC34u) { return; }
    }
    ctx->pc = 0x33EC34u;
label_33ec34:
    // 0x33ec34: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x33ec34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_33ec38:
    // 0x33ec38: 0xe6200d40  swc1        $f0, 0xD40($s1)
    ctx->pc = 0x33ec38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3392), bits); }
label_33ec3c:
    // 0x33ec3c: 0x0  nop
    ctx->pc = 0x33ec3cu;
    // NOP
label_33ec40:
    // 0x33ec40: 0x96230d30  lhu         $v1, 0xD30($s1)
    ctx->pc = 0x33ec40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3376)));
label_33ec44:
    // 0x33ec44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33ec44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33ec48:
    // 0x33ec48: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x33ec48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_33ec4c:
    // 0x33ec4c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_33ec50:
    if (ctx->pc == 0x33EC50u) {
        ctx->pc = 0x33EC50u;
            // 0x33ec50: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x33EC54u;
        goto label_33ec54;
    }
    ctx->pc = 0x33EC4Cu;
    {
        const bool branch_taken_0x33ec4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33EC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EC4Cu;
            // 0x33ec50: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ec4c) {
            ctx->pc = 0x33EBF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33ebf0;
        }
    }
    ctx->pc = 0x33EC54u;
label_33ec54:
    // 0x33ec54: 0xc6210d40  lwc1        $f1, 0xD40($s1)
    ctx->pc = 0x33ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33ec58:
    // 0x33ec58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33ec58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33ec5c:
    // 0x33ec5c: 0x0  nop
    ctx->pc = 0x33ec5cu;
    // NOP
label_33ec60:
    // 0x33ec60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33ec60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33ec64:
    // 0x33ec64: 0x4500007c  bc1f        . + 4 + (0x7C << 2)
label_33ec68:
    if (ctx->pc == 0x33EC68u) {
        ctx->pc = 0x33EC6Cu;
        goto label_33ec6c;
    }
    ctx->pc = 0x33EC64u;
    {
        const bool branch_taken_0x33ec64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ec64) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33EC6Cu;
label_33ec6c:
    // 0x33ec6c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x33ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_33ec70:
    // 0x33ec70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33ec70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33ec74:
    // 0x33ec74: 0x0  nop
    ctx->pc = 0x33ec74u;
    // NOP
label_33ec78:
    // 0x33ec78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33ec78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_33ec7c:
    // 0x33ec7c: 0x10000076  b           . + 4 + (0x76 << 2)
label_33ec80:
    if (ctx->pc == 0x33EC80u) {
        ctx->pc = 0x33EC80u;
            // 0x33ec80: 0xe6200d40  swc1        $f0, 0xD40($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3392), bits); }
        ctx->pc = 0x33EC84u;
        goto label_33ec84;
    }
    ctx->pc = 0x33EC7Cu;
    {
        const bool branch_taken_0x33ec7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EC7Cu;
            // 0x33ec80: 0xe6200d40  swc1        $f0, 0xD40($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ec7c) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33EC84u;
label_33ec84:
    // 0x33ec84: 0xc07634c  jal         func_1D8D30
label_33ec88:
    if (ctx->pc == 0x33EC88u) {
        ctx->pc = 0x33EC8Cu;
        goto label_33ec8c;
    }
    ctx->pc = 0x33EC84u;
    SET_GPR_U32(ctx, 31, 0x33EC8Cu);
    ctx->pc = 0x1D8D30u;
    if (runtime->hasFunction(0x1D8D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EC8Cu; }
        if (ctx->pc != 0x33EC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8D30_0x1d8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EC8Cu; }
        if (ctx->pc != 0x33EC8Cu) { return; }
    }
    ctx->pc = 0x33EC8Cu;
label_33ec8c:
    // 0x33ec8c: 0x10000072  b           . + 4 + (0x72 << 2)
label_33ec90:
    if (ctx->pc == 0x33EC90u) {
        ctx->pc = 0x33EC94u;
        goto label_33ec94;
    }
    ctx->pc = 0x33EC8Cu;
    {
        const bool branch_taken_0x33ec8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ec8c) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33EC94u;
label_33ec94:
    // 0x33ec94: 0x8e030db0  lw          $v1, 0xDB0($s0)
    ctx->pc = 0x33ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_33ec98:
    // 0x33ec98: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x33ec98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_33ec9c:
    // 0x33ec9c: 0x5466001c  bnel        $v1, $a2, . + 4 + (0x1C << 2)
label_33eca0:
    if (ctx->pc == 0x33ECA0u) {
        ctx->pc = 0x33ECA0u;
            // 0x33eca0: 0x92230d32  lbu         $v1, 0xD32($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3378)));
        ctx->pc = 0x33ECA4u;
        goto label_33eca4;
    }
    ctx->pc = 0x33EC9Cu;
    {
        const bool branch_taken_0x33ec9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x33ec9c) {
            ctx->pc = 0x33ECA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EC9Cu;
            // 0x33eca0: 0x92230d32  lbu         $v1, 0xD32($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3378)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33ED10u;
            goto label_33ed10;
        }
    }
    ctx->pc = 0x33ECA4u;
label_33eca4:
    // 0x33eca4: 0x8e030d74  lw          $v1, 0xD74($s0)
    ctx->pc = 0x33eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_33eca8:
    // 0x33eca8: 0x8e28077c  lw          $t0, 0x77C($s1)
    ctx->pc = 0x33eca8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1916)));
label_33ecac:
    // 0x33ecac: 0x8c6702bc  lw          $a3, 0x2BC($v1)
    ctx->pc = 0x33ecacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 700)));
label_33ecb0:
    // 0x33ecb0: 0x29010002  slti        $at, $t0, 0x2
    ctx->pc = 0x33ecb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_33ecb4:
    // 0x33ecb4: 0x14200068  bnez        $at, . + 4 + (0x68 << 2)
label_33ecb8:
    if (ctx->pc == 0x33ECB8u) {
        ctx->pc = 0x33ECB8u;
            // 0x33ecb8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33ECBCu;
        goto label_33ecbc;
    }
    ctx->pc = 0x33ECB4u;
    {
        const bool branch_taken_0x33ecb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x33ECB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33ECB4u;
            // 0x33ecb8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ecb4) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33ECBCu;
label_33ecbc:
    // 0x33ecbc: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x33ecbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_33ecc0:
    // 0x33ecc0: 0x1262804  sllv        $a1, $a2, $t1
    ctx->pc = 0x33ecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
label_33ecc4:
    // 0x33ecc4: 0xe51824  and         $v1, $a3, $a1
    ctx->pc = 0x33ecc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_33ecc8:
    // 0x33ecc8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_33eccc:
    if (ctx->pc == 0x33ECCCu) {
        ctx->pc = 0x33ECD0u;
        goto label_33ecd0;
    }
    ctx->pc = 0x33ECC8u;
    {
        const bool branch_taken_0x33ecc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ecc8) {
            ctx->pc = 0x33ECF8u;
            goto label_33ecf8;
        }
    }
    ctx->pc = 0x33ECD0u;
label_33ecd0:
    // 0x33ecd0: 0x8e240d40  lw          $a0, 0xD40($s1)
    ctx->pc = 0x33ecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
label_33ecd4:
    // 0x33ecd4: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x33ecd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_33ecd8:
    // 0x33ecd8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_33ecdc:
    if (ctx->pc == 0x33ECDCu) {
        ctx->pc = 0x33ECE0u;
        goto label_33ece0;
    }
    ctx->pc = 0x33ECD8u;
    {
        const bool branch_taken_0x33ecd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ecd8) {
            ctx->pc = 0x33ECF8u;
            goto label_33ecf8;
        }
    }
    ctx->pc = 0x33ECE0u;
label_33ece0:
    // 0x33ece0: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x33ece0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_33ece4:
    // 0x33ece4: 0xae230d40  sw          $v1, 0xD40($s1)
    ctx->pc = 0x33ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3392), GPR_U32(ctx, 3));
label_33ece8:
    // 0x33ece8: 0x8e230d3c  lw          $v1, 0xD3C($s1)
    ctx->pc = 0x33ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
label_33ecec:
    // 0x33ecec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33ececu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_33ecf0:
    // 0x33ecf0: 0xae230d3c  sw          $v1, 0xD3C($s1)
    ctx->pc = 0x33ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 3));
label_33ecf4:
    // 0x33ecf4: 0x0  nop
    ctx->pc = 0x33ecf4u;
    // NOP
label_33ecf8:
    // 0x33ecf8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x33ecf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_33ecfc:
    // 0x33ecfc: 0x128182a  slt         $v1, $t1, $t0
    ctx->pc = 0x33ecfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_33ed00:
    // 0x33ed00: 0x5460fff0  bnel        $v1, $zero, . + 4 + (-0x10 << 2)
label_33ed04:
    if (ctx->pc == 0x33ED04u) {
        ctx->pc = 0x33ED04u;
            // 0x33ed04: 0x1262804  sllv        $a1, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
        ctx->pc = 0x33ED08u;
        goto label_33ed08;
    }
    ctx->pc = 0x33ED00u;
    {
        const bool branch_taken_0x33ed00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ed00) {
            ctx->pc = 0x33ED04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33ED00u;
            // 0x33ed04: 0x1262804  sllv        $a1, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33ECC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33ecc4;
        }
    }
    ctx->pc = 0x33ED08u;
label_33ed08:
    // 0x33ed08: 0x10000053  b           . + 4 + (0x53 << 2)
label_33ed0c:
    if (ctx->pc == 0x33ED0Cu) {
        ctx->pc = 0x33ED10u;
        goto label_33ed10;
    }
    ctx->pc = 0x33ED08u;
    {
        const bool branch_taken_0x33ed08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ed08) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33ED10u;
label_33ed10:
    // 0x33ed10: 0x14600051  bnez        $v1, . + 4 + (0x51 << 2)
label_33ed14:
    if (ctx->pc == 0x33ED14u) {
        ctx->pc = 0x33ED18u;
        goto label_33ed18;
    }
    ctx->pc = 0x33ED10u;
    {
        const bool branch_taken_0x33ed10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ed10) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33ED18u;
label_33ed18:
    // 0x33ed18: 0x8e230d2c  lw          $v1, 0xD2C($s1)
    ctx->pc = 0x33ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3372)));
label_33ed1c:
    // 0x33ed1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_33ed20:
    // 0x33ed20: 0x1c60004d  bgtz        $v1, . + 4 + (0x4D << 2)
label_33ed24:
    if (ctx->pc == 0x33ED24u) {
        ctx->pc = 0x33ED24u;
            // 0x33ed24: 0xae230d2c  sw          $v1, 0xD2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3372), GPR_U32(ctx, 3));
        ctx->pc = 0x33ED28u;
        goto label_33ed28;
    }
    ctx->pc = 0x33ED20u;
    {
        const bool branch_taken_0x33ed20 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x33ED24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33ED20u;
            // 0x33ed24: 0xae230d2c  sw          $v1, 0xD2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ed20) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33ED28u;
label_33ed28:
    // 0x33ed28: 0xae200d2c  sw          $zero, 0xD2C($s1)
    ctx->pc = 0x33ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3372), GPR_U32(ctx, 0));
label_33ed2c:
    // 0x33ed2c: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x33ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_33ed30:
    // 0x33ed30: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x33ed30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_33ed34:
    // 0x33ed34: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
label_33ed38:
    if (ctx->pc == 0x33ED38u) {
        ctx->pc = 0x33ED3Cu;
        goto label_33ed3c;
    }
    ctx->pc = 0x33ED34u;
    {
        const bool branch_taken_0x33ed34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ed34) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33ED3Cu;
label_33ed3c:
    // 0x33ed3c: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x33ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_33ed40:
    // 0x33ed40: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x33ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_33ed44:
    // 0x33ed44: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x33ed44u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_33ed48:
    // 0x33ed48: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
label_33ed4c:
    if (ctx->pc == 0x33ED4Cu) {
        ctx->pc = 0x33ED50u;
        goto label_33ed50;
    }
    ctx->pc = 0x33ED48u;
    {
        const bool branch_taken_0x33ed48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ed48) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33ED50u;
label_33ed50:
    // 0x33ed50: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x33ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_33ed54:
    // 0x33ed54: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x33ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_33ed58:
    // 0x33ed58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33ed58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33ed5c:
    // 0x33ed5c: 0xc0bdf94  jal         func_2F7E50
label_33ed60:
    if (ctx->pc == 0x33ED60u) {
        ctx->pc = 0x33ED60u;
            // 0x33ed60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33ED64u;
        goto label_33ed64;
    }
    ctx->pc = 0x33ED5Cu;
    SET_GPR_U32(ctx, 31, 0x33ED64u);
    ctx->pc = 0x33ED60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33ED5Cu;
            // 0x33ed60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E50u;
    if (runtime->hasFunction(0x2F7E50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33ED64u; }
        if (ctx->pc != 0x33ED64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E50_0x2f7e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33ED64u; }
        if (ctx->pc != 0x33ED64u) { return; }
    }
    ctx->pc = 0x33ED64u;
label_33ed64:
    // 0x33ed64: 0x8e040d9c  lw          $a0, 0xD9C($s0)
    ctx->pc = 0x33ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_33ed68:
    // 0x33ed68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33ed6c:
    // 0x33ed6c: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x33ed6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
label_33ed70:
    // 0x33ed70: 0xae040d9c  sw          $a0, 0xD9C($s0)
    ctx->pc = 0x33ed70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 4));
label_33ed74:
    // 0x33ed74: 0x10000038  b           . + 4 + (0x38 << 2)
label_33ed78:
    if (ctx->pc == 0x33ED78u) {
        ctx->pc = 0x33ED78u;
            // 0x33ed78: 0xa2230d32  sb          $v1, 0xD32($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3378), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x33ED7Cu;
        goto label_33ed7c;
    }
    ctx->pc = 0x33ED74u;
    {
        const bool branch_taken_0x33ed74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ED78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33ED74u;
            // 0x33ed78: 0xa2230d32  sb          $v1, 0xD32($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3378), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ed74) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33ED7Cu;
label_33ed7c:
    // 0x33ed7c: 0x8e230d40  lw          $v1, 0xD40($s1)
    ctx->pc = 0x33ed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
label_33ed80:
    // 0x33ed80: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
label_33ed84:
    if (ctx->pc == 0x33ED84u) {
        ctx->pc = 0x33ED88u;
        goto label_33ed88;
    }
    ctx->pc = 0x33ED80u;
    {
        const bool branch_taken_0x33ed80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ed80) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33ED88u;
label_33ed88:
    // 0x33ed88: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x33ed88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_33ed8c:
    // 0x33ed8c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x33ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_33ed90:
    // 0x33ed90: 0x14830031  bne         $a0, $v1, . + 4 + (0x31 << 2)
label_33ed94:
    if (ctx->pc == 0x33ED94u) {
        ctx->pc = 0x33ED98u;
        goto label_33ed98;
    }
    ctx->pc = 0x33ED90u;
    {
        const bool branch_taken_0x33ed90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33ed90) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33ED98u;
label_33ed98:
    // 0x33ed98: 0xc6210844  lwc1        $f1, 0x844($s1)
    ctx->pc = 0x33ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33ed9c:
    // 0x33ed9c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x33ed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_33eda0:
    // 0x33eda0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33eda0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33eda4:
    // 0x33eda4: 0x0  nop
    ctx->pc = 0x33eda4u;
    // NOP
label_33eda8:
    // 0x33eda8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33eda8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33edac:
    // 0x33edac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_33edb0:
    if (ctx->pc == 0x33EDB0u) {
        ctx->pc = 0x33EDB0u;
            // 0x33edb0: 0x26250838  addiu       $a1, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->pc = 0x33EDB4u;
        goto label_33edb4;
    }
    ctx->pc = 0x33EDACu;
    {
        const bool branch_taken_0x33edac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33EDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EDACu;
            // 0x33edb0: 0x26250838  addiu       $a1, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33edac) {
            ctx->pc = 0x33EDC4u;
            goto label_33edc4;
        }
    }
    ctx->pc = 0x33EDB4u;
label_33edb4:
    // 0x33edb4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33edb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33edb8:
    // 0x33edb8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x33edb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_33edbc:
    // 0x33edbc: 0x10000008  b           . + 4 + (0x8 << 2)
label_33edc0:
    if (ctx->pc == 0x33EDC0u) {
        ctx->pc = 0x33EDC0u;
            // 0x33edc0: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x33EDC4u;
        goto label_33edc4;
    }
    ctx->pc = 0x33EDBCu;
    {
        const bool branch_taken_0x33edbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EDBCu;
            // 0x33edc0: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33edbc) {
            ctx->pc = 0x33EDE0u;
            goto label_33ede0;
        }
    }
    ctx->pc = 0x33EDC4u;
label_33edc4:
    // 0x33edc4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33edc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_33edc8:
    // 0x33edc8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_33edcc:
    // 0x33edcc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33edccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_33edd0:
    // 0x33edd0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x33edd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_33edd4:
    // 0x33edd4: 0x0  nop
    ctx->pc = 0x33edd4u;
    // NOP
label_33edd8:
    // 0x33edd8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33edd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_33eddc:
    // 0x33eddc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x33eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_33ede0:
    // 0x33ede0: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x33ede0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_33ede4:
    // 0x33ede4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33ede8:
    // 0x33ede8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x33ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_33edec:
    // 0x33edec: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x33edecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_33edf0:
    // 0x33edf0: 0x3403ea60  ori         $v1, $zero, 0xEA60
    ctx->pc = 0x33edf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_33edf4:
    // 0x33edf4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x33edf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33edf8:
    // 0x33edf8: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x33edf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_33edfc:
    // 0x33edfc: 0xa62023  subu        $a0, $a1, $a2
    ctx->pc = 0x33edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_33ee00:
    // 0x33ee00: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_33ee04:
    // 0x33ee04: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_33ee08:
    // 0x33ee08: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x33ee08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_33ee0c:
    // 0x33ee0c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x33ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_33ee10:
    // 0x33ee10: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_33ee14:
    // 0x33ee14: 0x10000010  b           . + 4 + (0x10 << 2)
label_33ee18:
    if (ctx->pc == 0x33EE18u) {
        ctx->pc = 0x33EE18u;
            // 0x33ee18: 0xae230d40  sw          $v1, 0xD40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3392), GPR_U32(ctx, 3));
        ctx->pc = 0x33EE1Cu;
        goto label_33ee1c;
    }
    ctx->pc = 0x33EE14u;
    {
        const bool branch_taken_0x33ee14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EE14u;
            // 0x33ee18: 0xae230d40  sw          $v1, 0xD40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee14) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33EE1Cu;
label_33ee1c:
    // 0x33ee1c: 0x8e230d3c  lw          $v1, 0xD3C($s1)
    ctx->pc = 0x33ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
label_33ee20:
    // 0x33ee20: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_33ee24:
    if (ctx->pc == 0x33EE24u) {
        ctx->pc = 0x33EE28u;
        goto label_33ee28;
    }
    ctx->pc = 0x33EE20u;
    {
        const bool branch_taken_0x33ee20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ee20) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33EE28u;
label_33ee28:
    // 0x33ee28: 0x8e040db4  lw          $a0, 0xDB4($s0)
    ctx->pc = 0x33ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3508)));
label_33ee2c:
    // 0x33ee2c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x33ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_33ee30:
    // 0x33ee30: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_33ee34:
    if (ctx->pc == 0x33EE34u) {
        ctx->pc = 0x33EE38u;
        goto label_33ee38;
    }
    ctx->pc = 0x33EE30u;
    {
        const bool branch_taken_0x33ee30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33ee30) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33EE38u;
label_33ee38:
    // 0x33ee38: 0x8e0309e0  lw          $v1, 0x9E0($s0)
    ctx->pc = 0x33ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2528)));
label_33ee3c:
    // 0x33ee3c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x33ee3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_33ee40:
    // 0x33ee40: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_33ee44:
    if (ctx->pc == 0x33EE44u) {
        ctx->pc = 0x33EE44u;
            // 0x33ee44: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x33EE48u;
        goto label_33ee48;
    }
    ctx->pc = 0x33EE40u;
    {
        const bool branch_taken_0x33ee40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ee40) {
            ctx->pc = 0x33EE44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EE40u;
            // 0x33ee44: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33EE54u;
            goto label_33ee54;
        }
    }
    ctx->pc = 0x33EE48u;
label_33ee48:
    // 0x33ee48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33ee4c:
    // 0x33ee4c: 0x10000002  b           . + 4 + (0x2 << 2)
label_33ee50:
    if (ctx->pc == 0x33EE50u) {
        ctx->pc = 0x33EE50u;
            // 0x33ee50: 0xae230d3c  sw          $v1, 0xD3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 3));
        ctx->pc = 0x33EE54u;
        goto label_33ee54;
    }
    ctx->pc = 0x33EE4Cu;
    {
        const bool branch_taken_0x33ee4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EE4Cu;
            // 0x33ee50: 0xae230d3c  sw          $v1, 0xD3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee4c) {
            ctx->pc = 0x33EE58u;
            goto label_33ee58;
        }
    }
    ctx->pc = 0x33EE54u;
label_33ee54:
    // 0x33ee54: 0xae230d3c  sw          $v1, 0xD3C($s1)
    ctx->pc = 0x33ee54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 3));
label_33ee58:
    // 0x33ee58: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x33ee58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_33ee5c:
    // 0x33ee5c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x33ee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_33ee60:
    // 0x33ee60: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x33ee60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_33ee64:
    // 0x33ee64: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x33ee64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_33ee68:
    // 0x33ee68: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x33ee68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_33ee6c:
    // 0x33ee6c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x33ee6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33ee70:
    // 0x33ee70: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x33ee70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33ee74:
    // 0x33ee74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x33ee74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33ee78:
    // 0x33ee78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x33ee78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33ee7c:
    // 0x33ee7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33ee7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33ee80:
    // 0x33ee80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33ee80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33ee84:
    // 0x33ee84: 0x3e00008  jr          $ra
label_33ee88:
    if (ctx->pc == 0x33EE88u) {
        ctx->pc = 0x33EE88u;
            // 0x33ee88: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x33EE8Cu;
        goto label_33ee8c;
    }
    ctx->pc = 0x33EE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EE84u;
            // 0x33ee88: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33EE8Cu;
label_33ee8c:
    // 0x33ee8c: 0x0  nop
    ctx->pc = 0x33ee8cu;
    // NOP
label_33ee90:
    // 0x33ee90: 0x3e00008  jr          $ra
label_33ee94:
    if (ctx->pc == 0x33EE94u) {
        ctx->pc = 0x33EE98u;
        goto label_33ee98;
    }
    ctx->pc = 0x33EE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33EE98u;
label_33ee98:
    // 0x33ee98: 0x0  nop
    ctx->pc = 0x33ee98u;
    // NOP
label_33ee9c:
    // 0x33ee9c: 0x0  nop
    ctx->pc = 0x33ee9cu;
    // NOP
}
