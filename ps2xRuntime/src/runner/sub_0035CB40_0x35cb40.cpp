#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035CB40
// Address: 0x35cb40 - 0x35d410
void sub_0035CB40_0x35cb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CB40_0x35cb40");
#endif

    switch (ctx->pc) {
        case 0x35cb40u: goto label_35cb40;
        case 0x35cb44u: goto label_35cb44;
        case 0x35cb48u: goto label_35cb48;
        case 0x35cb4cu: goto label_35cb4c;
        case 0x35cb50u: goto label_35cb50;
        case 0x35cb54u: goto label_35cb54;
        case 0x35cb58u: goto label_35cb58;
        case 0x35cb5cu: goto label_35cb5c;
        case 0x35cb60u: goto label_35cb60;
        case 0x35cb64u: goto label_35cb64;
        case 0x35cb68u: goto label_35cb68;
        case 0x35cb6cu: goto label_35cb6c;
        case 0x35cb70u: goto label_35cb70;
        case 0x35cb74u: goto label_35cb74;
        case 0x35cb78u: goto label_35cb78;
        case 0x35cb7cu: goto label_35cb7c;
        case 0x35cb80u: goto label_35cb80;
        case 0x35cb84u: goto label_35cb84;
        case 0x35cb88u: goto label_35cb88;
        case 0x35cb8cu: goto label_35cb8c;
        case 0x35cb90u: goto label_35cb90;
        case 0x35cb94u: goto label_35cb94;
        case 0x35cb98u: goto label_35cb98;
        case 0x35cb9cu: goto label_35cb9c;
        case 0x35cba0u: goto label_35cba0;
        case 0x35cba4u: goto label_35cba4;
        case 0x35cba8u: goto label_35cba8;
        case 0x35cbacu: goto label_35cbac;
        case 0x35cbb0u: goto label_35cbb0;
        case 0x35cbb4u: goto label_35cbb4;
        case 0x35cbb8u: goto label_35cbb8;
        case 0x35cbbcu: goto label_35cbbc;
        case 0x35cbc0u: goto label_35cbc0;
        case 0x35cbc4u: goto label_35cbc4;
        case 0x35cbc8u: goto label_35cbc8;
        case 0x35cbccu: goto label_35cbcc;
        case 0x35cbd0u: goto label_35cbd0;
        case 0x35cbd4u: goto label_35cbd4;
        case 0x35cbd8u: goto label_35cbd8;
        case 0x35cbdcu: goto label_35cbdc;
        case 0x35cbe0u: goto label_35cbe0;
        case 0x35cbe4u: goto label_35cbe4;
        case 0x35cbe8u: goto label_35cbe8;
        case 0x35cbecu: goto label_35cbec;
        case 0x35cbf0u: goto label_35cbf0;
        case 0x35cbf4u: goto label_35cbf4;
        case 0x35cbf8u: goto label_35cbf8;
        case 0x35cbfcu: goto label_35cbfc;
        case 0x35cc00u: goto label_35cc00;
        case 0x35cc04u: goto label_35cc04;
        case 0x35cc08u: goto label_35cc08;
        case 0x35cc0cu: goto label_35cc0c;
        case 0x35cc10u: goto label_35cc10;
        case 0x35cc14u: goto label_35cc14;
        case 0x35cc18u: goto label_35cc18;
        case 0x35cc1cu: goto label_35cc1c;
        case 0x35cc20u: goto label_35cc20;
        case 0x35cc24u: goto label_35cc24;
        case 0x35cc28u: goto label_35cc28;
        case 0x35cc2cu: goto label_35cc2c;
        case 0x35cc30u: goto label_35cc30;
        case 0x35cc34u: goto label_35cc34;
        case 0x35cc38u: goto label_35cc38;
        case 0x35cc3cu: goto label_35cc3c;
        case 0x35cc40u: goto label_35cc40;
        case 0x35cc44u: goto label_35cc44;
        case 0x35cc48u: goto label_35cc48;
        case 0x35cc4cu: goto label_35cc4c;
        case 0x35cc50u: goto label_35cc50;
        case 0x35cc54u: goto label_35cc54;
        case 0x35cc58u: goto label_35cc58;
        case 0x35cc5cu: goto label_35cc5c;
        case 0x35cc60u: goto label_35cc60;
        case 0x35cc64u: goto label_35cc64;
        case 0x35cc68u: goto label_35cc68;
        case 0x35cc6cu: goto label_35cc6c;
        case 0x35cc70u: goto label_35cc70;
        case 0x35cc74u: goto label_35cc74;
        case 0x35cc78u: goto label_35cc78;
        case 0x35cc7cu: goto label_35cc7c;
        case 0x35cc80u: goto label_35cc80;
        case 0x35cc84u: goto label_35cc84;
        case 0x35cc88u: goto label_35cc88;
        case 0x35cc8cu: goto label_35cc8c;
        case 0x35cc90u: goto label_35cc90;
        case 0x35cc94u: goto label_35cc94;
        case 0x35cc98u: goto label_35cc98;
        case 0x35cc9cu: goto label_35cc9c;
        case 0x35cca0u: goto label_35cca0;
        case 0x35cca4u: goto label_35cca4;
        case 0x35cca8u: goto label_35cca8;
        case 0x35ccacu: goto label_35ccac;
        case 0x35ccb0u: goto label_35ccb0;
        case 0x35ccb4u: goto label_35ccb4;
        case 0x35ccb8u: goto label_35ccb8;
        case 0x35ccbcu: goto label_35ccbc;
        case 0x35ccc0u: goto label_35ccc0;
        case 0x35ccc4u: goto label_35ccc4;
        case 0x35ccc8u: goto label_35ccc8;
        case 0x35ccccu: goto label_35cccc;
        case 0x35ccd0u: goto label_35ccd0;
        case 0x35ccd4u: goto label_35ccd4;
        case 0x35ccd8u: goto label_35ccd8;
        case 0x35ccdcu: goto label_35ccdc;
        case 0x35cce0u: goto label_35cce0;
        case 0x35cce4u: goto label_35cce4;
        case 0x35cce8u: goto label_35cce8;
        case 0x35ccecu: goto label_35ccec;
        case 0x35ccf0u: goto label_35ccf0;
        case 0x35ccf4u: goto label_35ccf4;
        case 0x35ccf8u: goto label_35ccf8;
        case 0x35ccfcu: goto label_35ccfc;
        case 0x35cd00u: goto label_35cd00;
        case 0x35cd04u: goto label_35cd04;
        case 0x35cd08u: goto label_35cd08;
        case 0x35cd0cu: goto label_35cd0c;
        case 0x35cd10u: goto label_35cd10;
        case 0x35cd14u: goto label_35cd14;
        case 0x35cd18u: goto label_35cd18;
        case 0x35cd1cu: goto label_35cd1c;
        case 0x35cd20u: goto label_35cd20;
        case 0x35cd24u: goto label_35cd24;
        case 0x35cd28u: goto label_35cd28;
        case 0x35cd2cu: goto label_35cd2c;
        case 0x35cd30u: goto label_35cd30;
        case 0x35cd34u: goto label_35cd34;
        case 0x35cd38u: goto label_35cd38;
        case 0x35cd3cu: goto label_35cd3c;
        case 0x35cd40u: goto label_35cd40;
        case 0x35cd44u: goto label_35cd44;
        case 0x35cd48u: goto label_35cd48;
        case 0x35cd4cu: goto label_35cd4c;
        case 0x35cd50u: goto label_35cd50;
        case 0x35cd54u: goto label_35cd54;
        case 0x35cd58u: goto label_35cd58;
        case 0x35cd5cu: goto label_35cd5c;
        case 0x35cd60u: goto label_35cd60;
        case 0x35cd64u: goto label_35cd64;
        case 0x35cd68u: goto label_35cd68;
        case 0x35cd6cu: goto label_35cd6c;
        case 0x35cd70u: goto label_35cd70;
        case 0x35cd74u: goto label_35cd74;
        case 0x35cd78u: goto label_35cd78;
        case 0x35cd7cu: goto label_35cd7c;
        case 0x35cd80u: goto label_35cd80;
        case 0x35cd84u: goto label_35cd84;
        case 0x35cd88u: goto label_35cd88;
        case 0x35cd8cu: goto label_35cd8c;
        case 0x35cd90u: goto label_35cd90;
        case 0x35cd94u: goto label_35cd94;
        case 0x35cd98u: goto label_35cd98;
        case 0x35cd9cu: goto label_35cd9c;
        case 0x35cda0u: goto label_35cda0;
        case 0x35cda4u: goto label_35cda4;
        case 0x35cda8u: goto label_35cda8;
        case 0x35cdacu: goto label_35cdac;
        case 0x35cdb0u: goto label_35cdb0;
        case 0x35cdb4u: goto label_35cdb4;
        case 0x35cdb8u: goto label_35cdb8;
        case 0x35cdbcu: goto label_35cdbc;
        case 0x35cdc0u: goto label_35cdc0;
        case 0x35cdc4u: goto label_35cdc4;
        case 0x35cdc8u: goto label_35cdc8;
        case 0x35cdccu: goto label_35cdcc;
        case 0x35cdd0u: goto label_35cdd0;
        case 0x35cdd4u: goto label_35cdd4;
        case 0x35cdd8u: goto label_35cdd8;
        case 0x35cddcu: goto label_35cddc;
        case 0x35cde0u: goto label_35cde0;
        case 0x35cde4u: goto label_35cde4;
        case 0x35cde8u: goto label_35cde8;
        case 0x35cdecu: goto label_35cdec;
        case 0x35cdf0u: goto label_35cdf0;
        case 0x35cdf4u: goto label_35cdf4;
        case 0x35cdf8u: goto label_35cdf8;
        case 0x35cdfcu: goto label_35cdfc;
        case 0x35ce00u: goto label_35ce00;
        case 0x35ce04u: goto label_35ce04;
        case 0x35ce08u: goto label_35ce08;
        case 0x35ce0cu: goto label_35ce0c;
        case 0x35ce10u: goto label_35ce10;
        case 0x35ce14u: goto label_35ce14;
        case 0x35ce18u: goto label_35ce18;
        case 0x35ce1cu: goto label_35ce1c;
        case 0x35ce20u: goto label_35ce20;
        case 0x35ce24u: goto label_35ce24;
        case 0x35ce28u: goto label_35ce28;
        case 0x35ce2cu: goto label_35ce2c;
        case 0x35ce30u: goto label_35ce30;
        case 0x35ce34u: goto label_35ce34;
        case 0x35ce38u: goto label_35ce38;
        case 0x35ce3cu: goto label_35ce3c;
        case 0x35ce40u: goto label_35ce40;
        case 0x35ce44u: goto label_35ce44;
        case 0x35ce48u: goto label_35ce48;
        case 0x35ce4cu: goto label_35ce4c;
        case 0x35ce50u: goto label_35ce50;
        case 0x35ce54u: goto label_35ce54;
        case 0x35ce58u: goto label_35ce58;
        case 0x35ce5cu: goto label_35ce5c;
        case 0x35ce60u: goto label_35ce60;
        case 0x35ce64u: goto label_35ce64;
        case 0x35ce68u: goto label_35ce68;
        case 0x35ce6cu: goto label_35ce6c;
        case 0x35ce70u: goto label_35ce70;
        case 0x35ce74u: goto label_35ce74;
        case 0x35ce78u: goto label_35ce78;
        case 0x35ce7cu: goto label_35ce7c;
        case 0x35ce80u: goto label_35ce80;
        case 0x35ce84u: goto label_35ce84;
        case 0x35ce88u: goto label_35ce88;
        case 0x35ce8cu: goto label_35ce8c;
        case 0x35ce90u: goto label_35ce90;
        case 0x35ce94u: goto label_35ce94;
        case 0x35ce98u: goto label_35ce98;
        case 0x35ce9cu: goto label_35ce9c;
        case 0x35cea0u: goto label_35cea0;
        case 0x35cea4u: goto label_35cea4;
        case 0x35cea8u: goto label_35cea8;
        case 0x35ceacu: goto label_35ceac;
        case 0x35ceb0u: goto label_35ceb0;
        case 0x35ceb4u: goto label_35ceb4;
        case 0x35ceb8u: goto label_35ceb8;
        case 0x35cebcu: goto label_35cebc;
        case 0x35cec0u: goto label_35cec0;
        case 0x35cec4u: goto label_35cec4;
        case 0x35cec8u: goto label_35cec8;
        case 0x35ceccu: goto label_35cecc;
        case 0x35ced0u: goto label_35ced0;
        case 0x35ced4u: goto label_35ced4;
        case 0x35ced8u: goto label_35ced8;
        case 0x35cedcu: goto label_35cedc;
        case 0x35cee0u: goto label_35cee0;
        case 0x35cee4u: goto label_35cee4;
        case 0x35cee8u: goto label_35cee8;
        case 0x35ceecu: goto label_35ceec;
        case 0x35cef0u: goto label_35cef0;
        case 0x35cef4u: goto label_35cef4;
        case 0x35cef8u: goto label_35cef8;
        case 0x35cefcu: goto label_35cefc;
        case 0x35cf00u: goto label_35cf00;
        case 0x35cf04u: goto label_35cf04;
        case 0x35cf08u: goto label_35cf08;
        case 0x35cf0cu: goto label_35cf0c;
        case 0x35cf10u: goto label_35cf10;
        case 0x35cf14u: goto label_35cf14;
        case 0x35cf18u: goto label_35cf18;
        case 0x35cf1cu: goto label_35cf1c;
        case 0x35cf20u: goto label_35cf20;
        case 0x35cf24u: goto label_35cf24;
        case 0x35cf28u: goto label_35cf28;
        case 0x35cf2cu: goto label_35cf2c;
        case 0x35cf30u: goto label_35cf30;
        case 0x35cf34u: goto label_35cf34;
        case 0x35cf38u: goto label_35cf38;
        case 0x35cf3cu: goto label_35cf3c;
        case 0x35cf40u: goto label_35cf40;
        case 0x35cf44u: goto label_35cf44;
        case 0x35cf48u: goto label_35cf48;
        case 0x35cf4cu: goto label_35cf4c;
        case 0x35cf50u: goto label_35cf50;
        case 0x35cf54u: goto label_35cf54;
        case 0x35cf58u: goto label_35cf58;
        case 0x35cf5cu: goto label_35cf5c;
        case 0x35cf60u: goto label_35cf60;
        case 0x35cf64u: goto label_35cf64;
        case 0x35cf68u: goto label_35cf68;
        case 0x35cf6cu: goto label_35cf6c;
        case 0x35cf70u: goto label_35cf70;
        case 0x35cf74u: goto label_35cf74;
        case 0x35cf78u: goto label_35cf78;
        case 0x35cf7cu: goto label_35cf7c;
        case 0x35cf80u: goto label_35cf80;
        case 0x35cf84u: goto label_35cf84;
        case 0x35cf88u: goto label_35cf88;
        case 0x35cf8cu: goto label_35cf8c;
        case 0x35cf90u: goto label_35cf90;
        case 0x35cf94u: goto label_35cf94;
        case 0x35cf98u: goto label_35cf98;
        case 0x35cf9cu: goto label_35cf9c;
        case 0x35cfa0u: goto label_35cfa0;
        case 0x35cfa4u: goto label_35cfa4;
        case 0x35cfa8u: goto label_35cfa8;
        case 0x35cfacu: goto label_35cfac;
        case 0x35cfb0u: goto label_35cfb0;
        case 0x35cfb4u: goto label_35cfb4;
        case 0x35cfb8u: goto label_35cfb8;
        case 0x35cfbcu: goto label_35cfbc;
        case 0x35cfc0u: goto label_35cfc0;
        case 0x35cfc4u: goto label_35cfc4;
        case 0x35cfc8u: goto label_35cfc8;
        case 0x35cfccu: goto label_35cfcc;
        case 0x35cfd0u: goto label_35cfd0;
        case 0x35cfd4u: goto label_35cfd4;
        case 0x35cfd8u: goto label_35cfd8;
        case 0x35cfdcu: goto label_35cfdc;
        case 0x35cfe0u: goto label_35cfe0;
        case 0x35cfe4u: goto label_35cfe4;
        case 0x35cfe8u: goto label_35cfe8;
        case 0x35cfecu: goto label_35cfec;
        case 0x35cff0u: goto label_35cff0;
        case 0x35cff4u: goto label_35cff4;
        case 0x35cff8u: goto label_35cff8;
        case 0x35cffcu: goto label_35cffc;
        case 0x35d000u: goto label_35d000;
        case 0x35d004u: goto label_35d004;
        case 0x35d008u: goto label_35d008;
        case 0x35d00cu: goto label_35d00c;
        case 0x35d010u: goto label_35d010;
        case 0x35d014u: goto label_35d014;
        case 0x35d018u: goto label_35d018;
        case 0x35d01cu: goto label_35d01c;
        case 0x35d020u: goto label_35d020;
        case 0x35d024u: goto label_35d024;
        case 0x35d028u: goto label_35d028;
        case 0x35d02cu: goto label_35d02c;
        case 0x35d030u: goto label_35d030;
        case 0x35d034u: goto label_35d034;
        case 0x35d038u: goto label_35d038;
        case 0x35d03cu: goto label_35d03c;
        case 0x35d040u: goto label_35d040;
        case 0x35d044u: goto label_35d044;
        case 0x35d048u: goto label_35d048;
        case 0x35d04cu: goto label_35d04c;
        case 0x35d050u: goto label_35d050;
        case 0x35d054u: goto label_35d054;
        case 0x35d058u: goto label_35d058;
        case 0x35d05cu: goto label_35d05c;
        case 0x35d060u: goto label_35d060;
        case 0x35d064u: goto label_35d064;
        case 0x35d068u: goto label_35d068;
        case 0x35d06cu: goto label_35d06c;
        case 0x35d070u: goto label_35d070;
        case 0x35d074u: goto label_35d074;
        case 0x35d078u: goto label_35d078;
        case 0x35d07cu: goto label_35d07c;
        case 0x35d080u: goto label_35d080;
        case 0x35d084u: goto label_35d084;
        case 0x35d088u: goto label_35d088;
        case 0x35d08cu: goto label_35d08c;
        case 0x35d090u: goto label_35d090;
        case 0x35d094u: goto label_35d094;
        case 0x35d098u: goto label_35d098;
        case 0x35d09cu: goto label_35d09c;
        case 0x35d0a0u: goto label_35d0a0;
        case 0x35d0a4u: goto label_35d0a4;
        case 0x35d0a8u: goto label_35d0a8;
        case 0x35d0acu: goto label_35d0ac;
        case 0x35d0b0u: goto label_35d0b0;
        case 0x35d0b4u: goto label_35d0b4;
        case 0x35d0b8u: goto label_35d0b8;
        case 0x35d0bcu: goto label_35d0bc;
        case 0x35d0c0u: goto label_35d0c0;
        case 0x35d0c4u: goto label_35d0c4;
        case 0x35d0c8u: goto label_35d0c8;
        case 0x35d0ccu: goto label_35d0cc;
        case 0x35d0d0u: goto label_35d0d0;
        case 0x35d0d4u: goto label_35d0d4;
        case 0x35d0d8u: goto label_35d0d8;
        case 0x35d0dcu: goto label_35d0dc;
        case 0x35d0e0u: goto label_35d0e0;
        case 0x35d0e4u: goto label_35d0e4;
        case 0x35d0e8u: goto label_35d0e8;
        case 0x35d0ecu: goto label_35d0ec;
        case 0x35d0f0u: goto label_35d0f0;
        case 0x35d0f4u: goto label_35d0f4;
        case 0x35d0f8u: goto label_35d0f8;
        case 0x35d0fcu: goto label_35d0fc;
        case 0x35d100u: goto label_35d100;
        case 0x35d104u: goto label_35d104;
        case 0x35d108u: goto label_35d108;
        case 0x35d10cu: goto label_35d10c;
        case 0x35d110u: goto label_35d110;
        case 0x35d114u: goto label_35d114;
        case 0x35d118u: goto label_35d118;
        case 0x35d11cu: goto label_35d11c;
        case 0x35d120u: goto label_35d120;
        case 0x35d124u: goto label_35d124;
        case 0x35d128u: goto label_35d128;
        case 0x35d12cu: goto label_35d12c;
        case 0x35d130u: goto label_35d130;
        case 0x35d134u: goto label_35d134;
        case 0x35d138u: goto label_35d138;
        case 0x35d13cu: goto label_35d13c;
        case 0x35d140u: goto label_35d140;
        case 0x35d144u: goto label_35d144;
        case 0x35d148u: goto label_35d148;
        case 0x35d14cu: goto label_35d14c;
        case 0x35d150u: goto label_35d150;
        case 0x35d154u: goto label_35d154;
        case 0x35d158u: goto label_35d158;
        case 0x35d15cu: goto label_35d15c;
        case 0x35d160u: goto label_35d160;
        case 0x35d164u: goto label_35d164;
        case 0x35d168u: goto label_35d168;
        case 0x35d16cu: goto label_35d16c;
        case 0x35d170u: goto label_35d170;
        case 0x35d174u: goto label_35d174;
        case 0x35d178u: goto label_35d178;
        case 0x35d17cu: goto label_35d17c;
        case 0x35d180u: goto label_35d180;
        case 0x35d184u: goto label_35d184;
        case 0x35d188u: goto label_35d188;
        case 0x35d18cu: goto label_35d18c;
        case 0x35d190u: goto label_35d190;
        case 0x35d194u: goto label_35d194;
        case 0x35d198u: goto label_35d198;
        case 0x35d19cu: goto label_35d19c;
        case 0x35d1a0u: goto label_35d1a0;
        case 0x35d1a4u: goto label_35d1a4;
        case 0x35d1a8u: goto label_35d1a8;
        case 0x35d1acu: goto label_35d1ac;
        case 0x35d1b0u: goto label_35d1b0;
        case 0x35d1b4u: goto label_35d1b4;
        case 0x35d1b8u: goto label_35d1b8;
        case 0x35d1bcu: goto label_35d1bc;
        case 0x35d1c0u: goto label_35d1c0;
        case 0x35d1c4u: goto label_35d1c4;
        case 0x35d1c8u: goto label_35d1c8;
        case 0x35d1ccu: goto label_35d1cc;
        case 0x35d1d0u: goto label_35d1d0;
        case 0x35d1d4u: goto label_35d1d4;
        case 0x35d1d8u: goto label_35d1d8;
        case 0x35d1dcu: goto label_35d1dc;
        case 0x35d1e0u: goto label_35d1e0;
        case 0x35d1e4u: goto label_35d1e4;
        case 0x35d1e8u: goto label_35d1e8;
        case 0x35d1ecu: goto label_35d1ec;
        case 0x35d1f0u: goto label_35d1f0;
        case 0x35d1f4u: goto label_35d1f4;
        case 0x35d1f8u: goto label_35d1f8;
        case 0x35d1fcu: goto label_35d1fc;
        case 0x35d200u: goto label_35d200;
        case 0x35d204u: goto label_35d204;
        case 0x35d208u: goto label_35d208;
        case 0x35d20cu: goto label_35d20c;
        case 0x35d210u: goto label_35d210;
        case 0x35d214u: goto label_35d214;
        case 0x35d218u: goto label_35d218;
        case 0x35d21cu: goto label_35d21c;
        case 0x35d220u: goto label_35d220;
        case 0x35d224u: goto label_35d224;
        case 0x35d228u: goto label_35d228;
        case 0x35d22cu: goto label_35d22c;
        case 0x35d230u: goto label_35d230;
        case 0x35d234u: goto label_35d234;
        case 0x35d238u: goto label_35d238;
        case 0x35d23cu: goto label_35d23c;
        case 0x35d240u: goto label_35d240;
        case 0x35d244u: goto label_35d244;
        case 0x35d248u: goto label_35d248;
        case 0x35d24cu: goto label_35d24c;
        case 0x35d250u: goto label_35d250;
        case 0x35d254u: goto label_35d254;
        case 0x35d258u: goto label_35d258;
        case 0x35d25cu: goto label_35d25c;
        case 0x35d260u: goto label_35d260;
        case 0x35d264u: goto label_35d264;
        case 0x35d268u: goto label_35d268;
        case 0x35d26cu: goto label_35d26c;
        case 0x35d270u: goto label_35d270;
        case 0x35d274u: goto label_35d274;
        case 0x35d278u: goto label_35d278;
        case 0x35d27cu: goto label_35d27c;
        case 0x35d280u: goto label_35d280;
        case 0x35d284u: goto label_35d284;
        case 0x35d288u: goto label_35d288;
        case 0x35d28cu: goto label_35d28c;
        case 0x35d290u: goto label_35d290;
        case 0x35d294u: goto label_35d294;
        case 0x35d298u: goto label_35d298;
        case 0x35d29cu: goto label_35d29c;
        case 0x35d2a0u: goto label_35d2a0;
        case 0x35d2a4u: goto label_35d2a4;
        case 0x35d2a8u: goto label_35d2a8;
        case 0x35d2acu: goto label_35d2ac;
        case 0x35d2b0u: goto label_35d2b0;
        case 0x35d2b4u: goto label_35d2b4;
        case 0x35d2b8u: goto label_35d2b8;
        case 0x35d2bcu: goto label_35d2bc;
        case 0x35d2c0u: goto label_35d2c0;
        case 0x35d2c4u: goto label_35d2c4;
        case 0x35d2c8u: goto label_35d2c8;
        case 0x35d2ccu: goto label_35d2cc;
        case 0x35d2d0u: goto label_35d2d0;
        case 0x35d2d4u: goto label_35d2d4;
        case 0x35d2d8u: goto label_35d2d8;
        case 0x35d2dcu: goto label_35d2dc;
        case 0x35d2e0u: goto label_35d2e0;
        case 0x35d2e4u: goto label_35d2e4;
        case 0x35d2e8u: goto label_35d2e8;
        case 0x35d2ecu: goto label_35d2ec;
        case 0x35d2f0u: goto label_35d2f0;
        case 0x35d2f4u: goto label_35d2f4;
        case 0x35d2f8u: goto label_35d2f8;
        case 0x35d2fcu: goto label_35d2fc;
        case 0x35d300u: goto label_35d300;
        case 0x35d304u: goto label_35d304;
        case 0x35d308u: goto label_35d308;
        case 0x35d30cu: goto label_35d30c;
        case 0x35d310u: goto label_35d310;
        case 0x35d314u: goto label_35d314;
        case 0x35d318u: goto label_35d318;
        case 0x35d31cu: goto label_35d31c;
        case 0x35d320u: goto label_35d320;
        case 0x35d324u: goto label_35d324;
        case 0x35d328u: goto label_35d328;
        case 0x35d32cu: goto label_35d32c;
        case 0x35d330u: goto label_35d330;
        case 0x35d334u: goto label_35d334;
        case 0x35d338u: goto label_35d338;
        case 0x35d33cu: goto label_35d33c;
        case 0x35d340u: goto label_35d340;
        case 0x35d344u: goto label_35d344;
        case 0x35d348u: goto label_35d348;
        case 0x35d34cu: goto label_35d34c;
        case 0x35d350u: goto label_35d350;
        case 0x35d354u: goto label_35d354;
        case 0x35d358u: goto label_35d358;
        case 0x35d35cu: goto label_35d35c;
        case 0x35d360u: goto label_35d360;
        case 0x35d364u: goto label_35d364;
        case 0x35d368u: goto label_35d368;
        case 0x35d36cu: goto label_35d36c;
        case 0x35d370u: goto label_35d370;
        case 0x35d374u: goto label_35d374;
        case 0x35d378u: goto label_35d378;
        case 0x35d37cu: goto label_35d37c;
        case 0x35d380u: goto label_35d380;
        case 0x35d384u: goto label_35d384;
        case 0x35d388u: goto label_35d388;
        case 0x35d38cu: goto label_35d38c;
        case 0x35d390u: goto label_35d390;
        case 0x35d394u: goto label_35d394;
        case 0x35d398u: goto label_35d398;
        case 0x35d39cu: goto label_35d39c;
        case 0x35d3a0u: goto label_35d3a0;
        case 0x35d3a4u: goto label_35d3a4;
        case 0x35d3a8u: goto label_35d3a8;
        case 0x35d3acu: goto label_35d3ac;
        case 0x35d3b0u: goto label_35d3b0;
        case 0x35d3b4u: goto label_35d3b4;
        case 0x35d3b8u: goto label_35d3b8;
        case 0x35d3bcu: goto label_35d3bc;
        case 0x35d3c0u: goto label_35d3c0;
        case 0x35d3c4u: goto label_35d3c4;
        case 0x35d3c8u: goto label_35d3c8;
        case 0x35d3ccu: goto label_35d3cc;
        case 0x35d3d0u: goto label_35d3d0;
        case 0x35d3d4u: goto label_35d3d4;
        case 0x35d3d8u: goto label_35d3d8;
        case 0x35d3dcu: goto label_35d3dc;
        case 0x35d3e0u: goto label_35d3e0;
        case 0x35d3e4u: goto label_35d3e4;
        case 0x35d3e8u: goto label_35d3e8;
        case 0x35d3ecu: goto label_35d3ec;
        case 0x35d3f0u: goto label_35d3f0;
        case 0x35d3f4u: goto label_35d3f4;
        case 0x35d3f8u: goto label_35d3f8;
        case 0x35d3fcu: goto label_35d3fc;
        case 0x35d400u: goto label_35d400;
        case 0x35d404u: goto label_35d404;
        case 0x35d408u: goto label_35d408;
        case 0x35d40cu: goto label_35d40c;
        default: break;
    }

    ctx->pc = 0x35cb40u;

label_35cb40:
    // 0x35cb40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x35cb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_35cb44:
    // 0x35cb44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x35cb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_35cb48:
    // 0x35cb48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35cb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_35cb4c:
    // 0x35cb4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35cb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35cb50:
    // 0x35cb50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x35cb50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35cb54:
    // 0x35cb54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35cb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35cb58:
    // 0x35cb58: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x35cb58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35cb5c:
    // 0x35cb5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35cb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35cb60:
    // 0x35cb60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35cb60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_35cb64:
    // 0x35cb64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35cb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35cb68:
    // 0x35cb68: 0x124000ed  beqz        $s2, . + 4 + (0xED << 2)
label_35cb6c:
    if (ctx->pc == 0x35CB6Cu) {
        ctx->pc = 0x35CB6Cu;
            // 0x35cb6c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35CB70u;
        goto label_35cb70;
    }
    ctx->pc = 0x35CB68u;
    {
        const bool branch_taken_0x35cb68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CB68u;
            // 0x35cb6c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cb68) {
            ctx->pc = 0x35CF20u;
            goto label_35cf20;
        }
    }
    ctx->pc = 0x35CB70u;
label_35cb70:
    // 0x35cb70: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x35cb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_35cb74:
    // 0x35cb74: 0x241082b  sltu        $at, $s2, $at
    ctx->pc = 0x35cb74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_35cb78:
    // 0x35cb78: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_35cb7c:
    if (ctx->pc == 0x35CB7Cu) {
        ctx->pc = 0x35CB80u;
        goto label_35cb80;
    }
    ctx->pc = 0x35CB78u;
    {
        const bool branch_taken_0x35cb78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cb78) {
            ctx->pc = 0x35CB9Cu;
            goto label_35cb9c;
        }
    }
    ctx->pc = 0x35CB80u;
label_35cb80:
    // 0x35cb80: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x35cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
label_35cb84:
    // 0x35cb84: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x35cb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_35cb88:
    // 0x35cb88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35cb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_35cb8c:
    // 0x35cb8c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x35cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_35cb90:
    // 0x35cb90: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x35cb90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_35cb94:
    // 0x35cb94: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
label_35cb98:
    if (ctx->pc == 0x35CB98u) {
        ctx->pc = 0x35CB98u;
            // 0x35cb98: 0x8e850008  lw          $a1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x35CB9Cu;
        goto label_35cb9c;
    }
    ctx->pc = 0x35CB94u;
    {
        const bool branch_taken_0x35cb94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cb94) {
            ctx->pc = 0x35CB98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35CB94u;
            // 0x35cb98: 0x8e850008  lw          $a1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35CBC0u;
            goto label_35cbc0;
        }
    }
    ctx->pc = 0x35CB9Cu;
label_35cb9c:
    // 0x35cb9c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x35cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_35cba0:
    // 0x35cba0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x35cba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_35cba4:
    // 0x35cba4: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x35cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
label_35cba8:
    // 0x35cba8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x35cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_35cbac:
    // 0x35cbac: 0xc049e92  jal         func_127A48
label_35cbb0:
    if (ctx->pc == 0x35CBB0u) {
        ctx->pc = 0x35CBB0u;
            // 0x35cbb0: 0x24a54510  addiu       $a1, $a1, 0x4510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17680));
        ctx->pc = 0x35CBB4u;
        goto label_35cbb4;
    }
    ctx->pc = 0x35CBACu;
    SET_GPR_U32(ctx, 31, 0x35CBB4u);
    ctx->pc = 0x35CBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35CBACu;
            // 0x35cbb0: 0x24a54510  addiu       $a1, $a1, 0x4510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35CBB4u; }
        if (ctx->pc != 0x35CBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35CBB4u; }
        if (ctx->pc != 0x35CBB4u) { return; }
    }
    ctx->pc = 0x35CBB4u;
label_35cbb4:
    // 0x35cbb4: 0xc04981a  jal         func_126068
label_35cbb8:
    if (ctx->pc == 0x35CBB8u) {
        ctx->pc = 0x35CBBCu;
        goto label_35cbbc;
    }
    ctx->pc = 0x35CBB4u;
    SET_GPR_U32(ctx, 31, 0x35CBBCu);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35CBBCu; }
        if (ctx->pc != 0x35CBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35CBBCu; }
        if (ctx->pc != 0x35CBBCu) { return; }
    }
    ctx->pc = 0x35CBBCu;
label_35cbbc:
    // 0x35cbbc: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x35cbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_35cbc0:
    // 0x35cbc0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x35cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_35cbc4:
    // 0x35cbc4: 0xb22021  addu        $a0, $a1, $s2
    ctx->pc = 0x35cbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_35cbc8:
    // 0x35cbc8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x35cbc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_35cbcc:
    // 0x35cbcc: 0x54200069  bnel        $at, $zero, . + 4 + (0x69 << 2)
label_35cbd0:
    if (ctx->pc == 0x35CBD0u) {
        ctx->pc = 0x35CBD0u;
            // 0x35cbd0: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x35CBD4u;
        goto label_35cbd4;
    }
    ctx->pc = 0x35CBCCu;
    {
        const bool branch_taken_0x35cbcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35cbcc) {
            ctx->pc = 0x35CBD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35CBCCu;
            // 0x35cbd0: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35CD74u;
            goto label_35cd74;
        }
    }
    ctx->pc = 0x35CBD4u;
label_35cbd4:
    // 0x35cbd4: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x35cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_35cbd8:
    // 0x35cbd8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x35cbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_35cbdc:
    // 0x35cbdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_35cbe0:
    // 0x35cbe0: 0x732023  subu        $a0, $v1, $s3
    ctx->pc = 0x35cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_35cbe4:
    // 0x35cbe4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_35cbe8:
    if (ctx->pc == 0x35CBE8u) {
        ctx->pc = 0x35CBE8u;
            // 0x35cbe8: 0x43883  sra         $a3, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 2));
        ctx->pc = 0x35CBECu;
        goto label_35cbec;
    }
    ctx->pc = 0x35CBE4u;
    {
        const bool branch_taken_0x35cbe4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x35CBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CBE4u;
            // 0x35cbe8: 0x43883  sra         $a3, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cbe4) {
            ctx->pc = 0x35CBF4u;
            goto label_35cbf4;
        }
    }
    ctx->pc = 0x35CBECu;
label_35cbec:
    // 0x35cbec: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x35cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_35cbf0:
    // 0x35cbf0: 0x43883  sra         $a3, $a0, 2
    ctx->pc = 0x35cbf0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 2));
label_35cbf4:
    // 0x35cbf4: 0xf2082b  sltu        $at, $a3, $s2
    ctx->pc = 0x35cbf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_35cbf8:
    // 0x35cbf8: 0x50200026  beql        $at, $zero, . + 4 + (0x26 << 2)
label_35cbfc:
    if (ctx->pc == 0x35CBFCu) {
        ctx->pc = 0x35CBFCu;
            // 0x35cbfc: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x35CC00u;
        goto label_35cc00;
    }
    ctx->pc = 0x35CBF8u;
    {
        const bool branch_taken_0x35cbf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cbf8) {
            ctx->pc = 0x35CBFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35CBF8u;
            // 0x35cbfc: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35CC94u;
            goto label_35cc94;
        }
    }
    ctx->pc = 0x35CC00u;
label_35cc00:
    // 0x35cc00: 0xf2082b  sltu        $at, $a3, $s2
    ctx->pc = 0x35cc00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_35cc04:
    // 0x35cc04: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_35cc08:
    if (ctx->pc == 0x35CC08u) {
        ctx->pc = 0x35CC08u;
            // 0x35cc08: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35CC0Cu;
        goto label_35cc0c;
    }
    ctx->pc = 0x35CC04u;
    {
        const bool branch_taken_0x35cc04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CC04u;
            // 0x35cc08: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc04) {
            ctx->pc = 0x35CC48u;
            goto label_35cc48;
        }
    }
    ctx->pc = 0x35CC0Cu;
label_35cc0c:
    // 0x35cc0c: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
label_35cc10:
    if (ctx->pc == 0x35CC10u) {
        ctx->pc = 0x35CC14u;
        goto label_35cc14;
    }
    ctx->pc = 0x35CC0Cu;
    {
        const bool branch_taken_0x35cc0c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cc0c) {
            ctx->pc = 0x35CC28u;
            goto label_35cc28;
        }
    }
    ctx->pc = 0x35CC14u;
label_35cc14:
    // 0x35cc14: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x35cc14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_35cc18:
    // 0x35cc18: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x35cc18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_35cc1c:
    // 0x35cc1c: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x35cc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
label_35cc20:
    // 0x35cc20: 0xa5040002  sh          $a0, 0x2($t0)
    ctx->pc = 0x35cc20u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 4));
label_35cc24:
    // 0x35cc24: 0x0  nop
    ctx->pc = 0x35cc24u;
    // NOP
label_35cc28:
    // 0x35cc28: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x35cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_35cc2c:
    // 0x35cc2c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x35cc2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_35cc30:
    // 0x35cc30: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x35cc30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_35cc34:
    // 0x35cc34: 0xf2082b  sltu        $at, $a3, $s2
    ctx->pc = 0x35cc34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_35cc38:
    // 0x35cc38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_35cc3c:
    // 0x35cc3c: 0x1420fff3  bnez        $at, . + 4 + (-0xD << 2)
label_35cc40:
    if (ctx->pc == 0x35CC40u) {
        ctx->pc = 0x35CC40u;
            // 0x35cc40: 0xae840008  sw          $a0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
        ctx->pc = 0x35CC44u;
        goto label_35cc44;
    }
    ctx->pc = 0x35CC3Cu;
    {
        const bool branch_taken_0x35cc3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CC3Cu;
            // 0x35cc40: 0xae840008  sw          $a0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc3c) {
            ctx->pc = 0x35CC0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35cc0c;
        }
    }
    ctx->pc = 0x35CC44u;
label_35cc44:
    // 0x35cc44: 0x0  nop
    ctx->pc = 0x35cc44u;
    // NOP
label_35cc48:
    // 0x35cc48: 0x263082b  sltu        $at, $s3, $v1
    ctx->pc = 0x35cc48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35cc4c:
    // 0x35cc4c: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
label_35cc50:
    if (ctx->pc == 0x35CC50u) {
        ctx->pc = 0x35CC50u;
            // 0x35cc50: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35CC54u;
        goto label_35cc54;
    }
    ctx->pc = 0x35CC4Cu;
    {
        const bool branch_taken_0x35cc4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CC4Cu;
            // 0x35cc50: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc4c) {
            ctx->pc = 0x35CD40u;
            goto label_35cd40;
        }
    }
    ctx->pc = 0x35CC54u;
label_35cc54:
    // 0x35cc54: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
label_35cc58:
    if (ctx->pc == 0x35CC58u) {
        ctx->pc = 0x35CC5Cu;
        goto label_35cc5c;
    }
    ctx->pc = 0x35CC54u;
    {
        const bool branch_taken_0x35cc54 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cc54) {
            ctx->pc = 0x35CC70u;
            goto label_35cc70;
        }
    }
    ctx->pc = 0x35CC5Cu;
label_35cc5c:
    // 0x35cc5c: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x35cc5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_35cc60:
    // 0x35cc60: 0x84c40002  lh          $a0, 0x2($a2)
    ctx->pc = 0x35cc60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_35cc64:
    // 0x35cc64: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x35cc64u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
label_35cc68:
    // 0x35cc68: 0xa5040002  sh          $a0, 0x2($t0)
    ctx->pc = 0x35cc68u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 4));
label_35cc6c:
    // 0x35cc6c: 0x0  nop
    ctx->pc = 0x35cc6cu;
    // NOP
label_35cc70:
    // 0x35cc70: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x35cc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_35cc74:
    // 0x35cc74: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x35cc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_35cc78:
    // 0x35cc78: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x35cc78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_35cc7c:
    // 0x35cc7c: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x35cc7cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35cc80:
    // 0x35cc80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x35cc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_35cc84:
    // 0x35cc84: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
label_35cc88:
    if (ctx->pc == 0x35CC88u) {
        ctx->pc = 0x35CC88u;
            // 0x35cc88: 0xae850008  sw          $a1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 5));
        ctx->pc = 0x35CC8Cu;
        goto label_35cc8c;
    }
    ctx->pc = 0x35CC84u;
    {
        const bool branch_taken_0x35cc84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CC84u;
            // 0x35cc88: 0xae850008  sw          $a1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc84) {
            ctx->pc = 0x35CC54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35cc54;
        }
    }
    ctx->pc = 0x35CC8Cu;
label_35cc8c:
    // 0x35cc8c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_35cc90:
    if (ctx->pc == 0x35CC90u) {
        ctx->pc = 0x35CC94u;
        goto label_35cc94;
    }
    ctx->pc = 0x35CC8Cu;
    {
        const bool branch_taken_0x35cc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cc8c) {
            ctx->pc = 0x35CD40u;
            goto label_35cd40;
        }
    }
    ctx->pc = 0x35CC94u;
label_35cc94:
    // 0x35cc94: 0x664823  subu        $t1, $v1, $a2
    ctx->pc = 0x35cc94u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_35cc98:
    // 0x35cc98: 0x123082b  sltu        $at, $t1, $v1
    ctx->pc = 0x35cc98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35cc9c:
    // 0x35cc9c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_35cca0:
    if (ctx->pc == 0x35CCA0u) {
        ctx->pc = 0x35CCA0u;
            // 0x35cca0: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35CCA4u;
        goto label_35cca4;
    }
    ctx->pc = 0x35CC9Cu;
    {
        const bool branch_taken_0x35cc9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CC9Cu;
            // 0x35cca0: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc9c) {
            ctx->pc = 0x35CCE0u;
            goto label_35cce0;
        }
    }
    ctx->pc = 0x35CCA4u;
label_35cca4:
    // 0x35cca4: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
label_35cca8:
    if (ctx->pc == 0x35CCA8u) {
        ctx->pc = 0x35CCACu;
        goto label_35ccac;
    }
    ctx->pc = 0x35CCA4u;
    {
        const bool branch_taken_0x35cca4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cca4) {
            ctx->pc = 0x35CCC0u;
            goto label_35ccc0;
        }
    }
    ctx->pc = 0x35CCACu;
label_35ccac:
    // 0x35ccac: 0x85250000  lh          $a1, 0x0($t1)
    ctx->pc = 0x35ccacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_35ccb0:
    // 0x35ccb0: 0x85240002  lh          $a0, 0x2($t1)
    ctx->pc = 0x35ccb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_35ccb4:
    // 0x35ccb4: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x35ccb4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
label_35ccb8:
    // 0x35ccb8: 0xa5040002  sh          $a0, 0x2($t0)
    ctx->pc = 0x35ccb8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 4));
label_35ccbc:
    // 0x35ccbc: 0x0  nop
    ctx->pc = 0x35ccbcu;
    // NOP
label_35ccc0:
    // 0x35ccc0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x35ccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_35ccc4:
    // 0x35ccc4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x35ccc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_35ccc8:
    // 0x35ccc8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x35ccc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_35cccc:
    // 0x35cccc: 0x123202b  sltu        $a0, $t1, $v1
    ctx->pc = 0x35ccccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35ccd0:
    // 0x35ccd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x35ccd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_35ccd4:
    // 0x35ccd4: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
label_35ccd8:
    if (ctx->pc == 0x35CCD8u) {
        ctx->pc = 0x35CCD8u;
            // 0x35ccd8: 0xae850008  sw          $a1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 5));
        ctx->pc = 0x35CCDCu;
        goto label_35ccdc;
    }
    ctx->pc = 0x35CCD4u;
    {
        const bool branch_taken_0x35ccd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CCD4u;
            // 0x35ccd8: 0xae850008  sw          $a1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ccd4) {
            ctx->pc = 0x35CCA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35cca4;
        }
    }
    ctx->pc = 0x35CCDCu;
label_35ccdc:
    // 0x35ccdc: 0x0  nop
    ctx->pc = 0x35ccdcu;
    // NOP
label_35cce0:
    // 0x35cce0: 0xf22023  subu        $a0, $a3, $s2
    ctx->pc = 0x35cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_35cce4:
    // 0x35cce4: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x35cce4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_35cce8:
    // 0x35cce8: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x35cce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_35ccec:
    // 0x35ccec: 0x224082b  sltu        $at, $s1, $a0
    ctx->pc = 0x35ccecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_35ccf0:
    // 0x35ccf0: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
label_35ccf4:
    if (ctx->pc == 0x35CCF4u) {
        ctx->pc = 0x35CCF4u;
            // 0x35ccf4: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->pc = 0x35CCF8u;
        goto label_35ccf8;
    }
    ctx->pc = 0x35CCF0u;
    {
        const bool branch_taken_0x35ccf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ccf0) {
            ctx->pc = 0x35CCF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35CCF0u;
            // 0x35ccf4: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35CD0Cu;
            goto label_35cd0c;
        }
    }
    ctx->pc = 0x35CCF8u;
label_35ccf8:
    // 0x35ccf8: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x35ccf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35ccfc:
    // 0x35ccfc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_35cd00:
    if (ctx->pc == 0x35CD00u) {
        ctx->pc = 0x35CD04u;
        goto label_35cd04;
    }
    ctx->pc = 0x35CCFCu;
    {
        const bool branch_taken_0x35ccfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ccfc) {
            ctx->pc = 0x35CD08u;
            goto label_35cd08;
        }
    }
    ctx->pc = 0x35CD04u;
label_35cd04:
    // 0x35cd04: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x35cd04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_35cd08:
    // 0x35cd08: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x35cd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_35cd0c:
    // 0x35cd0c: 0x265082b  sltu        $at, $s3, $a1
    ctx->pc = 0x35cd0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_35cd10:
    // 0x35cd10: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_35cd14:
    if (ctx->pc == 0x35CD14u) {
        ctx->pc = 0x35CD18u;
        goto label_35cd18;
    }
    ctx->pc = 0x35CD10u;
    {
        const bool branch_taken_0x35cd10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cd10) {
            ctx->pc = 0x35CD40u;
            goto label_35cd40;
        }
    }
    ctx->pc = 0x35CD18u;
label_35cd18:
    // 0x35cd18: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x35cd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_35cd1c:
    // 0x35cd1c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x35cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_35cd20:
    // 0x35cd20: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x35cd20u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_35cd24:
    // 0x35cd24: 0x265082b  sltu        $at, $s3, $a1
    ctx->pc = 0x35cd24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_35cd28:
    // 0x35cd28: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x35cd28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_35cd2c:
    // 0x35cd2c: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x35cd2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_35cd30:
    // 0x35cd30: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x35cd30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_35cd34:
    // 0x35cd34: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x35cd34u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_35cd38:
    // 0x35cd38: 0x1420fff7  bnez        $at, . + 4 + (-0x9 << 2)
label_35cd3c:
    if (ctx->pc == 0x35CD3Cu) {
        ctx->pc = 0x35CD3Cu;
            // 0x35cd3c: 0xa0640003  sb          $a0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x35CD40u;
        goto label_35cd40;
    }
    ctx->pc = 0x35CD38u;
    {
        const bool branch_taken_0x35cd38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CD38u;
            // 0x35cd3c: 0xa0640003  sb          $a0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cd38) {
            ctx->pc = 0x35CD18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35cd18;
        }
    }
    ctx->pc = 0x35CD40u;
label_35cd40:
    // 0x35cd40: 0x52400078  beql        $s2, $zero, . + 4 + (0x78 << 2)
label_35cd44:
    if (ctx->pc == 0x35CD44u) {
        ctx->pc = 0x35CD44u;
            // 0x35cd44: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x35CD48u;
        goto label_35cd48;
    }
    ctx->pc = 0x35CD40u;
    {
        const bool branch_taken_0x35cd40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cd40) {
            ctx->pc = 0x35CD44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35CD40u;
            // 0x35cd44: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35CF24u;
            goto label_35cf24;
        }
    }
    ctx->pc = 0x35CD48u;
label_35cd48:
    // 0x35cd48: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x35cd48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_35cd4c:
    // 0x35cd4c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x35cd4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_35cd50:
    // 0x35cd50: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x35cd50u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
label_35cd54:
    // 0x35cd54: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x35cd54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_35cd58:
    // 0x35cd58: 0xa2630002  sb          $v1, 0x2($s3)
    ctx->pc = 0x35cd58u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 3));
label_35cd5c:
    // 0x35cd5c: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x35cd5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_35cd60:
    // 0x35cd60: 0xa2630003  sb          $v1, 0x3($s3)
    ctx->pc = 0x35cd60u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 3));
label_35cd64:
    // 0x35cd64: 0x1640fff8  bnez        $s2, . + 4 + (-0x8 << 2)
label_35cd68:
    if (ctx->pc == 0x35CD68u) {
        ctx->pc = 0x35CD68u;
            // 0x35cd68: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x35CD6Cu;
        goto label_35cd6c;
    }
    ctx->pc = 0x35CD64u;
    {
        const bool branch_taken_0x35cd64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CD64u;
            // 0x35cd68: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cd64) {
            ctx->pc = 0x35CD48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35cd48;
        }
    }
    ctx->pc = 0x35CD6Cu;
label_35cd6c:
    // 0x35cd6c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_35cd70:
    if (ctx->pc == 0x35CD70u) {
        ctx->pc = 0x35CD74u;
        goto label_35cd74;
    }
    ctx->pc = 0x35CD6Cu;
    {
        const bool branch_taken_0x35cd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cd6c) {
            ctx->pc = 0x35CF20u;
            goto label_35cf20;
        }
    }
    ctx->pc = 0x35CD74u;
label_35cd74:
    // 0x35cd74: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x35cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_35cd78:
    // 0x35cd78: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x35cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_35cd7c:
    // 0x35cd7c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x35cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_35cd80:
    // 0x35cd80: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x35cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_35cd84:
    // 0x35cd84: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x35cd84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_35cd88:
    // 0x35cd88: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_35cd8c:
    if (ctx->pc == 0x35CD8Cu) {
        ctx->pc = 0x35CD8Cu;
            // 0x35cd8c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35CD90u;
        goto label_35cd90;
    }
    ctx->pc = 0x35CD88u;
    {
        const bool branch_taken_0x35cd88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cd88) {
            ctx->pc = 0x35CD8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35CD88u;
            // 0x35cd8c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35CD90u;
            goto label_35cd90;
        }
    }
    ctx->pc = 0x35CD90u;
label_35cd90:
    // 0x35cd90: 0x204082b  sltu        $at, $s0, $a0
    ctx->pc = 0x35cd90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_35cd94:
    // 0x35cd94: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_35cd98:
    if (ctx->pc == 0x35CD98u) {
        ctx->pc = 0x35CD9Cu;
        goto label_35cd9c;
    }
    ctx->pc = 0x35CD94u;
    {
        const bool branch_taken_0x35cd94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cd94) {
            ctx->pc = 0x35CDD8u;
            goto label_35cdd8;
        }
    }
    ctx->pc = 0x35CD9Cu;
label_35cd9c:
    // 0x35cd9c: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x35cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
label_35cda0:
    // 0x35cda0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35cda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_35cda4:
    // 0x35cda4: 0x3c011fff  lui         $at, 0x1FFF
    ctx->pc = 0x35cda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
label_35cda8:
    // 0x35cda8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x35cda8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_35cdac:
    // 0x35cdac: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x35cdacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_35cdb0:
    // 0x35cdb0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_35cdb4:
    if (ctx->pc == 0x35CDB4u) {
        ctx->pc = 0x35CDB8u;
        goto label_35cdb8;
    }
    ctx->pc = 0x35CDB0u;
    {
        const bool branch_taken_0x35cdb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cdb0) {
            ctx->pc = 0x35CDC0u;
            goto label_35cdc0;
        }
    }
    ctx->pc = 0x35CDB8u;
label_35cdb8:
    // 0x35cdb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_35cdbc:
    if (ctx->pc == 0x35CDBCu) {
        ctx->pc = 0x35CDBCu;
            // 0x35cdbc: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x35CDC0u;
        goto label_35cdc0;
    }
    ctx->pc = 0x35CDB8u;
    {
        const bool branch_taken_0x35cdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CDB8u;
            // 0x35cdbc: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cdb8) {
            ctx->pc = 0x35CDC8u;
            goto label_35cdc8;
        }
    }
    ctx->pc = 0x35CDC0u;
label_35cdc0:
    // 0x35cdc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35cdc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35cdc4:
    // 0x35cdc4: 0x0  nop
    ctx->pc = 0x35cdc4u;
    // NOP
label_35cdc8:
    // 0x35cdc8: 0x204082b  sltu        $at, $s0, $a0
    ctx->pc = 0x35cdc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_35cdcc:
    // 0x35cdcc: 0x5420fff6  bnel        $at, $zero, . + 4 + (-0xA << 2)
label_35cdd0:
    if (ctx->pc == 0x35CDD0u) {
        ctx->pc = 0x35CDD0u;
            // 0x35cdd0: 0x3c011fff  lui         $at, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
        ctx->pc = 0x35CDD4u;
        goto label_35cdd4;
    }
    ctx->pc = 0x35CDCCu;
    {
        const bool branch_taken_0x35cdcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35cdcc) {
            ctx->pc = 0x35CDD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35CDCCu;
            // 0x35cdd0: 0x3c011fff  lui         $at, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35CDA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35cda8;
        }
    }
    ctx->pc = 0x35CDD4u;
label_35cdd4:
    // 0x35cdd4: 0x0  nop
    ctx->pc = 0x35cdd4u;
    // NOP
label_35cdd8:
    // 0x35cdd8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x35cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_35cddc:
    // 0x35cddc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x35cddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_35cde0:
    // 0x35cde0: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x35cde0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
label_35cde4:
    // 0x35cde4: 0xc0fe54c  jal         func_3F9530
label_35cde8:
    if (ctx->pc == 0x35CDE8u) {
        ctx->pc = 0x35CDE8u;
            // 0x35cde8: 0x102880  sll         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x35CDECu;
        goto label_35cdec;
    }
    ctx->pc = 0x35CDE4u;
    SET_GPR_U32(ctx, 31, 0x35CDECu);
    ctx->pc = 0x35CDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35CDE4u;
            // 0x35cde8: 0x102880  sll         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35CDECu; }
        if (ctx->pc != 0x35CDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35CDECu; }
        if (ctx->pc != 0x35CDECu) { return; }
    }
    ctx->pc = 0x35CDECu;
label_35cdec:
    // 0x35cdec: 0xafb00064  sw          $s0, 0x64($sp)
    ctx->pc = 0x35cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 16));
label_35cdf0:
    // 0x35cdf0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x35cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_35cdf4:
    // 0x35cdf4: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x35cdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_35cdf8:
    // 0x35cdf8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x35cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_35cdfc:
    // 0x35cdfc: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x35cdfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_35ce00:
    // 0x35ce00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35ce04:
    // 0x35ce04: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_35ce08:
    if (ctx->pc == 0x35CE08u) {
        ctx->pc = 0x35CE08u;
            // 0x35ce08: 0xc32821  addu        $a1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->pc = 0x35CE0Cu;
        goto label_35ce0c;
    }
    ctx->pc = 0x35CE04u;
    {
        const bool branch_taken_0x35ce04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CE04u;
            // 0x35ce08: 0xc32821  addu        $a1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ce04) {
            ctx->pc = 0x35CE48u;
            goto label_35ce48;
        }
    }
    ctx->pc = 0x35CE0Cu;
label_35ce0c:
    // 0x35ce0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_35ce10:
    if (ctx->pc == 0x35CE10u) {
        ctx->pc = 0x35CE14u;
        goto label_35ce14;
    }
    ctx->pc = 0x35CE0Cu;
    {
        const bool branch_taken_0x35ce0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ce0c) {
            ctx->pc = 0x35CE28u;
            goto label_35ce28;
        }
    }
    ctx->pc = 0x35CE14u;
label_35ce14:
    // 0x35ce14: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x35ce14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_35ce18:
    // 0x35ce18: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x35ce18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_35ce1c:
    // 0x35ce1c: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x35ce1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_35ce20:
    // 0x35ce20: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x35ce20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
label_35ce24:
    // 0x35ce24: 0x0  nop
    ctx->pc = 0x35ce24u;
    // NOP
label_35ce28:
    // 0x35ce28: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x35ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35ce2c:
    // 0x35ce2c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x35ce2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_35ce30:
    // 0x35ce30: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x35ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_35ce34:
    // 0x35ce34: 0xd3182b  sltu        $v1, $a2, $s3
    ctx->pc = 0x35ce34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_35ce38:
    // 0x35ce38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_35ce3c:
    // 0x35ce3c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_35ce40:
    if (ctx->pc == 0x35CE40u) {
        ctx->pc = 0x35CE40u;
            // 0x35ce40: 0xafa40068  sw          $a0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
        ctx->pc = 0x35CE44u;
        goto label_35ce44;
    }
    ctx->pc = 0x35CE3Cu;
    {
        const bool branch_taken_0x35ce3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CE3Cu;
            // 0x35ce40: 0xafa40068  sw          $a0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ce3c) {
            ctx->pc = 0x35CE0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35ce0c;
        }
    }
    ctx->pc = 0x35CE44u;
label_35ce44:
    // 0x35ce44: 0x0  nop
    ctx->pc = 0x35ce44u;
    // NOP
label_35ce48:
    // 0x35ce48: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_35ce4c:
    if (ctx->pc == 0x35CE4Cu) {
        ctx->pc = 0x35CE50u;
        goto label_35ce50;
    }
    ctx->pc = 0x35CE48u;
    {
        const bool branch_taken_0x35ce48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ce48) {
            ctx->pc = 0x35CE80u;
            goto label_35ce80;
        }
    }
    ctx->pc = 0x35CE50u;
label_35ce50:
    // 0x35ce50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_35ce54:
    if (ctx->pc == 0x35CE54u) {
        ctx->pc = 0x35CE58u;
        goto label_35ce58;
    }
    ctx->pc = 0x35CE50u;
    {
        const bool branch_taken_0x35ce50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ce50) {
            ctx->pc = 0x35CE68u;
            goto label_35ce68;
        }
    }
    ctx->pc = 0x35CE58u;
label_35ce58:
    // 0x35ce58: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x35ce58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_35ce5c:
    // 0x35ce5c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x35ce5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_35ce60:
    // 0x35ce60: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x35ce60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_35ce64:
    // 0x35ce64: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x35ce64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
label_35ce68:
    // 0x35ce68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x35ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35ce6c:
    // 0x35ce6c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x35ce6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_35ce70:
    // 0x35ce70: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x35ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_35ce74:
    // 0x35ce74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_35ce78:
    // 0x35ce78: 0x1640fff5  bnez        $s2, . + 4 + (-0xB << 2)
label_35ce7c:
    if (ctx->pc == 0x35CE7Cu) {
        ctx->pc = 0x35CE7Cu;
            // 0x35ce7c: 0xafa30068  sw          $v1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
        ctx->pc = 0x35CE80u;
        goto label_35ce80;
    }
    ctx->pc = 0x35CE78u;
    {
        const bool branch_taken_0x35ce78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CE78u;
            // 0x35ce7c: 0xafa30068  sw          $v1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ce78) {
            ctx->pc = 0x35CE50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35ce50;
        }
    }
    ctx->pc = 0x35CE80u;
label_35ce80:
    // 0x35ce80: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x35ce80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_35ce84:
    // 0x35ce84: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_35ce88:
    if (ctx->pc == 0x35CE88u) {
        ctx->pc = 0x35CE8Cu;
        goto label_35ce8c;
    }
    ctx->pc = 0x35CE84u;
    {
        const bool branch_taken_0x35ce84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ce84) {
            ctx->pc = 0x35CEC8u;
            goto label_35cec8;
        }
    }
    ctx->pc = 0x35CE8Cu;
label_35ce8c:
    // 0x35ce8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_35ce90:
    if (ctx->pc == 0x35CE90u) {
        ctx->pc = 0x35CE94u;
        goto label_35ce94;
    }
    ctx->pc = 0x35CE8Cu;
    {
        const bool branch_taken_0x35ce8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ce8c) {
            ctx->pc = 0x35CEA8u;
            goto label_35cea8;
        }
    }
    ctx->pc = 0x35CE94u;
label_35ce94:
    // 0x35ce94: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x35ce94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_35ce98:
    // 0x35ce98: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x35ce98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_35ce9c:
    // 0x35ce9c: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x35ce9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_35cea0:
    // 0x35cea0: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x35cea0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
label_35cea4:
    // 0x35cea4: 0x0  nop
    ctx->pc = 0x35cea4u;
    // NOP
label_35cea8:
    // 0x35cea8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x35cea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35ceac:
    // 0x35ceac: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x35ceacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_35ceb0:
    // 0x35ceb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x35ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_35ceb4:
    // 0x35ceb4: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x35ceb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_35ceb8:
    // 0x35ceb8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35ceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_35cebc:
    // 0x35cebc: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_35cec0:
    if (ctx->pc == 0x35CEC0u) {
        ctx->pc = 0x35CEC0u;
            // 0x35cec0: 0xafa40068  sw          $a0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
        ctx->pc = 0x35CEC4u;
        goto label_35cec4;
    }
    ctx->pc = 0x35CEBCu;
    {
        const bool branch_taken_0x35cebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CEBCu;
            // 0x35cec0: 0xafa40068  sw          $a0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cebc) {
            ctx->pc = 0x35CE8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35ce8c;
        }
    }
    ctx->pc = 0x35CEC4u;
label_35cec4:
    // 0x35cec4: 0x0  nop
    ctx->pc = 0x35cec4u;
    // NOP
label_35cec8:
    // 0x35cec8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x35cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35cecc:
    // 0x35cecc: 0x50540012  beql        $v0, $s4, . + 4 + (0x12 << 2)
label_35ced0:
    if (ctx->pc == 0x35CED0u) {
        ctx->pc = 0x35CED0u;
            // 0x35ced0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x35CED4u;
        goto label_35ced4;
    }
    ctx->pc = 0x35CECCu;
    {
        const bool branch_taken_0x35cecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x35cecc) {
            ctx->pc = 0x35CED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35CECCu;
            // 0x35ced0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35CF18u;
            goto label_35cf18;
        }
    }
    ctx->pc = 0x35CED4u;
label_35ced4:
    // 0x35ced4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x35ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_35ced8:
    // 0x35ced8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x35ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_35cedc:
    // 0x35cedc: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x35cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_35cee0:
    // 0x35cee0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x35cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_35cee4:
    // 0x35cee4: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x35cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_35cee8:
    // 0x35cee8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x35cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_35ceec:
    // 0x35ceec: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x35ceecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_35cef0:
    // 0x35cef0: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x35cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_35cef4:
    // 0x35cef4: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x35cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_35cef8:
    // 0x35cef8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x35cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_35cefc:
    // 0x35cefc: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x35cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_35cf00:
    // 0x35cf00: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x35cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_35cf04:
    // 0x35cf04: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x35cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35cf08:
    // 0x35cf08: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x35cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_35cf0c:
    // 0x35cf0c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x35cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_35cf10:
    // 0x35cf10: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x35cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_35cf14:
    // 0x35cf14: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x35cf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35cf18:
    // 0x35cf18: 0xc0b4b58  jal         func_2D2D60
label_35cf1c:
    if (ctx->pc == 0x35CF1Cu) {
        ctx->pc = 0x35CF1Cu;
            // 0x35cf1c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x35CF20u;
        goto label_35cf20;
    }
    ctx->pc = 0x35CF18u;
    SET_GPR_U32(ctx, 31, 0x35CF20u);
    ctx->pc = 0x35CF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35CF18u;
            // 0x35cf1c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D60u;
    if (runtime->hasFunction(0x2D2D60u)) {
        auto targetFn = runtime->lookupFunction(0x2D2D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35CF20u; }
        if (ctx->pc != 0x35CF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2D60_0x2d2d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35CF20u; }
        if (ctx->pc != 0x35CF20u) { return; }
    }
    ctx->pc = 0x35CF20u;
label_35cf20:
    // 0x35cf20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x35cf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_35cf24:
    // 0x35cf24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35cf24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35cf28:
    // 0x35cf28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35cf28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35cf2c:
    // 0x35cf2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35cf2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35cf30:
    // 0x35cf30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35cf30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35cf34:
    // 0x35cf34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35cf34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35cf38:
    // 0x35cf38: 0x3e00008  jr          $ra
label_35cf3c:
    if (ctx->pc == 0x35CF3Cu) {
        ctx->pc = 0x35CF3Cu;
            // 0x35cf3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x35CF40u;
        goto label_35cf40;
    }
    ctx->pc = 0x35CF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CF38u;
            // 0x35cf3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35CF40u;
label_35cf40:
    // 0x35cf40: 0x80b33ac  j           func_2CCEB0
label_35cf44:
    if (ctx->pc == 0x35CF44u) {
        ctx->pc = 0x35CF44u;
            // 0x35cf44: 0x2484ffa0  addiu       $a0, $a0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967200));
        ctx->pc = 0x35CF48u;
        goto label_35cf48;
    }
    ctx->pc = 0x35CF40u;
    ctx->pc = 0x35CF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35CF40u;
            // 0x35cf44: 0x2484ffa0  addiu       $a0, $a0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CCEB0u;
    {
        auto targetFn = runtime->lookupFunction(0x2CCEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x35CF48u;
label_35cf48:
    // 0x35cf48: 0x0  nop
    ctx->pc = 0x35cf48u;
    // NOP
label_35cf4c:
    // 0x35cf4c: 0x0  nop
    ctx->pc = 0x35cf4cu;
    // NOP
label_35cf50:
    // 0x35cf50: 0x80b34ac  j           func_2CD2B0
label_35cf54:
    if (ctx->pc == 0x35CF54u) {
        ctx->pc = 0x35CF54u;
            // 0x35cf54: 0x2484ffa0  addiu       $a0, $a0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967200));
        ctx->pc = 0x35CF58u;
        goto label_35cf58;
    }
    ctx->pc = 0x35CF50u;
    ctx->pc = 0x35CF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35CF50u;
            // 0x35cf54: 0x2484ffa0  addiu       $a0, $a0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD2B0u;
    {
        auto targetFn = runtime->lookupFunction(0x2CD2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x35CF58u;
label_35cf58:
    // 0x35cf58: 0x0  nop
    ctx->pc = 0x35cf58u;
    // NOP
label_35cf5c:
    // 0x35cf5c: 0x0  nop
    ctx->pc = 0x35cf5cu;
    // NOP
label_35cf60:
    // 0x35cf60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35cf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_35cf64:
    // 0x35cf64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35cf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_35cf68:
    // 0x35cf68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35cf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35cf6c:
    // 0x35cf6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35cf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35cf70:
    // 0x35cf70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35cf70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35cf74:
    // 0x35cf74: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_35cf78:
    if (ctx->pc == 0x35CF78u) {
        ctx->pc = 0x35CF78u;
            // 0x35cf78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35CF7Cu;
        goto label_35cf7c;
    }
    ctx->pc = 0x35CF74u;
    {
        const bool branch_taken_0x35cf74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CF74u;
            // 0x35cf78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cf74) {
            ctx->pc = 0x35CFD0u;
            goto label_35cfd0;
        }
    }
    ctx->pc = 0x35CF7Cu;
label_35cf7c:
    // 0x35cf7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_35cf80:
    // 0x35cf80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x35cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_35cf84:
    // 0x35cf84: 0x246364a0  addiu       $v1, $v1, 0x64A0
    ctx->pc = 0x35cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25760));
label_35cf88:
    // 0x35cf88: 0x244264d8  addiu       $v0, $v0, 0x64D8
    ctx->pc = 0x35cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25816));
label_35cf8c:
    // 0x35cf8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35cf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_35cf90:
    // 0x35cf90: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_35cf94:
    if (ctx->pc == 0x35CF94u) {
        ctx->pc = 0x35CF94u;
            // 0x35cf94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x35CF98u;
        goto label_35cf98;
    }
    ctx->pc = 0x35CF90u;
    {
        const bool branch_taken_0x35cf90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CF90u;
            // 0x35cf94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cf90) {
            ctx->pc = 0x35CFB8u;
            goto label_35cfb8;
        }
    }
    ctx->pc = 0x35CF98u;
label_35cf98:
    // 0x35cf98: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_35cf9c:
    // 0x35cf9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x35cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_35cfa0:
    // 0x35cfa0: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x35cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_35cfa4:
    // 0x35cfa4: 0x24420138  addiu       $v0, $v0, 0x138
    ctx->pc = 0x35cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 312));
label_35cfa8:
    // 0x35cfa8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35cfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_35cfac:
    // 0x35cfac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35cfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35cfb0:
    // 0x35cfb0: 0xc0b2fc8  jal         func_2CBF20
label_35cfb4:
    if (ctx->pc == 0x35CFB4u) {
        ctx->pc = 0x35CFB4u;
            // 0x35cfb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x35CFB8u;
        goto label_35cfb8;
    }
    ctx->pc = 0x35CFB0u;
    SET_GPR_U32(ctx, 31, 0x35CFB8u);
    ctx->pc = 0x35CFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35CFB0u;
            // 0x35cfb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CBF20u;
    if (runtime->hasFunction(0x2CBF20u)) {
        auto targetFn = runtime->lookupFunction(0x2CBF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35CFB8u; }
        if (ctx->pc != 0x35CFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CBF20_0x2cbf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35CFB8u; }
        if (ctx->pc != 0x35CFB8u) { return; }
    }
    ctx->pc = 0x35CFB8u;
label_35cfb8:
    // 0x35cfb8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x35cfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_35cfbc:
    // 0x35cfbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35cfbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_35cfc0:
    // 0x35cfc0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_35cfc4:
    if (ctx->pc == 0x35CFC4u) {
        ctx->pc = 0x35CFC4u;
            // 0x35cfc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35CFC8u;
        goto label_35cfc8;
    }
    ctx->pc = 0x35CFC0u;
    {
        const bool branch_taken_0x35cfc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x35cfc0) {
            ctx->pc = 0x35CFC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35CFC0u;
            // 0x35cfc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35CFD4u;
            goto label_35cfd4;
        }
    }
    ctx->pc = 0x35CFC8u;
label_35cfc8:
    // 0x35cfc8: 0xc0400a8  jal         func_1002A0
label_35cfcc:
    if (ctx->pc == 0x35CFCCu) {
        ctx->pc = 0x35CFCCu;
            // 0x35cfcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35CFD0u;
        goto label_35cfd0;
    }
    ctx->pc = 0x35CFC8u;
    SET_GPR_U32(ctx, 31, 0x35CFD0u);
    ctx->pc = 0x35CFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35CFC8u;
            // 0x35cfcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35CFD0u; }
        if (ctx->pc != 0x35CFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35CFD0u; }
        if (ctx->pc != 0x35CFD0u) { return; }
    }
    ctx->pc = 0x35CFD0u;
label_35cfd0:
    // 0x35cfd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35cfd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35cfd4:
    // 0x35cfd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35cfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35cfd8:
    // 0x35cfd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35cfd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35cfdc:
    // 0x35cfdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35cfdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35cfe0:
    // 0x35cfe0: 0x3e00008  jr          $ra
label_35cfe4:
    if (ctx->pc == 0x35CFE4u) {
        ctx->pc = 0x35CFE4u;
            // 0x35cfe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35CFE8u;
        goto label_35cfe8;
    }
    ctx->pc = 0x35CFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35CFE0u;
            // 0x35cfe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35CFE8u;
label_35cfe8:
    // 0x35cfe8: 0x0  nop
    ctx->pc = 0x35cfe8u;
    // NOP
label_35cfec:
    // 0x35cfec: 0x0  nop
    ctx->pc = 0x35cfecu;
    // NOP
label_35cff0:
    // 0x35cff0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x35cff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_35cff4:
    // 0x35cff4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35cff8:
    // 0x35cff8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x35cff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_35cffc:
    // 0x35cffc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x35cffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_35d000:
    // 0x35d000: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x35d000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_35d004:
    // 0x35d004: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x35d004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_35d008:
    // 0x35d008: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x35d008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_35d00c:
    // 0x35d00c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x35d00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_35d010:
    // 0x35d010: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35d010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_35d014:
    // 0x35d014: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x35d014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_35d018:
    // 0x35d018: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35d018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_35d01c:
    // 0x35d01c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35d01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_35d020:
    // 0x35d020: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x35d020u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_35d024:
    // 0x35d024: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x35d024u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_35d028:
    // 0x35d028: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x35d028u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_35d02c:
    // 0x35d02c: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_35d030:
    if (ctx->pc == 0x35D030u) {
        ctx->pc = 0x35D030u;
            // 0x35d030: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35D034u;
        goto label_35d034;
    }
    ctx->pc = 0x35D02Cu;
    {
        const bool branch_taken_0x35d02c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x35D030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D02Cu;
            // 0x35d030: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d02c) {
            ctx->pc = 0x35D07Cu;
            goto label_35d07c;
        }
    }
    ctx->pc = 0x35D034u;
label_35d034:
    // 0x35d034: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35d034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35d038:
    // 0x35d038: 0x50a300e8  beql        $a1, $v1, . + 4 + (0xE8 << 2)
label_35d03c:
    if (ctx->pc == 0x35D03Cu) {
        ctx->pc = 0x35D03Cu;
            // 0x35d03c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x35D040u;
        goto label_35d040;
    }
    ctx->pc = 0x35D038u;
    {
        const bool branch_taken_0x35d038 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35d038) {
            ctx->pc = 0x35D03Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35D038u;
            // 0x35d03c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35D3DCu;
            goto label_35d3dc;
        }
    }
    ctx->pc = 0x35D040u;
label_35d040:
    // 0x35d040: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35d040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35d044:
    // 0x35d044: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_35d048:
    if (ctx->pc == 0x35D048u) {
        ctx->pc = 0x35D04Cu;
        goto label_35d04c;
    }
    ctx->pc = 0x35D044u;
    {
        const bool branch_taken_0x35d044 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35d044) {
            ctx->pc = 0x35D054u;
            goto label_35d054;
        }
    }
    ctx->pc = 0x35D04Cu;
label_35d04c:
    // 0x35d04c: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_35d050:
    if (ctx->pc == 0x35D050u) {
        ctx->pc = 0x35D054u;
        goto label_35d054;
    }
    ctx->pc = 0x35D04Cu;
    {
        const bool branch_taken_0x35d04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d04c) {
            ctx->pc = 0x35D3D8u;
            goto label_35d3d8;
        }
    }
    ctx->pc = 0x35D054u;
label_35d054:
    // 0x35d054: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35d054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35d058:
    // 0x35d058: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35d058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35d05c:
    // 0x35d05c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x35d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_35d060:
    // 0x35d060: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x35d060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_35d064:
    // 0x35d064: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x35d064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_35d068:
    // 0x35d068: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x35d068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_35d06c:
    // 0x35d06c: 0x320f809  jalr        $t9
label_35d070:
    if (ctx->pc == 0x35D070u) {
        ctx->pc = 0x35D070u;
            // 0x35d070: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x35D074u;
        goto label_35d074;
    }
    ctx->pc = 0x35D06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35D074u);
        ctx->pc = 0x35D070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D06Cu;
            // 0x35d070: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35D074u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35D074u; }
            if (ctx->pc != 0x35D074u) { return; }
        }
        }
    }
    ctx->pc = 0x35D074u;
label_35d074:
    // 0x35d074: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_35d078:
    if (ctx->pc == 0x35D078u) {
        ctx->pc = 0x35D07Cu;
        goto label_35d07c;
    }
    ctx->pc = 0x35D074u;
    {
        const bool branch_taken_0x35d074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d074) {
            ctx->pc = 0x35D3D8u;
            goto label_35d3d8;
        }
    }
    ctx->pc = 0x35D07Cu;
label_35d07c:
    // 0x35d07c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35d080:
    // 0x35d080: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x35d080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_35d084:
    // 0x35d084: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x35d084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_35d088:
    // 0x35d088: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x35d088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_35d08c:
    // 0x35d08c: 0x8c85d130  lw          $a1, -0x2ED0($a0)
    ctx->pc = 0x35d08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_35d090:
    // 0x35d090: 0x26930084  addiu       $s3, $s4, 0x84
    ctx->pc = 0x35d090u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 132));
label_35d094:
    // 0x35d094: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x35d094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_35d098:
    // 0x35d098: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35d098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35d09c:
    // 0x35d09c: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x35d09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_35d0a0:
    // 0x35d0a0: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x35d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_35d0a4:
    // 0x35d0a4: 0x8cb60130  lw          $s6, 0x130($a1)
    ctx->pc = 0x35d0a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_35d0a8:
    // 0x35d0a8: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x35d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
label_35d0ac:
    // 0x35d0ac: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x35d0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_35d0b0:
    // 0x35d0b0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x35d0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_35d0b4:
    // 0x35d0b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_35d0b8:
    // 0x35d0b8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x35d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_35d0bc:
    // 0x35d0bc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x35d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_35d0c0:
    // 0x35d0c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35d0c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35d0c4:
    // 0x35d0c4: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x35d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_35d0c8:
    // 0x35d0c8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x35d0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_35d0cc:
    // 0x35d0cc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x35d0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_35d0d0:
    // 0x35d0d0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x35d0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35d0d4:
    // 0x35d0d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x35d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_35d0d8:
    // 0x35d0d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35d0dc:
    // 0x35d0dc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x35d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_35d0e0:
    // 0x35d0e0: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x35d0e0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_35d0e4:
    // 0x35d0e4: 0x24be0010  addiu       $fp, $a1, 0x10
    ctx->pc = 0x35d0e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_35d0e8:
    // 0x35d0e8: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x35d0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_35d0ec:
    // 0x35d0ec: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x35d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_35d0f0:
    // 0x35d0f0: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x35d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_35d0f4:
    // 0x35d0f4: 0xc04e738  jal         func_139CE0
label_35d0f8:
    if (ctx->pc == 0x35D0F8u) {
        ctx->pc = 0x35D0F8u;
            // 0x35d0f8: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->pc = 0x35D0FCu;
        goto label_35d0fc;
    }
    ctx->pc = 0x35D0F4u;
    SET_GPR_U32(ctx, 31, 0x35D0FCu);
    ctx->pc = 0x35D0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D0F4u;
            // 0x35d0f8: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D0FCu; }
        if (ctx->pc != 0x35D0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D0FCu; }
        if (ctx->pc != 0x35D0FCu) { return; }
    }
    ctx->pc = 0x35D0FCu;
label_35d0fc:
    // 0x35d0fc: 0x92830090  lbu         $v1, 0x90($s4)
    ctx->pc = 0x35d0fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 144)));
label_35d100:
    // 0x35d100: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_35d104:
    if (ctx->pc == 0x35D104u) {
        ctx->pc = 0x35D104u;
            // 0x35d104: 0x8e970070  lw          $s7, 0x70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->pc = 0x35D108u;
        goto label_35d108;
    }
    ctx->pc = 0x35D100u;
    {
        const bool branch_taken_0x35d100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d100) {
            ctx->pc = 0x35D104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35D100u;
            // 0x35d104: 0x8e970070  lw          $s7, 0x70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35D124u;
            goto label_35d124;
        }
    }
    ctx->pc = 0x35D108u;
label_35d108:
    // 0x35d108: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35d108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35d10c:
    // 0x35d10c: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x35d10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_35d110:
    // 0x35d110: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35d110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35d114:
    // 0x35d114: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x35d114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_35d118:
    // 0x35d118: 0x320f809  jalr        $t9
label_35d11c:
    if (ctx->pc == 0x35D11Cu) {
        ctx->pc = 0x35D120u;
        goto label_35d120;
    }
    ctx->pc = 0x35D118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35D120u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x35D120u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35D120u; }
            if (ctx->pc != 0x35D120u) { return; }
        }
        }
    }
    ctx->pc = 0x35D120u;
label_35d120:
    // 0x35d120: 0x8e970070  lw          $s7, 0x70($s4)
    ctx->pc = 0x35d120u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_35d124:
    // 0x35d124: 0x52e000a4  beql        $s7, $zero, . + 4 + (0xA4 << 2)
label_35d128:
    if (ctx->pc == 0x35D128u) {
        ctx->pc = 0x35D128u;
            // 0x35d128: 0x92830090  lbu         $v1, 0x90($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 144)));
        ctx->pc = 0x35D12Cu;
        goto label_35d12c;
    }
    ctx->pc = 0x35D124u;
    {
        const bool branch_taken_0x35d124 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d124) {
            ctx->pc = 0x35D128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35D124u;
            // 0x35d128: 0x92830090  lbu         $v1, 0x90($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35D3B8u;
            goto label_35d3b8;
        }
    }
    ctx->pc = 0x35D12Cu;
label_35d12c:
    // 0x35d12c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_35d130:
    // 0x35d130: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35d130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35d134:
    // 0x35d134: 0xc4544560  lwc1        $f20, 0x4560($v0)
    ctx->pc = 0x35d134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35d138:
    // 0x35d138: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35d138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35d13c:
    // 0x35d13c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x35d13cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_35d140:
    // 0x35d140: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x35d140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_35d144:
    // 0x35d144: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x35d144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_35d148:
    // 0x35d148: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x35d148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_35d14c:
    // 0x35d14c: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x35d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_35d150:
    // 0x35d150: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x35d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_35d154:
    // 0x35d154: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x35d154u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35d158:
    // 0x35d158: 0xc0d410c  jal         func_350430
label_35d15c:
    if (ctx->pc == 0x35D15Cu) {
        ctx->pc = 0x35D15Cu;
            // 0x35d15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35D160u;
        goto label_35d160;
    }
    ctx->pc = 0x35D158u;
    SET_GPR_U32(ctx, 31, 0x35D160u);
    ctx->pc = 0x35D15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D158u;
            // 0x35d15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350430u;
    if (runtime->hasFunction(0x350430u)) {
        auto targetFn = runtime->lookupFunction(0x350430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D160u; }
        if (ctx->pc != 0x35D160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350430_0x350430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D160u; }
        if (ctx->pc != 0x35D160u) { return; }
    }
    ctx->pc = 0x35D160u;
label_35d160:
    // 0x35d160: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x35d160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35d164:
    // 0x35d164: 0x10600084  beqz        $v1, . + 4 + (0x84 << 2)
label_35d168:
    if (ctx->pc == 0x35D168u) {
        ctx->pc = 0x35D16Cu;
        goto label_35d16c;
    }
    ctx->pc = 0x35D164u;
    {
        const bool branch_taken_0x35d164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d164) {
            ctx->pc = 0x35D378u;
            goto label_35d378;
        }
    }
    ctx->pc = 0x35D16Cu;
label_35d16c:
    // 0x35d16c: 0xc0d63d8  jal         func_358F60
label_35d170:
    if (ctx->pc == 0x35D170u) {
        ctx->pc = 0x35D170u;
            // 0x35d170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35D174u;
        goto label_35d174;
    }
    ctx->pc = 0x35D16Cu;
    SET_GPR_U32(ctx, 31, 0x35D174u);
    ctx->pc = 0x35D170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D16Cu;
            // 0x35d170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F60u;
    if (runtime->hasFunction(0x358F60u)) {
        auto targetFn = runtime->lookupFunction(0x358F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D174u; }
        if (ctx->pc != 0x35D174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F60_0x358f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D174u; }
        if (ctx->pc != 0x35D174u) { return; }
    }
    ctx->pc = 0x35D174u;
label_35d174:
    // 0x35d174: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
label_35d178:
    if (ctx->pc == 0x35D178u) {
        ctx->pc = 0x35D17Cu;
        goto label_35d17c;
    }
    ctx->pc = 0x35D174u;
    {
        const bool branch_taken_0x35d174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d174) {
            ctx->pc = 0x35D378u;
            goto label_35d378;
        }
    }
    ctx->pc = 0x35D17Cu;
label_35d17c:
    // 0x35d17c: 0xc0d1c14  jal         func_347050
label_35d180:
    if (ctx->pc == 0x35D180u) {
        ctx->pc = 0x35D180u;
            // 0x35d180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35D184u;
        goto label_35d184;
    }
    ctx->pc = 0x35D17Cu;
    SET_GPR_U32(ctx, 31, 0x35D184u);
    ctx->pc = 0x35D180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D17Cu;
            // 0x35d180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D184u; }
        if (ctx->pc != 0x35D184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D184u; }
        if (ctx->pc != 0x35D184u) { return; }
    }
    ctx->pc = 0x35D184u;
label_35d184:
    // 0x35d184: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35d184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35d188:
    // 0x35d188: 0xc04f278  jal         func_13C9E0
label_35d18c:
    if (ctx->pc == 0x35D18Cu) {
        ctx->pc = 0x35D18Cu;
            // 0x35d18c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x35D190u;
        goto label_35d190;
    }
    ctx->pc = 0x35D188u;
    SET_GPR_U32(ctx, 31, 0x35D190u);
    ctx->pc = 0x35D18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D188u;
            // 0x35d18c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D190u; }
        if (ctx->pc != 0x35D190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D190u; }
        if (ctx->pc != 0x35D190u) { return; }
    }
    ctx->pc = 0x35D190u;
label_35d190:
    // 0x35d190: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x35d190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35d194:
    // 0x35d194: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x35d194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_35d198:
    // 0x35d198: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x35d198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35d19c:
    // 0x35d19c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x35d19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_35d1a0:
    // 0x35d1a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35d1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35d1a4:
    // 0x35d1a4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x35d1a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_35d1a8:
    // 0x35d1a8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35d1a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_35d1ac:
    // 0x35d1ac: 0xc04ce50  jal         func_133940
label_35d1b0:
    if (ctx->pc == 0x35D1B0u) {
        ctx->pc = 0x35D1B0u;
            // 0x35d1b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x35D1B4u;
        goto label_35d1b4;
    }
    ctx->pc = 0x35D1ACu;
    SET_GPR_U32(ctx, 31, 0x35D1B4u);
    ctx->pc = 0x35D1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D1ACu;
            // 0x35d1b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D1B4u; }
        if (ctx->pc != 0x35D1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D1B4u; }
        if (ctx->pc != 0x35D1B4u) { return; }
    }
    ctx->pc = 0x35D1B4u;
label_35d1b4:
    // 0x35d1b4: 0xc0d1c10  jal         func_347040
label_35d1b8:
    if (ctx->pc == 0x35D1B8u) {
        ctx->pc = 0x35D1B8u;
            // 0x35d1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35D1BCu;
        goto label_35d1bc;
    }
    ctx->pc = 0x35D1B4u;
    SET_GPR_U32(ctx, 31, 0x35D1BCu);
    ctx->pc = 0x35D1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D1B4u;
            // 0x35d1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D1BCu; }
        if (ctx->pc != 0x35D1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D1BCu; }
        if (ctx->pc != 0x35D1BCu) { return; }
    }
    ctx->pc = 0x35D1BCu;
label_35d1bc:
    // 0x35d1bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35d1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35d1c0:
    // 0x35d1c0: 0xc04ce80  jal         func_133A00
label_35d1c4:
    if (ctx->pc == 0x35D1C4u) {
        ctx->pc = 0x35D1C4u;
            // 0x35d1c4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x35D1C8u;
        goto label_35d1c8;
    }
    ctx->pc = 0x35D1C0u;
    SET_GPR_U32(ctx, 31, 0x35D1C8u);
    ctx->pc = 0x35D1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D1C0u;
            // 0x35d1c4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D1C8u; }
        if (ctx->pc != 0x35D1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D1C8u; }
        if (ctx->pc != 0x35D1C8u) { return; }
    }
    ctx->pc = 0x35D1C8u;
label_35d1c8:
    // 0x35d1c8: 0xc0d4108  jal         func_350420
label_35d1cc:
    if (ctx->pc == 0x35D1CCu) {
        ctx->pc = 0x35D1D0u;
        goto label_35d1d0;
    }
    ctx->pc = 0x35D1C8u;
    SET_GPR_U32(ctx, 31, 0x35D1D0u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D1D0u; }
        if (ctx->pc != 0x35D1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D1D0u; }
        if (ctx->pc != 0x35D1D0u) { return; }
    }
    ctx->pc = 0x35D1D0u;
label_35d1d0:
    // 0x35d1d0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x35d1d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35d1d4:
    // 0x35d1d4: 0xc0d4104  jal         func_350410
label_35d1d8:
    if (ctx->pc == 0x35D1D8u) {
        ctx->pc = 0x35D1D8u;
            // 0x35d1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35D1DCu;
        goto label_35d1dc;
    }
    ctx->pc = 0x35D1D4u;
    SET_GPR_U32(ctx, 31, 0x35D1DCu);
    ctx->pc = 0x35D1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D1D4u;
            // 0x35d1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D1DCu; }
        if (ctx->pc != 0x35D1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D1DCu; }
        if (ctx->pc != 0x35D1DCu) { return; }
    }
    ctx->pc = 0x35D1DCu;
label_35d1dc:
    // 0x35d1dc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x35d1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35d1e0:
    // 0x35d1e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35d1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35d1e4:
    // 0x35d1e4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x35d1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_35d1e8:
    // 0x35d1e8: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x35d1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_35d1ec:
    // 0x35d1ec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x35d1ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35d1f0:
    // 0x35d1f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35d1f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35d1f4:
    // 0x35d1f4: 0xc0d40ac  jal         func_3502B0
label_35d1f8:
    if (ctx->pc == 0x35D1F8u) {
        ctx->pc = 0x35D1F8u;
            // 0x35d1f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x35D1FCu;
        goto label_35d1fc;
    }
    ctx->pc = 0x35D1F4u;
    SET_GPR_U32(ctx, 31, 0x35D1FCu);
    ctx->pc = 0x35D1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D1F4u;
            // 0x35d1f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D1FCu; }
        if (ctx->pc != 0x35D1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D1FCu; }
        if (ctx->pc != 0x35D1FCu) { return; }
    }
    ctx->pc = 0x35D1FCu;
label_35d1fc:
    // 0x35d1fc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x35d1fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_35d200:
    // 0x35d200: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
label_35d204:
    if (ctx->pc == 0x35D204u) {
        ctx->pc = 0x35D204u;
            // 0x35d204: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x35D208u;
        goto label_35d208;
    }
    ctx->pc = 0x35D200u;
    {
        const bool branch_taken_0x35d200 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D200u;
            // 0x35d204: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d200) {
            ctx->pc = 0x35D378u;
            goto label_35d378;
        }
    }
    ctx->pc = 0x35D208u;
label_35d208:
    // 0x35d208: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x35d208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35d20c:
    // 0x35d20c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x35d20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_35d210:
    // 0x35d210: 0xc0d7514  jal         func_35D450
label_35d214:
    if (ctx->pc == 0x35D214u) {
        ctx->pc = 0x35D214u;
            // 0x35d214: 0x27a6013c  addiu       $a2, $sp, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
        ctx->pc = 0x35D218u;
        goto label_35d218;
    }
    ctx->pc = 0x35D210u;
    SET_GPR_U32(ctx, 31, 0x35D218u);
    ctx->pc = 0x35D214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D210u;
            // 0x35d214: 0x27a6013c  addiu       $a2, $sp, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35D450u;
    if (runtime->hasFunction(0x35D450u)) {
        auto targetFn = runtime->lookupFunction(0x35D450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D218u; }
        if (ctx->pc != 0x35D218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035D450_0x35d450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D218u; }
        if (ctx->pc != 0x35D218u) { return; }
    }
    ctx->pc = 0x35D218u;
label_35d218:
    // 0x35d218: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x35d218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35d21c:
    // 0x35d21c: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x35d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_35d220:
    // 0x35d220: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x35d220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_35d224:
    // 0x35d224: 0xc04e4a4  jal         func_139290
label_35d228:
    if (ctx->pc == 0x35D228u) {
        ctx->pc = 0x35D228u;
            // 0x35d228: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35D22Cu;
        goto label_35d22c;
    }
    ctx->pc = 0x35D224u;
    SET_GPR_U32(ctx, 31, 0x35D22Cu);
    ctx->pc = 0x35D228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D224u;
            // 0x35d228: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D22Cu; }
        if (ctx->pc != 0x35D22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D22Cu; }
        if (ctx->pc != 0x35D22Cu) { return; }
    }
    ctx->pc = 0x35D22Cu;
label_35d22c:
    // 0x35d22c: 0x963500a4  lhu         $s5, 0xA4($s1)
    ctx->pc = 0x35d22cu;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 164)));
label_35d230:
    // 0x35d230: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x35d230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_35d234:
    // 0x35d234: 0x24634570  addiu       $v1, $v1, 0x4570
    ctx->pc = 0x35d234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17776));
label_35d238:
    // 0x35d238: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x35d238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_35d23c:
    // 0x35d23c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35d23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35d240:
    // 0x35d240: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x35d240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_35d244:
    // 0x35d244: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x35d244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_35d248:
    // 0x35d248: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35d248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35d24c:
    // 0x35d24c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x35d24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_35d250:
    // 0x35d250: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35d250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35d254:
    // 0x35d254: 0xc04a576  jal         func_1295D8
label_35d258:
    if (ctx->pc == 0x35D258u) {
        ctx->pc = 0x35D258u;
            // 0x35d258: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x35D25Cu;
        goto label_35d25c;
    }
    ctx->pc = 0x35D254u;
    SET_GPR_U32(ctx, 31, 0x35D25Cu);
    ctx->pc = 0x35D258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D254u;
            // 0x35d258: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D25Cu; }
        if (ctx->pc != 0x35D25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D25Cu; }
        if (ctx->pc != 0x35D25Cu) { return; }
    }
    ctx->pc = 0x35D25Cu;
label_35d25c:
    // 0x35d25c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35d260:
    // 0x35d260: 0x16a20019  bne         $s5, $v0, . + 4 + (0x19 << 2)
label_35d264:
    if (ctx->pc == 0x35D264u) {
        ctx->pc = 0x35D268u;
        goto label_35d268;
    }
    ctx->pc = 0x35D260u;
    {
        const bool branch_taken_0x35d260 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x35d260) {
            ctx->pc = 0x35D2C8u;
            goto label_35d2c8;
        }
    }
    ctx->pc = 0x35D268u;
label_35d268:
    // 0x35d268: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x35d268u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_35d26c:
    // 0x35d26c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x35d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_35d270:
    // 0x35d270: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_35d274:
    if (ctx->pc == 0x35D274u) {
        ctx->pc = 0x35D274u;
            // 0x35d274: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x35D278u;
        goto label_35d278;
    }
    ctx->pc = 0x35D270u;
    {
        const bool branch_taken_0x35d270 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35d270) {
            ctx->pc = 0x35D274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35D270u;
            // 0x35d274: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35D284u;
            goto label_35d284;
        }
    }
    ctx->pc = 0x35D278u;
label_35d278:
    // 0x35d278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35d278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35d27c:
    // 0x35d27c: 0x10000007  b           . + 4 + (0x7 << 2)
label_35d280:
    if (ctx->pc == 0x35D280u) {
        ctx->pc = 0x35D280u;
            // 0x35d280: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x35D284u;
        goto label_35d284;
    }
    ctx->pc = 0x35D27Cu;
    {
        const bool branch_taken_0x35d27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D27Cu;
            // 0x35d280: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d27c) {
            ctx->pc = 0x35D29Cu;
            goto label_35d29c;
        }
    }
    ctx->pc = 0x35D284u;
label_35d284:
    // 0x35d284: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35d284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_35d288:
    // 0x35d288: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35d288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_35d28c:
    // 0x35d28c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35d28cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35d290:
    // 0x35d290: 0x0  nop
    ctx->pc = 0x35d290u;
    // NOP
label_35d294:
    // 0x35d294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35d294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_35d298:
    // 0x35d298: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x35d298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_35d29c:
    // 0x35d29c: 0xc0477a8  jal         func_11DEA0
label_35d2a0:
    if (ctx->pc == 0x35D2A0u) {
        ctx->pc = 0x35D2A0u;
            // 0x35d2a0: 0x4600ab02  mul.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x35D2A4u;
        goto label_35d2a4;
    }
    ctx->pc = 0x35D29Cu;
    SET_GPR_U32(ctx, 31, 0x35D2A4u);
    ctx->pc = 0x35D2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D29Cu;
            // 0x35d2a0: 0x4600ab02  mul.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D2A4u; }
        if (ctx->pc != 0x35D2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D2A4u; }
        if (ctx->pc != 0x35D2A4u) { return; }
    }
    ctx->pc = 0x35D2A4u;
label_35d2a4:
    // 0x35d2a4: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x35d2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35d2a8:
    // 0x35d2a8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x35d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_35d2ac:
    // 0x35d2ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x35d2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_35d2b0:
    // 0x35d2b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x35d2b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35d2b4:
    // 0x35d2b4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x35d2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_35d2b8:
    // 0x35d2b8: 0x0  nop
    ctx->pc = 0x35d2b8u;
    // NOP
label_35d2bc:
    // 0x35d2bc: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x35d2bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_35d2c0:
    // 0x35d2c0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x35d2c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_35d2c4:
    // 0x35d2c4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x35d2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_35d2c8:
    // 0x35d2c8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x35d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_35d2cc:
    // 0x35d2cc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x35d2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_35d2d0:
    // 0x35d2d0: 0xc04cd60  jal         func_133580
label_35d2d4:
    if (ctx->pc == 0x35D2D4u) {
        ctx->pc = 0x35D2D4u;
            // 0x35d2d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35D2D8u;
        goto label_35d2d8;
    }
    ctx->pc = 0x35D2D0u;
    SET_GPR_U32(ctx, 31, 0x35D2D8u);
    ctx->pc = 0x35D2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D2D0u;
            // 0x35d2d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D2D8u; }
        if (ctx->pc != 0x35D2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D2D8u; }
        if (ctx->pc != 0x35D2D8u) { return; }
    }
    ctx->pc = 0x35D2D8u;
label_35d2d8:
    // 0x35d2d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x35d2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35d2dc:
    // 0x35d2dc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x35d2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_35d2e0:
    // 0x35d2e0: 0x320f809  jalr        $t9
label_35d2e4:
    if (ctx->pc == 0x35D2E4u) {
        ctx->pc = 0x35D2E4u;
            // 0x35d2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35D2E8u;
        goto label_35d2e8;
    }
    ctx->pc = 0x35D2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35D2E8u);
        ctx->pc = 0x35D2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D2E0u;
            // 0x35d2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35D2E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35D2E8u; }
            if (ctx->pc != 0x35D2E8u) { return; }
        }
        }
    }
    ctx->pc = 0x35D2E8u;
label_35d2e8:
    // 0x35d2e8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x35d2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_35d2ec:
    // 0x35d2ec: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x35d2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_35d2f0:
    // 0x35d2f0: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x35d2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_35d2f4:
    // 0x35d2f4: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x35d2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_35d2f8:
    // 0x35d2f8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x35d2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35d2fc:
    // 0x35d2fc: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x35d2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_35d300:
    // 0x35d300: 0xc04cfcc  jal         func_133F30
label_35d304:
    if (ctx->pc == 0x35D304u) {
        ctx->pc = 0x35D304u;
            // 0x35d304: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35D308u;
        goto label_35d308;
    }
    ctx->pc = 0x35D300u;
    SET_GPR_U32(ctx, 31, 0x35D308u);
    ctx->pc = 0x35D304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D300u;
            // 0x35d304: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D308u; }
        if (ctx->pc != 0x35D308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D308u; }
        if (ctx->pc != 0x35D308u) { return; }
    }
    ctx->pc = 0x35D308u;
label_35d308:
    // 0x35d308: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x35d308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35d30c:
    // 0x35d30c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x35d30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_35d310:
    // 0x35d310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35d310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35d314:
    // 0x35d314: 0x0  nop
    ctx->pc = 0x35d314u;
    // NOP
label_35d318:
    // 0x35d318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35d318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35d31c:
    // 0x35d31c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_35d320:
    if (ctx->pc == 0x35D320u) {
        ctx->pc = 0x35D324u;
        goto label_35d324;
    }
    ctx->pc = 0x35D31Cu;
    {
        const bool branch_taken_0x35d31c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35d31c) {
            ctx->pc = 0x35D378u;
            goto label_35d378;
        }
    }
    ctx->pc = 0x35D324u;
label_35d324:
    // 0x35d324: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35d324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_35d328:
    // 0x35d328: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x35d328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35d32c:
    // 0x35d32c: 0x24424568  addiu       $v0, $v0, 0x4568
    ctx->pc = 0x35d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17768));
label_35d330:
    // 0x35d330: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x35d330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_35d334:
    // 0x35d334: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x35d334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_35d338:
    // 0x35d338: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x35d338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_35d33c:
    // 0x35d33c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x35d33cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_35d340:
    // 0x35d340: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x35d340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_35d344:
    // 0x35d344: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x35d344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_35d348:
    // 0x35d348: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35d348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_35d34c:
    // 0x35d34c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x35d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_35d350:
    // 0x35d350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35d350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35d354:
    // 0x35d354: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x35d354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_35d358:
    // 0x35d358: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x35d358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35d35c:
    // 0x35d35c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x35d35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_35d360:
    // 0x35d360: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x35d360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_35d364:
    // 0x35d364: 0xc0d7504  jal         func_35D410
label_35d368:
    if (ctx->pc == 0x35D368u) {
        ctx->pc = 0x35D368u;
            // 0x35d368: 0x24510028  addiu       $s1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x35D36Cu;
        goto label_35d36c;
    }
    ctx->pc = 0x35D364u;
    SET_GPR_U32(ctx, 31, 0x35D36Cu);
    ctx->pc = 0x35D368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D364u;
            // 0x35d368: 0x24510028  addiu       $s1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35D410u;
    if (runtime->hasFunction(0x35D410u)) {
        auto targetFn = runtime->lookupFunction(0x35D410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D36Cu; }
        if (ctx->pc != 0x35D36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035D410_0x35d410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D36Cu; }
        if (ctx->pc != 0x35D36Cu) { return; }
    }
    ctx->pc = 0x35D36Cu;
label_35d36c:
    // 0x35d36c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x35d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_35d370:
    // 0x35d370: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35d370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_35d374:
    // 0x35d374: 0x0  nop
    ctx->pc = 0x35d374u;
    // NOP
label_35d378:
    // 0x35d378: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x35d378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_35d37c:
    // 0x35d37c: 0x257182b  sltu        $v1, $s2, $s7
    ctx->pc = 0x35d37cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_35d380:
    // 0x35d380: 0x1460ff6e  bnez        $v1, . + 4 + (-0x92 << 2)
label_35d384:
    if (ctx->pc == 0x35D384u) {
        ctx->pc = 0x35D384u;
            // 0x35d384: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x35D388u;
        goto label_35d388;
    }
    ctx->pc = 0x35D380u;
    {
        const bool branch_taken_0x35d380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D380u;
            // 0x35d384: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d380) {
            ctx->pc = 0x35D13Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35d13c;
        }
    }
    ctx->pc = 0x35D388u;
label_35d388:
    // 0x35d388: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35d388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35d38c:
    // 0x35d38c: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x35d38cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_35d390:
    // 0x35d390: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_35d394:
    if (ctx->pc == 0x35D394u) {
        ctx->pc = 0x35D394u;
            // 0x35d394: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x35D398u;
        goto label_35d398;
    }
    ctx->pc = 0x35D390u;
    {
        const bool branch_taken_0x35d390 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x35D394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D390u;
            // 0x35d394: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d390) {
            ctx->pc = 0x35D3B4u;
            goto label_35d3b4;
        }
    }
    ctx->pc = 0x35D398u;
label_35d398:
    // 0x35d398: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35d398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35d39c:
    // 0x35d39c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35d3a0:
    // 0x35d3a0: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x35d3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_35d3a4:
    // 0x35d3a4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x35d3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_35d3a8:
    // 0x35d3a8: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x35d3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_35d3ac:
    // 0x35d3ac: 0xc055754  jal         func_155D50
label_35d3b0:
    if (ctx->pc == 0x35D3B0u) {
        ctx->pc = 0x35D3B0u;
            // 0x35d3b0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x35D3B4u;
        goto label_35d3b4;
    }
    ctx->pc = 0x35D3ACu;
    SET_GPR_U32(ctx, 31, 0x35D3B4u);
    ctx->pc = 0x35D3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D3ACu;
            // 0x35d3b0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D3B4u; }
        if (ctx->pc != 0x35D3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D3B4u; }
        if (ctx->pc != 0x35D3B4u) { return; }
    }
    ctx->pc = 0x35D3B4u;
label_35d3b4:
    // 0x35d3b4: 0x92830090  lbu         $v1, 0x90($s4)
    ctx->pc = 0x35d3b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 144)));
label_35d3b8:
    // 0x35d3b8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_35d3bc:
    if (ctx->pc == 0x35D3BCu) {
        ctx->pc = 0x35D3C0u;
        goto label_35d3c0;
    }
    ctx->pc = 0x35D3B8u;
    {
        const bool branch_taken_0x35d3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d3b8) {
            ctx->pc = 0x35D3D8u;
            goto label_35d3d8;
        }
    }
    ctx->pc = 0x35D3C0u;
label_35d3c0:
    // 0x35d3c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35d3c4:
    // 0x35d3c4: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x35d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_35d3c8:
    // 0x35d3c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35d3c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35d3cc:
    // 0x35d3cc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x35d3ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_35d3d0:
    // 0x35d3d0: 0x320f809  jalr        $t9
label_35d3d4:
    if (ctx->pc == 0x35D3D4u) {
        ctx->pc = 0x35D3D8u;
        goto label_35d3d8;
    }
    ctx->pc = 0x35D3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35D3D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x35D3D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35D3D8u; }
            if (ctx->pc != 0x35D3D8u) { return; }
        }
        }
    }
    ctx->pc = 0x35D3D8u;
label_35d3d8:
    // 0x35d3d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x35d3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_35d3dc:
    // 0x35d3dc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x35d3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_35d3e0:
    // 0x35d3e0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x35d3e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_35d3e4:
    // 0x35d3e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x35d3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35d3e8:
    // 0x35d3e8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x35d3e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_35d3ec:
    // 0x35d3ec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x35d3ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_35d3f0:
    // 0x35d3f0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x35d3f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_35d3f4:
    // 0x35d3f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x35d3f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35d3f8:
    // 0x35d3f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35d3f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35d3fc:
    // 0x35d3fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35d3fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35d400:
    // 0x35d400: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35d400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35d404:
    // 0x35d404: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35d404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35d408:
    // 0x35d408: 0x3e00008  jr          $ra
label_35d40c:
    if (ctx->pc == 0x35D40Cu) {
        ctx->pc = 0x35D40Cu;
            // 0x35d40c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x35D410u;
        goto label_fallthrough_0x35d408;
    }
    ctx->pc = 0x35D408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D408u;
            // 0x35d40c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x35d408:
    ctx->pc = 0x35D410u;
}
