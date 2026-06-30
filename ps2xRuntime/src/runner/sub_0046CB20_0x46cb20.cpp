#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046CB20
// Address: 0x46cb20 - 0x46d940
void sub_0046CB20_0x46cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CB20_0x46cb20");
#endif

    switch (ctx->pc) {
        case 0x46cb20u: goto label_46cb20;
        case 0x46cb24u: goto label_46cb24;
        case 0x46cb28u: goto label_46cb28;
        case 0x46cb2cu: goto label_46cb2c;
        case 0x46cb30u: goto label_46cb30;
        case 0x46cb34u: goto label_46cb34;
        case 0x46cb38u: goto label_46cb38;
        case 0x46cb3cu: goto label_46cb3c;
        case 0x46cb40u: goto label_46cb40;
        case 0x46cb44u: goto label_46cb44;
        case 0x46cb48u: goto label_46cb48;
        case 0x46cb4cu: goto label_46cb4c;
        case 0x46cb50u: goto label_46cb50;
        case 0x46cb54u: goto label_46cb54;
        case 0x46cb58u: goto label_46cb58;
        case 0x46cb5cu: goto label_46cb5c;
        case 0x46cb60u: goto label_46cb60;
        case 0x46cb64u: goto label_46cb64;
        case 0x46cb68u: goto label_46cb68;
        case 0x46cb6cu: goto label_46cb6c;
        case 0x46cb70u: goto label_46cb70;
        case 0x46cb74u: goto label_46cb74;
        case 0x46cb78u: goto label_46cb78;
        case 0x46cb7cu: goto label_46cb7c;
        case 0x46cb80u: goto label_46cb80;
        case 0x46cb84u: goto label_46cb84;
        case 0x46cb88u: goto label_46cb88;
        case 0x46cb8cu: goto label_46cb8c;
        case 0x46cb90u: goto label_46cb90;
        case 0x46cb94u: goto label_46cb94;
        case 0x46cb98u: goto label_46cb98;
        case 0x46cb9cu: goto label_46cb9c;
        case 0x46cba0u: goto label_46cba0;
        case 0x46cba4u: goto label_46cba4;
        case 0x46cba8u: goto label_46cba8;
        case 0x46cbacu: goto label_46cbac;
        case 0x46cbb0u: goto label_46cbb0;
        case 0x46cbb4u: goto label_46cbb4;
        case 0x46cbb8u: goto label_46cbb8;
        case 0x46cbbcu: goto label_46cbbc;
        case 0x46cbc0u: goto label_46cbc0;
        case 0x46cbc4u: goto label_46cbc4;
        case 0x46cbc8u: goto label_46cbc8;
        case 0x46cbccu: goto label_46cbcc;
        case 0x46cbd0u: goto label_46cbd0;
        case 0x46cbd4u: goto label_46cbd4;
        case 0x46cbd8u: goto label_46cbd8;
        case 0x46cbdcu: goto label_46cbdc;
        case 0x46cbe0u: goto label_46cbe0;
        case 0x46cbe4u: goto label_46cbe4;
        case 0x46cbe8u: goto label_46cbe8;
        case 0x46cbecu: goto label_46cbec;
        case 0x46cbf0u: goto label_46cbf0;
        case 0x46cbf4u: goto label_46cbf4;
        case 0x46cbf8u: goto label_46cbf8;
        case 0x46cbfcu: goto label_46cbfc;
        case 0x46cc00u: goto label_46cc00;
        case 0x46cc04u: goto label_46cc04;
        case 0x46cc08u: goto label_46cc08;
        case 0x46cc0cu: goto label_46cc0c;
        case 0x46cc10u: goto label_46cc10;
        case 0x46cc14u: goto label_46cc14;
        case 0x46cc18u: goto label_46cc18;
        case 0x46cc1cu: goto label_46cc1c;
        case 0x46cc20u: goto label_46cc20;
        case 0x46cc24u: goto label_46cc24;
        case 0x46cc28u: goto label_46cc28;
        case 0x46cc2cu: goto label_46cc2c;
        case 0x46cc30u: goto label_46cc30;
        case 0x46cc34u: goto label_46cc34;
        case 0x46cc38u: goto label_46cc38;
        case 0x46cc3cu: goto label_46cc3c;
        case 0x46cc40u: goto label_46cc40;
        case 0x46cc44u: goto label_46cc44;
        case 0x46cc48u: goto label_46cc48;
        case 0x46cc4cu: goto label_46cc4c;
        case 0x46cc50u: goto label_46cc50;
        case 0x46cc54u: goto label_46cc54;
        case 0x46cc58u: goto label_46cc58;
        case 0x46cc5cu: goto label_46cc5c;
        case 0x46cc60u: goto label_46cc60;
        case 0x46cc64u: goto label_46cc64;
        case 0x46cc68u: goto label_46cc68;
        case 0x46cc6cu: goto label_46cc6c;
        case 0x46cc70u: goto label_46cc70;
        case 0x46cc74u: goto label_46cc74;
        case 0x46cc78u: goto label_46cc78;
        case 0x46cc7cu: goto label_46cc7c;
        case 0x46cc80u: goto label_46cc80;
        case 0x46cc84u: goto label_46cc84;
        case 0x46cc88u: goto label_46cc88;
        case 0x46cc8cu: goto label_46cc8c;
        case 0x46cc90u: goto label_46cc90;
        case 0x46cc94u: goto label_46cc94;
        case 0x46cc98u: goto label_46cc98;
        case 0x46cc9cu: goto label_46cc9c;
        case 0x46cca0u: goto label_46cca0;
        case 0x46cca4u: goto label_46cca4;
        case 0x46cca8u: goto label_46cca8;
        case 0x46ccacu: goto label_46ccac;
        case 0x46ccb0u: goto label_46ccb0;
        case 0x46ccb4u: goto label_46ccb4;
        case 0x46ccb8u: goto label_46ccb8;
        case 0x46ccbcu: goto label_46ccbc;
        case 0x46ccc0u: goto label_46ccc0;
        case 0x46ccc4u: goto label_46ccc4;
        case 0x46ccc8u: goto label_46ccc8;
        case 0x46ccccu: goto label_46cccc;
        case 0x46ccd0u: goto label_46ccd0;
        case 0x46ccd4u: goto label_46ccd4;
        case 0x46ccd8u: goto label_46ccd8;
        case 0x46ccdcu: goto label_46ccdc;
        case 0x46cce0u: goto label_46cce0;
        case 0x46cce4u: goto label_46cce4;
        case 0x46cce8u: goto label_46cce8;
        case 0x46ccecu: goto label_46ccec;
        case 0x46ccf0u: goto label_46ccf0;
        case 0x46ccf4u: goto label_46ccf4;
        case 0x46ccf8u: goto label_46ccf8;
        case 0x46ccfcu: goto label_46ccfc;
        case 0x46cd00u: goto label_46cd00;
        case 0x46cd04u: goto label_46cd04;
        case 0x46cd08u: goto label_46cd08;
        case 0x46cd0cu: goto label_46cd0c;
        case 0x46cd10u: goto label_46cd10;
        case 0x46cd14u: goto label_46cd14;
        case 0x46cd18u: goto label_46cd18;
        case 0x46cd1cu: goto label_46cd1c;
        case 0x46cd20u: goto label_46cd20;
        case 0x46cd24u: goto label_46cd24;
        case 0x46cd28u: goto label_46cd28;
        case 0x46cd2cu: goto label_46cd2c;
        case 0x46cd30u: goto label_46cd30;
        case 0x46cd34u: goto label_46cd34;
        case 0x46cd38u: goto label_46cd38;
        case 0x46cd3cu: goto label_46cd3c;
        case 0x46cd40u: goto label_46cd40;
        case 0x46cd44u: goto label_46cd44;
        case 0x46cd48u: goto label_46cd48;
        case 0x46cd4cu: goto label_46cd4c;
        case 0x46cd50u: goto label_46cd50;
        case 0x46cd54u: goto label_46cd54;
        case 0x46cd58u: goto label_46cd58;
        case 0x46cd5cu: goto label_46cd5c;
        case 0x46cd60u: goto label_46cd60;
        case 0x46cd64u: goto label_46cd64;
        case 0x46cd68u: goto label_46cd68;
        case 0x46cd6cu: goto label_46cd6c;
        case 0x46cd70u: goto label_46cd70;
        case 0x46cd74u: goto label_46cd74;
        case 0x46cd78u: goto label_46cd78;
        case 0x46cd7cu: goto label_46cd7c;
        case 0x46cd80u: goto label_46cd80;
        case 0x46cd84u: goto label_46cd84;
        case 0x46cd88u: goto label_46cd88;
        case 0x46cd8cu: goto label_46cd8c;
        case 0x46cd90u: goto label_46cd90;
        case 0x46cd94u: goto label_46cd94;
        case 0x46cd98u: goto label_46cd98;
        case 0x46cd9cu: goto label_46cd9c;
        case 0x46cda0u: goto label_46cda0;
        case 0x46cda4u: goto label_46cda4;
        case 0x46cda8u: goto label_46cda8;
        case 0x46cdacu: goto label_46cdac;
        case 0x46cdb0u: goto label_46cdb0;
        case 0x46cdb4u: goto label_46cdb4;
        case 0x46cdb8u: goto label_46cdb8;
        case 0x46cdbcu: goto label_46cdbc;
        case 0x46cdc0u: goto label_46cdc0;
        case 0x46cdc4u: goto label_46cdc4;
        case 0x46cdc8u: goto label_46cdc8;
        case 0x46cdccu: goto label_46cdcc;
        case 0x46cdd0u: goto label_46cdd0;
        case 0x46cdd4u: goto label_46cdd4;
        case 0x46cdd8u: goto label_46cdd8;
        case 0x46cddcu: goto label_46cddc;
        case 0x46cde0u: goto label_46cde0;
        case 0x46cde4u: goto label_46cde4;
        case 0x46cde8u: goto label_46cde8;
        case 0x46cdecu: goto label_46cdec;
        case 0x46cdf0u: goto label_46cdf0;
        case 0x46cdf4u: goto label_46cdf4;
        case 0x46cdf8u: goto label_46cdf8;
        case 0x46cdfcu: goto label_46cdfc;
        case 0x46ce00u: goto label_46ce00;
        case 0x46ce04u: goto label_46ce04;
        case 0x46ce08u: goto label_46ce08;
        case 0x46ce0cu: goto label_46ce0c;
        case 0x46ce10u: goto label_46ce10;
        case 0x46ce14u: goto label_46ce14;
        case 0x46ce18u: goto label_46ce18;
        case 0x46ce1cu: goto label_46ce1c;
        case 0x46ce20u: goto label_46ce20;
        case 0x46ce24u: goto label_46ce24;
        case 0x46ce28u: goto label_46ce28;
        case 0x46ce2cu: goto label_46ce2c;
        case 0x46ce30u: goto label_46ce30;
        case 0x46ce34u: goto label_46ce34;
        case 0x46ce38u: goto label_46ce38;
        case 0x46ce3cu: goto label_46ce3c;
        case 0x46ce40u: goto label_46ce40;
        case 0x46ce44u: goto label_46ce44;
        case 0x46ce48u: goto label_46ce48;
        case 0x46ce4cu: goto label_46ce4c;
        case 0x46ce50u: goto label_46ce50;
        case 0x46ce54u: goto label_46ce54;
        case 0x46ce58u: goto label_46ce58;
        case 0x46ce5cu: goto label_46ce5c;
        case 0x46ce60u: goto label_46ce60;
        case 0x46ce64u: goto label_46ce64;
        case 0x46ce68u: goto label_46ce68;
        case 0x46ce6cu: goto label_46ce6c;
        case 0x46ce70u: goto label_46ce70;
        case 0x46ce74u: goto label_46ce74;
        case 0x46ce78u: goto label_46ce78;
        case 0x46ce7cu: goto label_46ce7c;
        case 0x46ce80u: goto label_46ce80;
        case 0x46ce84u: goto label_46ce84;
        case 0x46ce88u: goto label_46ce88;
        case 0x46ce8cu: goto label_46ce8c;
        case 0x46ce90u: goto label_46ce90;
        case 0x46ce94u: goto label_46ce94;
        case 0x46ce98u: goto label_46ce98;
        case 0x46ce9cu: goto label_46ce9c;
        case 0x46cea0u: goto label_46cea0;
        case 0x46cea4u: goto label_46cea4;
        case 0x46cea8u: goto label_46cea8;
        case 0x46ceacu: goto label_46ceac;
        case 0x46ceb0u: goto label_46ceb0;
        case 0x46ceb4u: goto label_46ceb4;
        case 0x46ceb8u: goto label_46ceb8;
        case 0x46cebcu: goto label_46cebc;
        case 0x46cec0u: goto label_46cec0;
        case 0x46cec4u: goto label_46cec4;
        case 0x46cec8u: goto label_46cec8;
        case 0x46ceccu: goto label_46cecc;
        case 0x46ced0u: goto label_46ced0;
        case 0x46ced4u: goto label_46ced4;
        case 0x46ced8u: goto label_46ced8;
        case 0x46cedcu: goto label_46cedc;
        case 0x46cee0u: goto label_46cee0;
        case 0x46cee4u: goto label_46cee4;
        case 0x46cee8u: goto label_46cee8;
        case 0x46ceecu: goto label_46ceec;
        case 0x46cef0u: goto label_46cef0;
        case 0x46cef4u: goto label_46cef4;
        case 0x46cef8u: goto label_46cef8;
        case 0x46cefcu: goto label_46cefc;
        case 0x46cf00u: goto label_46cf00;
        case 0x46cf04u: goto label_46cf04;
        case 0x46cf08u: goto label_46cf08;
        case 0x46cf0cu: goto label_46cf0c;
        case 0x46cf10u: goto label_46cf10;
        case 0x46cf14u: goto label_46cf14;
        case 0x46cf18u: goto label_46cf18;
        case 0x46cf1cu: goto label_46cf1c;
        case 0x46cf20u: goto label_46cf20;
        case 0x46cf24u: goto label_46cf24;
        case 0x46cf28u: goto label_46cf28;
        case 0x46cf2cu: goto label_46cf2c;
        case 0x46cf30u: goto label_46cf30;
        case 0x46cf34u: goto label_46cf34;
        case 0x46cf38u: goto label_46cf38;
        case 0x46cf3cu: goto label_46cf3c;
        case 0x46cf40u: goto label_46cf40;
        case 0x46cf44u: goto label_46cf44;
        case 0x46cf48u: goto label_46cf48;
        case 0x46cf4cu: goto label_46cf4c;
        case 0x46cf50u: goto label_46cf50;
        case 0x46cf54u: goto label_46cf54;
        case 0x46cf58u: goto label_46cf58;
        case 0x46cf5cu: goto label_46cf5c;
        case 0x46cf60u: goto label_46cf60;
        case 0x46cf64u: goto label_46cf64;
        case 0x46cf68u: goto label_46cf68;
        case 0x46cf6cu: goto label_46cf6c;
        case 0x46cf70u: goto label_46cf70;
        case 0x46cf74u: goto label_46cf74;
        case 0x46cf78u: goto label_46cf78;
        case 0x46cf7cu: goto label_46cf7c;
        case 0x46cf80u: goto label_46cf80;
        case 0x46cf84u: goto label_46cf84;
        case 0x46cf88u: goto label_46cf88;
        case 0x46cf8cu: goto label_46cf8c;
        case 0x46cf90u: goto label_46cf90;
        case 0x46cf94u: goto label_46cf94;
        case 0x46cf98u: goto label_46cf98;
        case 0x46cf9cu: goto label_46cf9c;
        case 0x46cfa0u: goto label_46cfa0;
        case 0x46cfa4u: goto label_46cfa4;
        case 0x46cfa8u: goto label_46cfa8;
        case 0x46cfacu: goto label_46cfac;
        case 0x46cfb0u: goto label_46cfb0;
        case 0x46cfb4u: goto label_46cfb4;
        case 0x46cfb8u: goto label_46cfb8;
        case 0x46cfbcu: goto label_46cfbc;
        case 0x46cfc0u: goto label_46cfc0;
        case 0x46cfc4u: goto label_46cfc4;
        case 0x46cfc8u: goto label_46cfc8;
        case 0x46cfccu: goto label_46cfcc;
        case 0x46cfd0u: goto label_46cfd0;
        case 0x46cfd4u: goto label_46cfd4;
        case 0x46cfd8u: goto label_46cfd8;
        case 0x46cfdcu: goto label_46cfdc;
        case 0x46cfe0u: goto label_46cfe0;
        case 0x46cfe4u: goto label_46cfe4;
        case 0x46cfe8u: goto label_46cfe8;
        case 0x46cfecu: goto label_46cfec;
        case 0x46cff0u: goto label_46cff0;
        case 0x46cff4u: goto label_46cff4;
        case 0x46cff8u: goto label_46cff8;
        case 0x46cffcu: goto label_46cffc;
        case 0x46d000u: goto label_46d000;
        case 0x46d004u: goto label_46d004;
        case 0x46d008u: goto label_46d008;
        case 0x46d00cu: goto label_46d00c;
        case 0x46d010u: goto label_46d010;
        case 0x46d014u: goto label_46d014;
        case 0x46d018u: goto label_46d018;
        case 0x46d01cu: goto label_46d01c;
        case 0x46d020u: goto label_46d020;
        case 0x46d024u: goto label_46d024;
        case 0x46d028u: goto label_46d028;
        case 0x46d02cu: goto label_46d02c;
        case 0x46d030u: goto label_46d030;
        case 0x46d034u: goto label_46d034;
        case 0x46d038u: goto label_46d038;
        case 0x46d03cu: goto label_46d03c;
        case 0x46d040u: goto label_46d040;
        case 0x46d044u: goto label_46d044;
        case 0x46d048u: goto label_46d048;
        case 0x46d04cu: goto label_46d04c;
        case 0x46d050u: goto label_46d050;
        case 0x46d054u: goto label_46d054;
        case 0x46d058u: goto label_46d058;
        case 0x46d05cu: goto label_46d05c;
        case 0x46d060u: goto label_46d060;
        case 0x46d064u: goto label_46d064;
        case 0x46d068u: goto label_46d068;
        case 0x46d06cu: goto label_46d06c;
        case 0x46d070u: goto label_46d070;
        case 0x46d074u: goto label_46d074;
        case 0x46d078u: goto label_46d078;
        case 0x46d07cu: goto label_46d07c;
        case 0x46d080u: goto label_46d080;
        case 0x46d084u: goto label_46d084;
        case 0x46d088u: goto label_46d088;
        case 0x46d08cu: goto label_46d08c;
        case 0x46d090u: goto label_46d090;
        case 0x46d094u: goto label_46d094;
        case 0x46d098u: goto label_46d098;
        case 0x46d09cu: goto label_46d09c;
        case 0x46d0a0u: goto label_46d0a0;
        case 0x46d0a4u: goto label_46d0a4;
        case 0x46d0a8u: goto label_46d0a8;
        case 0x46d0acu: goto label_46d0ac;
        case 0x46d0b0u: goto label_46d0b0;
        case 0x46d0b4u: goto label_46d0b4;
        case 0x46d0b8u: goto label_46d0b8;
        case 0x46d0bcu: goto label_46d0bc;
        case 0x46d0c0u: goto label_46d0c0;
        case 0x46d0c4u: goto label_46d0c4;
        case 0x46d0c8u: goto label_46d0c8;
        case 0x46d0ccu: goto label_46d0cc;
        case 0x46d0d0u: goto label_46d0d0;
        case 0x46d0d4u: goto label_46d0d4;
        case 0x46d0d8u: goto label_46d0d8;
        case 0x46d0dcu: goto label_46d0dc;
        case 0x46d0e0u: goto label_46d0e0;
        case 0x46d0e4u: goto label_46d0e4;
        case 0x46d0e8u: goto label_46d0e8;
        case 0x46d0ecu: goto label_46d0ec;
        case 0x46d0f0u: goto label_46d0f0;
        case 0x46d0f4u: goto label_46d0f4;
        case 0x46d0f8u: goto label_46d0f8;
        case 0x46d0fcu: goto label_46d0fc;
        case 0x46d100u: goto label_46d100;
        case 0x46d104u: goto label_46d104;
        case 0x46d108u: goto label_46d108;
        case 0x46d10cu: goto label_46d10c;
        case 0x46d110u: goto label_46d110;
        case 0x46d114u: goto label_46d114;
        case 0x46d118u: goto label_46d118;
        case 0x46d11cu: goto label_46d11c;
        case 0x46d120u: goto label_46d120;
        case 0x46d124u: goto label_46d124;
        case 0x46d128u: goto label_46d128;
        case 0x46d12cu: goto label_46d12c;
        case 0x46d130u: goto label_46d130;
        case 0x46d134u: goto label_46d134;
        case 0x46d138u: goto label_46d138;
        case 0x46d13cu: goto label_46d13c;
        case 0x46d140u: goto label_46d140;
        case 0x46d144u: goto label_46d144;
        case 0x46d148u: goto label_46d148;
        case 0x46d14cu: goto label_46d14c;
        case 0x46d150u: goto label_46d150;
        case 0x46d154u: goto label_46d154;
        case 0x46d158u: goto label_46d158;
        case 0x46d15cu: goto label_46d15c;
        case 0x46d160u: goto label_46d160;
        case 0x46d164u: goto label_46d164;
        case 0x46d168u: goto label_46d168;
        case 0x46d16cu: goto label_46d16c;
        case 0x46d170u: goto label_46d170;
        case 0x46d174u: goto label_46d174;
        case 0x46d178u: goto label_46d178;
        case 0x46d17cu: goto label_46d17c;
        case 0x46d180u: goto label_46d180;
        case 0x46d184u: goto label_46d184;
        case 0x46d188u: goto label_46d188;
        case 0x46d18cu: goto label_46d18c;
        case 0x46d190u: goto label_46d190;
        case 0x46d194u: goto label_46d194;
        case 0x46d198u: goto label_46d198;
        case 0x46d19cu: goto label_46d19c;
        case 0x46d1a0u: goto label_46d1a0;
        case 0x46d1a4u: goto label_46d1a4;
        case 0x46d1a8u: goto label_46d1a8;
        case 0x46d1acu: goto label_46d1ac;
        case 0x46d1b0u: goto label_46d1b0;
        case 0x46d1b4u: goto label_46d1b4;
        case 0x46d1b8u: goto label_46d1b8;
        case 0x46d1bcu: goto label_46d1bc;
        case 0x46d1c0u: goto label_46d1c0;
        case 0x46d1c4u: goto label_46d1c4;
        case 0x46d1c8u: goto label_46d1c8;
        case 0x46d1ccu: goto label_46d1cc;
        case 0x46d1d0u: goto label_46d1d0;
        case 0x46d1d4u: goto label_46d1d4;
        case 0x46d1d8u: goto label_46d1d8;
        case 0x46d1dcu: goto label_46d1dc;
        case 0x46d1e0u: goto label_46d1e0;
        case 0x46d1e4u: goto label_46d1e4;
        case 0x46d1e8u: goto label_46d1e8;
        case 0x46d1ecu: goto label_46d1ec;
        case 0x46d1f0u: goto label_46d1f0;
        case 0x46d1f4u: goto label_46d1f4;
        case 0x46d1f8u: goto label_46d1f8;
        case 0x46d1fcu: goto label_46d1fc;
        case 0x46d200u: goto label_46d200;
        case 0x46d204u: goto label_46d204;
        case 0x46d208u: goto label_46d208;
        case 0x46d20cu: goto label_46d20c;
        case 0x46d210u: goto label_46d210;
        case 0x46d214u: goto label_46d214;
        case 0x46d218u: goto label_46d218;
        case 0x46d21cu: goto label_46d21c;
        case 0x46d220u: goto label_46d220;
        case 0x46d224u: goto label_46d224;
        case 0x46d228u: goto label_46d228;
        case 0x46d22cu: goto label_46d22c;
        case 0x46d230u: goto label_46d230;
        case 0x46d234u: goto label_46d234;
        case 0x46d238u: goto label_46d238;
        case 0x46d23cu: goto label_46d23c;
        case 0x46d240u: goto label_46d240;
        case 0x46d244u: goto label_46d244;
        case 0x46d248u: goto label_46d248;
        case 0x46d24cu: goto label_46d24c;
        case 0x46d250u: goto label_46d250;
        case 0x46d254u: goto label_46d254;
        case 0x46d258u: goto label_46d258;
        case 0x46d25cu: goto label_46d25c;
        case 0x46d260u: goto label_46d260;
        case 0x46d264u: goto label_46d264;
        case 0x46d268u: goto label_46d268;
        case 0x46d26cu: goto label_46d26c;
        case 0x46d270u: goto label_46d270;
        case 0x46d274u: goto label_46d274;
        case 0x46d278u: goto label_46d278;
        case 0x46d27cu: goto label_46d27c;
        case 0x46d280u: goto label_46d280;
        case 0x46d284u: goto label_46d284;
        case 0x46d288u: goto label_46d288;
        case 0x46d28cu: goto label_46d28c;
        case 0x46d290u: goto label_46d290;
        case 0x46d294u: goto label_46d294;
        case 0x46d298u: goto label_46d298;
        case 0x46d29cu: goto label_46d29c;
        case 0x46d2a0u: goto label_46d2a0;
        case 0x46d2a4u: goto label_46d2a4;
        case 0x46d2a8u: goto label_46d2a8;
        case 0x46d2acu: goto label_46d2ac;
        case 0x46d2b0u: goto label_46d2b0;
        case 0x46d2b4u: goto label_46d2b4;
        case 0x46d2b8u: goto label_46d2b8;
        case 0x46d2bcu: goto label_46d2bc;
        case 0x46d2c0u: goto label_46d2c0;
        case 0x46d2c4u: goto label_46d2c4;
        case 0x46d2c8u: goto label_46d2c8;
        case 0x46d2ccu: goto label_46d2cc;
        case 0x46d2d0u: goto label_46d2d0;
        case 0x46d2d4u: goto label_46d2d4;
        case 0x46d2d8u: goto label_46d2d8;
        case 0x46d2dcu: goto label_46d2dc;
        case 0x46d2e0u: goto label_46d2e0;
        case 0x46d2e4u: goto label_46d2e4;
        case 0x46d2e8u: goto label_46d2e8;
        case 0x46d2ecu: goto label_46d2ec;
        case 0x46d2f0u: goto label_46d2f0;
        case 0x46d2f4u: goto label_46d2f4;
        case 0x46d2f8u: goto label_46d2f8;
        case 0x46d2fcu: goto label_46d2fc;
        case 0x46d300u: goto label_46d300;
        case 0x46d304u: goto label_46d304;
        case 0x46d308u: goto label_46d308;
        case 0x46d30cu: goto label_46d30c;
        case 0x46d310u: goto label_46d310;
        case 0x46d314u: goto label_46d314;
        case 0x46d318u: goto label_46d318;
        case 0x46d31cu: goto label_46d31c;
        case 0x46d320u: goto label_46d320;
        case 0x46d324u: goto label_46d324;
        case 0x46d328u: goto label_46d328;
        case 0x46d32cu: goto label_46d32c;
        case 0x46d330u: goto label_46d330;
        case 0x46d334u: goto label_46d334;
        case 0x46d338u: goto label_46d338;
        case 0x46d33cu: goto label_46d33c;
        case 0x46d340u: goto label_46d340;
        case 0x46d344u: goto label_46d344;
        case 0x46d348u: goto label_46d348;
        case 0x46d34cu: goto label_46d34c;
        case 0x46d350u: goto label_46d350;
        case 0x46d354u: goto label_46d354;
        case 0x46d358u: goto label_46d358;
        case 0x46d35cu: goto label_46d35c;
        case 0x46d360u: goto label_46d360;
        case 0x46d364u: goto label_46d364;
        case 0x46d368u: goto label_46d368;
        case 0x46d36cu: goto label_46d36c;
        case 0x46d370u: goto label_46d370;
        case 0x46d374u: goto label_46d374;
        case 0x46d378u: goto label_46d378;
        case 0x46d37cu: goto label_46d37c;
        case 0x46d380u: goto label_46d380;
        case 0x46d384u: goto label_46d384;
        case 0x46d388u: goto label_46d388;
        case 0x46d38cu: goto label_46d38c;
        case 0x46d390u: goto label_46d390;
        case 0x46d394u: goto label_46d394;
        case 0x46d398u: goto label_46d398;
        case 0x46d39cu: goto label_46d39c;
        case 0x46d3a0u: goto label_46d3a0;
        case 0x46d3a4u: goto label_46d3a4;
        case 0x46d3a8u: goto label_46d3a8;
        case 0x46d3acu: goto label_46d3ac;
        case 0x46d3b0u: goto label_46d3b0;
        case 0x46d3b4u: goto label_46d3b4;
        case 0x46d3b8u: goto label_46d3b8;
        case 0x46d3bcu: goto label_46d3bc;
        case 0x46d3c0u: goto label_46d3c0;
        case 0x46d3c4u: goto label_46d3c4;
        case 0x46d3c8u: goto label_46d3c8;
        case 0x46d3ccu: goto label_46d3cc;
        case 0x46d3d0u: goto label_46d3d0;
        case 0x46d3d4u: goto label_46d3d4;
        case 0x46d3d8u: goto label_46d3d8;
        case 0x46d3dcu: goto label_46d3dc;
        case 0x46d3e0u: goto label_46d3e0;
        case 0x46d3e4u: goto label_46d3e4;
        case 0x46d3e8u: goto label_46d3e8;
        case 0x46d3ecu: goto label_46d3ec;
        case 0x46d3f0u: goto label_46d3f0;
        case 0x46d3f4u: goto label_46d3f4;
        case 0x46d3f8u: goto label_46d3f8;
        case 0x46d3fcu: goto label_46d3fc;
        case 0x46d400u: goto label_46d400;
        case 0x46d404u: goto label_46d404;
        case 0x46d408u: goto label_46d408;
        case 0x46d40cu: goto label_46d40c;
        case 0x46d410u: goto label_46d410;
        case 0x46d414u: goto label_46d414;
        case 0x46d418u: goto label_46d418;
        case 0x46d41cu: goto label_46d41c;
        case 0x46d420u: goto label_46d420;
        case 0x46d424u: goto label_46d424;
        case 0x46d428u: goto label_46d428;
        case 0x46d42cu: goto label_46d42c;
        case 0x46d430u: goto label_46d430;
        case 0x46d434u: goto label_46d434;
        case 0x46d438u: goto label_46d438;
        case 0x46d43cu: goto label_46d43c;
        case 0x46d440u: goto label_46d440;
        case 0x46d444u: goto label_46d444;
        case 0x46d448u: goto label_46d448;
        case 0x46d44cu: goto label_46d44c;
        case 0x46d450u: goto label_46d450;
        case 0x46d454u: goto label_46d454;
        case 0x46d458u: goto label_46d458;
        case 0x46d45cu: goto label_46d45c;
        case 0x46d460u: goto label_46d460;
        case 0x46d464u: goto label_46d464;
        case 0x46d468u: goto label_46d468;
        case 0x46d46cu: goto label_46d46c;
        case 0x46d470u: goto label_46d470;
        case 0x46d474u: goto label_46d474;
        case 0x46d478u: goto label_46d478;
        case 0x46d47cu: goto label_46d47c;
        case 0x46d480u: goto label_46d480;
        case 0x46d484u: goto label_46d484;
        case 0x46d488u: goto label_46d488;
        case 0x46d48cu: goto label_46d48c;
        case 0x46d490u: goto label_46d490;
        case 0x46d494u: goto label_46d494;
        case 0x46d498u: goto label_46d498;
        case 0x46d49cu: goto label_46d49c;
        case 0x46d4a0u: goto label_46d4a0;
        case 0x46d4a4u: goto label_46d4a4;
        case 0x46d4a8u: goto label_46d4a8;
        case 0x46d4acu: goto label_46d4ac;
        case 0x46d4b0u: goto label_46d4b0;
        case 0x46d4b4u: goto label_46d4b4;
        case 0x46d4b8u: goto label_46d4b8;
        case 0x46d4bcu: goto label_46d4bc;
        case 0x46d4c0u: goto label_46d4c0;
        case 0x46d4c4u: goto label_46d4c4;
        case 0x46d4c8u: goto label_46d4c8;
        case 0x46d4ccu: goto label_46d4cc;
        case 0x46d4d0u: goto label_46d4d0;
        case 0x46d4d4u: goto label_46d4d4;
        case 0x46d4d8u: goto label_46d4d8;
        case 0x46d4dcu: goto label_46d4dc;
        case 0x46d4e0u: goto label_46d4e0;
        case 0x46d4e4u: goto label_46d4e4;
        case 0x46d4e8u: goto label_46d4e8;
        case 0x46d4ecu: goto label_46d4ec;
        case 0x46d4f0u: goto label_46d4f0;
        case 0x46d4f4u: goto label_46d4f4;
        case 0x46d4f8u: goto label_46d4f8;
        case 0x46d4fcu: goto label_46d4fc;
        case 0x46d500u: goto label_46d500;
        case 0x46d504u: goto label_46d504;
        case 0x46d508u: goto label_46d508;
        case 0x46d50cu: goto label_46d50c;
        case 0x46d510u: goto label_46d510;
        case 0x46d514u: goto label_46d514;
        case 0x46d518u: goto label_46d518;
        case 0x46d51cu: goto label_46d51c;
        case 0x46d520u: goto label_46d520;
        case 0x46d524u: goto label_46d524;
        case 0x46d528u: goto label_46d528;
        case 0x46d52cu: goto label_46d52c;
        case 0x46d530u: goto label_46d530;
        case 0x46d534u: goto label_46d534;
        case 0x46d538u: goto label_46d538;
        case 0x46d53cu: goto label_46d53c;
        case 0x46d540u: goto label_46d540;
        case 0x46d544u: goto label_46d544;
        case 0x46d548u: goto label_46d548;
        case 0x46d54cu: goto label_46d54c;
        case 0x46d550u: goto label_46d550;
        case 0x46d554u: goto label_46d554;
        case 0x46d558u: goto label_46d558;
        case 0x46d55cu: goto label_46d55c;
        case 0x46d560u: goto label_46d560;
        case 0x46d564u: goto label_46d564;
        case 0x46d568u: goto label_46d568;
        case 0x46d56cu: goto label_46d56c;
        case 0x46d570u: goto label_46d570;
        case 0x46d574u: goto label_46d574;
        case 0x46d578u: goto label_46d578;
        case 0x46d57cu: goto label_46d57c;
        case 0x46d580u: goto label_46d580;
        case 0x46d584u: goto label_46d584;
        case 0x46d588u: goto label_46d588;
        case 0x46d58cu: goto label_46d58c;
        case 0x46d590u: goto label_46d590;
        case 0x46d594u: goto label_46d594;
        case 0x46d598u: goto label_46d598;
        case 0x46d59cu: goto label_46d59c;
        case 0x46d5a0u: goto label_46d5a0;
        case 0x46d5a4u: goto label_46d5a4;
        case 0x46d5a8u: goto label_46d5a8;
        case 0x46d5acu: goto label_46d5ac;
        case 0x46d5b0u: goto label_46d5b0;
        case 0x46d5b4u: goto label_46d5b4;
        case 0x46d5b8u: goto label_46d5b8;
        case 0x46d5bcu: goto label_46d5bc;
        case 0x46d5c0u: goto label_46d5c0;
        case 0x46d5c4u: goto label_46d5c4;
        case 0x46d5c8u: goto label_46d5c8;
        case 0x46d5ccu: goto label_46d5cc;
        case 0x46d5d0u: goto label_46d5d0;
        case 0x46d5d4u: goto label_46d5d4;
        case 0x46d5d8u: goto label_46d5d8;
        case 0x46d5dcu: goto label_46d5dc;
        case 0x46d5e0u: goto label_46d5e0;
        case 0x46d5e4u: goto label_46d5e4;
        case 0x46d5e8u: goto label_46d5e8;
        case 0x46d5ecu: goto label_46d5ec;
        case 0x46d5f0u: goto label_46d5f0;
        case 0x46d5f4u: goto label_46d5f4;
        case 0x46d5f8u: goto label_46d5f8;
        case 0x46d5fcu: goto label_46d5fc;
        case 0x46d600u: goto label_46d600;
        case 0x46d604u: goto label_46d604;
        case 0x46d608u: goto label_46d608;
        case 0x46d60cu: goto label_46d60c;
        case 0x46d610u: goto label_46d610;
        case 0x46d614u: goto label_46d614;
        case 0x46d618u: goto label_46d618;
        case 0x46d61cu: goto label_46d61c;
        case 0x46d620u: goto label_46d620;
        case 0x46d624u: goto label_46d624;
        case 0x46d628u: goto label_46d628;
        case 0x46d62cu: goto label_46d62c;
        case 0x46d630u: goto label_46d630;
        case 0x46d634u: goto label_46d634;
        case 0x46d638u: goto label_46d638;
        case 0x46d63cu: goto label_46d63c;
        case 0x46d640u: goto label_46d640;
        case 0x46d644u: goto label_46d644;
        case 0x46d648u: goto label_46d648;
        case 0x46d64cu: goto label_46d64c;
        case 0x46d650u: goto label_46d650;
        case 0x46d654u: goto label_46d654;
        case 0x46d658u: goto label_46d658;
        case 0x46d65cu: goto label_46d65c;
        case 0x46d660u: goto label_46d660;
        case 0x46d664u: goto label_46d664;
        case 0x46d668u: goto label_46d668;
        case 0x46d66cu: goto label_46d66c;
        case 0x46d670u: goto label_46d670;
        case 0x46d674u: goto label_46d674;
        case 0x46d678u: goto label_46d678;
        case 0x46d67cu: goto label_46d67c;
        case 0x46d680u: goto label_46d680;
        case 0x46d684u: goto label_46d684;
        case 0x46d688u: goto label_46d688;
        case 0x46d68cu: goto label_46d68c;
        case 0x46d690u: goto label_46d690;
        case 0x46d694u: goto label_46d694;
        case 0x46d698u: goto label_46d698;
        case 0x46d69cu: goto label_46d69c;
        case 0x46d6a0u: goto label_46d6a0;
        case 0x46d6a4u: goto label_46d6a4;
        case 0x46d6a8u: goto label_46d6a8;
        case 0x46d6acu: goto label_46d6ac;
        case 0x46d6b0u: goto label_46d6b0;
        case 0x46d6b4u: goto label_46d6b4;
        case 0x46d6b8u: goto label_46d6b8;
        case 0x46d6bcu: goto label_46d6bc;
        case 0x46d6c0u: goto label_46d6c0;
        case 0x46d6c4u: goto label_46d6c4;
        case 0x46d6c8u: goto label_46d6c8;
        case 0x46d6ccu: goto label_46d6cc;
        case 0x46d6d0u: goto label_46d6d0;
        case 0x46d6d4u: goto label_46d6d4;
        case 0x46d6d8u: goto label_46d6d8;
        case 0x46d6dcu: goto label_46d6dc;
        case 0x46d6e0u: goto label_46d6e0;
        case 0x46d6e4u: goto label_46d6e4;
        case 0x46d6e8u: goto label_46d6e8;
        case 0x46d6ecu: goto label_46d6ec;
        case 0x46d6f0u: goto label_46d6f0;
        case 0x46d6f4u: goto label_46d6f4;
        case 0x46d6f8u: goto label_46d6f8;
        case 0x46d6fcu: goto label_46d6fc;
        case 0x46d700u: goto label_46d700;
        case 0x46d704u: goto label_46d704;
        case 0x46d708u: goto label_46d708;
        case 0x46d70cu: goto label_46d70c;
        case 0x46d710u: goto label_46d710;
        case 0x46d714u: goto label_46d714;
        case 0x46d718u: goto label_46d718;
        case 0x46d71cu: goto label_46d71c;
        case 0x46d720u: goto label_46d720;
        case 0x46d724u: goto label_46d724;
        case 0x46d728u: goto label_46d728;
        case 0x46d72cu: goto label_46d72c;
        case 0x46d730u: goto label_46d730;
        case 0x46d734u: goto label_46d734;
        case 0x46d738u: goto label_46d738;
        case 0x46d73cu: goto label_46d73c;
        case 0x46d740u: goto label_46d740;
        case 0x46d744u: goto label_46d744;
        case 0x46d748u: goto label_46d748;
        case 0x46d74cu: goto label_46d74c;
        case 0x46d750u: goto label_46d750;
        case 0x46d754u: goto label_46d754;
        case 0x46d758u: goto label_46d758;
        case 0x46d75cu: goto label_46d75c;
        case 0x46d760u: goto label_46d760;
        case 0x46d764u: goto label_46d764;
        case 0x46d768u: goto label_46d768;
        case 0x46d76cu: goto label_46d76c;
        case 0x46d770u: goto label_46d770;
        case 0x46d774u: goto label_46d774;
        case 0x46d778u: goto label_46d778;
        case 0x46d77cu: goto label_46d77c;
        case 0x46d780u: goto label_46d780;
        case 0x46d784u: goto label_46d784;
        case 0x46d788u: goto label_46d788;
        case 0x46d78cu: goto label_46d78c;
        case 0x46d790u: goto label_46d790;
        case 0x46d794u: goto label_46d794;
        case 0x46d798u: goto label_46d798;
        case 0x46d79cu: goto label_46d79c;
        case 0x46d7a0u: goto label_46d7a0;
        case 0x46d7a4u: goto label_46d7a4;
        case 0x46d7a8u: goto label_46d7a8;
        case 0x46d7acu: goto label_46d7ac;
        case 0x46d7b0u: goto label_46d7b0;
        case 0x46d7b4u: goto label_46d7b4;
        case 0x46d7b8u: goto label_46d7b8;
        case 0x46d7bcu: goto label_46d7bc;
        case 0x46d7c0u: goto label_46d7c0;
        case 0x46d7c4u: goto label_46d7c4;
        case 0x46d7c8u: goto label_46d7c8;
        case 0x46d7ccu: goto label_46d7cc;
        case 0x46d7d0u: goto label_46d7d0;
        case 0x46d7d4u: goto label_46d7d4;
        case 0x46d7d8u: goto label_46d7d8;
        case 0x46d7dcu: goto label_46d7dc;
        case 0x46d7e0u: goto label_46d7e0;
        case 0x46d7e4u: goto label_46d7e4;
        case 0x46d7e8u: goto label_46d7e8;
        case 0x46d7ecu: goto label_46d7ec;
        case 0x46d7f0u: goto label_46d7f0;
        case 0x46d7f4u: goto label_46d7f4;
        case 0x46d7f8u: goto label_46d7f8;
        case 0x46d7fcu: goto label_46d7fc;
        case 0x46d800u: goto label_46d800;
        case 0x46d804u: goto label_46d804;
        case 0x46d808u: goto label_46d808;
        case 0x46d80cu: goto label_46d80c;
        case 0x46d810u: goto label_46d810;
        case 0x46d814u: goto label_46d814;
        case 0x46d818u: goto label_46d818;
        case 0x46d81cu: goto label_46d81c;
        case 0x46d820u: goto label_46d820;
        case 0x46d824u: goto label_46d824;
        case 0x46d828u: goto label_46d828;
        case 0x46d82cu: goto label_46d82c;
        case 0x46d830u: goto label_46d830;
        case 0x46d834u: goto label_46d834;
        case 0x46d838u: goto label_46d838;
        case 0x46d83cu: goto label_46d83c;
        case 0x46d840u: goto label_46d840;
        case 0x46d844u: goto label_46d844;
        case 0x46d848u: goto label_46d848;
        case 0x46d84cu: goto label_46d84c;
        case 0x46d850u: goto label_46d850;
        case 0x46d854u: goto label_46d854;
        case 0x46d858u: goto label_46d858;
        case 0x46d85cu: goto label_46d85c;
        case 0x46d860u: goto label_46d860;
        case 0x46d864u: goto label_46d864;
        case 0x46d868u: goto label_46d868;
        case 0x46d86cu: goto label_46d86c;
        case 0x46d870u: goto label_46d870;
        case 0x46d874u: goto label_46d874;
        case 0x46d878u: goto label_46d878;
        case 0x46d87cu: goto label_46d87c;
        case 0x46d880u: goto label_46d880;
        case 0x46d884u: goto label_46d884;
        case 0x46d888u: goto label_46d888;
        case 0x46d88cu: goto label_46d88c;
        case 0x46d890u: goto label_46d890;
        case 0x46d894u: goto label_46d894;
        case 0x46d898u: goto label_46d898;
        case 0x46d89cu: goto label_46d89c;
        case 0x46d8a0u: goto label_46d8a0;
        case 0x46d8a4u: goto label_46d8a4;
        case 0x46d8a8u: goto label_46d8a8;
        case 0x46d8acu: goto label_46d8ac;
        case 0x46d8b0u: goto label_46d8b0;
        case 0x46d8b4u: goto label_46d8b4;
        case 0x46d8b8u: goto label_46d8b8;
        case 0x46d8bcu: goto label_46d8bc;
        case 0x46d8c0u: goto label_46d8c0;
        case 0x46d8c4u: goto label_46d8c4;
        case 0x46d8c8u: goto label_46d8c8;
        case 0x46d8ccu: goto label_46d8cc;
        case 0x46d8d0u: goto label_46d8d0;
        case 0x46d8d4u: goto label_46d8d4;
        case 0x46d8d8u: goto label_46d8d8;
        case 0x46d8dcu: goto label_46d8dc;
        case 0x46d8e0u: goto label_46d8e0;
        case 0x46d8e4u: goto label_46d8e4;
        case 0x46d8e8u: goto label_46d8e8;
        case 0x46d8ecu: goto label_46d8ec;
        case 0x46d8f0u: goto label_46d8f0;
        case 0x46d8f4u: goto label_46d8f4;
        case 0x46d8f8u: goto label_46d8f8;
        case 0x46d8fcu: goto label_46d8fc;
        case 0x46d900u: goto label_46d900;
        case 0x46d904u: goto label_46d904;
        case 0x46d908u: goto label_46d908;
        case 0x46d90cu: goto label_46d90c;
        case 0x46d910u: goto label_46d910;
        case 0x46d914u: goto label_46d914;
        case 0x46d918u: goto label_46d918;
        case 0x46d91cu: goto label_46d91c;
        case 0x46d920u: goto label_46d920;
        case 0x46d924u: goto label_46d924;
        case 0x46d928u: goto label_46d928;
        case 0x46d92cu: goto label_46d92c;
        case 0x46d930u: goto label_46d930;
        case 0x46d934u: goto label_46d934;
        case 0x46d938u: goto label_46d938;
        case 0x46d93cu: goto label_46d93c;
        default: break;
    }

    ctx->pc = 0x46cb20u;

label_46cb20:
    // 0x46cb20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x46cb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_46cb24:
    // 0x46cb24: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x46cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_46cb28:
    // 0x46cb28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x46cb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_46cb2c:
    // 0x46cb2c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x46cb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_46cb30:
    // 0x46cb30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x46cb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_46cb34:
    // 0x46cb34: 0x24420820  addiu       $v0, $v0, 0x820
    ctx->pc = 0x46cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
label_46cb38:
    // 0x46cb38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46cb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_46cb3c:
    // 0x46cb3c: 0x24c6e990  addiu       $a2, $a2, -0x1670
    ctx->pc = 0x46cb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961552));
label_46cb40:
    // 0x46cb40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46cb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_46cb44:
    // 0x46cb44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46cb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_46cb48:
    // 0x46cb48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46cb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46cb4c:
    // 0x46cb4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x46cb4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46cb50:
    // 0x46cb50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46cb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46cb54:
    // 0x46cb54: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x46cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_46cb58:
    // 0x46cb58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46cb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46cb5c:
    // 0x46cb5c: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x46cb5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46cb60:
    // 0x46cb60: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x46cb60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_46cb64:
    // 0x46cb64: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x46cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_46cb68:
    // 0x46cb68: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x46cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_46cb6c:
    // 0x46cb6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x46cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_46cb70:
    // 0x46cb70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46cb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46cb74:
    // 0x46cb74: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x46cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_46cb78:
    // 0x46cb78: 0x92850001  lbu         $a1, 0x1($s4)
    ctx->pc = 0x46cb78u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_46cb7c:
    // 0x46cb7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46cb80:
    // 0x46cb80: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x46cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_46cb84:
    // 0x46cb84: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x46cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_46cb88:
    // 0x46cb88: 0x24910070  addiu       $s1, $a0, 0x70
    ctx->pc = 0x46cb88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_46cb8c:
    // 0x46cb8c: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x46cb8cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_46cb90:
    // 0x46cb90: 0x90840071  lbu         $a0, 0x71($a0)
    ctx->pc = 0x46cb90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 113)));
label_46cb94:
    // 0x46cb94: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x46cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46cb98:
    // 0x46cb98: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46cb9c:
    // 0x46cb9c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x46cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_46cba0:
    // 0x46cba0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46cba4:
    // 0x46cba4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x46cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_46cba8:
    // 0x46cba8: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x46cba8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46cbac:
    // 0x46cbac: 0x1810  mfhi        $v1
    ctx->pc = 0x46cbacu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_46cbb0:
    // 0x46cbb0: 0x2463003b  addiu       $v1, $v1, 0x3B
    ctx->pc = 0x46cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 59));
label_46cbb4:
    // 0x46cbb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x46cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46cbb8:
    // 0x46cbb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46cbbc:
    // 0x46cbbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46cbc0:
    // 0x46cbc0: 0xc12512c  jal         func_4944B0
label_46cbc4:
    if (ctx->pc == 0x46CBC4u) {
        ctx->pc = 0x46CBC4u;
            // 0x46cbc4: 0x24a5f198  addiu       $a1, $a1, -0xE68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963608));
        ctx->pc = 0x46CBC8u;
        goto label_46cbc8;
    }
    ctx->pc = 0x46CBC0u;
    SET_GPR_U32(ctx, 31, 0x46CBC8u);
    ctx->pc = 0x46CBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CBC0u;
            // 0x46cbc4: 0x24a5f198  addiu       $a1, $a1, -0xE68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CBC8u; }
        if (ctx->pc != 0x46CBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CBC8u; }
        if (ctx->pc != 0x46CBC8u) { return; }
    }
    ctx->pc = 0x46CBC8u;
label_46cbc8:
    // 0x46cbc8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x46cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_46cbcc:
    // 0x46cbcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_46cbd0:
    // 0x46cbd0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x46cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_46cbd4:
    // 0x46cbd4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x46cbd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46cbd8:
    // 0x46cbd8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_46cbdc:
    if (ctx->pc == 0x46CBDCu) {
        ctx->pc = 0x46CBDCu;
            // 0x46cbdc: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x46CBE0u;
        goto label_46cbe0;
    }
    ctx->pc = 0x46CBD8u;
    {
        const bool branch_taken_0x46cbd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46cbd8) {
            ctx->pc = 0x46CBDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CBD8u;
            // 0x46cbdc: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46CBE8u;
            goto label_46cbe8;
        }
    }
    ctx->pc = 0x46CBE0u;
label_46cbe0:
    // 0x46cbe0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x46cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_46cbe4:
    // 0x46cbe4: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x46cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_46cbe8:
    // 0x46cbe8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_46cbec:
    if (ctx->pc == 0x46CBECu) {
        ctx->pc = 0x46CBECu;
            // 0x46cbec: 0x96220002  lhu         $v0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x46CBF0u;
        goto label_46cbf0;
    }
    ctx->pc = 0x46CBE8u;
    {
        const bool branch_taken_0x46cbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cbe8) {
            ctx->pc = 0x46CBECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CBE8u;
            // 0x46cbec: 0x96220002  lhu         $v0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46CC48u;
            goto label_46cc48;
        }
    }
    ctx->pc = 0x46CBF0u;
label_46cbf0:
    // 0x46cbf0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x46cbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46cbf4:
    // 0x46cbf4: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x46cbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46cbf8:
    // 0x46cbf8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x46cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_46cbfc:
    // 0x46cbfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x46cbfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_46cc00:
    // 0x46cc00: 0x0  nop
    ctx->pc = 0x46cc00u;
    // NOP
label_46cc04:
    // 0x46cc04: 0x460208c3  div.s       $f3, $f1, $f2
    ctx->pc = 0x46cc04u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[2];
label_46cc08:
    // 0x46cc08: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x46cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_46cc0c:
    // 0x46cc0c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x46cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_46cc10:
    // 0x46cc10: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x46cc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46cc14:
    // 0x46cc14: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x46cc14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_46cc18:
    // 0x46cc18: 0x0  nop
    ctx->pc = 0x46cc18u;
    // NOP
label_46cc1c:
    // 0x46cc1c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x46cc1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_46cc20:
    // 0x46cc20: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x46cc20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_46cc24:
    // 0x46cc24: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x46cc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_46cc28:
    // 0x46cc28: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x46cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_46cc2c:
    // 0x46cc2c: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x46cc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46cc30:
    // 0x46cc30: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x46cc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46cc34:
    // 0x46cc34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x46cc34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_46cc38:
    // 0x46cc38: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_46cc3c:
    if (ctx->pc == 0x46CC3Cu) {
        ctx->pc = 0x46CC40u;
        goto label_46cc40;
    }
    ctx->pc = 0x46CC38u;
    {
        const bool branch_taken_0x46cc38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x46cc38) {
            ctx->pc = 0x46CC44u;
            goto label_46cc44;
        }
    }
    ctx->pc = 0x46CC40u;
label_46cc40:
    // 0x46cc40: 0xe622003c  swc1        $f2, 0x3C($s1)
    ctx->pc = 0x46cc40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_46cc44:
    // 0x46cc44: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x46cc44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_46cc48:
    // 0x46cc48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46cc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46cc4c:
    // 0x46cc4c: 0x5040008e  beql        $v0, $zero, . + 4 + (0x8E << 2)
label_46cc50:
    if (ctx->pc == 0x46CC50u) {
        ctx->pc = 0x46CC50u;
            // 0x46cc50: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x46CC54u;
        goto label_46cc54;
    }
    ctx->pc = 0x46CC4Cu;
    {
        const bool branch_taken_0x46cc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cc4c) {
            ctx->pc = 0x46CC50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CC4Cu;
            // 0x46cc50: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46CE88u;
            goto label_46ce88;
        }
    }
    ctx->pc = 0x46CC54u;
label_46cc54:
    // 0x46cc54: 0xc11b6a4  jal         func_46DA90
label_46cc58:
    if (ctx->pc == 0x46CC58u) {
        ctx->pc = 0x46CC5Cu;
        goto label_46cc5c;
    }
    ctx->pc = 0x46CC54u;
    SET_GPR_U32(ctx, 31, 0x46CC5Cu);
    ctx->pc = 0x46DA90u;
    if (runtime->hasFunction(0x46DA90u)) {
        auto targetFn = runtime->lookupFunction(0x46DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CC5Cu; }
        if (ctx->pc != 0x46CC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046DA90_0x46da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CC5Cu; }
        if (ctx->pc != 0x46CC5Cu) { return; }
    }
    ctx->pc = 0x46CC5Cu;
label_46cc5c:
    // 0x46cc5c: 0xc11b6a0  jal         func_46DA80
label_46cc60:
    if (ctx->pc == 0x46CC60u) {
        ctx->pc = 0x46CC64u;
        goto label_46cc64;
    }
    ctx->pc = 0x46CC5Cu;
    SET_GPR_U32(ctx, 31, 0x46CC64u);
    ctx->pc = 0x46DA80u;
    if (runtime->hasFunction(0x46DA80u)) {
        auto targetFn = runtime->lookupFunction(0x46DA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CC64u; }
        if (ctx->pc != 0x46CC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046DA80_0x46da80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CC64u; }
        if (ctx->pc != 0x46CC64u) { return; }
    }
    ctx->pc = 0x46CC64u;
label_46cc64:
    // 0x46cc64: 0x92850001  lbu         $a1, 0x1($s4)
    ctx->pc = 0x46cc64u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_46cc68:
    // 0x46cc68: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x46cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_46cc6c:
    // 0x46cc6c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x46cc6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_46cc70:
    // 0x46cc70: 0x24631490  addiu       $v1, $v1, 0x1490
    ctx->pc = 0x46cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5264));
label_46cc74:
    // 0x46cc74: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x46cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_46cc78:
    // 0x46cc78: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46cc7c:
    // 0x46cc7c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x46cc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_46cc80:
    // 0x46cc80: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x46cc80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_46cc84:
    // 0x46cc84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46cc88:
    // 0x46cc88: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_46cc8c:
    if (ctx->pc == 0x46CC8Cu) {
        ctx->pc = 0x46CC8Cu;
            // 0x46cc8c: 0x8c73002c  lw          $s3, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->pc = 0x46CC90u;
        goto label_46cc90;
    }
    ctx->pc = 0x46CC88u;
    {
        const bool branch_taken_0x46cc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CC88u;
            // 0x46cc8c: 0x8c73002c  lw          $s3, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cc88) {
            ctx->pc = 0x46CCC4u;
            goto label_46ccc4;
        }
    }
    ctx->pc = 0x46CC90u;
label_46cc90:
    // 0x46cc90: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x46cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_46cc94:
    // 0x46cc94: 0x5040031d  beql        $v0, $zero, . + 4 + (0x31D << 2)
label_46cc98:
    if (ctx->pc == 0x46CC98u) {
        ctx->pc = 0x46CC98u;
            // 0x46cc98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46CC9Cu;
        goto label_46cc9c;
    }
    ctx->pc = 0x46CC94u;
    {
        const bool branch_taken_0x46cc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cc94) {
            ctx->pc = 0x46CC98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CC94u;
            // 0x46cc98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D90Cu;
            goto label_46d90c;
        }
    }
    ctx->pc = 0x46CC9Cu;
label_46cc9c:
    // 0x46cc9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46cc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46cca0:
    // 0x46cca0: 0xc11b674  jal         func_46D9D0
label_46cca4:
    if (ctx->pc == 0x46CCA4u) {
        ctx->pc = 0x46CCA4u;
            // 0x46cca4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46CCA8u;
        goto label_46cca8;
    }
    ctx->pc = 0x46CCA0u;
    SET_GPR_U32(ctx, 31, 0x46CCA8u);
    ctx->pc = 0x46CCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CCA0u;
            // 0x46cca4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46D9D0u;
    if (runtime->hasFunction(0x46D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x46D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CCA8u; }
        if (ctx->pc != 0x46CCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046D9D0_0x46d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CCA8u; }
        if (ctx->pc != 0x46CCA8u) { return; }
    }
    ctx->pc = 0x46CCA8u;
label_46cca8:
    // 0x46cca8: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x46cca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_46ccac:
    // 0x46ccac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x46ccacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46ccb0:
    // 0x46ccb0: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x46ccb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_46ccb4:
    // 0x46ccb4: 0xc11c874  jal         func_4721D0
label_46ccb8:
    if (ctx->pc == 0x46CCB8u) {
        ctx->pc = 0x46CCB8u;
            // 0x46ccb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46CCBCu;
        goto label_46ccbc;
    }
    ctx->pc = 0x46CCB4u;
    SET_GPR_U32(ctx, 31, 0x46CCBCu);
    ctx->pc = 0x46CCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CCB4u;
            // 0x46ccb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4721D0u;
    if (runtime->hasFunction(0x4721D0u)) {
        auto targetFn = runtime->lookupFunction(0x4721D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CCBCu; }
        if (ctx->pc != 0x46CCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004721D0_0x4721d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CCBCu; }
        if (ctx->pc != 0x46CCBCu) { return; }
    }
    ctx->pc = 0x46CCBCu;
label_46ccbc:
    // 0x46ccbc: 0x10000015  b           . + 4 + (0x15 << 2)
label_46ccc0:
    if (ctx->pc == 0x46CCC0u) {
        ctx->pc = 0x46CCC0u;
            // 0x46ccc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46CCC4u;
        goto label_46ccc4;
    }
    ctx->pc = 0x46CCBCu;
    {
        const bool branch_taken_0x46ccbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CCBCu;
            // 0x46ccc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ccbc) {
            ctx->pc = 0x46CD14u;
            goto label_46cd14;
        }
    }
    ctx->pc = 0x46CCC4u;
label_46ccc4:
    // 0x46ccc4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x46ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_46ccc8:
    // 0x46ccc8: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
label_46cccc:
    if (ctx->pc == 0x46CCCCu) {
        ctx->pc = 0x46CCD0u;
        goto label_46ccd0;
    }
    ctx->pc = 0x46CCC8u;
    {
        const bool branch_taken_0x46ccc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ccc8) {
            ctx->pc = 0x46CE7Cu;
            goto label_46ce7c;
        }
    }
    ctx->pc = 0x46CCD0u;
label_46ccd0:
    // 0x46ccd0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x46ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_46ccd4:
    // 0x46ccd4: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
label_46ccd8:
    if (ctx->pc == 0x46CCD8u) {
        ctx->pc = 0x46CCDCu;
        goto label_46ccdc;
    }
    ctx->pc = 0x46CCD4u;
    {
        const bool branch_taken_0x46ccd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ccd4) {
            ctx->pc = 0x46CE7Cu;
            goto label_46ce7c;
        }
    }
    ctx->pc = 0x46CCDCu;
label_46ccdc:
    // 0x46ccdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46ccdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46cce0:
    // 0x46cce0: 0xc11b674  jal         func_46D9D0
label_46cce4:
    if (ctx->pc == 0x46CCE4u) {
        ctx->pc = 0x46CCE4u;
            // 0x46cce4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46CCE8u;
        goto label_46cce8;
    }
    ctx->pc = 0x46CCE0u;
    SET_GPR_U32(ctx, 31, 0x46CCE8u);
    ctx->pc = 0x46CCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CCE0u;
            // 0x46cce4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46D9D0u;
    if (runtime->hasFunction(0x46D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x46D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CCE8u; }
        if (ctx->pc != 0x46CCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046D9D0_0x46d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CCE8u; }
        if (ctx->pc != 0x46CCE8u) { return; }
    }
    ctx->pc = 0x46CCE8u;
label_46cce8:
    // 0x46cce8: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x46cce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_46ccec:
    // 0x46ccec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46ccecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46ccf0:
    // 0x46ccf0: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x46ccf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_46ccf4:
    // 0x46ccf4: 0xc11c874  jal         func_4721D0
label_46ccf8:
    if (ctx->pc == 0x46CCF8u) {
        ctx->pc = 0x46CCF8u;
            // 0x46ccf8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46CCFCu;
        goto label_46ccfc;
    }
    ctx->pc = 0x46CCF4u;
    SET_GPR_U32(ctx, 31, 0x46CCFCu);
    ctx->pc = 0x46CCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CCF4u;
            // 0x46ccf8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4721D0u;
    if (runtime->hasFunction(0x4721D0u)) {
        auto targetFn = runtime->lookupFunction(0x4721D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CCFCu; }
        if (ctx->pc != 0x46CCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004721D0_0x4721d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CCFCu; }
        if (ctx->pc != 0x46CCFCu) { return; }
    }
    ctx->pc = 0x46CCFCu;
label_46ccfc:
    // 0x46ccfc: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x46ccfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_46cd00:
    // 0x46cd00: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x46cd00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46cd04:
    // 0x46cd04: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x46cd04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_46cd08:
    // 0x46cd08: 0xc11c874  jal         func_4721D0
label_46cd0c:
    if (ctx->pc == 0x46CD0Cu) {
        ctx->pc = 0x46CD0Cu;
            // 0x46cd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46CD10u;
        goto label_46cd10;
    }
    ctx->pc = 0x46CD08u;
    SET_GPR_U32(ctx, 31, 0x46CD10u);
    ctx->pc = 0x46CD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CD08u;
            // 0x46cd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4721D0u;
    if (runtime->hasFunction(0x4721D0u)) {
        auto targetFn = runtime->lookupFunction(0x4721D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CD10u; }
        if (ctx->pc != 0x46CD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004721D0_0x4721d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CD10u; }
        if (ctx->pc != 0x46CD10u) { return; }
    }
    ctx->pc = 0x46CD10u;
label_46cd10:
    // 0x46cd10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46cd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46cd14:
    // 0x46cd14: 0xc11b650  jal         func_46D940
label_46cd18:
    if (ctx->pc == 0x46CD18u) {
        ctx->pc = 0x46CD18u;
            // 0x46cd18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46CD1Cu;
        goto label_46cd1c;
    }
    ctx->pc = 0x46CD14u;
    SET_GPR_U32(ctx, 31, 0x46CD1Cu);
    ctx->pc = 0x46CD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CD14u;
            // 0x46cd18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46D940u;
    if (runtime->hasFunction(0x46D940u)) {
        auto targetFn = runtime->lookupFunction(0x46D940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CD1Cu; }
        if (ctx->pc != 0x46CD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046D940_0x46d940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CD1Cu; }
        if (ctx->pc != 0x46CD1Cu) { return; }
    }
    ctx->pc = 0x46CD1Cu;
label_46cd1c:
    // 0x46cd1c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x46cd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_46cd20:
    // 0x46cd20: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x46cd20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_46cd24:
    // 0x46cd24: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x46cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_46cd28:
    // 0x46cd28: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x46cd28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_46cd2c:
    // 0x46cd2c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x46cd2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_46cd30:
    // 0x46cd30: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x46cd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_46cd34:
    // 0x46cd34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46cd38:
    if (ctx->pc == 0x46CD38u) {
        ctx->pc = 0x46CD38u;
            // 0x46cd38: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x46CD3Cu;
        goto label_46cd3c;
    }
    ctx->pc = 0x46CD34u;
    {
        const bool branch_taken_0x46cd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CD34u;
            // 0x46cd38: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cd34) {
            ctx->pc = 0x46CD44u;
            goto label_46cd44;
        }
    }
    ctx->pc = 0x46CD3Cu;
label_46cd3c:
    // 0x46cd3c: 0x10000030  b           . + 4 + (0x30 << 2)
label_46cd40:
    if (ctx->pc == 0x46CD40u) {
        ctx->pc = 0x46CD40u;
            // 0x46cd40: 0x92830000  lbu         $v1, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x46CD44u;
        goto label_46cd44;
    }
    ctx->pc = 0x46CD3Cu;
    {
        const bool branch_taken_0x46cd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CD3Cu;
            // 0x46cd40: 0x92830000  lbu         $v1, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cd3c) {
            ctx->pc = 0x46CE00u;
            goto label_46ce00;
        }
    }
    ctx->pc = 0x46CD44u;
label_46cd44:
    // 0x46cd44: 0x6620007  bltzl       $s3, . + 4 + (0x7 << 2)
label_46cd48:
    if (ctx->pc == 0x46CD48u) {
        ctx->pc = 0x46CD48u;
            // 0x46cd48: 0x2a62000a  slti        $v0, $s3, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->pc = 0x46CD4Cu;
        goto label_46cd4c;
    }
    ctx->pc = 0x46CD44u;
    {
        const bool branch_taken_0x46cd44 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x46cd44) {
            ctx->pc = 0x46CD48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CD44u;
            // 0x46cd48: 0x2a62000a  slti        $v0, $s3, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46CD64u;
            goto label_46cd64;
        }
    }
    ctx->pc = 0x46CD4Cu;
label_46cd4c:
    // 0x46cd4c: 0x2a61000a  slti        $at, $s3, 0xA
    ctx->pc = 0x46cd4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
label_46cd50:
    // 0x46cd50: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_46cd54:
    if (ctx->pc == 0x46CD54u) {
        ctx->pc = 0x46CD58u;
        goto label_46cd58;
    }
    ctx->pc = 0x46CD50u;
    {
        const bool branch_taken_0x46cd50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cd50) {
            ctx->pc = 0x46CD60u;
            goto label_46cd60;
        }
    }
    ctx->pc = 0x46CD58u;
label_46cd58:
    // 0x46cd58: 0x10000028  b           . + 4 + (0x28 << 2)
label_46cd5c:
    if (ctx->pc == 0x46CD5Cu) {
        ctx->pc = 0x46CD5Cu;
            // 0x46cd5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46CD60u;
        goto label_46cd60;
    }
    ctx->pc = 0x46CD58u;
    {
        const bool branch_taken_0x46cd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CD58u;
            // 0x46cd5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cd58) {
            ctx->pc = 0x46CDFCu;
            goto label_46cdfc;
        }
    }
    ctx->pc = 0x46CD60u;
label_46cd60:
    // 0x46cd60: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x46cd60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
label_46cd64:
    // 0x46cd64: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_46cd68:
    if (ctx->pc == 0x46CD68u) {
        ctx->pc = 0x46CD68u;
            // 0x46cd68: 0x2a62000f  slti        $v0, $s3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->pc = 0x46CD6Cu;
        goto label_46cd6c;
    }
    ctx->pc = 0x46CD64u;
    {
        const bool branch_taken_0x46cd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46cd64) {
            ctx->pc = 0x46CD68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CD64u;
            // 0x46cd68: 0x2a62000f  slti        $v0, $s3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46CD84u;
            goto label_46cd84;
        }
    }
    ctx->pc = 0x46CD6Cu;
label_46cd6c:
    // 0x46cd6c: 0x2a61000f  slti        $at, $s3, 0xF
    ctx->pc = 0x46cd6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
label_46cd70:
    // 0x46cd70: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_46cd74:
    if (ctx->pc == 0x46CD74u) {
        ctx->pc = 0x46CD78u;
        goto label_46cd78;
    }
    ctx->pc = 0x46CD70u;
    {
        const bool branch_taken_0x46cd70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cd70) {
            ctx->pc = 0x46CD80u;
            goto label_46cd80;
        }
    }
    ctx->pc = 0x46CD78u;
label_46cd78:
    // 0x46cd78: 0x10000020  b           . + 4 + (0x20 << 2)
label_46cd7c:
    if (ctx->pc == 0x46CD7Cu) {
        ctx->pc = 0x46CD7Cu;
            // 0x46cd7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46CD80u;
        goto label_46cd80;
    }
    ctx->pc = 0x46CD78u;
    {
        const bool branch_taken_0x46cd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CD78u;
            // 0x46cd7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cd78) {
            ctx->pc = 0x46CDFCu;
            goto label_46cdfc;
        }
    }
    ctx->pc = 0x46CD80u;
label_46cd80:
    // 0x46cd80: 0x2a62000f  slti        $v0, $s3, 0xF
    ctx->pc = 0x46cd80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
label_46cd84:
    // 0x46cd84: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_46cd88:
    if (ctx->pc == 0x46CD88u) {
        ctx->pc = 0x46CD88u;
            // 0x46cd88: 0x2a62002f  slti        $v0, $s3, 0x2F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)47) ? 1 : 0);
        ctx->pc = 0x46CD8Cu;
        goto label_46cd8c;
    }
    ctx->pc = 0x46CD84u;
    {
        const bool branch_taken_0x46cd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46cd84) {
            ctx->pc = 0x46CD88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CD84u;
            // 0x46cd88: 0x2a62002f  slti        $v0, $s3, 0x2F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)47) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46CDA4u;
            goto label_46cda4;
        }
    }
    ctx->pc = 0x46CD8Cu;
label_46cd8c:
    // 0x46cd8c: 0x2a610013  slti        $at, $s3, 0x13
    ctx->pc = 0x46cd8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)19) ? 1 : 0);
label_46cd90:
    // 0x46cd90: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_46cd94:
    if (ctx->pc == 0x46CD94u) {
        ctx->pc = 0x46CD98u;
        goto label_46cd98;
    }
    ctx->pc = 0x46CD90u;
    {
        const bool branch_taken_0x46cd90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cd90) {
            ctx->pc = 0x46CDA0u;
            goto label_46cda0;
        }
    }
    ctx->pc = 0x46CD98u;
label_46cd98:
    // 0x46cd98: 0x10000018  b           . + 4 + (0x18 << 2)
label_46cd9c:
    if (ctx->pc == 0x46CD9Cu) {
        ctx->pc = 0x46CD9Cu;
            // 0x46cd9c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x46CDA0u;
        goto label_46cda0;
    }
    ctx->pc = 0x46CD98u;
    {
        const bool branch_taken_0x46cd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CD98u;
            // 0x46cd9c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cd98) {
            ctx->pc = 0x46CDFCu;
            goto label_46cdfc;
        }
    }
    ctx->pc = 0x46CDA0u;
label_46cda0:
    // 0x46cda0: 0x2a62002f  slti        $v0, $s3, 0x2F
    ctx->pc = 0x46cda0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)47) ? 1 : 0);
label_46cda4:
    // 0x46cda4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_46cda8:
    if (ctx->pc == 0x46CDA8u) {
        ctx->pc = 0x46CDA8u;
            // 0x46cda8: 0x2a620016  slti        $v0, $s3, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->pc = 0x46CDACu;
        goto label_46cdac;
    }
    ctx->pc = 0x46CDA4u;
    {
        const bool branch_taken_0x46cda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46cda4) {
            ctx->pc = 0x46CDA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CDA4u;
            // 0x46cda8: 0x2a620016  slti        $v0, $s3, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46CDC4u;
            goto label_46cdc4;
        }
    }
    ctx->pc = 0x46CDACu;
label_46cdac:
    // 0x46cdac: 0x2a610032  slti        $at, $s3, 0x32
    ctx->pc = 0x46cdacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)50) ? 1 : 0);
label_46cdb0:
    // 0x46cdb0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_46cdb4:
    if (ctx->pc == 0x46CDB4u) {
        ctx->pc = 0x46CDB8u;
        goto label_46cdb8;
    }
    ctx->pc = 0x46CDB0u;
    {
        const bool branch_taken_0x46cdb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cdb0) {
            ctx->pc = 0x46CDC0u;
            goto label_46cdc0;
        }
    }
    ctx->pc = 0x46CDB8u;
label_46cdb8:
    // 0x46cdb8: 0x10000010  b           . + 4 + (0x10 << 2)
label_46cdbc:
    if (ctx->pc == 0x46CDBCu) {
        ctx->pc = 0x46CDBCu;
            // 0x46cdbc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x46CDC0u;
        goto label_46cdc0;
    }
    ctx->pc = 0x46CDB8u;
    {
        const bool branch_taken_0x46cdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CDB8u;
            // 0x46cdbc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cdb8) {
            ctx->pc = 0x46CDFCu;
            goto label_46cdfc;
        }
    }
    ctx->pc = 0x46CDC0u;
label_46cdc0:
    // 0x46cdc0: 0x2a620016  slti        $v0, $s3, 0x16
    ctx->pc = 0x46cdc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
label_46cdc4:
    // 0x46cdc4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_46cdc8:
    if (ctx->pc == 0x46CDC8u) {
        ctx->pc = 0x46CDC8u;
            // 0x46cdc8: 0x2a620013  slti        $v0, $s3, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->pc = 0x46CDCCu;
        goto label_46cdcc;
    }
    ctx->pc = 0x46CDC4u;
    {
        const bool branch_taken_0x46cdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46cdc4) {
            ctx->pc = 0x46CDC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CDC4u;
            // 0x46cdc8: 0x2a620013  slti        $v0, $s3, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46CDE4u;
            goto label_46cde4;
        }
    }
    ctx->pc = 0x46CDCCu;
label_46cdcc:
    // 0x46cdcc: 0x2a61001a  slti        $at, $s3, 0x1A
    ctx->pc = 0x46cdccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)26) ? 1 : 0);
label_46cdd0:
    // 0x46cdd0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_46cdd4:
    if (ctx->pc == 0x46CDD4u) {
        ctx->pc = 0x46CDD8u;
        goto label_46cdd8;
    }
    ctx->pc = 0x46CDD0u;
    {
        const bool branch_taken_0x46cdd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cdd0) {
            ctx->pc = 0x46CDE0u;
            goto label_46cde0;
        }
    }
    ctx->pc = 0x46CDD8u;
label_46cdd8:
    // 0x46cdd8: 0x10000008  b           . + 4 + (0x8 << 2)
label_46cddc:
    if (ctx->pc == 0x46CDDCu) {
        ctx->pc = 0x46CDDCu;
            // 0x46cddc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x46CDE0u;
        goto label_46cde0;
    }
    ctx->pc = 0x46CDD8u;
    {
        const bool branch_taken_0x46cdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CDD8u;
            // 0x46cddc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cdd8) {
            ctx->pc = 0x46CDFCu;
            goto label_46cdfc;
        }
    }
    ctx->pc = 0x46CDE0u;
label_46cde0:
    // 0x46cde0: 0x2a620013  slti        $v0, $s3, 0x13
    ctx->pc = 0x46cde0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)19) ? 1 : 0);
label_46cde4:
    // 0x46cde4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_46cde8:
    if (ctx->pc == 0x46CDE8u) {
        ctx->pc = 0x46CDECu;
        goto label_46cdec;
    }
    ctx->pc = 0x46CDE4u;
    {
        const bool branch_taken_0x46cde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46cde4) {
            ctx->pc = 0x46CDFCu;
            goto label_46cdfc;
        }
    }
    ctx->pc = 0x46CDECu;
label_46cdec:
    // 0x46cdec: 0x2a610016  slti        $at, $s3, 0x16
    ctx->pc = 0x46cdecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
label_46cdf0:
    // 0x46cdf0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_46cdf4:
    if (ctx->pc == 0x46CDF4u) {
        ctx->pc = 0x46CDF8u;
        goto label_46cdf8;
    }
    ctx->pc = 0x46CDF0u;
    {
        const bool branch_taken_0x46cdf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cdf0) {
            ctx->pc = 0x46CDFCu;
            goto label_46cdfc;
        }
    }
    ctx->pc = 0x46CDF8u;
label_46cdf8:
    // 0x46cdf8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x46cdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_46cdfc:
    // 0x46cdfc: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x46cdfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_46ce00:
    // 0x46ce00: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x46ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_46ce04:
    // 0x46ce04: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x46ce04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_46ce08:
    // 0x46ce08: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
label_46ce0c:
    if (ctx->pc == 0x46CE0Cu) {
        ctx->pc = 0x46CE0Cu;
            // 0x46ce0c: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->pc = 0x46CE10u;
        goto label_46ce10;
    }
    ctx->pc = 0x46CE08u;
    {
        const bool branch_taken_0x46ce08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46ce08) {
            ctx->pc = 0x46CE0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CE08u;
            // 0x46ce0c: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46CE44u;
            goto label_46ce44;
        }
    }
    ctx->pc = 0x46CE10u;
label_46ce10:
    // 0x46ce10: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x46ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_46ce14:
    // 0x46ce14: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_46ce18:
    if (ctx->pc == 0x46CE18u) {
        ctx->pc = 0x46CE1Cu;
        goto label_46ce1c;
    }
    ctx->pc = 0x46CE14u;
    {
        const bool branch_taken_0x46ce14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46ce14) {
            ctx->pc = 0x46CE40u;
            goto label_46ce40;
        }
    }
    ctx->pc = 0x46CE1Cu;
label_46ce1c:
    // 0x46ce1c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x46ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_46ce20:
    // 0x46ce20: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_46ce24:
    if (ctx->pc == 0x46CE24u) {
        ctx->pc = 0x46CE24u;
            // 0x46ce24: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->pc = 0x46CE28u;
        goto label_46ce28;
    }
    ctx->pc = 0x46CE20u;
    {
        const bool branch_taken_0x46ce20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46ce20) {
            ctx->pc = 0x46CE24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CE20u;
            // 0x46ce24: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46CE30u;
            goto label_46ce30;
        }
    }
    ctx->pc = 0x46CE28u;
label_46ce28:
    // 0x46ce28: 0x1000000b  b           . + 4 + (0xB << 2)
label_46ce2c:
    if (ctx->pc == 0x46CE2Cu) {
        ctx->pc = 0x46CE2Cu;
            // 0x46ce2c: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->pc = 0x46CE30u;
        goto label_46ce30;
    }
    ctx->pc = 0x46CE28u;
    {
        const bool branch_taken_0x46ce28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CE28u;
            // 0x46ce2c: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ce28) {
            ctx->pc = 0x46CE58u;
            goto label_46ce58;
        }
    }
    ctx->pc = 0x46CE30u;
label_46ce30:
    // 0x46ce30: 0xc0c91e8  jal         func_3247A0
label_46ce34:
    if (ctx->pc == 0x46CE34u) {
        ctx->pc = 0x46CE34u;
            // 0x46ce34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46CE38u;
        goto label_46ce38;
    }
    ctx->pc = 0x46CE30u;
    SET_GPR_U32(ctx, 31, 0x46CE38u);
    ctx->pc = 0x46CE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CE30u;
            // 0x46ce34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3247A0u;
    if (runtime->hasFunction(0x3247A0u)) {
        auto targetFn = runtime->lookupFunction(0x3247A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CE38u; }
        if (ctx->pc != 0x46CE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003247A0_0x3247a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CE38u; }
        if (ctx->pc != 0x46CE38u) { return; }
    }
    ctx->pc = 0x46CE38u;
label_46ce38:
    // 0x46ce38: 0x1000000a  b           . + 4 + (0xA << 2)
label_46ce3c:
    if (ctx->pc == 0x46CE3Cu) {
        ctx->pc = 0x46CE3Cu;
            // 0x46ce3c: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x46CE40u;
        goto label_46ce40;
    }
    ctx->pc = 0x46CE38u;
    {
        const bool branch_taken_0x46ce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CE38u;
            // 0x46ce3c: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ce38) {
            ctx->pc = 0x46CE64u;
            goto label_46ce64;
        }
    }
    ctx->pc = 0x46CE40u;
label_46ce40:
    // 0x46ce40: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x46ce40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_46ce44:
    // 0x46ce44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x46ce44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46ce48:
    // 0x46ce48: 0xc0c91e8  jal         func_3247A0
label_46ce4c:
    if (ctx->pc == 0x46CE4Cu) {
        ctx->pc = 0x46CE4Cu;
            // 0x46ce4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46CE50u;
        goto label_46ce50;
    }
    ctx->pc = 0x46CE48u;
    SET_GPR_U32(ctx, 31, 0x46CE50u);
    ctx->pc = 0x46CE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CE48u;
            // 0x46ce4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3247A0u;
    if (runtime->hasFunction(0x3247A0u)) {
        auto targetFn = runtime->lookupFunction(0x3247A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CE50u; }
        if (ctx->pc != 0x46CE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003247A0_0x3247a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CE50u; }
        if (ctx->pc != 0x46CE50u) { return; }
    }
    ctx->pc = 0x46CE50u;
label_46ce50:
    // 0x46ce50: 0x10000004  b           . + 4 + (0x4 << 2)
label_46ce54:
    if (ctx->pc == 0x46CE54u) {
        ctx->pc = 0x46CE54u;
            // 0x46ce54: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x46CE58u;
        goto label_46ce58;
    }
    ctx->pc = 0x46CE50u;
    {
        const bool branch_taken_0x46ce50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CE50u;
            // 0x46ce54: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ce50) {
            ctx->pc = 0x46CE64u;
            goto label_46ce64;
        }
    }
    ctx->pc = 0x46CE58u;
label_46ce58:
    // 0x46ce58: 0xc0c91e8  jal         func_3247A0
label_46ce5c:
    if (ctx->pc == 0x46CE5Cu) {
        ctx->pc = 0x46CE5Cu;
            // 0x46ce5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46CE60u;
        goto label_46ce60;
    }
    ctx->pc = 0x46CE58u;
    SET_GPR_U32(ctx, 31, 0x46CE60u);
    ctx->pc = 0x46CE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CE58u;
            // 0x46ce5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3247A0u;
    if (runtime->hasFunction(0x3247A0u)) {
        auto targetFn = runtime->lookupFunction(0x3247A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CE60u; }
        if (ctx->pc != 0x46CE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003247A0_0x3247a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CE60u; }
        if (ctx->pc != 0x46CE60u) { return; }
    }
    ctx->pc = 0x46CE60u;
label_46ce60:
    // 0x46ce60: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x46ce60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_46ce64:
    // 0x46ce64: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x46ce64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_46ce68:
    // 0x46ce68: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x46ce68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_46ce6c:
    // 0x46ce6c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x46ce6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_46ce70:
    // 0x46ce70: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x46ce70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_46ce74:
    // 0x46ce74: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x46ce74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_46ce78:
    // 0x46ce78: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x46ce78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_46ce7c:
    // 0x46ce7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46ce7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46ce80:
    // 0x46ce80: 0x100002a2  b           . + 4 + (0x2A2 << 2)
label_46ce84:
    if (ctx->pc == 0x46CE84u) {
        ctx->pc = 0x46CE88u;
        goto label_46ce88;
    }
    ctx->pc = 0x46CE80u;
    {
        const bool branch_taken_0x46ce80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ce80) {
            ctx->pc = 0x46D90Cu;
            goto label_46d90c;
        }
    }
    ctx->pc = 0x46CE88u;
label_46ce88:
    // 0x46ce88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x46ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_46ce8c:
    // 0x46ce8c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x46ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_46ce90:
    // 0x46ce90: 0x24429764  addiu       $v0, $v0, -0x689C
    ctx->pc = 0x46ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940516));
label_46ce94:
    // 0x46ce94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x46ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_46ce98:
    // 0x46ce98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46ce9c:
    // 0x46ce9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46cea0:
    // 0x46cea0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46cea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46cea4:
    // 0x46cea4: 0x50400299  beql        $v0, $zero, . + 4 + (0x299 << 2)
label_46cea8:
    if (ctx->pc == 0x46CEA8u) {
        ctx->pc = 0x46CEA8u;
            // 0x46cea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46CEACu;
        goto label_46ceac;
    }
    ctx->pc = 0x46CEA4u;
    {
        const bool branch_taken_0x46cea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cea4) {
            ctx->pc = 0x46CEA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CEA4u;
            // 0x46cea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D90Cu;
            goto label_46d90c;
        }
    }
    ctx->pc = 0x46CEACu;
label_46ceac:
    // 0x46ceac: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x46ceacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_46ceb0:
    // 0x46ceb0: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x46ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_46ceb4:
    // 0x46ceb4: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_46ceb8:
    if (ctx->pc == 0x46CEB8u) {
        ctx->pc = 0x46CEB8u;
            // 0x46ceb8: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x46CEBCu;
        goto label_46cebc;
    }
    ctx->pc = 0x46CEB4u;
    {
        const bool branch_taken_0x46ceb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46ceb4) {
            ctx->pc = 0x46CEB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CEB4u;
            // 0x46ceb8: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46CED8u;
            goto label_46ced8;
        }
    }
    ctx->pc = 0x46CEBCu;
label_46cebc:
    // 0x46cebc: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x46cebcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_46cec0:
    // 0x46cec0: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x46cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_46cec4:
    // 0x46cec4: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x46cec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
label_46cec8:
    // 0x46cec8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x46cec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_46cecc:
    // 0x46cecc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x46ceccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_46ced0:
    // 0x46ced0: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x46ced0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_46ced4:
    // 0x46ced4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x46ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_46ced8:
    // 0x46ced8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x46ced8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_46cedc:
    // 0x46cedc: 0x50400200  beql        $v0, $zero, . + 4 + (0x200 << 2)
label_46cee0:
    if (ctx->pc == 0x46CEE0u) {
        ctx->pc = 0x46CEE0u;
            // 0x46cee0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x46CEE4u;
        goto label_46cee4;
    }
    ctx->pc = 0x46CEDCu;
    {
        const bool branch_taken_0x46cedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cedc) {
            ctx->pc = 0x46CEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CEDCu;
            // 0x46cee0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D6E0u;
            goto label_46d6e0;
        }
    }
    ctx->pc = 0x46CEE4u;
label_46cee4:
    // 0x46cee4: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x46cee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_46cee8:
    // 0x46cee8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x46cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46ceec:
    // 0x46ceec: 0x108200a9  beq         $a0, $v0, . + 4 + (0xA9 << 2)
label_46cef0:
    if (ctx->pc == 0x46CEF0u) {
        ctx->pc = 0x46CEF0u;
            // 0x46cef0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46CEF4u;
        goto label_46cef4;
    }
    ctx->pc = 0x46CEECu;
    {
        const bool branch_taken_0x46ceec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x46CEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CEECu;
            // 0x46cef0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ceec) {
            ctx->pc = 0x46D194u;
            goto label_46d194;
        }
    }
    ctx->pc = 0x46CEF4u;
label_46cef4:
    // 0x46cef4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x46cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46cef8:
    // 0x46cef8: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
label_46cefc:
    if (ctx->pc == 0x46CEFCu) {
        ctx->pc = 0x46CEFCu;
            // 0x46cefc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46CF00u;
        goto label_46cf00;
    }
    ctx->pc = 0x46CEF8u;
    {
        const bool branch_taken_0x46cef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46cef8) {
            ctx->pc = 0x46CEFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CEF8u;
            // 0x46cefc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46CF18u;
            goto label_46cf18;
        }
    }
    ctx->pc = 0x46CF00u;
label_46cf00:
    // 0x46cf00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46cf04:
    // 0x46cf04: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_46cf08:
    if (ctx->pc == 0x46CF08u) {
        ctx->pc = 0x46CF0Cu;
        goto label_46cf0c;
    }
    ctx->pc = 0x46CF04u;
    {
        const bool branch_taken_0x46cf04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46cf04) {
            ctx->pc = 0x46CF14u;
            goto label_46cf14;
        }
    }
    ctx->pc = 0x46CF0Cu;
label_46cf0c:
    // 0x46cf0c: 0x100001ec  b           . + 4 + (0x1EC << 2)
label_46cf10:
    if (ctx->pc == 0x46CF10u) {
        ctx->pc = 0x46CF14u;
        goto label_46cf14;
    }
    ctx->pc = 0x46CF0Cu;
    {
        const bool branch_taken_0x46cf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cf0c) {
            ctx->pc = 0x46D6C0u;
            goto label_46d6c0;
        }
    }
    ctx->pc = 0x46CF14u;
label_46cf14:
    // 0x46cf14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46cf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46cf18:
    // 0x46cf18: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x46cf18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46cf1c:
    // 0x46cf1c: 0x94620072  lhu         $v0, 0x72($v1)
    ctx->pc = 0x46cf1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 114)));
label_46cf20:
    // 0x46cf20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46cf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46cf24:
    // 0x46cf24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_46cf28:
    if (ctx->pc == 0x46CF28u) {
        ctx->pc = 0x46CF2Cu;
        goto label_46cf2c;
    }
    ctx->pc = 0x46CF24u;
    {
        const bool branch_taken_0x46cf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cf24) {
            ctx->pc = 0x46CF30u;
            goto label_46cf30;
        }
    }
    ctx->pc = 0x46CF2Cu;
label_46cf2c:
    // 0x46cf2c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x46cf2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_46cf30:
    // 0x46cf30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x46cf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_46cf34:
    // 0x46cf34: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x46cf34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_46cf38:
    // 0x46cf38: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_46cf3c:
    if (ctx->pc == 0x46CF3Cu) {
        ctx->pc = 0x46CF3Cu;
            // 0x46cf3c: 0x2463005c  addiu       $v1, $v1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
        ctx->pc = 0x46CF40u;
        goto label_46cf40;
    }
    ctx->pc = 0x46CF38u;
    {
        const bool branch_taken_0x46cf38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46CF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CF38u;
            // 0x46cf3c: 0x2463005c  addiu       $v1, $v1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cf38) {
            ctx->pc = 0x46CF1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46cf1c;
        }
    }
    ctx->pc = 0x46CF40u;
label_46cf40:
    // 0x46cf40: 0x1ec001df  bgtz        $s6, . + 4 + (0x1DF << 2)
label_46cf44:
    if (ctx->pc == 0x46CF44u) {
        ctx->pc = 0x46CF48u;
        goto label_46cf48;
    }
    ctx->pc = 0x46CF40u;
    {
        const bool branch_taken_0x46cf40 = (GPR_S32(ctx, 22) > 0);
        if (branch_taken_0x46cf40) {
            ctx->pc = 0x46D6C0u;
            goto label_46d6c0;
        }
    }
    ctx->pc = 0x46CF48u;
label_46cf48:
    // 0x46cf48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x46cf48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46cf4c:
    // 0x46cf4c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x46cf4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46cf50:
    // 0x46cf50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46cf54:
    // 0x46cf54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46cf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46cf58:
    // 0x46cf58: 0xa2620070  sb          $v0, 0x70($s3)
    ctx->pc = 0x46cf58u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 2));
label_46cf5c:
    // 0x46cf5c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x46cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_46cf60:
    // 0x46cf60: 0x92620071  lbu         $v0, 0x71($s3)
    ctx->pc = 0x46cf60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 113)));
label_46cf64:
    // 0x46cf64: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x46cf64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46cf68:
    // 0x46cf68: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x46cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_46cf6c:
    // 0x46cf6c: 0x2a880  sll         $s5, $v0, 2
    ctx->pc = 0x46cf6cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46cf70:
    // 0x46cf70: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x46cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_46cf74:
    // 0x46cf74: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x46cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_46cf78:
    // 0x46cf78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46cf7c:
    // 0x46cf7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46cf7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46cf80:
    // 0x46cf80: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46cf80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46cf84:
    // 0x46cf84: 0x320f809  jalr        $t9
label_46cf88:
    if (ctx->pc == 0x46CF88u) {
        ctx->pc = 0x46CF88u;
            // 0x46cf88: 0x26720070  addiu       $s2, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x46CF8Cu;
        goto label_46cf8c;
    }
    ctx->pc = 0x46CF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46CF8Cu);
        ctx->pc = 0x46CF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CF84u;
            // 0x46cf88: 0x26720070  addiu       $s2, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46CF8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46CF8Cu; }
            if (ctx->pc != 0x46CF8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46CF8Cu;
label_46cf8c:
    // 0x46cf8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46cf90:
    // 0x46cf90: 0xa282007c  sb          $v0, 0x7C($s4)
    ctx->pc = 0x46cf90u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 124), (uint8_t)GPR_U32(ctx, 2));
label_46cf94:
    // 0x46cf94: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x46cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_46cf98:
    // 0x46cf98: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x46cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_46cf9c:
    // 0x46cf9c: 0xc123848  jal         func_48E120
label_46cfa0:
    if (ctx->pc == 0x46CFA0u) {
        ctx->pc = 0x46CFA0u;
            // 0x46cfa0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46CFA4u;
        goto label_46cfa4;
    }
    ctx->pc = 0x46CF9Cu;
    SET_GPR_U32(ctx, 31, 0x46CFA4u);
    ctx->pc = 0x46CFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CF9Cu;
            // 0x46cfa0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CFA4u; }
        if (ctx->pc != 0x46CFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CFA4u; }
        if (ctx->pc != 0x46CFA4u) { return; }
    }
    ctx->pc = 0x46CFA4u;
label_46cfa4:
    // 0x46cfa4: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x46cfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_46cfa8:
    // 0x46cfa8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x46cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_46cfac:
    // 0x46cfac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46cfb0:
    // 0x46cfb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x46cfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46cfb4:
    // 0x46cfb4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x46cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_46cfb8:
    // 0x46cfb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46cfbc:
    // 0x46cfbc: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x46cfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_46cfc0:
    // 0x46cfc0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x46cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46cfc4:
    // 0x46cfc4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x46cfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46cfc8:
    // 0x46cfc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46cfcc:
    // 0x46cfcc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x46cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_46cfd0:
    // 0x46cfd0: 0xa4850046  sh          $a1, 0x46($a0)
    ctx->pc = 0x46cfd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 5));
label_46cfd4:
    // 0x46cfd4: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x46cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_46cfd8:
    // 0x46cfd8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x46cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_46cfdc:
    // 0x46cfdc: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x46cfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_46cfe0:
    // 0x46cfe0: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x46cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_46cfe4:
    // 0x46cfe4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x46cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46cfe8:
    // 0x46cfe8: 0xa4800046  sh          $zero, 0x46($a0)
    ctx->pc = 0x46cfe8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 0));
label_46cfec:
    // 0x46cfec: 0xa6400004  sh          $zero, 0x4($s2)
    ctx->pc = 0x46cfecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
label_46cff0:
    // 0x46cff0: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x46cff0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
label_46cff4:
    // 0x46cff4: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x46cff4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_46cff8:
    // 0x46cff8: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x46cff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
label_46cffc:
    // 0x46cffc: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x46cffcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_46d000:
    // 0x46d000: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x46d000u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_46d004:
    // 0x46d004: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x46d004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
label_46d008:
    // 0x46d008: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x46d008u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_46d00c:
    // 0x46d00c: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x46d00cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_46d010:
    // 0x46d010: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x46d010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
label_46d014:
    // 0x46d014: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x46d014u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_46d018:
    // 0x46d018: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x46d018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_46d01c:
    // 0x46d01c: 0x8c450098  lw          $a1, 0x98($v0)
    ctx->pc = 0x46d01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_46d020:
    // 0x46d020: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_46d024:
    if (ctx->pc == 0x46D024u) {
        ctx->pc = 0x46D024u;
            // 0x46d024: 0x24540070  addiu       $s4, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->pc = 0x46D028u;
        goto label_46d028;
    }
    ctx->pc = 0x46D020u;
    {
        const bool branch_taken_0x46d020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D020u;
            // 0x46d024: 0x24540070  addiu       $s4, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d020) {
            ctx->pc = 0x46D048u;
            goto label_46d048;
        }
    }
    ctx->pc = 0x46D028u;
label_46d028:
    // 0x46d028: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46d02c:
    if (ctx->pc == 0x46D02Cu) {
        ctx->pc = 0x46D030u;
        goto label_46d030;
    }
    ctx->pc = 0x46D028u;
    {
        const bool branch_taken_0x46d028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d028) {
            ctx->pc = 0x46D040u;
            goto label_46d040;
        }
    }
    ctx->pc = 0x46D030u;
label_46d030:
    // 0x46d030: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d034:
    // 0x46d034: 0xc0fe48c  jal         func_3F9230
label_46d038:
    if (ctx->pc == 0x46D038u) {
        ctx->pc = 0x46D038u;
            // 0x46d038: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D03Cu;
        goto label_46d03c;
    }
    ctx->pc = 0x46D034u;
    SET_GPR_U32(ctx, 31, 0x46D03Cu);
    ctx->pc = 0x46D038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D034u;
            // 0x46d038: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D03Cu; }
        if (ctx->pc != 0x46D03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D03Cu; }
        if (ctx->pc != 0x46D03Cu) { return; }
    }
    ctx->pc = 0x46D03Cu;
label_46d03c:
    // 0x46d03c: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x46d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_46d040:
    // 0x46d040: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x46d040u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_46d044:
    // 0x46d044: 0x0  nop
    ctx->pc = 0x46d044u;
    // NOP
label_46d048:
    // 0x46d048: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x46d048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_46d04c:
    // 0x46d04c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46d050:
    if (ctx->pc == 0x46D050u) {
        ctx->pc = 0x46D054u;
        goto label_46d054;
    }
    ctx->pc = 0x46D04Cu;
    {
        const bool branch_taken_0x46d04c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d04c) {
            ctx->pc = 0x46D078u;
            goto label_46d078;
        }
    }
    ctx->pc = 0x46D054u;
label_46d054:
    // 0x46d054: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46d058:
    if (ctx->pc == 0x46D058u) {
        ctx->pc = 0x46D05Cu;
        goto label_46d05c;
    }
    ctx->pc = 0x46D054u;
    {
        const bool branch_taken_0x46d054 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d054) {
            ctx->pc = 0x46D070u;
            goto label_46d070;
        }
    }
    ctx->pc = 0x46D05Cu;
label_46d05c:
    // 0x46d05c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d060:
    // 0x46d060: 0xc0fe48c  jal         func_3F9230
label_46d064:
    if (ctx->pc == 0x46D064u) {
        ctx->pc = 0x46D064u;
            // 0x46d064: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D068u;
        goto label_46d068;
    }
    ctx->pc = 0x46D060u;
    SET_GPR_U32(ctx, 31, 0x46D068u);
    ctx->pc = 0x46D064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D060u;
            // 0x46d064: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D068u; }
        if (ctx->pc != 0x46D068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D068u; }
        if (ctx->pc != 0x46D068u) { return; }
    }
    ctx->pc = 0x46D068u;
label_46d068:
    // 0x46d068: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x46d068u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
label_46d06c:
    // 0x46d06c: 0x0  nop
    ctx->pc = 0x46d06cu;
    // NOP
label_46d070:
    // 0x46d070: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x46d070u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
label_46d074:
    // 0x46d074: 0x0  nop
    ctx->pc = 0x46d074u;
    // NOP
label_46d078:
    // 0x46d078: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x46d078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_46d07c:
    // 0x46d07c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46d080:
    if (ctx->pc == 0x46D080u) {
        ctx->pc = 0x46D084u;
        goto label_46d084;
    }
    ctx->pc = 0x46D07Cu;
    {
        const bool branch_taken_0x46d07c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d07c) {
            ctx->pc = 0x46D0A8u;
            goto label_46d0a8;
        }
    }
    ctx->pc = 0x46D084u;
label_46d084:
    // 0x46d084: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46d088:
    if (ctx->pc == 0x46D088u) {
        ctx->pc = 0x46D08Cu;
        goto label_46d08c;
    }
    ctx->pc = 0x46D084u;
    {
        const bool branch_taken_0x46d084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d084) {
            ctx->pc = 0x46D0A0u;
            goto label_46d0a0;
        }
    }
    ctx->pc = 0x46D08Cu;
label_46d08c:
    // 0x46d08c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d090:
    // 0x46d090: 0xc0fe48c  jal         func_3F9230
label_46d094:
    if (ctx->pc == 0x46D094u) {
        ctx->pc = 0x46D094u;
            // 0x46d094: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D098u;
        goto label_46d098;
    }
    ctx->pc = 0x46D090u;
    SET_GPR_U32(ctx, 31, 0x46D098u);
    ctx->pc = 0x46D094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D090u;
            // 0x46d094: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D098u; }
        if (ctx->pc != 0x46D098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D098u; }
        if (ctx->pc != 0x46D098u) { return; }
    }
    ctx->pc = 0x46D098u;
label_46d098:
    // 0x46d098: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x46d098u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_46d09c:
    // 0x46d09c: 0x0  nop
    ctx->pc = 0x46d09cu;
    // NOP
label_46d0a0:
    // 0x46d0a0: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x46d0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_46d0a4:
    // 0x46d0a4: 0x0  nop
    ctx->pc = 0x46d0a4u;
    // NOP
label_46d0a8:
    // 0x46d0a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x46d0a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46d0ac:
    // 0x46d0ac: 0x0  nop
    ctx->pc = 0x46d0acu;
    // NOP
label_46d0b0:
    // 0x46d0b0: 0x8e85002c  lw          $a1, 0x2C($s4)
    ctx->pc = 0x46d0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_46d0b4:
    // 0x46d0b4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46d0b8:
    if (ctx->pc == 0x46D0B8u) {
        ctx->pc = 0x46D0BCu;
        goto label_46d0bc;
    }
    ctx->pc = 0x46D0B4u;
    {
        const bool branch_taken_0x46d0b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d0b4) {
            ctx->pc = 0x46D0E0u;
            goto label_46d0e0;
        }
    }
    ctx->pc = 0x46D0BCu;
label_46d0bc:
    // 0x46d0bc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46d0c0:
    if (ctx->pc == 0x46D0C0u) {
        ctx->pc = 0x46D0C4u;
        goto label_46d0c4;
    }
    ctx->pc = 0x46D0BCu;
    {
        const bool branch_taken_0x46d0bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d0bc) {
            ctx->pc = 0x46D0D8u;
            goto label_46d0d8;
        }
    }
    ctx->pc = 0x46D0C4u;
label_46d0c4:
    // 0x46d0c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d0c8:
    // 0x46d0c8: 0xc0fe48c  jal         func_3F9230
label_46d0cc:
    if (ctx->pc == 0x46D0CCu) {
        ctx->pc = 0x46D0CCu;
            // 0x46d0cc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D0D0u;
        goto label_46d0d0;
    }
    ctx->pc = 0x46D0C8u;
    SET_GPR_U32(ctx, 31, 0x46D0D0u);
    ctx->pc = 0x46D0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D0C8u;
            // 0x46d0cc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D0D0u; }
        if (ctx->pc != 0x46D0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D0D0u; }
        if (ctx->pc != 0x46D0D0u) { return; }
    }
    ctx->pc = 0x46D0D0u;
label_46d0d0:
    // 0x46d0d0: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x46d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_46d0d4:
    // 0x46d0d4: 0x0  nop
    ctx->pc = 0x46d0d4u;
    // NOP
label_46d0d8:
    // 0x46d0d8: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x46d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_46d0dc:
    // 0x46d0dc: 0x0  nop
    ctx->pc = 0x46d0dcu;
    // NOP
label_46d0e0:
    // 0x46d0e0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x46d0e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_46d0e4:
    // 0x46d0e4: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x46d0e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_46d0e8:
    // 0x46d0e8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_46d0ec:
    if (ctx->pc == 0x46D0ECu) {
        ctx->pc = 0x46D0ECu;
            // 0x46d0ec: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x46D0F0u;
        goto label_46d0f0;
    }
    ctx->pc = 0x46D0E8u;
    {
        const bool branch_taken_0x46d0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D0E8u;
            // 0x46d0ec: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d0e8) {
            ctx->pc = 0x46D0B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46d0b0;
        }
    }
    ctx->pc = 0x46D0F0u;
label_46d0f0:
    // 0x46d0f0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x46d0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_46d0f4:
    // 0x46d0f4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_46d0f8:
    if (ctx->pc == 0x46D0F8u) {
        ctx->pc = 0x46D0FCu;
        goto label_46d0fc;
    }
    ctx->pc = 0x46D0F4u;
    {
        const bool branch_taken_0x46d0f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d0f4) {
            ctx->pc = 0x46D118u;
            goto label_46d118;
        }
    }
    ctx->pc = 0x46D0FCu;
label_46d0fc:
    // 0x46d0fc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46d100:
    if (ctx->pc == 0x46D100u) {
        ctx->pc = 0x46D104u;
        goto label_46d104;
    }
    ctx->pc = 0x46D0FCu;
    {
        const bool branch_taken_0x46d0fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d0fc) {
            ctx->pc = 0x46D118u;
            goto label_46d118;
        }
    }
    ctx->pc = 0x46D104u;
label_46d104:
    // 0x46d104: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d108:
    // 0x46d108: 0xc0fe48c  jal         func_3F9230
label_46d10c:
    if (ctx->pc == 0x46D10Cu) {
        ctx->pc = 0x46D10Cu;
            // 0x46d10c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D110u;
        goto label_46d110;
    }
    ctx->pc = 0x46D108u;
    SET_GPR_U32(ctx, 31, 0x46D110u);
    ctx->pc = 0x46D10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D108u;
            // 0x46d10c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D110u; }
        if (ctx->pc != 0x46D110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D110u; }
        if (ctx->pc != 0x46D110u) { return; }
    }
    ctx->pc = 0x46D110u;
label_46d110:
    // 0x46d110: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x46d110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_46d114:
    // 0x46d114: 0x0  nop
    ctx->pc = 0x46d114u;
    // NOP
label_46d118:
    // 0x46d118: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x46d118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_46d11c:
    // 0x46d11c: 0x8e450048  lw          $a1, 0x48($s2)
    ctx->pc = 0x46d11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_46d120:
    // 0x46d120: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_46d124:
    if (ctx->pc == 0x46D124u) {
        ctx->pc = 0x46D128u;
        goto label_46d128;
    }
    ctx->pc = 0x46D120u;
    {
        const bool branch_taken_0x46d120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d120) {
            ctx->pc = 0x46D140u;
            goto label_46d140;
        }
    }
    ctx->pc = 0x46D128u;
label_46d128:
    // 0x46d128: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46d12c:
    if (ctx->pc == 0x46D12Cu) {
        ctx->pc = 0x46D130u;
        goto label_46d130;
    }
    ctx->pc = 0x46D128u;
    {
        const bool branch_taken_0x46d128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d128) {
            ctx->pc = 0x46D140u;
            goto label_46d140;
        }
    }
    ctx->pc = 0x46D130u;
label_46d130:
    // 0x46d130: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d134:
    // 0x46d134: 0xc0fe48c  jal         func_3F9230
label_46d138:
    if (ctx->pc == 0x46D138u) {
        ctx->pc = 0x46D138u;
            // 0x46d138: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D13Cu;
        goto label_46d13c;
    }
    ctx->pc = 0x46D134u;
    SET_GPR_U32(ctx, 31, 0x46D13Cu);
    ctx->pc = 0x46D138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D134u;
            // 0x46d138: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D13Cu; }
        if (ctx->pc != 0x46D13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D13Cu; }
        if (ctx->pc != 0x46D13Cu) { return; }
    }
    ctx->pc = 0x46D13Cu;
label_46d13c:
    // 0x46d13c: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x46d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_46d140:
    // 0x46d140: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x46d140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_46d144:
    // 0x46d144: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x46d144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_46d148:
    // 0x46d148: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_46d14c:
    if (ctx->pc == 0x46D14Cu) {
        ctx->pc = 0x46D150u;
        goto label_46d150;
    }
    ctx->pc = 0x46D148u;
    {
        const bool branch_taken_0x46d148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d148) {
            ctx->pc = 0x46D168u;
            goto label_46d168;
        }
    }
    ctx->pc = 0x46D150u;
label_46d150:
    // 0x46d150: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46d154:
    if (ctx->pc == 0x46D154u) {
        ctx->pc = 0x46D158u;
        goto label_46d158;
    }
    ctx->pc = 0x46D150u;
    {
        const bool branch_taken_0x46d150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d150) {
            ctx->pc = 0x46D168u;
            goto label_46d168;
        }
    }
    ctx->pc = 0x46D158u;
label_46d158:
    // 0x46d158: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d15c:
    // 0x46d15c: 0xc0fe48c  jal         func_3F9230
label_46d160:
    if (ctx->pc == 0x46D160u) {
        ctx->pc = 0x46D160u;
            // 0x46d160: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D164u;
        goto label_46d164;
    }
    ctx->pc = 0x46D15Cu;
    SET_GPR_U32(ctx, 31, 0x46D164u);
    ctx->pc = 0x46D160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D15Cu;
            // 0x46d160: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D164u; }
        if (ctx->pc != 0x46D164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D164u; }
        if (ctx->pc != 0x46D164u) { return; }
    }
    ctx->pc = 0x46D164u;
label_46d164:
    // 0x46d164: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x46d164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_46d168:
    // 0x46d168: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x46d168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_46d16c:
    // 0x46d16c: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x46d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_46d170:
    // 0x46d170: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x46d170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_46d174:
    // 0x46d174: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x46d174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_46d178:
    // 0x46d178: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x46d178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
label_46d17c:
    // 0x46d17c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x46d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_46d180:
    // 0x46d180: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x46d180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46d184:
    // 0x46d184: 0x1440ff72  bnez        $v0, . + 4 + (-0x8E << 2)
label_46d188:
    if (ctx->pc == 0x46D188u) {
        ctx->pc = 0x46D188u;
            // 0x46d188: 0x2673005c  addiu       $s3, $s3, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
        ctx->pc = 0x46D18Cu;
        goto label_46d18c;
    }
    ctx->pc = 0x46D184u;
    {
        const bool branch_taken_0x46d184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D184u;
            // 0x46d188: 0x2673005c  addiu       $s3, $s3, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d184) {
            ctx->pc = 0x46CF50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46cf50;
        }
    }
    ctx->pc = 0x46D18Cu;
label_46d18c:
    // 0x46d18c: 0x1000014c  b           . + 4 + (0x14C << 2)
label_46d190:
    if (ctx->pc == 0x46D190u) {
        ctx->pc = 0x46D194u;
        goto label_46d194;
    }
    ctx->pc = 0x46D18Cu;
    {
        const bool branch_taken_0x46d18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d18c) {
            ctx->pc = 0x46D6C0u;
            goto label_46d6c0;
        }
    }
    ctx->pc = 0x46D194u;
label_46d194:
    // 0x46d194: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x46d194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46d198:
    // 0x46d198: 0x524200ac  beql        $s2, $v0, . + 4 + (0xAC << 2)
label_46d19c:
    if (ctx->pc == 0x46D19Cu) {
        ctx->pc = 0x46D19Cu;
            // 0x46d19c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46D1A0u;
        goto label_46d1a0;
    }
    ctx->pc = 0x46D198u;
    {
        const bool branch_taken_0x46d198 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x46d198) {
            ctx->pc = 0x46D19Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D198u;
            // 0x46d19c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D44Cu;
            goto label_46d44c;
        }
    }
    ctx->pc = 0x46D1A0u;
label_46d1a0:
    // 0x46d1a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46d1a4:
    // 0x46d1a4: 0x124200a8  beq         $s2, $v0, . + 4 + (0xA8 << 2)
label_46d1a8:
    if (ctx->pc == 0x46D1A8u) {
        ctx->pc = 0x46D1ACu;
        goto label_46d1ac;
    }
    ctx->pc = 0x46D1A4u;
    {
        const bool branch_taken_0x46d1a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x46d1a4) {
            ctx->pc = 0x46D448u;
            goto label_46d448;
        }
    }
    ctx->pc = 0x46D1ACu;
label_46d1ac:
    // 0x46d1ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46d1b0:
    // 0x46d1b0: 0x52420006  beql        $s2, $v0, . + 4 + (0x6 << 2)
label_46d1b4:
    if (ctx->pc == 0x46D1B4u) {
        ctx->pc = 0x46D1B4u;
            // 0x46d1b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46D1B8u;
        goto label_46d1b8;
    }
    ctx->pc = 0x46D1B0u;
    {
        const bool branch_taken_0x46d1b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x46d1b0) {
            ctx->pc = 0x46D1B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D1B0u;
            // 0x46d1b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D1CCu;
            goto label_46d1cc;
        }
    }
    ctx->pc = 0x46D1B8u;
label_46d1b8:
    // 0x46d1b8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_46d1bc:
    if (ctx->pc == 0x46D1BCu) {
        ctx->pc = 0x46D1C0u;
        goto label_46d1c0;
    }
    ctx->pc = 0x46D1B8u;
    {
        const bool branch_taken_0x46d1b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d1b8) {
            ctx->pc = 0x46D1C8u;
            goto label_46d1c8;
        }
    }
    ctx->pc = 0x46D1C0u;
label_46d1c0:
    // 0x46d1c0: 0x1000013f  b           . + 4 + (0x13F << 2)
label_46d1c4:
    if (ctx->pc == 0x46D1C4u) {
        ctx->pc = 0x46D1C8u;
        goto label_46d1c8;
    }
    ctx->pc = 0x46D1C0u;
    {
        const bool branch_taken_0x46d1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d1c0) {
            ctx->pc = 0x46D6C0u;
            goto label_46d6c0;
        }
    }
    ctx->pc = 0x46D1C8u;
label_46d1c8:
    // 0x46d1c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x46d1c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46d1cc:
    // 0x46d1cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46d1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46d1d0:
    // 0x46d1d0: 0x94a20072  lhu         $v0, 0x72($a1)
    ctx->pc = 0x46d1d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 114)));
label_46d1d4:
    // 0x46d1d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46d1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46d1d8:
    // 0x46d1d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46d1dc:
    if (ctx->pc == 0x46D1DCu) {
        ctx->pc = 0x46D1E0u;
        goto label_46d1e0;
    }
    ctx->pc = 0x46D1D8u;
    {
        const bool branch_taken_0x46d1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d1d8) {
            ctx->pc = 0x46D1E8u;
            goto label_46d1e8;
        }
    }
    ctx->pc = 0x46D1E0u;
label_46d1e0:
    // 0x46d1e0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x46d1e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_46d1e4:
    // 0x46d1e4: 0x0  nop
    ctx->pc = 0x46d1e4u;
    // NOP
label_46d1e8:
    // 0x46d1e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_46d1ec:
    // 0x46d1ec: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x46d1ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_46d1f0:
    // 0x46d1f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_46d1f4:
    if (ctx->pc == 0x46D1F4u) {
        ctx->pc = 0x46D1F4u;
            // 0x46d1f4: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->pc = 0x46D1F8u;
        goto label_46d1f8;
    }
    ctx->pc = 0x46D1F0u;
    {
        const bool branch_taken_0x46d1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D1F0u;
            // 0x46d1f4: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d1f0) {
            ctx->pc = 0x46D1D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46d1d0;
        }
    }
    ctx->pc = 0x46D1F8u;
label_46d1f8:
    // 0x46d1f8: 0x1ec00131  bgtz        $s6, . + 4 + (0x131 << 2)
label_46d1fc:
    if (ctx->pc == 0x46D1FCu) {
        ctx->pc = 0x46D200u;
        goto label_46d200;
    }
    ctx->pc = 0x46D1F8u;
    {
        const bool branch_taken_0x46d1f8 = (GPR_S32(ctx, 22) > 0);
        if (branch_taken_0x46d1f8) {
            ctx->pc = 0x46D6C0u;
            goto label_46d6c0;
        }
    }
    ctx->pc = 0x46D200u;
label_46d200:
    // 0x46d200: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x46d200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46d204:
    // 0x46d204: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x46d204u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46d208:
    // 0x46d208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46d208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46d20c:
    // 0x46d20c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46d20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46d210:
    // 0x46d210: 0xa2620070  sb          $v0, 0x70($s3)
    ctx->pc = 0x46d210u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 2));
label_46d214:
    // 0x46d214: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x46d214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_46d218:
    // 0x46d218: 0x92620071  lbu         $v0, 0x71($s3)
    ctx->pc = 0x46d218u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 113)));
label_46d21c:
    // 0x46d21c: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x46d21cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46d220:
    // 0x46d220: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x46d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_46d224:
    // 0x46d224: 0x2a880  sll         $s5, $v0, 2
    ctx->pc = 0x46d224u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46d228:
    // 0x46d228: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x46d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_46d22c:
    // 0x46d22c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x46d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_46d230:
    // 0x46d230: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46d230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46d234:
    // 0x46d234: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46d234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46d238:
    // 0x46d238: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46d238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46d23c:
    // 0x46d23c: 0x320f809  jalr        $t9
label_46d240:
    if (ctx->pc == 0x46D240u) {
        ctx->pc = 0x46D240u;
            // 0x46d240: 0x26720070  addiu       $s2, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x46D244u;
        goto label_46d244;
    }
    ctx->pc = 0x46D23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46D244u);
        ctx->pc = 0x46D240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D23Cu;
            // 0x46d240: 0x26720070  addiu       $s2, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46D244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46D244u; }
            if (ctx->pc != 0x46D244u) { return; }
        }
        }
    }
    ctx->pc = 0x46D244u;
label_46d244:
    // 0x46d244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46d244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46d248:
    // 0x46d248: 0xa282007c  sb          $v0, 0x7C($s4)
    ctx->pc = 0x46d248u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 124), (uint8_t)GPR_U32(ctx, 2));
label_46d24c:
    // 0x46d24c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x46d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_46d250:
    // 0x46d250: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x46d250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_46d254:
    // 0x46d254: 0xc123848  jal         func_48E120
label_46d258:
    if (ctx->pc == 0x46D258u) {
        ctx->pc = 0x46D258u;
            // 0x46d258: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46D25Cu;
        goto label_46d25c;
    }
    ctx->pc = 0x46D254u;
    SET_GPR_U32(ctx, 31, 0x46D25Cu);
    ctx->pc = 0x46D258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D254u;
            // 0x46d258: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D25Cu; }
        if (ctx->pc != 0x46D25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D25Cu; }
        if (ctx->pc != 0x46D25Cu) { return; }
    }
    ctx->pc = 0x46D25Cu;
label_46d25c:
    // 0x46d25c: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x46d25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_46d260:
    // 0x46d260: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x46d260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_46d264:
    // 0x46d264: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46d264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46d268:
    // 0x46d268: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x46d268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46d26c:
    // 0x46d26c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x46d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_46d270:
    // 0x46d270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46d270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46d274:
    // 0x46d274: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x46d274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_46d278:
    // 0x46d278: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x46d278u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46d27c:
    // 0x46d27c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x46d27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46d280:
    // 0x46d280: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46d280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46d284:
    // 0x46d284: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x46d284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_46d288:
    // 0x46d288: 0xa4850046  sh          $a1, 0x46($a0)
    ctx->pc = 0x46d288u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 5));
label_46d28c:
    // 0x46d28c: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x46d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_46d290:
    // 0x46d290: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x46d290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_46d294:
    // 0x46d294: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x46d294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_46d298:
    // 0x46d298: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x46d298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_46d29c:
    // 0x46d29c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x46d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46d2a0:
    // 0x46d2a0: 0xa4800046  sh          $zero, 0x46($a0)
    ctx->pc = 0x46d2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 0));
label_46d2a4:
    // 0x46d2a4: 0xa6400004  sh          $zero, 0x4($s2)
    ctx->pc = 0x46d2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
label_46d2a8:
    // 0x46d2a8: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x46d2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
label_46d2ac:
    // 0x46d2ac: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x46d2acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_46d2b0:
    // 0x46d2b0: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x46d2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
label_46d2b4:
    // 0x46d2b4: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x46d2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_46d2b8:
    // 0x46d2b8: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x46d2b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_46d2bc:
    // 0x46d2bc: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x46d2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
label_46d2c0:
    // 0x46d2c0: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x46d2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_46d2c4:
    // 0x46d2c4: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x46d2c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_46d2c8:
    // 0x46d2c8: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x46d2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
label_46d2cc:
    // 0x46d2cc: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x46d2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_46d2d0:
    // 0x46d2d0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x46d2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_46d2d4:
    // 0x46d2d4: 0x8c450098  lw          $a1, 0x98($v0)
    ctx->pc = 0x46d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_46d2d8:
    // 0x46d2d8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_46d2dc:
    if (ctx->pc == 0x46D2DCu) {
        ctx->pc = 0x46D2DCu;
            // 0x46d2dc: 0x24540070  addiu       $s4, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->pc = 0x46D2E0u;
        goto label_46d2e0;
    }
    ctx->pc = 0x46D2D8u;
    {
        const bool branch_taken_0x46d2d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D2D8u;
            // 0x46d2dc: 0x24540070  addiu       $s4, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d2d8) {
            ctx->pc = 0x46D300u;
            goto label_46d300;
        }
    }
    ctx->pc = 0x46D2E0u;
label_46d2e0:
    // 0x46d2e0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46d2e4:
    if (ctx->pc == 0x46D2E4u) {
        ctx->pc = 0x46D2E8u;
        goto label_46d2e8;
    }
    ctx->pc = 0x46D2E0u;
    {
        const bool branch_taken_0x46d2e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d2e0) {
            ctx->pc = 0x46D2F8u;
            goto label_46d2f8;
        }
    }
    ctx->pc = 0x46D2E8u;
label_46d2e8:
    // 0x46d2e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d2ec:
    // 0x46d2ec: 0xc0fe48c  jal         func_3F9230
label_46d2f0:
    if (ctx->pc == 0x46D2F0u) {
        ctx->pc = 0x46D2F0u;
            // 0x46d2f0: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D2F4u;
        goto label_46d2f4;
    }
    ctx->pc = 0x46D2ECu;
    SET_GPR_U32(ctx, 31, 0x46D2F4u);
    ctx->pc = 0x46D2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D2ECu;
            // 0x46d2f0: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D2F4u; }
        if (ctx->pc != 0x46D2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D2F4u; }
        if (ctx->pc != 0x46D2F4u) { return; }
    }
    ctx->pc = 0x46D2F4u;
label_46d2f4:
    // 0x46d2f4: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x46d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_46d2f8:
    // 0x46d2f8: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x46d2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_46d2fc:
    // 0x46d2fc: 0x0  nop
    ctx->pc = 0x46d2fcu;
    // NOP
label_46d300:
    // 0x46d300: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x46d300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_46d304:
    // 0x46d304: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46d308:
    if (ctx->pc == 0x46D308u) {
        ctx->pc = 0x46D30Cu;
        goto label_46d30c;
    }
    ctx->pc = 0x46D304u;
    {
        const bool branch_taken_0x46d304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d304) {
            ctx->pc = 0x46D330u;
            goto label_46d330;
        }
    }
    ctx->pc = 0x46D30Cu;
label_46d30c:
    // 0x46d30c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46d310:
    if (ctx->pc == 0x46D310u) {
        ctx->pc = 0x46D314u;
        goto label_46d314;
    }
    ctx->pc = 0x46D30Cu;
    {
        const bool branch_taken_0x46d30c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d30c) {
            ctx->pc = 0x46D328u;
            goto label_46d328;
        }
    }
    ctx->pc = 0x46D314u;
label_46d314:
    // 0x46d314: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d318:
    // 0x46d318: 0xc0fe48c  jal         func_3F9230
label_46d31c:
    if (ctx->pc == 0x46D31Cu) {
        ctx->pc = 0x46D31Cu;
            // 0x46d31c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D320u;
        goto label_46d320;
    }
    ctx->pc = 0x46D318u;
    SET_GPR_U32(ctx, 31, 0x46D320u);
    ctx->pc = 0x46D31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D318u;
            // 0x46d31c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D320u; }
        if (ctx->pc != 0x46D320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D320u; }
        if (ctx->pc != 0x46D320u) { return; }
    }
    ctx->pc = 0x46D320u;
label_46d320:
    // 0x46d320: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x46d320u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
label_46d324:
    // 0x46d324: 0x0  nop
    ctx->pc = 0x46d324u;
    // NOP
label_46d328:
    // 0x46d328: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x46d328u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
label_46d32c:
    // 0x46d32c: 0x0  nop
    ctx->pc = 0x46d32cu;
    // NOP
label_46d330:
    // 0x46d330: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x46d330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_46d334:
    // 0x46d334: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46d338:
    if (ctx->pc == 0x46D338u) {
        ctx->pc = 0x46D33Cu;
        goto label_46d33c;
    }
    ctx->pc = 0x46D334u;
    {
        const bool branch_taken_0x46d334 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d334) {
            ctx->pc = 0x46D360u;
            goto label_46d360;
        }
    }
    ctx->pc = 0x46D33Cu;
label_46d33c:
    // 0x46d33c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46d340:
    if (ctx->pc == 0x46D340u) {
        ctx->pc = 0x46D344u;
        goto label_46d344;
    }
    ctx->pc = 0x46D33Cu;
    {
        const bool branch_taken_0x46d33c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d33c) {
            ctx->pc = 0x46D358u;
            goto label_46d358;
        }
    }
    ctx->pc = 0x46D344u;
label_46d344:
    // 0x46d344: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d348:
    // 0x46d348: 0xc0fe48c  jal         func_3F9230
label_46d34c:
    if (ctx->pc == 0x46D34Cu) {
        ctx->pc = 0x46D34Cu;
            // 0x46d34c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D350u;
        goto label_46d350;
    }
    ctx->pc = 0x46D348u;
    SET_GPR_U32(ctx, 31, 0x46D350u);
    ctx->pc = 0x46D34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D348u;
            // 0x46d34c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D350u; }
        if (ctx->pc != 0x46D350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D350u; }
        if (ctx->pc != 0x46D350u) { return; }
    }
    ctx->pc = 0x46D350u;
label_46d350:
    // 0x46d350: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x46d350u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_46d354:
    // 0x46d354: 0x0  nop
    ctx->pc = 0x46d354u;
    // NOP
label_46d358:
    // 0x46d358: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x46d358u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_46d35c:
    // 0x46d35c: 0x0  nop
    ctx->pc = 0x46d35cu;
    // NOP
label_46d360:
    // 0x46d360: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x46d360u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46d364:
    // 0x46d364: 0x0  nop
    ctx->pc = 0x46d364u;
    // NOP
label_46d368:
    // 0x46d368: 0x8e85002c  lw          $a1, 0x2C($s4)
    ctx->pc = 0x46d368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_46d36c:
    // 0x46d36c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46d370:
    if (ctx->pc == 0x46D370u) {
        ctx->pc = 0x46D374u;
        goto label_46d374;
    }
    ctx->pc = 0x46D36Cu;
    {
        const bool branch_taken_0x46d36c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d36c) {
            ctx->pc = 0x46D398u;
            goto label_46d398;
        }
    }
    ctx->pc = 0x46D374u;
label_46d374:
    // 0x46d374: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46d378:
    if (ctx->pc == 0x46D378u) {
        ctx->pc = 0x46D37Cu;
        goto label_46d37c;
    }
    ctx->pc = 0x46D374u;
    {
        const bool branch_taken_0x46d374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d374) {
            ctx->pc = 0x46D390u;
            goto label_46d390;
        }
    }
    ctx->pc = 0x46D37Cu;
label_46d37c:
    // 0x46d37c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d380:
    // 0x46d380: 0xc0fe48c  jal         func_3F9230
label_46d384:
    if (ctx->pc == 0x46D384u) {
        ctx->pc = 0x46D384u;
            // 0x46d384: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D388u;
        goto label_46d388;
    }
    ctx->pc = 0x46D380u;
    SET_GPR_U32(ctx, 31, 0x46D388u);
    ctx->pc = 0x46D384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D380u;
            // 0x46d384: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D388u; }
        if (ctx->pc != 0x46D388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D388u; }
        if (ctx->pc != 0x46D388u) { return; }
    }
    ctx->pc = 0x46D388u;
label_46d388:
    // 0x46d388: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x46d388u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_46d38c:
    // 0x46d38c: 0x0  nop
    ctx->pc = 0x46d38cu;
    // NOP
label_46d390:
    // 0x46d390: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x46d390u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_46d394:
    // 0x46d394: 0x0  nop
    ctx->pc = 0x46d394u;
    // NOP
label_46d398:
    // 0x46d398: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x46d398u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_46d39c:
    // 0x46d39c: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x46d39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_46d3a0:
    // 0x46d3a0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_46d3a4:
    if (ctx->pc == 0x46D3A4u) {
        ctx->pc = 0x46D3A4u;
            // 0x46d3a4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x46D3A8u;
        goto label_46d3a8;
    }
    ctx->pc = 0x46D3A0u;
    {
        const bool branch_taken_0x46d3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D3A0u;
            // 0x46d3a4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d3a0) {
            ctx->pc = 0x46D368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46d368;
        }
    }
    ctx->pc = 0x46D3A8u;
label_46d3a8:
    // 0x46d3a8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x46d3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_46d3ac:
    // 0x46d3ac: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_46d3b0:
    if (ctx->pc == 0x46D3B0u) {
        ctx->pc = 0x46D3B4u;
        goto label_46d3b4;
    }
    ctx->pc = 0x46D3ACu;
    {
        const bool branch_taken_0x46d3ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d3ac) {
            ctx->pc = 0x46D3D0u;
            goto label_46d3d0;
        }
    }
    ctx->pc = 0x46D3B4u;
label_46d3b4:
    // 0x46d3b4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46d3b8:
    if (ctx->pc == 0x46D3B8u) {
        ctx->pc = 0x46D3BCu;
        goto label_46d3bc;
    }
    ctx->pc = 0x46D3B4u;
    {
        const bool branch_taken_0x46d3b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d3b4) {
            ctx->pc = 0x46D3D0u;
            goto label_46d3d0;
        }
    }
    ctx->pc = 0x46D3BCu;
label_46d3bc:
    // 0x46d3bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d3c0:
    // 0x46d3c0: 0xc0fe48c  jal         func_3F9230
label_46d3c4:
    if (ctx->pc == 0x46D3C4u) {
        ctx->pc = 0x46D3C4u;
            // 0x46d3c4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D3C8u;
        goto label_46d3c8;
    }
    ctx->pc = 0x46D3C0u;
    SET_GPR_U32(ctx, 31, 0x46D3C8u);
    ctx->pc = 0x46D3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D3C0u;
            // 0x46d3c4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D3C8u; }
        if (ctx->pc != 0x46D3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D3C8u; }
        if (ctx->pc != 0x46D3C8u) { return; }
    }
    ctx->pc = 0x46D3C8u;
label_46d3c8:
    // 0x46d3c8: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x46d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_46d3cc:
    // 0x46d3cc: 0x0  nop
    ctx->pc = 0x46d3ccu;
    // NOP
label_46d3d0:
    // 0x46d3d0: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x46d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_46d3d4:
    // 0x46d3d4: 0x8e450048  lw          $a1, 0x48($s2)
    ctx->pc = 0x46d3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_46d3d8:
    // 0x46d3d8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_46d3dc:
    if (ctx->pc == 0x46D3DCu) {
        ctx->pc = 0x46D3E0u;
        goto label_46d3e0;
    }
    ctx->pc = 0x46D3D8u;
    {
        const bool branch_taken_0x46d3d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d3d8) {
            ctx->pc = 0x46D3F8u;
            goto label_46d3f8;
        }
    }
    ctx->pc = 0x46D3E0u;
label_46d3e0:
    // 0x46d3e0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46d3e4:
    if (ctx->pc == 0x46D3E4u) {
        ctx->pc = 0x46D3E8u;
        goto label_46d3e8;
    }
    ctx->pc = 0x46D3E0u;
    {
        const bool branch_taken_0x46d3e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d3e0) {
            ctx->pc = 0x46D3F8u;
            goto label_46d3f8;
        }
    }
    ctx->pc = 0x46D3E8u;
label_46d3e8:
    // 0x46d3e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d3ec:
    // 0x46d3ec: 0xc0fe48c  jal         func_3F9230
label_46d3f0:
    if (ctx->pc == 0x46D3F0u) {
        ctx->pc = 0x46D3F0u;
            // 0x46d3f0: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D3F4u;
        goto label_46d3f4;
    }
    ctx->pc = 0x46D3ECu;
    SET_GPR_U32(ctx, 31, 0x46D3F4u);
    ctx->pc = 0x46D3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D3ECu;
            // 0x46d3f0: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D3F4u; }
        if (ctx->pc != 0x46D3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D3F4u; }
        if (ctx->pc != 0x46D3F4u) { return; }
    }
    ctx->pc = 0x46D3F4u;
label_46d3f4:
    // 0x46d3f4: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x46d3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_46d3f8:
    // 0x46d3f8: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x46d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_46d3fc:
    // 0x46d3fc: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x46d3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_46d400:
    // 0x46d400: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_46d404:
    if (ctx->pc == 0x46D404u) {
        ctx->pc = 0x46D408u;
        goto label_46d408;
    }
    ctx->pc = 0x46D400u;
    {
        const bool branch_taken_0x46d400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d400) {
            ctx->pc = 0x46D420u;
            goto label_46d420;
        }
    }
    ctx->pc = 0x46D408u;
label_46d408:
    // 0x46d408: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46d40c:
    if (ctx->pc == 0x46D40Cu) {
        ctx->pc = 0x46D410u;
        goto label_46d410;
    }
    ctx->pc = 0x46D408u;
    {
        const bool branch_taken_0x46d408 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d408) {
            ctx->pc = 0x46D420u;
            goto label_46d420;
        }
    }
    ctx->pc = 0x46D410u;
label_46d410:
    // 0x46d410: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d414:
    // 0x46d414: 0xc0fe48c  jal         func_3F9230
label_46d418:
    if (ctx->pc == 0x46D418u) {
        ctx->pc = 0x46D418u;
            // 0x46d418: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D41Cu;
        goto label_46d41c;
    }
    ctx->pc = 0x46D414u;
    SET_GPR_U32(ctx, 31, 0x46D41Cu);
    ctx->pc = 0x46D418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D414u;
            // 0x46d418: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D41Cu; }
        if (ctx->pc != 0x46D41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D41Cu; }
        if (ctx->pc != 0x46D41Cu) { return; }
    }
    ctx->pc = 0x46D41Cu;
label_46d41c:
    // 0x46d41c: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x46d41cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_46d420:
    // 0x46d420: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x46d420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_46d424:
    // 0x46d424: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x46d424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_46d428:
    // 0x46d428: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x46d428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_46d42c:
    // 0x46d42c: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x46d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_46d430:
    // 0x46d430: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x46d430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_46d434:
    // 0x46d434: 0x2673005c  addiu       $s3, $s3, 0x5C
    ctx->pc = 0x46d434u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
label_46d438:
    // 0x46d438: 0x1440ff73  bnez        $v0, . + 4 + (-0x8D << 2)
label_46d43c:
    if (ctx->pc == 0x46D43Cu) {
        ctx->pc = 0x46D43Cu;
            // 0x46d43c: 0xae400050  sw          $zero, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x46D440u;
        goto label_46d440;
    }
    ctx->pc = 0x46D438u;
    {
        const bool branch_taken_0x46d438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D438u;
            // 0x46d43c: 0xae400050  sw          $zero, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d438) {
            ctx->pc = 0x46D208u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46d208;
        }
    }
    ctx->pc = 0x46D440u;
label_46d440:
    // 0x46d440: 0x1000009f  b           . + 4 + (0x9F << 2)
label_46d444:
    if (ctx->pc == 0x46D444u) {
        ctx->pc = 0x46D448u;
        goto label_46d448;
    }
    ctx->pc = 0x46D440u;
    {
        const bool branch_taken_0x46d440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d440) {
            ctx->pc = 0x46D6C0u;
            goto label_46d6c0;
        }
    }
    ctx->pc = 0x46D448u;
label_46d448:
    // 0x46d448: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x46d448u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46d44c:
    // 0x46d44c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46d44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46d450:
    // 0x46d450: 0x94a20072  lhu         $v0, 0x72($a1)
    ctx->pc = 0x46d450u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 114)));
label_46d454:
    // 0x46d454: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46d454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46d458:
    // 0x46d458: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46d45c:
    if (ctx->pc == 0x46D45Cu) {
        ctx->pc = 0x46D460u;
        goto label_46d460;
    }
    ctx->pc = 0x46D458u;
    {
        const bool branch_taken_0x46d458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d458) {
            ctx->pc = 0x46D468u;
            goto label_46d468;
        }
    }
    ctx->pc = 0x46D460u;
label_46d460:
    // 0x46d460: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x46d460u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_46d464:
    // 0x46d464: 0x0  nop
    ctx->pc = 0x46d464u;
    // NOP
label_46d468:
    // 0x46d468: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46d468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_46d46c:
    // 0x46d46c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x46d46cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_46d470:
    // 0x46d470: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_46d474:
    if (ctx->pc == 0x46D474u) {
        ctx->pc = 0x46D474u;
            // 0x46d474: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->pc = 0x46D478u;
        goto label_46d478;
    }
    ctx->pc = 0x46D470u;
    {
        const bool branch_taken_0x46d470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D470u;
            // 0x46d474: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d470) {
            ctx->pc = 0x46D450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46d450;
        }
    }
    ctx->pc = 0x46D478u;
label_46d478:
    // 0x46d478: 0x1ec00091  bgtz        $s6, . + 4 + (0x91 << 2)
label_46d47c:
    if (ctx->pc == 0x46D47Cu) {
        ctx->pc = 0x46D480u;
        goto label_46d480;
    }
    ctx->pc = 0x46D478u;
    {
        const bool branch_taken_0x46d478 = (GPR_S32(ctx, 22) > 0);
        if (branch_taken_0x46d478) {
            ctx->pc = 0x46D6C0u;
            goto label_46d6c0;
        }
    }
    ctx->pc = 0x46D480u;
label_46d480:
    // 0x46d480: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x46d480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46d484:
    // 0x46d484: 0x261300b8  addiu       $s3, $s0, 0xB8
    ctx->pc = 0x46d484u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_46d488:
    // 0x46d488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46d488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46d48c:
    // 0x46d48c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46d48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46d490:
    // 0x46d490: 0xa2620070  sb          $v0, 0x70($s3)
    ctx->pc = 0x46d490u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 2));
label_46d494:
    // 0x46d494: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x46d494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_46d498:
    // 0x46d498: 0x92620071  lbu         $v0, 0x71($s3)
    ctx->pc = 0x46d498u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 113)));
label_46d49c:
    // 0x46d49c: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x46d49cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46d4a0:
    // 0x46d4a0: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x46d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_46d4a4:
    // 0x46d4a4: 0x2a880  sll         $s5, $v0, 2
    ctx->pc = 0x46d4a4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46d4a8:
    // 0x46d4a8: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x46d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_46d4ac:
    // 0x46d4ac: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x46d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_46d4b0:
    // 0x46d4b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46d4b4:
    // 0x46d4b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46d4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46d4b8:
    // 0x46d4b8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46d4b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46d4bc:
    // 0x46d4bc: 0x320f809  jalr        $t9
label_46d4c0:
    if (ctx->pc == 0x46D4C0u) {
        ctx->pc = 0x46D4C0u;
            // 0x46d4c0: 0x26720070  addiu       $s2, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x46D4C4u;
        goto label_46d4c4;
    }
    ctx->pc = 0x46D4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46D4C4u);
        ctx->pc = 0x46D4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D4BCu;
            // 0x46d4c0: 0x26720070  addiu       $s2, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46D4C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46D4C4u; }
            if (ctx->pc != 0x46D4C4u) { return; }
        }
        }
    }
    ctx->pc = 0x46D4C4u;
label_46d4c4:
    // 0x46d4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46d4c8:
    // 0x46d4c8: 0xa282007c  sb          $v0, 0x7C($s4)
    ctx->pc = 0x46d4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 124), (uint8_t)GPR_U32(ctx, 2));
label_46d4cc:
    // 0x46d4cc: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x46d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_46d4d0:
    // 0x46d4d0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x46d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_46d4d4:
    // 0x46d4d4: 0xc123848  jal         func_48E120
label_46d4d8:
    if (ctx->pc == 0x46D4D8u) {
        ctx->pc = 0x46D4D8u;
            // 0x46d4d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46D4DCu;
        goto label_46d4dc;
    }
    ctx->pc = 0x46D4D4u;
    SET_GPR_U32(ctx, 31, 0x46D4DCu);
    ctx->pc = 0x46D4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D4D4u;
            // 0x46d4d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D4DCu; }
        if (ctx->pc != 0x46D4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D4DCu; }
        if (ctx->pc != 0x46D4DCu) { return; }
    }
    ctx->pc = 0x46D4DCu;
label_46d4dc:
    // 0x46d4dc: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x46d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_46d4e0:
    // 0x46d4e0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x46d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_46d4e4:
    // 0x46d4e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46d4e8:
    // 0x46d4e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x46d4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46d4ec:
    // 0x46d4ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x46d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_46d4f0:
    // 0x46d4f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46d4f4:
    // 0x46d4f4: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x46d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_46d4f8:
    // 0x46d4f8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x46d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46d4fc:
    // 0x46d4fc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x46d4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46d500:
    // 0x46d500: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46d500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46d504:
    // 0x46d504: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x46d504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_46d508:
    // 0x46d508: 0xa4850046  sh          $a1, 0x46($a0)
    ctx->pc = 0x46d508u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 5));
label_46d50c:
    // 0x46d50c: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x46d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_46d510:
    // 0x46d510: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x46d510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_46d514:
    // 0x46d514: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x46d514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_46d518:
    // 0x46d518: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x46d518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_46d51c:
    // 0x46d51c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x46d51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46d520:
    // 0x46d520: 0xa4800046  sh          $zero, 0x46($a0)
    ctx->pc = 0x46d520u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 0));
label_46d524:
    // 0x46d524: 0xa6400004  sh          $zero, 0x4($s2)
    ctx->pc = 0x46d524u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
label_46d528:
    // 0x46d528: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x46d528u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
label_46d52c:
    // 0x46d52c: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x46d52cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_46d530:
    // 0x46d530: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x46d530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
label_46d534:
    // 0x46d534: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x46d534u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_46d538:
    // 0x46d538: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x46d538u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_46d53c:
    // 0x46d53c: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x46d53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
label_46d540:
    // 0x46d540: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x46d540u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_46d544:
    // 0x46d544: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x46d544u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_46d548:
    // 0x46d548: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x46d548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
label_46d54c:
    // 0x46d54c: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x46d54cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_46d550:
    // 0x46d550: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x46d550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_46d554:
    // 0x46d554: 0x8c450098  lw          $a1, 0x98($v0)
    ctx->pc = 0x46d554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_46d558:
    // 0x46d558: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_46d55c:
    if (ctx->pc == 0x46D55Cu) {
        ctx->pc = 0x46D55Cu;
            // 0x46d55c: 0x24540070  addiu       $s4, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->pc = 0x46D560u;
        goto label_46d560;
    }
    ctx->pc = 0x46D558u;
    {
        const bool branch_taken_0x46d558 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D558u;
            // 0x46d55c: 0x24540070  addiu       $s4, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d558) {
            ctx->pc = 0x46D580u;
            goto label_46d580;
        }
    }
    ctx->pc = 0x46D560u;
label_46d560:
    // 0x46d560: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46d564:
    if (ctx->pc == 0x46D564u) {
        ctx->pc = 0x46D568u;
        goto label_46d568;
    }
    ctx->pc = 0x46D560u;
    {
        const bool branch_taken_0x46d560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d560) {
            ctx->pc = 0x46D578u;
            goto label_46d578;
        }
    }
    ctx->pc = 0x46D568u;
label_46d568:
    // 0x46d568: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d56c:
    // 0x46d56c: 0xc0fe48c  jal         func_3F9230
label_46d570:
    if (ctx->pc == 0x46D570u) {
        ctx->pc = 0x46D570u;
            // 0x46d570: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D574u;
        goto label_46d574;
    }
    ctx->pc = 0x46D56Cu;
    SET_GPR_U32(ctx, 31, 0x46D574u);
    ctx->pc = 0x46D570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D56Cu;
            // 0x46d570: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D574u; }
        if (ctx->pc != 0x46D574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D574u; }
        if (ctx->pc != 0x46D574u) { return; }
    }
    ctx->pc = 0x46D574u;
label_46d574:
    // 0x46d574: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x46d574u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_46d578:
    // 0x46d578: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x46d578u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_46d57c:
    // 0x46d57c: 0x0  nop
    ctx->pc = 0x46d57cu;
    // NOP
label_46d580:
    // 0x46d580: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x46d580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_46d584:
    // 0x46d584: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46d588:
    if (ctx->pc == 0x46D588u) {
        ctx->pc = 0x46D58Cu;
        goto label_46d58c;
    }
    ctx->pc = 0x46D584u;
    {
        const bool branch_taken_0x46d584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d584) {
            ctx->pc = 0x46D5B0u;
            goto label_46d5b0;
        }
    }
    ctx->pc = 0x46D58Cu;
label_46d58c:
    // 0x46d58c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46d590:
    if (ctx->pc == 0x46D590u) {
        ctx->pc = 0x46D594u;
        goto label_46d594;
    }
    ctx->pc = 0x46D58Cu;
    {
        const bool branch_taken_0x46d58c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d58c) {
            ctx->pc = 0x46D5A8u;
            goto label_46d5a8;
        }
    }
    ctx->pc = 0x46D594u;
label_46d594:
    // 0x46d594: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d598:
    // 0x46d598: 0xc0fe48c  jal         func_3F9230
label_46d59c:
    if (ctx->pc == 0x46D59Cu) {
        ctx->pc = 0x46D59Cu;
            // 0x46d59c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D5A0u;
        goto label_46d5a0;
    }
    ctx->pc = 0x46D598u;
    SET_GPR_U32(ctx, 31, 0x46D5A0u);
    ctx->pc = 0x46D59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D598u;
            // 0x46d59c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D5A0u; }
        if (ctx->pc != 0x46D5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D5A0u; }
        if (ctx->pc != 0x46D5A0u) { return; }
    }
    ctx->pc = 0x46D5A0u;
label_46d5a0:
    // 0x46d5a0: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x46d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
label_46d5a4:
    // 0x46d5a4: 0x0  nop
    ctx->pc = 0x46d5a4u;
    // NOP
label_46d5a8:
    // 0x46d5a8: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x46d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
label_46d5ac:
    // 0x46d5ac: 0x0  nop
    ctx->pc = 0x46d5acu;
    // NOP
label_46d5b0:
    // 0x46d5b0: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x46d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_46d5b4:
    // 0x46d5b4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46d5b8:
    if (ctx->pc == 0x46D5B8u) {
        ctx->pc = 0x46D5BCu;
        goto label_46d5bc;
    }
    ctx->pc = 0x46D5B4u;
    {
        const bool branch_taken_0x46d5b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d5b4) {
            ctx->pc = 0x46D5E0u;
            goto label_46d5e0;
        }
    }
    ctx->pc = 0x46D5BCu;
label_46d5bc:
    // 0x46d5bc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46d5c0:
    if (ctx->pc == 0x46D5C0u) {
        ctx->pc = 0x46D5C4u;
        goto label_46d5c4;
    }
    ctx->pc = 0x46D5BCu;
    {
        const bool branch_taken_0x46d5bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d5bc) {
            ctx->pc = 0x46D5D8u;
            goto label_46d5d8;
        }
    }
    ctx->pc = 0x46D5C4u;
label_46d5c4:
    // 0x46d5c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d5c8:
    // 0x46d5c8: 0xc0fe48c  jal         func_3F9230
label_46d5cc:
    if (ctx->pc == 0x46D5CCu) {
        ctx->pc = 0x46D5CCu;
            // 0x46d5cc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D5D0u;
        goto label_46d5d0;
    }
    ctx->pc = 0x46D5C8u;
    SET_GPR_U32(ctx, 31, 0x46D5D0u);
    ctx->pc = 0x46D5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D5C8u;
            // 0x46d5cc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D5D0u; }
        if (ctx->pc != 0x46D5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D5D0u; }
        if (ctx->pc != 0x46D5D0u) { return; }
    }
    ctx->pc = 0x46D5D0u;
label_46d5d0:
    // 0x46d5d0: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x46d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_46d5d4:
    // 0x46d5d4: 0x0  nop
    ctx->pc = 0x46d5d4u;
    // NOP
label_46d5d8:
    // 0x46d5d8: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x46d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_46d5dc:
    // 0x46d5dc: 0x0  nop
    ctx->pc = 0x46d5dcu;
    // NOP
label_46d5e0:
    // 0x46d5e0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x46d5e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46d5e4:
    // 0x46d5e4: 0x0  nop
    ctx->pc = 0x46d5e4u;
    // NOP
label_46d5e8:
    // 0x46d5e8: 0x8e85002c  lw          $a1, 0x2C($s4)
    ctx->pc = 0x46d5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_46d5ec:
    // 0x46d5ec: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46d5f0:
    if (ctx->pc == 0x46D5F0u) {
        ctx->pc = 0x46D5F4u;
        goto label_46d5f4;
    }
    ctx->pc = 0x46D5ECu;
    {
        const bool branch_taken_0x46d5ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d5ec) {
            ctx->pc = 0x46D618u;
            goto label_46d618;
        }
    }
    ctx->pc = 0x46D5F4u;
label_46d5f4:
    // 0x46d5f4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46d5f8:
    if (ctx->pc == 0x46D5F8u) {
        ctx->pc = 0x46D5FCu;
        goto label_46d5fc;
    }
    ctx->pc = 0x46D5F4u;
    {
        const bool branch_taken_0x46d5f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d5f4) {
            ctx->pc = 0x46D610u;
            goto label_46d610;
        }
    }
    ctx->pc = 0x46D5FCu;
label_46d5fc:
    // 0x46d5fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d600:
    // 0x46d600: 0xc0fe48c  jal         func_3F9230
label_46d604:
    if (ctx->pc == 0x46D604u) {
        ctx->pc = 0x46D604u;
            // 0x46d604: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D608u;
        goto label_46d608;
    }
    ctx->pc = 0x46D600u;
    SET_GPR_U32(ctx, 31, 0x46D608u);
    ctx->pc = 0x46D604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D600u;
            // 0x46d604: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D608u; }
        if (ctx->pc != 0x46D608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D608u; }
        if (ctx->pc != 0x46D608u) { return; }
    }
    ctx->pc = 0x46D608u;
label_46d608:
    // 0x46d608: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x46d608u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_46d60c:
    // 0x46d60c: 0x0  nop
    ctx->pc = 0x46d60cu;
    // NOP
label_46d610:
    // 0x46d610: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x46d610u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_46d614:
    // 0x46d614: 0x0  nop
    ctx->pc = 0x46d614u;
    // NOP
label_46d618:
    // 0x46d618: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x46d618u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_46d61c:
    // 0x46d61c: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x46d61cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_46d620:
    // 0x46d620: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_46d624:
    if (ctx->pc == 0x46D624u) {
        ctx->pc = 0x46D624u;
            // 0x46d624: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x46D628u;
        goto label_46d628;
    }
    ctx->pc = 0x46D620u;
    {
        const bool branch_taken_0x46d620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D620u;
            // 0x46d624: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d620) {
            ctx->pc = 0x46D5E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46d5e8;
        }
    }
    ctx->pc = 0x46D628u;
label_46d628:
    // 0x46d628: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x46d628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_46d62c:
    // 0x46d62c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_46d630:
    if (ctx->pc == 0x46D630u) {
        ctx->pc = 0x46D634u;
        goto label_46d634;
    }
    ctx->pc = 0x46D62Cu;
    {
        const bool branch_taken_0x46d62c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d62c) {
            ctx->pc = 0x46D650u;
            goto label_46d650;
        }
    }
    ctx->pc = 0x46D634u;
label_46d634:
    // 0x46d634: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46d638:
    if (ctx->pc == 0x46D638u) {
        ctx->pc = 0x46D63Cu;
        goto label_46d63c;
    }
    ctx->pc = 0x46D634u;
    {
        const bool branch_taken_0x46d634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d634) {
            ctx->pc = 0x46D650u;
            goto label_46d650;
        }
    }
    ctx->pc = 0x46D63Cu;
label_46d63c:
    // 0x46d63c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d640:
    // 0x46d640: 0xc0fe48c  jal         func_3F9230
label_46d644:
    if (ctx->pc == 0x46D644u) {
        ctx->pc = 0x46D644u;
            // 0x46d644: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D648u;
        goto label_46d648;
    }
    ctx->pc = 0x46D640u;
    SET_GPR_U32(ctx, 31, 0x46D648u);
    ctx->pc = 0x46D644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D640u;
            // 0x46d644: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D648u; }
        if (ctx->pc != 0x46D648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D648u; }
        if (ctx->pc != 0x46D648u) { return; }
    }
    ctx->pc = 0x46D648u;
label_46d648:
    // 0x46d648: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x46d648u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_46d64c:
    // 0x46d64c: 0x0  nop
    ctx->pc = 0x46d64cu;
    // NOP
label_46d650:
    // 0x46d650: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x46d650u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_46d654:
    // 0x46d654: 0x8e450048  lw          $a1, 0x48($s2)
    ctx->pc = 0x46d654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_46d658:
    // 0x46d658: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_46d65c:
    if (ctx->pc == 0x46D65Cu) {
        ctx->pc = 0x46D660u;
        goto label_46d660;
    }
    ctx->pc = 0x46D658u;
    {
        const bool branch_taken_0x46d658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d658) {
            ctx->pc = 0x46D678u;
            goto label_46d678;
        }
    }
    ctx->pc = 0x46D660u;
label_46d660:
    // 0x46d660: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46d664:
    if (ctx->pc == 0x46D664u) {
        ctx->pc = 0x46D668u;
        goto label_46d668;
    }
    ctx->pc = 0x46D660u;
    {
        const bool branch_taken_0x46d660 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d660) {
            ctx->pc = 0x46D678u;
            goto label_46d678;
        }
    }
    ctx->pc = 0x46D668u;
label_46d668:
    // 0x46d668: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d66c:
    // 0x46d66c: 0xc0fe48c  jal         func_3F9230
label_46d670:
    if (ctx->pc == 0x46D670u) {
        ctx->pc = 0x46D670u;
            // 0x46d670: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D674u;
        goto label_46d674;
    }
    ctx->pc = 0x46D66Cu;
    SET_GPR_U32(ctx, 31, 0x46D674u);
    ctx->pc = 0x46D670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D66Cu;
            // 0x46d670: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D674u; }
        if (ctx->pc != 0x46D674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D674u; }
        if (ctx->pc != 0x46D674u) { return; }
    }
    ctx->pc = 0x46D674u;
label_46d674:
    // 0x46d674: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x46d674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_46d678:
    // 0x46d678: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x46d678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_46d67c:
    // 0x46d67c: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x46d67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_46d680:
    // 0x46d680: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_46d684:
    if (ctx->pc == 0x46D684u) {
        ctx->pc = 0x46D688u;
        goto label_46d688;
    }
    ctx->pc = 0x46D680u;
    {
        const bool branch_taken_0x46d680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d680) {
            ctx->pc = 0x46D6A0u;
            goto label_46d6a0;
        }
    }
    ctx->pc = 0x46D688u;
label_46d688:
    // 0x46d688: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46d68c:
    if (ctx->pc == 0x46D68Cu) {
        ctx->pc = 0x46D690u;
        goto label_46d690;
    }
    ctx->pc = 0x46D688u;
    {
        const bool branch_taken_0x46d688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d688) {
            ctx->pc = 0x46D6A0u;
            goto label_46d6a0;
        }
    }
    ctx->pc = 0x46D690u;
label_46d690:
    // 0x46d690: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d694:
    // 0x46d694: 0xc0fe48c  jal         func_3F9230
label_46d698:
    if (ctx->pc == 0x46D698u) {
        ctx->pc = 0x46D698u;
            // 0x46d698: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D69Cu;
        goto label_46d69c;
    }
    ctx->pc = 0x46D694u;
    SET_GPR_U32(ctx, 31, 0x46D69Cu);
    ctx->pc = 0x46D698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D694u;
            // 0x46d698: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D69Cu; }
        if (ctx->pc != 0x46D69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D69Cu; }
        if (ctx->pc != 0x46D69Cu) { return; }
    }
    ctx->pc = 0x46D69Cu;
label_46d69c:
    // 0x46d69c: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x46d69cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_46d6a0:
    // 0x46d6a0: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x46d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_46d6a4:
    // 0x46d6a4: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x46d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_46d6a8:
    // 0x46d6a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x46d6a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_46d6ac:
    // 0x46d6ac: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x46d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_46d6b0:
    // 0x46d6b0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x46d6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_46d6b4:
    // 0x46d6b4: 0x2673005c  addiu       $s3, $s3, 0x5C
    ctx->pc = 0x46d6b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
label_46d6b8:
    // 0x46d6b8: 0x1440ff73  bnez        $v0, . + 4 + (-0x8D << 2)
label_46d6bc:
    if (ctx->pc == 0x46D6BCu) {
        ctx->pc = 0x46D6BCu;
            // 0x46d6bc: 0xae400050  sw          $zero, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x46D6C0u;
        goto label_46d6c0;
    }
    ctx->pc = 0x46D6B8u;
    {
        const bool branch_taken_0x46d6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D6B8u;
            // 0x46d6bc: 0xae400050  sw          $zero, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d6b8) {
            ctx->pc = 0x46D488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46d488;
        }
    }
    ctx->pc = 0x46D6C0u;
label_46d6c0:
    // 0x46d6c0: 0x5ac00003  blezl       $s6, . + 4 + (0x3 << 2)
label_46d6c4:
    if (ctx->pc == 0x46D6C4u) {
        ctx->pc = 0x46D6C4u;
            // 0x46d6c4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x46D6C8u;
        goto label_46d6c8;
    }
    ctx->pc = 0x46D6C0u;
    {
        const bool branch_taken_0x46d6c0 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x46d6c0) {
            ctx->pc = 0x46D6C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D6C0u;
            // 0x46d6c4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D6D0u;
            goto label_46d6d0;
        }
    }
    ctx->pc = 0x46D6C8u;
label_46d6c8:
    // 0x46d6c8: 0x10000090  b           . + 4 + (0x90 << 2)
label_46d6cc:
    if (ctx->pc == 0x46D6CCu) {
        ctx->pc = 0x46D6CCu;
            // 0x46d6cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46D6D0u;
        goto label_46d6d0;
    }
    ctx->pc = 0x46D6C8u;
    {
        const bool branch_taken_0x46d6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D6C8u;
            // 0x46d6cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d6c8) {
            ctx->pc = 0x46D90Cu;
            goto label_46d90c;
        }
    }
    ctx->pc = 0x46D6D0u;
label_46d6d0:
    // 0x46d6d0: 0xc073234  jal         func_1CC8D0
label_46d6d4:
    if (ctx->pc == 0x46D6D4u) {
        ctx->pc = 0x46D6D4u;
            // 0x46d6d4: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x46D6D8u;
        goto label_46d6d8;
    }
    ctx->pc = 0x46D6D0u;
    SET_GPR_U32(ctx, 31, 0x46D6D8u);
    ctx->pc = 0x46D6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D6D0u;
            // 0x46d6d4: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D6D8u; }
        if (ctx->pc != 0x46D6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D6D8u; }
        if (ctx->pc != 0x46D6D8u) { return; }
    }
    ctx->pc = 0x46D6D8u;
label_46d6d8:
    // 0x46d6d8: 0x1000008c  b           . + 4 + (0x8C << 2)
label_46d6dc:
    if (ctx->pc == 0x46D6DCu) {
        ctx->pc = 0x46D6DCu;
            // 0x46d6dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46D6E0u;
        goto label_46d6e0;
    }
    ctx->pc = 0x46D6D8u;
    {
        const bool branch_taken_0x46d6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D6D8u;
            // 0x46d6dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d6d8) {
            ctx->pc = 0x46D90Cu;
            goto label_46d90c;
        }
    }
    ctx->pc = 0x46D6E0u;
label_46d6e0:
    // 0x46d6e0: 0x5262000c  beql        $s3, $v0, . + 4 + (0xC << 2)
label_46d6e4:
    if (ctx->pc == 0x46D6E4u) {
        ctx->pc = 0x46D6E4u;
            // 0x46d6e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46D6E8u;
        goto label_46d6e8;
    }
    ctx->pc = 0x46D6E0u;
    {
        const bool branch_taken_0x46d6e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x46d6e0) {
            ctx->pc = 0x46D6E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D6E0u;
            // 0x46d6e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D714u;
            goto label_46d714;
        }
    }
    ctx->pc = 0x46D6E8u;
label_46d6e8:
    // 0x46d6e8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x46d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_46d6ec:
    // 0x46d6ec: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_46d6f0:
    if (ctx->pc == 0x46D6F0u) {
        ctx->pc = 0x46D6F4u;
        goto label_46d6f4;
    }
    ctx->pc = 0x46D6ECu;
    {
        const bool branch_taken_0x46d6ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x46d6ec) {
            ctx->pc = 0x46D710u;
            goto label_46d710;
        }
    }
    ctx->pc = 0x46D6F4u;
label_46d6f4:
    // 0x46d6f4: 0x30620006  andi        $v0, $v1, 0x6
    ctx->pc = 0x46d6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
label_46d6f8:
    // 0x46d6f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_46d6fc:
    if (ctx->pc == 0x46D6FCu) {
        ctx->pc = 0x46D700u;
        goto label_46d700;
    }
    ctx->pc = 0x46D6F8u;
    {
        const bool branch_taken_0x46d6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46d6f8) {
            ctx->pc = 0x46D710u;
            goto label_46d710;
        }
    }
    ctx->pc = 0x46D700u;
label_46d700:
    // 0x46d700: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x46d700u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_46d704:
    // 0x46d704: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x46d704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_46d708:
    // 0x46d708: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_46d70c:
    if (ctx->pc == 0x46D70Cu) {
        ctx->pc = 0x46D70Cu;
            // 0x46d70c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x46D710u;
        goto label_46d710;
    }
    ctx->pc = 0x46D708u;
    {
        const bool branch_taken_0x46d708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d708) {
            ctx->pc = 0x46D70Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D708u;
            // 0x46d70c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D790u;
            goto label_46d790;
        }
    }
    ctx->pc = 0x46D710u;
label_46d710:
    // 0x46d710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46d710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46d714:
    // 0x46d714: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x46d714u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_46d718:
    // 0x46d718: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x46d718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_46d71c:
    // 0x46d71c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x46d71cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_46d720:
    // 0x46d720: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x46d720u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46d724:
    // 0x46d724: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x46d724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_46d728:
    // 0x46d728: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x46d728u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46d72c:
    // 0x46d72c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x46d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_46d730:
    // 0x46d730: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x46d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_46d734:
    // 0x46d734: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46d734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46d738:
    // 0x46d738: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46d738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46d73c:
    // 0x46d73c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46d73cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46d740:
    // 0x46d740: 0x320f809  jalr        $t9
label_46d744:
    if (ctx->pc == 0x46D744u) {
        ctx->pc = 0x46D744u;
            // 0x46d744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46D748u;
        goto label_46d748;
    }
    ctx->pc = 0x46D740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46D748u);
        ctx->pc = 0x46D744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D740u;
            // 0x46d744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46D748u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46D748u; }
            if (ctx->pc != 0x46D748u) { return; }
        }
        }
    }
    ctx->pc = 0x46D748u;
label_46d748:
    // 0x46d748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46d748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46d74c:
    // 0x46d74c: 0xa262007c  sb          $v0, 0x7C($s3)
    ctx->pc = 0x46d74cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 124), (uint8_t)GPR_U32(ctx, 2));
label_46d750:
    // 0x46d750: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x46d750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_46d754:
    // 0x46d754: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x46d754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_46d758:
    // 0x46d758: 0xc123848  jal         func_48E120
label_46d75c:
    if (ctx->pc == 0x46D75Cu) {
        ctx->pc = 0x46D75Cu;
            // 0x46d75c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46D760u;
        goto label_46d760;
    }
    ctx->pc = 0x46D758u;
    SET_GPR_U32(ctx, 31, 0x46D760u);
    ctx->pc = 0x46D75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D758u;
            // 0x46d75c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D760u; }
        if (ctx->pc != 0x46D760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D760u; }
        if (ctx->pc != 0x46D760u) { return; }
    }
    ctx->pc = 0x46D760u;
label_46d760:
    // 0x46d760: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x46d760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_46d764:
    // 0x46d764: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46d764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46d768:
    // 0x46d768: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x46d768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_46d76c:
    // 0x46d76c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46d770:
    // 0x46d770: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46d770u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46d774:
    // 0x46d774: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x46d774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_46d778:
    // 0x46d778: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46d778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46d77c:
    // 0x46d77c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46d780:
    // 0x46d780: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x46d780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_46d784:
    // 0x46d784: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46d784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46d788:
    // 0x46d788: 0x10000002  b           . + 4 + (0x2 << 2)
label_46d78c:
    if (ctx->pc == 0x46D78Cu) {
        ctx->pc = 0x46D78Cu;
            // 0x46d78c: 0xa4400046  sh          $zero, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x46D790u;
        goto label_46d790;
    }
    ctx->pc = 0x46D788u;
    {
        const bool branch_taken_0x46d788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D788u;
            // 0x46d78c: 0xa4400046  sh          $zero, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d788) {
            ctx->pc = 0x46D794u;
            goto label_46d794;
        }
    }
    ctx->pc = 0x46D790u;
label_46d790:
    // 0x46d790: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x46d790u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_46d794:
    // 0x46d794: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x46d794u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_46d798:
    // 0x46d798: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x46d798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_46d79c:
    // 0x46d79c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x46d79cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_46d7a0:
    // 0x46d7a0: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x46d7a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_46d7a4:
    // 0x46d7a4: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x46d7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_46d7a8:
    // 0x46d7a8: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x46d7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_46d7ac:
    // 0x46d7ac: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x46d7acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_46d7b0:
    // 0x46d7b0: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x46d7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
label_46d7b4:
    // 0x46d7b4: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x46d7b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_46d7b8:
    // 0x46d7b8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x46d7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_46d7bc:
    // 0x46d7bc: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x46d7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_46d7c0:
    // 0x46d7c0: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_46d7c4:
    if (ctx->pc == 0x46D7C4u) {
        ctx->pc = 0x46D7C4u;
            // 0x46d7c4: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->pc = 0x46D7C8u;
        goto label_46d7c8;
    }
    ctx->pc = 0x46D7C0u;
    {
        const bool branch_taken_0x46d7c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d7c0) {
            ctx->pc = 0x46D7C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D7C0u;
            // 0x46d7c4: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D7E8u;
            goto label_46d7e8;
        }
    }
    ctx->pc = 0x46D7C8u;
label_46d7c8:
    // 0x46d7c8: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_46d7cc:
    if (ctx->pc == 0x46D7CCu) {
        ctx->pc = 0x46D7CCu;
            // 0x46d7cc: 0xae200028  sw          $zero, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x46D7D0u;
        goto label_46d7d0;
    }
    ctx->pc = 0x46D7C8u;
    {
        const bool branch_taken_0x46d7c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d7c8) {
            ctx->pc = 0x46D7CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D7C8u;
            // 0x46d7cc: 0xae200028  sw          $zero, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D7E4u;
            goto label_46d7e4;
        }
    }
    ctx->pc = 0x46D7D0u;
label_46d7d0:
    // 0x46d7d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d7d4:
    // 0x46d7d4: 0xc0fe48c  jal         func_3F9230
label_46d7d8:
    if (ctx->pc == 0x46D7D8u) {
        ctx->pc = 0x46D7D8u;
            // 0x46d7d8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D7DCu;
        goto label_46d7dc;
    }
    ctx->pc = 0x46D7D4u;
    SET_GPR_U32(ctx, 31, 0x46D7DCu);
    ctx->pc = 0x46D7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D7D4u;
            // 0x46d7d8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D7DCu; }
        if (ctx->pc != 0x46D7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D7DCu; }
        if (ctx->pc != 0x46D7DCu) { return; }
    }
    ctx->pc = 0x46D7DCu;
label_46d7dc:
    // 0x46d7dc: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x46d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_46d7e0:
    // 0x46d7e0: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x46d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_46d7e4:
    // 0x46d7e4: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x46d7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_46d7e8:
    // 0x46d7e8: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_46d7ec:
    if (ctx->pc == 0x46D7ECu) {
        ctx->pc = 0x46D7ECu;
            // 0x46d7ec: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x46D7F0u;
        goto label_46d7f0;
    }
    ctx->pc = 0x46D7E8u;
    {
        const bool branch_taken_0x46d7e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d7e8) {
            ctx->pc = 0x46D7ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D7E8u;
            // 0x46d7ec: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D810u;
            goto label_46d810;
        }
    }
    ctx->pc = 0x46D7F0u;
label_46d7f0:
    // 0x46d7f0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_46d7f4:
    if (ctx->pc == 0x46D7F4u) {
        ctx->pc = 0x46D7F4u;
            // 0x46d7f4: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x46D7F8u;
        goto label_46d7f8;
    }
    ctx->pc = 0x46D7F0u;
    {
        const bool branch_taken_0x46d7f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d7f0) {
            ctx->pc = 0x46D7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D7F0u;
            // 0x46d7f4: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D80Cu;
            goto label_46d80c;
        }
    }
    ctx->pc = 0x46D7F8u;
label_46d7f8:
    // 0x46d7f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d7fc:
    // 0x46d7fc: 0xc0fe48c  jal         func_3F9230
label_46d800:
    if (ctx->pc == 0x46D800u) {
        ctx->pc = 0x46D800u;
            // 0x46d800: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D804u;
        goto label_46d804;
    }
    ctx->pc = 0x46D7FCu;
    SET_GPR_U32(ctx, 31, 0x46D804u);
    ctx->pc = 0x46D800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D7FCu;
            // 0x46d800: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D804u; }
        if (ctx->pc != 0x46D804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D804u; }
        if (ctx->pc != 0x46D804u) { return; }
    }
    ctx->pc = 0x46D804u;
label_46d804:
    // 0x46d804: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x46d804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_46d808:
    // 0x46d808: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x46d808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_46d80c:
    // 0x46d80c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x46d80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_46d810:
    // 0x46d810: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_46d814:
    if (ctx->pc == 0x46D814u) {
        ctx->pc = 0x46D814u;
            // 0x46d814: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46D818u;
        goto label_46d818;
    }
    ctx->pc = 0x46D810u;
    {
        const bool branch_taken_0x46d810 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d810) {
            ctx->pc = 0x46D814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D810u;
            // 0x46d814: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D838u;
            goto label_46d838;
        }
    }
    ctx->pc = 0x46D818u;
label_46d818:
    // 0x46d818: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_46d81c:
    if (ctx->pc == 0x46D81Cu) {
        ctx->pc = 0x46D81Cu;
            // 0x46d81c: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x46D820u;
        goto label_46d820;
    }
    ctx->pc = 0x46D818u;
    {
        const bool branch_taken_0x46d818 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d818) {
            ctx->pc = 0x46D81Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D818u;
            // 0x46d81c: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D834u;
            goto label_46d834;
        }
    }
    ctx->pc = 0x46D820u;
label_46d820:
    // 0x46d820: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d824:
    // 0x46d824: 0xc0fe48c  jal         func_3F9230
label_46d828:
    if (ctx->pc == 0x46D828u) {
        ctx->pc = 0x46D828u;
            // 0x46d828: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D82Cu;
        goto label_46d82c;
    }
    ctx->pc = 0x46D824u;
    SET_GPR_U32(ctx, 31, 0x46D82Cu);
    ctx->pc = 0x46D828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D824u;
            // 0x46d828: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D82Cu; }
        if (ctx->pc != 0x46D82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D82Cu; }
        if (ctx->pc != 0x46D82Cu) { return; }
    }
    ctx->pc = 0x46D82Cu;
label_46d82c:
    // 0x46d82c: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x46d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_46d830:
    // 0x46d830: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x46d830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_46d834:
    // 0x46d834: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46d834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46d838:
    // 0x46d838: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x46d838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46d83c:
    // 0x46d83c: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x46d83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_46d840:
    // 0x46d840: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_46d844:
    if (ctx->pc == 0x46D844u) {
        ctx->pc = 0x46D848u;
        goto label_46d848;
    }
    ctx->pc = 0x46D840u;
    {
        const bool branch_taken_0x46d840 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d840) {
            ctx->pc = 0x46D868u;
            goto label_46d868;
        }
    }
    ctx->pc = 0x46D848u;
label_46d848:
    // 0x46d848: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46d84c:
    if (ctx->pc == 0x46D84Cu) {
        ctx->pc = 0x46D850u;
        goto label_46d850;
    }
    ctx->pc = 0x46D848u;
    {
        const bool branch_taken_0x46d848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d848) {
            ctx->pc = 0x46D860u;
            goto label_46d860;
        }
    }
    ctx->pc = 0x46D850u;
label_46d850:
    // 0x46d850: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d854:
    // 0x46d854: 0xc0fe48c  jal         func_3F9230
label_46d858:
    if (ctx->pc == 0x46D858u) {
        ctx->pc = 0x46D858u;
            // 0x46d858: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D85Cu;
        goto label_46d85c;
    }
    ctx->pc = 0x46D854u;
    SET_GPR_U32(ctx, 31, 0x46D85Cu);
    ctx->pc = 0x46D858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D854u;
            // 0x46d858: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D85Cu; }
        if (ctx->pc != 0x46D85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D85Cu; }
        if (ctx->pc != 0x46D85Cu) { return; }
    }
    ctx->pc = 0x46D85Cu;
label_46d85c:
    // 0x46d85c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x46d85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_46d860:
    // 0x46d860: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x46d860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_46d864:
    // 0x46d864: 0x0  nop
    ctx->pc = 0x46d864u;
    // NOP
label_46d868:
    // 0x46d868: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x46d868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_46d86c:
    // 0x46d86c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x46d86cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_46d870:
    // 0x46d870: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_46d874:
    if (ctx->pc == 0x46D874u) {
        ctx->pc = 0x46D874u;
            // 0x46d874: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x46D878u;
        goto label_46d878;
    }
    ctx->pc = 0x46D870u;
    {
        const bool branch_taken_0x46d870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D870u;
            // 0x46d874: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d870) {
            ctx->pc = 0x46D83Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46d83c;
        }
    }
    ctx->pc = 0x46D878u;
label_46d878:
    // 0x46d878: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x46d878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_46d87c:
    // 0x46d87c: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_46d880:
    if (ctx->pc == 0x46D880u) {
        ctx->pc = 0x46D880u;
            // 0x46d880: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x46D884u;
        goto label_46d884;
    }
    ctx->pc = 0x46D87Cu;
    {
        const bool branch_taken_0x46d87c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d87c) {
            ctx->pc = 0x46D880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D87Cu;
            // 0x46d880: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D8A0u;
            goto label_46d8a0;
        }
    }
    ctx->pc = 0x46D884u;
label_46d884:
    // 0x46d884: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46d888:
    if (ctx->pc == 0x46D888u) {
        ctx->pc = 0x46D88Cu;
        goto label_46d88c;
    }
    ctx->pc = 0x46D884u;
    {
        const bool branch_taken_0x46d884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d884) {
            ctx->pc = 0x46D89Cu;
            goto label_46d89c;
        }
    }
    ctx->pc = 0x46D88Cu;
label_46d88c:
    // 0x46d88c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d890:
    // 0x46d890: 0xc0fe48c  jal         func_3F9230
label_46d894:
    if (ctx->pc == 0x46D894u) {
        ctx->pc = 0x46D894u;
            // 0x46d894: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D898u;
        goto label_46d898;
    }
    ctx->pc = 0x46D890u;
    SET_GPR_U32(ctx, 31, 0x46D898u);
    ctx->pc = 0x46D894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D890u;
            // 0x46d894: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D898u; }
        if (ctx->pc != 0x46D898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D898u; }
        if (ctx->pc != 0x46D898u) { return; }
    }
    ctx->pc = 0x46D898u;
label_46d898:
    // 0x46d898: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x46d898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
label_46d89c:
    // 0x46d89c: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x46d89cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
label_46d8a0:
    // 0x46d8a0: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x46d8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_46d8a4:
    // 0x46d8a4: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_46d8a8:
    if (ctx->pc == 0x46D8A8u) {
        ctx->pc = 0x46D8A8u;
            // 0x46d8a8: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->pc = 0x46D8ACu;
        goto label_46d8ac;
    }
    ctx->pc = 0x46D8A4u;
    {
        const bool branch_taken_0x46d8a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d8a4) {
            ctx->pc = 0x46D8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D8A4u;
            // 0x46d8a8: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D8C8u;
            goto label_46d8c8;
        }
    }
    ctx->pc = 0x46D8ACu;
label_46d8ac:
    // 0x46d8ac: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46d8b0:
    if (ctx->pc == 0x46D8B0u) {
        ctx->pc = 0x46D8B4u;
        goto label_46d8b4;
    }
    ctx->pc = 0x46D8ACu;
    {
        const bool branch_taken_0x46d8ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d8ac) {
            ctx->pc = 0x46D8C4u;
            goto label_46d8c4;
        }
    }
    ctx->pc = 0x46D8B4u;
label_46d8b4:
    // 0x46d8b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d8b8:
    // 0x46d8b8: 0xc0fe48c  jal         func_3F9230
label_46d8bc:
    if (ctx->pc == 0x46D8BCu) {
        ctx->pc = 0x46D8BCu;
            // 0x46d8bc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D8C0u;
        goto label_46d8c0;
    }
    ctx->pc = 0x46D8B8u;
    SET_GPR_U32(ctx, 31, 0x46D8C0u);
    ctx->pc = 0x46D8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D8B8u;
            // 0x46d8bc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D8C0u; }
        if (ctx->pc != 0x46D8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D8C0u; }
        if (ctx->pc != 0x46D8C0u) { return; }
    }
    ctx->pc = 0x46D8C0u;
label_46d8c0:
    // 0x46d8c0: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x46d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_46d8c4:
    // 0x46d8c4: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x46d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_46d8c8:
    // 0x46d8c8: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x46d8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_46d8cc:
    // 0x46d8cc: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_46d8d0:
    if (ctx->pc == 0x46D8D0u) {
        ctx->pc = 0x46D8D0u;
            // 0x46d8d0: 0xae200044  sw          $zero, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x46D8D4u;
        goto label_46d8d4;
    }
    ctx->pc = 0x46D8CCu;
    {
        const bool branch_taken_0x46d8cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d8cc) {
            ctx->pc = 0x46D8D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D8CCu;
            // 0x46d8d0: 0xae200044  sw          $zero, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46D8F0u;
            goto label_46d8f0;
        }
    }
    ctx->pc = 0x46D8D4u;
label_46d8d4:
    // 0x46d8d4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46d8d8:
    if (ctx->pc == 0x46D8D8u) {
        ctx->pc = 0x46D8DCu;
        goto label_46d8dc;
    }
    ctx->pc = 0x46D8D4u;
    {
        const bool branch_taken_0x46d8d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d8d4) {
            ctx->pc = 0x46D8ECu;
            goto label_46d8ec;
        }
    }
    ctx->pc = 0x46D8DCu;
label_46d8dc:
    // 0x46d8dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46d8e0:
    // 0x46d8e0: 0xc0fe48c  jal         func_3F9230
label_46d8e4:
    if (ctx->pc == 0x46D8E4u) {
        ctx->pc = 0x46D8E4u;
            // 0x46d8e4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46D8E8u;
        goto label_46d8e8;
    }
    ctx->pc = 0x46D8E0u;
    SET_GPR_U32(ctx, 31, 0x46D8E8u);
    ctx->pc = 0x46D8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D8E0u;
            // 0x46d8e4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D8E8u; }
        if (ctx->pc != 0x46D8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D8E8u; }
        if (ctx->pc != 0x46D8E8u) { return; }
    }
    ctx->pc = 0x46D8E8u;
label_46d8e8:
    // 0x46d8e8: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x46d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_46d8ec:
    // 0x46d8ec: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x46d8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_46d8f0:
    // 0x46d8f0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x46d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_46d8f4:
    // 0x46d8f4: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x46d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_46d8f8:
    // 0x46d8f8: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x46d8f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
label_46d8fc:
    // 0x46d8fc: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x46d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_46d900:
    // 0x46d900: 0xc073234  jal         func_1CC8D0
label_46d904:
    if (ctx->pc == 0x46D904u) {
        ctx->pc = 0x46D904u;
            // 0x46d904: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x46D908u;
        goto label_46d908;
    }
    ctx->pc = 0x46D900u;
    SET_GPR_U32(ctx, 31, 0x46D908u);
    ctx->pc = 0x46D904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D900u;
            // 0x46d904: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D908u; }
        if (ctx->pc != 0x46D908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46D908u; }
        if (ctx->pc != 0x46D908u) { return; }
    }
    ctx->pc = 0x46D908u;
label_46d908:
    // 0x46d908: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46d908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46d90c:
    // 0x46d90c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x46d90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_46d910:
    // 0x46d910: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x46d910u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46d914:
    // 0x46d914: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46d914u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46d918:
    // 0x46d918: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46d918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46d91c:
    // 0x46d91c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46d91cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46d920:
    // 0x46d920: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46d920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46d924:
    // 0x46d924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46d924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46d928:
    // 0x46d928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46d928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46d92c:
    // 0x46d92c: 0x3e00008  jr          $ra
label_46d930:
    if (ctx->pc == 0x46D930u) {
        ctx->pc = 0x46D930u;
            // 0x46d930: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x46D934u;
        goto label_46d934;
    }
    ctx->pc = 0x46D92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46D930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46D92Cu;
            // 0x46d930: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46D934u;
label_46d934:
    // 0x46d934: 0x0  nop
    ctx->pc = 0x46d934u;
    // NOP
label_46d938:
    // 0x46d938: 0x0  nop
    ctx->pc = 0x46d938u;
    // NOP
label_46d93c:
    // 0x46d93c: 0x0  nop
    ctx->pc = 0x46d93cu;
    // NOP
}
