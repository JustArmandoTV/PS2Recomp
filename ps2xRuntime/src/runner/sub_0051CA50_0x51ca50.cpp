#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051CA50
// Address: 0x51ca50 - 0x51d120
void sub_0051CA50_0x51ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051CA50_0x51ca50");
#endif

    switch (ctx->pc) {
        case 0x51ca50u: goto label_51ca50;
        case 0x51ca54u: goto label_51ca54;
        case 0x51ca58u: goto label_51ca58;
        case 0x51ca5cu: goto label_51ca5c;
        case 0x51ca60u: goto label_51ca60;
        case 0x51ca64u: goto label_51ca64;
        case 0x51ca68u: goto label_51ca68;
        case 0x51ca6cu: goto label_51ca6c;
        case 0x51ca70u: goto label_51ca70;
        case 0x51ca74u: goto label_51ca74;
        case 0x51ca78u: goto label_51ca78;
        case 0x51ca7cu: goto label_51ca7c;
        case 0x51ca80u: goto label_51ca80;
        case 0x51ca84u: goto label_51ca84;
        case 0x51ca88u: goto label_51ca88;
        case 0x51ca8cu: goto label_51ca8c;
        case 0x51ca90u: goto label_51ca90;
        case 0x51ca94u: goto label_51ca94;
        case 0x51ca98u: goto label_51ca98;
        case 0x51ca9cu: goto label_51ca9c;
        case 0x51caa0u: goto label_51caa0;
        case 0x51caa4u: goto label_51caa4;
        case 0x51caa8u: goto label_51caa8;
        case 0x51caacu: goto label_51caac;
        case 0x51cab0u: goto label_51cab0;
        case 0x51cab4u: goto label_51cab4;
        case 0x51cab8u: goto label_51cab8;
        case 0x51cabcu: goto label_51cabc;
        case 0x51cac0u: goto label_51cac0;
        case 0x51cac4u: goto label_51cac4;
        case 0x51cac8u: goto label_51cac8;
        case 0x51caccu: goto label_51cacc;
        case 0x51cad0u: goto label_51cad0;
        case 0x51cad4u: goto label_51cad4;
        case 0x51cad8u: goto label_51cad8;
        case 0x51cadcu: goto label_51cadc;
        case 0x51cae0u: goto label_51cae0;
        case 0x51cae4u: goto label_51cae4;
        case 0x51cae8u: goto label_51cae8;
        case 0x51caecu: goto label_51caec;
        case 0x51caf0u: goto label_51caf0;
        case 0x51caf4u: goto label_51caf4;
        case 0x51caf8u: goto label_51caf8;
        case 0x51cafcu: goto label_51cafc;
        case 0x51cb00u: goto label_51cb00;
        case 0x51cb04u: goto label_51cb04;
        case 0x51cb08u: goto label_51cb08;
        case 0x51cb0cu: goto label_51cb0c;
        case 0x51cb10u: goto label_51cb10;
        case 0x51cb14u: goto label_51cb14;
        case 0x51cb18u: goto label_51cb18;
        case 0x51cb1cu: goto label_51cb1c;
        case 0x51cb20u: goto label_51cb20;
        case 0x51cb24u: goto label_51cb24;
        case 0x51cb28u: goto label_51cb28;
        case 0x51cb2cu: goto label_51cb2c;
        case 0x51cb30u: goto label_51cb30;
        case 0x51cb34u: goto label_51cb34;
        case 0x51cb38u: goto label_51cb38;
        case 0x51cb3cu: goto label_51cb3c;
        case 0x51cb40u: goto label_51cb40;
        case 0x51cb44u: goto label_51cb44;
        case 0x51cb48u: goto label_51cb48;
        case 0x51cb4cu: goto label_51cb4c;
        case 0x51cb50u: goto label_51cb50;
        case 0x51cb54u: goto label_51cb54;
        case 0x51cb58u: goto label_51cb58;
        case 0x51cb5cu: goto label_51cb5c;
        case 0x51cb60u: goto label_51cb60;
        case 0x51cb64u: goto label_51cb64;
        case 0x51cb68u: goto label_51cb68;
        case 0x51cb6cu: goto label_51cb6c;
        case 0x51cb70u: goto label_51cb70;
        case 0x51cb74u: goto label_51cb74;
        case 0x51cb78u: goto label_51cb78;
        case 0x51cb7cu: goto label_51cb7c;
        case 0x51cb80u: goto label_51cb80;
        case 0x51cb84u: goto label_51cb84;
        case 0x51cb88u: goto label_51cb88;
        case 0x51cb8cu: goto label_51cb8c;
        case 0x51cb90u: goto label_51cb90;
        case 0x51cb94u: goto label_51cb94;
        case 0x51cb98u: goto label_51cb98;
        case 0x51cb9cu: goto label_51cb9c;
        case 0x51cba0u: goto label_51cba0;
        case 0x51cba4u: goto label_51cba4;
        case 0x51cba8u: goto label_51cba8;
        case 0x51cbacu: goto label_51cbac;
        case 0x51cbb0u: goto label_51cbb0;
        case 0x51cbb4u: goto label_51cbb4;
        case 0x51cbb8u: goto label_51cbb8;
        case 0x51cbbcu: goto label_51cbbc;
        case 0x51cbc0u: goto label_51cbc0;
        case 0x51cbc4u: goto label_51cbc4;
        case 0x51cbc8u: goto label_51cbc8;
        case 0x51cbccu: goto label_51cbcc;
        case 0x51cbd0u: goto label_51cbd0;
        case 0x51cbd4u: goto label_51cbd4;
        case 0x51cbd8u: goto label_51cbd8;
        case 0x51cbdcu: goto label_51cbdc;
        case 0x51cbe0u: goto label_51cbe0;
        case 0x51cbe4u: goto label_51cbe4;
        case 0x51cbe8u: goto label_51cbe8;
        case 0x51cbecu: goto label_51cbec;
        case 0x51cbf0u: goto label_51cbf0;
        case 0x51cbf4u: goto label_51cbf4;
        case 0x51cbf8u: goto label_51cbf8;
        case 0x51cbfcu: goto label_51cbfc;
        case 0x51cc00u: goto label_51cc00;
        case 0x51cc04u: goto label_51cc04;
        case 0x51cc08u: goto label_51cc08;
        case 0x51cc0cu: goto label_51cc0c;
        case 0x51cc10u: goto label_51cc10;
        case 0x51cc14u: goto label_51cc14;
        case 0x51cc18u: goto label_51cc18;
        case 0x51cc1cu: goto label_51cc1c;
        case 0x51cc20u: goto label_51cc20;
        case 0x51cc24u: goto label_51cc24;
        case 0x51cc28u: goto label_51cc28;
        case 0x51cc2cu: goto label_51cc2c;
        case 0x51cc30u: goto label_51cc30;
        case 0x51cc34u: goto label_51cc34;
        case 0x51cc38u: goto label_51cc38;
        case 0x51cc3cu: goto label_51cc3c;
        case 0x51cc40u: goto label_51cc40;
        case 0x51cc44u: goto label_51cc44;
        case 0x51cc48u: goto label_51cc48;
        case 0x51cc4cu: goto label_51cc4c;
        case 0x51cc50u: goto label_51cc50;
        case 0x51cc54u: goto label_51cc54;
        case 0x51cc58u: goto label_51cc58;
        case 0x51cc5cu: goto label_51cc5c;
        case 0x51cc60u: goto label_51cc60;
        case 0x51cc64u: goto label_51cc64;
        case 0x51cc68u: goto label_51cc68;
        case 0x51cc6cu: goto label_51cc6c;
        case 0x51cc70u: goto label_51cc70;
        case 0x51cc74u: goto label_51cc74;
        case 0x51cc78u: goto label_51cc78;
        case 0x51cc7cu: goto label_51cc7c;
        case 0x51cc80u: goto label_51cc80;
        case 0x51cc84u: goto label_51cc84;
        case 0x51cc88u: goto label_51cc88;
        case 0x51cc8cu: goto label_51cc8c;
        case 0x51cc90u: goto label_51cc90;
        case 0x51cc94u: goto label_51cc94;
        case 0x51cc98u: goto label_51cc98;
        case 0x51cc9cu: goto label_51cc9c;
        case 0x51cca0u: goto label_51cca0;
        case 0x51cca4u: goto label_51cca4;
        case 0x51cca8u: goto label_51cca8;
        case 0x51ccacu: goto label_51ccac;
        case 0x51ccb0u: goto label_51ccb0;
        case 0x51ccb4u: goto label_51ccb4;
        case 0x51ccb8u: goto label_51ccb8;
        case 0x51ccbcu: goto label_51ccbc;
        case 0x51ccc0u: goto label_51ccc0;
        case 0x51ccc4u: goto label_51ccc4;
        case 0x51ccc8u: goto label_51ccc8;
        case 0x51ccccu: goto label_51cccc;
        case 0x51ccd0u: goto label_51ccd0;
        case 0x51ccd4u: goto label_51ccd4;
        case 0x51ccd8u: goto label_51ccd8;
        case 0x51ccdcu: goto label_51ccdc;
        case 0x51cce0u: goto label_51cce0;
        case 0x51cce4u: goto label_51cce4;
        case 0x51cce8u: goto label_51cce8;
        case 0x51ccecu: goto label_51ccec;
        case 0x51ccf0u: goto label_51ccf0;
        case 0x51ccf4u: goto label_51ccf4;
        case 0x51ccf8u: goto label_51ccf8;
        case 0x51ccfcu: goto label_51ccfc;
        case 0x51cd00u: goto label_51cd00;
        case 0x51cd04u: goto label_51cd04;
        case 0x51cd08u: goto label_51cd08;
        case 0x51cd0cu: goto label_51cd0c;
        case 0x51cd10u: goto label_51cd10;
        case 0x51cd14u: goto label_51cd14;
        case 0x51cd18u: goto label_51cd18;
        case 0x51cd1cu: goto label_51cd1c;
        case 0x51cd20u: goto label_51cd20;
        case 0x51cd24u: goto label_51cd24;
        case 0x51cd28u: goto label_51cd28;
        case 0x51cd2cu: goto label_51cd2c;
        case 0x51cd30u: goto label_51cd30;
        case 0x51cd34u: goto label_51cd34;
        case 0x51cd38u: goto label_51cd38;
        case 0x51cd3cu: goto label_51cd3c;
        case 0x51cd40u: goto label_51cd40;
        case 0x51cd44u: goto label_51cd44;
        case 0x51cd48u: goto label_51cd48;
        case 0x51cd4cu: goto label_51cd4c;
        case 0x51cd50u: goto label_51cd50;
        case 0x51cd54u: goto label_51cd54;
        case 0x51cd58u: goto label_51cd58;
        case 0x51cd5cu: goto label_51cd5c;
        case 0x51cd60u: goto label_51cd60;
        case 0x51cd64u: goto label_51cd64;
        case 0x51cd68u: goto label_51cd68;
        case 0x51cd6cu: goto label_51cd6c;
        case 0x51cd70u: goto label_51cd70;
        case 0x51cd74u: goto label_51cd74;
        case 0x51cd78u: goto label_51cd78;
        case 0x51cd7cu: goto label_51cd7c;
        case 0x51cd80u: goto label_51cd80;
        case 0x51cd84u: goto label_51cd84;
        case 0x51cd88u: goto label_51cd88;
        case 0x51cd8cu: goto label_51cd8c;
        case 0x51cd90u: goto label_51cd90;
        case 0x51cd94u: goto label_51cd94;
        case 0x51cd98u: goto label_51cd98;
        case 0x51cd9cu: goto label_51cd9c;
        case 0x51cda0u: goto label_51cda0;
        case 0x51cda4u: goto label_51cda4;
        case 0x51cda8u: goto label_51cda8;
        case 0x51cdacu: goto label_51cdac;
        case 0x51cdb0u: goto label_51cdb0;
        case 0x51cdb4u: goto label_51cdb4;
        case 0x51cdb8u: goto label_51cdb8;
        case 0x51cdbcu: goto label_51cdbc;
        case 0x51cdc0u: goto label_51cdc0;
        case 0x51cdc4u: goto label_51cdc4;
        case 0x51cdc8u: goto label_51cdc8;
        case 0x51cdccu: goto label_51cdcc;
        case 0x51cdd0u: goto label_51cdd0;
        case 0x51cdd4u: goto label_51cdd4;
        case 0x51cdd8u: goto label_51cdd8;
        case 0x51cddcu: goto label_51cddc;
        case 0x51cde0u: goto label_51cde0;
        case 0x51cde4u: goto label_51cde4;
        case 0x51cde8u: goto label_51cde8;
        case 0x51cdecu: goto label_51cdec;
        case 0x51cdf0u: goto label_51cdf0;
        case 0x51cdf4u: goto label_51cdf4;
        case 0x51cdf8u: goto label_51cdf8;
        case 0x51cdfcu: goto label_51cdfc;
        case 0x51ce00u: goto label_51ce00;
        case 0x51ce04u: goto label_51ce04;
        case 0x51ce08u: goto label_51ce08;
        case 0x51ce0cu: goto label_51ce0c;
        case 0x51ce10u: goto label_51ce10;
        case 0x51ce14u: goto label_51ce14;
        case 0x51ce18u: goto label_51ce18;
        case 0x51ce1cu: goto label_51ce1c;
        case 0x51ce20u: goto label_51ce20;
        case 0x51ce24u: goto label_51ce24;
        case 0x51ce28u: goto label_51ce28;
        case 0x51ce2cu: goto label_51ce2c;
        case 0x51ce30u: goto label_51ce30;
        case 0x51ce34u: goto label_51ce34;
        case 0x51ce38u: goto label_51ce38;
        case 0x51ce3cu: goto label_51ce3c;
        case 0x51ce40u: goto label_51ce40;
        case 0x51ce44u: goto label_51ce44;
        case 0x51ce48u: goto label_51ce48;
        case 0x51ce4cu: goto label_51ce4c;
        case 0x51ce50u: goto label_51ce50;
        case 0x51ce54u: goto label_51ce54;
        case 0x51ce58u: goto label_51ce58;
        case 0x51ce5cu: goto label_51ce5c;
        case 0x51ce60u: goto label_51ce60;
        case 0x51ce64u: goto label_51ce64;
        case 0x51ce68u: goto label_51ce68;
        case 0x51ce6cu: goto label_51ce6c;
        case 0x51ce70u: goto label_51ce70;
        case 0x51ce74u: goto label_51ce74;
        case 0x51ce78u: goto label_51ce78;
        case 0x51ce7cu: goto label_51ce7c;
        case 0x51ce80u: goto label_51ce80;
        case 0x51ce84u: goto label_51ce84;
        case 0x51ce88u: goto label_51ce88;
        case 0x51ce8cu: goto label_51ce8c;
        case 0x51ce90u: goto label_51ce90;
        case 0x51ce94u: goto label_51ce94;
        case 0x51ce98u: goto label_51ce98;
        case 0x51ce9cu: goto label_51ce9c;
        case 0x51cea0u: goto label_51cea0;
        case 0x51cea4u: goto label_51cea4;
        case 0x51cea8u: goto label_51cea8;
        case 0x51ceacu: goto label_51ceac;
        case 0x51ceb0u: goto label_51ceb0;
        case 0x51ceb4u: goto label_51ceb4;
        case 0x51ceb8u: goto label_51ceb8;
        case 0x51cebcu: goto label_51cebc;
        case 0x51cec0u: goto label_51cec0;
        case 0x51cec4u: goto label_51cec4;
        case 0x51cec8u: goto label_51cec8;
        case 0x51ceccu: goto label_51cecc;
        case 0x51ced0u: goto label_51ced0;
        case 0x51ced4u: goto label_51ced4;
        case 0x51ced8u: goto label_51ced8;
        case 0x51cedcu: goto label_51cedc;
        case 0x51cee0u: goto label_51cee0;
        case 0x51cee4u: goto label_51cee4;
        case 0x51cee8u: goto label_51cee8;
        case 0x51ceecu: goto label_51ceec;
        case 0x51cef0u: goto label_51cef0;
        case 0x51cef4u: goto label_51cef4;
        case 0x51cef8u: goto label_51cef8;
        case 0x51cefcu: goto label_51cefc;
        case 0x51cf00u: goto label_51cf00;
        case 0x51cf04u: goto label_51cf04;
        case 0x51cf08u: goto label_51cf08;
        case 0x51cf0cu: goto label_51cf0c;
        case 0x51cf10u: goto label_51cf10;
        case 0x51cf14u: goto label_51cf14;
        case 0x51cf18u: goto label_51cf18;
        case 0x51cf1cu: goto label_51cf1c;
        case 0x51cf20u: goto label_51cf20;
        case 0x51cf24u: goto label_51cf24;
        case 0x51cf28u: goto label_51cf28;
        case 0x51cf2cu: goto label_51cf2c;
        case 0x51cf30u: goto label_51cf30;
        case 0x51cf34u: goto label_51cf34;
        case 0x51cf38u: goto label_51cf38;
        case 0x51cf3cu: goto label_51cf3c;
        case 0x51cf40u: goto label_51cf40;
        case 0x51cf44u: goto label_51cf44;
        case 0x51cf48u: goto label_51cf48;
        case 0x51cf4cu: goto label_51cf4c;
        case 0x51cf50u: goto label_51cf50;
        case 0x51cf54u: goto label_51cf54;
        case 0x51cf58u: goto label_51cf58;
        case 0x51cf5cu: goto label_51cf5c;
        case 0x51cf60u: goto label_51cf60;
        case 0x51cf64u: goto label_51cf64;
        case 0x51cf68u: goto label_51cf68;
        case 0x51cf6cu: goto label_51cf6c;
        case 0x51cf70u: goto label_51cf70;
        case 0x51cf74u: goto label_51cf74;
        case 0x51cf78u: goto label_51cf78;
        case 0x51cf7cu: goto label_51cf7c;
        case 0x51cf80u: goto label_51cf80;
        case 0x51cf84u: goto label_51cf84;
        case 0x51cf88u: goto label_51cf88;
        case 0x51cf8cu: goto label_51cf8c;
        case 0x51cf90u: goto label_51cf90;
        case 0x51cf94u: goto label_51cf94;
        case 0x51cf98u: goto label_51cf98;
        case 0x51cf9cu: goto label_51cf9c;
        case 0x51cfa0u: goto label_51cfa0;
        case 0x51cfa4u: goto label_51cfa4;
        case 0x51cfa8u: goto label_51cfa8;
        case 0x51cfacu: goto label_51cfac;
        case 0x51cfb0u: goto label_51cfb0;
        case 0x51cfb4u: goto label_51cfb4;
        case 0x51cfb8u: goto label_51cfb8;
        case 0x51cfbcu: goto label_51cfbc;
        case 0x51cfc0u: goto label_51cfc0;
        case 0x51cfc4u: goto label_51cfc4;
        case 0x51cfc8u: goto label_51cfc8;
        case 0x51cfccu: goto label_51cfcc;
        case 0x51cfd0u: goto label_51cfd0;
        case 0x51cfd4u: goto label_51cfd4;
        case 0x51cfd8u: goto label_51cfd8;
        case 0x51cfdcu: goto label_51cfdc;
        case 0x51cfe0u: goto label_51cfe0;
        case 0x51cfe4u: goto label_51cfe4;
        case 0x51cfe8u: goto label_51cfe8;
        case 0x51cfecu: goto label_51cfec;
        case 0x51cff0u: goto label_51cff0;
        case 0x51cff4u: goto label_51cff4;
        case 0x51cff8u: goto label_51cff8;
        case 0x51cffcu: goto label_51cffc;
        case 0x51d000u: goto label_51d000;
        case 0x51d004u: goto label_51d004;
        case 0x51d008u: goto label_51d008;
        case 0x51d00cu: goto label_51d00c;
        case 0x51d010u: goto label_51d010;
        case 0x51d014u: goto label_51d014;
        case 0x51d018u: goto label_51d018;
        case 0x51d01cu: goto label_51d01c;
        case 0x51d020u: goto label_51d020;
        case 0x51d024u: goto label_51d024;
        case 0x51d028u: goto label_51d028;
        case 0x51d02cu: goto label_51d02c;
        case 0x51d030u: goto label_51d030;
        case 0x51d034u: goto label_51d034;
        case 0x51d038u: goto label_51d038;
        case 0x51d03cu: goto label_51d03c;
        case 0x51d040u: goto label_51d040;
        case 0x51d044u: goto label_51d044;
        case 0x51d048u: goto label_51d048;
        case 0x51d04cu: goto label_51d04c;
        case 0x51d050u: goto label_51d050;
        case 0x51d054u: goto label_51d054;
        case 0x51d058u: goto label_51d058;
        case 0x51d05cu: goto label_51d05c;
        case 0x51d060u: goto label_51d060;
        case 0x51d064u: goto label_51d064;
        case 0x51d068u: goto label_51d068;
        case 0x51d06cu: goto label_51d06c;
        case 0x51d070u: goto label_51d070;
        case 0x51d074u: goto label_51d074;
        case 0x51d078u: goto label_51d078;
        case 0x51d07cu: goto label_51d07c;
        case 0x51d080u: goto label_51d080;
        case 0x51d084u: goto label_51d084;
        case 0x51d088u: goto label_51d088;
        case 0x51d08cu: goto label_51d08c;
        case 0x51d090u: goto label_51d090;
        case 0x51d094u: goto label_51d094;
        case 0x51d098u: goto label_51d098;
        case 0x51d09cu: goto label_51d09c;
        case 0x51d0a0u: goto label_51d0a0;
        case 0x51d0a4u: goto label_51d0a4;
        case 0x51d0a8u: goto label_51d0a8;
        case 0x51d0acu: goto label_51d0ac;
        case 0x51d0b0u: goto label_51d0b0;
        case 0x51d0b4u: goto label_51d0b4;
        case 0x51d0b8u: goto label_51d0b8;
        case 0x51d0bcu: goto label_51d0bc;
        case 0x51d0c0u: goto label_51d0c0;
        case 0x51d0c4u: goto label_51d0c4;
        case 0x51d0c8u: goto label_51d0c8;
        case 0x51d0ccu: goto label_51d0cc;
        case 0x51d0d0u: goto label_51d0d0;
        case 0x51d0d4u: goto label_51d0d4;
        case 0x51d0d8u: goto label_51d0d8;
        case 0x51d0dcu: goto label_51d0dc;
        case 0x51d0e0u: goto label_51d0e0;
        case 0x51d0e4u: goto label_51d0e4;
        case 0x51d0e8u: goto label_51d0e8;
        case 0x51d0ecu: goto label_51d0ec;
        case 0x51d0f0u: goto label_51d0f0;
        case 0x51d0f4u: goto label_51d0f4;
        case 0x51d0f8u: goto label_51d0f8;
        case 0x51d0fcu: goto label_51d0fc;
        case 0x51d100u: goto label_51d100;
        case 0x51d104u: goto label_51d104;
        case 0x51d108u: goto label_51d108;
        case 0x51d10cu: goto label_51d10c;
        case 0x51d110u: goto label_51d110;
        case 0x51d114u: goto label_51d114;
        case 0x51d118u: goto label_51d118;
        case 0x51d11cu: goto label_51d11c;
        default: break;
    }

    ctx->pc = 0x51ca50u;

label_51ca50:
    // 0x51ca50: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x51ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_51ca54:
    // 0x51ca54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x51ca54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51ca58:
    // 0x51ca58: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x51ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_51ca5c:
    // 0x51ca5c: 0x3e00008  jr          $ra
label_51ca60:
    if (ctx->pc == 0x51CA60u) {
        ctx->pc = 0x51CA60u;
            // 0x51ca60: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x51CA64u;
        goto label_51ca64;
    }
    ctx->pc = 0x51CA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51CA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51CA5Cu;
            // 0x51ca60: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51CA64u;
label_51ca64:
    // 0x51ca64: 0x0  nop
    ctx->pc = 0x51ca64u;
    // NOP
label_51ca68:
    // 0x51ca68: 0x0  nop
    ctx->pc = 0x51ca68u;
    // NOP
label_51ca6c:
    // 0x51ca6c: 0x0  nop
    ctx->pc = 0x51ca6cu;
    // NOP
label_51ca70:
    // 0x51ca70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51ca70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_51ca74:
    // 0x51ca74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_51ca78:
    // 0x51ca78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51ca78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51ca7c:
    // 0x51ca7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51ca7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51ca80:
    // 0x51ca80: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_51ca84:
    if (ctx->pc == 0x51CA84u) {
        ctx->pc = 0x51CA84u;
            // 0x51ca84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51CA88u;
        goto label_51ca88;
    }
    ctx->pc = 0x51CA80u;
    {
        const bool branch_taken_0x51ca80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51ca80) {
            ctx->pc = 0x51CA84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CA80u;
            // 0x51ca84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51CAA4u;
            goto label_51caa4;
        }
    }
    ctx->pc = 0x51CA88u;
label_51ca88:
    // 0x51ca88: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x51ca88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_51ca8c:
    // 0x51ca8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51ca8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_51ca90:
    // 0x51ca90: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_51ca94:
    if (ctx->pc == 0x51CA94u) {
        ctx->pc = 0x51CA98u;
        goto label_51ca98;
    }
    ctx->pc = 0x51CA90u;
    {
        const bool branch_taken_0x51ca90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x51ca90) {
            ctx->pc = 0x51CAA0u;
            goto label_51caa0;
        }
    }
    ctx->pc = 0x51CA98u;
label_51ca98:
    // 0x51ca98: 0xc0400a8  jal         func_1002A0
label_51ca9c:
    if (ctx->pc == 0x51CA9Cu) {
        ctx->pc = 0x51CAA0u;
        goto label_51caa0;
    }
    ctx->pc = 0x51CA98u;
    SET_GPR_U32(ctx, 31, 0x51CAA0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CAA0u; }
        if (ctx->pc != 0x51CAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CAA0u; }
        if (ctx->pc != 0x51CAA0u) { return; }
    }
    ctx->pc = 0x51CAA0u;
label_51caa0:
    // 0x51caa0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51caa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51caa4:
    // 0x51caa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51caa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_51caa8:
    // 0x51caa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51caa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51caac:
    // 0x51caac: 0x3e00008  jr          $ra
label_51cab0:
    if (ctx->pc == 0x51CAB0u) {
        ctx->pc = 0x51CAB0u;
            // 0x51cab0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x51CAB4u;
        goto label_51cab4;
    }
    ctx->pc = 0x51CAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51CAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51CAACu;
            // 0x51cab0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51CAB4u;
label_51cab4:
    // 0x51cab4: 0x0  nop
    ctx->pc = 0x51cab4u;
    // NOP
label_51cab8:
    // 0x51cab8: 0x0  nop
    ctx->pc = 0x51cab8u;
    // NOP
label_51cabc:
    // 0x51cabc: 0x0  nop
    ctx->pc = 0x51cabcu;
    // NOP
label_51cac0:
    // 0x51cac0: 0x8146ae8  j           func_51ABA0
label_51cac4:
    if (ctx->pc == 0x51CAC4u) {
        ctx->pc = 0x51CAC4u;
            // 0x51cac4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x51CAC8u;
        goto label_51cac8;
    }
    ctx->pc = 0x51CAC0u;
    ctx->pc = 0x51CAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51CAC0u;
            // 0x51cac4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51ABA0u;
    if (runtime->hasFunction(0x51ABA0u)) {
        auto targetFn = runtime->lookupFunction(0x51ABA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0051ABA0_0x51aba0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x51CAC8u;
label_51cac8:
    // 0x51cac8: 0x0  nop
    ctx->pc = 0x51cac8u;
    // NOP
label_51cacc:
    // 0x51cacc: 0x0  nop
    ctx->pc = 0x51caccu;
    // NOP
label_51cad0:
    // 0x51cad0: 0x8146b58  j           func_51AD60
label_51cad4:
    if (ctx->pc == 0x51CAD4u) {
        ctx->pc = 0x51CAD4u;
            // 0x51cad4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x51CAD8u;
        goto label_51cad8;
    }
    ctx->pc = 0x51CAD0u;
    ctx->pc = 0x51CAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51CAD0u;
            // 0x51cad4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51AD60u;
    if (runtime->hasFunction(0x51AD60u)) {
        auto targetFn = runtime->lookupFunction(0x51AD60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0051AD60_0x51ad60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x51CAD8u;
label_51cad8:
    // 0x51cad8: 0x0  nop
    ctx->pc = 0x51cad8u;
    // NOP
label_51cadc:
    // 0x51cadc: 0x0  nop
    ctx->pc = 0x51cadcu;
    // NOP
label_51cae0:
    // 0x51cae0: 0x814715c  j           func_51C570
label_51cae4:
    if (ctx->pc == 0x51CAE4u) {
        ctx->pc = 0x51CAE4u;
            // 0x51cae4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x51CAE8u;
        goto label_51cae8;
    }
    ctx->pc = 0x51CAE0u;
    ctx->pc = 0x51CAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51CAE0u;
            // 0x51cae4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C570u;
    {
        auto targetFn = runtime->lookupFunction(0x51C570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x51CAE8u;
label_51cae8:
    // 0x51cae8: 0x0  nop
    ctx->pc = 0x51cae8u;
    // NOP
label_51caec:
    // 0x51caec: 0x0  nop
    ctx->pc = 0x51caecu;
    // NOP
label_51caf0:
    // 0x51caf0: 0x807580c  j           func_1D6030
label_51caf4:
    if (ctx->pc == 0x51CAF4u) {
        ctx->pc = 0x51CAF4u;
            // 0x51caf4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x51CAF8u;
        goto label_51caf8;
    }
    ctx->pc = 0x51CAF0u;
    ctx->pc = 0x51CAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51CAF0u;
            // 0x51caf4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6030u;
    {
        auto targetFn = runtime->lookupFunction(0x1D6030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x51CAF8u;
label_51caf8:
    // 0x51caf8: 0x0  nop
    ctx->pc = 0x51caf8u;
    // NOP
label_51cafc:
    // 0x51cafc: 0x0  nop
    ctx->pc = 0x51cafcu;
    // NOP
label_51cb00:
    // 0x51cb00: 0x8075810  j           func_1D6040
label_51cb04:
    if (ctx->pc == 0x51CB04u) {
        ctx->pc = 0x51CB04u;
            // 0x51cb04: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x51CB08u;
        goto label_51cb08;
    }
    ctx->pc = 0x51CB00u;
    ctx->pc = 0x51CB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51CB00u;
            // 0x51cb04: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6040u;
    {
        auto targetFn = runtime->lookupFunction(0x1D6040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x51CB08u;
label_51cb08:
    // 0x51cb08: 0x0  nop
    ctx->pc = 0x51cb08u;
    // NOP
label_51cb0c:
    // 0x51cb0c: 0x0  nop
    ctx->pc = 0x51cb0cu;
    // NOP
label_51cb10:
    // 0x51cb10: 0x80b7428  j           func_2DD0A0
label_51cb14:
    if (ctx->pc == 0x51CB14u) {
        ctx->pc = 0x51CB14u;
            // 0x51cb14: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x51CB18u;
        goto label_51cb18;
    }
    ctx->pc = 0x51CB10u;
    ctx->pc = 0x51CB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51CB10u;
            // 0x51cb14: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD0A0u;
    {
        auto targetFn = runtime->lookupFunction(0x2DD0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x51CB18u;
label_51cb18:
    // 0x51cb18: 0x0  nop
    ctx->pc = 0x51cb18u;
    // NOP
label_51cb1c:
    // 0x51cb1c: 0x0  nop
    ctx->pc = 0x51cb1cu;
    // NOP
label_51cb20:
    // 0x51cb20: 0x8147134  j           func_51C4D0
label_51cb24:
    if (ctx->pc == 0x51CB24u) {
        ctx->pc = 0x51CB24u;
            // 0x51cb24: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x51CB28u;
        goto label_51cb28;
    }
    ctx->pc = 0x51CB20u;
    ctx->pc = 0x51CB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51CB20u;
            // 0x51cb24: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C4D0u;
    {
        auto targetFn = runtime->lookupFunction(0x51C4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x51CB28u;
label_51cb28:
    // 0x51cb28: 0x0  nop
    ctx->pc = 0x51cb28u;
    // NOP
label_51cb2c:
    // 0x51cb2c: 0x0  nop
    ctx->pc = 0x51cb2cu;
    // NOP
label_51cb30:
    // 0x51cb30: 0x3e00008  jr          $ra
label_51cb34:
    if (ctx->pc == 0x51CB34u) {
        ctx->pc = 0x51CB34u;
            // 0x51cb34: 0x24024682  addiu       $v0, $zero, 0x4682 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18050));
        ctx->pc = 0x51CB38u;
        goto label_51cb38;
    }
    ctx->pc = 0x51CB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51CB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51CB30u;
            // 0x51cb34: 0x24024682  addiu       $v0, $zero, 0x4682 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18050));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51CB38u;
label_51cb38:
    // 0x51cb38: 0x0  nop
    ctx->pc = 0x51cb38u;
    // NOP
label_51cb3c:
    // 0x51cb3c: 0x0  nop
    ctx->pc = 0x51cb3cu;
    // NOP
label_51cb40:
    // 0x51cb40: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x51cb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_51cb44:
    // 0x51cb44: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x51cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_51cb48:
    // 0x51cb48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x51cb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_51cb4c:
    // 0x51cb4c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x51cb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_51cb50:
    // 0x51cb50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x51cb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_51cb54:
    // 0x51cb54: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x51cb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_51cb58:
    // 0x51cb58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x51cb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_51cb5c:
    // 0x51cb5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x51cb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_51cb60:
    // 0x51cb60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51cb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51cb64:
    // 0x51cb64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51cb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51cb68:
    // 0x51cb68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51cb6c:
    // 0x51cb6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51cb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51cb70:
    // 0x51cb70: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x51cb70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_51cb74:
    // 0x51cb74: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_51cb78:
    if (ctx->pc == 0x51CB78u) {
        ctx->pc = 0x51CB78u;
            // 0x51cb78: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51CB7Cu;
        goto label_51cb7c;
    }
    ctx->pc = 0x51CB74u;
    {
        const bool branch_taken_0x51cb74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x51CB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51CB74u;
            // 0x51cb78: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51cb74) {
            ctx->pc = 0x51CBC4u;
            goto label_51cbc4;
        }
    }
    ctx->pc = 0x51CB7Cu;
label_51cb7c:
    // 0x51cb7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x51cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_51cb80:
    // 0x51cb80: 0x50a30047  beql        $a1, $v1, . + 4 + (0x47 << 2)
label_51cb84:
    if (ctx->pc == 0x51CB84u) {
        ctx->pc = 0x51CB84u;
            // 0x51cb84: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x51CB88u;
        goto label_51cb88;
    }
    ctx->pc = 0x51CB80u;
    {
        const bool branch_taken_0x51cb80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x51cb80) {
            ctx->pc = 0x51CB84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CB80u;
            // 0x51cb84: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51CCA0u;
            goto label_51cca0;
        }
    }
    ctx->pc = 0x51CB88u;
label_51cb88:
    // 0x51cb88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x51cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_51cb8c:
    // 0x51cb8c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_51cb90:
    if (ctx->pc == 0x51CB90u) {
        ctx->pc = 0x51CB94u;
        goto label_51cb94;
    }
    ctx->pc = 0x51CB8Cu;
    {
        const bool branch_taken_0x51cb8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x51cb8c) {
            ctx->pc = 0x51CB9Cu;
            goto label_51cb9c;
        }
    }
    ctx->pc = 0x51CB94u;
label_51cb94:
    // 0x51cb94: 0x10000041  b           . + 4 + (0x41 << 2)
label_51cb98:
    if (ctx->pc == 0x51CB98u) {
        ctx->pc = 0x51CB9Cu;
        goto label_51cb9c;
    }
    ctx->pc = 0x51CB94u;
    {
        const bool branch_taken_0x51cb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51cb94) {
            ctx->pc = 0x51CC9Cu;
            goto label_51cc9c;
        }
    }
    ctx->pc = 0x51CB9Cu;
label_51cb9c:
    // 0x51cb9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_51cba0:
    // 0x51cba0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51cba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51cba4:
    // 0x51cba4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x51cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_51cba8:
    // 0x51cba8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x51cba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_51cbac:
    // 0x51cbac: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x51cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_51cbb0:
    // 0x51cbb0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x51cbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_51cbb4:
    // 0x51cbb4: 0x320f809  jalr        $t9
label_51cbb8:
    if (ctx->pc == 0x51CBB8u) {
        ctx->pc = 0x51CBB8u;
            // 0x51cbb8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x51CBBCu;
        goto label_51cbbc;
    }
    ctx->pc = 0x51CBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51CBBCu);
        ctx->pc = 0x51CBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51CBB4u;
            // 0x51cbb8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51CBBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51CBBCu; }
            if (ctx->pc != 0x51CBBCu) { return; }
        }
        }
    }
    ctx->pc = 0x51CBBCu;
label_51cbbc:
    // 0x51cbbc: 0x10000037  b           . + 4 + (0x37 << 2)
label_51cbc0:
    if (ctx->pc == 0x51CBC0u) {
        ctx->pc = 0x51CBC4u;
        goto label_51cbc4;
    }
    ctx->pc = 0x51CBBCu;
    {
        const bool branch_taken_0x51cbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51cbbc) {
            ctx->pc = 0x51CC9Cu;
            goto label_51cc9c;
        }
    }
    ctx->pc = 0x51CBC4u;
label_51cbc4:
    // 0x51cbc4: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x51cbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_51cbc8:
    // 0x51cbc8: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
label_51cbcc:
    if (ctx->pc == 0x51CBCCu) {
        ctx->pc = 0x51CBD0u;
        goto label_51cbd0;
    }
    ctx->pc = 0x51CBC8u;
    {
        const bool branch_taken_0x51cbc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51cbc8) {
            ctx->pc = 0x51CC9Cu;
            goto label_51cc9c;
        }
    }
    ctx->pc = 0x51CBD0u;
label_51cbd0:
    // 0x51cbd0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51cbd4:
    // 0x51cbd4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x51cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_51cbd8:
    // 0x51cbd8: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x51cbd8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_51cbdc:
    // 0x51cbdc: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x51cbdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_51cbe0:
    // 0x51cbe0: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x51cbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_51cbe4:
    // 0x51cbe4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x51cbe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51cbe8:
    // 0x51cbe8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x51cbe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51cbec:
    // 0x51cbec: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x51cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_51cbf0:
    // 0x51cbf0: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x51cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_51cbf4:
    // 0x51cbf4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51cbf8:
    // 0x51cbf8: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x51cbf8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_51cbfc:
    // 0x51cbfc: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x51cbfcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_51cc00:
    // 0x51cc00: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x51cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_51cc04:
    // 0x51cc04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51cc08:
    // 0x51cc08: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x51cc08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_51cc0c:
    // 0x51cc0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51cc10:
    // 0x51cc10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x51cc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_51cc14:
    // 0x51cc14: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x51cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51cc18:
    // 0x51cc18: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x51cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_51cc1c:
    // 0x51cc1c: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x51cc1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_51cc20:
    // 0x51cc20: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x51cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_51cc24:
    // 0x51cc24: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x51cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_51cc28:
    // 0x51cc28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x51cc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_51cc2c:
    // 0x51cc2c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x51cc2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_51cc30:
    // 0x51cc30: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x51cc30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_51cc34:
    // 0x51cc34: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x51cc34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_51cc38:
    // 0x51cc38: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x51cc38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_51cc3c:
    // 0x51cc3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x51cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_51cc40:
    // 0x51cc40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x51cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_51cc44:
    // 0x51cc44: 0xc147448  jal         func_51D120
label_51cc48:
    if (ctx->pc == 0x51CC48u) {
        ctx->pc = 0x51CC48u;
            // 0x51cc48: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51CC4Cu;
        goto label_51cc4c;
    }
    ctx->pc = 0x51CC44u;
    SET_GPR_U32(ctx, 31, 0x51CC4Cu);
    ctx->pc = 0x51CC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51CC44u;
            // 0x51cc48: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51D120u;
    if (runtime->hasFunction(0x51D120u)) {
        auto targetFn = runtime->lookupFunction(0x51D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CC4Cu; }
        if (ctx->pc != 0x51CC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051D120_0x51d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CC4Cu; }
        if (ctx->pc != 0x51CC4Cu) { return; }
    }
    ctx->pc = 0x51CC4Cu;
label_51cc4c:
    // 0x51cc4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x51cc4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_51cc50:
    // 0x51cc50: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x51cc50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_51cc54:
    // 0x51cc54: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_51cc58:
    if (ctx->pc == 0x51CC58u) {
        ctx->pc = 0x51CC58u;
            // 0x51cc58: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x51CC5Cu;
        goto label_51cc5c;
    }
    ctx->pc = 0x51CC54u;
    {
        const bool branch_taken_0x51cc54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x51CC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51CC54u;
            // 0x51cc58: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51cc54) {
            ctx->pc = 0x51CC24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51cc24;
        }
    }
    ctx->pc = 0x51CC5Cu;
label_51cc5c:
    // 0x51cc5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51cc60:
    // 0x51cc60: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x51cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_51cc64:
    // 0x51cc64: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_51cc68:
    if (ctx->pc == 0x51CC68u) {
        ctx->pc = 0x51CC6Cu;
        goto label_51cc6c;
    }
    ctx->pc = 0x51CC64u;
    {
        const bool branch_taken_0x51cc64 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x51cc64) {
            ctx->pc = 0x51CC9Cu;
            goto label_51cc9c;
        }
    }
    ctx->pc = 0x51CC6Cu;
label_51cc6c:
    // 0x51cc6c: 0xc04e738  jal         func_139CE0
label_51cc70:
    if (ctx->pc == 0x51CC70u) {
        ctx->pc = 0x51CC70u;
            // 0x51cc70: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->pc = 0x51CC74u;
        goto label_51cc74;
    }
    ctx->pc = 0x51CC6Cu;
    SET_GPR_U32(ctx, 31, 0x51CC74u);
    ctx->pc = 0x51CC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51CC6Cu;
            // 0x51cc70: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CC74u; }
        if (ctx->pc != 0x51CC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CC74u; }
        if (ctx->pc != 0x51CC74u) { return; }
    }
    ctx->pc = 0x51CC74u;
label_51cc74:
    // 0x51cc74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51cc78:
    // 0x51cc78: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x51cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_51cc7c:
    // 0x51cc7c: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x51cc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_51cc80:
    // 0x51cc80: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x51cc80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_51cc84:
    // 0x51cc84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51cc88:
    // 0x51cc88: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x51cc88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_51cc8c:
    // 0x51cc8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51cc90:
    // 0x51cc90: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x51cc90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_51cc94:
    // 0x51cc94: 0xc055754  jal         func_155D50
label_51cc98:
    if (ctx->pc == 0x51CC98u) {
        ctx->pc = 0x51CC98u;
            // 0x51cc98: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x51CC9Cu;
        goto label_51cc9c;
    }
    ctx->pc = 0x51CC94u;
    SET_GPR_U32(ctx, 31, 0x51CC9Cu);
    ctx->pc = 0x51CC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51CC94u;
            // 0x51cc98: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CC9Cu; }
        if (ctx->pc != 0x51CC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CC9Cu; }
        if (ctx->pc != 0x51CC9Cu) { return; }
    }
    ctx->pc = 0x51CC9Cu;
label_51cc9c:
    // 0x51cc9c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x51cc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_51cca0:
    // 0x51cca0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x51cca0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_51cca4:
    // 0x51cca4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x51cca4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_51cca8:
    // 0x51cca8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x51cca8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_51ccac:
    // 0x51ccac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x51ccacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_51ccb0:
    // 0x51ccb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x51ccb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_51ccb4:
    // 0x51ccb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51ccb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51ccb8:
    // 0x51ccb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51ccb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51ccbc:
    // 0x51ccbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51ccbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51ccc0:
    // 0x51ccc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51ccc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51ccc4:
    // 0x51ccc4: 0x3e00008  jr          $ra
label_51ccc8:
    if (ctx->pc == 0x51CCC8u) {
        ctx->pc = 0x51CCC8u;
            // 0x51ccc8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x51CCCCu;
        goto label_51cccc;
    }
    ctx->pc = 0x51CCC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51CCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51CCC4u;
            // 0x51ccc8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51CCCCu;
label_51cccc:
    // 0x51cccc: 0x0  nop
    ctx->pc = 0x51ccccu;
    // NOP
label_51ccd0:
    // 0x51ccd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x51ccd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_51ccd4:
    // 0x51ccd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x51ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_51ccd8:
    // 0x51ccd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x51ccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_51ccdc:
    // 0x51ccdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51ccdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51cce0:
    // 0x51cce0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51cce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51cce4:
    // 0x51cce4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51cce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51cce8:
    // 0x51cce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51cce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51ccec:
    // 0x51ccec: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x51ccecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_51ccf0:
    // 0x51ccf0: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_51ccf4:
    if (ctx->pc == 0x51CCF4u) {
        ctx->pc = 0x51CCF4u;
            // 0x51ccf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51CCF8u;
        goto label_51ccf8;
    }
    ctx->pc = 0x51CCF0u;
    {
        const bool branch_taken_0x51ccf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x51CCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51CCF0u;
            // 0x51ccf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ccf0) {
            ctx->pc = 0x51CD54u;
            goto label_51cd54;
        }
    }
    ctx->pc = 0x51CCF8u;
label_51ccf8:
    // 0x51ccf8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x51ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_51ccfc:
    // 0x51ccfc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_51cd00:
    if (ctx->pc == 0x51CD00u) {
        ctx->pc = 0x51CD00u;
            // 0x51cd00: 0x8e0300a4  lw          $v1, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->pc = 0x51CD04u;
        goto label_51cd04;
    }
    ctx->pc = 0x51CCFCu;
    {
        const bool branch_taken_0x51ccfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x51ccfc) {
            ctx->pc = 0x51CD00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CCFCu;
            // 0x51cd00: 0x8e0300a4  lw          $v1, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51CD18u;
            goto label_51cd18;
        }
    }
    ctx->pc = 0x51CD04u;
label_51cd04:
    // 0x51cd04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x51cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_51cd08:
    // 0x51cd08: 0x10a3001f  beq         $a1, $v1, . + 4 + (0x1F << 2)
label_51cd0c:
    if (ctx->pc == 0x51CD0Cu) {
        ctx->pc = 0x51CD10u;
        goto label_51cd10;
    }
    ctx->pc = 0x51CD08u;
    {
        const bool branch_taken_0x51cd08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x51cd08) {
            ctx->pc = 0x51CD88u;
            goto label_51cd88;
        }
    }
    ctx->pc = 0x51CD10u;
label_51cd10:
    // 0x51cd10: 0x1000001d  b           . + 4 + (0x1D << 2)
label_51cd14:
    if (ctx->pc == 0x51CD14u) {
        ctx->pc = 0x51CD18u;
        goto label_51cd18;
    }
    ctx->pc = 0x51CD10u;
    {
        const bool branch_taken_0x51cd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51cd10) {
            ctx->pc = 0x51CD88u;
            goto label_51cd88;
        }
    }
    ctx->pc = 0x51CD18u;
label_51cd18:
    // 0x51cd18: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_51cd1c:
    // 0x51cd1c: 0x8c45ce70  lw          $a1, -0x3190($v0)
    ctx->pc = 0x51cd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954608)));
label_51cd20:
    // 0x51cd20: 0x8c660030  lw          $a2, 0x30($v1)
    ctx->pc = 0x51cd20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_51cd24:
    // 0x51cd24: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_51cd28:
    // 0x51cd28: 0x8cc30090  lw          $v1, 0x90($a2)
    ctx->pc = 0x51cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
label_51cd2c:
    // 0x51cd2c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x51cd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_51cd30:
    // 0x51cd30: 0xacc30090  sw          $v1, 0x90($a2)
    ctx->pc = 0x51cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 3));
label_51cd34:
    // 0x51cd34: 0x8c43ce78  lw          $v1, -0x3188($v0)
    ctx->pc = 0x51cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954616)));
label_51cd38:
    // 0x51cd38: 0x8cc20120  lw          $v0, 0x120($a2)
    ctx->pc = 0x51cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
label_51cd3c:
    // 0x51cd3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x51cd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_51cd40:
    // 0x51cd40: 0xacc20120  sw          $v0, 0x120($a2)
    ctx->pc = 0x51cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 2));
label_51cd44:
    // 0x51cd44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51cd44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51cd48:
    // 0x51cd48: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x51cd48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_51cd4c:
    // 0x51cd4c: 0x320f809  jalr        $t9
label_51cd50:
    if (ctx->pc == 0x51CD50u) {
        ctx->pc = 0x51CD54u;
        goto label_51cd54;
    }
    ctx->pc = 0x51CD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51CD54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x51CD54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51CD54u; }
            if (ctx->pc != 0x51CD54u) { return; }
        }
        }
    }
    ctx->pc = 0x51CD54u;
label_51cd54:
    // 0x51cd54: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x51cd54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_51cd58:
    // 0x51cd58: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_51cd5c:
    if (ctx->pc == 0x51CD5Cu) {
        ctx->pc = 0x51CD60u;
        goto label_51cd60;
    }
    ctx->pc = 0x51CD58u;
    {
        const bool branch_taken_0x51cd58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x51cd58) {
            ctx->pc = 0x51CD88u;
            goto label_51cd88;
        }
    }
    ctx->pc = 0x51CD60u;
label_51cd60:
    // 0x51cd60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x51cd60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51cd64:
    // 0x51cd64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x51cd64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51cd68:
    // 0x51cd68: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x51cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_51cd6c:
    // 0x51cd6c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x51cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_51cd70:
    // 0x51cd70: 0xc1474f4  jal         func_51D3D0
label_51cd74:
    if (ctx->pc == 0x51CD74u) {
        ctx->pc = 0x51CD74u;
            // 0x51cd74: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x51CD78u;
        goto label_51cd78;
    }
    ctx->pc = 0x51CD70u;
    SET_GPR_U32(ctx, 31, 0x51CD78u);
    ctx->pc = 0x51CD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51CD70u;
            // 0x51cd74: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51D3D0u;
    if (runtime->hasFunction(0x51D3D0u)) {
        auto targetFn = runtime->lookupFunction(0x51D3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CD78u; }
        if (ctx->pc != 0x51CD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051D3D0_0x51d3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CD78u; }
        if (ctx->pc != 0x51CD78u) { return; }
    }
    ctx->pc = 0x51CD78u;
label_51cd78:
    // 0x51cd78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x51cd78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_51cd7c:
    // 0x51cd7c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x51cd7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_51cd80:
    // 0x51cd80: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_51cd84:
    if (ctx->pc == 0x51CD84u) {
        ctx->pc = 0x51CD84u;
            // 0x51cd84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x51CD88u;
        goto label_51cd88;
    }
    ctx->pc = 0x51CD80u;
    {
        const bool branch_taken_0x51cd80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x51CD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51CD80u;
            // 0x51cd84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51cd80) {
            ctx->pc = 0x51CD68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51cd68;
        }
    }
    ctx->pc = 0x51CD88u;
label_51cd88:
    // 0x51cd88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x51cd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_51cd8c:
    // 0x51cd8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51cd8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51cd90:
    // 0x51cd90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51cd90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51cd94:
    // 0x51cd94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51cd94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51cd98:
    // 0x51cd98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51cd98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51cd9c:
    // 0x51cd9c: 0x3e00008  jr          $ra
label_51cda0:
    if (ctx->pc == 0x51CDA0u) {
        ctx->pc = 0x51CDA0u;
            // 0x51cda0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x51CDA4u;
        goto label_51cda4;
    }
    ctx->pc = 0x51CD9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51CDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51CD9Cu;
            // 0x51cda0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51CDA4u;
label_51cda4:
    // 0x51cda4: 0x0  nop
    ctx->pc = 0x51cda4u;
    // NOP
label_51cda8:
    // 0x51cda8: 0x0  nop
    ctx->pc = 0x51cda8u;
    // NOP
label_51cdac:
    // 0x51cdac: 0x0  nop
    ctx->pc = 0x51cdacu;
    // NOP
label_51cdb0:
    // 0x51cdb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x51cdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_51cdb4:
    // 0x51cdb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x51cdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_51cdb8:
    // 0x51cdb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51cdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51cdbc:
    // 0x51cdbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51cdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51cdc0:
    // 0x51cdc0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x51cdc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_51cdc4:
    // 0x51cdc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51cdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51cdc8:
    // 0x51cdc8: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x51cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_51cdcc:
    // 0x51cdcc: 0x106000b0  beqz        $v1, . + 4 + (0xB0 << 2)
label_51cdd0:
    if (ctx->pc == 0x51CDD0u) {
        ctx->pc = 0x51CDD0u;
            // 0x51cdd0: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->pc = 0x51CDD4u;
        goto label_51cdd4;
    }
    ctx->pc = 0x51CDCCu;
    {
        const bool branch_taken_0x51cdcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x51CDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51CDCCu;
            // 0x51cdd0: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51cdcc) {
            ctx->pc = 0x51D090u;
            goto label_51d090;
        }
    }
    ctx->pc = 0x51CDD4u;
label_51cdd4:
    // 0x51cdd4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x51cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_51cdd8:
    // 0x51cdd8: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x51cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_51cddc:
    // 0x51cddc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51cddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51cde0:
    // 0x51cde0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x51cde0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_51cde4:
    // 0x51cde4: 0x320f809  jalr        $t9
label_51cde8:
    if (ctx->pc == 0x51CDE8u) {
        ctx->pc = 0x51CDECu;
        goto label_51cdec;
    }
    ctx->pc = 0x51CDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51CDECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x51CDECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51CDECu; }
            if (ctx->pc != 0x51CDECu) { return; }
        }
        }
    }
    ctx->pc = 0x51CDECu;
label_51cdec:
    // 0x51cdec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x51cdecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51cdf0:
    // 0x51cdf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51cdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51cdf4:
    // 0x51cdf4: 0xc075128  jal         func_1D44A0
label_51cdf8:
    if (ctx->pc == 0x51CDF8u) {
        ctx->pc = 0x51CDF8u;
            // 0x51cdf8: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x51CDFCu;
        goto label_51cdfc;
    }
    ctx->pc = 0x51CDF4u;
    SET_GPR_U32(ctx, 31, 0x51CDFCu);
    ctx->pc = 0x51CDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51CDF4u;
            // 0x51cdf8: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CDFCu; }
        if (ctx->pc != 0x51CDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CDFCu; }
        if (ctx->pc != 0x51CDFCu) { return; }
    }
    ctx->pc = 0x51CDFCu;
label_51cdfc:
    // 0x51cdfc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x51cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51ce00:
    // 0x51ce00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51ce04:
    // 0x51ce04: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x51ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_51ce08:
    // 0x51ce08: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x51ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_51ce0c:
    // 0x51ce0c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x51ce0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51ce10:
    // 0x51ce10: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51ce14:
    if (ctx->pc == 0x51CE14u) {
        ctx->pc = 0x51CE14u;
            // 0x51ce14: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x51CE18u;
        goto label_51ce18;
    }
    ctx->pc = 0x51CE10u;
    {
        const bool branch_taken_0x51ce10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51ce10) {
            ctx->pc = 0x51CE14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CE10u;
            // 0x51ce14: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51CE24u;
            goto label_51ce24;
        }
    }
    ctx->pc = 0x51CE18u;
label_51ce18:
    // 0x51ce18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51ce1c:
    // 0x51ce1c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x51ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_51ce20:
    // 0x51ce20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x51ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51ce24:
    // 0x51ce24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51ce28:
    // 0x51ce28: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x51ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_51ce2c:
    // 0x51ce2c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x51ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_51ce30:
    // 0x51ce30: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x51ce30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51ce34:
    // 0x51ce34: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51ce38:
    if (ctx->pc == 0x51CE38u) {
        ctx->pc = 0x51CE38u;
            // 0x51ce38: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x51CE3Cu;
        goto label_51ce3c;
    }
    ctx->pc = 0x51CE34u;
    {
        const bool branch_taken_0x51ce34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51ce34) {
            ctx->pc = 0x51CE38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CE34u;
            // 0x51ce38: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51CE48u;
            goto label_51ce48;
        }
    }
    ctx->pc = 0x51CE3Cu;
label_51ce3c:
    // 0x51ce3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51ce40:
    // 0x51ce40: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x51ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_51ce44:
    // 0x51ce44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x51ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51ce48:
    // 0x51ce48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51ce4c:
    // 0x51ce4c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x51ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_51ce50:
    // 0x51ce50: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x51ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_51ce54:
    // 0x51ce54: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x51ce54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51ce58:
    // 0x51ce58: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51ce5c:
    if (ctx->pc == 0x51CE5Cu) {
        ctx->pc = 0x51CE5Cu;
            // 0x51ce5c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x51CE60u;
        goto label_51ce60;
    }
    ctx->pc = 0x51CE58u;
    {
        const bool branch_taken_0x51ce58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51ce58) {
            ctx->pc = 0x51CE5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CE58u;
            // 0x51ce5c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51CE6Cu;
            goto label_51ce6c;
        }
    }
    ctx->pc = 0x51CE60u;
label_51ce60:
    // 0x51ce60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51ce64:
    // 0x51ce64: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x51ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_51ce68:
    // 0x51ce68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x51ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51ce6c:
    // 0x51ce6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51ce70:
    // 0x51ce70: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x51ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_51ce74:
    // 0x51ce74: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x51ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_51ce78:
    // 0x51ce78: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x51ce78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_51ce7c:
    // 0x51ce7c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x51ce7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51ce80:
    // 0x51ce80: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51ce84:
    if (ctx->pc == 0x51CE84u) {
        ctx->pc = 0x51CE84u;
            // 0x51ce84: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x51CE88u;
        goto label_51ce88;
    }
    ctx->pc = 0x51CE80u;
    {
        const bool branch_taken_0x51ce80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51ce80) {
            ctx->pc = 0x51CE84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CE80u;
            // 0x51ce84: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51CE94u;
            goto label_51ce94;
        }
    }
    ctx->pc = 0x51CE88u;
label_51ce88:
    // 0x51ce88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51ce8c:
    // 0x51ce8c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x51ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_51ce90:
    // 0x51ce90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x51ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51ce94:
    // 0x51ce94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51ce98:
    // 0x51ce98: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x51ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_51ce9c:
    // 0x51ce9c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x51ce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_51cea0:
    // 0x51cea0: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x51cea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_51cea4:
    // 0x51cea4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x51cea4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51cea8:
    // 0x51cea8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51ceac:
    if (ctx->pc == 0x51CEACu) {
        ctx->pc = 0x51CEACu;
            // 0x51ceac: 0x8e45001c  lw          $a1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x51CEB0u;
        goto label_51ceb0;
    }
    ctx->pc = 0x51CEA8u;
    {
        const bool branch_taken_0x51cea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51cea8) {
            ctx->pc = 0x51CEACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CEA8u;
            // 0x51ceac: 0x8e45001c  lw          $a1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51CEBCu;
            goto label_51cebc;
        }
    }
    ctx->pc = 0x51CEB0u;
label_51ceb0:
    // 0x51ceb0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51ceb4:
    // 0x51ceb4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x51ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_51ceb8:
    // 0x51ceb8: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x51ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_51cebc:
    // 0x51cebc: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x51cebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_51cec0:
    // 0x51cec0: 0xc0750c4  jal         func_1D4310
label_51cec4:
    if (ctx->pc == 0x51CEC4u) {
        ctx->pc = 0x51CEC4u;
            // 0x51cec4: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x51CEC8u;
        goto label_51cec8;
    }
    ctx->pc = 0x51CEC0u;
    SET_GPR_U32(ctx, 31, 0x51CEC8u);
    ctx->pc = 0x51CEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51CEC0u;
            // 0x51cec4: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4310u;
    if (runtime->hasFunction(0x1D4310u)) {
        auto targetFn = runtime->lookupFunction(0x1D4310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CEC8u; }
        if (ctx->pc != 0x51CEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4310_0x1d4310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CEC8u; }
        if (ctx->pc != 0x51CEC8u) { return; }
    }
    ctx->pc = 0x51CEC8u;
label_51cec8:
    // 0x51cec8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x51cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_51cecc:
    // 0x51cecc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51ced0:
    // 0x51ced0: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x51ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_51ced4:
    // 0x51ced4: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x51ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_51ced8:
    // 0x51ced8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x51ced8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51cedc:
    // 0x51cedc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51cee0:
    if (ctx->pc == 0x51CEE0u) {
        ctx->pc = 0x51CEE0u;
            // 0x51cee0: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x51CEE4u;
        goto label_51cee4;
    }
    ctx->pc = 0x51CEDCu;
    {
        const bool branch_taken_0x51cedc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51cedc) {
            ctx->pc = 0x51CEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CEDCu;
            // 0x51cee0: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51CEF0u;
            goto label_51cef0;
        }
    }
    ctx->pc = 0x51CEE4u;
label_51cee4:
    // 0x51cee4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51cee8:
    // 0x51cee8: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x51cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_51ceec:
    // 0x51ceec: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x51ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_51cef0:
    // 0x51cef0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51cef4:
    // 0x51cef4: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x51cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_51cef8:
    // 0x51cef8: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x51cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_51cefc:
    // 0x51cefc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x51cefcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51cf00:
    // 0x51cf00: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51cf04:
    if (ctx->pc == 0x51CF04u) {
        ctx->pc = 0x51CF04u;
            // 0x51cf04: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x51CF08u;
        goto label_51cf08;
    }
    ctx->pc = 0x51CF00u;
    {
        const bool branch_taken_0x51cf00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51cf00) {
            ctx->pc = 0x51CF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CF00u;
            // 0x51cf04: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51CF14u;
            goto label_51cf14;
        }
    }
    ctx->pc = 0x51CF08u;
label_51cf08:
    // 0x51cf08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51cf0c:
    // 0x51cf0c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x51cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_51cf10:
    // 0x51cf10: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x51cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_51cf14:
    // 0x51cf14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51cf18:
    // 0x51cf18: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x51cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_51cf1c:
    // 0x51cf1c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x51cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_51cf20:
    // 0x51cf20: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x51cf20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51cf24:
    // 0x51cf24: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51cf28:
    if (ctx->pc == 0x51CF28u) {
        ctx->pc = 0x51CF28u;
            // 0x51cf28: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x51CF2Cu;
        goto label_51cf2c;
    }
    ctx->pc = 0x51CF24u;
    {
        const bool branch_taken_0x51cf24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51cf24) {
            ctx->pc = 0x51CF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CF24u;
            // 0x51cf28: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51CF38u;
            goto label_51cf38;
        }
    }
    ctx->pc = 0x51CF2Cu;
label_51cf2c:
    // 0x51cf2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51cf30:
    // 0x51cf30: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x51cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_51cf34:
    // 0x51cf34: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x51cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_51cf38:
    // 0x51cf38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51cf3c:
    // 0x51cf3c: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x51cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_51cf40:
    // 0x51cf40: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x51cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_51cf44:
    // 0x51cf44: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x51cf44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_51cf48:
    // 0x51cf48: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x51cf48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51cf4c:
    // 0x51cf4c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51cf50:
    if (ctx->pc == 0x51CF50u) {
        ctx->pc = 0x51CF50u;
            // 0x51cf50: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x51CF54u;
        goto label_51cf54;
    }
    ctx->pc = 0x51CF4Cu;
    {
        const bool branch_taken_0x51cf4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51cf4c) {
            ctx->pc = 0x51CF50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CF4Cu;
            // 0x51cf50: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51CF60u;
            goto label_51cf60;
        }
    }
    ctx->pc = 0x51CF54u;
label_51cf54:
    // 0x51cf54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51cf58:
    // 0x51cf58: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x51cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_51cf5c:
    // 0x51cf5c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x51cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_51cf60:
    // 0x51cf60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51cf64:
    // 0x51cf64: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x51cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_51cf68:
    // 0x51cf68: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x51cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_51cf6c:
    // 0x51cf6c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x51cf6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_51cf70:
    // 0x51cf70: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x51cf70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51cf74:
    // 0x51cf74: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51cf78:
    if (ctx->pc == 0x51CF78u) {
        ctx->pc = 0x51CF78u;
            // 0x51cf78: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->pc = 0x51CF7Cu;
        goto label_51cf7c;
    }
    ctx->pc = 0x51CF74u;
    {
        const bool branch_taken_0x51cf74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51cf74) {
            ctx->pc = 0x51CF78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CF74u;
            // 0x51cf78: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51CF88u;
            goto label_51cf88;
        }
    }
    ctx->pc = 0x51CF7Cu;
label_51cf7c:
    // 0x51cf7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51cf80:
    // 0x51cf80: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x51cf80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_51cf84:
    // 0x51cf84: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x51cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_51cf88:
    // 0x51cf88: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x51cf88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_51cf8c:
    // 0x51cf8c: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x51cf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
label_51cf90:
    // 0x51cf90: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x51cf90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_51cf94:
    // 0x51cf94: 0xc0750c4  jal         func_1D4310
label_51cf98:
    if (ctx->pc == 0x51CF98u) {
        ctx->pc = 0x51CF98u;
            // 0x51cf98: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x51CF9Cu;
        goto label_51cf9c;
    }
    ctx->pc = 0x51CF94u;
    SET_GPR_U32(ctx, 31, 0x51CF9Cu);
    ctx->pc = 0x51CF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51CF94u;
            // 0x51cf98: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4310u;
    if (runtime->hasFunction(0x1D4310u)) {
        auto targetFn = runtime->lookupFunction(0x1D4310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CF9Cu; }
        if (ctx->pc != 0x51CF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4310_0x1d4310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51CF9Cu; }
        if (ctx->pc != 0x51CF9Cu) { return; }
    }
    ctx->pc = 0x51CF9Cu;
label_51cf9c:
    // 0x51cf9c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x51cf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_51cfa0:
    // 0x51cfa0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51cfa4:
    // 0x51cfa4: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x51cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_51cfa8:
    // 0x51cfa8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x51cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_51cfac:
    // 0x51cfac: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x51cfacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_51cfb0:
    // 0x51cfb0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51cfb4:
    if (ctx->pc == 0x51CFB4u) {
        ctx->pc = 0x51CFB4u;
            // 0x51cfb4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->pc = 0x51CFB8u;
        goto label_51cfb8;
    }
    ctx->pc = 0x51CFB0u;
    {
        const bool branch_taken_0x51cfb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51cfb0) {
            ctx->pc = 0x51CFB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CFB0u;
            // 0x51cfb4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51CFC4u;
            goto label_51cfc4;
        }
    }
    ctx->pc = 0x51CFB8u;
label_51cfb8:
    // 0x51cfb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51cfbc:
    // 0x51cfbc: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x51cfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_51cfc0:
    // 0x51cfc0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x51cfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_51cfc4:
    // 0x51cfc4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51cfc8:
    // 0x51cfc8: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x51cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_51cfcc:
    // 0x51cfcc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x51cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_51cfd0:
    // 0x51cfd0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x51cfd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_51cfd4:
    // 0x51cfd4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51cfd8:
    if (ctx->pc == 0x51CFD8u) {
        ctx->pc = 0x51CFD8u;
            // 0x51cfd8: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->pc = 0x51CFDCu;
        goto label_51cfdc;
    }
    ctx->pc = 0x51CFD4u;
    {
        const bool branch_taken_0x51cfd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51cfd4) {
            ctx->pc = 0x51CFD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CFD4u;
            // 0x51cfd8: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51CFE8u;
            goto label_51cfe8;
        }
    }
    ctx->pc = 0x51CFDCu;
label_51cfdc:
    // 0x51cfdc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51cfe0:
    // 0x51cfe0: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x51cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_51cfe4:
    // 0x51cfe4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x51cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_51cfe8:
    // 0x51cfe8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51cfec:
    // 0x51cfec: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x51cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_51cff0:
    // 0x51cff0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x51cff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_51cff4:
    // 0x51cff4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x51cff4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_51cff8:
    // 0x51cff8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51cffc:
    if (ctx->pc == 0x51CFFCu) {
        ctx->pc = 0x51CFFCu;
            // 0x51cffc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->pc = 0x51D000u;
        goto label_51d000;
    }
    ctx->pc = 0x51CFF8u;
    {
        const bool branch_taken_0x51cff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51cff8) {
            ctx->pc = 0x51CFFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51CFF8u;
            // 0x51cffc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51D00Cu;
            goto label_51d00c;
        }
    }
    ctx->pc = 0x51D000u;
label_51d000:
    // 0x51d000: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51d000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51d004:
    // 0x51d004: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x51d004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_51d008:
    // 0x51d008: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x51d008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_51d00c:
    // 0x51d00c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51d010:
    // 0x51d010: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x51d010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_51d014:
    // 0x51d014: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x51d014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_51d018:
    // 0x51d018: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x51d018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_51d01c:
    // 0x51d01c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x51d01cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_51d020:
    // 0x51d020: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51d024:
    if (ctx->pc == 0x51D024u) {
        ctx->pc = 0x51D024u;
            // 0x51d024: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->pc = 0x51D028u;
        goto label_51d028;
    }
    ctx->pc = 0x51D020u;
    {
        const bool branch_taken_0x51d020 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d020) {
            ctx->pc = 0x51D024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51D020u;
            // 0x51d024: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51D034u;
            goto label_51d034;
        }
    }
    ctx->pc = 0x51D028u;
label_51d028:
    // 0x51d028: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51d028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51d02c:
    // 0x51d02c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x51d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_51d030:
    // 0x51d030: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x51d030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_51d034:
    // 0x51d034: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51d034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51d038:
    // 0x51d038: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x51d038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_51d03c:
    // 0x51d03c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x51d03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_51d040:
    // 0x51d040: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x51d040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_51d044:
    // 0x51d044: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x51d044u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_51d048:
    // 0x51d048: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_51d04c:
    if (ctx->pc == 0x51D04Cu) {
        ctx->pc = 0x51D050u;
        goto label_51d050;
    }
    ctx->pc = 0x51D048u;
    {
        const bool branch_taken_0x51d048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d048) {
            ctx->pc = 0x51D058u;
            goto label_51d058;
        }
    }
    ctx->pc = 0x51D050u;
label_51d050:
    // 0x51d050: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51d050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51d054:
    // 0x51d054: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x51d054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_51d058:
    // 0x51d058: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51d058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51d05c:
    // 0x51d05c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x51d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_51d060:
    // 0x51d060: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x51d060u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_51d064:
    // 0x51d064: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_51d068:
    if (ctx->pc == 0x51D068u) {
        ctx->pc = 0x51D06Cu;
        goto label_51d06c;
    }
    ctx->pc = 0x51D064u;
    {
        const bool branch_taken_0x51d064 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d064) {
            ctx->pc = 0x51D074u;
            goto label_51d074;
        }
    }
    ctx->pc = 0x51D06Cu;
label_51d06c:
    // 0x51d06c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51d070:
    // 0x51d070: 0xac70e3c8  sw          $s0, -0x1C38($v1)
    ctx->pc = 0x51d070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 16));
label_51d074:
    // 0x51d074: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51d074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51d078:
    // 0x51d078: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x51d078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_51d07c:
    // 0x51d07c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x51d07cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_51d080:
    // 0x51d080: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51d084:
    if (ctx->pc == 0x51D084u) {
        ctx->pc = 0x51D084u;
            // 0x51d084: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x51D088u;
        goto label_51d088;
    }
    ctx->pc = 0x51D080u;
    {
        const bool branch_taken_0x51d080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d080) {
            ctx->pc = 0x51D084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51D080u;
            // 0x51d084: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51D094u;
            goto label_51d094;
        }
    }
    ctx->pc = 0x51D088u;
label_51d088:
    // 0x51d088: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51d088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51d08c:
    // 0x51d08c: 0xac70e3d0  sw          $s0, -0x1C30($v1)
    ctx->pc = 0x51d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 16));
label_51d090:
    // 0x51d090: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x51d090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_51d094:
    // 0x51d094: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51d094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51d098:
    // 0x51d098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51d098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51d09c:
    // 0x51d09c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51d09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51d0a0:
    // 0x51d0a0: 0x3e00008  jr          $ra
label_51d0a4:
    if (ctx->pc == 0x51D0A4u) {
        ctx->pc = 0x51D0A4u;
            // 0x51d0a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x51D0A8u;
        goto label_51d0a8;
    }
    ctx->pc = 0x51D0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51D0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D0A0u;
            // 0x51d0a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51D0A8u;
label_51d0a8:
    // 0x51d0a8: 0x0  nop
    ctx->pc = 0x51d0a8u;
    // NOP
label_51d0ac:
    // 0x51d0ac: 0x0  nop
    ctx->pc = 0x51d0acu;
    // NOP
label_51d0b0:
    // 0x51d0b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x51d0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_51d0b4:
    // 0x51d0b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x51d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_51d0b8:
    // 0x51d0b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51d0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51d0bc:
    // 0x51d0bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51d0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51d0c0:
    // 0x51d0c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51d0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51d0c4:
    // 0x51d0c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51d0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51d0c8:
    // 0x51d0c8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x51d0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_51d0cc:
    // 0x51d0cc: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_51d0d0:
    if (ctx->pc == 0x51D0D0u) {
        ctx->pc = 0x51D0D0u;
            // 0x51d0d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D0D4u;
        goto label_51d0d4;
    }
    ctx->pc = 0x51D0CCu;
    {
        const bool branch_taken_0x51d0cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x51D0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D0CCu;
            // 0x51d0d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d0cc) {
            ctx->pc = 0x51D100u;
            goto label_51d100;
        }
    }
    ctx->pc = 0x51D0D4u;
label_51d0d4:
    // 0x51d0d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x51d0d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51d0d8:
    // 0x51d0d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x51d0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51d0dc:
    // 0x51d0dc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x51d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_51d0e0:
    // 0x51d0e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x51d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_51d0e4:
    // 0x51d0e4: 0xc1477c0  jal         func_51DF00
label_51d0e8:
    if (ctx->pc == 0x51D0E8u) {
        ctx->pc = 0x51D0E8u;
            // 0x51d0e8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x51D0ECu;
        goto label_51d0ec;
    }
    ctx->pc = 0x51D0E4u;
    SET_GPR_U32(ctx, 31, 0x51D0ECu);
    ctx->pc = 0x51D0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D0E4u;
            // 0x51d0e8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51DF00u;
    if (runtime->hasFunction(0x51DF00u)) {
        auto targetFn = runtime->lookupFunction(0x51DF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D0ECu; }
        if (ctx->pc != 0x51D0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051DF00_0x51df00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D0ECu; }
        if (ctx->pc != 0x51D0ECu) { return; }
    }
    ctx->pc = 0x51D0ECu;
label_51d0ec:
    // 0x51d0ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x51d0ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_51d0f0:
    // 0x51d0f0: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x51d0f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_51d0f4:
    // 0x51d0f4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_51d0f8:
    if (ctx->pc == 0x51D0F8u) {
        ctx->pc = 0x51D0F8u;
            // 0x51d0f8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x51D0FCu;
        goto label_51d0fc;
    }
    ctx->pc = 0x51D0F4u;
    {
        const bool branch_taken_0x51d0f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x51D0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D0F4u;
            // 0x51d0f8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d0f4) {
            ctx->pc = 0x51D0DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51d0dc;
        }
    }
    ctx->pc = 0x51D0FCu;
label_51d0fc:
    // 0x51d0fc: 0x0  nop
    ctx->pc = 0x51d0fcu;
    // NOP
label_51d100:
    // 0x51d100: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x51d100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_51d104:
    // 0x51d104: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51d104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51d108:
    // 0x51d108: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51d108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51d10c:
    // 0x51d10c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51d10cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51d110:
    // 0x51d110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51d110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51d114:
    // 0x51d114: 0x3e00008  jr          $ra
label_51d118:
    if (ctx->pc == 0x51D118u) {
        ctx->pc = 0x51D118u;
            // 0x51d118: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x51D11Cu;
        goto label_51d11c;
    }
    ctx->pc = 0x51D114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51D118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D114u;
            // 0x51d118: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51D11Cu;
label_51d11c:
    // 0x51d11c: 0x0  nop
    ctx->pc = 0x51d11cu;
    // NOP
}
