#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039CC30
// Address: 0x39cc30 - 0x39d370
void sub_0039CC30_0x39cc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CC30_0x39cc30");
#endif

    switch (ctx->pc) {
        case 0x39cc30u: goto label_39cc30;
        case 0x39cc34u: goto label_39cc34;
        case 0x39cc38u: goto label_39cc38;
        case 0x39cc3cu: goto label_39cc3c;
        case 0x39cc40u: goto label_39cc40;
        case 0x39cc44u: goto label_39cc44;
        case 0x39cc48u: goto label_39cc48;
        case 0x39cc4cu: goto label_39cc4c;
        case 0x39cc50u: goto label_39cc50;
        case 0x39cc54u: goto label_39cc54;
        case 0x39cc58u: goto label_39cc58;
        case 0x39cc5cu: goto label_39cc5c;
        case 0x39cc60u: goto label_39cc60;
        case 0x39cc64u: goto label_39cc64;
        case 0x39cc68u: goto label_39cc68;
        case 0x39cc6cu: goto label_39cc6c;
        case 0x39cc70u: goto label_39cc70;
        case 0x39cc74u: goto label_39cc74;
        case 0x39cc78u: goto label_39cc78;
        case 0x39cc7cu: goto label_39cc7c;
        case 0x39cc80u: goto label_39cc80;
        case 0x39cc84u: goto label_39cc84;
        case 0x39cc88u: goto label_39cc88;
        case 0x39cc8cu: goto label_39cc8c;
        case 0x39cc90u: goto label_39cc90;
        case 0x39cc94u: goto label_39cc94;
        case 0x39cc98u: goto label_39cc98;
        case 0x39cc9cu: goto label_39cc9c;
        case 0x39cca0u: goto label_39cca0;
        case 0x39cca4u: goto label_39cca4;
        case 0x39cca8u: goto label_39cca8;
        case 0x39ccacu: goto label_39ccac;
        case 0x39ccb0u: goto label_39ccb0;
        case 0x39ccb4u: goto label_39ccb4;
        case 0x39ccb8u: goto label_39ccb8;
        case 0x39ccbcu: goto label_39ccbc;
        case 0x39ccc0u: goto label_39ccc0;
        case 0x39ccc4u: goto label_39ccc4;
        case 0x39ccc8u: goto label_39ccc8;
        case 0x39ccccu: goto label_39cccc;
        case 0x39ccd0u: goto label_39ccd0;
        case 0x39ccd4u: goto label_39ccd4;
        case 0x39ccd8u: goto label_39ccd8;
        case 0x39ccdcu: goto label_39ccdc;
        case 0x39cce0u: goto label_39cce0;
        case 0x39cce4u: goto label_39cce4;
        case 0x39cce8u: goto label_39cce8;
        case 0x39ccecu: goto label_39ccec;
        case 0x39ccf0u: goto label_39ccf0;
        case 0x39ccf4u: goto label_39ccf4;
        case 0x39ccf8u: goto label_39ccf8;
        case 0x39ccfcu: goto label_39ccfc;
        case 0x39cd00u: goto label_39cd00;
        case 0x39cd04u: goto label_39cd04;
        case 0x39cd08u: goto label_39cd08;
        case 0x39cd0cu: goto label_39cd0c;
        case 0x39cd10u: goto label_39cd10;
        case 0x39cd14u: goto label_39cd14;
        case 0x39cd18u: goto label_39cd18;
        case 0x39cd1cu: goto label_39cd1c;
        case 0x39cd20u: goto label_39cd20;
        case 0x39cd24u: goto label_39cd24;
        case 0x39cd28u: goto label_39cd28;
        case 0x39cd2cu: goto label_39cd2c;
        case 0x39cd30u: goto label_39cd30;
        case 0x39cd34u: goto label_39cd34;
        case 0x39cd38u: goto label_39cd38;
        case 0x39cd3cu: goto label_39cd3c;
        case 0x39cd40u: goto label_39cd40;
        case 0x39cd44u: goto label_39cd44;
        case 0x39cd48u: goto label_39cd48;
        case 0x39cd4cu: goto label_39cd4c;
        case 0x39cd50u: goto label_39cd50;
        case 0x39cd54u: goto label_39cd54;
        case 0x39cd58u: goto label_39cd58;
        case 0x39cd5cu: goto label_39cd5c;
        case 0x39cd60u: goto label_39cd60;
        case 0x39cd64u: goto label_39cd64;
        case 0x39cd68u: goto label_39cd68;
        case 0x39cd6cu: goto label_39cd6c;
        case 0x39cd70u: goto label_39cd70;
        case 0x39cd74u: goto label_39cd74;
        case 0x39cd78u: goto label_39cd78;
        case 0x39cd7cu: goto label_39cd7c;
        case 0x39cd80u: goto label_39cd80;
        case 0x39cd84u: goto label_39cd84;
        case 0x39cd88u: goto label_39cd88;
        case 0x39cd8cu: goto label_39cd8c;
        case 0x39cd90u: goto label_39cd90;
        case 0x39cd94u: goto label_39cd94;
        case 0x39cd98u: goto label_39cd98;
        case 0x39cd9cu: goto label_39cd9c;
        case 0x39cda0u: goto label_39cda0;
        case 0x39cda4u: goto label_39cda4;
        case 0x39cda8u: goto label_39cda8;
        case 0x39cdacu: goto label_39cdac;
        case 0x39cdb0u: goto label_39cdb0;
        case 0x39cdb4u: goto label_39cdb4;
        case 0x39cdb8u: goto label_39cdb8;
        case 0x39cdbcu: goto label_39cdbc;
        case 0x39cdc0u: goto label_39cdc0;
        case 0x39cdc4u: goto label_39cdc4;
        case 0x39cdc8u: goto label_39cdc8;
        case 0x39cdccu: goto label_39cdcc;
        case 0x39cdd0u: goto label_39cdd0;
        case 0x39cdd4u: goto label_39cdd4;
        case 0x39cdd8u: goto label_39cdd8;
        case 0x39cddcu: goto label_39cddc;
        case 0x39cde0u: goto label_39cde0;
        case 0x39cde4u: goto label_39cde4;
        case 0x39cde8u: goto label_39cde8;
        case 0x39cdecu: goto label_39cdec;
        case 0x39cdf0u: goto label_39cdf0;
        case 0x39cdf4u: goto label_39cdf4;
        case 0x39cdf8u: goto label_39cdf8;
        case 0x39cdfcu: goto label_39cdfc;
        case 0x39ce00u: goto label_39ce00;
        case 0x39ce04u: goto label_39ce04;
        case 0x39ce08u: goto label_39ce08;
        case 0x39ce0cu: goto label_39ce0c;
        case 0x39ce10u: goto label_39ce10;
        case 0x39ce14u: goto label_39ce14;
        case 0x39ce18u: goto label_39ce18;
        case 0x39ce1cu: goto label_39ce1c;
        case 0x39ce20u: goto label_39ce20;
        case 0x39ce24u: goto label_39ce24;
        case 0x39ce28u: goto label_39ce28;
        case 0x39ce2cu: goto label_39ce2c;
        case 0x39ce30u: goto label_39ce30;
        case 0x39ce34u: goto label_39ce34;
        case 0x39ce38u: goto label_39ce38;
        case 0x39ce3cu: goto label_39ce3c;
        case 0x39ce40u: goto label_39ce40;
        case 0x39ce44u: goto label_39ce44;
        case 0x39ce48u: goto label_39ce48;
        case 0x39ce4cu: goto label_39ce4c;
        case 0x39ce50u: goto label_39ce50;
        case 0x39ce54u: goto label_39ce54;
        case 0x39ce58u: goto label_39ce58;
        case 0x39ce5cu: goto label_39ce5c;
        case 0x39ce60u: goto label_39ce60;
        case 0x39ce64u: goto label_39ce64;
        case 0x39ce68u: goto label_39ce68;
        case 0x39ce6cu: goto label_39ce6c;
        case 0x39ce70u: goto label_39ce70;
        case 0x39ce74u: goto label_39ce74;
        case 0x39ce78u: goto label_39ce78;
        case 0x39ce7cu: goto label_39ce7c;
        case 0x39ce80u: goto label_39ce80;
        case 0x39ce84u: goto label_39ce84;
        case 0x39ce88u: goto label_39ce88;
        case 0x39ce8cu: goto label_39ce8c;
        case 0x39ce90u: goto label_39ce90;
        case 0x39ce94u: goto label_39ce94;
        case 0x39ce98u: goto label_39ce98;
        case 0x39ce9cu: goto label_39ce9c;
        case 0x39cea0u: goto label_39cea0;
        case 0x39cea4u: goto label_39cea4;
        case 0x39cea8u: goto label_39cea8;
        case 0x39ceacu: goto label_39ceac;
        case 0x39ceb0u: goto label_39ceb0;
        case 0x39ceb4u: goto label_39ceb4;
        case 0x39ceb8u: goto label_39ceb8;
        case 0x39cebcu: goto label_39cebc;
        case 0x39cec0u: goto label_39cec0;
        case 0x39cec4u: goto label_39cec4;
        case 0x39cec8u: goto label_39cec8;
        case 0x39ceccu: goto label_39cecc;
        case 0x39ced0u: goto label_39ced0;
        case 0x39ced4u: goto label_39ced4;
        case 0x39ced8u: goto label_39ced8;
        case 0x39cedcu: goto label_39cedc;
        case 0x39cee0u: goto label_39cee0;
        case 0x39cee4u: goto label_39cee4;
        case 0x39cee8u: goto label_39cee8;
        case 0x39ceecu: goto label_39ceec;
        case 0x39cef0u: goto label_39cef0;
        case 0x39cef4u: goto label_39cef4;
        case 0x39cef8u: goto label_39cef8;
        case 0x39cefcu: goto label_39cefc;
        case 0x39cf00u: goto label_39cf00;
        case 0x39cf04u: goto label_39cf04;
        case 0x39cf08u: goto label_39cf08;
        case 0x39cf0cu: goto label_39cf0c;
        case 0x39cf10u: goto label_39cf10;
        case 0x39cf14u: goto label_39cf14;
        case 0x39cf18u: goto label_39cf18;
        case 0x39cf1cu: goto label_39cf1c;
        case 0x39cf20u: goto label_39cf20;
        case 0x39cf24u: goto label_39cf24;
        case 0x39cf28u: goto label_39cf28;
        case 0x39cf2cu: goto label_39cf2c;
        case 0x39cf30u: goto label_39cf30;
        case 0x39cf34u: goto label_39cf34;
        case 0x39cf38u: goto label_39cf38;
        case 0x39cf3cu: goto label_39cf3c;
        case 0x39cf40u: goto label_39cf40;
        case 0x39cf44u: goto label_39cf44;
        case 0x39cf48u: goto label_39cf48;
        case 0x39cf4cu: goto label_39cf4c;
        case 0x39cf50u: goto label_39cf50;
        case 0x39cf54u: goto label_39cf54;
        case 0x39cf58u: goto label_39cf58;
        case 0x39cf5cu: goto label_39cf5c;
        case 0x39cf60u: goto label_39cf60;
        case 0x39cf64u: goto label_39cf64;
        case 0x39cf68u: goto label_39cf68;
        case 0x39cf6cu: goto label_39cf6c;
        case 0x39cf70u: goto label_39cf70;
        case 0x39cf74u: goto label_39cf74;
        case 0x39cf78u: goto label_39cf78;
        case 0x39cf7cu: goto label_39cf7c;
        case 0x39cf80u: goto label_39cf80;
        case 0x39cf84u: goto label_39cf84;
        case 0x39cf88u: goto label_39cf88;
        case 0x39cf8cu: goto label_39cf8c;
        case 0x39cf90u: goto label_39cf90;
        case 0x39cf94u: goto label_39cf94;
        case 0x39cf98u: goto label_39cf98;
        case 0x39cf9cu: goto label_39cf9c;
        case 0x39cfa0u: goto label_39cfa0;
        case 0x39cfa4u: goto label_39cfa4;
        case 0x39cfa8u: goto label_39cfa8;
        case 0x39cfacu: goto label_39cfac;
        case 0x39cfb0u: goto label_39cfb0;
        case 0x39cfb4u: goto label_39cfb4;
        case 0x39cfb8u: goto label_39cfb8;
        case 0x39cfbcu: goto label_39cfbc;
        case 0x39cfc0u: goto label_39cfc0;
        case 0x39cfc4u: goto label_39cfc4;
        case 0x39cfc8u: goto label_39cfc8;
        case 0x39cfccu: goto label_39cfcc;
        case 0x39cfd0u: goto label_39cfd0;
        case 0x39cfd4u: goto label_39cfd4;
        case 0x39cfd8u: goto label_39cfd8;
        case 0x39cfdcu: goto label_39cfdc;
        case 0x39cfe0u: goto label_39cfe0;
        case 0x39cfe4u: goto label_39cfe4;
        case 0x39cfe8u: goto label_39cfe8;
        case 0x39cfecu: goto label_39cfec;
        case 0x39cff0u: goto label_39cff0;
        case 0x39cff4u: goto label_39cff4;
        case 0x39cff8u: goto label_39cff8;
        case 0x39cffcu: goto label_39cffc;
        case 0x39d000u: goto label_39d000;
        case 0x39d004u: goto label_39d004;
        case 0x39d008u: goto label_39d008;
        case 0x39d00cu: goto label_39d00c;
        case 0x39d010u: goto label_39d010;
        case 0x39d014u: goto label_39d014;
        case 0x39d018u: goto label_39d018;
        case 0x39d01cu: goto label_39d01c;
        case 0x39d020u: goto label_39d020;
        case 0x39d024u: goto label_39d024;
        case 0x39d028u: goto label_39d028;
        case 0x39d02cu: goto label_39d02c;
        case 0x39d030u: goto label_39d030;
        case 0x39d034u: goto label_39d034;
        case 0x39d038u: goto label_39d038;
        case 0x39d03cu: goto label_39d03c;
        case 0x39d040u: goto label_39d040;
        case 0x39d044u: goto label_39d044;
        case 0x39d048u: goto label_39d048;
        case 0x39d04cu: goto label_39d04c;
        case 0x39d050u: goto label_39d050;
        case 0x39d054u: goto label_39d054;
        case 0x39d058u: goto label_39d058;
        case 0x39d05cu: goto label_39d05c;
        case 0x39d060u: goto label_39d060;
        case 0x39d064u: goto label_39d064;
        case 0x39d068u: goto label_39d068;
        case 0x39d06cu: goto label_39d06c;
        case 0x39d070u: goto label_39d070;
        case 0x39d074u: goto label_39d074;
        case 0x39d078u: goto label_39d078;
        case 0x39d07cu: goto label_39d07c;
        case 0x39d080u: goto label_39d080;
        case 0x39d084u: goto label_39d084;
        case 0x39d088u: goto label_39d088;
        case 0x39d08cu: goto label_39d08c;
        case 0x39d090u: goto label_39d090;
        case 0x39d094u: goto label_39d094;
        case 0x39d098u: goto label_39d098;
        case 0x39d09cu: goto label_39d09c;
        case 0x39d0a0u: goto label_39d0a0;
        case 0x39d0a4u: goto label_39d0a4;
        case 0x39d0a8u: goto label_39d0a8;
        case 0x39d0acu: goto label_39d0ac;
        case 0x39d0b0u: goto label_39d0b0;
        case 0x39d0b4u: goto label_39d0b4;
        case 0x39d0b8u: goto label_39d0b8;
        case 0x39d0bcu: goto label_39d0bc;
        case 0x39d0c0u: goto label_39d0c0;
        case 0x39d0c4u: goto label_39d0c4;
        case 0x39d0c8u: goto label_39d0c8;
        case 0x39d0ccu: goto label_39d0cc;
        case 0x39d0d0u: goto label_39d0d0;
        case 0x39d0d4u: goto label_39d0d4;
        case 0x39d0d8u: goto label_39d0d8;
        case 0x39d0dcu: goto label_39d0dc;
        case 0x39d0e0u: goto label_39d0e0;
        case 0x39d0e4u: goto label_39d0e4;
        case 0x39d0e8u: goto label_39d0e8;
        case 0x39d0ecu: goto label_39d0ec;
        case 0x39d0f0u: goto label_39d0f0;
        case 0x39d0f4u: goto label_39d0f4;
        case 0x39d0f8u: goto label_39d0f8;
        case 0x39d0fcu: goto label_39d0fc;
        case 0x39d100u: goto label_39d100;
        case 0x39d104u: goto label_39d104;
        case 0x39d108u: goto label_39d108;
        case 0x39d10cu: goto label_39d10c;
        case 0x39d110u: goto label_39d110;
        case 0x39d114u: goto label_39d114;
        case 0x39d118u: goto label_39d118;
        case 0x39d11cu: goto label_39d11c;
        case 0x39d120u: goto label_39d120;
        case 0x39d124u: goto label_39d124;
        case 0x39d128u: goto label_39d128;
        case 0x39d12cu: goto label_39d12c;
        case 0x39d130u: goto label_39d130;
        case 0x39d134u: goto label_39d134;
        case 0x39d138u: goto label_39d138;
        case 0x39d13cu: goto label_39d13c;
        case 0x39d140u: goto label_39d140;
        case 0x39d144u: goto label_39d144;
        case 0x39d148u: goto label_39d148;
        case 0x39d14cu: goto label_39d14c;
        case 0x39d150u: goto label_39d150;
        case 0x39d154u: goto label_39d154;
        case 0x39d158u: goto label_39d158;
        case 0x39d15cu: goto label_39d15c;
        case 0x39d160u: goto label_39d160;
        case 0x39d164u: goto label_39d164;
        case 0x39d168u: goto label_39d168;
        case 0x39d16cu: goto label_39d16c;
        case 0x39d170u: goto label_39d170;
        case 0x39d174u: goto label_39d174;
        case 0x39d178u: goto label_39d178;
        case 0x39d17cu: goto label_39d17c;
        case 0x39d180u: goto label_39d180;
        case 0x39d184u: goto label_39d184;
        case 0x39d188u: goto label_39d188;
        case 0x39d18cu: goto label_39d18c;
        case 0x39d190u: goto label_39d190;
        case 0x39d194u: goto label_39d194;
        case 0x39d198u: goto label_39d198;
        case 0x39d19cu: goto label_39d19c;
        case 0x39d1a0u: goto label_39d1a0;
        case 0x39d1a4u: goto label_39d1a4;
        case 0x39d1a8u: goto label_39d1a8;
        case 0x39d1acu: goto label_39d1ac;
        case 0x39d1b0u: goto label_39d1b0;
        case 0x39d1b4u: goto label_39d1b4;
        case 0x39d1b8u: goto label_39d1b8;
        case 0x39d1bcu: goto label_39d1bc;
        case 0x39d1c0u: goto label_39d1c0;
        case 0x39d1c4u: goto label_39d1c4;
        case 0x39d1c8u: goto label_39d1c8;
        case 0x39d1ccu: goto label_39d1cc;
        case 0x39d1d0u: goto label_39d1d0;
        case 0x39d1d4u: goto label_39d1d4;
        case 0x39d1d8u: goto label_39d1d8;
        case 0x39d1dcu: goto label_39d1dc;
        case 0x39d1e0u: goto label_39d1e0;
        case 0x39d1e4u: goto label_39d1e4;
        case 0x39d1e8u: goto label_39d1e8;
        case 0x39d1ecu: goto label_39d1ec;
        case 0x39d1f0u: goto label_39d1f0;
        case 0x39d1f4u: goto label_39d1f4;
        case 0x39d1f8u: goto label_39d1f8;
        case 0x39d1fcu: goto label_39d1fc;
        case 0x39d200u: goto label_39d200;
        case 0x39d204u: goto label_39d204;
        case 0x39d208u: goto label_39d208;
        case 0x39d20cu: goto label_39d20c;
        case 0x39d210u: goto label_39d210;
        case 0x39d214u: goto label_39d214;
        case 0x39d218u: goto label_39d218;
        case 0x39d21cu: goto label_39d21c;
        case 0x39d220u: goto label_39d220;
        case 0x39d224u: goto label_39d224;
        case 0x39d228u: goto label_39d228;
        case 0x39d22cu: goto label_39d22c;
        case 0x39d230u: goto label_39d230;
        case 0x39d234u: goto label_39d234;
        case 0x39d238u: goto label_39d238;
        case 0x39d23cu: goto label_39d23c;
        case 0x39d240u: goto label_39d240;
        case 0x39d244u: goto label_39d244;
        case 0x39d248u: goto label_39d248;
        case 0x39d24cu: goto label_39d24c;
        case 0x39d250u: goto label_39d250;
        case 0x39d254u: goto label_39d254;
        case 0x39d258u: goto label_39d258;
        case 0x39d25cu: goto label_39d25c;
        case 0x39d260u: goto label_39d260;
        case 0x39d264u: goto label_39d264;
        case 0x39d268u: goto label_39d268;
        case 0x39d26cu: goto label_39d26c;
        case 0x39d270u: goto label_39d270;
        case 0x39d274u: goto label_39d274;
        case 0x39d278u: goto label_39d278;
        case 0x39d27cu: goto label_39d27c;
        case 0x39d280u: goto label_39d280;
        case 0x39d284u: goto label_39d284;
        case 0x39d288u: goto label_39d288;
        case 0x39d28cu: goto label_39d28c;
        case 0x39d290u: goto label_39d290;
        case 0x39d294u: goto label_39d294;
        case 0x39d298u: goto label_39d298;
        case 0x39d29cu: goto label_39d29c;
        case 0x39d2a0u: goto label_39d2a0;
        case 0x39d2a4u: goto label_39d2a4;
        case 0x39d2a8u: goto label_39d2a8;
        case 0x39d2acu: goto label_39d2ac;
        case 0x39d2b0u: goto label_39d2b0;
        case 0x39d2b4u: goto label_39d2b4;
        case 0x39d2b8u: goto label_39d2b8;
        case 0x39d2bcu: goto label_39d2bc;
        case 0x39d2c0u: goto label_39d2c0;
        case 0x39d2c4u: goto label_39d2c4;
        case 0x39d2c8u: goto label_39d2c8;
        case 0x39d2ccu: goto label_39d2cc;
        case 0x39d2d0u: goto label_39d2d0;
        case 0x39d2d4u: goto label_39d2d4;
        case 0x39d2d8u: goto label_39d2d8;
        case 0x39d2dcu: goto label_39d2dc;
        case 0x39d2e0u: goto label_39d2e0;
        case 0x39d2e4u: goto label_39d2e4;
        case 0x39d2e8u: goto label_39d2e8;
        case 0x39d2ecu: goto label_39d2ec;
        case 0x39d2f0u: goto label_39d2f0;
        case 0x39d2f4u: goto label_39d2f4;
        case 0x39d2f8u: goto label_39d2f8;
        case 0x39d2fcu: goto label_39d2fc;
        case 0x39d300u: goto label_39d300;
        case 0x39d304u: goto label_39d304;
        case 0x39d308u: goto label_39d308;
        case 0x39d30cu: goto label_39d30c;
        case 0x39d310u: goto label_39d310;
        case 0x39d314u: goto label_39d314;
        case 0x39d318u: goto label_39d318;
        case 0x39d31cu: goto label_39d31c;
        case 0x39d320u: goto label_39d320;
        case 0x39d324u: goto label_39d324;
        case 0x39d328u: goto label_39d328;
        case 0x39d32cu: goto label_39d32c;
        case 0x39d330u: goto label_39d330;
        case 0x39d334u: goto label_39d334;
        case 0x39d338u: goto label_39d338;
        case 0x39d33cu: goto label_39d33c;
        case 0x39d340u: goto label_39d340;
        case 0x39d344u: goto label_39d344;
        case 0x39d348u: goto label_39d348;
        case 0x39d34cu: goto label_39d34c;
        case 0x39d350u: goto label_39d350;
        case 0x39d354u: goto label_39d354;
        case 0x39d358u: goto label_39d358;
        case 0x39d35cu: goto label_39d35c;
        case 0x39d360u: goto label_39d360;
        case 0x39d364u: goto label_39d364;
        case 0x39d368u: goto label_39d368;
        case 0x39d36cu: goto label_39d36c;
        default: break;
    }

    ctx->pc = 0x39cc30u;

label_39cc30:
    // 0x39cc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39cc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39cc34:
    // 0x39cc34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39cc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39cc38:
    // 0x39cc38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39cc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39cc3c:
    // 0x39cc3c: 0xc0e3634  jal         func_38D8D0
label_39cc40:
    if (ctx->pc == 0x39CC40u) {
        ctx->pc = 0x39CC40u;
            // 0x39cc40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39CC44u;
        goto label_39cc44;
    }
    ctx->pc = 0x39CC3Cu;
    SET_GPR_U32(ctx, 31, 0x39CC44u);
    ctx->pc = 0x39CC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CC3Cu;
            // 0x39cc40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D8D0u;
    if (runtime->hasFunction(0x38D8D0u)) {
        auto targetFn = runtime->lookupFunction(0x38D8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CC44u; }
        if (ctx->pc != 0x39CC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D8D0_0x38d8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CC44u; }
        if (ctx->pc != 0x39CC44u) { return; }
    }
    ctx->pc = 0x39CC44u;
label_39cc44:
    // 0x39cc44: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_39cc48:
    if (ctx->pc == 0x39CC48u) {
        ctx->pc = 0x39CC48u;
            // 0x39cc48: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x39CC4Cu;
        goto label_39cc4c;
    }
    ctx->pc = 0x39CC44u;
    {
        const bool branch_taken_0x39cc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cc44) {
            ctx->pc = 0x39CC48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39CC44u;
            // 0x39cc48: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39CC98u;
            goto label_39cc98;
        }
    }
    ctx->pc = 0x39CC4Cu;
label_39cc4c:
    // 0x39cc4c: 0x8e0a00a0  lw          $t2, 0xA0($s0)
    ctx->pc = 0x39cc4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39cc50:
    // 0x39cc50: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x39cc50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_39cc54:
    // 0x39cc54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x39cc54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39cc58:
    // 0x39cc58: 0x3c0641f0  lui         $a2, 0x41F0
    ctx->pc = 0x39cc58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16880 << 16));
label_39cc5c:
    // 0x39cc5c: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x39cc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
label_39cc60:
    // 0x39cc60: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x39cc60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_39cc64:
    // 0x39cc64: 0x8d490060  lw          $t1, 0x60($t2)
    ctx->pc = 0x39cc64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 96)));
label_39cc68:
    // 0x39cc68: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x39cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39cc6c:
    // 0x39cc6c: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x39cc6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_39cc70:
    // 0x39cc70: 0xad480060  sw          $t0, 0x60($t2)
    ctx->pc = 0x39cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 96), GPR_U32(ctx, 8));
label_39cc74:
    // 0x39cc74: 0xae07008c  sw          $a3, 0x8C($s0)
    ctx->pc = 0x39cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 7));
label_39cc78:
    // 0x39cc78: 0xae060070  sw          $a2, 0x70($s0)
    ctx->pc = 0x39cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 6));
label_39cc7c:
    // 0x39cc7c: 0xae050078  sw          $a1, 0x78($s0)
    ctx->pc = 0x39cc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
label_39cc80:
    // 0x39cc80: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x39cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
label_39cc84:
    // 0x39cc84: 0xa2030068  sb          $v1, 0x68($s0)
    ctx->pc = 0x39cc84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
label_39cc88:
    // 0x39cc88: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x39cc88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_39cc8c:
    // 0x39cc8c: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x39cc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
label_39cc90:
    // 0x39cc90: 0xa207006b  sb          $a3, 0x6B($s0)
    ctx->pc = 0x39cc90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 7));
label_39cc94:
    // 0x39cc94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39cc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39cc98:
    // 0x39cc98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39cc98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39cc9c:
    // 0x39cc9c: 0x3e00008  jr          $ra
label_39cca0:
    if (ctx->pc == 0x39CCA0u) {
        ctx->pc = 0x39CCA0u;
            // 0x39cca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x39CCA4u;
        goto label_39cca4;
    }
    ctx->pc = 0x39CC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39CC9Cu;
            // 0x39cca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39CCA4u;
label_39cca4:
    // 0x39cca4: 0x0  nop
    ctx->pc = 0x39cca4u;
    // NOP
label_39cca8:
    // 0x39cca8: 0x0  nop
    ctx->pc = 0x39cca8u;
    // NOP
label_39ccac:
    // 0x39ccac: 0x0  nop
    ctx->pc = 0x39ccacu;
    // NOP
label_39ccb0:
    // 0x39ccb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39ccb4:
    // 0x39ccb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39ccb8:
    // 0x39ccb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39ccb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39ccbc:
    // 0x39ccbc: 0x9082004d  lbu         $v0, 0x4D($a0)
    ctx->pc = 0x39ccbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_39ccc0:
    // 0x39ccc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39ccc4:
    if (ctx->pc == 0x39CCC4u) {
        ctx->pc = 0x39CCC4u;
            // 0x39ccc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39CCC8u;
        goto label_39ccc8;
    }
    ctx->pc = 0x39CCC0u;
    {
        const bool branch_taken_0x39ccc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39CCC0u;
            // 0x39ccc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ccc0) {
            ctx->pc = 0x39CCD4u;
            goto label_39ccd4;
        }
    }
    ctx->pc = 0x39CCC8u;
label_39ccc8:
    // 0x39ccc8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x39ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_39cccc:
    // 0x39cccc: 0xc0ba938  jal         func_2EA4E0
label_39ccd0:
    if (ctx->pc == 0x39CCD0u) {
        ctx->pc = 0x39CCD0u;
            // 0x39ccd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39CCD4u;
        goto label_39ccd4;
    }
    ctx->pc = 0x39CCCCu;
    SET_GPR_U32(ctx, 31, 0x39CCD4u);
    ctx->pc = 0x39CCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CCCCu;
            // 0x39ccd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CCD4u; }
        if (ctx->pc != 0x39CCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CCD4u; }
        if (ctx->pc != 0x39CCD4u) { return; }
    }
    ctx->pc = 0x39CCD4u;
label_39ccd4:
    // 0x39ccd4: 0x8e040154  lw          $a0, 0x154($s0)
    ctx->pc = 0x39ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_39ccd8:
    // 0x39ccd8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x39ccd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_39ccdc:
    // 0x39ccdc: 0xc122d2c  jal         func_48B4B0
label_39cce0:
    if (ctx->pc == 0x39CCE0u) {
        ctx->pc = 0x39CCE0u;
            // 0x39cce0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x39CCE4u;
        goto label_39cce4;
    }
    ctx->pc = 0x39CCDCu;
    SET_GPR_U32(ctx, 31, 0x39CCE4u);
    ctx->pc = 0x39CCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CCDCu;
            // 0x39cce0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CCE4u; }
        if (ctx->pc != 0x39CCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CCE4u; }
        if (ctx->pc != 0x39CCE4u) { return; }
    }
    ctx->pc = 0x39CCE4u;
label_39cce4:
    // 0x39cce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39cce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39cce8:
    // 0x39cce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39cce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39ccec:
    // 0x39ccec: 0x3e00008  jr          $ra
label_39ccf0:
    if (ctx->pc == 0x39CCF0u) {
        ctx->pc = 0x39CCF0u;
            // 0x39ccf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x39CCF4u;
        goto label_39ccf4;
    }
    ctx->pc = 0x39CCECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39CCECu;
            // 0x39ccf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39CCF4u;
label_39ccf4:
    // 0x39ccf4: 0x0  nop
    ctx->pc = 0x39ccf4u;
    // NOP
label_39ccf8:
    // 0x39ccf8: 0x0  nop
    ctx->pc = 0x39ccf8u;
    // NOP
label_39ccfc:
    // 0x39ccfc: 0x0  nop
    ctx->pc = 0x39ccfcu;
    // NOP
label_39cd00:
    // 0x39cd00: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x39cd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_39cd04:
    // 0x39cd04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39cd08:
    // 0x39cd08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x39cd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_39cd0c:
    // 0x39cd0c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x39cd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_39cd10:
    // 0x39cd10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39cd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_39cd14:
    // 0x39cd14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39cd14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39cd18:
    // 0x39cd18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39cd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39cd1c:
    // 0x39cd1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39cd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39cd20:
    // 0x39cd20: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x39cd20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_39cd24:
    // 0x39cd24: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x39cd24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_39cd28:
    // 0x39cd28: 0x8c840140  lw          $a0, 0x140($a0)
    ctx->pc = 0x39cd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
label_39cd2c:
    // 0x39cd2c: 0x50830109  beql        $a0, $v1, . + 4 + (0x109 << 2)
label_39cd30:
    if (ctx->pc == 0x39CD30u) {
        ctx->pc = 0x39CD30u;
            // 0x39cd30: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
        ctx->pc = 0x39CD34u;
        goto label_39cd34;
    }
    ctx->pc = 0x39CD2Cu;
    {
        const bool branch_taken_0x39cd2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x39cd2c) {
            ctx->pc = 0x39CD30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39CD2Cu;
            // 0x39cd30: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39D154u;
            goto label_39d154;
        }
    }
    ctx->pc = 0x39CD34u;
label_39cd34:
    // 0x39cd34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39cd38:
    // 0x39cd38: 0x50830025  beql        $a0, $v1, . + 4 + (0x25 << 2)
label_39cd3c:
    if (ctx->pc == 0x39CD3Cu) {
        ctx->pc = 0x39CD3Cu;
            // 0x39cd3c: 0x8e700050  lw          $s0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->pc = 0x39CD40u;
        goto label_39cd40;
    }
    ctx->pc = 0x39CD38u;
    {
        const bool branch_taken_0x39cd38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x39cd38) {
            ctx->pc = 0x39CD3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39CD38u;
            // 0x39cd3c: 0x8e700050  lw          $s0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39CDD0u;
            goto label_39cdd0;
        }
    }
    ctx->pc = 0x39CD40u;
label_39cd40:
    // 0x39cd40: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_39cd44:
    if (ctx->pc == 0x39CD44u) {
        ctx->pc = 0x39CD44u;
            // 0x39cd44: 0x8e630144  lw          $v1, 0x144($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
        ctx->pc = 0x39CD48u;
        goto label_39cd48;
    }
    ctx->pc = 0x39CD40u;
    {
        const bool branch_taken_0x39cd40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cd40) {
            ctx->pc = 0x39CD44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39CD40u;
            // 0x39cd44: 0x8e630144  lw          $v1, 0x144($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39CD50u;
            goto label_39cd50;
        }
    }
    ctx->pc = 0x39CD48u;
label_39cd48:
    // 0x39cd48: 0x10000124  b           . + 4 + (0x124 << 2)
label_39cd4c:
    if (ctx->pc == 0x39CD4Cu) {
        ctx->pc = 0x39CD4Cu;
            // 0x39cd4c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x39CD50u;
        goto label_39cd50;
    }
    ctx->pc = 0x39CD48u;
    {
        const bool branch_taken_0x39cd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39CD48u;
            // 0x39cd4c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cd48) {
            ctx->pc = 0x39D1DCu;
            goto label_39d1dc;
        }
    }
    ctx->pc = 0x39CD50u;
label_39cd50:
    // 0x39cd50: 0x14600121  bnez        $v1, . + 4 + (0x121 << 2)
label_39cd54:
    if (ctx->pc == 0x39CD54u) {
        ctx->pc = 0x39CD58u;
        goto label_39cd58;
    }
    ctx->pc = 0x39CD50u;
    {
        const bool branch_taken_0x39cd50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39cd50) {
            ctx->pc = 0x39D1D8u;
            goto label_39d1d8;
        }
    }
    ctx->pc = 0x39CD58u;
label_39cd58:
    // 0x39cd58: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x39cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_39cd5c:
    // 0x39cd5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39cd5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39cd60:
    // 0x39cd60: 0x8c630e28  lw          $v1, 0xE28($v1)
    ctx->pc = 0x39cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3624)));
label_39cd64:
    // 0x39cd64: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x39cd64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39cd68:
    // 0x39cd68: 0x8c700084  lw          $s0, 0x84($v1)
    ctx->pc = 0x39cd68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_39cd6c:
    // 0x39cd6c: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x39cd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_39cd70:
    // 0x39cd70: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_39cd74:
    if (ctx->pc == 0x39CD74u) {
        ctx->pc = 0x39CD78u;
        goto label_39cd78;
    }
    ctx->pc = 0x39CD70u;
    {
        const bool branch_taken_0x39cd70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cd70) {
            ctx->pc = 0x39CDB8u;
            goto label_39cdb8;
        }
    }
    ctx->pc = 0x39CD78u;
label_39cd78:
    // 0x39cd78: 0xac900080  sw          $s0, 0x80($a0)
    ctx->pc = 0x39cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 16));
label_39cd7c:
    // 0x39cd7c: 0x26630160  addiu       $v1, $s3, 0x160
    ctx->pc = 0x39cd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
label_39cd80:
    // 0x39cd80: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x39cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
label_39cd84:
    // 0x39cd84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_39cd88:
    // 0x39cd88: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x39cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
label_39cd8c:
    // 0x39cd8c: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x39cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
label_39cd90:
    // 0x39cd90: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x39cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
label_39cd94:
    // 0x39cd94: 0x8e2301a0  lw          $v1, 0x1A0($s1)
    ctx->pc = 0x39cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_39cd98:
    // 0x39cd98: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x39cd98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_39cd9c:
    // 0x39cd9c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x39cd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_39cda0:
    // 0x39cda0: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x39cda0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_39cda4:
    // 0x39cda4: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x39cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_39cda8:
    // 0x39cda8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39cda8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39cdac:
    // 0x39cdac: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x39cdacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_39cdb0:
    // 0x39cdb0: 0x320f809  jalr        $t9
label_39cdb4:
    if (ctx->pc == 0x39CDB4u) {
        ctx->pc = 0x39CDB8u;
        goto label_39cdb8;
    }
    ctx->pc = 0x39CDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39CDB8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x39CDB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39CDB8u; }
            if (ctx->pc != 0x39CDB8u) { return; }
        }
        }
    }
    ctx->pc = 0x39CDB8u;
label_39cdb8:
    // 0x39cdb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39cdb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_39cdbc:
    // 0x39cdbc: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x39cdbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_39cdc0:
    // 0x39cdc0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_39cdc4:
    if (ctx->pc == 0x39CDC4u) {
        ctx->pc = 0x39CDC4u;
            // 0x39cdc4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x39CDC8u;
        goto label_39cdc8;
    }
    ctx->pc = 0x39CDC0u;
    {
        const bool branch_taken_0x39cdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39CDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39CDC0u;
            // 0x39cdc4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cdc0) {
            ctx->pc = 0x39CD6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39cd6c;
        }
    }
    ctx->pc = 0x39CDC8u;
label_39cdc8:
    // 0x39cdc8: 0x10000103  b           . + 4 + (0x103 << 2)
label_39cdcc:
    if (ctx->pc == 0x39CDCCu) {
        ctx->pc = 0x39CDD0u;
        goto label_39cdd0;
    }
    ctx->pc = 0x39CDC8u;
    {
        const bool branch_taken_0x39cdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cdc8) {
            ctx->pc = 0x39D1D8u;
            goto label_39d1d8;
        }
    }
    ctx->pc = 0x39CDD0u;
label_39cdd0:
    // 0x39cdd0: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x39cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_39cdd4:
    // 0x39cdd4: 0xc0dc9bc  jal         func_3726F0
label_39cdd8:
    if (ctx->pc == 0x39CDD8u) {
        ctx->pc = 0x39CDD8u;
            // 0x39cdd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39CDDCu;
        goto label_39cddc;
    }
    ctx->pc = 0x39CDD4u;
    SET_GPR_U32(ctx, 31, 0x39CDDCu);
    ctx->pc = 0x39CDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CDD4u;
            // 0x39cdd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CDDCu; }
        if (ctx->pc != 0x39CDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CDDCu; }
        if (ctx->pc != 0x39CDDCu) { return; }
    }
    ctx->pc = 0x39CDDCu;
label_39cddc:
    // 0x39cddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39cddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39cde0:
    // 0x39cde0: 0xc0dc9a0  jal         func_372680
label_39cde4:
    if (ctx->pc == 0x39CDE4u) {
        ctx->pc = 0x39CDE4u;
            // 0x39cde4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x39CDE8u;
        goto label_39cde8;
    }
    ctx->pc = 0x39CDE0u;
    SET_GPR_U32(ctx, 31, 0x39CDE8u);
    ctx->pc = 0x39CDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CDE0u;
            // 0x39cde4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CDE8u; }
        if (ctx->pc != 0x39CDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CDE8u; }
        if (ctx->pc != 0x39CDE8u) { return; }
    }
    ctx->pc = 0x39CDE8u;
label_39cde8:
    // 0x39cde8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39cdec:
    // 0x39cdec: 0x266400e0  addiu       $a0, $s3, 0xE0
    ctx->pc = 0x39cdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
label_39cdf0:
    // 0x39cdf0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39cdf4:
    // 0x39cdf4: 0xc6600150  lwc1        $f0, 0x150($s3)
    ctx->pc = 0x39cdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39cdf8:
    // 0x39cdf8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x39cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39cdfc:
    // 0x39cdfc: 0xc0b8160  jal         func_2E0580
label_39ce00:
    if (ctx->pc == 0x39CE00u) {
        ctx->pc = 0x39CE00u;
            // 0x39ce00: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x39CE04u;
        goto label_39ce04;
    }
    ctx->pc = 0x39CDFCu;
    SET_GPR_U32(ctx, 31, 0x39CE04u);
    ctx->pc = 0x39CE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CDFCu;
            // 0x39ce00: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CE04u; }
        if (ctx->pc != 0x39CE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CE04u; }
        if (ctx->pc != 0x39CE04u) { return; }
    }
    ctx->pc = 0x39CE04u;
label_39ce04:
    // 0x39ce04: 0x96630130  lhu         $v1, 0x130($s3)
    ctx->pc = 0x39ce04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 304)));
label_39ce08:
    // 0x39ce08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39ce0c:
    // 0x39ce0c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_39ce10:
    if (ctx->pc == 0x39CE10u) {
        ctx->pc = 0x39CE10u;
            // 0x39ce10: 0x3c024026  lui         $v0, 0x4026 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16422 << 16));
        ctx->pc = 0x39CE14u;
        goto label_39ce14;
    }
    ctx->pc = 0x39CE0Cu;
    {
        const bool branch_taken_0x39ce0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39ce0c) {
            ctx->pc = 0x39CE10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39CE0Cu;
            // 0x39ce10: 0x3c024026  lui         $v0, 0x4026 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16422 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39CE2Cu;
            goto label_39ce2c;
        }
    }
    ctx->pc = 0x39CE14u;
label_39ce14:
    // 0x39ce14: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x39ce14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_39ce18:
    // 0x39ce18: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x39ce18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_39ce1c:
    // 0x39ce1c: 0x320f809  jalr        $t9
label_39ce20:
    if (ctx->pc == 0x39CE20u) {
        ctx->pc = 0x39CE20u;
            // 0x39ce20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39CE24u;
        goto label_39ce24;
    }
    ctx->pc = 0x39CE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39CE24u);
        ctx->pc = 0x39CE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39CE1Cu;
            // 0x39ce20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39CE24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39CE24u; }
            if (ctx->pc != 0x39CE24u) { return; }
        }
        }
    }
    ctx->pc = 0x39CE24u;
label_39ce24:
    // 0x39ce24: 0x100000ec  b           . + 4 + (0xEC << 2)
label_39ce28:
    if (ctx->pc == 0x39CE28u) {
        ctx->pc = 0x39CE2Cu;
        goto label_39ce2c;
    }
    ctx->pc = 0x39CE24u;
    {
        const bool branch_taken_0x39ce24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ce24) {
            ctx->pc = 0x39D1D8u;
            goto label_39d1d8;
        }
    }
    ctx->pc = 0x39CE2Cu;
label_39ce2c:
    // 0x39ce2c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x39ce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_39ce30:
    // 0x39ce30: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x39ce30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_39ce34:
    // 0x39ce34: 0x26650110  addiu       $a1, $s3, 0x110
    ctx->pc = 0x39ce34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_39ce38:
    // 0x39ce38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39ce38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39ce3c:
    // 0x39ce3c: 0xc04cc7c  jal         func_1331F0
label_39ce40:
    if (ctx->pc == 0x39CE40u) {
        ctx->pc = 0x39CE40u;
            // 0x39ce40: 0x266600e0  addiu       $a2, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->pc = 0x39CE44u;
        goto label_39ce44;
    }
    ctx->pc = 0x39CE3Cu;
    SET_GPR_U32(ctx, 31, 0x39CE44u);
    ctx->pc = 0x39CE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CE3Cu;
            // 0x39ce40: 0x266600e0  addiu       $a2, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CE44u; }
        if (ctx->pc != 0x39CE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CE44u; }
        if (ctx->pc != 0x39CE44u) { return; }
    }
    ctx->pc = 0x39CE44u;
label_39ce44:
    // 0x39ce44: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x39ce44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_39ce48:
    // 0x39ce48: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x39ce48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_39ce4c:
    // 0x39ce4c: 0xc04cc90  jal         func_133240
label_39ce50:
    if (ctx->pc == 0x39CE50u) {
        ctx->pc = 0x39CE50u;
            // 0x39ce50: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x39CE54u;
        goto label_39ce54;
    }
    ctx->pc = 0x39CE4Cu;
    SET_GPR_U32(ctx, 31, 0x39CE54u);
    ctx->pc = 0x39CE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CE4Cu;
            // 0x39ce50: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CE54u; }
        if (ctx->pc != 0x39CE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CE54u; }
        if (ctx->pc != 0x39CE54u) { return; }
    }
    ctx->pc = 0x39CE54u;
label_39ce54:
    // 0x39ce54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39ce58:
    // 0x39ce58: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x39ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_39ce5c:
    // 0x39ce5c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39ce60:
    // 0x39ce60: 0xc44c001c  lwc1        $f12, 0x1C($v0)
    ctx->pc = 0x39ce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39ce64:
    // 0x39ce64: 0xc04cc70  jal         func_1331C0
label_39ce68:
    if (ctx->pc == 0x39CE68u) {
        ctx->pc = 0x39CE68u;
            // 0x39ce68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39CE6Cu;
        goto label_39ce6c;
    }
    ctx->pc = 0x39CE64u;
    SET_GPR_U32(ctx, 31, 0x39CE6Cu);
    ctx->pc = 0x39CE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CE64u;
            // 0x39ce68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CE6Cu; }
        if (ctx->pc != 0x39CE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CE6Cu; }
        if (ctx->pc != 0x39CE6Cu) { return; }
    }
    ctx->pc = 0x39CE6Cu;
label_39ce6c:
    // 0x39ce6c: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x39ce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39ce70:
    // 0x39ce70: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x39ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_39ce74:
    // 0x39ce74: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x39ce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ce78:
    // 0x39ce78: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x39ce78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ce7c:
    // 0x39ce7c: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x39ce7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_39ce80:
    // 0x39ce80: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x39ce80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_39ce84:
    // 0x39ce84: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x39ce84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_39ce88:
    // 0x39ce88: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x39ce88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_39ce8c:
    // 0x39ce8c: 0xc088b74  jal         func_222DD0
label_39ce90:
    if (ctx->pc == 0x39CE90u) {
        ctx->pc = 0x39CE90u;
            // 0x39ce90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39CE94u;
        goto label_39ce94;
    }
    ctx->pc = 0x39CE8Cu;
    SET_GPR_U32(ctx, 31, 0x39CE94u);
    ctx->pc = 0x39CE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CE8Cu;
            // 0x39ce90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CE94u; }
        if (ctx->pc != 0x39CE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CE94u; }
        if (ctx->pc != 0x39CE94u) { return; }
    }
    ctx->pc = 0x39CE94u;
label_39ce94:
    // 0x39ce94: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x39ce94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39ce98:
    // 0x39ce98: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x39ce98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_39ce9c:
    // 0x39ce9c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x39ce9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_39cea0:
    // 0x39cea0: 0x320f809  jalr        $t9
label_39cea4:
    if (ctx->pc == 0x39CEA4u) {
        ctx->pc = 0x39CEA4u;
            // 0x39cea4: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x39CEA8u;
        goto label_39cea8;
    }
    ctx->pc = 0x39CEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39CEA8u);
        ctx->pc = 0x39CEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39CEA0u;
            // 0x39cea4: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39CEA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39CEA8u; }
            if (ctx->pc != 0x39CEA8u) { return; }
        }
        }
    }
    ctx->pc = 0x39CEA8u;
label_39cea8:
    // 0x39cea8: 0xc66100f8  lwc1        $f1, 0xF8($s3)
    ctx->pc = 0x39cea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ceac:
    // 0x39ceac: 0x267000f0  addiu       $s0, $s3, 0xF0
    ctx->pc = 0x39ceacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
label_39ceb0:
    // 0x39ceb0: 0xc66000f0  lwc1        $f0, 0xF0($s3)
    ctx->pc = 0x39ceb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ceb4:
    // 0x39ceb4: 0xc66c00f4  lwc1        $f12, 0xF4($s3)
    ctx->pc = 0x39ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39ceb8:
    // 0x39ceb8: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x39ceb8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_39cebc:
    // 0x39cebc: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x39cebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_39cec0:
    // 0x39cec0: 0x46000344  c1          0x344
    ctx->pc = 0x39cec0u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_39cec4:
    // 0x39cec4: 0x0  nop
    ctx->pc = 0x39cec4u;
    // NOP
label_39cec8:
    // 0x39cec8: 0x0  nop
    ctx->pc = 0x39cec8u;
    // NOP
label_39cecc:
    // 0x39cecc: 0xc04780a  jal         func_11E028
label_39ced0:
    if (ctx->pc == 0x39CED0u) {
        ctx->pc = 0x39CED4u;
        goto label_39ced4;
    }
    ctx->pc = 0x39CECCu;
    SET_GPR_U32(ctx, 31, 0x39CED4u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CED4u; }
        if (ctx->pc != 0x39CED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CED4u; }
        if (ctx->pc != 0x39CED4u) { return; }
    }
    ctx->pc = 0x39CED4u;
label_39ced4:
    // 0x39ced4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x39ced4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39ced8:
    // 0x39ced8: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x39ced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_39cedc:
    // 0x39cedc: 0xc04780a  jal         func_11E028
label_39cee0:
    if (ctx->pc == 0x39CEE0u) {
        ctx->pc = 0x39CEE0u;
            // 0x39cee0: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x39CEE4u;
        goto label_39cee4;
    }
    ctx->pc = 0x39CEDCu;
    SET_GPR_U32(ctx, 31, 0x39CEE4u);
    ctx->pc = 0x39CEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CEDCu;
            // 0x39cee0: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CEE4u; }
        if (ctx->pc != 0x39CEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CEE4u; }
        if (ctx->pc != 0x39CEE4u) { return; }
    }
    ctx->pc = 0x39CEE4u;
label_39cee4:
    // 0x39cee4: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x39cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_39cee8:
    // 0x39cee8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x39cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_39ceec:
    // 0x39ceec: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x39ceecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_39cef0:
    // 0x39cef0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x39cef0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_39cef4:
    // 0x39cef4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_39cef8:
    // 0x39cef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39cef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39cefc:
    // 0x39cefc: 0x0  nop
    ctx->pc = 0x39cefcu;
    // NOP
label_39cf00:
    // 0x39cf00: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x39cf00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_39cf04:
    // 0x39cf04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39cf04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_39cf08:
    // 0x39cf08: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x39cf08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_39cf0c:
    // 0x39cf0c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x39cf0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_39cf10:
    // 0x39cf10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39cf10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39cf14:
    // 0x39cf14: 0xc04c970  jal         func_1325C0
label_39cf18:
    if (ctx->pc == 0x39CF18u) {
        ctx->pc = 0x39CF18u;
            // 0x39cf18: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x39CF1Cu;
        goto label_39cf1c;
    }
    ctx->pc = 0x39CF14u;
    SET_GPR_U32(ctx, 31, 0x39CF1Cu);
    ctx->pc = 0x39CF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CF14u;
            // 0x39cf18: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CF1Cu; }
        if (ctx->pc != 0x39CF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CF1Cu; }
        if (ctx->pc != 0x39CF1Cu) { return; }
    }
    ctx->pc = 0x39CF1Cu;
label_39cf1c:
    // 0x39cf1c: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x39cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_39cf20:
    // 0x39cf20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_39cf24:
    // 0x39cf24: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x39cf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_39cf28:
    // 0x39cf28: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x39cf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_39cf2c:
    // 0x39cf2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39cf2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39cf30:
    // 0x39cf30: 0x0  nop
    ctx->pc = 0x39cf30u;
    // NOP
label_39cf34:
    // 0x39cf34: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x39cf34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_39cf38:
    // 0x39cf38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39cf38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_39cf3c:
    // 0x39cf3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39cf3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39cf40:
    // 0x39cf40: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x39cf40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_39cf44:
    // 0x39cf44: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x39cf44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_39cf48:
    // 0x39cf48: 0xc04c970  jal         func_1325C0
label_39cf4c:
    if (ctx->pc == 0x39CF4Cu) {
        ctx->pc = 0x39CF4Cu;
            // 0x39cf4c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x39CF50u;
        goto label_39cf50;
    }
    ctx->pc = 0x39CF48u;
    SET_GPR_U32(ctx, 31, 0x39CF50u);
    ctx->pc = 0x39CF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CF48u;
            // 0x39cf4c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CF50u; }
        if (ctx->pc != 0x39CF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CF50u; }
        if (ctx->pc != 0x39CF50u) { return; }
    }
    ctx->pc = 0x39CF50u;
label_39cf50:
    // 0x39cf50: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x39cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_39cf54:
    // 0x39cf54: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x39cf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_39cf58:
    // 0x39cf58: 0xc04c72c  jal         func_131CB0
label_39cf5c:
    if (ctx->pc == 0x39CF5Cu) {
        ctx->pc = 0x39CF5Cu;
            // 0x39cf5c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x39CF60u;
        goto label_39cf60;
    }
    ctx->pc = 0x39CF58u;
    SET_GPR_U32(ctx, 31, 0x39CF60u);
    ctx->pc = 0x39CF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CF58u;
            // 0x39cf5c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CF60u; }
        if (ctx->pc != 0x39CF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CF60u; }
        if (ctx->pc != 0x39CF60u) { return; }
    }
    ctx->pc = 0x39CF60u;
label_39cf60:
    // 0x39cf60: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x39cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_39cf64:
    // 0x39cf64: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x39cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_39cf68:
    // 0x39cf68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x39cf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_39cf6c:
    // 0x39cf6c: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x39cf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_39cf70:
    // 0x39cf70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39cf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39cf74:
    // 0x39cf74: 0xc04c8f0  jal         func_1323C0
label_39cf78:
    if (ctx->pc == 0x39CF78u) {
        ctx->pc = 0x39CF78u;
            // 0x39cf78: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x39CF7Cu;
        goto label_39cf7c;
    }
    ctx->pc = 0x39CF74u;
    SET_GPR_U32(ctx, 31, 0x39CF7Cu);
    ctx->pc = 0x39CF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CF74u;
            // 0x39cf78: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (runtime->hasFunction(0x1323C0u)) {
        auto targetFn = runtime->lookupFunction(0x1323C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CF7Cu; }
        if (ctx->pc != 0x39CF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001323C0_0x1323c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CF7Cu; }
        if (ctx->pc != 0x39CF7Cu) { return; }
    }
    ctx->pc = 0x39CF7Cu;
label_39cf7c:
    // 0x39cf7c: 0xc667002c  lwc1        $f7, 0x2C($s3)
    ctx->pc = 0x39cf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_39cf80:
    // 0x39cf80: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x39cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_39cf84:
    // 0x39cf84: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x39cf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39cf88:
    // 0x39cf88: 0xc6660028  lwc1        $f6, 0x28($s3)
    ctx->pc = 0x39cf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_39cf8c:
    // 0x39cf8c: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x39cf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39cf90:
    // 0x39cf90: 0xc6650024  lwc1        $f5, 0x24($s3)
    ctx->pc = 0x39cf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39cf94:
    // 0x39cf94: 0xc6640020  lwc1        $f4, 0x20($s3)
    ctx->pc = 0x39cf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39cf98:
    // 0x39cf98: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x39cf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39cf9c:
    // 0x39cf9c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x39cf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39cfa0:
    // 0x39cfa0: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x39cfa0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_39cfa4:
    // 0x39cfa4: 0xe7a500b4  swc1        $f5, 0xB4($sp)
    ctx->pc = 0x39cfa4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_39cfa8:
    // 0x39cfa8: 0xe7a600b8  swc1        $f6, 0xB8($sp)
    ctx->pc = 0x39cfa8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_39cfac:
    // 0x39cfac: 0xe7a700bc  swc1        $f7, 0xBC($sp)
    ctx->pc = 0x39cfacu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_39cfb0:
    // 0x39cfb0: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x39cfb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_39cfb4:
    // 0x39cfb4: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x39cfb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_39cfb8:
    // 0x39cfb8: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x39cfb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_39cfbc:
    // 0x39cfbc: 0xc0d8a80  jal         func_362A00
label_39cfc0:
    if (ctx->pc == 0x39CFC0u) {
        ctx->pc = 0x39CFC0u;
            // 0x39cfc0: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->pc = 0x39CFC4u;
        goto label_39cfc4;
    }
    ctx->pc = 0x39CFBCu;
    SET_GPR_U32(ctx, 31, 0x39CFC4u);
    ctx->pc = 0x39CFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CFBCu;
            // 0x39cfc0: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CFC4u; }
        if (ctx->pc != 0x39CFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CFC4u; }
        if (ctx->pc != 0x39CFC4u) { return; }
    }
    ctx->pc = 0x39CFC4u;
label_39cfc4:
    // 0x39cfc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39cfc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39cfc8:
    // 0x39cfc8: 0xc0d8a80  jal         func_362A00
label_39cfcc:
    if (ctx->pc == 0x39CFCCu) {
        ctx->pc = 0x39CFCCu;
            // 0x39cfcc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x39CFD0u;
        goto label_39cfd0;
    }
    ctx->pc = 0x39CFC8u;
    SET_GPR_U32(ctx, 31, 0x39CFD0u);
    ctx->pc = 0x39CFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CFC8u;
            // 0x39cfcc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CFD0u; }
        if (ctx->pc != 0x39CFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CFD0u; }
        if (ctx->pc != 0x39CFD0u) { return; }
    }
    ctx->pc = 0x39CFD0u;
label_39cfd0:
    // 0x39cfd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39cfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39cfd4:
    // 0x39cfd4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x39cfd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39cfd8:
    // 0x39cfd8: 0xc0d8a6c  jal         func_3629B0
label_39cfdc:
    if (ctx->pc == 0x39CFDCu) {
        ctx->pc = 0x39CFDCu;
            // 0x39cfdc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x39CFE0u;
        goto label_39cfe0;
    }
    ctx->pc = 0x39CFD8u;
    SET_GPR_U32(ctx, 31, 0x39CFE0u);
    ctx->pc = 0x39CFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CFD8u;
            // 0x39cfdc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3629B0u;
    if (runtime->hasFunction(0x3629B0u)) {
        auto targetFn = runtime->lookupFunction(0x3629B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CFE0u; }
        if (ctx->pc != 0x39CFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003629B0_0x3629b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CFE0u; }
        if (ctx->pc != 0x39CFE0u) { return; }
    }
    ctx->pc = 0x39CFE0u;
label_39cfe0:
    // 0x39cfe0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x39cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_39cfe4:
    // 0x39cfe4: 0xc0b6e90  jal         func_2DBA40
label_39cfe8:
    if (ctx->pc == 0x39CFE8u) {
        ctx->pc = 0x39CFE8u;
            // 0x39cfe8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x39CFECu;
        goto label_39cfec;
    }
    ctx->pc = 0x39CFE4u;
    SET_GPR_U32(ctx, 31, 0x39CFECu);
    ctx->pc = 0x39CFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CFE4u;
            // 0x39cfe8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CFECu; }
        if (ctx->pc != 0x39CFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CFECu; }
        if (ctx->pc != 0x39CFECu) { return; }
    }
    ctx->pc = 0x39CFECu;
label_39cfec:
    // 0x39cfec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x39cfecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_39cff0:
    // 0x39cff0: 0xc0d8a80  jal         func_362A00
label_39cff4:
    if (ctx->pc == 0x39CFF4u) {
        ctx->pc = 0x39CFF4u;
            // 0x39cff4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x39CFF8u;
        goto label_39cff8;
    }
    ctx->pc = 0x39CFF0u;
    SET_GPR_U32(ctx, 31, 0x39CFF8u);
    ctx->pc = 0x39CFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CFF0u;
            // 0x39cff4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CFF8u; }
        if (ctx->pc != 0x39CFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CFF8u; }
        if (ctx->pc != 0x39CFF8u) { return; }
    }
    ctx->pc = 0x39CFF8u;
label_39cff8:
    // 0x39cff8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39cff8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_39cffc:
    // 0x39cffc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39cffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d000:
    // 0x39d000: 0xc0d8a54  jal         func_362950
label_39d004:
    if (ctx->pc == 0x39D004u) {
        ctx->pc = 0x39D004u;
            // 0x39d004: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x39D008u;
        goto label_39d008;
    }
    ctx->pc = 0x39D000u;
    SET_GPR_U32(ctx, 31, 0x39D008u);
    ctx->pc = 0x39D004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D000u;
            // 0x39d004: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362950u;
    if (runtime->hasFunction(0x362950u)) {
        auto targetFn = runtime->lookupFunction(0x362950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D008u; }
        if (ctx->pc != 0x39D008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362950_0x362950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D008u; }
        if (ctx->pc != 0x39D008u) { return; }
    }
    ctx->pc = 0x39D008u;
label_39d008:
    // 0x39d008: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x39d008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_39d00c:
    // 0x39d00c: 0xc0b6e90  jal         func_2DBA40
label_39d010:
    if (ctx->pc == 0x39D010u) {
        ctx->pc = 0x39D010u;
            // 0x39d010: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x39D014u;
        goto label_39d014;
    }
    ctx->pc = 0x39D00Cu;
    SET_GPR_U32(ctx, 31, 0x39D014u);
    ctx->pc = 0x39D010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D00Cu;
            // 0x39d010: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D014u; }
        if (ctx->pc != 0x39D014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D014u; }
        if (ctx->pc != 0x39D014u) { return; }
    }
    ctx->pc = 0x39D014u;
label_39d014:
    // 0x39d014: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x39d014u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_39d018:
    // 0x39d018: 0xc0d8a80  jal         func_362A00
label_39d01c:
    if (ctx->pc == 0x39D01Cu) {
        ctx->pc = 0x39D01Cu;
            // 0x39d01c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x39D020u;
        goto label_39d020;
    }
    ctx->pc = 0x39D018u;
    SET_GPR_U32(ctx, 31, 0x39D020u);
    ctx->pc = 0x39D01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D018u;
            // 0x39d01c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D020u; }
        if (ctx->pc != 0x39D020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D020u; }
        if (ctx->pc != 0x39D020u) { return; }
    }
    ctx->pc = 0x39D020u;
label_39d020:
    // 0x39d020: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39d020u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_39d024:
    // 0x39d024: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39d024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d028:
    // 0x39d028: 0xc0d8a3c  jal         func_3628F0
label_39d02c:
    if (ctx->pc == 0x39D02Cu) {
        ctx->pc = 0x39D02Cu;
            // 0x39d02c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x39D030u;
        goto label_39d030;
    }
    ctx->pc = 0x39D028u;
    SET_GPR_U32(ctx, 31, 0x39D030u);
    ctx->pc = 0x39D02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D028u;
            // 0x39d02c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628F0u;
    if (runtime->hasFunction(0x3628F0u)) {
        auto targetFn = runtime->lookupFunction(0x3628F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D030u; }
        if (ctx->pc != 0x39D030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628F0_0x3628f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D030u; }
        if (ctx->pc != 0x39D030u) { return; }
    }
    ctx->pc = 0x39D030u;
label_39d030:
    // 0x39d030: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x39d030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_39d034:
    // 0x39d034: 0xc0b6e00  jal         func_2DB800
label_39d038:
    if (ctx->pc == 0x39D038u) {
        ctx->pc = 0x39D038u;
            // 0x39d038: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D03Cu;
        goto label_39d03c;
    }
    ctx->pc = 0x39D034u;
    SET_GPR_U32(ctx, 31, 0x39D03Cu);
    ctx->pc = 0x39D038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D034u;
            // 0x39d038: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB800u;
    if (runtime->hasFunction(0x2DB800u)) {
        auto targetFn = runtime->lookupFunction(0x2DB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D03Cu; }
        if (ctx->pc != 0x39D03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB800_0x2db800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D03Cu; }
        if (ctx->pc != 0x39D03Cu) { return; }
    }
    ctx->pc = 0x39D03Cu;
label_39d03c:
    // 0x39d03c: 0xc0d8a80  jal         func_362A00
label_39d040:
    if (ctx->pc == 0x39D040u) {
        ctx->pc = 0x39D040u;
            // 0x39d040: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x39D044u;
        goto label_39d044;
    }
    ctx->pc = 0x39D03Cu;
    SET_GPR_U32(ctx, 31, 0x39D044u);
    ctx->pc = 0x39D040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D03Cu;
            // 0x39d040: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D044u; }
        if (ctx->pc != 0x39D044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D044u; }
        if (ctx->pc != 0x39D044u) { return; }
    }
    ctx->pc = 0x39D044u;
label_39d044:
    // 0x39d044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39d044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d048:
    // 0x39d048: 0xc0d8a80  jal         func_362A00
label_39d04c:
    if (ctx->pc == 0x39D04Cu) {
        ctx->pc = 0x39D04Cu;
            // 0x39d04c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x39D050u;
        goto label_39d050;
    }
    ctx->pc = 0x39D048u;
    SET_GPR_U32(ctx, 31, 0x39D050u);
    ctx->pc = 0x39D04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D048u;
            // 0x39d04c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D050u; }
        if (ctx->pc != 0x39D050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D050u; }
        if (ctx->pc != 0x39D050u) { return; }
    }
    ctx->pc = 0x39D050u;
label_39d050:
    // 0x39d050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d054:
    // 0x39d054: 0xc0d8a2c  jal         func_3628B0
label_39d058:
    if (ctx->pc == 0x39D058u) {
        ctx->pc = 0x39D058u;
            // 0x39d058: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D05Cu;
        goto label_39d05c;
    }
    ctx->pc = 0x39D054u;
    SET_GPR_U32(ctx, 31, 0x39D05Cu);
    ctx->pc = 0x39D058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D054u;
            // 0x39d058: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628B0u;
    if (runtime->hasFunction(0x3628B0u)) {
        auto targetFn = runtime->lookupFunction(0x3628B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D05Cu; }
        if (ctx->pc != 0x39D05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628B0_0x3628b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D05Cu; }
        if (ctx->pc != 0x39D05Cu) { return; }
    }
    ctx->pc = 0x39D05Cu;
label_39d05c:
    // 0x39d05c: 0xc0d8a24  jal         func_362890
label_39d060:
    if (ctx->pc == 0x39D060u) {
        ctx->pc = 0x39D060u;
            // 0x39d060: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x39D064u;
        goto label_39d064;
    }
    ctx->pc = 0x39D05Cu;
    SET_GPR_U32(ctx, 31, 0x39D064u);
    ctx->pc = 0x39D060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D05Cu;
            // 0x39d060: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x362890u;
    if (runtime->hasFunction(0x362890u)) {
        auto targetFn = runtime->lookupFunction(0x362890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D064u; }
        if (ctx->pc != 0x39D064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362890_0x362890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D064u; }
        if (ctx->pc != 0x39D064u) { return; }
    }
    ctx->pc = 0x39D064u;
label_39d064:
    // 0x39d064: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39d068:
    if (ctx->pc == 0x39D068u) {
        ctx->pc = 0x39D06Cu;
        goto label_39d06c;
    }
    ctx->pc = 0x39D064u;
    {
        const bool branch_taken_0x39d064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d064) {
            ctx->pc = 0x39D078u;
            goto label_39d078;
        }
    }
    ctx->pc = 0x39D06Cu;
label_39d06c:
    // 0x39d06c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x39d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_39d070:
    // 0x39d070: 0xc0d8a14  jal         func_362850
label_39d074:
    if (ctx->pc == 0x39D074u) {
        ctx->pc = 0x39D074u;
            // 0x39d074: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D078u;
        goto label_39d078;
    }
    ctx->pc = 0x39D070u;
    SET_GPR_U32(ctx, 31, 0x39D078u);
    ctx->pc = 0x39D074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D070u;
            // 0x39d074: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362850u;
    if (runtime->hasFunction(0x362850u)) {
        auto targetFn = runtime->lookupFunction(0x362850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D078u; }
        if (ctx->pc != 0x39D078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362850_0x362850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D078u; }
        if (ctx->pc != 0x39D078u) { return; }
    }
    ctx->pc = 0x39D078u;
label_39d078:
    // 0x39d078: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39d078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39d07c:
    // 0x39d07c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39d080:
    // 0x39d080: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x39d080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39d084:
    // 0x39d084: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x39d084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39d088:
    // 0x39d088: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x39d088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39d08c:
    // 0x39d08c: 0xc444001c  lwc1        $f4, 0x1C($v0)
    ctx->pc = 0x39d08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39d090:
    // 0x39d090: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x39d090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39d094:
    // 0x39d094: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x39d094u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_39d098:
    // 0x39d098: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x39d098u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_39d09c:
    // 0x39d09c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x39d09cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_39d0a0:
    // 0x39d0a0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x39d0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_39d0a4:
    // 0x39d0a4: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x39d0a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_39d0a8:
    // 0x39d0a8: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x39d0a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_39d0ac:
    // 0x39d0ac: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x39d0acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_39d0b0:
    // 0x39d0b0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x39d0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_39d0b4:
    // 0x39d0b4: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x39d0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_39d0b8:
    // 0x39d0b8: 0xc088b74  jal         func_222DD0
label_39d0bc:
    if (ctx->pc == 0x39D0BCu) {
        ctx->pc = 0x39D0BCu;
            // 0x39d0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D0C0u;
        goto label_39d0c0;
    }
    ctx->pc = 0x39D0B8u;
    SET_GPR_U32(ctx, 31, 0x39D0C0u);
    ctx->pc = 0x39D0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D0B8u;
            // 0x39d0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D0C0u; }
        if (ctx->pc != 0x39D0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D0C0u; }
        if (ctx->pc != 0x39D0C0u) { return; }
    }
    ctx->pc = 0x39D0C0u;
label_39d0c0:
    // 0x39d0c0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x39d0c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d0c4:
    // 0x39d0c4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x39d0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_39d0c8:
    // 0x39d0c8: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x39d0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_39d0cc:
    // 0x39d0cc: 0x320f809  jalr        $t9
label_39d0d0:
    if (ctx->pc == 0x39D0D0u) {
        ctx->pc = 0x39D0D0u;
            // 0x39d0d0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x39D0D4u;
        goto label_39d0d4;
    }
    ctx->pc = 0x39D0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39D0D4u);
        ctx->pc = 0x39D0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D0CCu;
            // 0x39d0d0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39D0D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39D0D4u; }
            if (ctx->pc != 0x39D0D4u) { return; }
        }
        }
    }
    ctx->pc = 0x39D0D4u;
label_39d0d4:
    // 0x39d0d4: 0x8e630144  lw          $v1, 0x144($s3)
    ctx->pc = 0x39d0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
label_39d0d8:
    // 0x39d0d8: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
label_39d0dc:
    if (ctx->pc == 0x39D0DCu) {
        ctx->pc = 0x39D0E0u;
        goto label_39d0e0;
    }
    ctx->pc = 0x39D0D8u;
    {
        const bool branch_taken_0x39d0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d0d8) {
            ctx->pc = 0x39D1D8u;
            goto label_39d1d8;
        }
    }
    ctx->pc = 0x39D0E0u;
label_39d0e0:
    // 0x39d0e0: 0x8e700154  lw          $s0, 0x154($s3)
    ctx->pc = 0x39d0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
label_39d0e4:
    // 0x39d0e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39d0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d0e8:
    // 0x39d0e8: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x39d0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_39d0ec:
    // 0x39d0ec: 0xc122d2c  jal         func_48B4B0
label_39d0f0:
    if (ctx->pc == 0x39D0F0u) {
        ctx->pc = 0x39D0F0u;
            // 0x39d0f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D0F4u;
        goto label_39d0f4;
    }
    ctx->pc = 0x39D0ECu;
    SET_GPR_U32(ctx, 31, 0x39D0F4u);
    ctx->pc = 0x39D0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D0ECu;
            // 0x39d0f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D0F4u; }
        if (ctx->pc != 0x39D0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D0F4u; }
        if (ctx->pc != 0x39D0F4u) { return; }
    }
    ctx->pc = 0x39D0F4u;
label_39d0f4:
    // 0x39d0f4: 0xc04ab66  jal         func_12AD98
label_39d0f8:
    if (ctx->pc == 0x39D0F8u) {
        ctx->pc = 0x39D0FCu;
        goto label_39d0fc;
    }
    ctx->pc = 0x39D0F4u;
    SET_GPR_U32(ctx, 31, 0x39D0FCu);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D0FCu; }
        if (ctx->pc != 0x39D0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D0FCu; }
        if (ctx->pc != 0x39D0FCu) { return; }
    }
    ctx->pc = 0x39D0FCu;
label_39d0fc:
    // 0x39d0fc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x39d0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_39d100:
    // 0x39d100: 0xc04ab66  jal         func_12AD98
label_39d104:
    if (ctx->pc == 0x39D104u) {
        ctx->pc = 0x39D104u;
            // 0x39d104: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x39D108u;
        goto label_39d108;
    }
    ctx->pc = 0x39D100u;
    SET_GPR_U32(ctx, 31, 0x39D108u);
    ctx->pc = 0x39D104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D100u;
            // 0x39d104: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D108u; }
        if (ctx->pc != 0x39D108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D108u; }
        if (ctx->pc != 0x39D108u) { return; }
    }
    ctx->pc = 0x39D108u;
label_39d108:
    // 0x39d108: 0x512025  or          $a0, $v0, $s1
    ctx->pc = 0x39d108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_39d10c:
    // 0x39d10c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x39d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_39d110:
    // 0x39d110: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x39d110u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_39d114:
    // 0x39d114: 0x1810  mfhi        $v1
    ctx->pc = 0x39d114u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_39d118:
    // 0x39d118: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_39d11c:
    if (ctx->pc == 0x39D11Cu) {
        ctx->pc = 0x39D11Cu;
            // 0x39d11c: 0x8e6401a0  lw          $a0, 0x1A0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 416)));
        ctx->pc = 0x39D120u;
        goto label_39d120;
    }
    ctx->pc = 0x39D118u;
    {
        const bool branch_taken_0x39d118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d118) {
            ctx->pc = 0x39D11Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39D118u;
            // 0x39d11c: 0x8e6401a0  lw          $a0, 0x1A0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39D134u;
            goto label_39d134;
        }
    }
    ctx->pc = 0x39D120u;
label_39d120:
    // 0x39d120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d124:
    // 0x39d124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39d124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d128:
    // 0x39d128: 0xc122d2c  jal         func_48B4B0
label_39d12c:
    if (ctx->pc == 0x39D12Cu) {
        ctx->pc = 0x39D12Cu;
            // 0x39d12c: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x39D130u;
        goto label_39d130;
    }
    ctx->pc = 0x39D128u;
    SET_GPR_U32(ctx, 31, 0x39D130u);
    ctx->pc = 0x39D12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D128u;
            // 0x39d12c: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D130u; }
        if (ctx->pc != 0x39D130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D130u; }
        if (ctx->pc != 0x39D130u) { return; }
    }
    ctx->pc = 0x39D130u;
label_39d130:
    // 0x39d130: 0x8e6401a0  lw          $a0, 0x1A0($s3)
    ctx->pc = 0x39d130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 416)));
label_39d134:
    // 0x39d134: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x39d134u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_39d138:
    // 0x39d138: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x39d138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_39d13c:
    // 0x39d13c: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x39d13cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_39d140:
    // 0x39d140: 0x8e6401a4  lw          $a0, 0x1A4($s3)
    ctx->pc = 0x39d140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 420)));
label_39d144:
    // 0x39d144: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x39d144u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_39d148:
    // 0x39d148: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x39d148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_39d14c:
    // 0x39d14c: 0x10000022  b           . + 4 + (0x22 << 2)
label_39d150:
    if (ctx->pc == 0x39D150u) {
        ctx->pc = 0x39D150u;
            // 0x39d150: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x39D154u;
        goto label_39d154;
    }
    ctx->pc = 0x39D14Cu;
    {
        const bool branch_taken_0x39d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D14Cu;
            // 0x39d150: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d14c) {
            ctx->pc = 0x39D1D8u;
            goto label_39d1d8;
        }
    }
    ctx->pc = 0x39D154u;
label_39d154:
    // 0x39d154: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x39d154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_39d158:
    // 0x39d158: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x39d158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_39d15c:
    // 0x39d15c: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x39d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_39d160:
    // 0x39d160: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x39d160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_39d164:
    // 0x39d164: 0xc088b74  jal         func_222DD0
label_39d168:
    if (ctx->pc == 0x39D168u) {
        ctx->pc = 0x39D168u;
            // 0x39d168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D16Cu;
        goto label_39d16c;
    }
    ctx->pc = 0x39D164u;
    SET_GPR_U32(ctx, 31, 0x39D16Cu);
    ctx->pc = 0x39D168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D164u;
            // 0x39d168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D16Cu; }
        if (ctx->pc != 0x39D16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D16Cu; }
        if (ctx->pc != 0x39D16Cu) { return; }
    }
    ctx->pc = 0x39D16Cu;
label_39d16c:
    // 0x39d16c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x39d16cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d170:
    // 0x39d170: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x39d170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_39d174:
    // 0x39d174: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x39d174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_39d178:
    // 0x39d178: 0x320f809  jalr        $t9
label_39d17c:
    if (ctx->pc == 0x39D17Cu) {
        ctx->pc = 0x39D17Cu;
            // 0x39d17c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x39D180u;
        goto label_39d180;
    }
    ctx->pc = 0x39D178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39D180u);
        ctx->pc = 0x39D17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D178u;
            // 0x39d17c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39D180u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39D180u; }
            if (ctx->pc != 0x39D180u) { return; }
        }
        }
    }
    ctx->pc = 0x39D180u;
label_39d180:
    // 0x39d180: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x39d180u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_39d184:
    // 0x39d184: 0xc088b74  jal         func_222DD0
label_39d188:
    if (ctx->pc == 0x39D188u) {
        ctx->pc = 0x39D188u;
            // 0x39d188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D18Cu;
        goto label_39d18c;
    }
    ctx->pc = 0x39D184u;
    SET_GPR_U32(ctx, 31, 0x39D18Cu);
    ctx->pc = 0x39D188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D184u;
            // 0x39d188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D18Cu; }
        if (ctx->pc != 0x39D18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D18Cu; }
        if (ctx->pc != 0x39D18Cu) { return; }
    }
    ctx->pc = 0x39D18Cu;
label_39d18c:
    // 0x39d18c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x39d18cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d190:
    // 0x39d190: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x39d190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_39d194:
    // 0x39d194: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x39d194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_39d198:
    // 0x39d198: 0x320f809  jalr        $t9
label_39d19c:
    if (ctx->pc == 0x39D19Cu) {
        ctx->pc = 0x39D19Cu;
            // 0x39d19c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x39D1A0u;
        goto label_39d1a0;
    }
    ctx->pc = 0x39D198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39D1A0u);
        ctx->pc = 0x39D19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D198u;
            // 0x39d19c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39D1A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39D1A0u; }
            if (ctx->pc != 0x39D1A0u) { return; }
        }
        }
    }
    ctx->pc = 0x39D1A0u;
label_39d1a0:
    // 0x39d1a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39d1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d1a4:
    // 0x39d1a4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x39d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_39d1a8:
    // 0x39d1a8: 0xae66008c  sw          $a2, 0x8C($s3)
    ctx->pc = 0x39d1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 6));
label_39d1ac:
    // 0x39d1ac: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x39d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
label_39d1b0:
    // 0x39d1b0: 0xae620070  sw          $v0, 0x70($s3)
    ctx->pc = 0x39d1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
label_39d1b4:
    // 0x39d1b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39d1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39d1b8:
    // 0x39d1b8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x39d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_39d1bc:
    // 0x39d1bc: 0xae630078  sw          $v1, 0x78($s3)
    ctx->pc = 0x39d1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 3));
label_39d1c0:
    // 0x39d1c0: 0xae620080  sw          $v0, 0x80($s3)
    ctx->pc = 0x39d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
label_39d1c4:
    // 0x39d1c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x39d1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39d1c8:
    // 0x39d1c8: 0xae660084  sw          $a2, 0x84($s3)
    ctx->pc = 0x39d1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 6));
label_39d1cc:
    // 0x39d1cc: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x39d1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39d1d0:
    // 0x39d1d0: 0xc0e32a4  jal         func_38CA90
label_39d1d4:
    if (ctx->pc == 0x39D1D4u) {
        ctx->pc = 0x39D1D4u;
            // 0x39d1d4: 0xe6600074  swc1        $f0, 0x74($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
        ctx->pc = 0x39D1D8u;
        goto label_39d1d8;
    }
    ctx->pc = 0x39D1D0u;
    SET_GPR_U32(ctx, 31, 0x39D1D8u);
    ctx->pc = 0x39D1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D1D0u;
            // 0x39d1d4: 0xe6600074  swc1        $f0, 0x74($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D1D8u; }
        if (ctx->pc != 0x39D1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D1D8u; }
        if (ctx->pc != 0x39D1D8u) { return; }
    }
    ctx->pc = 0x39D1D8u;
label_39d1d8:
    // 0x39d1d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x39d1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39d1dc:
    // 0x39d1dc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x39d1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39d1e0:
    // 0x39d1e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x39d1e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39d1e4:
    // 0x39d1e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x39d1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39d1e8:
    // 0x39d1e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39d1e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39d1ec:
    // 0x39d1ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39d1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39d1f0:
    // 0x39d1f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39d1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39d1f4:
    // 0x39d1f4: 0x3e00008  jr          $ra
label_39d1f8:
    if (ctx->pc == 0x39D1F8u) {
        ctx->pc = 0x39D1F8u;
            // 0x39d1f8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x39D1FCu;
        goto label_39d1fc;
    }
    ctx->pc = 0x39D1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D1F4u;
            // 0x39d1f8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39D1FCu;
label_39d1fc:
    // 0x39d1fc: 0x0  nop
    ctx->pc = 0x39d1fcu;
    // NOP
label_39d200:
    // 0x39d200: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39d200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39d204:
    // 0x39d204: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x39d204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_39d208:
    // 0x39d208: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39d208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39d20c:
    // 0x39d20c: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x39d20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_39d210:
    // 0x39d210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39d210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39d214:
    // 0x39d214: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39d214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39d218:
    // 0x39d218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39d21c:
    // 0x39d21c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39d21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d220:
    // 0x39d220: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x39d220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_39d224:
    // 0x39d224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39d224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39d228:
    // 0x39d228: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x39d228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_39d22c:
    // 0x39d22c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39d230:
    // 0x39d230: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39d230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39d234:
    // 0x39d234: 0xc08bff0  jal         func_22FFC0
label_39d238:
    if (ctx->pc == 0x39D238u) {
        ctx->pc = 0x39D238u;
            // 0x39d238: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D23Cu;
        goto label_39d23c;
    }
    ctx->pc = 0x39D234u;
    SET_GPR_U32(ctx, 31, 0x39D23Cu);
    ctx->pc = 0x39D238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D234u;
            // 0x39d238: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D23Cu; }
        if (ctx->pc != 0x39D23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D23Cu; }
        if (ctx->pc != 0x39D23Cu) { return; }
    }
    ctx->pc = 0x39D23Cu;
label_39d23c:
    // 0x39d23c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x39d23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39d240:
    // 0x39d240: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x39d240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39d244:
    // 0x39d244: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39d244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d248:
    // 0x39d248: 0xc08914c  jal         func_224530
label_39d24c:
    if (ctx->pc == 0x39D24Cu) {
        ctx->pc = 0x39D24Cu;
            // 0x39d24c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D250u;
        goto label_39d250;
    }
    ctx->pc = 0x39D248u;
    SET_GPR_U32(ctx, 31, 0x39D250u);
    ctx->pc = 0x39D24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D248u;
            // 0x39d24c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D250u; }
        if (ctx->pc != 0x39D250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D250u; }
        if (ctx->pc != 0x39D250u) { return; }
    }
    ctx->pc = 0x39D250u;
label_39d250:
    // 0x39d250: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x39d250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_39d254:
    // 0x39d254: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x39d254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_39d258:
    // 0x39d258: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x39d258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_39d25c:
    // 0x39d25c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x39d25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_39d260:
    // 0x39d260: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x39d260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_39d264:
    // 0x39d264: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x39d264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_39d268:
    // 0x39d268: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x39d268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39d26c:
    // 0x39d26c: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x39d26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39d270:
    // 0x39d270: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x39d270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39d274:
    // 0x39d274: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x39d274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39d278:
    // 0x39d278: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x39d278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_39d27c:
    // 0x39d27c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x39d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_39d280:
    // 0x39d280: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x39d280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_39d284:
    // 0x39d284: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x39d284u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_39d288:
    // 0x39d288: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x39d288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39d28c:
    // 0x39d28c: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x39d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39d290:
    // 0x39d290: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x39d290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39d294:
    // 0x39d294: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x39d294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39d298:
    // 0x39d298: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x39d298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_39d29c:
    // 0x39d29c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x39d29cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_39d2a0:
    // 0x39d2a0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x39d2a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_39d2a4:
    // 0x39d2a4: 0xc0892b0  jal         func_224AC0
label_39d2a8:
    if (ctx->pc == 0x39D2A8u) {
        ctx->pc = 0x39D2A8u;
            // 0x39d2a8: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x39D2ACu;
        goto label_39d2ac;
    }
    ctx->pc = 0x39D2A4u;
    SET_GPR_U32(ctx, 31, 0x39D2ACu);
    ctx->pc = 0x39D2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D2A4u;
            // 0x39d2a8: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D2ACu; }
        if (ctx->pc != 0x39D2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D2ACu; }
        if (ctx->pc != 0x39D2ACu) { return; }
    }
    ctx->pc = 0x39D2ACu;
label_39d2ac:
    // 0x39d2ac: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x39d2acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39d2b0:
    // 0x39d2b0: 0xc088b74  jal         func_222DD0
label_39d2b4:
    if (ctx->pc == 0x39D2B4u) {
        ctx->pc = 0x39D2B4u;
            // 0x39d2b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D2B8u;
        goto label_39d2b8;
    }
    ctx->pc = 0x39D2B0u;
    SET_GPR_U32(ctx, 31, 0x39D2B8u);
    ctx->pc = 0x39D2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D2B0u;
            // 0x39d2b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D2B8u; }
        if (ctx->pc != 0x39D2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D2B8u; }
        if (ctx->pc != 0x39D2B8u) { return; }
    }
    ctx->pc = 0x39D2B8u;
label_39d2b8:
    // 0x39d2b8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x39d2b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39d2bc:
    // 0x39d2bc: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x39d2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_39d2c0:
    // 0x39d2c0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x39d2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_39d2c4:
    // 0x39d2c4: 0x320f809  jalr        $t9
label_39d2c8:
    if (ctx->pc == 0x39D2C8u) {
        ctx->pc = 0x39D2C8u;
            // 0x39d2c8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x39D2CCu;
        goto label_39d2cc;
    }
    ctx->pc = 0x39D2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39D2CCu);
        ctx->pc = 0x39D2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D2C4u;
            // 0x39d2c8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39D2CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39D2CCu; }
            if (ctx->pc != 0x39D2CCu) { return; }
        }
        }
    }
    ctx->pc = 0x39D2CCu;
label_39d2cc:
    // 0x39d2cc: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x39d2ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39d2d0:
    // 0x39d2d0: 0xc088b74  jal         func_222DD0
label_39d2d4:
    if (ctx->pc == 0x39D2D4u) {
        ctx->pc = 0x39D2D4u;
            // 0x39d2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D2D8u;
        goto label_39d2d8;
    }
    ctx->pc = 0x39D2D0u;
    SET_GPR_U32(ctx, 31, 0x39D2D8u);
    ctx->pc = 0x39D2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D2D0u;
            // 0x39d2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D2D8u; }
        if (ctx->pc != 0x39D2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D2D8u; }
        if (ctx->pc != 0x39D2D8u) { return; }
    }
    ctx->pc = 0x39D2D8u;
label_39d2d8:
    // 0x39d2d8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x39d2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39d2dc:
    // 0x39d2dc: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x39d2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_39d2e0:
    // 0x39d2e0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x39d2e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_39d2e4:
    // 0x39d2e4: 0x320f809  jalr        $t9
label_39d2e8:
    if (ctx->pc == 0x39D2E8u) {
        ctx->pc = 0x39D2E8u;
            // 0x39d2e8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x39D2ECu;
        goto label_39d2ec;
    }
    ctx->pc = 0x39D2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39D2ECu);
        ctx->pc = 0x39D2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D2E4u;
            // 0x39d2e8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39D2ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39D2ECu; }
            if (ctx->pc != 0x39D2ECu) { return; }
        }
        }
    }
    ctx->pc = 0x39D2ECu;
label_39d2ec:
    // 0x39d2ec: 0xc0e393c  jal         func_38E4F0
label_39d2f0:
    if (ctx->pc == 0x39D2F0u) {
        ctx->pc = 0x39D2F0u;
            // 0x39d2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D2F4u;
        goto label_39d2f4;
    }
    ctx->pc = 0x39D2ECu;
    SET_GPR_U32(ctx, 31, 0x39D2F4u);
    ctx->pc = 0x39D2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D2ECu;
            // 0x39d2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D2F4u; }
        if (ctx->pc != 0x39D2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D2F4u; }
        if (ctx->pc != 0x39D2F4u) { return; }
    }
    ctx->pc = 0x39D2F4u;
label_39d2f4:
    // 0x39d2f4: 0x3c0243d1  lui         $v0, 0x43D1
    ctx->pc = 0x39d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17361 << 16));
label_39d2f8:
    // 0x39d2f8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x39d2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39d2fc:
    // 0x39d2fc: 0x34457084  ori         $a1, $v0, 0x7084
    ctx->pc = 0x39d2fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28804);
label_39d300:
    // 0x39d300: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x39d300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_39d304:
    // 0x39d304: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x39d304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_39d308:
    // 0x39d308: 0xac850154  sw          $a1, 0x154($a0)
    ctx->pc = 0x39d308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 5));
label_39d30c:
    // 0x39d30c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x39d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39d310:
    // 0x39d310: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x39d310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_39d314:
    // 0x39d314: 0xc122c94  jal         func_48B250
label_39d318:
    if (ctx->pc == 0x39D318u) {
        ctx->pc = 0x39D318u;
            // 0x39d318: 0x8e040154  lw          $a0, 0x154($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
        ctx->pc = 0x39D31Cu;
        goto label_39d31c;
    }
    ctx->pc = 0x39D314u;
    SET_GPR_U32(ctx, 31, 0x39D31Cu);
    ctx->pc = 0x39D318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D314u;
            // 0x39d318: 0x8e040154  lw          $a0, 0x154($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D31Cu; }
        if (ctx->pc != 0x39D31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D31Cu; }
        if (ctx->pc != 0x39D31Cu) { return; }
    }
    ctx->pc = 0x39D31Cu;
label_39d31c:
    // 0x39d31c: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x39d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_39d320:
    // 0x39d320: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
label_39d324:
    if (ctx->pc == 0x39D324u) {
        ctx->pc = 0x39D324u;
            // 0x39d324: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x39D328u;
        goto label_39d328;
    }
    ctx->pc = 0x39D320u;
    {
        const bool branch_taken_0x39d320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d320) {
            ctx->pc = 0x39D324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39D320u;
            // 0x39d324: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39D354u;
            goto label_39d354;
        }
    }
    ctx->pc = 0x39D328u;
label_39d328:
    // 0x39d328: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x39d328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_39d32c:
    // 0x39d32c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39d32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39d330:
    // 0x39d330: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x39d330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_39d334:
    // 0x39d334: 0x320f809  jalr        $t9
label_39d338:
    if (ctx->pc == 0x39D338u) {
        ctx->pc = 0x39D33Cu;
        goto label_39d33c;
    }
    ctx->pc = 0x39D334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39D33Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x39D33Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39D33Cu; }
            if (ctx->pc != 0x39D33Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39D33Cu;
label_39d33c:
    // 0x39d33c: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x39d33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_39d340:
    // 0x39d340: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39d340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39d344:
    // 0x39d344: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x39d344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_39d348:
    // 0x39d348: 0x320f809  jalr        $t9
label_39d34c:
    if (ctx->pc == 0x39D34Cu) {
        ctx->pc = 0x39D350u;
        goto label_39d350;
    }
    ctx->pc = 0x39D348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39D350u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x39D350u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39D350u; }
            if (ctx->pc != 0x39D350u) { return; }
        }
        }
    }
    ctx->pc = 0x39D350u;
label_39d350:
    // 0x39d350: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39d350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39d354:
    // 0x39d354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39d354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39d358:
    // 0x39d358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39d358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39d35c:
    // 0x39d35c: 0x3e00008  jr          $ra
label_39d360:
    if (ctx->pc == 0x39D360u) {
        ctx->pc = 0x39D360u;
            // 0x39d360: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x39D364u;
        goto label_39d364;
    }
    ctx->pc = 0x39D35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D35Cu;
            // 0x39d360: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39D364u;
label_39d364:
    // 0x39d364: 0x0  nop
    ctx->pc = 0x39d364u;
    // NOP
label_39d368:
    // 0x39d368: 0x0  nop
    ctx->pc = 0x39d368u;
    // NOP
label_39d36c:
    // 0x39d36c: 0x0  nop
    ctx->pc = 0x39d36cu;
    // NOP
}
