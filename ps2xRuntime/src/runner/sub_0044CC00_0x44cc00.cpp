#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044CC00
// Address: 0x44cc00 - 0x44d9c0
void sub_0044CC00_0x44cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044CC00_0x44cc00");
#endif

    switch (ctx->pc) {
        case 0x44cc00u: goto label_44cc00;
        case 0x44cc04u: goto label_44cc04;
        case 0x44cc08u: goto label_44cc08;
        case 0x44cc0cu: goto label_44cc0c;
        case 0x44cc10u: goto label_44cc10;
        case 0x44cc14u: goto label_44cc14;
        case 0x44cc18u: goto label_44cc18;
        case 0x44cc1cu: goto label_44cc1c;
        case 0x44cc20u: goto label_44cc20;
        case 0x44cc24u: goto label_44cc24;
        case 0x44cc28u: goto label_44cc28;
        case 0x44cc2cu: goto label_44cc2c;
        case 0x44cc30u: goto label_44cc30;
        case 0x44cc34u: goto label_44cc34;
        case 0x44cc38u: goto label_44cc38;
        case 0x44cc3cu: goto label_44cc3c;
        case 0x44cc40u: goto label_44cc40;
        case 0x44cc44u: goto label_44cc44;
        case 0x44cc48u: goto label_44cc48;
        case 0x44cc4cu: goto label_44cc4c;
        case 0x44cc50u: goto label_44cc50;
        case 0x44cc54u: goto label_44cc54;
        case 0x44cc58u: goto label_44cc58;
        case 0x44cc5cu: goto label_44cc5c;
        case 0x44cc60u: goto label_44cc60;
        case 0x44cc64u: goto label_44cc64;
        case 0x44cc68u: goto label_44cc68;
        case 0x44cc6cu: goto label_44cc6c;
        case 0x44cc70u: goto label_44cc70;
        case 0x44cc74u: goto label_44cc74;
        case 0x44cc78u: goto label_44cc78;
        case 0x44cc7cu: goto label_44cc7c;
        case 0x44cc80u: goto label_44cc80;
        case 0x44cc84u: goto label_44cc84;
        case 0x44cc88u: goto label_44cc88;
        case 0x44cc8cu: goto label_44cc8c;
        case 0x44cc90u: goto label_44cc90;
        case 0x44cc94u: goto label_44cc94;
        case 0x44cc98u: goto label_44cc98;
        case 0x44cc9cu: goto label_44cc9c;
        case 0x44cca0u: goto label_44cca0;
        case 0x44cca4u: goto label_44cca4;
        case 0x44cca8u: goto label_44cca8;
        case 0x44ccacu: goto label_44ccac;
        case 0x44ccb0u: goto label_44ccb0;
        case 0x44ccb4u: goto label_44ccb4;
        case 0x44ccb8u: goto label_44ccb8;
        case 0x44ccbcu: goto label_44ccbc;
        case 0x44ccc0u: goto label_44ccc0;
        case 0x44ccc4u: goto label_44ccc4;
        case 0x44ccc8u: goto label_44ccc8;
        case 0x44ccccu: goto label_44cccc;
        case 0x44ccd0u: goto label_44ccd0;
        case 0x44ccd4u: goto label_44ccd4;
        case 0x44ccd8u: goto label_44ccd8;
        case 0x44ccdcu: goto label_44ccdc;
        case 0x44cce0u: goto label_44cce0;
        case 0x44cce4u: goto label_44cce4;
        case 0x44cce8u: goto label_44cce8;
        case 0x44ccecu: goto label_44ccec;
        case 0x44ccf0u: goto label_44ccf0;
        case 0x44ccf4u: goto label_44ccf4;
        case 0x44ccf8u: goto label_44ccf8;
        case 0x44ccfcu: goto label_44ccfc;
        case 0x44cd00u: goto label_44cd00;
        case 0x44cd04u: goto label_44cd04;
        case 0x44cd08u: goto label_44cd08;
        case 0x44cd0cu: goto label_44cd0c;
        case 0x44cd10u: goto label_44cd10;
        case 0x44cd14u: goto label_44cd14;
        case 0x44cd18u: goto label_44cd18;
        case 0x44cd1cu: goto label_44cd1c;
        case 0x44cd20u: goto label_44cd20;
        case 0x44cd24u: goto label_44cd24;
        case 0x44cd28u: goto label_44cd28;
        case 0x44cd2cu: goto label_44cd2c;
        case 0x44cd30u: goto label_44cd30;
        case 0x44cd34u: goto label_44cd34;
        case 0x44cd38u: goto label_44cd38;
        case 0x44cd3cu: goto label_44cd3c;
        case 0x44cd40u: goto label_44cd40;
        case 0x44cd44u: goto label_44cd44;
        case 0x44cd48u: goto label_44cd48;
        case 0x44cd4cu: goto label_44cd4c;
        case 0x44cd50u: goto label_44cd50;
        case 0x44cd54u: goto label_44cd54;
        case 0x44cd58u: goto label_44cd58;
        case 0x44cd5cu: goto label_44cd5c;
        case 0x44cd60u: goto label_44cd60;
        case 0x44cd64u: goto label_44cd64;
        case 0x44cd68u: goto label_44cd68;
        case 0x44cd6cu: goto label_44cd6c;
        case 0x44cd70u: goto label_44cd70;
        case 0x44cd74u: goto label_44cd74;
        case 0x44cd78u: goto label_44cd78;
        case 0x44cd7cu: goto label_44cd7c;
        case 0x44cd80u: goto label_44cd80;
        case 0x44cd84u: goto label_44cd84;
        case 0x44cd88u: goto label_44cd88;
        case 0x44cd8cu: goto label_44cd8c;
        case 0x44cd90u: goto label_44cd90;
        case 0x44cd94u: goto label_44cd94;
        case 0x44cd98u: goto label_44cd98;
        case 0x44cd9cu: goto label_44cd9c;
        case 0x44cda0u: goto label_44cda0;
        case 0x44cda4u: goto label_44cda4;
        case 0x44cda8u: goto label_44cda8;
        case 0x44cdacu: goto label_44cdac;
        case 0x44cdb0u: goto label_44cdb0;
        case 0x44cdb4u: goto label_44cdb4;
        case 0x44cdb8u: goto label_44cdb8;
        case 0x44cdbcu: goto label_44cdbc;
        case 0x44cdc0u: goto label_44cdc0;
        case 0x44cdc4u: goto label_44cdc4;
        case 0x44cdc8u: goto label_44cdc8;
        case 0x44cdccu: goto label_44cdcc;
        case 0x44cdd0u: goto label_44cdd0;
        case 0x44cdd4u: goto label_44cdd4;
        case 0x44cdd8u: goto label_44cdd8;
        case 0x44cddcu: goto label_44cddc;
        case 0x44cde0u: goto label_44cde0;
        case 0x44cde4u: goto label_44cde4;
        case 0x44cde8u: goto label_44cde8;
        case 0x44cdecu: goto label_44cdec;
        case 0x44cdf0u: goto label_44cdf0;
        case 0x44cdf4u: goto label_44cdf4;
        case 0x44cdf8u: goto label_44cdf8;
        case 0x44cdfcu: goto label_44cdfc;
        case 0x44ce00u: goto label_44ce00;
        case 0x44ce04u: goto label_44ce04;
        case 0x44ce08u: goto label_44ce08;
        case 0x44ce0cu: goto label_44ce0c;
        case 0x44ce10u: goto label_44ce10;
        case 0x44ce14u: goto label_44ce14;
        case 0x44ce18u: goto label_44ce18;
        case 0x44ce1cu: goto label_44ce1c;
        case 0x44ce20u: goto label_44ce20;
        case 0x44ce24u: goto label_44ce24;
        case 0x44ce28u: goto label_44ce28;
        case 0x44ce2cu: goto label_44ce2c;
        case 0x44ce30u: goto label_44ce30;
        case 0x44ce34u: goto label_44ce34;
        case 0x44ce38u: goto label_44ce38;
        case 0x44ce3cu: goto label_44ce3c;
        case 0x44ce40u: goto label_44ce40;
        case 0x44ce44u: goto label_44ce44;
        case 0x44ce48u: goto label_44ce48;
        case 0x44ce4cu: goto label_44ce4c;
        case 0x44ce50u: goto label_44ce50;
        case 0x44ce54u: goto label_44ce54;
        case 0x44ce58u: goto label_44ce58;
        case 0x44ce5cu: goto label_44ce5c;
        case 0x44ce60u: goto label_44ce60;
        case 0x44ce64u: goto label_44ce64;
        case 0x44ce68u: goto label_44ce68;
        case 0x44ce6cu: goto label_44ce6c;
        case 0x44ce70u: goto label_44ce70;
        case 0x44ce74u: goto label_44ce74;
        case 0x44ce78u: goto label_44ce78;
        case 0x44ce7cu: goto label_44ce7c;
        case 0x44ce80u: goto label_44ce80;
        case 0x44ce84u: goto label_44ce84;
        case 0x44ce88u: goto label_44ce88;
        case 0x44ce8cu: goto label_44ce8c;
        case 0x44ce90u: goto label_44ce90;
        case 0x44ce94u: goto label_44ce94;
        case 0x44ce98u: goto label_44ce98;
        case 0x44ce9cu: goto label_44ce9c;
        case 0x44cea0u: goto label_44cea0;
        case 0x44cea4u: goto label_44cea4;
        case 0x44cea8u: goto label_44cea8;
        case 0x44ceacu: goto label_44ceac;
        case 0x44ceb0u: goto label_44ceb0;
        case 0x44ceb4u: goto label_44ceb4;
        case 0x44ceb8u: goto label_44ceb8;
        case 0x44cebcu: goto label_44cebc;
        case 0x44cec0u: goto label_44cec0;
        case 0x44cec4u: goto label_44cec4;
        case 0x44cec8u: goto label_44cec8;
        case 0x44ceccu: goto label_44cecc;
        case 0x44ced0u: goto label_44ced0;
        case 0x44ced4u: goto label_44ced4;
        case 0x44ced8u: goto label_44ced8;
        case 0x44cedcu: goto label_44cedc;
        case 0x44cee0u: goto label_44cee0;
        case 0x44cee4u: goto label_44cee4;
        case 0x44cee8u: goto label_44cee8;
        case 0x44ceecu: goto label_44ceec;
        case 0x44cef0u: goto label_44cef0;
        case 0x44cef4u: goto label_44cef4;
        case 0x44cef8u: goto label_44cef8;
        case 0x44cefcu: goto label_44cefc;
        case 0x44cf00u: goto label_44cf00;
        case 0x44cf04u: goto label_44cf04;
        case 0x44cf08u: goto label_44cf08;
        case 0x44cf0cu: goto label_44cf0c;
        case 0x44cf10u: goto label_44cf10;
        case 0x44cf14u: goto label_44cf14;
        case 0x44cf18u: goto label_44cf18;
        case 0x44cf1cu: goto label_44cf1c;
        case 0x44cf20u: goto label_44cf20;
        case 0x44cf24u: goto label_44cf24;
        case 0x44cf28u: goto label_44cf28;
        case 0x44cf2cu: goto label_44cf2c;
        case 0x44cf30u: goto label_44cf30;
        case 0x44cf34u: goto label_44cf34;
        case 0x44cf38u: goto label_44cf38;
        case 0x44cf3cu: goto label_44cf3c;
        case 0x44cf40u: goto label_44cf40;
        case 0x44cf44u: goto label_44cf44;
        case 0x44cf48u: goto label_44cf48;
        case 0x44cf4cu: goto label_44cf4c;
        case 0x44cf50u: goto label_44cf50;
        case 0x44cf54u: goto label_44cf54;
        case 0x44cf58u: goto label_44cf58;
        case 0x44cf5cu: goto label_44cf5c;
        case 0x44cf60u: goto label_44cf60;
        case 0x44cf64u: goto label_44cf64;
        case 0x44cf68u: goto label_44cf68;
        case 0x44cf6cu: goto label_44cf6c;
        case 0x44cf70u: goto label_44cf70;
        case 0x44cf74u: goto label_44cf74;
        case 0x44cf78u: goto label_44cf78;
        case 0x44cf7cu: goto label_44cf7c;
        case 0x44cf80u: goto label_44cf80;
        case 0x44cf84u: goto label_44cf84;
        case 0x44cf88u: goto label_44cf88;
        case 0x44cf8cu: goto label_44cf8c;
        case 0x44cf90u: goto label_44cf90;
        case 0x44cf94u: goto label_44cf94;
        case 0x44cf98u: goto label_44cf98;
        case 0x44cf9cu: goto label_44cf9c;
        case 0x44cfa0u: goto label_44cfa0;
        case 0x44cfa4u: goto label_44cfa4;
        case 0x44cfa8u: goto label_44cfa8;
        case 0x44cfacu: goto label_44cfac;
        case 0x44cfb0u: goto label_44cfb0;
        case 0x44cfb4u: goto label_44cfb4;
        case 0x44cfb8u: goto label_44cfb8;
        case 0x44cfbcu: goto label_44cfbc;
        case 0x44cfc0u: goto label_44cfc0;
        case 0x44cfc4u: goto label_44cfc4;
        case 0x44cfc8u: goto label_44cfc8;
        case 0x44cfccu: goto label_44cfcc;
        case 0x44cfd0u: goto label_44cfd0;
        case 0x44cfd4u: goto label_44cfd4;
        case 0x44cfd8u: goto label_44cfd8;
        case 0x44cfdcu: goto label_44cfdc;
        case 0x44cfe0u: goto label_44cfe0;
        case 0x44cfe4u: goto label_44cfe4;
        case 0x44cfe8u: goto label_44cfe8;
        case 0x44cfecu: goto label_44cfec;
        case 0x44cff0u: goto label_44cff0;
        case 0x44cff4u: goto label_44cff4;
        case 0x44cff8u: goto label_44cff8;
        case 0x44cffcu: goto label_44cffc;
        case 0x44d000u: goto label_44d000;
        case 0x44d004u: goto label_44d004;
        case 0x44d008u: goto label_44d008;
        case 0x44d00cu: goto label_44d00c;
        case 0x44d010u: goto label_44d010;
        case 0x44d014u: goto label_44d014;
        case 0x44d018u: goto label_44d018;
        case 0x44d01cu: goto label_44d01c;
        case 0x44d020u: goto label_44d020;
        case 0x44d024u: goto label_44d024;
        case 0x44d028u: goto label_44d028;
        case 0x44d02cu: goto label_44d02c;
        case 0x44d030u: goto label_44d030;
        case 0x44d034u: goto label_44d034;
        case 0x44d038u: goto label_44d038;
        case 0x44d03cu: goto label_44d03c;
        case 0x44d040u: goto label_44d040;
        case 0x44d044u: goto label_44d044;
        case 0x44d048u: goto label_44d048;
        case 0x44d04cu: goto label_44d04c;
        case 0x44d050u: goto label_44d050;
        case 0x44d054u: goto label_44d054;
        case 0x44d058u: goto label_44d058;
        case 0x44d05cu: goto label_44d05c;
        case 0x44d060u: goto label_44d060;
        case 0x44d064u: goto label_44d064;
        case 0x44d068u: goto label_44d068;
        case 0x44d06cu: goto label_44d06c;
        case 0x44d070u: goto label_44d070;
        case 0x44d074u: goto label_44d074;
        case 0x44d078u: goto label_44d078;
        case 0x44d07cu: goto label_44d07c;
        case 0x44d080u: goto label_44d080;
        case 0x44d084u: goto label_44d084;
        case 0x44d088u: goto label_44d088;
        case 0x44d08cu: goto label_44d08c;
        case 0x44d090u: goto label_44d090;
        case 0x44d094u: goto label_44d094;
        case 0x44d098u: goto label_44d098;
        case 0x44d09cu: goto label_44d09c;
        case 0x44d0a0u: goto label_44d0a0;
        case 0x44d0a4u: goto label_44d0a4;
        case 0x44d0a8u: goto label_44d0a8;
        case 0x44d0acu: goto label_44d0ac;
        case 0x44d0b0u: goto label_44d0b0;
        case 0x44d0b4u: goto label_44d0b4;
        case 0x44d0b8u: goto label_44d0b8;
        case 0x44d0bcu: goto label_44d0bc;
        case 0x44d0c0u: goto label_44d0c0;
        case 0x44d0c4u: goto label_44d0c4;
        case 0x44d0c8u: goto label_44d0c8;
        case 0x44d0ccu: goto label_44d0cc;
        case 0x44d0d0u: goto label_44d0d0;
        case 0x44d0d4u: goto label_44d0d4;
        case 0x44d0d8u: goto label_44d0d8;
        case 0x44d0dcu: goto label_44d0dc;
        case 0x44d0e0u: goto label_44d0e0;
        case 0x44d0e4u: goto label_44d0e4;
        case 0x44d0e8u: goto label_44d0e8;
        case 0x44d0ecu: goto label_44d0ec;
        case 0x44d0f0u: goto label_44d0f0;
        case 0x44d0f4u: goto label_44d0f4;
        case 0x44d0f8u: goto label_44d0f8;
        case 0x44d0fcu: goto label_44d0fc;
        case 0x44d100u: goto label_44d100;
        case 0x44d104u: goto label_44d104;
        case 0x44d108u: goto label_44d108;
        case 0x44d10cu: goto label_44d10c;
        case 0x44d110u: goto label_44d110;
        case 0x44d114u: goto label_44d114;
        case 0x44d118u: goto label_44d118;
        case 0x44d11cu: goto label_44d11c;
        case 0x44d120u: goto label_44d120;
        case 0x44d124u: goto label_44d124;
        case 0x44d128u: goto label_44d128;
        case 0x44d12cu: goto label_44d12c;
        case 0x44d130u: goto label_44d130;
        case 0x44d134u: goto label_44d134;
        case 0x44d138u: goto label_44d138;
        case 0x44d13cu: goto label_44d13c;
        case 0x44d140u: goto label_44d140;
        case 0x44d144u: goto label_44d144;
        case 0x44d148u: goto label_44d148;
        case 0x44d14cu: goto label_44d14c;
        case 0x44d150u: goto label_44d150;
        case 0x44d154u: goto label_44d154;
        case 0x44d158u: goto label_44d158;
        case 0x44d15cu: goto label_44d15c;
        case 0x44d160u: goto label_44d160;
        case 0x44d164u: goto label_44d164;
        case 0x44d168u: goto label_44d168;
        case 0x44d16cu: goto label_44d16c;
        case 0x44d170u: goto label_44d170;
        case 0x44d174u: goto label_44d174;
        case 0x44d178u: goto label_44d178;
        case 0x44d17cu: goto label_44d17c;
        case 0x44d180u: goto label_44d180;
        case 0x44d184u: goto label_44d184;
        case 0x44d188u: goto label_44d188;
        case 0x44d18cu: goto label_44d18c;
        case 0x44d190u: goto label_44d190;
        case 0x44d194u: goto label_44d194;
        case 0x44d198u: goto label_44d198;
        case 0x44d19cu: goto label_44d19c;
        case 0x44d1a0u: goto label_44d1a0;
        case 0x44d1a4u: goto label_44d1a4;
        case 0x44d1a8u: goto label_44d1a8;
        case 0x44d1acu: goto label_44d1ac;
        case 0x44d1b0u: goto label_44d1b0;
        case 0x44d1b4u: goto label_44d1b4;
        case 0x44d1b8u: goto label_44d1b8;
        case 0x44d1bcu: goto label_44d1bc;
        case 0x44d1c0u: goto label_44d1c0;
        case 0x44d1c4u: goto label_44d1c4;
        case 0x44d1c8u: goto label_44d1c8;
        case 0x44d1ccu: goto label_44d1cc;
        case 0x44d1d0u: goto label_44d1d0;
        case 0x44d1d4u: goto label_44d1d4;
        case 0x44d1d8u: goto label_44d1d8;
        case 0x44d1dcu: goto label_44d1dc;
        case 0x44d1e0u: goto label_44d1e0;
        case 0x44d1e4u: goto label_44d1e4;
        case 0x44d1e8u: goto label_44d1e8;
        case 0x44d1ecu: goto label_44d1ec;
        case 0x44d1f0u: goto label_44d1f0;
        case 0x44d1f4u: goto label_44d1f4;
        case 0x44d1f8u: goto label_44d1f8;
        case 0x44d1fcu: goto label_44d1fc;
        case 0x44d200u: goto label_44d200;
        case 0x44d204u: goto label_44d204;
        case 0x44d208u: goto label_44d208;
        case 0x44d20cu: goto label_44d20c;
        case 0x44d210u: goto label_44d210;
        case 0x44d214u: goto label_44d214;
        case 0x44d218u: goto label_44d218;
        case 0x44d21cu: goto label_44d21c;
        case 0x44d220u: goto label_44d220;
        case 0x44d224u: goto label_44d224;
        case 0x44d228u: goto label_44d228;
        case 0x44d22cu: goto label_44d22c;
        case 0x44d230u: goto label_44d230;
        case 0x44d234u: goto label_44d234;
        case 0x44d238u: goto label_44d238;
        case 0x44d23cu: goto label_44d23c;
        case 0x44d240u: goto label_44d240;
        case 0x44d244u: goto label_44d244;
        case 0x44d248u: goto label_44d248;
        case 0x44d24cu: goto label_44d24c;
        case 0x44d250u: goto label_44d250;
        case 0x44d254u: goto label_44d254;
        case 0x44d258u: goto label_44d258;
        case 0x44d25cu: goto label_44d25c;
        case 0x44d260u: goto label_44d260;
        case 0x44d264u: goto label_44d264;
        case 0x44d268u: goto label_44d268;
        case 0x44d26cu: goto label_44d26c;
        case 0x44d270u: goto label_44d270;
        case 0x44d274u: goto label_44d274;
        case 0x44d278u: goto label_44d278;
        case 0x44d27cu: goto label_44d27c;
        case 0x44d280u: goto label_44d280;
        case 0x44d284u: goto label_44d284;
        case 0x44d288u: goto label_44d288;
        case 0x44d28cu: goto label_44d28c;
        case 0x44d290u: goto label_44d290;
        case 0x44d294u: goto label_44d294;
        case 0x44d298u: goto label_44d298;
        case 0x44d29cu: goto label_44d29c;
        case 0x44d2a0u: goto label_44d2a0;
        case 0x44d2a4u: goto label_44d2a4;
        case 0x44d2a8u: goto label_44d2a8;
        case 0x44d2acu: goto label_44d2ac;
        case 0x44d2b0u: goto label_44d2b0;
        case 0x44d2b4u: goto label_44d2b4;
        case 0x44d2b8u: goto label_44d2b8;
        case 0x44d2bcu: goto label_44d2bc;
        case 0x44d2c0u: goto label_44d2c0;
        case 0x44d2c4u: goto label_44d2c4;
        case 0x44d2c8u: goto label_44d2c8;
        case 0x44d2ccu: goto label_44d2cc;
        case 0x44d2d0u: goto label_44d2d0;
        case 0x44d2d4u: goto label_44d2d4;
        case 0x44d2d8u: goto label_44d2d8;
        case 0x44d2dcu: goto label_44d2dc;
        case 0x44d2e0u: goto label_44d2e0;
        case 0x44d2e4u: goto label_44d2e4;
        case 0x44d2e8u: goto label_44d2e8;
        case 0x44d2ecu: goto label_44d2ec;
        case 0x44d2f0u: goto label_44d2f0;
        case 0x44d2f4u: goto label_44d2f4;
        case 0x44d2f8u: goto label_44d2f8;
        case 0x44d2fcu: goto label_44d2fc;
        case 0x44d300u: goto label_44d300;
        case 0x44d304u: goto label_44d304;
        case 0x44d308u: goto label_44d308;
        case 0x44d30cu: goto label_44d30c;
        case 0x44d310u: goto label_44d310;
        case 0x44d314u: goto label_44d314;
        case 0x44d318u: goto label_44d318;
        case 0x44d31cu: goto label_44d31c;
        case 0x44d320u: goto label_44d320;
        case 0x44d324u: goto label_44d324;
        case 0x44d328u: goto label_44d328;
        case 0x44d32cu: goto label_44d32c;
        case 0x44d330u: goto label_44d330;
        case 0x44d334u: goto label_44d334;
        case 0x44d338u: goto label_44d338;
        case 0x44d33cu: goto label_44d33c;
        case 0x44d340u: goto label_44d340;
        case 0x44d344u: goto label_44d344;
        case 0x44d348u: goto label_44d348;
        case 0x44d34cu: goto label_44d34c;
        case 0x44d350u: goto label_44d350;
        case 0x44d354u: goto label_44d354;
        case 0x44d358u: goto label_44d358;
        case 0x44d35cu: goto label_44d35c;
        case 0x44d360u: goto label_44d360;
        case 0x44d364u: goto label_44d364;
        case 0x44d368u: goto label_44d368;
        case 0x44d36cu: goto label_44d36c;
        case 0x44d370u: goto label_44d370;
        case 0x44d374u: goto label_44d374;
        case 0x44d378u: goto label_44d378;
        case 0x44d37cu: goto label_44d37c;
        case 0x44d380u: goto label_44d380;
        case 0x44d384u: goto label_44d384;
        case 0x44d388u: goto label_44d388;
        case 0x44d38cu: goto label_44d38c;
        case 0x44d390u: goto label_44d390;
        case 0x44d394u: goto label_44d394;
        case 0x44d398u: goto label_44d398;
        case 0x44d39cu: goto label_44d39c;
        case 0x44d3a0u: goto label_44d3a0;
        case 0x44d3a4u: goto label_44d3a4;
        case 0x44d3a8u: goto label_44d3a8;
        case 0x44d3acu: goto label_44d3ac;
        case 0x44d3b0u: goto label_44d3b0;
        case 0x44d3b4u: goto label_44d3b4;
        case 0x44d3b8u: goto label_44d3b8;
        case 0x44d3bcu: goto label_44d3bc;
        case 0x44d3c0u: goto label_44d3c0;
        case 0x44d3c4u: goto label_44d3c4;
        case 0x44d3c8u: goto label_44d3c8;
        case 0x44d3ccu: goto label_44d3cc;
        case 0x44d3d0u: goto label_44d3d0;
        case 0x44d3d4u: goto label_44d3d4;
        case 0x44d3d8u: goto label_44d3d8;
        case 0x44d3dcu: goto label_44d3dc;
        case 0x44d3e0u: goto label_44d3e0;
        case 0x44d3e4u: goto label_44d3e4;
        case 0x44d3e8u: goto label_44d3e8;
        case 0x44d3ecu: goto label_44d3ec;
        case 0x44d3f0u: goto label_44d3f0;
        case 0x44d3f4u: goto label_44d3f4;
        case 0x44d3f8u: goto label_44d3f8;
        case 0x44d3fcu: goto label_44d3fc;
        case 0x44d400u: goto label_44d400;
        case 0x44d404u: goto label_44d404;
        case 0x44d408u: goto label_44d408;
        case 0x44d40cu: goto label_44d40c;
        case 0x44d410u: goto label_44d410;
        case 0x44d414u: goto label_44d414;
        case 0x44d418u: goto label_44d418;
        case 0x44d41cu: goto label_44d41c;
        case 0x44d420u: goto label_44d420;
        case 0x44d424u: goto label_44d424;
        case 0x44d428u: goto label_44d428;
        case 0x44d42cu: goto label_44d42c;
        case 0x44d430u: goto label_44d430;
        case 0x44d434u: goto label_44d434;
        case 0x44d438u: goto label_44d438;
        case 0x44d43cu: goto label_44d43c;
        case 0x44d440u: goto label_44d440;
        case 0x44d444u: goto label_44d444;
        case 0x44d448u: goto label_44d448;
        case 0x44d44cu: goto label_44d44c;
        case 0x44d450u: goto label_44d450;
        case 0x44d454u: goto label_44d454;
        case 0x44d458u: goto label_44d458;
        case 0x44d45cu: goto label_44d45c;
        case 0x44d460u: goto label_44d460;
        case 0x44d464u: goto label_44d464;
        case 0x44d468u: goto label_44d468;
        case 0x44d46cu: goto label_44d46c;
        case 0x44d470u: goto label_44d470;
        case 0x44d474u: goto label_44d474;
        case 0x44d478u: goto label_44d478;
        case 0x44d47cu: goto label_44d47c;
        case 0x44d480u: goto label_44d480;
        case 0x44d484u: goto label_44d484;
        case 0x44d488u: goto label_44d488;
        case 0x44d48cu: goto label_44d48c;
        case 0x44d490u: goto label_44d490;
        case 0x44d494u: goto label_44d494;
        case 0x44d498u: goto label_44d498;
        case 0x44d49cu: goto label_44d49c;
        case 0x44d4a0u: goto label_44d4a0;
        case 0x44d4a4u: goto label_44d4a4;
        case 0x44d4a8u: goto label_44d4a8;
        case 0x44d4acu: goto label_44d4ac;
        case 0x44d4b0u: goto label_44d4b0;
        case 0x44d4b4u: goto label_44d4b4;
        case 0x44d4b8u: goto label_44d4b8;
        case 0x44d4bcu: goto label_44d4bc;
        case 0x44d4c0u: goto label_44d4c0;
        case 0x44d4c4u: goto label_44d4c4;
        case 0x44d4c8u: goto label_44d4c8;
        case 0x44d4ccu: goto label_44d4cc;
        case 0x44d4d0u: goto label_44d4d0;
        case 0x44d4d4u: goto label_44d4d4;
        case 0x44d4d8u: goto label_44d4d8;
        case 0x44d4dcu: goto label_44d4dc;
        case 0x44d4e0u: goto label_44d4e0;
        case 0x44d4e4u: goto label_44d4e4;
        case 0x44d4e8u: goto label_44d4e8;
        case 0x44d4ecu: goto label_44d4ec;
        case 0x44d4f0u: goto label_44d4f0;
        case 0x44d4f4u: goto label_44d4f4;
        case 0x44d4f8u: goto label_44d4f8;
        case 0x44d4fcu: goto label_44d4fc;
        case 0x44d500u: goto label_44d500;
        case 0x44d504u: goto label_44d504;
        case 0x44d508u: goto label_44d508;
        case 0x44d50cu: goto label_44d50c;
        case 0x44d510u: goto label_44d510;
        case 0x44d514u: goto label_44d514;
        case 0x44d518u: goto label_44d518;
        case 0x44d51cu: goto label_44d51c;
        case 0x44d520u: goto label_44d520;
        case 0x44d524u: goto label_44d524;
        case 0x44d528u: goto label_44d528;
        case 0x44d52cu: goto label_44d52c;
        case 0x44d530u: goto label_44d530;
        case 0x44d534u: goto label_44d534;
        case 0x44d538u: goto label_44d538;
        case 0x44d53cu: goto label_44d53c;
        case 0x44d540u: goto label_44d540;
        case 0x44d544u: goto label_44d544;
        case 0x44d548u: goto label_44d548;
        case 0x44d54cu: goto label_44d54c;
        case 0x44d550u: goto label_44d550;
        case 0x44d554u: goto label_44d554;
        case 0x44d558u: goto label_44d558;
        case 0x44d55cu: goto label_44d55c;
        case 0x44d560u: goto label_44d560;
        case 0x44d564u: goto label_44d564;
        case 0x44d568u: goto label_44d568;
        case 0x44d56cu: goto label_44d56c;
        case 0x44d570u: goto label_44d570;
        case 0x44d574u: goto label_44d574;
        case 0x44d578u: goto label_44d578;
        case 0x44d57cu: goto label_44d57c;
        case 0x44d580u: goto label_44d580;
        case 0x44d584u: goto label_44d584;
        case 0x44d588u: goto label_44d588;
        case 0x44d58cu: goto label_44d58c;
        case 0x44d590u: goto label_44d590;
        case 0x44d594u: goto label_44d594;
        case 0x44d598u: goto label_44d598;
        case 0x44d59cu: goto label_44d59c;
        case 0x44d5a0u: goto label_44d5a0;
        case 0x44d5a4u: goto label_44d5a4;
        case 0x44d5a8u: goto label_44d5a8;
        case 0x44d5acu: goto label_44d5ac;
        case 0x44d5b0u: goto label_44d5b0;
        case 0x44d5b4u: goto label_44d5b4;
        case 0x44d5b8u: goto label_44d5b8;
        case 0x44d5bcu: goto label_44d5bc;
        case 0x44d5c0u: goto label_44d5c0;
        case 0x44d5c4u: goto label_44d5c4;
        case 0x44d5c8u: goto label_44d5c8;
        case 0x44d5ccu: goto label_44d5cc;
        case 0x44d5d0u: goto label_44d5d0;
        case 0x44d5d4u: goto label_44d5d4;
        case 0x44d5d8u: goto label_44d5d8;
        case 0x44d5dcu: goto label_44d5dc;
        case 0x44d5e0u: goto label_44d5e0;
        case 0x44d5e4u: goto label_44d5e4;
        case 0x44d5e8u: goto label_44d5e8;
        case 0x44d5ecu: goto label_44d5ec;
        case 0x44d5f0u: goto label_44d5f0;
        case 0x44d5f4u: goto label_44d5f4;
        case 0x44d5f8u: goto label_44d5f8;
        case 0x44d5fcu: goto label_44d5fc;
        case 0x44d600u: goto label_44d600;
        case 0x44d604u: goto label_44d604;
        case 0x44d608u: goto label_44d608;
        case 0x44d60cu: goto label_44d60c;
        case 0x44d610u: goto label_44d610;
        case 0x44d614u: goto label_44d614;
        case 0x44d618u: goto label_44d618;
        case 0x44d61cu: goto label_44d61c;
        case 0x44d620u: goto label_44d620;
        case 0x44d624u: goto label_44d624;
        case 0x44d628u: goto label_44d628;
        case 0x44d62cu: goto label_44d62c;
        case 0x44d630u: goto label_44d630;
        case 0x44d634u: goto label_44d634;
        case 0x44d638u: goto label_44d638;
        case 0x44d63cu: goto label_44d63c;
        case 0x44d640u: goto label_44d640;
        case 0x44d644u: goto label_44d644;
        case 0x44d648u: goto label_44d648;
        case 0x44d64cu: goto label_44d64c;
        case 0x44d650u: goto label_44d650;
        case 0x44d654u: goto label_44d654;
        case 0x44d658u: goto label_44d658;
        case 0x44d65cu: goto label_44d65c;
        case 0x44d660u: goto label_44d660;
        case 0x44d664u: goto label_44d664;
        case 0x44d668u: goto label_44d668;
        case 0x44d66cu: goto label_44d66c;
        case 0x44d670u: goto label_44d670;
        case 0x44d674u: goto label_44d674;
        case 0x44d678u: goto label_44d678;
        case 0x44d67cu: goto label_44d67c;
        case 0x44d680u: goto label_44d680;
        case 0x44d684u: goto label_44d684;
        case 0x44d688u: goto label_44d688;
        case 0x44d68cu: goto label_44d68c;
        case 0x44d690u: goto label_44d690;
        case 0x44d694u: goto label_44d694;
        case 0x44d698u: goto label_44d698;
        case 0x44d69cu: goto label_44d69c;
        case 0x44d6a0u: goto label_44d6a0;
        case 0x44d6a4u: goto label_44d6a4;
        case 0x44d6a8u: goto label_44d6a8;
        case 0x44d6acu: goto label_44d6ac;
        case 0x44d6b0u: goto label_44d6b0;
        case 0x44d6b4u: goto label_44d6b4;
        case 0x44d6b8u: goto label_44d6b8;
        case 0x44d6bcu: goto label_44d6bc;
        case 0x44d6c0u: goto label_44d6c0;
        case 0x44d6c4u: goto label_44d6c4;
        case 0x44d6c8u: goto label_44d6c8;
        case 0x44d6ccu: goto label_44d6cc;
        case 0x44d6d0u: goto label_44d6d0;
        case 0x44d6d4u: goto label_44d6d4;
        case 0x44d6d8u: goto label_44d6d8;
        case 0x44d6dcu: goto label_44d6dc;
        case 0x44d6e0u: goto label_44d6e0;
        case 0x44d6e4u: goto label_44d6e4;
        case 0x44d6e8u: goto label_44d6e8;
        case 0x44d6ecu: goto label_44d6ec;
        case 0x44d6f0u: goto label_44d6f0;
        case 0x44d6f4u: goto label_44d6f4;
        case 0x44d6f8u: goto label_44d6f8;
        case 0x44d6fcu: goto label_44d6fc;
        case 0x44d700u: goto label_44d700;
        case 0x44d704u: goto label_44d704;
        case 0x44d708u: goto label_44d708;
        case 0x44d70cu: goto label_44d70c;
        case 0x44d710u: goto label_44d710;
        case 0x44d714u: goto label_44d714;
        case 0x44d718u: goto label_44d718;
        case 0x44d71cu: goto label_44d71c;
        case 0x44d720u: goto label_44d720;
        case 0x44d724u: goto label_44d724;
        case 0x44d728u: goto label_44d728;
        case 0x44d72cu: goto label_44d72c;
        case 0x44d730u: goto label_44d730;
        case 0x44d734u: goto label_44d734;
        case 0x44d738u: goto label_44d738;
        case 0x44d73cu: goto label_44d73c;
        case 0x44d740u: goto label_44d740;
        case 0x44d744u: goto label_44d744;
        case 0x44d748u: goto label_44d748;
        case 0x44d74cu: goto label_44d74c;
        case 0x44d750u: goto label_44d750;
        case 0x44d754u: goto label_44d754;
        case 0x44d758u: goto label_44d758;
        case 0x44d75cu: goto label_44d75c;
        case 0x44d760u: goto label_44d760;
        case 0x44d764u: goto label_44d764;
        case 0x44d768u: goto label_44d768;
        case 0x44d76cu: goto label_44d76c;
        case 0x44d770u: goto label_44d770;
        case 0x44d774u: goto label_44d774;
        case 0x44d778u: goto label_44d778;
        case 0x44d77cu: goto label_44d77c;
        case 0x44d780u: goto label_44d780;
        case 0x44d784u: goto label_44d784;
        case 0x44d788u: goto label_44d788;
        case 0x44d78cu: goto label_44d78c;
        case 0x44d790u: goto label_44d790;
        case 0x44d794u: goto label_44d794;
        case 0x44d798u: goto label_44d798;
        case 0x44d79cu: goto label_44d79c;
        case 0x44d7a0u: goto label_44d7a0;
        case 0x44d7a4u: goto label_44d7a4;
        case 0x44d7a8u: goto label_44d7a8;
        case 0x44d7acu: goto label_44d7ac;
        case 0x44d7b0u: goto label_44d7b0;
        case 0x44d7b4u: goto label_44d7b4;
        case 0x44d7b8u: goto label_44d7b8;
        case 0x44d7bcu: goto label_44d7bc;
        case 0x44d7c0u: goto label_44d7c0;
        case 0x44d7c4u: goto label_44d7c4;
        case 0x44d7c8u: goto label_44d7c8;
        case 0x44d7ccu: goto label_44d7cc;
        case 0x44d7d0u: goto label_44d7d0;
        case 0x44d7d4u: goto label_44d7d4;
        case 0x44d7d8u: goto label_44d7d8;
        case 0x44d7dcu: goto label_44d7dc;
        case 0x44d7e0u: goto label_44d7e0;
        case 0x44d7e4u: goto label_44d7e4;
        case 0x44d7e8u: goto label_44d7e8;
        case 0x44d7ecu: goto label_44d7ec;
        case 0x44d7f0u: goto label_44d7f0;
        case 0x44d7f4u: goto label_44d7f4;
        case 0x44d7f8u: goto label_44d7f8;
        case 0x44d7fcu: goto label_44d7fc;
        case 0x44d800u: goto label_44d800;
        case 0x44d804u: goto label_44d804;
        case 0x44d808u: goto label_44d808;
        case 0x44d80cu: goto label_44d80c;
        case 0x44d810u: goto label_44d810;
        case 0x44d814u: goto label_44d814;
        case 0x44d818u: goto label_44d818;
        case 0x44d81cu: goto label_44d81c;
        case 0x44d820u: goto label_44d820;
        case 0x44d824u: goto label_44d824;
        case 0x44d828u: goto label_44d828;
        case 0x44d82cu: goto label_44d82c;
        case 0x44d830u: goto label_44d830;
        case 0x44d834u: goto label_44d834;
        case 0x44d838u: goto label_44d838;
        case 0x44d83cu: goto label_44d83c;
        case 0x44d840u: goto label_44d840;
        case 0x44d844u: goto label_44d844;
        case 0x44d848u: goto label_44d848;
        case 0x44d84cu: goto label_44d84c;
        case 0x44d850u: goto label_44d850;
        case 0x44d854u: goto label_44d854;
        case 0x44d858u: goto label_44d858;
        case 0x44d85cu: goto label_44d85c;
        case 0x44d860u: goto label_44d860;
        case 0x44d864u: goto label_44d864;
        case 0x44d868u: goto label_44d868;
        case 0x44d86cu: goto label_44d86c;
        case 0x44d870u: goto label_44d870;
        case 0x44d874u: goto label_44d874;
        case 0x44d878u: goto label_44d878;
        case 0x44d87cu: goto label_44d87c;
        case 0x44d880u: goto label_44d880;
        case 0x44d884u: goto label_44d884;
        case 0x44d888u: goto label_44d888;
        case 0x44d88cu: goto label_44d88c;
        case 0x44d890u: goto label_44d890;
        case 0x44d894u: goto label_44d894;
        case 0x44d898u: goto label_44d898;
        case 0x44d89cu: goto label_44d89c;
        case 0x44d8a0u: goto label_44d8a0;
        case 0x44d8a4u: goto label_44d8a4;
        case 0x44d8a8u: goto label_44d8a8;
        case 0x44d8acu: goto label_44d8ac;
        case 0x44d8b0u: goto label_44d8b0;
        case 0x44d8b4u: goto label_44d8b4;
        case 0x44d8b8u: goto label_44d8b8;
        case 0x44d8bcu: goto label_44d8bc;
        case 0x44d8c0u: goto label_44d8c0;
        case 0x44d8c4u: goto label_44d8c4;
        case 0x44d8c8u: goto label_44d8c8;
        case 0x44d8ccu: goto label_44d8cc;
        case 0x44d8d0u: goto label_44d8d0;
        case 0x44d8d4u: goto label_44d8d4;
        case 0x44d8d8u: goto label_44d8d8;
        case 0x44d8dcu: goto label_44d8dc;
        case 0x44d8e0u: goto label_44d8e0;
        case 0x44d8e4u: goto label_44d8e4;
        case 0x44d8e8u: goto label_44d8e8;
        case 0x44d8ecu: goto label_44d8ec;
        case 0x44d8f0u: goto label_44d8f0;
        case 0x44d8f4u: goto label_44d8f4;
        case 0x44d8f8u: goto label_44d8f8;
        case 0x44d8fcu: goto label_44d8fc;
        case 0x44d900u: goto label_44d900;
        case 0x44d904u: goto label_44d904;
        case 0x44d908u: goto label_44d908;
        case 0x44d90cu: goto label_44d90c;
        case 0x44d910u: goto label_44d910;
        case 0x44d914u: goto label_44d914;
        case 0x44d918u: goto label_44d918;
        case 0x44d91cu: goto label_44d91c;
        case 0x44d920u: goto label_44d920;
        case 0x44d924u: goto label_44d924;
        case 0x44d928u: goto label_44d928;
        case 0x44d92cu: goto label_44d92c;
        case 0x44d930u: goto label_44d930;
        case 0x44d934u: goto label_44d934;
        case 0x44d938u: goto label_44d938;
        case 0x44d93cu: goto label_44d93c;
        case 0x44d940u: goto label_44d940;
        case 0x44d944u: goto label_44d944;
        case 0x44d948u: goto label_44d948;
        case 0x44d94cu: goto label_44d94c;
        case 0x44d950u: goto label_44d950;
        case 0x44d954u: goto label_44d954;
        case 0x44d958u: goto label_44d958;
        case 0x44d95cu: goto label_44d95c;
        case 0x44d960u: goto label_44d960;
        case 0x44d964u: goto label_44d964;
        case 0x44d968u: goto label_44d968;
        case 0x44d96cu: goto label_44d96c;
        case 0x44d970u: goto label_44d970;
        case 0x44d974u: goto label_44d974;
        case 0x44d978u: goto label_44d978;
        case 0x44d97cu: goto label_44d97c;
        case 0x44d980u: goto label_44d980;
        case 0x44d984u: goto label_44d984;
        case 0x44d988u: goto label_44d988;
        case 0x44d98cu: goto label_44d98c;
        case 0x44d990u: goto label_44d990;
        case 0x44d994u: goto label_44d994;
        case 0x44d998u: goto label_44d998;
        case 0x44d99cu: goto label_44d99c;
        case 0x44d9a0u: goto label_44d9a0;
        case 0x44d9a4u: goto label_44d9a4;
        case 0x44d9a8u: goto label_44d9a8;
        case 0x44d9acu: goto label_44d9ac;
        case 0x44d9b0u: goto label_44d9b0;
        case 0x44d9b4u: goto label_44d9b4;
        case 0x44d9b8u: goto label_44d9b8;
        case 0x44d9bcu: goto label_44d9bc;
        default: break;
    }

    ctx->pc = 0x44cc00u;

label_44cc00:
    // 0x44cc00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x44cc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_44cc04:
    // 0x44cc04: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x44cc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_44cc08:
    // 0x44cc08: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x44cc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_44cc0c:
    // 0x44cc0c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x44cc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_44cc10:
    // 0x44cc10: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x44cc10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_44cc14:
    // 0x44cc14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x44cc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_44cc18:
    // 0x44cc18: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x44cc18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_44cc1c:
    // 0x44cc1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x44cc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_44cc20:
    // 0x44cc20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44cc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44cc24:
    // 0x44cc24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44cc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44cc28:
    // 0x44cc28: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x44cc28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_44cc2c:
    // 0x44cc2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44cc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44cc30:
    // 0x44cc30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x44cc30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44cc34:
    // 0x44cc34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44cc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44cc38:
    // 0x44cc38: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x44cc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_44cc3c:
    // 0x44cc3c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x44cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_44cc40:
    // 0x44cc40: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x44cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_44cc44:
    // 0x44cc44: 0xa2a821  addu        $s5, $a1, $v0
    ctx->pc = 0x44cc44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_44cc48:
    // 0x44cc48: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x44cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_44cc4c:
    // 0x44cc4c: 0xc04e738  jal         func_139CE0
label_44cc50:
    if (ctx->pc == 0x44CC50u) {
        ctx->pc = 0x44CC50u;
            // 0x44cc50: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CC54u;
        goto label_44cc54;
    }
    ctx->pc = 0x44CC4Cu;
    SET_GPR_U32(ctx, 31, 0x44CC54u);
    ctx->pc = 0x44CC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CC4Cu;
            // 0x44cc50: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CC54u; }
        if (ctx->pc != 0x44CC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CC54u; }
        if (ctx->pc != 0x44CC54u) { return; }
    }
    ctx->pc = 0x44CC54u;
label_44cc54:
    // 0x44cc54: 0x92420090  lbu         $v0, 0x90($s2)
    ctx->pc = 0x44cc54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
label_44cc58:
    // 0x44cc58: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_44cc5c:
    if (ctx->pc == 0x44CC5Cu) {
        ctx->pc = 0x44CC60u;
        goto label_44cc60;
    }
    ctx->pc = 0x44CC58u;
    {
        const bool branch_taken_0x44cc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44cc58) {
            ctx->pc = 0x44CDECu;
            goto label_44cdec;
        }
    }
    ctx->pc = 0x44CC60u;
label_44cc60:
    // 0x44cc60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44cc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44cc64:
    // 0x44cc64: 0xc04f278  jal         func_13C9E0
label_44cc68:
    if (ctx->pc == 0x44CC68u) {
        ctx->pc = 0x44CC68u;
            // 0x44cc68: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x44CC6Cu;
        goto label_44cc6c;
    }
    ctx->pc = 0x44CC64u;
    SET_GPR_U32(ctx, 31, 0x44CC6Cu);
    ctx->pc = 0x44CC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CC64u;
            // 0x44cc68: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CC6Cu; }
        if (ctx->pc != 0x44CC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CC6Cu; }
        if (ctx->pc != 0x44CC6Cu) { return; }
    }
    ctx->pc = 0x44CC6Cu;
label_44cc6c:
    // 0x44cc6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44cc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44cc70:
    // 0x44cc70: 0xc04ce80  jal         func_133A00
label_44cc74:
    if (ctx->pc == 0x44CC74u) {
        ctx->pc = 0x44CC74u;
            // 0x44cc74: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x44CC78u;
        goto label_44cc78;
    }
    ctx->pc = 0x44CC70u;
    SET_GPR_U32(ctx, 31, 0x44CC78u);
    ctx->pc = 0x44CC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CC70u;
            // 0x44cc74: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CC78u; }
        if (ctx->pc != 0x44CC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CC78u; }
        if (ctx->pc != 0x44CC78u) { return; }
    }
    ctx->pc = 0x44CC78u;
label_44cc78:
    // 0x44cc78: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44cc7c:
    // 0x44cc7c: 0x9246004c  lbu         $a2, 0x4C($s2)
    ctx->pc = 0x44cc7cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 76)));
label_44cc80:
    // 0x44cc80: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x44cc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_44cc84:
    // 0x44cc84: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x44cc84u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_44cc88:
    // 0x44cc88: 0xc07698c  jal         func_1DA630
label_44cc8c:
    if (ctx->pc == 0x44CC8Cu) {
        ctx->pc = 0x44CC8Cu;
            // 0x44cc8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CC90u;
        goto label_44cc90;
    }
    ctx->pc = 0x44CC88u;
    SET_GPR_U32(ctx, 31, 0x44CC90u);
    ctx->pc = 0x44CC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CC88u;
            // 0x44cc8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CC90u; }
        if (ctx->pc != 0x44CC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CC90u; }
        if (ctx->pc != 0x44CC90u) { return; }
    }
    ctx->pc = 0x44CC90u;
label_44cc90:
    // 0x44cc90: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x44cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44cc94:
    // 0x44cc94: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_44cc98:
    if (ctx->pc == 0x44CC98u) {
        ctx->pc = 0x44CC9Cu;
        goto label_44cc9c;
    }
    ctx->pc = 0x44CC94u;
    {
        const bool branch_taken_0x44cc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x44cc94) {
            ctx->pc = 0x44CCA4u;
            goto label_44cca4;
        }
    }
    ctx->pc = 0x44CC9Cu;
label_44cc9c:
    // 0x44cc9c: 0x10000033  b           . + 4 + (0x33 << 2)
label_44cca0:
    if (ctx->pc == 0x44CCA0u) {
        ctx->pc = 0x44CCA0u;
            // 0x44cca0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x44CCA4u;
        goto label_44cca4;
    }
    ctx->pc = 0x44CC9Cu;
    {
        const bool branch_taken_0x44cc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CC9Cu;
            // 0x44cca0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cc9c) {
            ctx->pc = 0x44CD6Cu;
            goto label_44cd6c;
        }
    }
    ctx->pc = 0x44CCA4u;
label_44cca4:
    // 0x44cca4: 0xc0576f4  jal         func_15DBD0
label_44cca8:
    if (ctx->pc == 0x44CCA8u) {
        ctx->pc = 0x44CCACu;
        goto label_44ccac;
    }
    ctx->pc = 0x44CCA4u;
    SET_GPR_U32(ctx, 31, 0x44CCACu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CCACu; }
        if (ctx->pc != 0x44CCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CCACu; }
        if (ctx->pc != 0x44CCACu) { return; }
    }
    ctx->pc = 0x44CCACu;
label_44ccac:
    // 0x44ccac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x44ccacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44ccb0:
    // 0x44ccb0: 0xc076984  jal         func_1DA610
label_44ccb4:
    if (ctx->pc == 0x44CCB4u) {
        ctx->pc = 0x44CCB4u;
            // 0x44ccb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CCB8u;
        goto label_44ccb8;
    }
    ctx->pc = 0x44CCB0u;
    SET_GPR_U32(ctx, 31, 0x44CCB8u);
    ctx->pc = 0x44CCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CCB0u;
            // 0x44ccb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CCB8u; }
        if (ctx->pc != 0x44CCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CCB8u; }
        if (ctx->pc != 0x44CCB8u) { return; }
    }
    ctx->pc = 0x44CCB8u;
label_44ccb8:
    // 0x44ccb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x44ccb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44ccbc:
    // 0x44ccbc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x44ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_44ccc0:
    // 0x44ccc0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x44ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_44ccc4:
    // 0x44ccc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44ccc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44ccc8:
    // 0x44ccc8: 0xc4420400  lwc1        $f2, 0x400($v0)
    ctx->pc = 0x44ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44cccc:
    // 0x44cccc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x44ccccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44ccd0:
    // 0x44ccd0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x44ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_44ccd4:
    // 0x44ccd4: 0xc4410408  lwc1        $f1, 0x408($v0)
    ctx->pc = 0x44ccd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44ccd8:
    // 0x44ccd8: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x44ccd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_44ccdc:
    // 0x44ccdc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x44ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_44cce0:
    // 0x44cce0: 0xc440040c  lwc1        $f0, 0x40C($v0)
    ctx->pc = 0x44cce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44cce4:
    // 0x44cce4: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x44cce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_44cce8:
    // 0x44cce8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x44cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_44ccec:
    // 0x44ccec: 0x8c420404  lw          $v0, 0x404($v0)
    ctx->pc = 0x44ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
label_44ccf0:
    // 0x44ccf0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x44ccf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_44ccf4:
    // 0x44ccf4: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x44ccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_44ccf8:
    // 0x44ccf8: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x44ccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44ccfc:
    // 0x44ccfc: 0xc04cca0  jal         func_133280
label_44cd00:
    if (ctx->pc == 0x44CD00u) {
        ctx->pc = 0x44CD00u;
            // 0x44cd00: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x44CD04u;
        goto label_44cd04;
    }
    ctx->pc = 0x44CCFCu;
    SET_GPR_U32(ctx, 31, 0x44CD04u);
    ctx->pc = 0x44CD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CCFCu;
            // 0x44cd00: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CD04u; }
        if (ctx->pc != 0x44CD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CD04u; }
        if (ctx->pc != 0x44CD04u) { return; }
    }
    ctx->pc = 0x44CD04u;
label_44cd04:
    // 0x44cd04: 0xc076980  jal         func_1DA600
label_44cd08:
    if (ctx->pc == 0x44CD08u) {
        ctx->pc = 0x44CD08u;
            // 0x44cd08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CD0Cu;
        goto label_44cd0c;
    }
    ctx->pc = 0x44CD04u;
    SET_GPR_U32(ctx, 31, 0x44CD0Cu);
    ctx->pc = 0x44CD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CD04u;
            // 0x44cd08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CD0Cu; }
        if (ctx->pc != 0x44CD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CD0Cu; }
        if (ctx->pc != 0x44CD0Cu) { return; }
    }
    ctx->pc = 0x44CD0Cu;
label_44cd0c:
    // 0x44cd0c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x44cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_44cd10:
    // 0x44cd10: 0xc04cc34  jal         func_1330D0
label_44cd14:
    if (ctx->pc == 0x44CD14u) {
        ctx->pc = 0x44CD14u;
            // 0x44cd14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CD18u;
        goto label_44cd18;
    }
    ctx->pc = 0x44CD10u;
    SET_GPR_U32(ctx, 31, 0x44CD18u);
    ctx->pc = 0x44CD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CD10u;
            // 0x44cd14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CD18u; }
        if (ctx->pc != 0x44CD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CD18u; }
        if (ctx->pc != 0x44CD18u) { return; }
    }
    ctx->pc = 0x44CD18u;
label_44cd18:
    // 0x44cd18: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x44cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_44cd1c:
    // 0x44cd1c: 0xc461d8a0  lwc1        $f1, -0x2760($v1)
    ctx->pc = 0x44cd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44cd20:
    // 0x44cd20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x44cd20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44cd24:
    // 0x44cd24: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_44cd28:
    if (ctx->pc == 0x44CD28u) {
        ctx->pc = 0x44CD28u;
            // 0x44cd28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CD2Cu;
        goto label_44cd2c;
    }
    ctx->pc = 0x44CD24u;
    {
        const bool branch_taken_0x44cd24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x44cd24) {
            ctx->pc = 0x44CD28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44CD24u;
            // 0x44cd28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44CD34u;
            goto label_44cd34;
        }
    }
    ctx->pc = 0x44CD2Cu;
label_44cd2c:
    // 0x44cd2c: 0x1000000f  b           . + 4 + (0xF << 2)
label_44cd30:
    if (ctx->pc == 0x44CD30u) {
        ctx->pc = 0x44CD30u;
            // 0x44cd30: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x44CD34u;
        goto label_44cd34;
    }
    ctx->pc = 0x44CD2Cu;
    {
        const bool branch_taken_0x44cd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CD2Cu;
            // 0x44cd30: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cd2c) {
            ctx->pc = 0x44CD6Cu;
            goto label_44cd6c;
        }
    }
    ctx->pc = 0x44CD34u;
label_44cd34:
    // 0x44cd34: 0xc07697c  jal         func_1DA5F0
label_44cd38:
    if (ctx->pc == 0x44CD38u) {
        ctx->pc = 0x44CD3Cu;
        goto label_44cd3c;
    }
    ctx->pc = 0x44CD34u;
    SET_GPR_U32(ctx, 31, 0x44CD3Cu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CD3Cu; }
        if (ctx->pc != 0x44CD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CD3Cu; }
        if (ctx->pc != 0x44CD3Cu) { return; }
    }
    ctx->pc = 0x44CD3Cu;
label_44cd3c:
    // 0x44cd3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44cd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44cd40:
    // 0x44cd40: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x44cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_44cd44:
    // 0x44cd44: 0xc04cd60  jal         func_133580
label_44cd48:
    if (ctx->pc == 0x44CD48u) {
        ctx->pc = 0x44CD48u;
            // 0x44cd48: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CD4Cu;
        goto label_44cd4c;
    }
    ctx->pc = 0x44CD44u;
    SET_GPR_U32(ctx, 31, 0x44CD4Cu);
    ctx->pc = 0x44CD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CD44u;
            // 0x44cd48: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CD4Cu; }
        if (ctx->pc != 0x44CD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CD4Cu; }
        if (ctx->pc != 0x44CD4Cu) { return; }
    }
    ctx->pc = 0x44CD4Cu;
label_44cd4c:
    // 0x44cd4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x44cd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_44cd50:
    // 0x44cd50: 0xc04c650  jal         func_131940
label_44cd54:
    if (ctx->pc == 0x44CD54u) {
        ctx->pc = 0x44CD54u;
            // 0x44cd54: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x44CD58u;
        goto label_44cd58;
    }
    ctx->pc = 0x44CD50u;
    SET_GPR_U32(ctx, 31, 0x44CD58u);
    ctx->pc = 0x44CD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CD50u;
            // 0x44cd54: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CD58u; }
        if (ctx->pc != 0x44CD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CD58u; }
        if (ctx->pc != 0x44CD58u) { return; }
    }
    ctx->pc = 0x44CD58u;
label_44cd58:
    // 0x44cd58: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x44cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_44cd5c:
    // 0x44cd5c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x44cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_44cd60:
    // 0x44cd60: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x44cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_44cd64:
    // 0x44cd64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x44cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_44cd68:
    // 0x44cd68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x44cd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44cd6c:
    // 0x44cd6c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x44cd6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_44cd70:
    // 0x44cd70: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_44cd74:
    if (ctx->pc == 0x44CD74u) {
        ctx->pc = 0x44CD74u;
            // 0x44cd74: 0xae430044  sw          $v1, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x44CD78u;
        goto label_44cd78;
    }
    ctx->pc = 0x44CD70u;
    {
        const bool branch_taken_0x44cd70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CD70u;
            // 0x44cd74: 0xae430044  sw          $v1, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cd70) {
            ctx->pc = 0x44CE04u;
            goto label_44ce04;
        }
    }
    ctx->pc = 0x44CD78u;
label_44cd78:
    // 0x44cd78: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x44cd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_44cd7c:
    // 0x44cd7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44cd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44cd80:
    // 0x44cd80: 0xc04e4a4  jal         func_139290
label_44cd84:
    if (ctx->pc == 0x44CD84u) {
        ctx->pc = 0x44CD84u;
            // 0x44cd84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CD88u;
        goto label_44cd88;
    }
    ctx->pc = 0x44CD80u;
    SET_GPR_U32(ctx, 31, 0x44CD88u);
    ctx->pc = 0x44CD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CD80u;
            // 0x44cd84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CD88u; }
        if (ctx->pc != 0x44CD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CD88u; }
        if (ctx->pc != 0x44CD88u) { return; }
    }
    ctx->pc = 0x44CD88u;
label_44cd88:
    // 0x44cd88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44cd8c:
    // 0x44cd8c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x44cd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_44cd90:
    // 0x44cd90: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x44cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_44cd94:
    // 0x44cd94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44cd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44cd98:
    // 0x44cd98: 0xc04cd60  jal         func_133580
label_44cd9c:
    if (ctx->pc == 0x44CD9Cu) {
        ctx->pc = 0x44CD9Cu;
            // 0x44cd9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CDA0u;
        goto label_44cda0;
    }
    ctx->pc = 0x44CD98u;
    SET_GPR_U32(ctx, 31, 0x44CDA0u);
    ctx->pc = 0x44CD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CD98u;
            // 0x44cd9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CDA0u; }
        if (ctx->pc != 0x44CDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CDA0u; }
        if (ctx->pc != 0x44CDA0u) { return; }
    }
    ctx->pc = 0x44CDA0u;
label_44cda0:
    // 0x44cda0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x44cda0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_44cda4:
    // 0x44cda4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x44cda4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44cda8:
    // 0x44cda8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x44cda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_44cdac:
    // 0x44cdac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x44cdacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44cdb0:
    // 0x44cdb0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x44cdb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_44cdb4:
    // 0x44cdb4: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x44cdb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_44cdb8:
    // 0x44cdb8: 0xc04cfcc  jal         func_133F30
label_44cdbc:
    if (ctx->pc == 0x44CDBCu) {
        ctx->pc = 0x44CDBCu;
            // 0x44cdbc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CDC0u;
        goto label_44cdc0;
    }
    ctx->pc = 0x44CDB8u;
    SET_GPR_U32(ctx, 31, 0x44CDC0u);
    ctx->pc = 0x44CDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CDB8u;
            // 0x44cdbc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CDC0u; }
        if (ctx->pc != 0x44CDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CDC0u; }
        if (ctx->pc != 0x44CDC0u) { return; }
    }
    ctx->pc = 0x44CDC0u;
label_44cdc0:
    // 0x44cdc0: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x44cdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_44cdc4:
    // 0x44cdc4: 0xc64c00dc  lwc1        $f12, 0xDC($s2)
    ctx->pc = 0x44cdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_44cdc8:
    // 0x44cdc8: 0x8ea60014  lw          $a2, 0x14($s5)
    ctx->pc = 0x44cdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_44cdcc:
    // 0x44cdcc: 0xc054bbc  jal         func_152EF0
label_44cdd0:
    if (ctx->pc == 0x44CDD0u) {
        ctx->pc = 0x44CDD0u;
            // 0x44cdd0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CDD4u;
        goto label_44cdd4;
    }
    ctx->pc = 0x44CDCCu;
    SET_GPR_U32(ctx, 31, 0x44CDD4u);
    ctx->pc = 0x44CDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CDCCu;
            // 0x44cdd0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CDD4u; }
        if (ctx->pc != 0x44CDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CDD4u; }
        if (ctx->pc != 0x44CDD4u) { return; }
    }
    ctx->pc = 0x44CDD4u;
label_44cdd4:
    // 0x44cdd4: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x44cdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_44cdd8:
    // 0x44cdd8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x44cdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_44cddc:
    // 0x44cddc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x44cddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44cde0:
    // 0x44cde0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x44cde0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_44cde4:
    // 0x44cde4: 0xc054c2c  jal         func_1530B0
label_44cde8:
    if (ctx->pc == 0x44CDE8u) {
        ctx->pc = 0x44CDE8u;
            // 0x44cde8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x44CDECu;
        goto label_44cdec;
    }
    ctx->pc = 0x44CDE4u;
    SET_GPR_U32(ctx, 31, 0x44CDECu);
    ctx->pc = 0x44CDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CDE4u;
            // 0x44cde8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CDECu; }
        if (ctx->pc != 0x44CDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CDECu; }
        if (ctx->pc != 0x44CDECu) { return; }
    }
    ctx->pc = 0x44CDECu;
label_44cdec:
    // 0x44cdec: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x44cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_44cdf0:
    // 0x44cdf0: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x44cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_44cdf4:
    // 0x44cdf4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x44cdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_44cdf8:
    // 0x44cdf8: 0xc44cd8a0  lwc1        $f12, -0x2760($v0)
    ctx->pc = 0x44cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_44cdfc:
    // 0x44cdfc: 0xc0e31f8  jal         func_38C7E0
label_44ce00:
    if (ctx->pc == 0x44CE00u) {
        ctx->pc = 0x44CE00u;
            // 0x44ce00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CE04u;
        goto label_44ce04;
    }
    ctx->pc = 0x44CDFCu;
    SET_GPR_U32(ctx, 31, 0x44CE04u);
    ctx->pc = 0x44CE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CDFCu;
            // 0x44ce00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CE04u; }
        if (ctx->pc != 0x44CE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CE04u; }
        if (ctx->pc != 0x44CE04u) { return; }
    }
    ctx->pc = 0x44CE04u;
label_44ce04:
    // 0x44ce04: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x44ce04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_44ce08:
    // 0x44ce08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x44ce08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_44ce0c:
    // 0x44ce0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x44ce0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_44ce10:
    // 0x44ce10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x44ce10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44ce14:
    // 0x44ce14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x44ce14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44ce18:
    // 0x44ce18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44ce18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44ce1c:
    // 0x44ce1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44ce1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44ce20:
    // 0x44ce20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44ce20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44ce24:
    // 0x44ce24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44ce24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44ce28:
    // 0x44ce28: 0x3e00008  jr          $ra
label_44ce2c:
    if (ctx->pc == 0x44CE2Cu) {
        ctx->pc = 0x44CE2Cu;
            // 0x44ce2c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x44CE30u;
        goto label_44ce30;
    }
    ctx->pc = 0x44CE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CE28u;
            // 0x44ce2c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44CE30u;
label_44ce30:
    // 0x44ce30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44ce30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44ce34:
    // 0x44ce34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44ce38:
    // 0x44ce38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44ce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44ce3c:
    // 0x44ce3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44ce3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44ce40:
    // 0x44ce40: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x44ce40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_44ce44:
    // 0x44ce44: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_44ce48:
    if (ctx->pc == 0x44CE48u) {
        ctx->pc = 0x44CE48u;
            // 0x44ce48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CE4Cu;
        goto label_44ce4c;
    }
    ctx->pc = 0x44CE44u;
    {
        const bool branch_taken_0x44ce44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x44CE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CE44u;
            // 0x44ce48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ce44) {
            ctx->pc = 0x44CE70u;
            goto label_44ce70;
        }
    }
    ctx->pc = 0x44CE4Cu;
label_44ce4c:
    // 0x44ce4c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_44ce50:
    if (ctx->pc == 0x44CE50u) {
        ctx->pc = 0x44CE50u;
            // 0x44ce50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x44CE54u;
        goto label_44ce54;
    }
    ctx->pc = 0x44CE4Cu;
    {
        const bool branch_taken_0x44ce4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ce4c) {
            ctx->pc = 0x44CE50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44CE4Cu;
            // 0x44ce50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44CE5Cu;
            goto label_44ce5c;
        }
    }
    ctx->pc = 0x44CE54u;
label_44ce54:
    // 0x44ce54: 0x10000020  b           . + 4 + (0x20 << 2)
label_44ce58:
    if (ctx->pc == 0x44CE58u) {
        ctx->pc = 0x44CE58u;
            // 0x44ce58: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x44CE5Cu;
        goto label_44ce5c;
    }
    ctx->pc = 0x44CE54u;
    {
        const bool branch_taken_0x44ce54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CE54u;
            // 0x44ce58: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ce54) {
            ctx->pc = 0x44CED8u;
            goto label_44ced8;
        }
    }
    ctx->pc = 0x44CE5Cu;
label_44ce5c:
    // 0x44ce5c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x44ce5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_44ce60:
    // 0x44ce60: 0x320f809  jalr        $t9
label_44ce64:
    if (ctx->pc == 0x44CE64u) {
        ctx->pc = 0x44CE68u;
        goto label_44ce68;
    }
    ctx->pc = 0x44CE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44CE68u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44CE68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44CE68u; }
            if (ctx->pc != 0x44CE68u) { return; }
        }
        }
    }
    ctx->pc = 0x44CE68u;
label_44ce68:
    // 0x44ce68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44ce6c:
    // 0x44ce6c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x44ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_44ce70:
    // 0x44ce70: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x44ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_44ce74:
    // 0x44ce74: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x44ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_44ce78:
    // 0x44ce78: 0xc60000dc  lwc1        $f0, 0xDC($s0)
    ctx->pc = 0x44ce78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44ce7c:
    // 0x44ce7c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x44ce7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44ce80:
    // 0x44ce80: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x44ce80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_44ce84:
    // 0x44ce84: 0xe60100dc  swc1        $f1, 0xDC($s0)
    ctx->pc = 0x44ce84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
label_44ce88:
    // 0x44ce88: 0xc60000d8  lwc1        $f0, 0xD8($s0)
    ctx->pc = 0x44ce88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44ce8c:
    // 0x44ce8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x44ce8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44ce90:
    // 0x44ce90: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_44ce94:
    if (ctx->pc == 0x44CE94u) {
        ctx->pc = 0x44CE94u;
            // 0x44ce94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44CE98u;
        goto label_44ce98;
    }
    ctx->pc = 0x44CE90u;
    {
        const bool branch_taken_0x44ce90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x44CE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CE90u;
            // 0x44ce94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ce90) {
            ctx->pc = 0x44CE9Cu;
            goto label_44ce9c;
        }
    }
    ctx->pc = 0x44CE98u;
label_44ce98:
    // 0x44ce98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44ce98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44ce9c:
    // 0x44ce9c: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_44cea0:
    if (ctx->pc == 0x44CEA0u) {
        ctx->pc = 0x44CEA0u;
            // 0x44cea0: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x44CEA4u;
        goto label_44cea4;
    }
    ctx->pc = 0x44CE9Cu;
    {
        const bool branch_taken_0x44ce9c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x44ce9c) {
            ctx->pc = 0x44CEA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44CE9Cu;
            // 0x44cea0: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44CEB0u;
            goto label_44ceb0;
        }
    }
    ctx->pc = 0x44CEA4u;
label_44cea4:
    // 0x44cea4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x44cea4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44cea8:
    // 0x44cea8: 0x10000007  b           . + 4 + (0x7 << 2)
label_44ceac:
    if (ctx->pc == 0x44CEACu) {
        ctx->pc = 0x44CEACu;
            // 0x44ceac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x44CEB0u;
        goto label_44ceb0;
    }
    ctx->pc = 0x44CEA8u;
    {
        const bool branch_taken_0x44cea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CEA8u;
            // 0x44ceac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cea8) {
            ctx->pc = 0x44CEC8u;
            goto label_44cec8;
        }
    }
    ctx->pc = 0x44CEB0u;
label_44ceb0:
    // 0x44ceb0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x44ceb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_44ceb4:
    // 0x44ceb4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x44ceb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_44ceb8:
    // 0x44ceb8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x44ceb8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44cebc:
    // 0x44cebc: 0x0  nop
    ctx->pc = 0x44cebcu;
    // NOP
label_44cec0:
    // 0x44cec0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x44cec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_44cec4:
    // 0x44cec4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x44cec4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_44cec8:
    // 0x44cec8: 0xc60000dc  lwc1        $f0, 0xDC($s0)
    ctx->pc = 0x44cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44cecc:
    // 0x44cecc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x44ceccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_44ced0:
    // 0x44ced0: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x44ced0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
label_44ced4:
    // 0x44ced4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44ced4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44ced8:
    // 0x44ced8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44ced8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44cedc:
    // 0x44cedc: 0x3e00008  jr          $ra
label_44cee0:
    if (ctx->pc == 0x44CEE0u) {
        ctx->pc = 0x44CEE0u;
            // 0x44cee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44CEE4u;
        goto label_44cee4;
    }
    ctx->pc = 0x44CEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CEDCu;
            // 0x44cee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44CEE4u;
label_44cee4:
    // 0x44cee4: 0x0  nop
    ctx->pc = 0x44cee4u;
    // NOP
label_44cee8:
    // 0x44cee8: 0x0  nop
    ctx->pc = 0x44cee8u;
    // NOP
label_44ceec:
    // 0x44ceec: 0x0  nop
    ctx->pc = 0x44ceecu;
    // NOP
label_44cef0:
    // 0x44cef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44cef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44cef4:
    // 0x44cef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44cef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44cef8:
    // 0x44cef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x44cef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44cefc:
    // 0x44cefc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44cefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44cf00:
    // 0x44cf00: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x44cf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44cf04:
    // 0x44cf04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x44cf04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44cf08:
    // 0x44cf08: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_44cf0c:
    if (ctx->pc == 0x44CF0Cu) {
        ctx->pc = 0x44CF0Cu;
            // 0x44cf0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CF10u;
        goto label_44cf10;
    }
    ctx->pc = 0x44CF08u;
    {
        const bool branch_taken_0x44cf08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x44CF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CF08u;
            // 0x44cf0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cf08) {
            ctx->pc = 0x44CF4Cu;
            goto label_44cf4c;
        }
    }
    ctx->pc = 0x44CF10u;
label_44cf10:
    // 0x44cf10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44cf14:
    // 0x44cf14: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x44cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_44cf18:
    // 0x44cf18: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x44cf18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_44cf1c:
    // 0x44cf1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x44cf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44cf20:
    // 0x44cf20: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x44cf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_44cf24:
    // 0x44cf24: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x44cf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_44cf28:
    // 0x44cf28: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x44cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_44cf2c:
    // 0x44cf2c: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x44cf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_44cf30:
    // 0x44cf30: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x44cf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44cf34:
    // 0x44cf34: 0xc0e32a4  jal         func_38CA90
label_44cf38:
    if (ctx->pc == 0x44CF38u) {
        ctx->pc = 0x44CF38u;
            // 0x44cf38: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->pc = 0x44CF3Cu;
        goto label_44cf3c;
    }
    ctx->pc = 0x44CF34u;
    SET_GPR_U32(ctx, 31, 0x44CF3Cu);
    ctx->pc = 0x44CF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CF34u;
            // 0x44cf38: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CF3Cu; }
        if (ctx->pc != 0x44CF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CF3Cu; }
        if (ctx->pc != 0x44CF3Cu) { return; }
    }
    ctx->pc = 0x44CF3Cu;
label_44cf3c:
    // 0x44cf3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x44cf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44cf40:
    // 0x44cf40: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x44cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_44cf44:
    // 0x44cf44: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x44cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_44cf48:
    // 0x44cf48: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x44cf48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
label_44cf4c:
    // 0x44cf4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44cf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44cf50:
    // 0x44cf50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44cf50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44cf54:
    // 0x44cf54: 0x3e00008  jr          $ra
label_44cf58:
    if (ctx->pc == 0x44CF58u) {
        ctx->pc = 0x44CF58u;
            // 0x44cf58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44CF5Cu;
        goto label_44cf5c;
    }
    ctx->pc = 0x44CF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CF54u;
            // 0x44cf58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44CF5Cu;
label_44cf5c:
    // 0x44cf5c: 0x0  nop
    ctx->pc = 0x44cf5cu;
    // NOP
label_44cf60:
    // 0x44cf60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44cf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44cf64:
    // 0x44cf64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44cf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44cf68:
    // 0x44cf68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x44cf68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44cf6c:
    // 0x44cf6c: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x44cf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44cf70:
    // 0x44cf70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x44cf70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44cf74:
    // 0x44cf74: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_44cf78:
    if (ctx->pc == 0x44CF78u) {
        ctx->pc = 0x44CF78u;
            // 0x44cf78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x44CF7Cu;
        goto label_44cf7c;
    }
    ctx->pc = 0x44CF74u;
    {
        const bool branch_taken_0x44cf74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x44cf74) {
            ctx->pc = 0x44CF78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44CF74u;
            // 0x44cf78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44CF8Cu;
            goto label_44cf8c;
        }
    }
    ctx->pc = 0x44CF7Cu;
label_44cf7c:
    // 0x44cf7c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x44cf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_44cf80:
    // 0x44cf80: 0xc0baaa0  jal         func_2EAA80
label_44cf84:
    if (ctx->pc == 0x44CF84u) {
        ctx->pc = 0x44CF84u;
            // 0x44cf84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CF88u;
        goto label_44cf88;
    }
    ctx->pc = 0x44CF80u;
    SET_GPR_U32(ctx, 31, 0x44CF88u);
    ctx->pc = 0x44CF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CF80u;
            // 0x44cf84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CF88u; }
        if (ctx->pc != 0x44CF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CF88u; }
        if (ctx->pc != 0x44CF88u) { return; }
    }
    ctx->pc = 0x44CF88u;
label_44cf88:
    // 0x44cf88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44cf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44cf8c:
    // 0x44cf8c: 0x3e00008  jr          $ra
label_44cf90:
    if (ctx->pc == 0x44CF90u) {
        ctx->pc = 0x44CF90u;
            // 0x44cf90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x44CF94u;
        goto label_44cf94;
    }
    ctx->pc = 0x44CF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CF8Cu;
            // 0x44cf90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44CF94u;
label_44cf94:
    // 0x44cf94: 0x0  nop
    ctx->pc = 0x44cf94u;
    // NOP
label_44cf98:
    // 0x44cf98: 0x0  nop
    ctx->pc = 0x44cf98u;
    // NOP
label_44cf9c:
    // 0x44cf9c: 0x0  nop
    ctx->pc = 0x44cf9cu;
    // NOP
label_44cfa0:
    // 0x44cfa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44cfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44cfa4:
    // 0x44cfa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44cfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44cfa8:
    // 0x44cfa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44cfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44cfac:
    // 0x44cfac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44cfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44cfb0:
    // 0x44cfb0: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x44cfb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_44cfb4:
    // 0x44cfb4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_44cfb8:
    if (ctx->pc == 0x44CFB8u) {
        ctx->pc = 0x44CFB8u;
            // 0x44cfb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CFBCu;
        goto label_44cfbc;
    }
    ctx->pc = 0x44CFB4u;
    {
        const bool branch_taken_0x44cfb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CFB4u;
            // 0x44cfb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cfb4) {
            ctx->pc = 0x44CFECu;
            goto label_44cfec;
        }
    }
    ctx->pc = 0x44CFBCu;
label_44cfbc:
    // 0x44cfbc: 0xc04008c  jal         func_100230
label_44cfc0:
    if (ctx->pc == 0x44CFC0u) {
        ctx->pc = 0x44CFC0u;
            // 0x44cfc0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x44CFC4u;
        goto label_44cfc4;
    }
    ctx->pc = 0x44CFBCu;
    SET_GPR_U32(ctx, 31, 0x44CFC4u);
    ctx->pc = 0x44CFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CFBCu;
            // 0x44cfc0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CFC4u; }
        if (ctx->pc != 0x44CFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CFC4u; }
        if (ctx->pc != 0x44CFC4u) { return; }
    }
    ctx->pc = 0x44CFC4u;
label_44cfc4:
    // 0x44cfc4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x44cfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_44cfc8:
    // 0x44cfc8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x44cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_44cfcc:
    // 0x44cfcc: 0xc0407c0  jal         func_101F00
label_44cfd0:
    if (ctx->pc == 0x44CFD0u) {
        ctx->pc = 0x44CFD0u;
            // 0x44cfd0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x44CFD4u;
        goto label_44cfd4;
    }
    ctx->pc = 0x44CFCCu;
    SET_GPR_U32(ctx, 31, 0x44CFD4u);
    ctx->pc = 0x44CFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CFCCu;
            // 0x44cfd0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CFD4u; }
        if (ctx->pc != 0x44CFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CFD4u; }
        if (ctx->pc != 0x44CFD4u) { return; }
    }
    ctx->pc = 0x44CFD4u;
label_44cfd4:
    // 0x44cfd4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x44cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_44cfd8:
    // 0x44cfd8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x44cfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_44cfdc:
    // 0x44cfdc: 0xc0407c0  jal         func_101F00
label_44cfe0:
    if (ctx->pc == 0x44CFE0u) {
        ctx->pc = 0x44CFE0u;
            // 0x44cfe0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x44CFE4u;
        goto label_44cfe4;
    }
    ctx->pc = 0x44CFDCu;
    SET_GPR_U32(ctx, 31, 0x44CFE4u);
    ctx->pc = 0x44CFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CFDCu;
            // 0x44cfe0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CFE4u; }
        if (ctx->pc != 0x44CFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CFE4u; }
        if (ctx->pc != 0x44CFE4u) { return; }
    }
    ctx->pc = 0x44CFE4u;
label_44cfe4:
    // 0x44cfe4: 0xc0400a8  jal         func_1002A0
label_44cfe8:
    if (ctx->pc == 0x44CFE8u) {
        ctx->pc = 0x44CFE8u;
            // 0x44cfe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CFECu;
        goto label_44cfec;
    }
    ctx->pc = 0x44CFE4u;
    SET_GPR_U32(ctx, 31, 0x44CFECu);
    ctx->pc = 0x44CFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CFE4u;
            // 0x44cfe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CFECu; }
        if (ctx->pc != 0x44CFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CFECu; }
        if (ctx->pc != 0x44CFECu) { return; }
    }
    ctx->pc = 0x44CFECu;
label_44cfec:
    // 0x44cfec: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x44cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_44cff0:
    // 0x44cff0: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x44cff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_44cff4:
    // 0x44cff4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44cff8:
    if (ctx->pc == 0x44CFF8u) {
        ctx->pc = 0x44CFF8u;
            // 0x44cff8: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x44CFFCu;
        goto label_44cffc;
    }
    ctx->pc = 0x44CFF4u;
    {
        const bool branch_taken_0x44cff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44cff4) {
            ctx->pc = 0x44CFF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44CFF4u;
            // 0x44cff8: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44D010u;
            goto label_44d010;
        }
    }
    ctx->pc = 0x44CFFCu;
label_44cffc:
    // 0x44cffc: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x44cffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_44d000:
    // 0x44d000: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44d000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44d004:
    // 0x44d004: 0x320f809  jalr        $t9
label_44d008:
    if (ctx->pc == 0x44D008u) {
        ctx->pc = 0x44D008u;
            // 0x44d008: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44D00Cu;
        goto label_44d00c;
    }
    ctx->pc = 0x44D004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44D00Cu);
        ctx->pc = 0x44D008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D004u;
            // 0x44d008: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44D00Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44D00Cu; }
            if (ctx->pc != 0x44D00Cu) { return; }
        }
        }
    }
    ctx->pc = 0x44D00Cu;
label_44d00c:
    // 0x44d00c: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x44d00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_44d010:
    // 0x44d010: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x44d010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_44d014:
    // 0x44d014: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44d018:
    if (ctx->pc == 0x44D018u) {
        ctx->pc = 0x44D018u;
            // 0x44d018: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x44D01Cu;
        goto label_44d01c;
    }
    ctx->pc = 0x44D014u;
    {
        const bool branch_taken_0x44d014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d014) {
            ctx->pc = 0x44D018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44D014u;
            // 0x44d018: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44D030u;
            goto label_44d030;
        }
    }
    ctx->pc = 0x44D01Cu;
label_44d01c:
    // 0x44d01c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44d01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44d020:
    // 0x44d020: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44d020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44d024:
    // 0x44d024: 0x320f809  jalr        $t9
label_44d028:
    if (ctx->pc == 0x44D028u) {
        ctx->pc = 0x44D028u;
            // 0x44d028: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44D02Cu;
        goto label_44d02c;
    }
    ctx->pc = 0x44D024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44D02Cu);
        ctx->pc = 0x44D028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D024u;
            // 0x44d028: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44D02Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44D02Cu; }
            if (ctx->pc != 0x44D02Cu) { return; }
        }
        }
    }
    ctx->pc = 0x44D02Cu;
label_44d02c:
    // 0x44d02c: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x44d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_44d030:
    // 0x44d030: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x44d030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_44d034:
    // 0x44d034: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44d038:
    if (ctx->pc == 0x44D038u) {
        ctx->pc = 0x44D038u;
            // 0x44d038: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x44D03Cu;
        goto label_44d03c;
    }
    ctx->pc = 0x44D034u;
    {
        const bool branch_taken_0x44d034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d034) {
            ctx->pc = 0x44D038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44D034u;
            // 0x44d038: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44D050u;
            goto label_44d050;
        }
    }
    ctx->pc = 0x44D03Cu;
label_44d03c:
    // 0x44d03c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44d03cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44d040:
    // 0x44d040: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44d040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44d044:
    // 0x44d044: 0x320f809  jalr        $t9
label_44d048:
    if (ctx->pc == 0x44D048u) {
        ctx->pc = 0x44D048u;
            // 0x44d048: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44D04Cu;
        goto label_44d04c;
    }
    ctx->pc = 0x44D044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44D04Cu);
        ctx->pc = 0x44D048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D044u;
            // 0x44d048: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44D04Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44D04Cu; }
            if (ctx->pc != 0x44D04Cu) { return; }
        }
        }
    }
    ctx->pc = 0x44D04Cu;
label_44d04c:
    // 0x44d04c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x44d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_44d050:
    // 0x44d050: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44d050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44d054:
    // 0x44d054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44d054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44d058:
    // 0x44d058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44d058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44d05c:
    // 0x44d05c: 0x3e00008  jr          $ra
label_44d060:
    if (ctx->pc == 0x44D060u) {
        ctx->pc = 0x44D060u;
            // 0x44d060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44D064u;
        goto label_44d064;
    }
    ctx->pc = 0x44D05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44D060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D05Cu;
            // 0x44d060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44D064u;
label_44d064:
    // 0x44d064: 0x0  nop
    ctx->pc = 0x44d064u;
    // NOP
label_44d068:
    // 0x44d068: 0x0  nop
    ctx->pc = 0x44d068u;
    // NOP
label_44d06c:
    // 0x44d06c: 0x0  nop
    ctx->pc = 0x44d06cu;
    // NOP
label_44d070:
    // 0x44d070: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x44d070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_44d074:
    // 0x44d074: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x44d074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_44d078:
    // 0x44d078: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x44d078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_44d07c:
    // 0x44d07c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x44d07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_44d080:
    // 0x44d080: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x44d080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_44d084:
    // 0x44d084: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x44d084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_44d088:
    // 0x44d088: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44d088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44d08c:
    // 0x44d08c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x44d08cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_44d090:
    // 0x44d090: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x44d090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_44d094:
    // 0x44d094: 0xc0892d0  jal         func_224B40
label_44d098:
    if (ctx->pc == 0x44D098u) {
        ctx->pc = 0x44D098u;
            // 0x44d098: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x44D09Cu;
        goto label_44d09c;
    }
    ctx->pc = 0x44D094u;
    SET_GPR_U32(ctx, 31, 0x44D09Cu);
    ctx->pc = 0x44D098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D094u;
            // 0x44d098: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D09Cu; }
        if (ctx->pc != 0x44D09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D09Cu; }
        if (ctx->pc != 0x44D09Cu) { return; }
    }
    ctx->pc = 0x44D09Cu;
label_44d09c:
    // 0x44d09c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44d0a0:
    // 0x44d0a0: 0x26330030  addiu       $s3, $s1, 0x30
    ctx->pc = 0x44d0a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_44d0a4:
    // 0x44d0a4: 0x8c500dd0  lw          $s0, 0xDD0($v0)
    ctx->pc = 0x44d0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3536)));
label_44d0a8:
    // 0x44d0a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x44d0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44d0ac:
    // 0x44d0ac: 0xc0d46b8  jal         func_351AE0
label_44d0b0:
    if (ctx->pc == 0x44D0B0u) {
        ctx->pc = 0x44D0B0u;
            // 0x44d0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D0B4u;
        goto label_44d0b4;
    }
    ctx->pc = 0x44D0ACu;
    SET_GPR_U32(ctx, 31, 0x44D0B4u);
    ctx->pc = 0x44D0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D0ACu;
            // 0x44d0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AE0u;
    if (runtime->hasFunction(0x351AE0u)) {
        auto targetFn = runtime->lookupFunction(0x351AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D0B4u; }
        if (ctx->pc != 0x44D0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AE0_0x351ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D0B4u; }
        if (ctx->pc != 0x44D0B4u) { return; }
    }
    ctx->pc = 0x44D0B4u;
label_44d0b4:
    // 0x44d0b4: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
label_44d0b8:
    if (ctx->pc == 0x44D0B8u) {
        ctx->pc = 0x44D0B8u;
            // 0x44d0b8: 0x8c50000c  lw          $s0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x44D0BCu;
        goto label_44d0bc;
    }
    ctx->pc = 0x44D0B4u;
    {
        const bool branch_taken_0x44d0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44d0b4) {
            ctx->pc = 0x44D0B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44D0B4u;
            // 0x44d0b8: 0x8c50000c  lw          $s0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44D1F0u;
            goto label_44d1f0;
        }
    }
    ctx->pc = 0x44D0BCu;
label_44d0bc:
    // 0x44d0bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x44d0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_44d0c0:
    // 0x44d0c0: 0xc0d46b0  jal         func_351AC0
label_44d0c4:
    if (ctx->pc == 0x44D0C4u) {
        ctx->pc = 0x44D0C4u;
            // 0x44d0c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D0C8u;
        goto label_44d0c8;
    }
    ctx->pc = 0x44D0C0u;
    SET_GPR_U32(ctx, 31, 0x44D0C8u);
    ctx->pc = 0x44D0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D0C0u;
            // 0x44d0c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AC0u;
    if (runtime->hasFunction(0x351AC0u)) {
        auto targetFn = runtime->lookupFunction(0x351AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D0C8u; }
        if (ctx->pc != 0x44D0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AC0_0x351ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D0C8u; }
        if (ctx->pc != 0x44D0C8u) { return; }
    }
    ctx->pc = 0x44D0C8u;
label_44d0c8:
    // 0x44d0c8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x44d0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44d0cc:
    // 0x44d0cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x44d0ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_44d0d0:
    // 0x44d0d0: 0x0  nop
    ctx->pc = 0x44d0d0u;
    // NOP
label_44d0d4:
    // 0x44d0d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x44d0d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44d0d8:
    // 0x44d0d8: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
label_44d0dc:
    if (ctx->pc == 0x44D0DCu) {
        ctx->pc = 0x44D0DCu;
            // 0x44d0dc: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x44D0E0u;
        goto label_44d0e0;
    }
    ctx->pc = 0x44D0D8u;
    {
        const bool branch_taken_0x44d0d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x44d0d8) {
            ctx->pc = 0x44D0DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44D0D8u;
            // 0x44d0dc: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x44D150u;
            goto label_44d150;
        }
    }
    ctx->pc = 0x44D0E0u;
label_44d0e0:
    // 0x44d0e0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x44d0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44d0e4:
    // 0x44d0e4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x44d0e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44d0e8:
    // 0x44d0e8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_44d0ec:
    if (ctx->pc == 0x44D0ECu) {
        ctx->pc = 0x44D0ECu;
            // 0x44d0ec: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x44D0F0u;
        goto label_44d0f0;
    }
    ctx->pc = 0x44D0E8u;
    {
        const bool branch_taken_0x44d0e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x44d0e8) {
            ctx->pc = 0x44D0ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44D0E8u;
            // 0x44d0ec: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44D104u;
            goto label_44d104;
        }
    }
    ctx->pc = 0x44D0F0u;
label_44d0f0:
    // 0x44d0f0: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x44d0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44d0f4:
    // 0x44d0f4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x44d0f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44d0f8:
    // 0x44d0f8: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_44d0fc:
    if (ctx->pc == 0x44D0FCu) {
        ctx->pc = 0x44D100u;
        goto label_44d100;
    }
    ctx->pc = 0x44D0F8u;
    {
        const bool branch_taken_0x44d0f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x44d0f8) {
            ctx->pc = 0x44D14Cu;
            goto label_44d14c;
        }
    }
    ctx->pc = 0x44D100u;
label_44d100:
    // 0x44d100: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x44d100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_44d104:
    // 0x44d104: 0xc0d46a0  jal         func_351A80
label_44d108:
    if (ctx->pc == 0x44D108u) {
        ctx->pc = 0x44D10Cu;
        goto label_44d10c;
    }
    ctx->pc = 0x44D104u;
    SET_GPR_U32(ctx, 31, 0x44D10Cu);
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D10Cu; }
        if (ctx->pc != 0x44D10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D10Cu; }
        if (ctx->pc != 0x44D10Cu) { return; }
    }
    ctx->pc = 0x44D10Cu;
label_44d10c:
    // 0x44d10c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44d10cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44d110:
    // 0x44d110: 0x52400033  beql        $s2, $zero, . + 4 + (0x33 << 2)
label_44d114:
    if (ctx->pc == 0x44D114u) {
        ctx->pc = 0x44D114u;
            // 0x44d114: 0xafb2007c  sw          $s2, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 18));
        ctx->pc = 0x44D118u;
        goto label_44d118;
    }
    ctx->pc = 0x44D110u;
    {
        const bool branch_taken_0x44d110 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d110) {
            ctx->pc = 0x44D114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44D110u;
            // 0x44d114: 0xafb2007c  sw          $s2, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44D1E0u;
            goto label_44d1e0;
        }
    }
    ctx->pc = 0x44D118u;
label_44d118:
    // 0x44d118: 0xc049514  jal         func_125450
label_44d11c:
    if (ctx->pc == 0x44D11Cu) {
        ctx->pc = 0x44D11Cu;
            // 0x44d11c: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x44D120u;
        goto label_44d120;
    }
    ctx->pc = 0x44D118u;
    SET_GPR_U32(ctx, 31, 0x44D120u);
    ctx->pc = 0x44D11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D118u;
            // 0x44d11c: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D120u; }
        if (ctx->pc != 0x44D120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D120u; }
        if (ctx->pc != 0x44D120u) { return; }
    }
    ctx->pc = 0x44D120u;
label_44d120:
    // 0x44d120: 0xc0474b6  jal         func_11D2D8
label_44d124:
    if (ctx->pc == 0x44D124u) {
        ctx->pc = 0x44D124u;
            // 0x44d124: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D128u;
        goto label_44d128;
    }
    ctx->pc = 0x44D120u;
    SET_GPR_U32(ctx, 31, 0x44D128u);
    ctx->pc = 0x44D124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D120u;
            // 0x44d124: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D128u; }
        if (ctx->pc != 0x44D128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D128u; }
        if (ctx->pc != 0x44D128u) { return; }
    }
    ctx->pc = 0x44D128u;
label_44d128:
    // 0x44d128: 0xc0497dc  jal         func_125F70
label_44d12c:
    if (ctx->pc == 0x44D12Cu) {
        ctx->pc = 0x44D12Cu;
            // 0x44d12c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D130u;
        goto label_44d130;
    }
    ctx->pc = 0x44D128u;
    SET_GPR_U32(ctx, 31, 0x44D130u);
    ctx->pc = 0x44D12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D128u;
            // 0x44d12c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D130u; }
        if (ctx->pc != 0x44D130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D130u; }
        if (ctx->pc != 0x44D130u) { return; }
    }
    ctx->pc = 0x44D130u;
label_44d130:
    // 0x44d130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44d130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44d134:
    // 0x44d134: 0xc0827ac  jal         func_209EB0
label_44d138:
    if (ctx->pc == 0x44D138u) {
        ctx->pc = 0x44D138u;
            // 0x44d138: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x44D13Cu;
        goto label_44d13c;
    }
    ctx->pc = 0x44D134u;
    SET_GPR_U32(ctx, 31, 0x44D13Cu);
    ctx->pc = 0x44D138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D134u;
            // 0x44d138: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D13Cu; }
        if (ctx->pc != 0x44D13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D13Cu; }
        if (ctx->pc != 0x44D13Cu) { return; }
    }
    ctx->pc = 0x44D13Cu;
label_44d13c:
    // 0x44d13c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44d13cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44d140:
    // 0x44d140: 0xafb2007c  sw          $s2, 0x7C($sp)
    ctx->pc = 0x44d140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 18));
label_44d144:
    // 0x44d144: 0x10000026  b           . + 4 + (0x26 << 2)
label_44d148:
    if (ctx->pc == 0x44D148u) {
        ctx->pc = 0x44D14Cu;
        goto label_44d14c;
    }
    ctx->pc = 0x44D144u;
    {
        const bool branch_taken_0x44d144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d144) {
            ctx->pc = 0x44D1E0u;
            goto label_44d1e0;
        }
    }
    ctx->pc = 0x44D14Cu;
label_44d14c:
    // 0x44d14c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x44d14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_44d150:
    // 0x44d150: 0xc049514  jal         func_125450
label_44d154:
    if (ctx->pc == 0x44D154u) {
        ctx->pc = 0x44D158u;
        goto label_44d158;
    }
    ctx->pc = 0x44D150u;
    SET_GPR_U32(ctx, 31, 0x44D158u);
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D158u; }
        if (ctx->pc != 0x44D158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D158u; }
        if (ctx->pc != 0x44D158u) { return; }
    }
    ctx->pc = 0x44D158u;
label_44d158:
    // 0x44d158: 0xc0474b6  jal         func_11D2D8
label_44d15c:
    if (ctx->pc == 0x44D15Cu) {
        ctx->pc = 0x44D15Cu;
            // 0x44d15c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D160u;
        goto label_44d160;
    }
    ctx->pc = 0x44D158u;
    SET_GPR_U32(ctx, 31, 0x44D160u);
    ctx->pc = 0x44D15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D158u;
            // 0x44d15c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D160u; }
        if (ctx->pc != 0x44D160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D160u; }
        if (ctx->pc != 0x44D160u) { return; }
    }
    ctx->pc = 0x44D160u;
label_44d160:
    // 0x44d160: 0xc0497dc  jal         func_125F70
label_44d164:
    if (ctx->pc == 0x44D164u) {
        ctx->pc = 0x44D164u;
            // 0x44d164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D168u;
        goto label_44d168;
    }
    ctx->pc = 0x44D160u;
    SET_GPR_U32(ctx, 31, 0x44D168u);
    ctx->pc = 0x44D164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D160u;
            // 0x44d164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D168u; }
        if (ctx->pc != 0x44D168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D168u; }
        if (ctx->pc != 0x44D168u) { return; }
    }
    ctx->pc = 0x44D168u;
label_44d168:
    // 0x44d168: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x44d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_44d16c:
    // 0x44d16c: 0xc049514  jal         func_125450
label_44d170:
    if (ctx->pc == 0x44D170u) {
        ctx->pc = 0x44D170u;
            // 0x44d170: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x44D174u;
        goto label_44d174;
    }
    ctx->pc = 0x44D16Cu;
    SET_GPR_U32(ctx, 31, 0x44D174u);
    ctx->pc = 0x44D170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D16Cu;
            // 0x44d170: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D174u; }
        if (ctx->pc != 0x44D174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D174u; }
        if (ctx->pc != 0x44D174u) { return; }
    }
    ctx->pc = 0x44D174u;
label_44d174:
    // 0x44d174: 0xc0474b6  jal         func_11D2D8
label_44d178:
    if (ctx->pc == 0x44D178u) {
        ctx->pc = 0x44D178u;
            // 0x44d178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D17Cu;
        goto label_44d17c;
    }
    ctx->pc = 0x44D174u;
    SET_GPR_U32(ctx, 31, 0x44D17Cu);
    ctx->pc = 0x44D178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D174u;
            // 0x44d178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D17Cu; }
        if (ctx->pc != 0x44D17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D17Cu; }
        if (ctx->pc != 0x44D17Cu) { return; }
    }
    ctx->pc = 0x44D17Cu;
label_44d17c:
    // 0x44d17c: 0xc0497dc  jal         func_125F70
label_44d180:
    if (ctx->pc == 0x44D180u) {
        ctx->pc = 0x44D180u;
            // 0x44d180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D184u;
        goto label_44d184;
    }
    ctx->pc = 0x44D17Cu;
    SET_GPR_U32(ctx, 31, 0x44D184u);
    ctx->pc = 0x44D180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D17Cu;
            // 0x44d180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D184u; }
        if (ctx->pc != 0x44D184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D184u; }
        if (ctx->pc != 0x44D184u) { return; }
    }
    ctx->pc = 0x44D184u;
label_44d184:
    // 0x44d184: 0xc66c0008  lwc1        $f12, 0x8($s3)
    ctx->pc = 0x44d184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_44d188:
    // 0x44d188: 0xc049514  jal         func_125450
label_44d18c:
    if (ctx->pc == 0x44D18Cu) {
        ctx->pc = 0x44D18Cu;
            // 0x44d18c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x44D190u;
        goto label_44d190;
    }
    ctx->pc = 0x44D188u;
    SET_GPR_U32(ctx, 31, 0x44D190u);
    ctx->pc = 0x44D18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D188u;
            // 0x44d18c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D190u; }
        if (ctx->pc != 0x44D190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D190u; }
        if (ctx->pc != 0x44D190u) { return; }
    }
    ctx->pc = 0x44D190u;
label_44d190:
    // 0x44d190: 0xc0474b6  jal         func_11D2D8
label_44d194:
    if (ctx->pc == 0x44D194u) {
        ctx->pc = 0x44D194u;
            // 0x44d194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D198u;
        goto label_44d198;
    }
    ctx->pc = 0x44D190u;
    SET_GPR_U32(ctx, 31, 0x44D198u);
    ctx->pc = 0x44D194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D190u;
            // 0x44d194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D198u; }
        if (ctx->pc != 0x44D198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D198u; }
        if (ctx->pc != 0x44D198u) { return; }
    }
    ctx->pc = 0x44D198u;
label_44d198:
    // 0x44d198: 0xc0497dc  jal         func_125F70
label_44d19c:
    if (ctx->pc == 0x44D19Cu) {
        ctx->pc = 0x44D19Cu;
            // 0x44d19c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D1A0u;
        goto label_44d1a0;
    }
    ctx->pc = 0x44D198u;
    SET_GPR_U32(ctx, 31, 0x44D1A0u);
    ctx->pc = 0x44D19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D198u;
            // 0x44d19c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D1A0u; }
        if (ctx->pc != 0x44D1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D1A0u; }
        if (ctx->pc != 0x44D1A0u) { return; }
    }
    ctx->pc = 0x44D1A0u;
label_44d1a0:
    // 0x44d1a0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x44d1a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_44d1a4:
    // 0x44d1a4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x44d1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_44d1a8:
    // 0x44d1a8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x44d1a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_44d1ac:
    // 0x44d1ac: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x44d1acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_44d1b0:
    // 0x44d1b0: 0xc0b6df0  jal         func_2DB7C0
label_44d1b4:
    if (ctx->pc == 0x44D1B4u) {
        ctx->pc = 0x44D1B4u;
            // 0x44d1b4: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x44D1B8u;
        goto label_44d1b8;
    }
    ctx->pc = 0x44D1B0u;
    SET_GPR_U32(ctx, 31, 0x44D1B8u);
    ctx->pc = 0x44D1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D1B0u;
            // 0x44d1b4: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D1B8u; }
        if (ctx->pc != 0x44D1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D1B8u; }
        if (ctx->pc != 0x44D1B8u) { return; }
    }
    ctx->pc = 0x44D1B8u;
label_44d1b8:
    // 0x44d1b8: 0xc0d46a0  jal         func_351A80
label_44d1bc:
    if (ctx->pc == 0x44D1BCu) {
        ctx->pc = 0x44D1BCu;
            // 0x44d1bc: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x44D1C0u;
        goto label_44d1c0;
    }
    ctx->pc = 0x44D1B8u;
    SET_GPR_U32(ctx, 31, 0x44D1C0u);
    ctx->pc = 0x44D1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D1B8u;
            // 0x44d1bc: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D1C0u; }
        if (ctx->pc != 0x44D1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D1C0u; }
        if (ctx->pc != 0x44D1C0u) { return; }
    }
    ctx->pc = 0x44D1C0u;
label_44d1c0:
    // 0x44d1c0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_44d1c4:
    if (ctx->pc == 0x44D1C4u) {
        ctx->pc = 0x44D1C4u;
            // 0x44d1c4: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->pc = 0x44D1C8u;
        goto label_44d1c8;
    }
    ctx->pc = 0x44D1C0u;
    {
        const bool branch_taken_0x44d1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d1c0) {
            ctx->pc = 0x44D1C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44D1C0u;
            // 0x44d1c4: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44D1E0u;
            goto label_44d1e0;
        }
    }
    ctx->pc = 0x44D1C8u;
label_44d1c8:
    // 0x44d1c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44d1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44d1cc:
    // 0x44d1cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x44d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_44d1d0:
    // 0x44d1d0: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x44d1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_44d1d4:
    // 0x44d1d4: 0xc0804bc  jal         func_2012F0
label_44d1d8:
    if (ctx->pc == 0x44D1D8u) {
        ctx->pc = 0x44D1D8u;
            // 0x44d1d8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x44D1DCu;
        goto label_44d1dc;
    }
    ctx->pc = 0x44D1D4u;
    SET_GPR_U32(ctx, 31, 0x44D1DCu);
    ctx->pc = 0x44D1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D1D4u;
            // 0x44d1d8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D1DCu; }
        if (ctx->pc != 0x44D1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D1DCu; }
        if (ctx->pc != 0x44D1DCu) { return; }
    }
    ctx->pc = 0x44D1DCu;
label_44d1dc:
    // 0x44d1dc: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x44d1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_44d1e0:
    // 0x44d1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44d1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44d1e4:
    // 0x44d1e4: 0xc0d4698  jal         func_351A60
label_44d1e8:
    if (ctx->pc == 0x44D1E8u) {
        ctx->pc = 0x44D1E8u;
            // 0x44d1e8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x44D1ECu;
        goto label_44d1ec;
    }
    ctx->pc = 0x44D1E4u;
    SET_GPR_U32(ctx, 31, 0x44D1ECu);
    ctx->pc = 0x44D1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D1E4u;
            // 0x44d1e8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A60u;
    if (runtime->hasFunction(0x351A60u)) {
        auto targetFn = runtime->lookupFunction(0x351A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D1ECu; }
        if (ctx->pc != 0x44D1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A60_0x351a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D1ECu; }
        if (ctx->pc != 0x44D1ECu) { return; }
    }
    ctx->pc = 0x44D1ECu;
label_44d1ec:
    // 0x44d1ec: 0x8fb0007c  lw          $s0, 0x7C($sp)
    ctx->pc = 0x44d1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_44d1f0:
    // 0x44d1f0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x44d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_44d1f4:
    // 0x44d1f4: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x44d1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_44d1f8:
    // 0x44d1f8: 0xc0b6e68  jal         func_2DB9A0
label_44d1fc:
    if (ctx->pc == 0x44D1FCu) {
        ctx->pc = 0x44D1FCu;
            // 0x44d1fc: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x44D200u;
        goto label_44d200;
    }
    ctx->pc = 0x44D1F8u;
    SET_GPR_U32(ctx, 31, 0x44D200u);
    ctx->pc = 0x44D1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D1F8u;
            // 0x44d1fc: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D200u; }
        if (ctx->pc != 0x44D200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D200u; }
        if (ctx->pc != 0x44D200u) { return; }
    }
    ctx->pc = 0x44D200u;
label_44d200:
    // 0x44d200: 0xc0b6dac  jal         func_2DB6B0
label_44d204:
    if (ctx->pc == 0x44D204u) {
        ctx->pc = 0x44D204u;
            // 0x44d204: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x44D208u;
        goto label_44d208;
    }
    ctx->pc = 0x44D200u;
    SET_GPR_U32(ctx, 31, 0x44D208u);
    ctx->pc = 0x44D204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D200u;
            // 0x44d204: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D208u; }
        if (ctx->pc != 0x44D208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D208u; }
        if (ctx->pc != 0x44D208u) { return; }
    }
    ctx->pc = 0x44D208u;
label_44d208:
    // 0x44d208: 0xc0cac94  jal         func_32B250
label_44d20c:
    if (ctx->pc == 0x44D20Cu) {
        ctx->pc = 0x44D20Cu;
            // 0x44d20c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x44D210u;
        goto label_44d210;
    }
    ctx->pc = 0x44D208u;
    SET_GPR_U32(ctx, 31, 0x44D210u);
    ctx->pc = 0x44D20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D208u;
            // 0x44d20c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D210u; }
        if (ctx->pc != 0x44D210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D210u; }
        if (ctx->pc != 0x44D210u) { return; }
    }
    ctx->pc = 0x44D210u;
label_44d210:
    // 0x44d210: 0xc0cac84  jal         func_32B210
label_44d214:
    if (ctx->pc == 0x44D214u) {
        ctx->pc = 0x44D214u;
            // 0x44d214: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x44D218u;
        goto label_44d218;
    }
    ctx->pc = 0x44D210u;
    SET_GPR_U32(ctx, 31, 0x44D218u);
    ctx->pc = 0x44D214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D210u;
            // 0x44d214: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D218u; }
        if (ctx->pc != 0x44D218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D218u; }
        if (ctx->pc != 0x44D218u) { return; }
    }
    ctx->pc = 0x44D218u;
label_44d218:
    // 0x44d218: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x44d218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_44d21c:
    // 0x44d21c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x44d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_44d220:
    // 0x44d220: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x44d220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_44d224:
    // 0x44d224: 0xc0a5a68  jal         func_2969A0
label_44d228:
    if (ctx->pc == 0x44D228u) {
        ctx->pc = 0x44D228u;
            // 0x44d228: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x44D22Cu;
        goto label_44d22c;
    }
    ctx->pc = 0x44D224u;
    SET_GPR_U32(ctx, 31, 0x44D22Cu);
    ctx->pc = 0x44D228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D224u;
            // 0x44d228: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D22Cu; }
        if (ctx->pc != 0x44D22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D22Cu; }
        if (ctx->pc != 0x44D22Cu) { return; }
    }
    ctx->pc = 0x44D22Cu;
label_44d22c:
    // 0x44d22c: 0xafb00104  sw          $s0, 0x104($sp)
    ctx->pc = 0x44d22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 16));
label_44d230:
    // 0x44d230: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x44d230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_44d234:
    // 0x44d234: 0xc6260018  lwc1        $f6, 0x18($s1)
    ctx->pc = 0x44d234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_44d238:
    // 0x44d238: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x44d238u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_44d23c:
    // 0x44d23c: 0xc6250014  lwc1        $f5, 0x14($s1)
    ctx->pc = 0x44d23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_44d240:
    // 0x44d240: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x44d240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_44d244:
    // 0x44d244: 0xc6240010  lwc1        $f4, 0x10($s1)
    ctx->pc = 0x44d244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_44d248:
    // 0x44d248: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x44d248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_44d24c:
    // 0x44d24c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x44d24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44d250:
    // 0x44d250: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x44d250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44d254:
    // 0x44d254: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x44d254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44d258:
    // 0x44d258: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x44d258u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
label_44d25c:
    // 0x44d25c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x44d25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44d260:
    // 0x44d260: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x44d260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44d264:
    // 0x44d264: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x44d264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_44d268:
    // 0x44d268: 0xafa601a8  sw          $a2, 0x1A8($sp)
    ctx->pc = 0x44d268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 6));
label_44d26c:
    // 0x44d26c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x44d26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44d270:
    // 0x44d270: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44d270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44d274:
    // 0x44d274: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x44d274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_44d278:
    // 0x44d278: 0xa3a401b2  sb          $a0, 0x1B2($sp)
    ctx->pc = 0x44d278u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 434), (uint8_t)GPR_U32(ctx, 4));
label_44d27c:
    // 0x44d27c: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x44d27cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_44d280:
    // 0x44d280: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x44d280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_44d284:
    // 0x44d284: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x44d284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_44d288:
    // 0x44d288: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x44d288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_44d28c:
    // 0x44d28c: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x44d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44d290:
    // 0x44d290: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x44d290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_44d294:
    // 0x44d294: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x44d294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44d298:
    // 0x44d298: 0xa3a801b0  sb          $t0, 0x1B0($sp)
    ctx->pc = 0x44d298u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 432), (uint8_t)GPR_U32(ctx, 8));
label_44d29c:
    // 0x44d29c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x44d29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44d2a0:
    // 0x44d2a0: 0xafa701ac  sw          $a3, 0x1AC($sp)
    ctx->pc = 0x44d2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 7));
label_44d2a4:
    // 0x44d2a4: 0xe7a20160  swc1        $f2, 0x160($sp)
    ctx->pc = 0x44d2a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_44d2a8:
    // 0x44d2a8: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x44d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_44d2ac:
    // 0x44d2ac: 0xe7a10164  swc1        $f1, 0x164($sp)
    ctx->pc = 0x44d2acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_44d2b0:
    // 0x44d2b0: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x44d2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_44d2b4:
    // 0x44d2b4: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x44d2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_44d2b8:
    // 0x44d2b8: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x44d2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44d2bc:
    // 0x44d2bc: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x44d2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44d2c0:
    // 0x44d2c0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x44d2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44d2c4:
    // 0x44d2c4: 0xe7a2016c  swc1        $f2, 0x16C($sp)
    ctx->pc = 0x44d2c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_44d2c8:
    // 0x44d2c8: 0xe7a10170  swc1        $f1, 0x170($sp)
    ctx->pc = 0x44d2c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_44d2cc:
    // 0x44d2cc: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x44d2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_44d2d0:
    // 0x44d2d0: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x44d2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44d2d4:
    // 0x44d2d4: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x44d2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44d2d8:
    // 0x44d2d8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x44d2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44d2dc:
    // 0x44d2dc: 0xe7a20178  swc1        $f2, 0x178($sp)
    ctx->pc = 0x44d2dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_44d2e0:
    // 0x44d2e0: 0xe7a1017c  swc1        $f1, 0x17C($sp)
    ctx->pc = 0x44d2e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_44d2e4:
    // 0x44d2e4: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x44d2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_44d2e8:
    // 0x44d2e8: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x44d2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_44d2ec:
    // 0x44d2ec: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x44d2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44d2f0:
    // 0x44d2f0: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x44d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44d2f4:
    // 0x44d2f4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x44d2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44d2f8:
    // 0x44d2f8: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x44d2f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_44d2fc:
    // 0x44d2fc: 0xe7a50114  swc1        $f5, 0x114($sp)
    ctx->pc = 0x44d2fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_44d300:
    // 0x44d300: 0xe7a60118  swc1        $f6, 0x118($sp)
    ctx->pc = 0x44d300u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_44d304:
    // 0x44d304: 0xe7a30150  swc1        $f3, 0x150($sp)
    ctx->pc = 0x44d304u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_44d308:
    // 0x44d308: 0xe7a20184  swc1        $f2, 0x184($sp)
    ctx->pc = 0x44d308u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_44d30c:
    // 0x44d30c: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x44d30cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_44d310:
    // 0x44d310: 0xc0a7a88  jal         func_29EA20
label_44d314:
    if (ctx->pc == 0x44D314u) {
        ctx->pc = 0x44D314u;
            // 0x44d314: 0xe7a00190  swc1        $f0, 0x190($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
        ctx->pc = 0x44D318u;
        goto label_44d318;
    }
    ctx->pc = 0x44D310u;
    SET_GPR_U32(ctx, 31, 0x44D318u);
    ctx->pc = 0x44D314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D310u;
            // 0x44d314: 0xe7a00190  swc1        $f0, 0x190($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D318u; }
        if (ctx->pc != 0x44D318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D318u; }
        if (ctx->pc != 0x44D318u) { return; }
    }
    ctx->pc = 0x44D318u;
label_44d318:
    // 0x44d318: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x44d318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_44d31c:
    // 0x44d31c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44d31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44d320:
    // 0x44d320: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_44d324:
    if (ctx->pc == 0x44D324u) {
        ctx->pc = 0x44D324u;
            // 0x44d324: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x44D328u;
        goto label_44d328;
    }
    ctx->pc = 0x44D320u;
    {
        const bool branch_taken_0x44d320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D320u;
            // 0x44d324: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d320) {
            ctx->pc = 0x44D370u;
            goto label_44d370;
        }
    }
    ctx->pc = 0x44D328u;
label_44d328:
    // 0x44d328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44d328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44d32c:
    // 0x44d32c: 0xc088ef4  jal         func_223BD0
label_44d330:
    if (ctx->pc == 0x44D330u) {
        ctx->pc = 0x44D330u;
            // 0x44d330: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x44D334u;
        goto label_44d334;
    }
    ctx->pc = 0x44D32Cu;
    SET_GPR_U32(ctx, 31, 0x44D334u);
    ctx->pc = 0x44D330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D32Cu;
            // 0x44d330: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D334u; }
        if (ctx->pc != 0x44D334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D334u; }
        if (ctx->pc != 0x44D334u) { return; }
    }
    ctx->pc = 0x44D334u;
label_44d334:
    // 0x44d334: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44d334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44d338:
    // 0x44d338: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44d338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44d33c:
    // 0x44d33c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x44d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_44d340:
    // 0x44d340: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x44d340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_44d344:
    // 0x44d344: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x44d344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_44d348:
    // 0x44d348: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x44d348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_44d34c:
    // 0x44d34c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44d350:
    // 0x44d350: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44d350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_44d354:
    // 0x44d354: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x44d354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_44d358:
    // 0x44d358: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x44d358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_44d35c:
    // 0x44d35c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x44d35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_44d360:
    // 0x44d360: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44d360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_44d364:
    // 0x44d364: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x44d364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_44d368:
    // 0x44d368: 0xc088b38  jal         func_222CE0
label_44d36c:
    if (ctx->pc == 0x44D36Cu) {
        ctx->pc = 0x44D36Cu;
            // 0x44d36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D370u;
        goto label_44d370;
    }
    ctx->pc = 0x44D368u;
    SET_GPR_U32(ctx, 31, 0x44D370u);
    ctx->pc = 0x44D36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D368u;
            // 0x44d36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D370u; }
        if (ctx->pc != 0x44D370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D370u; }
        if (ctx->pc != 0x44D370u) { return; }
    }
    ctx->pc = 0x44D370u;
label_44d370:
    // 0x44d370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44d370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44d374:
    // 0x44d374: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x44d374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_44d378:
    // 0x44d378: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44d378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44d37c:
    // 0x44d37c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x44d37cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44d380:
    // 0x44d380: 0xc08914c  jal         func_224530
label_44d384:
    if (ctx->pc == 0x44D384u) {
        ctx->pc = 0x44D384u;
            // 0x44d384: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x44D388u;
        goto label_44d388;
    }
    ctx->pc = 0x44D380u;
    SET_GPR_U32(ctx, 31, 0x44D388u);
    ctx->pc = 0x44D384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D380u;
            // 0x44d384: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D388u; }
        if (ctx->pc != 0x44D388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D388u; }
        if (ctx->pc != 0x44D388u) { return; }
    }
    ctx->pc = 0x44D388u;
label_44d388:
    // 0x44d388: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x44d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44d38c:
    // 0x44d38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44d38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44d390:
    // 0x44d390: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x44d390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44d394:
    // 0x44d394: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x44d394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_44d398:
    // 0x44d398: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x44d398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44d39c:
    // 0x44d39c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x44d39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_44d3a0:
    // 0x44d3a0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x44d3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_44d3a4:
    // 0x44d3a4: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x44d3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_44d3a8:
    // 0x44d3a8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x44d3a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_44d3ac:
    // 0x44d3ac: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x44d3acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_44d3b0:
    // 0x44d3b0: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x44d3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_44d3b4:
    // 0x44d3b4: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x44d3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44d3b8:
    // 0x44d3b8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x44d3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44d3bc:
    // 0x44d3bc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x44d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44d3c0:
    // 0x44d3c0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x44d3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_44d3c4:
    // 0x44d3c4: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x44d3c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_44d3c8:
    // 0x44d3c8: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x44d3c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_44d3cc:
    // 0x44d3cc: 0xc0892b0  jal         func_224AC0
label_44d3d0:
    if (ctx->pc == 0x44D3D0u) {
        ctx->pc = 0x44D3D0u;
            // 0x44d3d0: 0xe7a3008c  swc1        $f3, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x44D3D4u;
        goto label_44d3d4;
    }
    ctx->pc = 0x44D3CCu;
    SET_GPR_U32(ctx, 31, 0x44D3D4u);
    ctx->pc = 0x44D3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D3CCu;
            // 0x44d3d0: 0xe7a3008c  swc1        $f3, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D3D4u; }
        if (ctx->pc != 0x44D3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D3D4u; }
        if (ctx->pc != 0x44D3D4u) { return; }
    }
    ctx->pc = 0x44D3D4u;
label_44d3d4:
    // 0x44d3d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44d3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44d3d8:
    // 0x44d3d8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x44d3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_44d3dc:
    // 0x44d3dc: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x44d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_44d3e0:
    // 0x44d3e0: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x44d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_44d3e4:
    // 0x44d3e4: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x44d3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_44d3e8:
    // 0x44d3e8: 0xc0891d8  jal         func_224760
label_44d3ec:
    if (ctx->pc == 0x44D3ECu) {
        ctx->pc = 0x44D3ECu;
            // 0x44d3ec: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->pc = 0x44D3F0u;
        goto label_44d3f0;
    }
    ctx->pc = 0x44D3E8u;
    SET_GPR_U32(ctx, 31, 0x44D3F0u);
    ctx->pc = 0x44D3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D3E8u;
            // 0x44d3ec: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D3F0u; }
        if (ctx->pc != 0x44D3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D3F0u; }
        if (ctx->pc != 0x44D3F0u) { return; }
    }
    ctx->pc = 0x44D3F0u;
label_44d3f0:
    // 0x44d3f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44d3f4:
    // 0x44d3f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44d3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44d3f8:
    // 0x44d3f8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_44d3fc:
    // 0x44d3fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x44d3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_44d400:
    // 0x44d400: 0xc08c164  jal         func_230590
label_44d404:
    if (ctx->pc == 0x44D404u) {
        ctx->pc = 0x44D404u;
            // 0x44d404: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44D408u;
        goto label_44d408;
    }
    ctx->pc = 0x44D400u;
    SET_GPR_U32(ctx, 31, 0x44D408u);
    ctx->pc = 0x44D404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D400u;
            // 0x44d404: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D408u; }
        if (ctx->pc != 0x44D408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D408u; }
        if (ctx->pc != 0x44D408u) { return; }
    }
    ctx->pc = 0x44D408u;
label_44d408:
    // 0x44d408: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x44d408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_44d40c:
    // 0x44d40c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44d410:
    // 0x44d410: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x44d410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_44d414:
    // 0x44d414: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x44d414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_44d418:
    // 0x44d418: 0xc0a7a88  jal         func_29EA20
label_44d41c:
    if (ctx->pc == 0x44D41Cu) {
        ctx->pc = 0x44D41Cu;
            // 0x44d41c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x44D420u;
        goto label_44d420;
    }
    ctx->pc = 0x44D418u;
    SET_GPR_U32(ctx, 31, 0x44D420u);
    ctx->pc = 0x44D41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D418u;
            // 0x44d41c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D420u; }
        if (ctx->pc != 0x44D420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D420u; }
        if (ctx->pc != 0x44D420u) { return; }
    }
    ctx->pc = 0x44D420u;
label_44d420:
    // 0x44d420: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x44d420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_44d424:
    // 0x44d424: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44d424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44d428:
    // 0x44d428: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_44d42c:
    if (ctx->pc == 0x44D42Cu) {
        ctx->pc = 0x44D42Cu;
            // 0x44d42c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x44D430u;
        goto label_44d430;
    }
    ctx->pc = 0x44D428u;
    {
        const bool branch_taken_0x44d428 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D428u;
            // 0x44d42c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d428) {
            ctx->pc = 0x44D44Cu;
            goto label_44d44c;
        }
    }
    ctx->pc = 0x44D430u;
label_44d430:
    // 0x44d430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44d430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44d434:
    // 0x44d434: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44d434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44d438:
    // 0x44d438: 0xc0869d0  jal         func_21A740
label_44d43c:
    if (ctx->pc == 0x44D43Cu) {
        ctx->pc = 0x44D43Cu;
            // 0x44d43c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D440u;
        goto label_44d440;
    }
    ctx->pc = 0x44D438u;
    SET_GPR_U32(ctx, 31, 0x44D440u);
    ctx->pc = 0x44D43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D438u;
            // 0x44d43c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D440u; }
        if (ctx->pc != 0x44D440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D440u; }
        if (ctx->pc != 0x44D440u) { return; }
    }
    ctx->pc = 0x44D440u;
label_44d440:
    // 0x44d440: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44d440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44d444:
    // 0x44d444: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x44d444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_44d448:
    // 0x44d448: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x44d448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_44d44c:
    // 0x44d44c: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x44d44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_44d450:
    // 0x44d450: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44d450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44d454:
    // 0x44d454: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_44d458:
    // 0x44d458: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x44d458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_44d45c:
    // 0x44d45c: 0xc08c650  jal         func_231940
label_44d460:
    if (ctx->pc == 0x44D460u) {
        ctx->pc = 0x44D460u;
            // 0x44d460: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D464u;
        goto label_44d464;
    }
    ctx->pc = 0x44D45Cu;
    SET_GPR_U32(ctx, 31, 0x44D464u);
    ctx->pc = 0x44D460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D45Cu;
            // 0x44d460: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D464u; }
        if (ctx->pc != 0x44D464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D464u; }
        if (ctx->pc != 0x44D464u) { return; }
    }
    ctx->pc = 0x44D464u;
label_44d464:
    // 0x44d464: 0xc040180  jal         func_100600
label_44d468:
    if (ctx->pc == 0x44D468u) {
        ctx->pc = 0x44D468u;
            // 0x44d468: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x44D46Cu;
        goto label_44d46c;
    }
    ctx->pc = 0x44D464u;
    SET_GPR_U32(ctx, 31, 0x44D46Cu);
    ctx->pc = 0x44D468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D464u;
            // 0x44d468: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D46Cu; }
        if (ctx->pc != 0x44D46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D46Cu; }
        if (ctx->pc != 0x44D46Cu) { return; }
    }
    ctx->pc = 0x44D46Cu;
label_44d46c:
    // 0x44d46c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_44d470:
    if (ctx->pc == 0x44D470u) {
        ctx->pc = 0x44D470u;
            // 0x44d470: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x44D474u;
        goto label_44d474;
    }
    ctx->pc = 0x44D46Cu;
    {
        const bool branch_taken_0x44d46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d46c) {
            ctx->pc = 0x44D470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44D46Cu;
            // 0x44d470: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44D4BCu;
            goto label_44d4bc;
        }
    }
    ctx->pc = 0x44D474u;
label_44d474:
    // 0x44d474: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x44d474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_44d478:
    // 0x44d478: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x44d478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_44d47c:
    // 0x44d47c: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x44d47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_44d480:
    // 0x44d480: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x44d480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_44d484:
    // 0x44d484: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x44d484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_44d488:
    // 0x44d488: 0x2463d8b0  addiu       $v1, $v1, -0x2750
    ctx->pc = 0x44d488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957232));
label_44d48c:
    // 0x44d48c: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x44d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_44d490:
    // 0x44d490: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44d490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_44d494:
    // 0x44d494: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x44d494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_44d498:
    // 0x44d498: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x44d498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_44d49c:
    // 0x44d49c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x44d49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_44d4a0:
    // 0x44d4a0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x44d4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_44d4a4:
    // 0x44d4a4: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x44d4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_44d4a8:
    // 0x44d4a8: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x44d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_44d4ac:
    // 0x44d4ac: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x44d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_44d4b0:
    // 0x44d4b0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x44d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_44d4b4:
    // 0x44d4b4: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x44d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_44d4b8:
    // 0x44d4b8: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x44d4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_44d4bc:
    // 0x44d4bc: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x44d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_44d4c0:
    // 0x44d4c0: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x44d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_44d4c4:
    // 0x44d4c4: 0x2402f9fb  addiu       $v0, $zero, -0x605
    ctx->pc = 0x44d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965755));
label_44d4c8:
    // 0x44d4c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x44d4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_44d4cc:
    // 0x44d4cc: 0x34420604  ori         $v0, $v0, 0x604
    ctx->pc = 0x44d4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
label_44d4d0:
    // 0x44d4d0: 0xc040180  jal         func_100600
label_44d4d4:
    if (ctx->pc == 0x44D4D4u) {
        ctx->pc = 0x44D4D4u;
            // 0x44d4d4: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x44D4D8u;
        goto label_44d4d8;
    }
    ctx->pc = 0x44D4D0u;
    SET_GPR_U32(ctx, 31, 0x44D4D8u);
    ctx->pc = 0x44D4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D4D0u;
            // 0x44d4d4: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D4D8u; }
        if (ctx->pc != 0x44D4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D4D8u; }
        if (ctx->pc != 0x44D4D8u) { return; }
    }
    ctx->pc = 0x44D4D8u;
label_44d4d8:
    // 0x44d4d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44d4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44d4dc:
    // 0x44d4dc: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_44d4e0:
    if (ctx->pc == 0x44D4E0u) {
        ctx->pc = 0x44D4E4u;
        goto label_44d4e4;
    }
    ctx->pc = 0x44D4DCu;
    {
        const bool branch_taken_0x44d4dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d4dc) {
            ctx->pc = 0x44D560u;
            goto label_44d560;
        }
    }
    ctx->pc = 0x44D4E4u;
label_44d4e4:
    // 0x44d4e4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x44d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_44d4e8:
    // 0x44d4e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44d4ec:
    // 0x44d4ec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x44d4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_44d4f0:
    // 0x44d4f0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x44d4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44d4f4:
    // 0x44d4f4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x44d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_44d4f8:
    // 0x44d4f8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x44d4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_44d4fc:
    // 0x44d4fc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x44d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_44d500:
    // 0x44d500: 0xc040138  jal         func_1004E0
label_44d504:
    if (ctx->pc == 0x44D504u) {
        ctx->pc = 0x44D504u;
            // 0x44d504: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x44D508u;
        goto label_44d508;
    }
    ctx->pc = 0x44D500u;
    SET_GPR_U32(ctx, 31, 0x44D508u);
    ctx->pc = 0x44D504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D500u;
            // 0x44d504: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D508u; }
        if (ctx->pc != 0x44D508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D508u; }
        if (ctx->pc != 0x44D508u) { return; }
    }
    ctx->pc = 0x44D508u;
label_44d508:
    // 0x44d508: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x44d508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_44d50c:
    // 0x44d50c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44d50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44d510:
    // 0x44d510: 0xc040138  jal         func_1004E0
label_44d514:
    if (ctx->pc == 0x44D514u) {
        ctx->pc = 0x44D514u;
            // 0x44d514: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x44D518u;
        goto label_44d518;
    }
    ctx->pc = 0x44D510u;
    SET_GPR_U32(ctx, 31, 0x44D518u);
    ctx->pc = 0x44D514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D510u;
            // 0x44d514: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D518u; }
        if (ctx->pc != 0x44D518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D518u; }
        if (ctx->pc != 0x44D518u) { return; }
    }
    ctx->pc = 0x44D518u;
label_44d518:
    // 0x44d518: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x44d518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_44d51c:
    // 0x44d51c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x44d51cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_44d520:
    // 0x44d520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44d520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44d524:
    // 0x44d524: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x44d524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_44d528:
    // 0x44d528: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x44d528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_44d52c:
    // 0x44d52c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x44d52cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_44d530:
    // 0x44d530: 0xc040840  jal         func_102100
label_44d534:
    if (ctx->pc == 0x44D534u) {
        ctx->pc = 0x44D534u;
            // 0x44d534: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44D538u;
        goto label_44d538;
    }
    ctx->pc = 0x44D530u;
    SET_GPR_U32(ctx, 31, 0x44D538u);
    ctx->pc = 0x44D534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D530u;
            // 0x44d534: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D538u; }
        if (ctx->pc != 0x44D538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D538u; }
        if (ctx->pc != 0x44D538u) { return; }
    }
    ctx->pc = 0x44D538u;
label_44d538:
    // 0x44d538: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x44d538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_44d53c:
    // 0x44d53c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x44d53cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44d540:
    // 0x44d540: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x44d540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_44d544:
    // 0x44d544: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x44d544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_44d548:
    // 0x44d548: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x44d548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_44d54c:
    // 0x44d54c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x44d54cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_44d550:
    // 0x44d550: 0x0  nop
    ctx->pc = 0x44d550u;
    // NOP
label_44d554:
    // 0x44d554: 0x1860fffa  blez        $v1, . + 4 + (-0x6 << 2)
label_44d558:
    if (ctx->pc == 0x44D558u) {
        ctx->pc = 0x44D55Cu;
        goto label_44d55c;
    }
    ctx->pc = 0x44D554u;
    {
        const bool branch_taken_0x44d554 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x44d554) {
            ctx->pc = 0x44D540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44d540;
        }
    }
    ctx->pc = 0x44D55Cu;
label_44d55c:
    // 0x44d55c: 0x0  nop
    ctx->pc = 0x44d55cu;
    // NOP
label_44d560:
    // 0x44d560: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x44d560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_44d564:
    // 0x44d564: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x44d564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44d568:
    // 0x44d568: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x44d568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_44d56c:
    // 0x44d56c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x44d56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44d570:
    // 0x44d570: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x44d570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44d574:
    // 0x44d574: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x44d574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44d578:
    // 0x44d578: 0xc0e7d2c  jal         func_39F4B0
label_44d57c:
    if (ctx->pc == 0x44D57Cu) {
        ctx->pc = 0x44D57Cu;
            // 0x44d57c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D580u;
        goto label_44d580;
    }
    ctx->pc = 0x44D578u;
    SET_GPR_U32(ctx, 31, 0x44D580u);
    ctx->pc = 0x44D57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D578u;
            // 0x44d57c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D580u; }
        if (ctx->pc != 0x44D580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D580u; }
        if (ctx->pc != 0x44D580u) { return; }
    }
    ctx->pc = 0x44D580u;
label_44d580:
    // 0x44d580: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x44d580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_44d584:
    // 0x44d584: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x44d584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_44d588:
    // 0x44d588: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44d588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44d58c:
    // 0x44d58c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x44d58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_44d590:
    // 0x44d590: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x44d590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_44d594:
    // 0x44d594: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x44d594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_44d598:
    // 0x44d598: 0xae2400b0  sw          $a0, 0xB0($s1)
    ctx->pc = 0x44d598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 4));
label_44d59c:
    // 0x44d59c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x44d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_44d5a0:
    // 0x44d5a0: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x44d5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_44d5a4:
    // 0x44d5a4: 0x50830024  beql        $a0, $v1, . + 4 + (0x24 << 2)
label_44d5a8:
    if (ctx->pc == 0x44D5A8u) {
        ctx->pc = 0x44D5A8u;
            // 0x44d5a8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x44D5ACu;
        goto label_44d5ac;
    }
    ctx->pc = 0x44D5A4u;
    {
        const bool branch_taken_0x44d5a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x44d5a4) {
            ctx->pc = 0x44D5A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44D5A4u;
            // 0x44d5a8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44D638u;
            goto label_44d638;
        }
    }
    ctx->pc = 0x44D5ACu;
label_44d5ac:
    // 0x44d5ac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x44d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_44d5b0:
    // 0x44d5b0: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
label_44d5b4:
    if (ctx->pc == 0x44D5B4u) {
        ctx->pc = 0x44D5B4u;
            // 0x44d5b4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x44D5B8u;
        goto label_44d5b8;
    }
    ctx->pc = 0x44D5B0u;
    {
        const bool branch_taken_0x44d5b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x44d5b0) {
            ctx->pc = 0x44D5B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44D5B0u;
            // 0x44d5b4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44D5C0u;
            goto label_44d5c0;
        }
    }
    ctx->pc = 0x44D5B8u;
label_44d5b8:
    // 0x44d5b8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_44d5bc:
    if (ctx->pc == 0x44D5BCu) {
        ctx->pc = 0x44D5BCu;
            // 0x44d5bc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x44D5C0u;
        goto label_44d5c0;
    }
    ctx->pc = 0x44D5B8u;
    {
        const bool branch_taken_0x44d5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D5B8u;
            // 0x44d5bc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d5b8) {
            ctx->pc = 0x44D6B0u;
            goto label_44d6b0;
        }
    }
    ctx->pc = 0x44D5C0u;
label_44d5c0:
    // 0x44d5c0: 0xc040180  jal         func_100600
label_44d5c4:
    if (ctx->pc == 0x44D5C4u) {
        ctx->pc = 0x44D5C8u;
        goto label_44d5c8;
    }
    ctx->pc = 0x44D5C0u;
    SET_GPR_U32(ctx, 31, 0x44D5C8u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D5C8u; }
        if (ctx->pc != 0x44D5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D5C8u; }
        if (ctx->pc != 0x44D5C8u) { return; }
    }
    ctx->pc = 0x44D5C8u;
label_44d5c8:
    // 0x44d5c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44d5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44d5cc:
    // 0x44d5cc: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_44d5d0:
    if (ctx->pc == 0x44D5D0u) {
        ctx->pc = 0x44D5D0u;
            // 0x44d5d0: 0x3c034461  lui         $v1, 0x4461 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
        ctx->pc = 0x44D5D4u;
        goto label_44d5d4;
    }
    ctx->pc = 0x44D5CCu;
    {
        const bool branch_taken_0x44d5cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d5cc) {
            ctx->pc = 0x44D5D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44D5CCu;
            // 0x44d5d0: 0x3c034461  lui         $v1, 0x4461 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44D60Cu;
            goto label_44d60c;
        }
    }
    ctx->pc = 0x44D5D4u;
label_44d5d4:
    // 0x44d5d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44d5d8:
    // 0x44d5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44d5dc:
    // 0x44d5dc: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x44d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_44d5e0:
    // 0x44d5e0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x44d5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_44d5e4:
    // 0x44d5e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44d5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_44d5e8:
    // 0x44d5e8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x44d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_44d5ec:
    // 0x44d5ec: 0xc040138  jal         func_1004E0
label_44d5f0:
    if (ctx->pc == 0x44D5F0u) {
        ctx->pc = 0x44D5F0u;
            // 0x44d5f0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x44D5F4u;
        goto label_44d5f4;
    }
    ctx->pc = 0x44D5ECu;
    SET_GPR_U32(ctx, 31, 0x44D5F4u);
    ctx->pc = 0x44D5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D5ECu;
            // 0x44d5f0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D5F4u; }
        if (ctx->pc != 0x44D5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D5F4u; }
        if (ctx->pc != 0x44D5F4u) { return; }
    }
    ctx->pc = 0x44D5F4u;
label_44d5f4:
    // 0x44d5f4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x44d5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_44d5f8:
    // 0x44d5f8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x44d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_44d5fc:
    // 0x44d5fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44d5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44d600:
    // 0x44d600: 0xc04a576  jal         func_1295D8
label_44d604:
    if (ctx->pc == 0x44D604u) {
        ctx->pc = 0x44D604u;
            // 0x44d604: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x44D608u;
        goto label_44d608;
    }
    ctx->pc = 0x44D600u;
    SET_GPR_U32(ctx, 31, 0x44D608u);
    ctx->pc = 0x44D604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D600u;
            // 0x44d604: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D608u; }
        if (ctx->pc != 0x44D608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D608u; }
        if (ctx->pc != 0x44D608u) { return; }
    }
    ctx->pc = 0x44D608u;
label_44d608:
    // 0x44d608: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x44d608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_44d60c:
    // 0x44d60c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x44d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_44d610:
    // 0x44d610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44d610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44d614:
    // 0x44d614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44d614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44d618:
    // 0x44d618: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x44d618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44d61c:
    // 0x44d61c: 0x24060fae  addiu       $a2, $zero, 0xFAE
    ctx->pc = 0x44d61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4014));
label_44d620:
    // 0x44d620: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x44d620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_44d624:
    // 0x44d624: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x44d624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44d628:
    // 0x44d628: 0xc122cd8  jal         func_48B360
label_44d62c:
    if (ctx->pc == 0x44D62Cu) {
        ctx->pc = 0x44D62Cu;
            // 0x44d62c: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
        ctx->pc = 0x44D630u;
        goto label_44d630;
    }
    ctx->pc = 0x44D628u;
    SET_GPR_U32(ctx, 31, 0x44D630u);
    ctx->pc = 0x44D62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D628u;
            // 0x44d62c: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D630u; }
        if (ctx->pc != 0x44D630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D630u; }
        if (ctx->pc != 0x44D630u) { return; }
    }
    ctx->pc = 0x44D630u;
label_44d630:
    // 0x44d630: 0x1000003d  b           . + 4 + (0x3D << 2)
label_44d634:
    if (ctx->pc == 0x44D634u) {
        ctx->pc = 0x44D634u;
            // 0x44d634: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x44D638u;
        goto label_44d638;
    }
    ctx->pc = 0x44D630u;
    {
        const bool branch_taken_0x44d630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D630u;
            // 0x44d634: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d630) {
            ctx->pc = 0x44D728u;
            goto label_44d728;
        }
    }
    ctx->pc = 0x44D638u;
label_44d638:
    // 0x44d638: 0xc040180  jal         func_100600
label_44d63c:
    if (ctx->pc == 0x44D63Cu) {
        ctx->pc = 0x44D640u;
        goto label_44d640;
    }
    ctx->pc = 0x44D638u;
    SET_GPR_U32(ctx, 31, 0x44D640u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D640u; }
        if (ctx->pc != 0x44D640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D640u; }
        if (ctx->pc != 0x44D640u) { return; }
    }
    ctx->pc = 0x44D640u;
label_44d640:
    // 0x44d640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44d640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44d644:
    // 0x44d644: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_44d648:
    if (ctx->pc == 0x44D648u) {
        ctx->pc = 0x44D648u;
            // 0x44d648: 0x3c034461  lui         $v1, 0x4461 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
        ctx->pc = 0x44D64Cu;
        goto label_44d64c;
    }
    ctx->pc = 0x44D644u;
    {
        const bool branch_taken_0x44d644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d644) {
            ctx->pc = 0x44D648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44D644u;
            // 0x44d648: 0x3c034461  lui         $v1, 0x4461 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44D684u;
            goto label_44d684;
        }
    }
    ctx->pc = 0x44D64Cu;
label_44d64c:
    // 0x44d64c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44d650:
    // 0x44d650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44d654:
    // 0x44d654: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x44d654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_44d658:
    // 0x44d658: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x44d658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_44d65c:
    // 0x44d65c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44d65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_44d660:
    // 0x44d660: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x44d660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_44d664:
    // 0x44d664: 0xc040138  jal         func_1004E0
label_44d668:
    if (ctx->pc == 0x44D668u) {
        ctx->pc = 0x44D668u;
            // 0x44d668: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x44D66Cu;
        goto label_44d66c;
    }
    ctx->pc = 0x44D664u;
    SET_GPR_U32(ctx, 31, 0x44D66Cu);
    ctx->pc = 0x44D668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D664u;
            // 0x44d668: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D66Cu; }
        if (ctx->pc != 0x44D66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D66Cu; }
        if (ctx->pc != 0x44D66Cu) { return; }
    }
    ctx->pc = 0x44D66Cu;
label_44d66c:
    // 0x44d66c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x44d66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_44d670:
    // 0x44d670: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x44d670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_44d674:
    // 0x44d674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44d674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44d678:
    // 0x44d678: 0xc04a576  jal         func_1295D8
label_44d67c:
    if (ctx->pc == 0x44D67Cu) {
        ctx->pc = 0x44D67Cu;
            // 0x44d67c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x44D680u;
        goto label_44d680;
    }
    ctx->pc = 0x44D678u;
    SET_GPR_U32(ctx, 31, 0x44D680u);
    ctx->pc = 0x44D67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D678u;
            // 0x44d67c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D680u; }
        if (ctx->pc != 0x44D680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D680u; }
        if (ctx->pc != 0x44D680u) { return; }
    }
    ctx->pc = 0x44D680u;
label_44d680:
    // 0x44d680: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x44d680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_44d684:
    // 0x44d684: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x44d684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_44d688:
    // 0x44d688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44d688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44d68c:
    // 0x44d68c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44d68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44d690:
    // 0x44d690: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x44d690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44d694:
    // 0x44d694: 0x240617ae  addiu       $a2, $zero, 0x17AE
    ctx->pc = 0x44d694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6062));
label_44d698:
    // 0x44d698: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x44d698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_44d69c:
    // 0x44d69c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x44d69cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44d6a0:
    // 0x44d6a0: 0xc122cd8  jal         func_48B360
label_44d6a4:
    if (ctx->pc == 0x44D6A4u) {
        ctx->pc = 0x44D6A4u;
            // 0x44d6a4: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
        ctx->pc = 0x44D6A8u;
        goto label_44d6a8;
    }
    ctx->pc = 0x44D6A0u;
    SET_GPR_U32(ctx, 31, 0x44D6A8u);
    ctx->pc = 0x44D6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D6A0u;
            // 0x44d6a4: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D6A8u; }
        if (ctx->pc != 0x44D6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D6A8u; }
        if (ctx->pc != 0x44D6A8u) { return; }
    }
    ctx->pc = 0x44D6A8u;
label_44d6a8:
    // 0x44d6a8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_44d6ac:
    if (ctx->pc == 0x44D6ACu) {
        ctx->pc = 0x44D6B0u;
        goto label_44d6b0;
    }
    ctx->pc = 0x44D6A8u;
    {
        const bool branch_taken_0x44d6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d6a8) {
            ctx->pc = 0x44D724u;
            goto label_44d724;
        }
    }
    ctx->pc = 0x44D6B0u;
label_44d6b0:
    // 0x44d6b0: 0xc040180  jal         func_100600
label_44d6b4:
    if (ctx->pc == 0x44D6B4u) {
        ctx->pc = 0x44D6B8u;
        goto label_44d6b8;
    }
    ctx->pc = 0x44D6B0u;
    SET_GPR_U32(ctx, 31, 0x44D6B8u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D6B8u; }
        if (ctx->pc != 0x44D6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D6B8u; }
        if (ctx->pc != 0x44D6B8u) { return; }
    }
    ctx->pc = 0x44D6B8u;
label_44d6b8:
    // 0x44d6b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44d6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44d6bc:
    // 0x44d6bc: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_44d6c0:
    if (ctx->pc == 0x44D6C0u) {
        ctx->pc = 0x44D6C0u;
            // 0x44d6c0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x44D6C4u;
        goto label_44d6c4;
    }
    ctx->pc = 0x44D6BCu;
    {
        const bool branch_taken_0x44d6bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d6bc) {
            ctx->pc = 0x44D6C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44D6BCu;
            // 0x44d6c0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44D6FCu;
            goto label_44d6fc;
        }
    }
    ctx->pc = 0x44D6C4u;
label_44d6c4:
    // 0x44d6c4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44d6c8:
    // 0x44d6c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44d6cc:
    // 0x44d6cc: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x44d6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_44d6d0:
    // 0x44d6d0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x44d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_44d6d4:
    // 0x44d6d4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44d6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_44d6d8:
    // 0x44d6d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x44d6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_44d6dc:
    // 0x44d6dc: 0xc040138  jal         func_1004E0
label_44d6e0:
    if (ctx->pc == 0x44D6E0u) {
        ctx->pc = 0x44D6E0u;
            // 0x44d6e0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x44D6E4u;
        goto label_44d6e4;
    }
    ctx->pc = 0x44D6DCu;
    SET_GPR_U32(ctx, 31, 0x44D6E4u);
    ctx->pc = 0x44D6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D6DCu;
            // 0x44d6e0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D6E4u; }
        if (ctx->pc != 0x44D6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D6E4u; }
        if (ctx->pc != 0x44D6E4u) { return; }
    }
    ctx->pc = 0x44D6E4u;
label_44d6e4:
    // 0x44d6e4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x44d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_44d6e8:
    // 0x44d6e8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x44d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_44d6ec:
    // 0x44d6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44d6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44d6f0:
    // 0x44d6f0: 0xc04a576  jal         func_1295D8
label_44d6f4:
    if (ctx->pc == 0x44D6F4u) {
        ctx->pc = 0x44D6F4u;
            // 0x44d6f4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x44D6F8u;
        goto label_44d6f8;
    }
    ctx->pc = 0x44D6F0u;
    SET_GPR_U32(ctx, 31, 0x44D6F8u);
    ctx->pc = 0x44D6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D6F0u;
            // 0x44d6f4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D6F8u; }
        if (ctx->pc != 0x44D6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D6F8u; }
        if (ctx->pc != 0x44D6F8u) { return; }
    }
    ctx->pc = 0x44D6F8u;
label_44d6f8:
    // 0x44d6f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x44d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_44d6fc:
    // 0x44d6fc: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x44d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_44d700:
    // 0x44d700: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x44d700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_44d704:
    // 0x44d704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44d704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44d708:
    // 0x44d708: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x44d708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_44d70c:
    // 0x44d70c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44d70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44d710:
    // 0x44d710: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x44d710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44d714:
    // 0x44d714: 0x344601ae  ori         $a2, $v0, 0x1AE
    ctx->pc = 0x44d714u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
label_44d718:
    // 0x44d718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x44d718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44d71c:
    // 0x44d71c: 0xc122cd8  jal         func_48B360
label_44d720:
    if (ctx->pc == 0x44D720u) {
        ctx->pc = 0x44D720u;
            // 0x44d720: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
        ctx->pc = 0x44D724u;
        goto label_44d724;
    }
    ctx->pc = 0x44D71Cu;
    SET_GPR_U32(ctx, 31, 0x44D724u);
    ctx->pc = 0x44D720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D71Cu;
            // 0x44d720: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D724u; }
        if (ctx->pc != 0x44D724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D724u; }
        if (ctx->pc != 0x44D724u) { return; }
    }
    ctx->pc = 0x44D724u;
label_44d724:
    // 0x44d724: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x44d724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_44d728:
    // 0x44d728: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x44d728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_44d72c:
    // 0x44d72c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x44d72cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44d730:
    // 0x44d730: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x44d730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_44d734:
    // 0x44d734: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x44d734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44d738:
    // 0x44d738: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x44d738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44d73c:
    // 0x44d73c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x44d73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44d740:
    // 0x44d740: 0x3e00008  jr          $ra
label_44d744:
    if (ctx->pc == 0x44D744u) {
        ctx->pc = 0x44D744u;
            // 0x44d744: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x44D748u;
        goto label_44d748;
    }
    ctx->pc = 0x44D740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44D744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D740u;
            // 0x44d744: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44D748u;
label_44d748:
    // 0x44d748: 0x0  nop
    ctx->pc = 0x44d748u;
    // NOP
label_44d74c:
    // 0x44d74c: 0x0  nop
    ctx->pc = 0x44d74cu;
    // NOP
label_44d750:
    // 0x44d750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44d750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44d754:
    // 0x44d754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44d754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44d758:
    // 0x44d758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44d758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44d75c:
    // 0x44d75c: 0xc0e3580  jal         func_38D600
label_44d760:
    if (ctx->pc == 0x44D760u) {
        ctx->pc = 0x44D760u;
            // 0x44d760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D764u;
        goto label_44d764;
    }
    ctx->pc = 0x44D75Cu;
    SET_GPR_U32(ctx, 31, 0x44D764u);
    ctx->pc = 0x44D760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D75Cu;
            // 0x44d760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D764u; }
        if (ctx->pc != 0x44D764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D764u; }
        if (ctx->pc != 0x44D764u) { return; }
    }
    ctx->pc = 0x44D764u;
label_44d764:
    // 0x44d764: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44d764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44d768:
    // 0x44d768: 0x3c0443b4  lui         $a0, 0x43B4
    ctx->pc = 0x44d768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17332 << 16));
label_44d76c:
    // 0x44d76c: 0xae06008c  sw          $a2, 0x8C($s0)
    ctx->pc = 0x44d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 6));
label_44d770:
    // 0x44d770: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x44d770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_44d774:
    // 0x44d774: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x44d774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_44d778:
    // 0x44d778: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x44d778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44d77c:
    // 0x44d77c: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x44d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_44d780:
    // 0x44d780: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x44d780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_44d784:
    // 0x44d784: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x44d784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_44d788:
    // 0x44d788: 0xa20500cc  sb          $a1, 0xCC($s0)
    ctx->pc = 0x44d788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 5));
label_44d78c:
    // 0x44d78c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x44d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_44d790:
    // 0x44d790: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x44d790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_44d794:
    // 0x44d794: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x44d794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_44d798:
    // 0x44d798: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x44d798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_44d79c:
    // 0x44d79c: 0x24a55f60  addiu       $a1, $a1, 0x5F60
    ctx->pc = 0x44d79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24416));
label_44d7a0:
    // 0x44d7a0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x44d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_44d7a4:
    // 0x44d7a4: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x44d7a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_44d7a8:
    // 0x44d7a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x44d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_44d7ac:
    // 0x44d7ac: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x44d7acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_44d7b0:
    // 0x44d7b0: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x44d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_44d7b4:
    // 0x44d7b4: 0xa2060064  sb          $a2, 0x64($s0)
    ctx->pc = 0x44d7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 6));
label_44d7b8:
    // 0x44d7b8: 0xa2060065  sb          $a2, 0x65($s0)
    ctx->pc = 0x44d7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 6));
label_44d7bc:
    // 0x44d7bc: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x44d7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_44d7c0:
    // 0x44d7c0: 0xa2040069  sb          $a0, 0x69($s0)
    ctx->pc = 0x44d7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 4));
label_44d7c4:
    // 0x44d7c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44d7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44d7c8:
    // 0x44d7c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44d7c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44d7cc:
    // 0x44d7cc: 0x3e00008  jr          $ra
label_44d7d0:
    if (ctx->pc == 0x44D7D0u) {
        ctx->pc = 0x44D7D0u;
            // 0x44d7d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44D7D4u;
        goto label_44d7d4;
    }
    ctx->pc = 0x44D7CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44D7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D7CCu;
            // 0x44d7d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44D7D4u;
label_44d7d4:
    // 0x44d7d4: 0x0  nop
    ctx->pc = 0x44d7d4u;
    // NOP
label_44d7d8:
    // 0x44d7d8: 0x0  nop
    ctx->pc = 0x44d7d8u;
    // NOP
label_44d7dc:
    // 0x44d7dc: 0x0  nop
    ctx->pc = 0x44d7dcu;
    // NOP
label_44d7e0:
    // 0x44d7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44d7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44d7e4:
    // 0x44d7e4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x44d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_44d7e8:
    // 0x44d7e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44d7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44d7ec:
    // 0x44d7ec: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x44d7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_44d7f0:
    // 0x44d7f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44d7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44d7f4:
    // 0x44d7f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44d7f8:
    // 0x44d7f8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x44d7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_44d7fc:
    // 0x44d7fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44d7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44d800:
    // 0x44d800: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44d800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44d804:
    // 0x44d804: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x44d804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_44d808:
    // 0x44d808: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_44d80c:
    // 0x44d80c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x44d80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_44d810:
    // 0x44d810: 0xc08bff0  jal         func_22FFC0
label_44d814:
    if (ctx->pc == 0x44D814u) {
        ctx->pc = 0x44D814u;
            // 0x44d814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D818u;
        goto label_44d818;
    }
    ctx->pc = 0x44D810u;
    SET_GPR_U32(ctx, 31, 0x44D818u);
    ctx->pc = 0x44D814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D810u;
            // 0x44d814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D818u; }
        if (ctx->pc != 0x44D818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D818u; }
        if (ctx->pc != 0x44D818u) { return; }
    }
    ctx->pc = 0x44D818u;
label_44d818:
    // 0x44d818: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x44d818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_44d81c:
    // 0x44d81c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x44d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_44d820:
    // 0x44d820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44d820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44d824:
    // 0x44d824: 0xc08914c  jal         func_224530
label_44d828:
    if (ctx->pc == 0x44D828u) {
        ctx->pc = 0x44D828u;
            // 0x44d828: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D82Cu;
        goto label_44d82c;
    }
    ctx->pc = 0x44D824u;
    SET_GPR_U32(ctx, 31, 0x44D82Cu);
    ctx->pc = 0x44D828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D824u;
            // 0x44d828: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D82Cu; }
        if (ctx->pc != 0x44D82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D82Cu; }
        if (ctx->pc != 0x44D82Cu) { return; }
    }
    ctx->pc = 0x44D82Cu;
label_44d82c:
    // 0x44d82c: 0xc0e393c  jal         func_38E4F0
label_44d830:
    if (ctx->pc == 0x44D830u) {
        ctx->pc = 0x44D830u;
            // 0x44d830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D834u;
        goto label_44d834;
    }
    ctx->pc = 0x44D82Cu;
    SET_GPR_U32(ctx, 31, 0x44D834u);
    ctx->pc = 0x44D830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D82Cu;
            // 0x44d830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D834u; }
        if (ctx->pc != 0x44D834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D834u; }
        if (ctx->pc != 0x44D834u) { return; }
    }
    ctx->pc = 0x44D834u;
label_44d834:
    // 0x44d834: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44d834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44d838:
    // 0x44d838: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x44d838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_44d83c:
    // 0x44d83c: 0xae05008c  sw          $a1, 0x8C($s0)
    ctx->pc = 0x44d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 5));
label_44d840:
    // 0x44d840: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x44d840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_44d844:
    // 0x44d844: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x44d844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_44d848:
    // 0x44d848: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x44d848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_44d84c:
    // 0x44d84c: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x44d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_44d850:
    // 0x44d850: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x44d850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_44d854:
    // 0x44d854: 0xa20500e0  sb          $a1, 0xE0($s0)
    ctx->pc = 0x44d854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 224), (uint8_t)GPR_U32(ctx, 5));
label_44d858:
    // 0x44d858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44d858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44d85c:
    // 0x44d85c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44d85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44d860:
    // 0x44d860: 0x3e00008  jr          $ra
label_44d864:
    if (ctx->pc == 0x44D864u) {
        ctx->pc = 0x44D864u;
            // 0x44d864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44D868u;
        goto label_44d868;
    }
    ctx->pc = 0x44D860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44D864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D860u;
            // 0x44d864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44D868u;
label_44d868:
    // 0x44d868: 0x0  nop
    ctx->pc = 0x44d868u;
    // NOP
label_44d86c:
    // 0x44d86c: 0x0  nop
    ctx->pc = 0x44d86cu;
    // NOP
label_44d870:
    // 0x44d870: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44d870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_44d874:
    // 0x44d874: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x44d874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_44d878:
    // 0x44d878: 0x8c660dd0  lw          $a2, 0xDD0($v1)
    ctx->pc = 0x44d878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3536)));
label_44d87c:
    // 0x44d87c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x44d87cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_44d880:
    // 0x44d880: 0x8cc60094  lw          $a2, 0x94($a2)
    ctx->pc = 0x44d880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
label_44d884:
    // 0x44d884: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44d884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_44d888:
    // 0x44d888: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x44d888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_44d88c:
    // 0x44d88c: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x44d88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_44d890:
    // 0x44d890: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x44d890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44d894:
    // 0x44d894: 0xe48000d8  swc1        $f0, 0xD8($a0)
    ctx->pc = 0x44d894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
label_44d898:
    // 0x44d898: 0x8c660dd0  lw          $a2, 0xDD0($v1)
    ctx->pc = 0x44d898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3536)));
label_44d89c:
    // 0x44d89c: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x44d89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_44d8a0:
    // 0x44d8a0: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x44d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_44d8a4:
    // 0x44d8a4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x44d8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_44d8a8:
    // 0x44d8a8: 0x8cc40094  lw          $a0, 0x94($a2)
    ctx->pc = 0x44d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
label_44d8ac:
    // 0x44d8ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x44d8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_44d8b0:
    // 0x44d8b0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x44d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44d8b4:
    // 0x44d8b4: 0x8c880030  lw          $t0, 0x30($a0)
    ctx->pc = 0x44d8b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_44d8b8:
    // 0x44d8b8: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x44d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
label_44d8bc:
    // 0x44d8bc: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x44d8bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44d8c0:
    // 0x44d8c0: 0x8c690010  lw          $t1, 0x10($v1)
    ctx->pc = 0x44d8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_44d8c4:
    // 0x44d8c4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x44d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_44d8c8:
    // 0x44d8c8: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x44d8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_44d8cc:
    // 0x44d8cc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x44d8ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_44d8d0:
    // 0x44d8d0: 0x8c6403f0  lw          $a0, 0x3F0($v1)
    ctx->pc = 0x44d8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1008)));
label_44d8d4:
    // 0x44d8d4: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x44d8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_44d8d8:
    // 0x44d8d8: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x44d8d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_44d8dc:
    // 0x44d8dc: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x44d8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_44d8e0:
    // 0x44d8e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x44d8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_44d8e4:
    // 0x44d8e4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x44d8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_44d8e8:
    // 0x44d8e8: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x44d8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_44d8ec:
    // 0x44d8ec: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x44d8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44d8f0:
    // 0x44d8f0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x44d8f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_44d8f4:
    // 0x44d8f4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x44d8f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_44d8f8:
    // 0x44d8f8: 0x1d20fff3  bgtz        $t1, . + 4 + (-0xD << 2)
label_44d8fc:
    if (ctx->pc == 0x44D8FCu) {
        ctx->pc = 0x44D8FCu;
            // 0x44d8fc: 0xa0e40020  sb          $a0, 0x20($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x44D900u;
        goto label_44d900;
    }
    ctx->pc = 0x44D8F8u;
    {
        const bool branch_taken_0x44d8f8 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x44D8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D8F8u;
            // 0x44d8fc: 0xa0e40020  sb          $a0, 0x20($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d8f8) {
            ctx->pc = 0x44D8C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44d8c8;
        }
    }
    ctx->pc = 0x44D900u;
label_44d900:
    // 0x44d900: 0x3e00008  jr          $ra
label_44d904:
    if (ctx->pc == 0x44D904u) {
        ctx->pc = 0x44D908u;
        goto label_44d908;
    }
    ctx->pc = 0x44D900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44D908u;
label_44d908:
    // 0x44d908: 0x0  nop
    ctx->pc = 0x44d908u;
    // NOP
label_44d90c:
    // 0x44d90c: 0x0  nop
    ctx->pc = 0x44d90cu;
    // NOP
label_44d910:
    // 0x44d910: 0x80b17a0  j           func_2C5E80
label_44d914:
    if (ctx->pc == 0x44D914u) {
        ctx->pc = 0x44D914u;
            // 0x44d914: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x44D918u;
        goto label_44d918;
    }
    ctx->pc = 0x44D910u;
    ctx->pc = 0x44D914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D910u;
            // 0x44d914: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E80u;
    {
        auto targetFn = runtime->lookupFunction(0x2C5E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x44D918u;
label_44d918:
    // 0x44d918: 0x0  nop
    ctx->pc = 0x44d918u;
    // NOP
label_44d91c:
    // 0x44d91c: 0x0  nop
    ctx->pc = 0x44d91cu;
    // NOP
label_44d920:
    // 0x44d920: 0x24030884  addiu       $v1, $zero, 0x884
    ctx->pc = 0x44d920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2180));
label_44d924:
    // 0x44d924: 0x3e00008  jr          $ra
label_44d928:
    if (ctx->pc == 0x44D928u) {
        ctx->pc = 0x44D928u;
            // 0x44d928: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x44D92Cu;
        goto label_44d92c;
    }
    ctx->pc = 0x44D924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44D928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D924u;
            // 0x44d928: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44D92Cu;
label_44d92c:
    // 0x44d92c: 0x0  nop
    ctx->pc = 0x44d92cu;
    // NOP
label_44d930:
    // 0x44d930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44d934:
    // 0x44d934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44d938:
    // 0x44d938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44d938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44d93c:
    // 0x44d93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44d93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44d940:
    // 0x44d940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44d940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44d944:
    // 0x44d944: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_44d948:
    if (ctx->pc == 0x44D948u) {
        ctx->pc = 0x44D948u;
            // 0x44d948: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D94Cu;
        goto label_44d94c;
    }
    ctx->pc = 0x44D944u;
    {
        const bool branch_taken_0x44d944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D944u;
            // 0x44d948: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d944) {
            ctx->pc = 0x44D9A0u;
            goto label_44d9a0;
        }
    }
    ctx->pc = 0x44D94Cu;
label_44d94c:
    // 0x44d94c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44d950:
    // 0x44d950: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44d950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_44d954:
    // 0x44d954: 0x2463dab0  addiu       $v1, $v1, -0x2550
    ctx->pc = 0x44d954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957744));
label_44d958:
    // 0x44d958: 0x2442dae8  addiu       $v0, $v0, -0x2518
    ctx->pc = 0x44d958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957800));
label_44d95c:
    // 0x44d95c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_44d960:
    // 0x44d960: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_44d964:
    if (ctx->pc == 0x44D964u) {
        ctx->pc = 0x44D964u;
            // 0x44d964: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x44D968u;
        goto label_44d968;
    }
    ctx->pc = 0x44D960u;
    {
        const bool branch_taken_0x44d960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D960u;
            // 0x44d964: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d960) {
            ctx->pc = 0x44D988u;
            goto label_44d988;
        }
    }
    ctx->pc = 0x44D968u;
label_44d968:
    // 0x44d968: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44d968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44d96c:
    // 0x44d96c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_44d970:
    // 0x44d970: 0x2463db60  addiu       $v1, $v1, -0x24A0
    ctx->pc = 0x44d970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957920));
label_44d974:
    // 0x44d974: 0x2442db98  addiu       $v0, $v0, -0x2468
    ctx->pc = 0x44d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957976));
label_44d978:
    // 0x44d978: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44d978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_44d97c:
    // 0x44d97c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44d97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44d980:
    // 0x44d980: 0xc113670  jal         func_44D9C0
label_44d984:
    if (ctx->pc == 0x44D984u) {
        ctx->pc = 0x44D984u;
            // 0x44d984: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x44D988u;
        goto label_44d988;
    }
    ctx->pc = 0x44D980u;
    SET_GPR_U32(ctx, 31, 0x44D988u);
    ctx->pc = 0x44D984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D980u;
            // 0x44d984: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44D9C0u;
    if (runtime->hasFunction(0x44D9C0u)) {
        auto targetFn = runtime->lookupFunction(0x44D9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D988u; }
        if (ctx->pc != 0x44D988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044D9C0_0x44d9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D988u; }
        if (ctx->pc != 0x44D988u) { return; }
    }
    ctx->pc = 0x44D988u;
label_44d988:
    // 0x44d988: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x44d988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_44d98c:
    // 0x44d98c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44d98cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_44d990:
    // 0x44d990: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_44d994:
    if (ctx->pc == 0x44D994u) {
        ctx->pc = 0x44D994u;
            // 0x44d994: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D998u;
        goto label_44d998;
    }
    ctx->pc = 0x44D990u;
    {
        const bool branch_taken_0x44d990 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44d990) {
            ctx->pc = 0x44D994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44D990u;
            // 0x44d994: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44D9A4u;
            goto label_44d9a4;
        }
    }
    ctx->pc = 0x44D998u;
label_44d998:
    // 0x44d998: 0xc0400a8  jal         func_1002A0
label_44d99c:
    if (ctx->pc == 0x44D99Cu) {
        ctx->pc = 0x44D99Cu;
            // 0x44d99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D9A0u;
        goto label_44d9a0;
    }
    ctx->pc = 0x44D998u;
    SET_GPR_U32(ctx, 31, 0x44D9A0u);
    ctx->pc = 0x44D99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D998u;
            // 0x44d99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D9A0u; }
        if (ctx->pc != 0x44D9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44D9A0u; }
        if (ctx->pc != 0x44D9A0u) { return; }
    }
    ctx->pc = 0x44D9A0u;
label_44d9a0:
    // 0x44d9a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44d9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44d9a4:
    // 0x44d9a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44d9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44d9a8:
    // 0x44d9a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44d9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44d9ac:
    // 0x44d9ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44d9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44d9b0:
    // 0x44d9b0: 0x3e00008  jr          $ra
label_44d9b4:
    if (ctx->pc == 0x44D9B4u) {
        ctx->pc = 0x44D9B4u;
            // 0x44d9b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44D9B8u;
        goto label_44d9b8;
    }
    ctx->pc = 0x44D9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44D9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D9B0u;
            // 0x44d9b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44D9B8u;
label_44d9b8:
    // 0x44d9b8: 0x0  nop
    ctx->pc = 0x44d9b8u;
    // NOP
label_44d9bc:
    // 0x44d9bc: 0x0  nop
    ctx->pc = 0x44d9bcu;
    // NOP
}
