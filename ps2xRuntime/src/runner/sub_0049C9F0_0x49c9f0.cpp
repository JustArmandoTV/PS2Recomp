#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049C9F0
// Address: 0x49c9f0 - 0x49da50
void sub_0049C9F0_0x49c9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C9F0_0x49c9f0");
#endif

    switch (ctx->pc) {
        case 0x49c9f0u: goto label_49c9f0;
        case 0x49c9f4u: goto label_49c9f4;
        case 0x49c9f8u: goto label_49c9f8;
        case 0x49c9fcu: goto label_49c9fc;
        case 0x49ca00u: goto label_49ca00;
        case 0x49ca04u: goto label_49ca04;
        case 0x49ca08u: goto label_49ca08;
        case 0x49ca0cu: goto label_49ca0c;
        case 0x49ca10u: goto label_49ca10;
        case 0x49ca14u: goto label_49ca14;
        case 0x49ca18u: goto label_49ca18;
        case 0x49ca1cu: goto label_49ca1c;
        case 0x49ca20u: goto label_49ca20;
        case 0x49ca24u: goto label_49ca24;
        case 0x49ca28u: goto label_49ca28;
        case 0x49ca2cu: goto label_49ca2c;
        case 0x49ca30u: goto label_49ca30;
        case 0x49ca34u: goto label_49ca34;
        case 0x49ca38u: goto label_49ca38;
        case 0x49ca3cu: goto label_49ca3c;
        case 0x49ca40u: goto label_49ca40;
        case 0x49ca44u: goto label_49ca44;
        case 0x49ca48u: goto label_49ca48;
        case 0x49ca4cu: goto label_49ca4c;
        case 0x49ca50u: goto label_49ca50;
        case 0x49ca54u: goto label_49ca54;
        case 0x49ca58u: goto label_49ca58;
        case 0x49ca5cu: goto label_49ca5c;
        case 0x49ca60u: goto label_49ca60;
        case 0x49ca64u: goto label_49ca64;
        case 0x49ca68u: goto label_49ca68;
        case 0x49ca6cu: goto label_49ca6c;
        case 0x49ca70u: goto label_49ca70;
        case 0x49ca74u: goto label_49ca74;
        case 0x49ca78u: goto label_49ca78;
        case 0x49ca7cu: goto label_49ca7c;
        case 0x49ca80u: goto label_49ca80;
        case 0x49ca84u: goto label_49ca84;
        case 0x49ca88u: goto label_49ca88;
        case 0x49ca8cu: goto label_49ca8c;
        case 0x49ca90u: goto label_49ca90;
        case 0x49ca94u: goto label_49ca94;
        case 0x49ca98u: goto label_49ca98;
        case 0x49ca9cu: goto label_49ca9c;
        case 0x49caa0u: goto label_49caa0;
        case 0x49caa4u: goto label_49caa4;
        case 0x49caa8u: goto label_49caa8;
        case 0x49caacu: goto label_49caac;
        case 0x49cab0u: goto label_49cab0;
        case 0x49cab4u: goto label_49cab4;
        case 0x49cab8u: goto label_49cab8;
        case 0x49cabcu: goto label_49cabc;
        case 0x49cac0u: goto label_49cac0;
        case 0x49cac4u: goto label_49cac4;
        case 0x49cac8u: goto label_49cac8;
        case 0x49caccu: goto label_49cacc;
        case 0x49cad0u: goto label_49cad0;
        case 0x49cad4u: goto label_49cad4;
        case 0x49cad8u: goto label_49cad8;
        case 0x49cadcu: goto label_49cadc;
        case 0x49cae0u: goto label_49cae0;
        case 0x49cae4u: goto label_49cae4;
        case 0x49cae8u: goto label_49cae8;
        case 0x49caecu: goto label_49caec;
        case 0x49caf0u: goto label_49caf0;
        case 0x49caf4u: goto label_49caf4;
        case 0x49caf8u: goto label_49caf8;
        case 0x49cafcu: goto label_49cafc;
        case 0x49cb00u: goto label_49cb00;
        case 0x49cb04u: goto label_49cb04;
        case 0x49cb08u: goto label_49cb08;
        case 0x49cb0cu: goto label_49cb0c;
        case 0x49cb10u: goto label_49cb10;
        case 0x49cb14u: goto label_49cb14;
        case 0x49cb18u: goto label_49cb18;
        case 0x49cb1cu: goto label_49cb1c;
        case 0x49cb20u: goto label_49cb20;
        case 0x49cb24u: goto label_49cb24;
        case 0x49cb28u: goto label_49cb28;
        case 0x49cb2cu: goto label_49cb2c;
        case 0x49cb30u: goto label_49cb30;
        case 0x49cb34u: goto label_49cb34;
        case 0x49cb38u: goto label_49cb38;
        case 0x49cb3cu: goto label_49cb3c;
        case 0x49cb40u: goto label_49cb40;
        case 0x49cb44u: goto label_49cb44;
        case 0x49cb48u: goto label_49cb48;
        case 0x49cb4cu: goto label_49cb4c;
        case 0x49cb50u: goto label_49cb50;
        case 0x49cb54u: goto label_49cb54;
        case 0x49cb58u: goto label_49cb58;
        case 0x49cb5cu: goto label_49cb5c;
        case 0x49cb60u: goto label_49cb60;
        case 0x49cb64u: goto label_49cb64;
        case 0x49cb68u: goto label_49cb68;
        case 0x49cb6cu: goto label_49cb6c;
        case 0x49cb70u: goto label_49cb70;
        case 0x49cb74u: goto label_49cb74;
        case 0x49cb78u: goto label_49cb78;
        case 0x49cb7cu: goto label_49cb7c;
        case 0x49cb80u: goto label_49cb80;
        case 0x49cb84u: goto label_49cb84;
        case 0x49cb88u: goto label_49cb88;
        case 0x49cb8cu: goto label_49cb8c;
        case 0x49cb90u: goto label_49cb90;
        case 0x49cb94u: goto label_49cb94;
        case 0x49cb98u: goto label_49cb98;
        case 0x49cb9cu: goto label_49cb9c;
        case 0x49cba0u: goto label_49cba0;
        case 0x49cba4u: goto label_49cba4;
        case 0x49cba8u: goto label_49cba8;
        case 0x49cbacu: goto label_49cbac;
        case 0x49cbb0u: goto label_49cbb0;
        case 0x49cbb4u: goto label_49cbb4;
        case 0x49cbb8u: goto label_49cbb8;
        case 0x49cbbcu: goto label_49cbbc;
        case 0x49cbc0u: goto label_49cbc0;
        case 0x49cbc4u: goto label_49cbc4;
        case 0x49cbc8u: goto label_49cbc8;
        case 0x49cbccu: goto label_49cbcc;
        case 0x49cbd0u: goto label_49cbd0;
        case 0x49cbd4u: goto label_49cbd4;
        case 0x49cbd8u: goto label_49cbd8;
        case 0x49cbdcu: goto label_49cbdc;
        case 0x49cbe0u: goto label_49cbe0;
        case 0x49cbe4u: goto label_49cbe4;
        case 0x49cbe8u: goto label_49cbe8;
        case 0x49cbecu: goto label_49cbec;
        case 0x49cbf0u: goto label_49cbf0;
        case 0x49cbf4u: goto label_49cbf4;
        case 0x49cbf8u: goto label_49cbf8;
        case 0x49cbfcu: goto label_49cbfc;
        case 0x49cc00u: goto label_49cc00;
        case 0x49cc04u: goto label_49cc04;
        case 0x49cc08u: goto label_49cc08;
        case 0x49cc0cu: goto label_49cc0c;
        case 0x49cc10u: goto label_49cc10;
        case 0x49cc14u: goto label_49cc14;
        case 0x49cc18u: goto label_49cc18;
        case 0x49cc1cu: goto label_49cc1c;
        case 0x49cc20u: goto label_49cc20;
        case 0x49cc24u: goto label_49cc24;
        case 0x49cc28u: goto label_49cc28;
        case 0x49cc2cu: goto label_49cc2c;
        case 0x49cc30u: goto label_49cc30;
        case 0x49cc34u: goto label_49cc34;
        case 0x49cc38u: goto label_49cc38;
        case 0x49cc3cu: goto label_49cc3c;
        case 0x49cc40u: goto label_49cc40;
        case 0x49cc44u: goto label_49cc44;
        case 0x49cc48u: goto label_49cc48;
        case 0x49cc4cu: goto label_49cc4c;
        case 0x49cc50u: goto label_49cc50;
        case 0x49cc54u: goto label_49cc54;
        case 0x49cc58u: goto label_49cc58;
        case 0x49cc5cu: goto label_49cc5c;
        case 0x49cc60u: goto label_49cc60;
        case 0x49cc64u: goto label_49cc64;
        case 0x49cc68u: goto label_49cc68;
        case 0x49cc6cu: goto label_49cc6c;
        case 0x49cc70u: goto label_49cc70;
        case 0x49cc74u: goto label_49cc74;
        case 0x49cc78u: goto label_49cc78;
        case 0x49cc7cu: goto label_49cc7c;
        case 0x49cc80u: goto label_49cc80;
        case 0x49cc84u: goto label_49cc84;
        case 0x49cc88u: goto label_49cc88;
        case 0x49cc8cu: goto label_49cc8c;
        case 0x49cc90u: goto label_49cc90;
        case 0x49cc94u: goto label_49cc94;
        case 0x49cc98u: goto label_49cc98;
        case 0x49cc9cu: goto label_49cc9c;
        case 0x49cca0u: goto label_49cca0;
        case 0x49cca4u: goto label_49cca4;
        case 0x49cca8u: goto label_49cca8;
        case 0x49ccacu: goto label_49ccac;
        case 0x49ccb0u: goto label_49ccb0;
        case 0x49ccb4u: goto label_49ccb4;
        case 0x49ccb8u: goto label_49ccb8;
        case 0x49ccbcu: goto label_49ccbc;
        case 0x49ccc0u: goto label_49ccc0;
        case 0x49ccc4u: goto label_49ccc4;
        case 0x49ccc8u: goto label_49ccc8;
        case 0x49ccccu: goto label_49cccc;
        case 0x49ccd0u: goto label_49ccd0;
        case 0x49ccd4u: goto label_49ccd4;
        case 0x49ccd8u: goto label_49ccd8;
        case 0x49ccdcu: goto label_49ccdc;
        case 0x49cce0u: goto label_49cce0;
        case 0x49cce4u: goto label_49cce4;
        case 0x49cce8u: goto label_49cce8;
        case 0x49ccecu: goto label_49ccec;
        case 0x49ccf0u: goto label_49ccf0;
        case 0x49ccf4u: goto label_49ccf4;
        case 0x49ccf8u: goto label_49ccf8;
        case 0x49ccfcu: goto label_49ccfc;
        case 0x49cd00u: goto label_49cd00;
        case 0x49cd04u: goto label_49cd04;
        case 0x49cd08u: goto label_49cd08;
        case 0x49cd0cu: goto label_49cd0c;
        case 0x49cd10u: goto label_49cd10;
        case 0x49cd14u: goto label_49cd14;
        case 0x49cd18u: goto label_49cd18;
        case 0x49cd1cu: goto label_49cd1c;
        case 0x49cd20u: goto label_49cd20;
        case 0x49cd24u: goto label_49cd24;
        case 0x49cd28u: goto label_49cd28;
        case 0x49cd2cu: goto label_49cd2c;
        case 0x49cd30u: goto label_49cd30;
        case 0x49cd34u: goto label_49cd34;
        case 0x49cd38u: goto label_49cd38;
        case 0x49cd3cu: goto label_49cd3c;
        case 0x49cd40u: goto label_49cd40;
        case 0x49cd44u: goto label_49cd44;
        case 0x49cd48u: goto label_49cd48;
        case 0x49cd4cu: goto label_49cd4c;
        case 0x49cd50u: goto label_49cd50;
        case 0x49cd54u: goto label_49cd54;
        case 0x49cd58u: goto label_49cd58;
        case 0x49cd5cu: goto label_49cd5c;
        case 0x49cd60u: goto label_49cd60;
        case 0x49cd64u: goto label_49cd64;
        case 0x49cd68u: goto label_49cd68;
        case 0x49cd6cu: goto label_49cd6c;
        case 0x49cd70u: goto label_49cd70;
        case 0x49cd74u: goto label_49cd74;
        case 0x49cd78u: goto label_49cd78;
        case 0x49cd7cu: goto label_49cd7c;
        case 0x49cd80u: goto label_49cd80;
        case 0x49cd84u: goto label_49cd84;
        case 0x49cd88u: goto label_49cd88;
        case 0x49cd8cu: goto label_49cd8c;
        case 0x49cd90u: goto label_49cd90;
        case 0x49cd94u: goto label_49cd94;
        case 0x49cd98u: goto label_49cd98;
        case 0x49cd9cu: goto label_49cd9c;
        case 0x49cda0u: goto label_49cda0;
        case 0x49cda4u: goto label_49cda4;
        case 0x49cda8u: goto label_49cda8;
        case 0x49cdacu: goto label_49cdac;
        case 0x49cdb0u: goto label_49cdb0;
        case 0x49cdb4u: goto label_49cdb4;
        case 0x49cdb8u: goto label_49cdb8;
        case 0x49cdbcu: goto label_49cdbc;
        case 0x49cdc0u: goto label_49cdc0;
        case 0x49cdc4u: goto label_49cdc4;
        case 0x49cdc8u: goto label_49cdc8;
        case 0x49cdccu: goto label_49cdcc;
        case 0x49cdd0u: goto label_49cdd0;
        case 0x49cdd4u: goto label_49cdd4;
        case 0x49cdd8u: goto label_49cdd8;
        case 0x49cddcu: goto label_49cddc;
        case 0x49cde0u: goto label_49cde0;
        case 0x49cde4u: goto label_49cde4;
        case 0x49cde8u: goto label_49cde8;
        case 0x49cdecu: goto label_49cdec;
        case 0x49cdf0u: goto label_49cdf0;
        case 0x49cdf4u: goto label_49cdf4;
        case 0x49cdf8u: goto label_49cdf8;
        case 0x49cdfcu: goto label_49cdfc;
        case 0x49ce00u: goto label_49ce00;
        case 0x49ce04u: goto label_49ce04;
        case 0x49ce08u: goto label_49ce08;
        case 0x49ce0cu: goto label_49ce0c;
        case 0x49ce10u: goto label_49ce10;
        case 0x49ce14u: goto label_49ce14;
        case 0x49ce18u: goto label_49ce18;
        case 0x49ce1cu: goto label_49ce1c;
        case 0x49ce20u: goto label_49ce20;
        case 0x49ce24u: goto label_49ce24;
        case 0x49ce28u: goto label_49ce28;
        case 0x49ce2cu: goto label_49ce2c;
        case 0x49ce30u: goto label_49ce30;
        case 0x49ce34u: goto label_49ce34;
        case 0x49ce38u: goto label_49ce38;
        case 0x49ce3cu: goto label_49ce3c;
        case 0x49ce40u: goto label_49ce40;
        case 0x49ce44u: goto label_49ce44;
        case 0x49ce48u: goto label_49ce48;
        case 0x49ce4cu: goto label_49ce4c;
        case 0x49ce50u: goto label_49ce50;
        case 0x49ce54u: goto label_49ce54;
        case 0x49ce58u: goto label_49ce58;
        case 0x49ce5cu: goto label_49ce5c;
        case 0x49ce60u: goto label_49ce60;
        case 0x49ce64u: goto label_49ce64;
        case 0x49ce68u: goto label_49ce68;
        case 0x49ce6cu: goto label_49ce6c;
        case 0x49ce70u: goto label_49ce70;
        case 0x49ce74u: goto label_49ce74;
        case 0x49ce78u: goto label_49ce78;
        case 0x49ce7cu: goto label_49ce7c;
        case 0x49ce80u: goto label_49ce80;
        case 0x49ce84u: goto label_49ce84;
        case 0x49ce88u: goto label_49ce88;
        case 0x49ce8cu: goto label_49ce8c;
        case 0x49ce90u: goto label_49ce90;
        case 0x49ce94u: goto label_49ce94;
        case 0x49ce98u: goto label_49ce98;
        case 0x49ce9cu: goto label_49ce9c;
        case 0x49cea0u: goto label_49cea0;
        case 0x49cea4u: goto label_49cea4;
        case 0x49cea8u: goto label_49cea8;
        case 0x49ceacu: goto label_49ceac;
        case 0x49ceb0u: goto label_49ceb0;
        case 0x49ceb4u: goto label_49ceb4;
        case 0x49ceb8u: goto label_49ceb8;
        case 0x49cebcu: goto label_49cebc;
        case 0x49cec0u: goto label_49cec0;
        case 0x49cec4u: goto label_49cec4;
        case 0x49cec8u: goto label_49cec8;
        case 0x49ceccu: goto label_49cecc;
        case 0x49ced0u: goto label_49ced0;
        case 0x49ced4u: goto label_49ced4;
        case 0x49ced8u: goto label_49ced8;
        case 0x49cedcu: goto label_49cedc;
        case 0x49cee0u: goto label_49cee0;
        case 0x49cee4u: goto label_49cee4;
        case 0x49cee8u: goto label_49cee8;
        case 0x49ceecu: goto label_49ceec;
        case 0x49cef0u: goto label_49cef0;
        case 0x49cef4u: goto label_49cef4;
        case 0x49cef8u: goto label_49cef8;
        case 0x49cefcu: goto label_49cefc;
        case 0x49cf00u: goto label_49cf00;
        case 0x49cf04u: goto label_49cf04;
        case 0x49cf08u: goto label_49cf08;
        case 0x49cf0cu: goto label_49cf0c;
        case 0x49cf10u: goto label_49cf10;
        case 0x49cf14u: goto label_49cf14;
        case 0x49cf18u: goto label_49cf18;
        case 0x49cf1cu: goto label_49cf1c;
        case 0x49cf20u: goto label_49cf20;
        case 0x49cf24u: goto label_49cf24;
        case 0x49cf28u: goto label_49cf28;
        case 0x49cf2cu: goto label_49cf2c;
        case 0x49cf30u: goto label_49cf30;
        case 0x49cf34u: goto label_49cf34;
        case 0x49cf38u: goto label_49cf38;
        case 0x49cf3cu: goto label_49cf3c;
        case 0x49cf40u: goto label_49cf40;
        case 0x49cf44u: goto label_49cf44;
        case 0x49cf48u: goto label_49cf48;
        case 0x49cf4cu: goto label_49cf4c;
        case 0x49cf50u: goto label_49cf50;
        case 0x49cf54u: goto label_49cf54;
        case 0x49cf58u: goto label_49cf58;
        case 0x49cf5cu: goto label_49cf5c;
        case 0x49cf60u: goto label_49cf60;
        case 0x49cf64u: goto label_49cf64;
        case 0x49cf68u: goto label_49cf68;
        case 0x49cf6cu: goto label_49cf6c;
        case 0x49cf70u: goto label_49cf70;
        case 0x49cf74u: goto label_49cf74;
        case 0x49cf78u: goto label_49cf78;
        case 0x49cf7cu: goto label_49cf7c;
        case 0x49cf80u: goto label_49cf80;
        case 0x49cf84u: goto label_49cf84;
        case 0x49cf88u: goto label_49cf88;
        case 0x49cf8cu: goto label_49cf8c;
        case 0x49cf90u: goto label_49cf90;
        case 0x49cf94u: goto label_49cf94;
        case 0x49cf98u: goto label_49cf98;
        case 0x49cf9cu: goto label_49cf9c;
        case 0x49cfa0u: goto label_49cfa0;
        case 0x49cfa4u: goto label_49cfa4;
        case 0x49cfa8u: goto label_49cfa8;
        case 0x49cfacu: goto label_49cfac;
        case 0x49cfb0u: goto label_49cfb0;
        case 0x49cfb4u: goto label_49cfb4;
        case 0x49cfb8u: goto label_49cfb8;
        case 0x49cfbcu: goto label_49cfbc;
        case 0x49cfc0u: goto label_49cfc0;
        case 0x49cfc4u: goto label_49cfc4;
        case 0x49cfc8u: goto label_49cfc8;
        case 0x49cfccu: goto label_49cfcc;
        case 0x49cfd0u: goto label_49cfd0;
        case 0x49cfd4u: goto label_49cfd4;
        case 0x49cfd8u: goto label_49cfd8;
        case 0x49cfdcu: goto label_49cfdc;
        case 0x49cfe0u: goto label_49cfe0;
        case 0x49cfe4u: goto label_49cfe4;
        case 0x49cfe8u: goto label_49cfe8;
        case 0x49cfecu: goto label_49cfec;
        case 0x49cff0u: goto label_49cff0;
        case 0x49cff4u: goto label_49cff4;
        case 0x49cff8u: goto label_49cff8;
        case 0x49cffcu: goto label_49cffc;
        case 0x49d000u: goto label_49d000;
        case 0x49d004u: goto label_49d004;
        case 0x49d008u: goto label_49d008;
        case 0x49d00cu: goto label_49d00c;
        case 0x49d010u: goto label_49d010;
        case 0x49d014u: goto label_49d014;
        case 0x49d018u: goto label_49d018;
        case 0x49d01cu: goto label_49d01c;
        case 0x49d020u: goto label_49d020;
        case 0x49d024u: goto label_49d024;
        case 0x49d028u: goto label_49d028;
        case 0x49d02cu: goto label_49d02c;
        case 0x49d030u: goto label_49d030;
        case 0x49d034u: goto label_49d034;
        case 0x49d038u: goto label_49d038;
        case 0x49d03cu: goto label_49d03c;
        case 0x49d040u: goto label_49d040;
        case 0x49d044u: goto label_49d044;
        case 0x49d048u: goto label_49d048;
        case 0x49d04cu: goto label_49d04c;
        case 0x49d050u: goto label_49d050;
        case 0x49d054u: goto label_49d054;
        case 0x49d058u: goto label_49d058;
        case 0x49d05cu: goto label_49d05c;
        case 0x49d060u: goto label_49d060;
        case 0x49d064u: goto label_49d064;
        case 0x49d068u: goto label_49d068;
        case 0x49d06cu: goto label_49d06c;
        case 0x49d070u: goto label_49d070;
        case 0x49d074u: goto label_49d074;
        case 0x49d078u: goto label_49d078;
        case 0x49d07cu: goto label_49d07c;
        case 0x49d080u: goto label_49d080;
        case 0x49d084u: goto label_49d084;
        case 0x49d088u: goto label_49d088;
        case 0x49d08cu: goto label_49d08c;
        case 0x49d090u: goto label_49d090;
        case 0x49d094u: goto label_49d094;
        case 0x49d098u: goto label_49d098;
        case 0x49d09cu: goto label_49d09c;
        case 0x49d0a0u: goto label_49d0a0;
        case 0x49d0a4u: goto label_49d0a4;
        case 0x49d0a8u: goto label_49d0a8;
        case 0x49d0acu: goto label_49d0ac;
        case 0x49d0b0u: goto label_49d0b0;
        case 0x49d0b4u: goto label_49d0b4;
        case 0x49d0b8u: goto label_49d0b8;
        case 0x49d0bcu: goto label_49d0bc;
        case 0x49d0c0u: goto label_49d0c0;
        case 0x49d0c4u: goto label_49d0c4;
        case 0x49d0c8u: goto label_49d0c8;
        case 0x49d0ccu: goto label_49d0cc;
        case 0x49d0d0u: goto label_49d0d0;
        case 0x49d0d4u: goto label_49d0d4;
        case 0x49d0d8u: goto label_49d0d8;
        case 0x49d0dcu: goto label_49d0dc;
        case 0x49d0e0u: goto label_49d0e0;
        case 0x49d0e4u: goto label_49d0e4;
        case 0x49d0e8u: goto label_49d0e8;
        case 0x49d0ecu: goto label_49d0ec;
        case 0x49d0f0u: goto label_49d0f0;
        case 0x49d0f4u: goto label_49d0f4;
        case 0x49d0f8u: goto label_49d0f8;
        case 0x49d0fcu: goto label_49d0fc;
        case 0x49d100u: goto label_49d100;
        case 0x49d104u: goto label_49d104;
        case 0x49d108u: goto label_49d108;
        case 0x49d10cu: goto label_49d10c;
        case 0x49d110u: goto label_49d110;
        case 0x49d114u: goto label_49d114;
        case 0x49d118u: goto label_49d118;
        case 0x49d11cu: goto label_49d11c;
        case 0x49d120u: goto label_49d120;
        case 0x49d124u: goto label_49d124;
        case 0x49d128u: goto label_49d128;
        case 0x49d12cu: goto label_49d12c;
        case 0x49d130u: goto label_49d130;
        case 0x49d134u: goto label_49d134;
        case 0x49d138u: goto label_49d138;
        case 0x49d13cu: goto label_49d13c;
        case 0x49d140u: goto label_49d140;
        case 0x49d144u: goto label_49d144;
        case 0x49d148u: goto label_49d148;
        case 0x49d14cu: goto label_49d14c;
        case 0x49d150u: goto label_49d150;
        case 0x49d154u: goto label_49d154;
        case 0x49d158u: goto label_49d158;
        case 0x49d15cu: goto label_49d15c;
        case 0x49d160u: goto label_49d160;
        case 0x49d164u: goto label_49d164;
        case 0x49d168u: goto label_49d168;
        case 0x49d16cu: goto label_49d16c;
        case 0x49d170u: goto label_49d170;
        case 0x49d174u: goto label_49d174;
        case 0x49d178u: goto label_49d178;
        case 0x49d17cu: goto label_49d17c;
        case 0x49d180u: goto label_49d180;
        case 0x49d184u: goto label_49d184;
        case 0x49d188u: goto label_49d188;
        case 0x49d18cu: goto label_49d18c;
        case 0x49d190u: goto label_49d190;
        case 0x49d194u: goto label_49d194;
        case 0x49d198u: goto label_49d198;
        case 0x49d19cu: goto label_49d19c;
        case 0x49d1a0u: goto label_49d1a0;
        case 0x49d1a4u: goto label_49d1a4;
        case 0x49d1a8u: goto label_49d1a8;
        case 0x49d1acu: goto label_49d1ac;
        case 0x49d1b0u: goto label_49d1b0;
        case 0x49d1b4u: goto label_49d1b4;
        case 0x49d1b8u: goto label_49d1b8;
        case 0x49d1bcu: goto label_49d1bc;
        case 0x49d1c0u: goto label_49d1c0;
        case 0x49d1c4u: goto label_49d1c4;
        case 0x49d1c8u: goto label_49d1c8;
        case 0x49d1ccu: goto label_49d1cc;
        case 0x49d1d0u: goto label_49d1d0;
        case 0x49d1d4u: goto label_49d1d4;
        case 0x49d1d8u: goto label_49d1d8;
        case 0x49d1dcu: goto label_49d1dc;
        case 0x49d1e0u: goto label_49d1e0;
        case 0x49d1e4u: goto label_49d1e4;
        case 0x49d1e8u: goto label_49d1e8;
        case 0x49d1ecu: goto label_49d1ec;
        case 0x49d1f0u: goto label_49d1f0;
        case 0x49d1f4u: goto label_49d1f4;
        case 0x49d1f8u: goto label_49d1f8;
        case 0x49d1fcu: goto label_49d1fc;
        case 0x49d200u: goto label_49d200;
        case 0x49d204u: goto label_49d204;
        case 0x49d208u: goto label_49d208;
        case 0x49d20cu: goto label_49d20c;
        case 0x49d210u: goto label_49d210;
        case 0x49d214u: goto label_49d214;
        case 0x49d218u: goto label_49d218;
        case 0x49d21cu: goto label_49d21c;
        case 0x49d220u: goto label_49d220;
        case 0x49d224u: goto label_49d224;
        case 0x49d228u: goto label_49d228;
        case 0x49d22cu: goto label_49d22c;
        case 0x49d230u: goto label_49d230;
        case 0x49d234u: goto label_49d234;
        case 0x49d238u: goto label_49d238;
        case 0x49d23cu: goto label_49d23c;
        case 0x49d240u: goto label_49d240;
        case 0x49d244u: goto label_49d244;
        case 0x49d248u: goto label_49d248;
        case 0x49d24cu: goto label_49d24c;
        case 0x49d250u: goto label_49d250;
        case 0x49d254u: goto label_49d254;
        case 0x49d258u: goto label_49d258;
        case 0x49d25cu: goto label_49d25c;
        case 0x49d260u: goto label_49d260;
        case 0x49d264u: goto label_49d264;
        case 0x49d268u: goto label_49d268;
        case 0x49d26cu: goto label_49d26c;
        case 0x49d270u: goto label_49d270;
        case 0x49d274u: goto label_49d274;
        case 0x49d278u: goto label_49d278;
        case 0x49d27cu: goto label_49d27c;
        case 0x49d280u: goto label_49d280;
        case 0x49d284u: goto label_49d284;
        case 0x49d288u: goto label_49d288;
        case 0x49d28cu: goto label_49d28c;
        case 0x49d290u: goto label_49d290;
        case 0x49d294u: goto label_49d294;
        case 0x49d298u: goto label_49d298;
        case 0x49d29cu: goto label_49d29c;
        case 0x49d2a0u: goto label_49d2a0;
        case 0x49d2a4u: goto label_49d2a4;
        case 0x49d2a8u: goto label_49d2a8;
        case 0x49d2acu: goto label_49d2ac;
        case 0x49d2b0u: goto label_49d2b0;
        case 0x49d2b4u: goto label_49d2b4;
        case 0x49d2b8u: goto label_49d2b8;
        case 0x49d2bcu: goto label_49d2bc;
        case 0x49d2c0u: goto label_49d2c0;
        case 0x49d2c4u: goto label_49d2c4;
        case 0x49d2c8u: goto label_49d2c8;
        case 0x49d2ccu: goto label_49d2cc;
        case 0x49d2d0u: goto label_49d2d0;
        case 0x49d2d4u: goto label_49d2d4;
        case 0x49d2d8u: goto label_49d2d8;
        case 0x49d2dcu: goto label_49d2dc;
        case 0x49d2e0u: goto label_49d2e0;
        case 0x49d2e4u: goto label_49d2e4;
        case 0x49d2e8u: goto label_49d2e8;
        case 0x49d2ecu: goto label_49d2ec;
        case 0x49d2f0u: goto label_49d2f0;
        case 0x49d2f4u: goto label_49d2f4;
        case 0x49d2f8u: goto label_49d2f8;
        case 0x49d2fcu: goto label_49d2fc;
        case 0x49d300u: goto label_49d300;
        case 0x49d304u: goto label_49d304;
        case 0x49d308u: goto label_49d308;
        case 0x49d30cu: goto label_49d30c;
        case 0x49d310u: goto label_49d310;
        case 0x49d314u: goto label_49d314;
        case 0x49d318u: goto label_49d318;
        case 0x49d31cu: goto label_49d31c;
        case 0x49d320u: goto label_49d320;
        case 0x49d324u: goto label_49d324;
        case 0x49d328u: goto label_49d328;
        case 0x49d32cu: goto label_49d32c;
        case 0x49d330u: goto label_49d330;
        case 0x49d334u: goto label_49d334;
        case 0x49d338u: goto label_49d338;
        case 0x49d33cu: goto label_49d33c;
        case 0x49d340u: goto label_49d340;
        case 0x49d344u: goto label_49d344;
        case 0x49d348u: goto label_49d348;
        case 0x49d34cu: goto label_49d34c;
        case 0x49d350u: goto label_49d350;
        case 0x49d354u: goto label_49d354;
        case 0x49d358u: goto label_49d358;
        case 0x49d35cu: goto label_49d35c;
        case 0x49d360u: goto label_49d360;
        case 0x49d364u: goto label_49d364;
        case 0x49d368u: goto label_49d368;
        case 0x49d36cu: goto label_49d36c;
        case 0x49d370u: goto label_49d370;
        case 0x49d374u: goto label_49d374;
        case 0x49d378u: goto label_49d378;
        case 0x49d37cu: goto label_49d37c;
        case 0x49d380u: goto label_49d380;
        case 0x49d384u: goto label_49d384;
        case 0x49d388u: goto label_49d388;
        case 0x49d38cu: goto label_49d38c;
        case 0x49d390u: goto label_49d390;
        case 0x49d394u: goto label_49d394;
        case 0x49d398u: goto label_49d398;
        case 0x49d39cu: goto label_49d39c;
        case 0x49d3a0u: goto label_49d3a0;
        case 0x49d3a4u: goto label_49d3a4;
        case 0x49d3a8u: goto label_49d3a8;
        case 0x49d3acu: goto label_49d3ac;
        case 0x49d3b0u: goto label_49d3b0;
        case 0x49d3b4u: goto label_49d3b4;
        case 0x49d3b8u: goto label_49d3b8;
        case 0x49d3bcu: goto label_49d3bc;
        case 0x49d3c0u: goto label_49d3c0;
        case 0x49d3c4u: goto label_49d3c4;
        case 0x49d3c8u: goto label_49d3c8;
        case 0x49d3ccu: goto label_49d3cc;
        case 0x49d3d0u: goto label_49d3d0;
        case 0x49d3d4u: goto label_49d3d4;
        case 0x49d3d8u: goto label_49d3d8;
        case 0x49d3dcu: goto label_49d3dc;
        case 0x49d3e0u: goto label_49d3e0;
        case 0x49d3e4u: goto label_49d3e4;
        case 0x49d3e8u: goto label_49d3e8;
        case 0x49d3ecu: goto label_49d3ec;
        case 0x49d3f0u: goto label_49d3f0;
        case 0x49d3f4u: goto label_49d3f4;
        case 0x49d3f8u: goto label_49d3f8;
        case 0x49d3fcu: goto label_49d3fc;
        case 0x49d400u: goto label_49d400;
        case 0x49d404u: goto label_49d404;
        case 0x49d408u: goto label_49d408;
        case 0x49d40cu: goto label_49d40c;
        case 0x49d410u: goto label_49d410;
        case 0x49d414u: goto label_49d414;
        case 0x49d418u: goto label_49d418;
        case 0x49d41cu: goto label_49d41c;
        case 0x49d420u: goto label_49d420;
        case 0x49d424u: goto label_49d424;
        case 0x49d428u: goto label_49d428;
        case 0x49d42cu: goto label_49d42c;
        case 0x49d430u: goto label_49d430;
        case 0x49d434u: goto label_49d434;
        case 0x49d438u: goto label_49d438;
        case 0x49d43cu: goto label_49d43c;
        case 0x49d440u: goto label_49d440;
        case 0x49d444u: goto label_49d444;
        case 0x49d448u: goto label_49d448;
        case 0x49d44cu: goto label_49d44c;
        case 0x49d450u: goto label_49d450;
        case 0x49d454u: goto label_49d454;
        case 0x49d458u: goto label_49d458;
        case 0x49d45cu: goto label_49d45c;
        case 0x49d460u: goto label_49d460;
        case 0x49d464u: goto label_49d464;
        case 0x49d468u: goto label_49d468;
        case 0x49d46cu: goto label_49d46c;
        case 0x49d470u: goto label_49d470;
        case 0x49d474u: goto label_49d474;
        case 0x49d478u: goto label_49d478;
        case 0x49d47cu: goto label_49d47c;
        case 0x49d480u: goto label_49d480;
        case 0x49d484u: goto label_49d484;
        case 0x49d488u: goto label_49d488;
        case 0x49d48cu: goto label_49d48c;
        case 0x49d490u: goto label_49d490;
        case 0x49d494u: goto label_49d494;
        case 0x49d498u: goto label_49d498;
        case 0x49d49cu: goto label_49d49c;
        case 0x49d4a0u: goto label_49d4a0;
        case 0x49d4a4u: goto label_49d4a4;
        case 0x49d4a8u: goto label_49d4a8;
        case 0x49d4acu: goto label_49d4ac;
        case 0x49d4b0u: goto label_49d4b0;
        case 0x49d4b4u: goto label_49d4b4;
        case 0x49d4b8u: goto label_49d4b8;
        case 0x49d4bcu: goto label_49d4bc;
        case 0x49d4c0u: goto label_49d4c0;
        case 0x49d4c4u: goto label_49d4c4;
        case 0x49d4c8u: goto label_49d4c8;
        case 0x49d4ccu: goto label_49d4cc;
        case 0x49d4d0u: goto label_49d4d0;
        case 0x49d4d4u: goto label_49d4d4;
        case 0x49d4d8u: goto label_49d4d8;
        case 0x49d4dcu: goto label_49d4dc;
        case 0x49d4e0u: goto label_49d4e0;
        case 0x49d4e4u: goto label_49d4e4;
        case 0x49d4e8u: goto label_49d4e8;
        case 0x49d4ecu: goto label_49d4ec;
        case 0x49d4f0u: goto label_49d4f0;
        case 0x49d4f4u: goto label_49d4f4;
        case 0x49d4f8u: goto label_49d4f8;
        case 0x49d4fcu: goto label_49d4fc;
        case 0x49d500u: goto label_49d500;
        case 0x49d504u: goto label_49d504;
        case 0x49d508u: goto label_49d508;
        case 0x49d50cu: goto label_49d50c;
        case 0x49d510u: goto label_49d510;
        case 0x49d514u: goto label_49d514;
        case 0x49d518u: goto label_49d518;
        case 0x49d51cu: goto label_49d51c;
        case 0x49d520u: goto label_49d520;
        case 0x49d524u: goto label_49d524;
        case 0x49d528u: goto label_49d528;
        case 0x49d52cu: goto label_49d52c;
        case 0x49d530u: goto label_49d530;
        case 0x49d534u: goto label_49d534;
        case 0x49d538u: goto label_49d538;
        case 0x49d53cu: goto label_49d53c;
        case 0x49d540u: goto label_49d540;
        case 0x49d544u: goto label_49d544;
        case 0x49d548u: goto label_49d548;
        case 0x49d54cu: goto label_49d54c;
        case 0x49d550u: goto label_49d550;
        case 0x49d554u: goto label_49d554;
        case 0x49d558u: goto label_49d558;
        case 0x49d55cu: goto label_49d55c;
        case 0x49d560u: goto label_49d560;
        case 0x49d564u: goto label_49d564;
        case 0x49d568u: goto label_49d568;
        case 0x49d56cu: goto label_49d56c;
        case 0x49d570u: goto label_49d570;
        case 0x49d574u: goto label_49d574;
        case 0x49d578u: goto label_49d578;
        case 0x49d57cu: goto label_49d57c;
        case 0x49d580u: goto label_49d580;
        case 0x49d584u: goto label_49d584;
        case 0x49d588u: goto label_49d588;
        case 0x49d58cu: goto label_49d58c;
        case 0x49d590u: goto label_49d590;
        case 0x49d594u: goto label_49d594;
        case 0x49d598u: goto label_49d598;
        case 0x49d59cu: goto label_49d59c;
        case 0x49d5a0u: goto label_49d5a0;
        case 0x49d5a4u: goto label_49d5a4;
        case 0x49d5a8u: goto label_49d5a8;
        case 0x49d5acu: goto label_49d5ac;
        case 0x49d5b0u: goto label_49d5b0;
        case 0x49d5b4u: goto label_49d5b4;
        case 0x49d5b8u: goto label_49d5b8;
        case 0x49d5bcu: goto label_49d5bc;
        case 0x49d5c0u: goto label_49d5c0;
        case 0x49d5c4u: goto label_49d5c4;
        case 0x49d5c8u: goto label_49d5c8;
        case 0x49d5ccu: goto label_49d5cc;
        case 0x49d5d0u: goto label_49d5d0;
        case 0x49d5d4u: goto label_49d5d4;
        case 0x49d5d8u: goto label_49d5d8;
        case 0x49d5dcu: goto label_49d5dc;
        case 0x49d5e0u: goto label_49d5e0;
        case 0x49d5e4u: goto label_49d5e4;
        case 0x49d5e8u: goto label_49d5e8;
        case 0x49d5ecu: goto label_49d5ec;
        case 0x49d5f0u: goto label_49d5f0;
        case 0x49d5f4u: goto label_49d5f4;
        case 0x49d5f8u: goto label_49d5f8;
        case 0x49d5fcu: goto label_49d5fc;
        case 0x49d600u: goto label_49d600;
        case 0x49d604u: goto label_49d604;
        case 0x49d608u: goto label_49d608;
        case 0x49d60cu: goto label_49d60c;
        case 0x49d610u: goto label_49d610;
        case 0x49d614u: goto label_49d614;
        case 0x49d618u: goto label_49d618;
        case 0x49d61cu: goto label_49d61c;
        case 0x49d620u: goto label_49d620;
        case 0x49d624u: goto label_49d624;
        case 0x49d628u: goto label_49d628;
        case 0x49d62cu: goto label_49d62c;
        case 0x49d630u: goto label_49d630;
        case 0x49d634u: goto label_49d634;
        case 0x49d638u: goto label_49d638;
        case 0x49d63cu: goto label_49d63c;
        case 0x49d640u: goto label_49d640;
        case 0x49d644u: goto label_49d644;
        case 0x49d648u: goto label_49d648;
        case 0x49d64cu: goto label_49d64c;
        case 0x49d650u: goto label_49d650;
        case 0x49d654u: goto label_49d654;
        case 0x49d658u: goto label_49d658;
        case 0x49d65cu: goto label_49d65c;
        case 0x49d660u: goto label_49d660;
        case 0x49d664u: goto label_49d664;
        case 0x49d668u: goto label_49d668;
        case 0x49d66cu: goto label_49d66c;
        case 0x49d670u: goto label_49d670;
        case 0x49d674u: goto label_49d674;
        case 0x49d678u: goto label_49d678;
        case 0x49d67cu: goto label_49d67c;
        case 0x49d680u: goto label_49d680;
        case 0x49d684u: goto label_49d684;
        case 0x49d688u: goto label_49d688;
        case 0x49d68cu: goto label_49d68c;
        case 0x49d690u: goto label_49d690;
        case 0x49d694u: goto label_49d694;
        case 0x49d698u: goto label_49d698;
        case 0x49d69cu: goto label_49d69c;
        case 0x49d6a0u: goto label_49d6a0;
        case 0x49d6a4u: goto label_49d6a4;
        case 0x49d6a8u: goto label_49d6a8;
        case 0x49d6acu: goto label_49d6ac;
        case 0x49d6b0u: goto label_49d6b0;
        case 0x49d6b4u: goto label_49d6b4;
        case 0x49d6b8u: goto label_49d6b8;
        case 0x49d6bcu: goto label_49d6bc;
        case 0x49d6c0u: goto label_49d6c0;
        case 0x49d6c4u: goto label_49d6c4;
        case 0x49d6c8u: goto label_49d6c8;
        case 0x49d6ccu: goto label_49d6cc;
        case 0x49d6d0u: goto label_49d6d0;
        case 0x49d6d4u: goto label_49d6d4;
        case 0x49d6d8u: goto label_49d6d8;
        case 0x49d6dcu: goto label_49d6dc;
        case 0x49d6e0u: goto label_49d6e0;
        case 0x49d6e4u: goto label_49d6e4;
        case 0x49d6e8u: goto label_49d6e8;
        case 0x49d6ecu: goto label_49d6ec;
        case 0x49d6f0u: goto label_49d6f0;
        case 0x49d6f4u: goto label_49d6f4;
        case 0x49d6f8u: goto label_49d6f8;
        case 0x49d6fcu: goto label_49d6fc;
        case 0x49d700u: goto label_49d700;
        case 0x49d704u: goto label_49d704;
        case 0x49d708u: goto label_49d708;
        case 0x49d70cu: goto label_49d70c;
        case 0x49d710u: goto label_49d710;
        case 0x49d714u: goto label_49d714;
        case 0x49d718u: goto label_49d718;
        case 0x49d71cu: goto label_49d71c;
        case 0x49d720u: goto label_49d720;
        case 0x49d724u: goto label_49d724;
        case 0x49d728u: goto label_49d728;
        case 0x49d72cu: goto label_49d72c;
        case 0x49d730u: goto label_49d730;
        case 0x49d734u: goto label_49d734;
        case 0x49d738u: goto label_49d738;
        case 0x49d73cu: goto label_49d73c;
        case 0x49d740u: goto label_49d740;
        case 0x49d744u: goto label_49d744;
        case 0x49d748u: goto label_49d748;
        case 0x49d74cu: goto label_49d74c;
        case 0x49d750u: goto label_49d750;
        case 0x49d754u: goto label_49d754;
        case 0x49d758u: goto label_49d758;
        case 0x49d75cu: goto label_49d75c;
        case 0x49d760u: goto label_49d760;
        case 0x49d764u: goto label_49d764;
        case 0x49d768u: goto label_49d768;
        case 0x49d76cu: goto label_49d76c;
        case 0x49d770u: goto label_49d770;
        case 0x49d774u: goto label_49d774;
        case 0x49d778u: goto label_49d778;
        case 0x49d77cu: goto label_49d77c;
        case 0x49d780u: goto label_49d780;
        case 0x49d784u: goto label_49d784;
        case 0x49d788u: goto label_49d788;
        case 0x49d78cu: goto label_49d78c;
        case 0x49d790u: goto label_49d790;
        case 0x49d794u: goto label_49d794;
        case 0x49d798u: goto label_49d798;
        case 0x49d79cu: goto label_49d79c;
        case 0x49d7a0u: goto label_49d7a0;
        case 0x49d7a4u: goto label_49d7a4;
        case 0x49d7a8u: goto label_49d7a8;
        case 0x49d7acu: goto label_49d7ac;
        case 0x49d7b0u: goto label_49d7b0;
        case 0x49d7b4u: goto label_49d7b4;
        case 0x49d7b8u: goto label_49d7b8;
        case 0x49d7bcu: goto label_49d7bc;
        case 0x49d7c0u: goto label_49d7c0;
        case 0x49d7c4u: goto label_49d7c4;
        case 0x49d7c8u: goto label_49d7c8;
        case 0x49d7ccu: goto label_49d7cc;
        case 0x49d7d0u: goto label_49d7d0;
        case 0x49d7d4u: goto label_49d7d4;
        case 0x49d7d8u: goto label_49d7d8;
        case 0x49d7dcu: goto label_49d7dc;
        case 0x49d7e0u: goto label_49d7e0;
        case 0x49d7e4u: goto label_49d7e4;
        case 0x49d7e8u: goto label_49d7e8;
        case 0x49d7ecu: goto label_49d7ec;
        case 0x49d7f0u: goto label_49d7f0;
        case 0x49d7f4u: goto label_49d7f4;
        case 0x49d7f8u: goto label_49d7f8;
        case 0x49d7fcu: goto label_49d7fc;
        case 0x49d800u: goto label_49d800;
        case 0x49d804u: goto label_49d804;
        case 0x49d808u: goto label_49d808;
        case 0x49d80cu: goto label_49d80c;
        case 0x49d810u: goto label_49d810;
        case 0x49d814u: goto label_49d814;
        case 0x49d818u: goto label_49d818;
        case 0x49d81cu: goto label_49d81c;
        case 0x49d820u: goto label_49d820;
        case 0x49d824u: goto label_49d824;
        case 0x49d828u: goto label_49d828;
        case 0x49d82cu: goto label_49d82c;
        case 0x49d830u: goto label_49d830;
        case 0x49d834u: goto label_49d834;
        case 0x49d838u: goto label_49d838;
        case 0x49d83cu: goto label_49d83c;
        case 0x49d840u: goto label_49d840;
        case 0x49d844u: goto label_49d844;
        case 0x49d848u: goto label_49d848;
        case 0x49d84cu: goto label_49d84c;
        case 0x49d850u: goto label_49d850;
        case 0x49d854u: goto label_49d854;
        case 0x49d858u: goto label_49d858;
        case 0x49d85cu: goto label_49d85c;
        case 0x49d860u: goto label_49d860;
        case 0x49d864u: goto label_49d864;
        case 0x49d868u: goto label_49d868;
        case 0x49d86cu: goto label_49d86c;
        case 0x49d870u: goto label_49d870;
        case 0x49d874u: goto label_49d874;
        case 0x49d878u: goto label_49d878;
        case 0x49d87cu: goto label_49d87c;
        case 0x49d880u: goto label_49d880;
        case 0x49d884u: goto label_49d884;
        case 0x49d888u: goto label_49d888;
        case 0x49d88cu: goto label_49d88c;
        case 0x49d890u: goto label_49d890;
        case 0x49d894u: goto label_49d894;
        case 0x49d898u: goto label_49d898;
        case 0x49d89cu: goto label_49d89c;
        case 0x49d8a0u: goto label_49d8a0;
        case 0x49d8a4u: goto label_49d8a4;
        case 0x49d8a8u: goto label_49d8a8;
        case 0x49d8acu: goto label_49d8ac;
        case 0x49d8b0u: goto label_49d8b0;
        case 0x49d8b4u: goto label_49d8b4;
        case 0x49d8b8u: goto label_49d8b8;
        case 0x49d8bcu: goto label_49d8bc;
        case 0x49d8c0u: goto label_49d8c0;
        case 0x49d8c4u: goto label_49d8c4;
        case 0x49d8c8u: goto label_49d8c8;
        case 0x49d8ccu: goto label_49d8cc;
        case 0x49d8d0u: goto label_49d8d0;
        case 0x49d8d4u: goto label_49d8d4;
        case 0x49d8d8u: goto label_49d8d8;
        case 0x49d8dcu: goto label_49d8dc;
        case 0x49d8e0u: goto label_49d8e0;
        case 0x49d8e4u: goto label_49d8e4;
        case 0x49d8e8u: goto label_49d8e8;
        case 0x49d8ecu: goto label_49d8ec;
        case 0x49d8f0u: goto label_49d8f0;
        case 0x49d8f4u: goto label_49d8f4;
        case 0x49d8f8u: goto label_49d8f8;
        case 0x49d8fcu: goto label_49d8fc;
        case 0x49d900u: goto label_49d900;
        case 0x49d904u: goto label_49d904;
        case 0x49d908u: goto label_49d908;
        case 0x49d90cu: goto label_49d90c;
        case 0x49d910u: goto label_49d910;
        case 0x49d914u: goto label_49d914;
        case 0x49d918u: goto label_49d918;
        case 0x49d91cu: goto label_49d91c;
        case 0x49d920u: goto label_49d920;
        case 0x49d924u: goto label_49d924;
        case 0x49d928u: goto label_49d928;
        case 0x49d92cu: goto label_49d92c;
        case 0x49d930u: goto label_49d930;
        case 0x49d934u: goto label_49d934;
        case 0x49d938u: goto label_49d938;
        case 0x49d93cu: goto label_49d93c;
        case 0x49d940u: goto label_49d940;
        case 0x49d944u: goto label_49d944;
        case 0x49d948u: goto label_49d948;
        case 0x49d94cu: goto label_49d94c;
        case 0x49d950u: goto label_49d950;
        case 0x49d954u: goto label_49d954;
        case 0x49d958u: goto label_49d958;
        case 0x49d95cu: goto label_49d95c;
        case 0x49d960u: goto label_49d960;
        case 0x49d964u: goto label_49d964;
        case 0x49d968u: goto label_49d968;
        case 0x49d96cu: goto label_49d96c;
        case 0x49d970u: goto label_49d970;
        case 0x49d974u: goto label_49d974;
        case 0x49d978u: goto label_49d978;
        case 0x49d97cu: goto label_49d97c;
        case 0x49d980u: goto label_49d980;
        case 0x49d984u: goto label_49d984;
        case 0x49d988u: goto label_49d988;
        case 0x49d98cu: goto label_49d98c;
        case 0x49d990u: goto label_49d990;
        case 0x49d994u: goto label_49d994;
        case 0x49d998u: goto label_49d998;
        case 0x49d99cu: goto label_49d99c;
        case 0x49d9a0u: goto label_49d9a0;
        case 0x49d9a4u: goto label_49d9a4;
        case 0x49d9a8u: goto label_49d9a8;
        case 0x49d9acu: goto label_49d9ac;
        case 0x49d9b0u: goto label_49d9b0;
        case 0x49d9b4u: goto label_49d9b4;
        case 0x49d9b8u: goto label_49d9b8;
        case 0x49d9bcu: goto label_49d9bc;
        case 0x49d9c0u: goto label_49d9c0;
        case 0x49d9c4u: goto label_49d9c4;
        case 0x49d9c8u: goto label_49d9c8;
        case 0x49d9ccu: goto label_49d9cc;
        case 0x49d9d0u: goto label_49d9d0;
        case 0x49d9d4u: goto label_49d9d4;
        case 0x49d9d8u: goto label_49d9d8;
        case 0x49d9dcu: goto label_49d9dc;
        case 0x49d9e0u: goto label_49d9e0;
        case 0x49d9e4u: goto label_49d9e4;
        case 0x49d9e8u: goto label_49d9e8;
        case 0x49d9ecu: goto label_49d9ec;
        case 0x49d9f0u: goto label_49d9f0;
        case 0x49d9f4u: goto label_49d9f4;
        case 0x49d9f8u: goto label_49d9f8;
        case 0x49d9fcu: goto label_49d9fc;
        case 0x49da00u: goto label_49da00;
        case 0x49da04u: goto label_49da04;
        case 0x49da08u: goto label_49da08;
        case 0x49da0cu: goto label_49da0c;
        case 0x49da10u: goto label_49da10;
        case 0x49da14u: goto label_49da14;
        case 0x49da18u: goto label_49da18;
        case 0x49da1cu: goto label_49da1c;
        case 0x49da20u: goto label_49da20;
        case 0x49da24u: goto label_49da24;
        case 0x49da28u: goto label_49da28;
        case 0x49da2cu: goto label_49da2c;
        case 0x49da30u: goto label_49da30;
        case 0x49da34u: goto label_49da34;
        case 0x49da38u: goto label_49da38;
        case 0x49da3cu: goto label_49da3c;
        case 0x49da40u: goto label_49da40;
        case 0x49da44u: goto label_49da44;
        case 0x49da48u: goto label_49da48;
        case 0x49da4cu: goto label_49da4c;
        default: break;
    }

    ctx->pc = 0x49c9f0u;

label_49c9f0:
    // 0x49c9f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x49c9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_49c9f4:
    // 0x49c9f4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x49c9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49c9f8:
    // 0x49c9f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x49c9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_49c9fc:
    // 0x49c9fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49c9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49ca00:
    // 0x49ca00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49ca00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49ca04:
    // 0x49ca04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49ca04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49ca08:
    // 0x49ca08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49ca08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49ca0c:
    // 0x49ca0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49ca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49ca10:
    // 0x49ca10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x49ca10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49ca14:
    // 0x49ca14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x49ca14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_49ca18:
    // 0x49ca18: 0xc10ca68  jal         func_4329A0
label_49ca1c:
    if (ctx->pc == 0x49CA1Cu) {
        ctx->pc = 0x49CA1Cu;
            // 0x49ca1c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x49CA20u;
        goto label_49ca20;
    }
    ctx->pc = 0x49CA18u;
    SET_GPR_U32(ctx, 31, 0x49CA20u);
    ctx->pc = 0x49CA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CA18u;
            // 0x49ca1c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CA20u; }
        if (ctx->pc != 0x49CA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CA20u; }
        if (ctx->pc != 0x49CA20u) { return; }
    }
    ctx->pc = 0x49CA20u;
label_49ca20:
    // 0x49ca20: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x49ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_49ca24:
    // 0x49ca24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49ca28:
    // 0x49ca28: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x49ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_49ca2c:
    // 0x49ca2c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x49ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_49ca30:
    // 0x49ca30: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x49ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_49ca34:
    // 0x49ca34: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x49ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_49ca38:
    // 0x49ca38: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x49ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_49ca3c:
    // 0x49ca3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x49ca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_49ca40:
    // 0x49ca40: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x49ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_49ca44:
    // 0x49ca44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_49ca48:
    // 0x49ca48: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x49ca48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_49ca4c:
    // 0x49ca4c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x49ca4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_49ca50:
    // 0x49ca50: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x49ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_49ca54:
    // 0x49ca54: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x49ca54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_49ca58:
    // 0x49ca58: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x49ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_49ca5c:
    // 0x49ca5c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x49ca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_49ca60:
    // 0x49ca60: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x49ca60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_49ca64:
    // 0x49ca64: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x49ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_49ca68:
    // 0x49ca68: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x49ca68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_49ca6c:
    // 0x49ca6c: 0xc0582cc  jal         func_160B30
label_49ca70:
    if (ctx->pc == 0x49CA70u) {
        ctx->pc = 0x49CA70u;
            // 0x49ca70: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x49CA74u;
        goto label_49ca74;
    }
    ctx->pc = 0x49CA6Cu;
    SET_GPR_U32(ctx, 31, 0x49CA74u);
    ctx->pc = 0x49CA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CA6Cu;
            // 0x49ca70: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CA74u; }
        if (ctx->pc != 0x49CA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CA74u; }
        if (ctx->pc != 0x49CA74u) { return; }
    }
    ctx->pc = 0x49CA74u;
label_49ca74:
    // 0x49ca74: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49ca78:
    // 0x49ca78: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x49ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_49ca7c:
    // 0x49ca7c: 0x2463fdd0  addiu       $v1, $v1, -0x230
    ctx->pc = 0x49ca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966736));
label_49ca80:
    // 0x49ca80: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x49ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_49ca84:
    // 0x49ca84: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x49ca84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_49ca88:
    // 0x49ca88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_49ca8c:
    // 0x49ca8c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49ca90:
    // 0x49ca90: 0xac447c10  sw          $a0, 0x7C10($v0)
    ctx->pc = 0x49ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31760), GPR_U32(ctx, 4));
label_49ca94:
    // 0x49ca94: 0x2463fde0  addiu       $v1, $v1, -0x220
    ctx->pc = 0x49ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966752));
label_49ca98:
    // 0x49ca98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49ca9c:
    // 0x49ca9c: 0x2442fe18  addiu       $v0, $v0, -0x1E8
    ctx->pc = 0x49ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966808));
label_49caa0:
    // 0x49caa0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x49caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_49caa4:
    // 0x49caa4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x49caa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_49caa8:
    // 0x49caa8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x49caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_49caac:
    // 0x49caac: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x49caacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_49cab0:
    // 0x49cab0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x49cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_49cab4:
    // 0x49cab4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x49cab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_49cab8:
    // 0x49cab8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x49cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_49cabc:
    // 0x49cabc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x49cabcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_49cac0:
    // 0x49cac0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x49cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_49cac4:
    // 0x49cac4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x49cac4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_49cac8:
    // 0x49cac8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x49cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_49cacc:
    // 0x49cacc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x49caccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_49cad0:
    // 0x49cad0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x49cad0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_49cad4:
    // 0x49cad4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_49cad8:
    if (ctx->pc == 0x49CAD8u) {
        ctx->pc = 0x49CADCu;
        goto label_49cadc;
    }
    ctx->pc = 0x49CAD4u;
    {
        const bool branch_taken_0x49cad4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49cad4) {
            ctx->pc = 0x49CB68u;
            goto label_49cb68;
        }
    }
    ctx->pc = 0x49CADCu;
label_49cadc:
    // 0x49cadc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x49cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_49cae0:
    // 0x49cae0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x49cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_49cae4:
    // 0x49cae4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x49cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_49cae8:
    // 0x49cae8: 0xc040138  jal         func_1004E0
label_49caec:
    if (ctx->pc == 0x49CAECu) {
        ctx->pc = 0x49CAECu;
            // 0x49caec: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x49CAF0u;
        goto label_49caf0;
    }
    ctx->pc = 0x49CAE8u;
    SET_GPR_U32(ctx, 31, 0x49CAF0u);
    ctx->pc = 0x49CAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CAE8u;
            // 0x49caec: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CAF0u; }
        if (ctx->pc != 0x49CAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CAF0u; }
        if (ctx->pc != 0x49CAF0u) { return; }
    }
    ctx->pc = 0x49CAF0u;
label_49caf0:
    // 0x49caf0: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x49caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
label_49caf4:
    // 0x49caf4: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x49caf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
label_49caf8:
    // 0x49caf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49caf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49cafc:
    // 0x49cafc: 0x24a5cb90  addiu       $a1, $a1, -0x3470
    ctx->pc = 0x49cafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953872));
label_49cb00:
    // 0x49cb00: 0x24c6c200  addiu       $a2, $a2, -0x3E00
    ctx->pc = 0x49cb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951424));
label_49cb04:
    // 0x49cb04: 0x24070180  addiu       $a3, $zero, 0x180
    ctx->pc = 0x49cb04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_49cb08:
    // 0x49cb08: 0xc040840  jal         func_102100
label_49cb0c:
    if (ctx->pc == 0x49CB0Cu) {
        ctx->pc = 0x49CB0Cu;
            // 0x49cb0c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49CB10u;
        goto label_49cb10;
    }
    ctx->pc = 0x49CB08u;
    SET_GPR_U32(ctx, 31, 0x49CB10u);
    ctx->pc = 0x49CB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CB08u;
            // 0x49cb0c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CB10u; }
        if (ctx->pc != 0x49CB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CB10u; }
        if (ctx->pc != 0x49CB10u) { return; }
    }
    ctx->pc = 0x49CB10u;
label_49cb10:
    // 0x49cb10: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x49cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_49cb14:
    // 0x49cb14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x49cb14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49cb18:
    // 0x49cb18: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x49cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_49cb1c:
    // 0x49cb1c: 0xc0788fc  jal         func_1E23F0
label_49cb20:
    if (ctx->pc == 0x49CB20u) {
        ctx->pc = 0x49CB20u;
            // 0x49cb20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49CB24u;
        goto label_49cb24;
    }
    ctx->pc = 0x49CB1Cu;
    SET_GPR_U32(ctx, 31, 0x49CB24u);
    ctx->pc = 0x49CB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CB1Cu;
            // 0x49cb20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CB24u; }
        if (ctx->pc != 0x49CB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CB24u; }
        if (ctx->pc != 0x49CB24u) { return; }
    }
    ctx->pc = 0x49CB24u;
label_49cb24:
    // 0x49cb24: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x49cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_49cb28:
    // 0x49cb28: 0xc0788fc  jal         func_1E23F0
label_49cb2c:
    if (ctx->pc == 0x49CB2Cu) {
        ctx->pc = 0x49CB2Cu;
            // 0x49cb2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49CB30u;
        goto label_49cb30;
    }
    ctx->pc = 0x49CB28u;
    SET_GPR_U32(ctx, 31, 0x49CB30u);
    ctx->pc = 0x49CB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CB28u;
            // 0x49cb2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CB30u; }
        if (ctx->pc != 0x49CB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CB30u; }
        if (ctx->pc != 0x49CB30u) { return; }
    }
    ctx->pc = 0x49CB30u;
label_49cb30:
    // 0x49cb30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49cb30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49cb34:
    // 0x49cb34: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x49cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_49cb38:
    // 0x49cb38: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x49cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_49cb3c:
    // 0x49cb3c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x49cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_49cb40:
    // 0x49cb40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49cb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49cb44:
    // 0x49cb44: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x49cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_49cb48:
    // 0x49cb48: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x49cb48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_49cb4c:
    // 0x49cb4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_49cb50:
    // 0x49cb50: 0xc0a997c  jal         func_2A65F0
label_49cb54:
    if (ctx->pc == 0x49CB54u) {
        ctx->pc = 0x49CB54u;
            // 0x49cb54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x49CB58u;
        goto label_49cb58;
    }
    ctx->pc = 0x49CB50u;
    SET_GPR_U32(ctx, 31, 0x49CB58u);
    ctx->pc = 0x49CB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CB50u;
            // 0x49cb54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CB58u; }
        if (ctx->pc != 0x49CB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CB58u; }
        if (ctx->pc != 0x49CB58u) { return; }
    }
    ctx->pc = 0x49CB58u;
label_49cb58:
    // 0x49cb58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x49cb58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_49cb5c:
    // 0x49cb5c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x49cb5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_49cb60:
    // 0x49cb60: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_49cb64:
    if (ctx->pc == 0x49CB64u) {
        ctx->pc = 0x49CB64u;
            // 0x49cb64: 0x26520180  addiu       $s2, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->pc = 0x49CB68u;
        goto label_49cb68;
    }
    ctx->pc = 0x49CB60u;
    {
        const bool branch_taken_0x49cb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CB60u;
            // 0x49cb64: 0x26520180  addiu       $s2, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cb60) {
            ctx->pc = 0x49CB34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49cb34;
        }
    }
    ctx->pc = 0x49CB68u;
label_49cb68:
    // 0x49cb68: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x49cb68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49cb6c:
    // 0x49cb6c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x49cb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_49cb70:
    // 0x49cb70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49cb70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49cb74:
    // 0x49cb74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49cb74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49cb78:
    // 0x49cb78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49cb78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49cb7c:
    // 0x49cb7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49cb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49cb80:
    // 0x49cb80: 0x3e00008  jr          $ra
label_49cb84:
    if (ctx->pc == 0x49CB84u) {
        ctx->pc = 0x49CB84u;
            // 0x49cb84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x49CB88u;
        goto label_49cb88;
    }
    ctx->pc = 0x49CB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49CB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CB80u;
            // 0x49cb84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49CB88u;
label_49cb88:
    // 0x49cb88: 0x0  nop
    ctx->pc = 0x49cb88u;
    // NOP
label_49cb8c:
    // 0x49cb8c: 0x0  nop
    ctx->pc = 0x49cb8cu;
    // NOP
label_49cb90:
    // 0x49cb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49cb94:
    // 0x49cb94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49cb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49cb98:
    // 0x49cb98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49cb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49cb9c:
    // 0x49cb9c: 0xc0aeebc  jal         func_2BBAF0
label_49cba0:
    if (ctx->pc == 0x49CBA0u) {
        ctx->pc = 0x49CBA0u;
            // 0x49cba0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49CBA4u;
        goto label_49cba4;
    }
    ctx->pc = 0x49CB9Cu;
    SET_GPR_U32(ctx, 31, 0x49CBA4u);
    ctx->pc = 0x49CBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CB9Cu;
            // 0x49cba0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CBA4u; }
        if (ctx->pc != 0x49CBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CBA4u; }
        if (ctx->pc != 0x49CBA4u) { return; }
    }
    ctx->pc = 0x49CBA4u;
label_49cba4:
    // 0x49cba4: 0xc0aeeb4  jal         func_2BBAD0
label_49cba8:
    if (ctx->pc == 0x49CBA8u) {
        ctx->pc = 0x49CBA8u;
            // 0x49cba8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x49CBACu;
        goto label_49cbac;
    }
    ctx->pc = 0x49CBA4u;
    SET_GPR_U32(ctx, 31, 0x49CBACu);
    ctx->pc = 0x49CBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CBA4u;
            // 0x49cba8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CBACu; }
        if (ctx->pc != 0x49CBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CBACu; }
        if (ctx->pc != 0x49CBACu) { return; }
    }
    ctx->pc = 0x49CBACu;
label_49cbac:
    // 0x49cbac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x49cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_49cbb0:
    // 0x49cbb0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49cbb4:
    // 0x49cbb4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x49cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_49cbb8:
    // 0x49cbb8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x49cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_49cbbc:
    // 0x49cbbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_49cbc0:
    // 0x49cbc0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x49cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_49cbc4:
    // 0x49cbc4: 0xc0aeea4  jal         func_2BBA90
label_49cbc8:
    if (ctx->pc == 0x49CBC8u) {
        ctx->pc = 0x49CBC8u;
            // 0x49cbc8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x49CBCCu;
        goto label_49cbcc;
    }
    ctx->pc = 0x49CBC4u;
    SET_GPR_U32(ctx, 31, 0x49CBCCu);
    ctx->pc = 0x49CBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CBC4u;
            // 0x49cbc8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CBCCu; }
        if (ctx->pc != 0x49CBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CBCCu; }
        if (ctx->pc != 0x49CBCCu) { return; }
    }
    ctx->pc = 0x49CBCCu;
label_49cbcc:
    // 0x49cbcc: 0xc0aee8c  jal         func_2BBA30
label_49cbd0:
    if (ctx->pc == 0x49CBD0u) {
        ctx->pc = 0x49CBD0u;
            // 0x49cbd0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x49CBD4u;
        goto label_49cbd4;
    }
    ctx->pc = 0x49CBCCu;
    SET_GPR_U32(ctx, 31, 0x49CBD4u);
    ctx->pc = 0x49CBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CBCCu;
            // 0x49cbd0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CBD4u; }
        if (ctx->pc != 0x49CBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CBD4u; }
        if (ctx->pc != 0x49CBD4u) { return; }
    }
    ctx->pc = 0x49CBD4u;
label_49cbd4:
    // 0x49cbd4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x49cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_49cbd8:
    // 0x49cbd8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x49cbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_49cbdc:
    // 0x49cbdc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x49cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_49cbe0:
    // 0x49cbe0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x49cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_49cbe4:
    // 0x49cbe4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x49cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_49cbe8:
    // 0x49cbe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49cbec:
    // 0x49cbec: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x49cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_49cbf0:
    // 0x49cbf0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x49cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_49cbf4:
    // 0x49cbf4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x49cbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_49cbf8:
    // 0x49cbf8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x49cbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_49cbfc:
    // 0x49cbfc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x49cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_49cc00:
    // 0x49cc00: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x49cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_49cc04:
    // 0x49cc04: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x49cc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_49cc08:
    // 0x49cc08: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x49cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_49cc0c:
    // 0x49cc0c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x49cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_49cc10:
    // 0x49cc10: 0xc0775b8  jal         func_1DD6E0
label_49cc14:
    if (ctx->pc == 0x49CC14u) {
        ctx->pc = 0x49CC14u;
            // 0x49cc14: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x49CC18u;
        goto label_49cc18;
    }
    ctx->pc = 0x49CC10u;
    SET_GPR_U32(ctx, 31, 0x49CC18u);
    ctx->pc = 0x49CC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CC10u;
            // 0x49cc14: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CC18u; }
        if (ctx->pc != 0x49CC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CC18u; }
        if (ctx->pc != 0x49CC18u) { return; }
    }
    ctx->pc = 0x49CC18u;
label_49cc18:
    // 0x49cc18: 0xc077314  jal         func_1DCC50
label_49cc1c:
    if (ctx->pc == 0x49CC1Cu) {
        ctx->pc = 0x49CC1Cu;
            // 0x49cc1c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49CC20u;
        goto label_49cc20;
    }
    ctx->pc = 0x49CC18u;
    SET_GPR_U32(ctx, 31, 0x49CC20u);
    ctx->pc = 0x49CC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CC18u;
            // 0x49cc1c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CC20u; }
        if (ctx->pc != 0x49CC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CC20u; }
        if (ctx->pc != 0x49CC20u) { return; }
    }
    ctx->pc = 0x49CC20u;
label_49cc20:
    // 0x49cc20: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x49cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_49cc24:
    // 0x49cc24: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x49cc24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_49cc28:
    // 0x49cc28: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x49cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_49cc2c:
    // 0x49cc2c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x49cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_49cc30:
    // 0x49cc30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x49cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49cc34:
    // 0x49cc34: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x49cc34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_49cc38:
    // 0x49cc38: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x49cc38u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_49cc3c:
    // 0x49cc3c: 0x24a5fd30  addiu       $a1, $a1, -0x2D0
    ctx->pc = 0x49cc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966576));
label_49cc40:
    // 0x49cc40: 0x2484fd70  addiu       $a0, $a0, -0x290
    ctx->pc = 0x49cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966640));
label_49cc44:
    // 0x49cc44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49cc48:
    // 0x49cc48: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x49cc48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_49cc4c:
    // 0x49cc4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49cc4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49cc50:
    // 0x49cc50: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x49cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
label_49cc54:
    // 0x49cc54: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x49cc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_49cc58:
    // 0x49cc58: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x49cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_49cc5c:
    // 0x49cc5c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x49cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_49cc60:
    // 0x49cc60: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x49cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_49cc64:
    // 0x49cc64: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x49cc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_49cc68:
    // 0x49cc68: 0xae000174  sw          $zero, 0x174($s0)
    ctx->pc = 0x49cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
label_49cc6c:
    // 0x49cc6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49cc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49cc70:
    // 0x49cc70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49cc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49cc74:
    // 0x49cc74: 0x3e00008  jr          $ra
label_49cc78:
    if (ctx->pc == 0x49CC78u) {
        ctx->pc = 0x49CC78u;
            // 0x49cc78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x49CC7Cu;
        goto label_49cc7c;
    }
    ctx->pc = 0x49CC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49CC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CC74u;
            // 0x49cc78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49CC7Cu;
label_49cc7c:
    // 0x49cc7c: 0x0  nop
    ctx->pc = 0x49cc7cu;
    // NOP
label_49cc80:
    // 0x49cc80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49cc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49cc84:
    // 0x49cc84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49cc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49cc88:
    // 0x49cc88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49cc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49cc8c:
    // 0x49cc8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49cc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49cc90:
    // 0x49cc90: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x49cc90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_49cc94:
    // 0x49cc94: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_49cc98:
    if (ctx->pc == 0x49CC98u) {
        ctx->pc = 0x49CC98u;
            // 0x49cc98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49CC9Cu;
        goto label_49cc9c;
    }
    ctx->pc = 0x49CC94u;
    {
        const bool branch_taken_0x49cc94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CC94u;
            // 0x49cc98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cc94) {
            ctx->pc = 0x49CCCCu;
            goto label_49cccc;
        }
    }
    ctx->pc = 0x49CC9Cu;
label_49cc9c:
    // 0x49cc9c: 0xc04008c  jal         func_100230
label_49cca0:
    if (ctx->pc == 0x49CCA0u) {
        ctx->pc = 0x49CCA0u;
            // 0x49cca0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x49CCA4u;
        goto label_49cca4;
    }
    ctx->pc = 0x49CC9Cu;
    SET_GPR_U32(ctx, 31, 0x49CCA4u);
    ctx->pc = 0x49CCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CC9Cu;
            // 0x49cca0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CCA4u; }
        if (ctx->pc != 0x49CCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CCA4u; }
        if (ctx->pc != 0x49CCA4u) { return; }
    }
    ctx->pc = 0x49CCA4u;
label_49cca4:
    // 0x49cca4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x49cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_49cca8:
    // 0x49cca8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x49cca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_49ccac:
    // 0x49ccac: 0xc0407c0  jal         func_101F00
label_49ccb0:
    if (ctx->pc == 0x49CCB0u) {
        ctx->pc = 0x49CCB0u;
            // 0x49ccb0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x49CCB4u;
        goto label_49ccb4;
    }
    ctx->pc = 0x49CCACu;
    SET_GPR_U32(ctx, 31, 0x49CCB4u);
    ctx->pc = 0x49CCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CCACu;
            // 0x49ccb0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CCB4u; }
        if (ctx->pc != 0x49CCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CCB4u; }
        if (ctx->pc != 0x49CCB4u) { return; }
    }
    ctx->pc = 0x49CCB4u;
label_49ccb4:
    // 0x49ccb4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x49ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_49ccb8:
    // 0x49ccb8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x49ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_49ccbc:
    // 0x49ccbc: 0xc0407c0  jal         func_101F00
label_49ccc0:
    if (ctx->pc == 0x49CCC0u) {
        ctx->pc = 0x49CCC0u;
            // 0x49ccc0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x49CCC4u;
        goto label_49ccc4;
    }
    ctx->pc = 0x49CCBCu;
    SET_GPR_U32(ctx, 31, 0x49CCC4u);
    ctx->pc = 0x49CCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CCBCu;
            // 0x49ccc0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CCC4u; }
        if (ctx->pc != 0x49CCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CCC4u; }
        if (ctx->pc != 0x49CCC4u) { return; }
    }
    ctx->pc = 0x49CCC4u;
label_49ccc4:
    // 0x49ccc4: 0xc0400a8  jal         func_1002A0
label_49ccc8:
    if (ctx->pc == 0x49CCC8u) {
        ctx->pc = 0x49CCC8u;
            // 0x49ccc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49CCCCu;
        goto label_49cccc;
    }
    ctx->pc = 0x49CCC4u;
    SET_GPR_U32(ctx, 31, 0x49CCCCu);
    ctx->pc = 0x49CCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CCC4u;
            // 0x49ccc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CCCCu; }
        if (ctx->pc != 0x49CCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CCCCu; }
        if (ctx->pc != 0x49CCCCu) { return; }
    }
    ctx->pc = 0x49CCCCu;
label_49cccc:
    // 0x49cccc: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x49ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_49ccd0:
    // 0x49ccd0: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x49ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_49ccd4:
    // 0x49ccd4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49ccd8:
    if (ctx->pc == 0x49CCD8u) {
        ctx->pc = 0x49CCD8u;
            // 0x49ccd8: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x49CCDCu;
        goto label_49ccdc;
    }
    ctx->pc = 0x49CCD4u;
    {
        const bool branch_taken_0x49ccd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ccd4) {
            ctx->pc = 0x49CCD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49CCD4u;
            // 0x49ccd8: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49CCF0u;
            goto label_49ccf0;
        }
    }
    ctx->pc = 0x49CCDCu;
label_49ccdc:
    // 0x49ccdc: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x49ccdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_49cce0:
    // 0x49cce0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49cce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49cce4:
    // 0x49cce4: 0x320f809  jalr        $t9
label_49cce8:
    if (ctx->pc == 0x49CCE8u) {
        ctx->pc = 0x49CCE8u;
            // 0x49cce8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49CCECu;
        goto label_49ccec;
    }
    ctx->pc = 0x49CCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49CCECu);
        ctx->pc = 0x49CCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CCE4u;
            // 0x49cce8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49CCECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49CCECu; }
            if (ctx->pc != 0x49CCECu) { return; }
        }
        }
    }
    ctx->pc = 0x49CCECu;
label_49ccec:
    // 0x49ccec: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x49ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_49ccf0:
    // 0x49ccf0: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x49ccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_49ccf4:
    // 0x49ccf4: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_49ccf8:
    if (ctx->pc == 0x49CCF8u) {
        ctx->pc = 0x49CCF8u;
            // 0x49ccf8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->pc = 0x49CCFCu;
        goto label_49ccfc;
    }
    ctx->pc = 0x49CCF4u;
    {
        const bool branch_taken_0x49ccf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ccf4) {
            ctx->pc = 0x49CCF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49CCF4u;
            // 0x49ccf8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49CD18u;
            goto label_49cd18;
        }
    }
    ctx->pc = 0x49CCFCu;
label_49ccfc:
    // 0x49ccfc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_49cd00:
    if (ctx->pc == 0x49CD00u) {
        ctx->pc = 0x49CD04u;
        goto label_49cd04;
    }
    ctx->pc = 0x49CCFCu;
    {
        const bool branch_taken_0x49ccfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ccfc) {
            ctx->pc = 0x49CD14u;
            goto label_49cd14;
        }
    }
    ctx->pc = 0x49CD04u;
label_49cd04:
    // 0x49cd04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49cd04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49cd08:
    // 0x49cd08: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49cd08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49cd0c:
    // 0x49cd0c: 0x320f809  jalr        $t9
label_49cd10:
    if (ctx->pc == 0x49CD10u) {
        ctx->pc = 0x49CD10u;
            // 0x49cd10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49CD14u;
        goto label_49cd14;
    }
    ctx->pc = 0x49CD0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49CD14u);
        ctx->pc = 0x49CD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CD0Cu;
            // 0x49cd10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49CD14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49CD14u; }
            if (ctx->pc != 0x49CD14u) { return; }
        }
        }
    }
    ctx->pc = 0x49CD14u;
label_49cd14:
    // 0x49cd14: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x49cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_49cd18:
    // 0x49cd18: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49cd1c:
    if (ctx->pc == 0x49CD1Cu) {
        ctx->pc = 0x49CD1Cu;
            // 0x49cd1c: 0xae2000d8  sw          $zero, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x49CD20u;
        goto label_49cd20;
    }
    ctx->pc = 0x49CD18u;
    {
        const bool branch_taken_0x49cd18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49cd18) {
            ctx->pc = 0x49CD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49CD18u;
            // 0x49cd1c: 0xae2000d8  sw          $zero, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49CD34u;
            goto label_49cd34;
        }
    }
    ctx->pc = 0x49CD20u;
label_49cd20:
    // 0x49cd20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49cd20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49cd24:
    // 0x49cd24: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49cd24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49cd28:
    // 0x49cd28: 0x320f809  jalr        $t9
label_49cd2c:
    if (ctx->pc == 0x49CD2Cu) {
        ctx->pc = 0x49CD2Cu;
            // 0x49cd2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49CD30u;
        goto label_49cd30;
    }
    ctx->pc = 0x49CD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49CD30u);
        ctx->pc = 0x49CD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CD28u;
            // 0x49cd2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49CD30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49CD30u; }
            if (ctx->pc != 0x49CD30u) { return; }
        }
        }
    }
    ctx->pc = 0x49CD30u;
label_49cd30:
    // 0x49cd30: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x49cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
label_49cd34:
    // 0x49cd34: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x49cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_49cd38:
    // 0x49cd38: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49cd3c:
    if (ctx->pc == 0x49CD3Cu) {
        ctx->pc = 0x49CD3Cu;
            // 0x49cd3c: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x49CD40u;
        goto label_49cd40;
    }
    ctx->pc = 0x49CD38u;
    {
        const bool branch_taken_0x49cd38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49cd38) {
            ctx->pc = 0x49CD3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49CD38u;
            // 0x49cd3c: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49CD54u;
            goto label_49cd54;
        }
    }
    ctx->pc = 0x49CD40u;
label_49cd40:
    // 0x49cd40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49cd40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49cd44:
    // 0x49cd44: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49cd44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49cd48:
    // 0x49cd48: 0x320f809  jalr        $t9
label_49cd4c:
    if (ctx->pc == 0x49CD4Cu) {
        ctx->pc = 0x49CD4Cu;
            // 0x49cd4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49CD50u;
        goto label_49cd50;
    }
    ctx->pc = 0x49CD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49CD50u);
        ctx->pc = 0x49CD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CD48u;
            // 0x49cd4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49CD50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49CD50u; }
            if (ctx->pc != 0x49CD50u) { return; }
        }
        }
    }
    ctx->pc = 0x49CD50u;
label_49cd50:
    // 0x49cd50: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x49cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_49cd54:
    // 0x49cd54: 0x8e240174  lw          $a0, 0x174($s1)
    ctx->pc = 0x49cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
label_49cd58:
    // 0x49cd58: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49cd5c:
    if (ctx->pc == 0x49CD5Cu) {
        ctx->pc = 0x49CD5Cu;
            // 0x49cd5c: 0xae200174  sw          $zero, 0x174($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 0));
        ctx->pc = 0x49CD60u;
        goto label_49cd60;
    }
    ctx->pc = 0x49CD58u;
    {
        const bool branch_taken_0x49cd58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49cd58) {
            ctx->pc = 0x49CD5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49CD58u;
            // 0x49cd5c: 0xae200174  sw          $zero, 0x174($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49CD74u;
            goto label_49cd74;
        }
    }
    ctx->pc = 0x49CD60u;
label_49cd60:
    // 0x49cd60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49cd60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49cd64:
    // 0x49cd64: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49cd64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49cd68:
    // 0x49cd68: 0x320f809  jalr        $t9
label_49cd6c:
    if (ctx->pc == 0x49CD6Cu) {
        ctx->pc = 0x49CD6Cu;
            // 0x49cd6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49CD70u;
        goto label_49cd70;
    }
    ctx->pc = 0x49CD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49CD70u);
        ctx->pc = 0x49CD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CD68u;
            // 0x49cd6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49CD70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49CD70u; }
            if (ctx->pc != 0x49CD70u) { return; }
        }
        }
    }
    ctx->pc = 0x49CD70u;
label_49cd70:
    // 0x49cd70: 0xae200174  sw          $zero, 0x174($s1)
    ctx->pc = 0x49cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 0));
label_49cd74:
    // 0x49cd74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49cd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49cd78:
    // 0x49cd78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49cd78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49cd7c:
    // 0x49cd7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49cd7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49cd80:
    // 0x49cd80: 0x3e00008  jr          $ra
label_49cd84:
    if (ctx->pc == 0x49CD84u) {
        ctx->pc = 0x49CD84u;
            // 0x49cd84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49CD88u;
        goto label_49cd88;
    }
    ctx->pc = 0x49CD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49CD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CD80u;
            // 0x49cd84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49CD88u;
label_49cd88:
    // 0x49cd88: 0x0  nop
    ctx->pc = 0x49cd88u;
    // NOP
label_49cd8c:
    // 0x49cd8c: 0x0  nop
    ctx->pc = 0x49cd8cu;
    // NOP
label_49cd90:
    // 0x49cd90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49cd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49cd94:
    // 0x49cd94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49cd98:
    // 0x49cd98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49cd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49cd9c:
    // 0x49cd9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49cd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49cda0:
    // 0x49cda0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49cda0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49cda4:
    // 0x49cda4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_49cda8:
    if (ctx->pc == 0x49CDA8u) {
        ctx->pc = 0x49CDA8u;
            // 0x49cda8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49CDACu;
        goto label_49cdac;
    }
    ctx->pc = 0x49CDA4u;
    {
        const bool branch_taken_0x49cda4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CDA4u;
            // 0x49cda8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cda4) {
            ctx->pc = 0x49CE08u;
            goto label_49ce08;
        }
    }
    ctx->pc = 0x49CDACu;
label_49cdac:
    // 0x49cdac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49cdb0:
    // 0x49cdb0: 0x2442fe80  addiu       $v0, $v0, -0x180
    ctx->pc = 0x49cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966912));
label_49cdb4:
    // 0x49cdb4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_49cdb8:
    if (ctx->pc == 0x49CDB8u) {
        ctx->pc = 0x49CDB8u;
            // 0x49cdb8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x49CDBCu;
        goto label_49cdbc;
    }
    ctx->pc = 0x49CDB4u;
    {
        const bool branch_taken_0x49cdb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CDB4u;
            // 0x49cdb8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cdb4) {
            ctx->pc = 0x49CDF0u;
            goto label_49cdf0;
        }
    }
    ctx->pc = 0x49CDBCu;
label_49cdbc:
    // 0x49cdbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49cdc0:
    // 0x49cdc0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x49cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_49cdc4:
    // 0x49cdc4: 0xc0d37dc  jal         func_34DF70
label_49cdc8:
    if (ctx->pc == 0x49CDC8u) {
        ctx->pc = 0x49CDC8u;
            // 0x49cdc8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x49CDCCu;
        goto label_49cdcc;
    }
    ctx->pc = 0x49CDC4u;
    SET_GPR_U32(ctx, 31, 0x49CDCCu);
    ctx->pc = 0x49CDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CDC4u;
            // 0x49cdc8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CDCCu; }
        if (ctx->pc != 0x49CDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CDCCu; }
        if (ctx->pc != 0x49CDCCu) { return; }
    }
    ctx->pc = 0x49CDCCu;
label_49cdcc:
    // 0x49cdcc: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_49cdd0:
    if (ctx->pc == 0x49CDD0u) {
        ctx->pc = 0x49CDD0u;
            // 0x49cdd0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x49CDD4u;
        goto label_49cdd4;
    }
    ctx->pc = 0x49CDCCu;
    {
        const bool branch_taken_0x49cdcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49cdcc) {
            ctx->pc = 0x49CDD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49CDCCu;
            // 0x49cdd0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49CDF4u;
            goto label_49cdf4;
        }
    }
    ctx->pc = 0x49CDD4u;
label_49cdd4:
    // 0x49cdd4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49cdd8:
    // 0x49cdd8: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x49cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_49cddc:
    // 0x49cddc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_49cde0:
    if (ctx->pc == 0x49CDE0u) {
        ctx->pc = 0x49CDE0u;
            // 0x49cde0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x49CDE4u;
        goto label_49cde4;
    }
    ctx->pc = 0x49CDDCu;
    {
        const bool branch_taken_0x49cddc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CDDCu;
            // 0x49cde0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cddc) {
            ctx->pc = 0x49CDF0u;
            goto label_49cdf0;
        }
    }
    ctx->pc = 0x49CDE4u;
label_49cde4:
    // 0x49cde4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49cde8:
    // 0x49cde8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x49cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_49cdec:
    // 0x49cdec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_49cdf0:
    // 0x49cdf0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x49cdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_49cdf4:
    // 0x49cdf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49cdf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_49cdf8:
    // 0x49cdf8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_49cdfc:
    if (ctx->pc == 0x49CDFCu) {
        ctx->pc = 0x49CDFCu;
            // 0x49cdfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49CE00u;
        goto label_49ce00;
    }
    ctx->pc = 0x49CDF8u;
    {
        const bool branch_taken_0x49cdf8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49cdf8) {
            ctx->pc = 0x49CDFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49CDF8u;
            // 0x49cdfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49CE0Cu;
            goto label_49ce0c;
        }
    }
    ctx->pc = 0x49CE00u;
label_49ce00:
    // 0x49ce00: 0xc0400a8  jal         func_1002A0
label_49ce04:
    if (ctx->pc == 0x49CE04u) {
        ctx->pc = 0x49CE04u;
            // 0x49ce04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49CE08u;
        goto label_49ce08;
    }
    ctx->pc = 0x49CE00u;
    SET_GPR_U32(ctx, 31, 0x49CE08u);
    ctx->pc = 0x49CE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CE00u;
            // 0x49ce04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CE08u; }
        if (ctx->pc != 0x49CE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CE08u; }
        if (ctx->pc != 0x49CE08u) { return; }
    }
    ctx->pc = 0x49CE08u;
label_49ce08:
    // 0x49ce08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49ce08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49ce0c:
    // 0x49ce0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49ce0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49ce10:
    // 0x49ce10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49ce10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49ce14:
    // 0x49ce14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49ce14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49ce18:
    // 0x49ce18: 0x3e00008  jr          $ra
label_49ce1c:
    if (ctx->pc == 0x49CE1Cu) {
        ctx->pc = 0x49CE1Cu;
            // 0x49ce1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49CE20u;
        goto label_49ce20;
    }
    ctx->pc = 0x49CE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49CE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CE18u;
            // 0x49ce1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49CE20u;
label_49ce20:
    // 0x49ce20: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x49ce20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_49ce24:
    // 0x49ce24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x49ce24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_49ce28:
    // 0x49ce28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49ce28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49ce2c:
    // 0x49ce2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49ce2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49ce30:
    // 0x49ce30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49ce30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49ce34:
    // 0x49ce34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x49ce34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49ce38:
    // 0x49ce38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49ce38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49ce3c:
    // 0x49ce3c: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x49ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49ce40:
    // 0x49ce40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x49ce40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49ce44:
    // 0x49ce44: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_49ce48:
    if (ctx->pc == 0x49CE48u) {
        ctx->pc = 0x49CE48u;
            // 0x49ce48: 0xe4810170  swc1        $f1, 0x170($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 368), bits); }
        ctx->pc = 0x49CE4Cu;
        goto label_49ce4c;
    }
    ctx->pc = 0x49CE44u;
    {
        const bool branch_taken_0x49ce44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x49CE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CE44u;
            // 0x49ce48: 0xe4810170  swc1        $f1, 0x170($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 368), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ce44) {
            ctx->pc = 0x49CE54u;
            goto label_49ce54;
        }
    }
    ctx->pc = 0x49CE4Cu;
label_49ce4c:
    // 0x49ce4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x49ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_49ce50:
    // 0x49ce50: 0xae420170  sw          $v0, 0x170($s2)
    ctx->pc = 0x49ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 2));
label_49ce54:
    // 0x49ce54: 0xc0892d0  jal         func_224B40
label_49ce58:
    if (ctx->pc == 0x49CE58u) {
        ctx->pc = 0x49CE58u;
            // 0x49ce58: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x49CE5Cu;
        goto label_49ce5c;
    }
    ctx->pc = 0x49CE54u;
    SET_GPR_U32(ctx, 31, 0x49CE5Cu);
    ctx->pc = 0x49CE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CE54u;
            // 0x49ce58: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CE5Cu; }
        if (ctx->pc != 0x49CE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CE5Cu; }
        if (ctx->pc != 0x49CE5Cu) { return; }
    }
    ctx->pc = 0x49CE5Cu;
label_49ce5c:
    // 0x49ce5c: 0xc6410170  lwc1        $f1, 0x170($s2)
    ctx->pc = 0x49ce5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49ce60:
    // 0x49ce60: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x49ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
label_49ce64:
    // 0x49ce64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x49ce64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49ce68:
    // 0x49ce68: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x49ce68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_49ce6c:
    // 0x49ce6c: 0x3c02416c  lui         $v0, 0x416C
    ctx->pc = 0x49ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16748 << 16));
label_49ce70:
    // 0x49ce70: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x49ce70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_49ce74:
    // 0x49ce74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x49ce74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_49ce78:
    // 0x49ce78: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x49ce78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_49ce7c:
    // 0x49ce7c: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x49ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
label_49ce80:
    // 0x49ce80: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x49ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_49ce84:
    // 0x49ce84: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x49ce84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_49ce88:
    // 0x49ce88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49ce8c:
    // 0x49ce8c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x49ce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_49ce90:
    // 0x49ce90: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x49ce90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_49ce94:
    // 0x49ce94: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x49ce94u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49ce98:
    // 0x49ce98: 0x0  nop
    ctx->pc = 0x49ce98u;
    // NOP
label_49ce9c:
    // 0x49ce9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x49ce9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_49cea0:
    // 0x49cea0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x49cea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_49cea4:
    // 0x49cea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x49cea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49cea8:
    // 0x49cea8: 0x0  nop
    ctx->pc = 0x49cea8u;
    // NOP
label_49ceac:
    // 0x49ceac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x49ceacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_49ceb0:
    // 0x49ceb0: 0xc0a7a88  jal         func_29EA20
label_49ceb4:
    if (ctx->pc == 0x49CEB4u) {
        ctx->pc = 0x49CEB4u;
            // 0x49ceb4: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x49CEB8u;
        goto label_49ceb8;
    }
    ctx->pc = 0x49CEB0u;
    SET_GPR_U32(ctx, 31, 0x49CEB8u);
    ctx->pc = 0x49CEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CEB0u;
            // 0x49ceb4: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CEB8u; }
        if (ctx->pc != 0x49CEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CEB8u; }
        if (ctx->pc != 0x49CEB8u) { return; }
    }
    ctx->pc = 0x49CEB8u;
label_49ceb8:
    // 0x49ceb8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x49ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_49cebc:
    // 0x49cebc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49cebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49cec0:
    // 0x49cec0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_49cec4:
    if (ctx->pc == 0x49CEC4u) {
        ctx->pc = 0x49CEC4u;
            // 0x49cec4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x49CEC8u;
        goto label_49cec8;
    }
    ctx->pc = 0x49CEC0u;
    {
        const bool branch_taken_0x49cec0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CEC0u;
            // 0x49cec4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cec0) {
            ctx->pc = 0x49CEDCu;
            goto label_49cedc;
        }
    }
    ctx->pc = 0x49CEC8u;
label_49cec8:
    // 0x49cec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49cec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49cecc:
    // 0x49cecc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x49ceccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49ced0:
    // 0x49ced0: 0xc0804bc  jal         func_2012F0
label_49ced4:
    if (ctx->pc == 0x49CED4u) {
        ctx->pc = 0x49CED4u;
            // 0x49ced4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x49CED8u;
        goto label_49ced8;
    }
    ctx->pc = 0x49CED0u;
    SET_GPR_U32(ctx, 31, 0x49CED8u);
    ctx->pc = 0x49CED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CED0u;
            // 0x49ced4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CED8u; }
        if (ctx->pc != 0x49CED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CED8u; }
        if (ctx->pc != 0x49CED8u) { return; }
    }
    ctx->pc = 0x49CED8u;
label_49ced8:
    // 0x49ced8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49ced8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49cedc:
    // 0x49cedc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x49cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_49cee0:
    // 0x49cee0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x49cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_49cee4:
    // 0x49cee4: 0xc0b6e68  jal         func_2DB9A0
label_49cee8:
    if (ctx->pc == 0x49CEE8u) {
        ctx->pc = 0x49CEE8u;
            // 0x49cee8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x49CEECu;
        goto label_49ceec;
    }
    ctx->pc = 0x49CEE4u;
    SET_GPR_U32(ctx, 31, 0x49CEECu);
    ctx->pc = 0x49CEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CEE4u;
            // 0x49cee8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CEECu; }
        if (ctx->pc != 0x49CEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CEECu; }
        if (ctx->pc != 0x49CEECu) { return; }
    }
    ctx->pc = 0x49CEECu;
label_49ceec:
    // 0x49ceec: 0xc0b6dac  jal         func_2DB6B0
label_49cef0:
    if (ctx->pc == 0x49CEF0u) {
        ctx->pc = 0x49CEF0u;
            // 0x49cef0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x49CEF4u;
        goto label_49cef4;
    }
    ctx->pc = 0x49CEECu;
    SET_GPR_U32(ctx, 31, 0x49CEF4u);
    ctx->pc = 0x49CEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CEECu;
            // 0x49cef0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CEF4u; }
        if (ctx->pc != 0x49CEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CEF4u; }
        if (ctx->pc != 0x49CEF4u) { return; }
    }
    ctx->pc = 0x49CEF4u;
label_49cef4:
    // 0x49cef4: 0xc0cac94  jal         func_32B250
label_49cef8:
    if (ctx->pc == 0x49CEF8u) {
        ctx->pc = 0x49CEF8u;
            // 0x49cef8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x49CEFCu;
        goto label_49cefc;
    }
    ctx->pc = 0x49CEF4u;
    SET_GPR_U32(ctx, 31, 0x49CEFCu);
    ctx->pc = 0x49CEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CEF4u;
            // 0x49cef8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CEFCu; }
        if (ctx->pc != 0x49CEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CEFCu; }
        if (ctx->pc != 0x49CEFCu) { return; }
    }
    ctx->pc = 0x49CEFCu;
label_49cefc:
    // 0x49cefc: 0xc0cac84  jal         func_32B210
label_49cf00:
    if (ctx->pc == 0x49CF00u) {
        ctx->pc = 0x49CF00u;
            // 0x49cf00: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x49CF04u;
        goto label_49cf04;
    }
    ctx->pc = 0x49CEFCu;
    SET_GPR_U32(ctx, 31, 0x49CF04u);
    ctx->pc = 0x49CF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CEFCu;
            // 0x49cf00: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CF04u; }
        if (ctx->pc != 0x49CF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CF04u; }
        if (ctx->pc != 0x49CF04u) { return; }
    }
    ctx->pc = 0x49CF04u;
label_49cf04:
    // 0x49cf04: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x49cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_49cf08:
    // 0x49cf08: 0xafb100d4  sw          $s1, 0xD4($sp)
    ctx->pc = 0x49cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 17));
label_49cf0c:
    // 0x49cf0c: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x49cf0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_49cf10:
    // 0x49cf10: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x49cf10u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_49cf14:
    // 0x49cf14: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x49cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_49cf18:
    // 0x49cf18: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x49cf18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49cf1c:
    // 0x49cf1c: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x49cf1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_49cf20:
    // 0x49cf20: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x49cf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_49cf24:
    // 0x49cf24: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x49cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_49cf28:
    // 0x49cf28: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x49cf28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_49cf2c:
    // 0x49cf2c: 0x34430140  ori         $v1, $v0, 0x140
    ctx->pc = 0x49cf2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
label_49cf30:
    // 0x49cf30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49cf34:
    // 0x49cf34: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x49cf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49cf38:
    // 0x49cf38: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x49cf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_49cf3c:
    // 0x49cf3c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x49cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49cf40:
    // 0x49cf40: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x49cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49cf44:
    // 0x49cf44: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x49cf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_49cf48:
    // 0x49cf48: 0xafaa0178  sw          $t2, 0x178($sp)
    ctx->pc = 0x49cf48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 10));
label_49cf4c:
    // 0x49cf4c: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x49cf4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_49cf50:
    // 0x49cf50: 0xa3a90180  sb          $t1, 0x180($sp)
    ctx->pc = 0x49cf50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 9));
label_49cf54:
    // 0x49cf54: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x49cf54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_49cf58:
    // 0x49cf58: 0xafa8017c  sw          $t0, 0x17C($sp)
    ctx->pc = 0x49cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 8));
label_49cf5c:
    // 0x49cf5c: 0xafa70160  sw          $a3, 0x160($sp)
    ctx->pc = 0x49cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 7));
label_49cf60:
    // 0x49cf60: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x49cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_49cf64:
    // 0x49cf64: 0xc0a7a88  jal         func_29EA20
label_49cf68:
    if (ctx->pc == 0x49CF68u) {
        ctx->pc = 0x49CF68u;
            // 0x49cf68: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
        ctx->pc = 0x49CF6Cu;
        goto label_49cf6c;
    }
    ctx->pc = 0x49CF64u;
    SET_GPR_U32(ctx, 31, 0x49CF6Cu);
    ctx->pc = 0x49CF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CF64u;
            // 0x49cf68: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CF6Cu; }
        if (ctx->pc != 0x49CF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CF6Cu; }
        if (ctx->pc != 0x49CF6Cu) { return; }
    }
    ctx->pc = 0x49CF6Cu;
label_49cf6c:
    // 0x49cf6c: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x49cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_49cf70:
    // 0x49cf70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49cf70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49cf74:
    // 0x49cf74: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_49cf78:
    if (ctx->pc == 0x49CF78u) {
        ctx->pc = 0x49CF78u;
            // 0x49cf78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x49CF7Cu;
        goto label_49cf7c;
    }
    ctx->pc = 0x49CF74u;
    {
        const bool branch_taken_0x49cf74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49CF74u;
            // 0x49cf78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cf74) {
            ctx->pc = 0x49CFC4u;
            goto label_49cfc4;
        }
    }
    ctx->pc = 0x49CF7Cu;
label_49cf7c:
    // 0x49cf7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49cf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49cf80:
    // 0x49cf80: 0xc088ef4  jal         func_223BD0
label_49cf84:
    if (ctx->pc == 0x49CF84u) {
        ctx->pc = 0x49CF84u;
            // 0x49cf84: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x49CF88u;
        goto label_49cf88;
    }
    ctx->pc = 0x49CF80u;
    SET_GPR_U32(ctx, 31, 0x49CF88u);
    ctx->pc = 0x49CF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CF80u;
            // 0x49cf84: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CF88u; }
        if (ctx->pc != 0x49CF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CF88u; }
        if (ctx->pc != 0x49CF88u) { return; }
    }
    ctx->pc = 0x49CF88u;
label_49cf88:
    // 0x49cf88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49cf8c:
    // 0x49cf8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x49cf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_49cf90:
    // 0x49cf90: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x49cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_49cf94:
    // 0x49cf94: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x49cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_49cf98:
    // 0x49cf98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_49cf9c:
    // 0x49cf9c: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x49cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_49cfa0:
    // 0x49cfa0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49cfa4:
    // 0x49cfa4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_49cfa8:
    // 0x49cfa8: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x49cfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_49cfac:
    // 0x49cfac: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x49cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_49cfb0:
    // 0x49cfb0: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x49cfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_49cfb4:
    // 0x49cfb4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x49cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_49cfb8:
    // 0x49cfb8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x49cfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_49cfbc:
    // 0x49cfbc: 0xc088b38  jal         func_222CE0
label_49cfc0:
    if (ctx->pc == 0x49CFC0u) {
        ctx->pc = 0x49CFC0u;
            // 0x49cfc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49CFC4u;
        goto label_49cfc4;
    }
    ctx->pc = 0x49CFBCu;
    SET_GPR_U32(ctx, 31, 0x49CFC4u);
    ctx->pc = 0x49CFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49CFBCu;
            // 0x49cfc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CFC4u; }
        if (ctx->pc != 0x49CFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49CFC4u; }
        if (ctx->pc != 0x49CFC4u) { return; }
    }
    ctx->pc = 0x49CFC4u;
label_49cfc4:
    // 0x49cfc4: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x49cfc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_49cfc8:
    // 0x49cfc8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_49cfcc:
    if (ctx->pc == 0x49CFCCu) {
        ctx->pc = 0x49CFCCu;
            // 0x49cfcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49CFD0u;
        goto label_49cfd0;
    }
    ctx->pc = 0x49CFC8u;
    {
        const bool branch_taken_0x49cfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49cfc8) {
            ctx->pc = 0x49CFCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49CFC8u;
            // 0x49cfcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49D00Cu;
            goto label_49d00c;
        }
    }
    ctx->pc = 0x49CFD0u;
label_49cfd0:
    // 0x49cfd0: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x49cfd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_49cfd4:
    // 0x49cfd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_49cfd8:
    // 0x49cfd8: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x49cfd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_49cfdc:
    // 0x49cfdc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x49cfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_49cfe0:
    // 0x49cfe0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49cfe0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_49cfe4:
    // 0x49cfe4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_49cfe8:
    if (ctx->pc == 0x49CFE8u) {
        ctx->pc = 0x49CFECu;
        goto label_49cfec;
    }
    ctx->pc = 0x49CFE4u;
    {
        const bool branch_taken_0x49cfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49cfe4) {
            ctx->pc = 0x49D008u;
            goto label_49d008;
        }
    }
    ctx->pc = 0x49CFECu;
label_49cfec:
    // 0x49cfec: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_49cff0:
    if (ctx->pc == 0x49CFF0u) {
        ctx->pc = 0x49CFF4u;
        goto label_49cff4;
    }
    ctx->pc = 0x49CFECu;
    {
        const bool branch_taken_0x49cfec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49cfec) {
            ctx->pc = 0x49D008u;
            goto label_49d008;
        }
    }
    ctx->pc = 0x49CFF4u;
label_49cff4:
    // 0x49cff4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x49cff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_49cff8:
    // 0x49cff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49cff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49cffc:
    // 0x49cffc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49cffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49d000:
    // 0x49d000: 0x320f809  jalr        $t9
label_49d004:
    if (ctx->pc == 0x49D004u) {
        ctx->pc = 0x49D004u;
            // 0x49d004: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49D008u;
        goto label_49d008;
    }
    ctx->pc = 0x49D000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49D008u);
        ctx->pc = 0x49D004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D000u;
            // 0x49d004: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49D008u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49D008u; }
            if (ctx->pc != 0x49D008u) { return; }
        }
        }
    }
    ctx->pc = 0x49D008u;
label_49d008:
    // 0x49d008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49d008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d00c:
    // 0x49d00c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x49d00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_49d010:
    // 0x49d010: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49d010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49d014:
    // 0x49d014: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x49d014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d018:
    // 0x49d018: 0xc08914c  jal         func_224530
label_49d01c:
    if (ctx->pc == 0x49D01Cu) {
        ctx->pc = 0x49D01Cu;
            // 0x49d01c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x49D020u;
        goto label_49d020;
    }
    ctx->pc = 0x49D018u;
    SET_GPR_U32(ctx, 31, 0x49D020u);
    ctx->pc = 0x49D01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D018u;
            // 0x49d01c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D020u; }
        if (ctx->pc != 0x49D020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D020u; }
        if (ctx->pc != 0x49D020u) { return; }
    }
    ctx->pc = 0x49D020u;
label_49d020:
    // 0x49d020: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x49d020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49d024:
    // 0x49d024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49d024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d028:
    // 0x49d028: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x49d028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49d02c:
    // 0x49d02c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x49d02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_49d030:
    // 0x49d030: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x49d030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d034:
    // 0x49d034: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x49d034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_49d038:
    // 0x49d038: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x49d038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_49d03c:
    // 0x49d03c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x49d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_49d040:
    // 0x49d040: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x49d040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_49d044:
    // 0x49d044: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x49d044u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_49d048:
    // 0x49d048: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x49d048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_49d04c:
    // 0x49d04c: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x49d04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49d050:
    // 0x49d050: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x49d050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49d054:
    // 0x49d054: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x49d054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d058:
    // 0x49d058: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x49d058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_49d05c:
    // 0x49d05c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x49d05cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_49d060:
    // 0x49d060: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x49d060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_49d064:
    // 0x49d064: 0xc0892b0  jal         func_224AC0
label_49d068:
    if (ctx->pc == 0x49D068u) {
        ctx->pc = 0x49D068u;
            // 0x49d068: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x49D06Cu;
        goto label_49d06c;
    }
    ctx->pc = 0x49D064u;
    SET_GPR_U32(ctx, 31, 0x49D06Cu);
    ctx->pc = 0x49D068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D064u;
            // 0x49d068: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D06Cu; }
        if (ctx->pc != 0x49D06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D06Cu; }
        if (ctx->pc != 0x49D06Cu) { return; }
    }
    ctx->pc = 0x49D06Cu;
label_49d06c:
    // 0x49d06c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x49d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_49d070:
    // 0x49d070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49d070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d074:
    // 0x49d074: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x49d074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_49d078:
    // 0x49d078: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x49d078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_49d07c:
    // 0x49d07c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x49d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_49d080:
    // 0x49d080: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x49d080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_49d084:
    // 0x49d084: 0xc0891d8  jal         func_224760
label_49d088:
    if (ctx->pc == 0x49D088u) {
        ctx->pc = 0x49D088u;
            // 0x49d088: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x49D08Cu;
        goto label_49d08c;
    }
    ctx->pc = 0x49D084u;
    SET_GPR_U32(ctx, 31, 0x49D08Cu);
    ctx->pc = 0x49D088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D084u;
            // 0x49d088: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D08Cu; }
        if (ctx->pc != 0x49D08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D08Cu; }
        if (ctx->pc != 0x49D08Cu) { return; }
    }
    ctx->pc = 0x49D08Cu;
label_49d08c:
    // 0x49d08c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49d090:
    // 0x49d090: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49d090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d094:
    // 0x49d094: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x49d094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_49d098:
    // 0x49d098: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49d098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49d09c:
    // 0x49d09c: 0xc08c164  jal         func_230590
label_49d0a0:
    if (ctx->pc == 0x49D0A0u) {
        ctx->pc = 0x49D0A0u;
            // 0x49d0a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49D0A4u;
        goto label_49d0a4;
    }
    ctx->pc = 0x49D09Cu;
    SET_GPR_U32(ctx, 31, 0x49D0A4u);
    ctx->pc = 0x49D0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D09Cu;
            // 0x49d0a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D0A4u; }
        if (ctx->pc != 0x49D0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D0A4u; }
        if (ctx->pc != 0x49D0A4u) { return; }
    }
    ctx->pc = 0x49D0A4u;
label_49d0a4:
    // 0x49d0a4: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x49d0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
label_49d0a8:
    // 0x49d0a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49d0ac:
    // 0x49d0ac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x49d0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_49d0b0:
    // 0x49d0b0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x49d0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_49d0b4:
    // 0x49d0b4: 0xc0a7a88  jal         func_29EA20
label_49d0b8:
    if (ctx->pc == 0x49D0B8u) {
        ctx->pc = 0x49D0B8u;
            // 0x49d0b8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x49D0BCu;
        goto label_49d0bc;
    }
    ctx->pc = 0x49D0B4u;
    SET_GPR_U32(ctx, 31, 0x49D0BCu);
    ctx->pc = 0x49D0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D0B4u;
            // 0x49d0b8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D0BCu; }
        if (ctx->pc != 0x49D0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D0BCu; }
        if (ctx->pc != 0x49D0BCu) { return; }
    }
    ctx->pc = 0x49D0BCu;
label_49d0bc:
    // 0x49d0bc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x49d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_49d0c0:
    // 0x49d0c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49d0c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49d0c4:
    // 0x49d0c4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_49d0c8:
    if (ctx->pc == 0x49D0C8u) {
        ctx->pc = 0x49D0C8u;
            // 0x49d0c8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x49D0CCu;
        goto label_49d0cc;
    }
    ctx->pc = 0x49D0C4u;
    {
        const bool branch_taken_0x49d0c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D0C4u;
            // 0x49d0c8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d0c4) {
            ctx->pc = 0x49D0E8u;
            goto label_49d0e8;
        }
    }
    ctx->pc = 0x49D0CCu;
label_49d0cc:
    // 0x49d0cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49d0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49d0d0:
    // 0x49d0d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49d0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d0d4:
    // 0x49d0d4: 0xc0869d0  jal         func_21A740
label_49d0d8:
    if (ctx->pc == 0x49D0D8u) {
        ctx->pc = 0x49D0D8u;
            // 0x49d0d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49D0DCu;
        goto label_49d0dc;
    }
    ctx->pc = 0x49D0D4u;
    SET_GPR_U32(ctx, 31, 0x49D0DCu);
    ctx->pc = 0x49D0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D0D4u;
            // 0x49d0d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D0DCu; }
        if (ctx->pc != 0x49D0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D0DCu; }
        if (ctx->pc != 0x49D0DCu) { return; }
    }
    ctx->pc = 0x49D0DCu;
label_49d0dc:
    // 0x49d0dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49d0e0:
    // 0x49d0e0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x49d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_49d0e4:
    // 0x49d0e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_49d0e8:
    // 0x49d0e8: 0xae110210  sw          $s1, 0x210($s0)
    ctx->pc = 0x49d0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
label_49d0ec:
    // 0x49d0ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49d0f0:
    // 0x49d0f0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x49d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_49d0f4:
    // 0x49d0f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49d0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49d0f8:
    // 0x49d0f8: 0xc08c650  jal         func_231940
label_49d0fc:
    if (ctx->pc == 0x49D0FCu) {
        ctx->pc = 0x49D0FCu;
            // 0x49d0fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49D100u;
        goto label_49d100;
    }
    ctx->pc = 0x49D0F8u;
    SET_GPR_U32(ctx, 31, 0x49D100u);
    ctx->pc = 0x49D0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D0F8u;
            // 0x49d0fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D100u; }
        if (ctx->pc != 0x49D100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D100u; }
        if (ctx->pc != 0x49D100u) { return; }
    }
    ctx->pc = 0x49D100u;
label_49d100:
    // 0x49d100: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49d100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49d104:
    // 0x49d104: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x49d104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_49d108:
    // 0x49d108: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x49d108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_49d10c:
    // 0x49d10c: 0xc0a7a88  jal         func_29EA20
label_49d110:
    if (ctx->pc == 0x49D110u) {
        ctx->pc = 0x49D110u;
            // 0x49d110: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x49D114u;
        goto label_49d114;
    }
    ctx->pc = 0x49D10Cu;
    SET_GPR_U32(ctx, 31, 0x49D114u);
    ctx->pc = 0x49D110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D10Cu;
            // 0x49d110: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D114u; }
        if (ctx->pc != 0x49D114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D114u; }
        if (ctx->pc != 0x49D114u) { return; }
    }
    ctx->pc = 0x49D114u;
label_49d114:
    // 0x49d114: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x49d114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_49d118:
    // 0x49d118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49d118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49d11c:
    // 0x49d11c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_49d120:
    if (ctx->pc == 0x49D120u) {
        ctx->pc = 0x49D120u;
            // 0x49d120: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x49D124u;
        goto label_49d124;
    }
    ctx->pc = 0x49D11Cu;
    {
        const bool branch_taken_0x49d11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D11Cu;
            // 0x49d120: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d11c) {
            ctx->pc = 0x49D138u;
            goto label_49d138;
        }
    }
    ctx->pc = 0x49D124u;
label_49d124:
    // 0x49d124: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x49d124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_49d128:
    // 0x49d128: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x49d128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49d12c:
    // 0x49d12c: 0xc0827ac  jal         func_209EB0
label_49d130:
    if (ctx->pc == 0x49D130u) {
        ctx->pc = 0x49D134u;
        goto label_49d134;
    }
    ctx->pc = 0x49D12Cu;
    SET_GPR_U32(ctx, 31, 0x49D134u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D134u; }
        if (ctx->pc != 0x49D134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D134u; }
        if (ctx->pc != 0x49D134u) { return; }
    }
    ctx->pc = 0x49D134u;
label_49d134:
    // 0x49d134: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49d134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49d138:
    // 0x49d138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49d138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49d13c:
    // 0x49d13c: 0xc040180  jal         func_100600
label_49d140:
    if (ctx->pc == 0x49D140u) {
        ctx->pc = 0x49D140u;
            // 0x49d140: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x49D144u;
        goto label_49d144;
    }
    ctx->pc = 0x49D13Cu;
    SET_GPR_U32(ctx, 31, 0x49D144u);
    ctx->pc = 0x49D140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D13Cu;
            // 0x49d140: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D144u; }
        if (ctx->pc != 0x49D144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D144u; }
        if (ctx->pc != 0x49D144u) { return; }
    }
    ctx->pc = 0x49D144u;
label_49d144:
    // 0x49d144: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_49d148:
    if (ctx->pc == 0x49D148u) {
        ctx->pc = 0x49D148u;
            // 0x49d148: 0xae4200d4  sw          $v0, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x49D14Cu;
        goto label_49d14c;
    }
    ctx->pc = 0x49D144u;
    {
        const bool branch_taken_0x49d144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d144) {
            ctx->pc = 0x49D148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49D144u;
            // 0x49d148: 0xae4200d4  sw          $v0, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49D188u;
            goto label_49d188;
        }
    }
    ctx->pc = 0x49D14Cu;
label_49d14c:
    // 0x49d14c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x49d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_49d150:
    // 0x49d150: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x49d150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_49d154:
    // 0x49d154: 0x2484cfe0  addiu       $a0, $a0, -0x3020
    ctx->pc = 0x49d154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954976));
label_49d158:
    // 0x49d158: 0x246324a0  addiu       $v1, $v1, 0x24A0
    ctx->pc = 0x49d158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9376));
label_49d15c:
    // 0x49d15c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x49d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_49d160:
    // 0x49d160: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x49d160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_49d164:
    // 0x49d164: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x49d164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_49d168:
    // 0x49d168: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x49d168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_49d16c:
    // 0x49d16c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49d170:
    // 0x49d170: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x49d170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_49d174:
    // 0x49d174: 0x2463fe80  addiu       $v1, $v1, -0x180
    ctx->pc = 0x49d174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966912));
label_49d178:
    // 0x49d178: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x49d178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_49d17c:
    // 0x49d17c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x49d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_49d180:
    // 0x49d180: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x49d180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_49d184:
    // 0x49d184: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x49d184u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
label_49d188:
    // 0x49d188: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x49d188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_49d18c:
    // 0x49d18c: 0xc04c968  jal         func_1325A0
label_49d190:
    if (ctx->pc == 0x49D190u) {
        ctx->pc = 0x49D190u;
            // 0x49d190: 0x26510010  addiu       $s1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x49D194u;
        goto label_49d194;
    }
    ctx->pc = 0x49D18Cu;
    SET_GPR_U32(ctx, 31, 0x49D194u);
    ctx->pc = 0x49D190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D18Cu;
            // 0x49d190: 0x26510010  addiu       $s1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D194u; }
        if (ctx->pc != 0x49D194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D194u; }
        if (ctx->pc != 0x49D194u) { return; }
    }
    ctx->pc = 0x49D194u;
label_49d194:
    // 0x49d194: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x49d194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49d198:
    // 0x49d198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49d198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49d19c:
    // 0x49d19c: 0x0  nop
    ctx->pc = 0x49d19cu;
    // NOP
label_49d1a0:
    // 0x49d1a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x49d1a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49d1a4:
    // 0x49d1a4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_49d1a8:
    if (ctx->pc == 0x49D1A8u) {
        ctx->pc = 0x49D1A8u;
            // 0x49d1a8: 0xc6210004  lwc1        $f1, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x49D1ACu;
        goto label_49d1ac;
    }
    ctx->pc = 0x49D1A4u;
    {
        const bool branch_taken_0x49d1a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x49d1a4) {
            ctx->pc = 0x49D1A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49D1A4u;
            // 0x49d1a8: 0xc6210004  lwc1        $f1, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x49D1B8u;
            goto label_49d1b8;
        }
    }
    ctx->pc = 0x49D1ACu;
label_49d1ac:
    // 0x49d1ac: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x49d1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d1b0:
    // 0x49d1b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_49d1b4:
    if (ctx->pc == 0x49D1B4u) {
        ctx->pc = 0x49D1B4u;
            // 0x49d1b4: 0xe7a00194  swc1        $f0, 0x194($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
        ctx->pc = 0x49D1B8u;
        goto label_49d1b8;
    }
    ctx->pc = 0x49D1B0u;
    {
        const bool branch_taken_0x49d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D1B0u;
            // 0x49d1b4: 0xe7a00194  swc1        $f0, 0x194($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d1b0) {
            ctx->pc = 0x49D1CCu;
            goto label_49d1cc;
        }
    }
    ctx->pc = 0x49D1B8u;
label_49d1b8:
    // 0x49d1b8: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x49d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
label_49d1bc:
    // 0x49d1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x49d1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49d1c0:
    // 0x49d1c0: 0x0  nop
    ctx->pc = 0x49d1c0u;
    // NOP
label_49d1c4:
    // 0x49d1c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x49d1c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_49d1c8:
    // 0x49d1c8: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x49d1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_49d1cc:
    // 0x49d1cc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x49d1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d1d0:
    // 0x49d1d0: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x49d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_49d1d4:
    // 0x49d1d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x49d1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49d1d8:
    // 0x49d1d8: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x49d1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_49d1dc:
    // 0x49d1dc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x49d1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d1e0:
    // 0x49d1e0: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x49d1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_49d1e4:
    // 0x49d1e4: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x49d1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d1e8:
    // 0x49d1e8: 0xc04c74c  jal         func_131D30
label_49d1ec:
    if (ctx->pc == 0x49D1ECu) {
        ctx->pc = 0x49D1ECu;
            // 0x49d1ec: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->pc = 0x49D1F0u;
        goto label_49d1f0;
    }
    ctx->pc = 0x49D1E8u;
    SET_GPR_U32(ctx, 31, 0x49D1F0u);
    ctx->pc = 0x49D1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D1E8u;
            // 0x49d1ec: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D1F0u; }
        if (ctx->pc != 0x49D1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D1F0u; }
        if (ctx->pc != 0x49D1F0u) { return; }
    }
    ctx->pc = 0x49D1F0u;
label_49d1f0:
    // 0x49d1f0: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x49d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_49d1f4:
    // 0x49d1f4: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x49d1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_49d1f8:
    // 0x49d1f8: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x49d1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_49d1fc:
    // 0x49d1fc: 0xc0d37ec  jal         func_34DFB0
label_49d200:
    if (ctx->pc == 0x49D200u) {
        ctx->pc = 0x49D200u;
            // 0x49d200: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49D204u;
        goto label_49d204;
    }
    ctx->pc = 0x49D1FCu;
    SET_GPR_U32(ctx, 31, 0x49D204u);
    ctx->pc = 0x49D200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D1FCu;
            // 0x49d200: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D204u; }
        if (ctx->pc != 0x49D204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D204u; }
        if (ctx->pc != 0x49D204u) { return; }
    }
    ctx->pc = 0x49D204u;
label_49d204:
    // 0x49d204: 0xae5000d8  sw          $s0, 0xD8($s2)
    ctx->pc = 0x49d204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 16));
label_49d208:
    // 0x49d208: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x49d208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_49d20c:
    // 0x49d20c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x49d20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d210:
    // 0x49d210: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x49d210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_49d214:
    // 0x49d214: 0xe6400160  swc1        $f0, 0x160($s2)
    ctx->pc = 0x49d214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 352), bits); }
label_49d218:
    // 0x49d218: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x49d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d21c:
    // 0x49d21c: 0xe6400164  swc1        $f0, 0x164($s2)
    ctx->pc = 0x49d21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 356), bits); }
label_49d220:
    // 0x49d220: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x49d220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d224:
    // 0x49d224: 0xe6400168  swc1        $f0, 0x168($s2)
    ctx->pc = 0x49d224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 360), bits); }
label_49d228:
    // 0x49d228: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x49d228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d22c:
    // 0x49d22c: 0xc04c720  jal         func_131C80
label_49d230:
    if (ctx->pc == 0x49D230u) {
        ctx->pc = 0x49D230u;
            // 0x49d230: 0xe640016c  swc1        $f0, 0x16C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 364), bits); }
        ctx->pc = 0x49D234u;
        goto label_49d234;
    }
    ctx->pc = 0x49D22Cu;
    SET_GPR_U32(ctx, 31, 0x49D234u);
    ctx->pc = 0x49D230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D22Cu;
            // 0x49d230: 0xe640016c  swc1        $f0, 0x16C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 364), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D234u; }
        if (ctx->pc != 0x49D234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D234u; }
        if (ctx->pc != 0x49D234u) { return; }
    }
    ctx->pc = 0x49D234u;
label_49d234:
    // 0x49d234: 0xc040180  jal         func_100600
label_49d238:
    if (ctx->pc == 0x49D238u) {
        ctx->pc = 0x49D238u;
            // 0x49d238: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x49D23Cu;
        goto label_49d23c;
    }
    ctx->pc = 0x49D234u;
    SET_GPR_U32(ctx, 31, 0x49D23Cu);
    ctx->pc = 0x49D238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D234u;
            // 0x49d238: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D23Cu; }
        if (ctx->pc != 0x49D23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D23Cu; }
        if (ctx->pc != 0x49D23Cu) { return; }
    }
    ctx->pc = 0x49D23Cu;
label_49d23c:
    // 0x49d23c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_49d240:
    if (ctx->pc == 0x49D240u) {
        ctx->pc = 0x49D240u;
            // 0x49d240: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x49D244u;
        goto label_49d244;
    }
    ctx->pc = 0x49D23Cu;
    {
        const bool branch_taken_0x49d23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d23c) {
            ctx->pc = 0x49D240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49D23Cu;
            // 0x49d240: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49D28Cu;
            goto label_49d28c;
        }
    }
    ctx->pc = 0x49D244u;
label_49d244:
    // 0x49d244: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x49d244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_49d248:
    // 0x49d248: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x49d248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_49d24c:
    // 0x49d24c: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x49d24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_49d250:
    // 0x49d250: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x49d250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_49d254:
    // 0x49d254: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x49d254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_49d258:
    // 0x49d258: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x49d258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_49d25c:
    // 0x49d25c: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x49d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_49d260:
    // 0x49d260: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x49d260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_49d264:
    // 0x49d264: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x49d264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_49d268:
    // 0x49d268: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x49d268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_49d26c:
    // 0x49d26c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x49d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_49d270:
    // 0x49d270: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x49d270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_49d274:
    // 0x49d274: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x49d274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_49d278:
    // 0x49d278: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x49d278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_49d27c:
    // 0x49d27c: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x49d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_49d280:
    // 0x49d280: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x49d280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_49d284:
    // 0x49d284: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x49d284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_49d288:
    // 0x49d288: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x49d288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_49d28c:
    // 0x49d28c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x49d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_49d290:
    // 0x49d290: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x49d290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_49d294:
    // 0x49d294: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x49d294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_49d298:
    // 0x49d298: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x49d298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_49d29c:
    // 0x49d29c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x49d29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_49d2a0:
    // 0x49d2a0: 0xc040180  jal         func_100600
label_49d2a4:
    if (ctx->pc == 0x49D2A4u) {
        ctx->pc = 0x49D2A4u;
            // 0x49d2a4: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x49D2A8u;
        goto label_49d2a8;
    }
    ctx->pc = 0x49D2A0u;
    SET_GPR_U32(ctx, 31, 0x49D2A8u);
    ctx->pc = 0x49D2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D2A0u;
            // 0x49d2a4: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D2A8u; }
        if (ctx->pc != 0x49D2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D2A8u; }
        if (ctx->pc != 0x49D2A8u) { return; }
    }
    ctx->pc = 0x49D2A8u;
label_49d2a8:
    // 0x49d2a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49d2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49d2ac:
    // 0x49d2ac: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_49d2b0:
    if (ctx->pc == 0x49D2B0u) {
        ctx->pc = 0x49D2B4u;
        goto label_49d2b4;
    }
    ctx->pc = 0x49D2ACu;
    {
        const bool branch_taken_0x49d2ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d2ac) {
            ctx->pc = 0x49D330u;
            goto label_49d330;
        }
    }
    ctx->pc = 0x49D2B4u;
label_49d2b4:
    // 0x49d2b4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x49d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_49d2b8:
    // 0x49d2b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x49d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49d2bc:
    // 0x49d2bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x49d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_49d2c0:
    // 0x49d2c0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x49d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_49d2c4:
    // 0x49d2c4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x49d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_49d2c8:
    // 0x49d2c8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x49d2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_49d2cc:
    // 0x49d2cc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x49d2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_49d2d0:
    // 0x49d2d0: 0xc040138  jal         func_1004E0
label_49d2d4:
    if (ctx->pc == 0x49D2D4u) {
        ctx->pc = 0x49D2D4u;
            // 0x49d2d4: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x49D2D8u;
        goto label_49d2d8;
    }
    ctx->pc = 0x49D2D0u;
    SET_GPR_U32(ctx, 31, 0x49D2D8u);
    ctx->pc = 0x49D2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D2D0u;
            // 0x49d2d4: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D2D8u; }
        if (ctx->pc != 0x49D2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D2D8u; }
        if (ctx->pc != 0x49D2D8u) { return; }
    }
    ctx->pc = 0x49D2D8u;
label_49d2d8:
    // 0x49d2d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49d2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_49d2dc:
    // 0x49d2dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49d2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49d2e0:
    // 0x49d2e0: 0xc040138  jal         func_1004E0
label_49d2e4:
    if (ctx->pc == 0x49D2E4u) {
        ctx->pc = 0x49D2E4u;
            // 0x49d2e4: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x49D2E8u;
        goto label_49d2e8;
    }
    ctx->pc = 0x49D2E0u;
    SET_GPR_U32(ctx, 31, 0x49D2E8u);
    ctx->pc = 0x49D2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D2E0u;
            // 0x49d2e4: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D2E8u; }
        if (ctx->pc != 0x49D2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D2E8u; }
        if (ctx->pc != 0x49D2E8u) { return; }
    }
    ctx->pc = 0x49D2E8u;
label_49d2e8:
    // 0x49d2e8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x49d2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_49d2ec:
    // 0x49d2ec: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x49d2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_49d2f0:
    // 0x49d2f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49d2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49d2f4:
    // 0x49d2f4: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x49d2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_49d2f8:
    // 0x49d2f8: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x49d2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_49d2fc:
    // 0x49d2fc: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x49d2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_49d300:
    // 0x49d300: 0xc040840  jal         func_102100
label_49d304:
    if (ctx->pc == 0x49D304u) {
        ctx->pc = 0x49D304u;
            // 0x49d304: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x49D308u;
        goto label_49d308;
    }
    ctx->pc = 0x49D300u;
    SET_GPR_U32(ctx, 31, 0x49D308u);
    ctx->pc = 0x49D304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D300u;
            // 0x49d304: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D308u; }
        if (ctx->pc != 0x49D308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D308u; }
        if (ctx->pc != 0x49D308u) { return; }
    }
    ctx->pc = 0x49D308u;
label_49d308:
    // 0x49d308: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x49d308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_49d30c:
    // 0x49d30c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x49d30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d310:
    // 0x49d310: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x49d310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_49d314:
    // 0x49d314: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49d314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_49d318:
    // 0x49d318: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x49d318u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_49d31c:
    // 0x49d31c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x49d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_49d320:
    // 0x49d320: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x49d320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_49d324:
    // 0x49d324: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_49d328:
    if (ctx->pc == 0x49D328u) {
        ctx->pc = 0x49D32Cu;
        goto label_49d32c;
    }
    ctx->pc = 0x49D324u;
    {
        const bool branch_taken_0x49d324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49d324) {
            ctx->pc = 0x49D310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49d310;
        }
    }
    ctx->pc = 0x49D32Cu;
label_49d32c:
    // 0x49d32c: 0x0  nop
    ctx->pc = 0x49d32cu;
    // NOP
label_49d330:
    // 0x49d330: 0xae50009c  sw          $s0, 0x9C($s2)
    ctx->pc = 0x49d330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 16));
label_49d334:
    // 0x49d334: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49d334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49d338:
    // 0x49d338: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x49d338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_49d33c:
    // 0x49d33c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x49d33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49d340:
    // 0x49d340: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x49d340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49d344:
    // 0x49d344: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49d344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49d348:
    // 0x49d348: 0xc0e7d2c  jal         func_39F4B0
label_49d34c:
    if (ctx->pc == 0x49D34Cu) {
        ctx->pc = 0x49D34Cu;
            // 0x49d34c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49D350u;
        goto label_49d350;
    }
    ctx->pc = 0x49D348u;
    SET_GPR_U32(ctx, 31, 0x49D350u);
    ctx->pc = 0x49D34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D348u;
            // 0x49d34c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D350u; }
        if (ctx->pc != 0x49D350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D350u; }
        if (ctx->pc != 0x49D350u) { return; }
    }
    ctx->pc = 0x49D350u;
label_49d350:
    // 0x49d350: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x49d350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_49d354:
    // 0x49d354: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x49d354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_49d358:
    // 0x49d358: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x49d358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49d35c:
    // 0x49d35c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x49d35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49d360:
    // 0x49d360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x49d360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49d364:
    // 0x49d364: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49d364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49d368:
    // 0x49d368: 0xc0e7d2c  jal         func_39F4B0
label_49d36c:
    if (ctx->pc == 0x49D36Cu) {
        ctx->pc = 0x49D36Cu;
            // 0x49d36c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49D370u;
        goto label_49d370;
    }
    ctx->pc = 0x49D368u;
    SET_GPR_U32(ctx, 31, 0x49D370u);
    ctx->pc = 0x49D36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D368u;
            // 0x49d36c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D370u; }
        if (ctx->pc != 0x49D370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D370u; }
        if (ctx->pc != 0x49D370u) { return; }
    }
    ctx->pc = 0x49D370u;
label_49d370:
    // 0x49d370: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x49d370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_49d374:
    // 0x49d374: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x49d374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_49d378:
    // 0x49d378: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x49d378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49d37c:
    // 0x49d37c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x49d37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49d380:
    // 0x49d380: 0x2405f9ff  addiu       $a1, $zero, -0x601
    ctx->pc = 0x49d380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_49d384:
    // 0x49d384: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49d384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49d388:
    // 0x49d388: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49d388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_49d38c:
    // 0x49d38c: 0x34880008  ori         $t0, $a0, 0x8
    ctx->pc = 0x49d38cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_49d390:
    // 0x49d390: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x49d390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_49d394:
    // 0x49d394: 0xae4800b0  sw          $t0, 0xB0($s2)
    ctx->pc = 0x49d394u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 8));
label_49d398:
    // 0x49d398: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x49d398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_49d39c:
    // 0x49d39c: 0xa2470064  sb          $a3, 0x64($s2)
    ctx->pc = 0x49d39cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 7));
label_49d3a0:
    // 0x49d3a0: 0xa2400065  sb          $zero, 0x65($s2)
    ctx->pc = 0x49d3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 0));
label_49d3a4:
    // 0x49d3a4: 0xa2460066  sb          $a2, 0x66($s2)
    ctx->pc = 0x49d3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 6));
label_49d3a8:
    // 0x49d3a8: 0xa2400067  sb          $zero, 0x67($s2)
    ctx->pc = 0x49d3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 103), (uint8_t)GPR_U32(ctx, 0));
label_49d3ac:
    // 0x49d3ac: 0x8e4600b0  lw          $a2, 0xB0($s2)
    ctx->pc = 0x49d3acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_49d3b0:
    // 0x49d3b0: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x49d3b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_49d3b4:
    // 0x49d3b4: 0x34a50600  ori         $a1, $a1, 0x600
    ctx->pc = 0x49d3b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1536);
label_49d3b8:
    // 0x49d3b8: 0xae4500b0  sw          $a1, 0xB0($s2)
    ctx->pc = 0x49d3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 5));
label_49d3bc:
    // 0x49d3bc: 0xae43008c  sw          $v1, 0x8C($s2)
    ctx->pc = 0x49d3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
label_49d3c0:
    // 0x49d3c0: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x49d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_49d3c4:
    // 0x49d3c4: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x49d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
label_49d3c8:
    // 0x49d3c8: 0xc040180  jal         func_100600
label_49d3cc:
    if (ctx->pc == 0x49D3CCu) {
        ctx->pc = 0x49D3CCu;
            // 0x49d3cc: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x49D3D0u;
        goto label_49d3d0;
    }
    ctx->pc = 0x49D3C8u;
    SET_GPR_U32(ctx, 31, 0x49D3D0u);
    ctx->pc = 0x49D3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D3C8u;
            // 0x49d3cc: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D3D0u; }
        if (ctx->pc != 0x49D3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D3D0u; }
        if (ctx->pc != 0x49D3D0u) { return; }
    }
    ctx->pc = 0x49D3D0u;
label_49d3d0:
    // 0x49d3d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49d3d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49d3d4:
    // 0x49d3d4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_49d3d8:
    if (ctx->pc == 0x49D3D8u) {
        ctx->pc = 0x49D3D8u;
            // 0x49d3d8: 0x3c02471c  lui         $v0, 0x471C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18204 << 16));
        ctx->pc = 0x49D3DCu;
        goto label_49d3dc;
    }
    ctx->pc = 0x49D3D4u;
    {
        const bool branch_taken_0x49d3d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d3d4) {
            ctx->pc = 0x49D3D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49D3D4u;
            // 0x49d3d8: 0x3c02471c  lui         $v0, 0x471C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18204 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49D414u;
            goto label_49d414;
        }
    }
    ctx->pc = 0x49D3DCu;
label_49d3dc:
    // 0x49d3dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x49d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_49d3e0:
    // 0x49d3e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49d3e4:
    // 0x49d3e4: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x49d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_49d3e8:
    // 0x49d3e8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x49d3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_49d3ec:
    // 0x49d3ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_49d3f0:
    // 0x49d3f0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x49d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_49d3f4:
    // 0x49d3f4: 0xc040138  jal         func_1004E0
label_49d3f8:
    if (ctx->pc == 0x49D3F8u) {
        ctx->pc = 0x49D3F8u;
            // 0x49d3f8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x49D3FCu;
        goto label_49d3fc;
    }
    ctx->pc = 0x49D3F4u;
    SET_GPR_U32(ctx, 31, 0x49D3FCu);
    ctx->pc = 0x49D3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D3F4u;
            // 0x49d3f8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D3FCu; }
        if (ctx->pc != 0x49D3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D3FCu; }
        if (ctx->pc != 0x49D3FCu) { return; }
    }
    ctx->pc = 0x49D3FCu;
label_49d3fc:
    // 0x49d3fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x49d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_49d400:
    // 0x49d400: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x49d400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_49d404:
    // 0x49d404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49d404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d408:
    // 0x49d408: 0xc04a576  jal         func_1295D8
label_49d40c:
    if (ctx->pc == 0x49D40Cu) {
        ctx->pc = 0x49D40Cu;
            // 0x49d40c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x49D410u;
        goto label_49d410;
    }
    ctx->pc = 0x49D408u;
    SET_GPR_U32(ctx, 31, 0x49D410u);
    ctx->pc = 0x49D40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D408u;
            // 0x49d40c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D410u; }
        if (ctx->pc != 0x49D410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D410u; }
        if (ctx->pc != 0x49D410u) { return; }
    }
    ctx->pc = 0x49D410u;
label_49d410:
    // 0x49d410: 0x3c02471c  lui         $v0, 0x471C
    ctx->pc = 0x49d410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18204 << 16));
label_49d414:
    // 0x49d414: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x49d414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_49d418:
    // 0x49d418: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x49d418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_49d41c:
    // 0x49d41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49d41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d420:
    // 0x49d420: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x49d420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49d424:
    // 0x49d424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49d424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d428:
    // 0x49d428: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x49d428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_49d42c:
    // 0x49d42c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x49d42cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d430:
    // 0x49d430: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x49d430u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_49d434:
    // 0x49d434: 0x344616ae  ori         $a2, $v0, 0x16AE
    ctx->pc = 0x49d434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5806);
label_49d438:
    // 0x49d438: 0xc122cd8  jal         func_48B360
label_49d43c:
    if (ctx->pc == 0x49D43Cu) {
        ctx->pc = 0x49D43Cu;
            // 0x49d43c: 0xae500174  sw          $s0, 0x174($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 16));
        ctx->pc = 0x49D440u;
        goto label_49d440;
    }
    ctx->pc = 0x49D438u;
    SET_GPR_U32(ctx, 31, 0x49D440u);
    ctx->pc = 0x49D43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D438u;
            // 0x49d43c: 0xae500174  sw          $s0, 0x174($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D440u; }
        if (ctx->pc != 0x49D440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D440u; }
        if (ctx->pc != 0x49D440u) { return; }
    }
    ctx->pc = 0x49D440u;
label_49d440:
    // 0x49d440: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x49d440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_49d444:
    // 0x49d444: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49d444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49d448:
    // 0x49d448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49d448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49d44c:
    // 0x49d44c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49d44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49d450:
    // 0x49d450: 0x3e00008  jr          $ra
label_49d454:
    if (ctx->pc == 0x49D454u) {
        ctx->pc = 0x49D454u;
            // 0x49d454: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x49D458u;
        goto label_49d458;
    }
    ctx->pc = 0x49D450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D450u;
            // 0x49d454: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49D458u;
label_49d458:
    // 0x49d458: 0x0  nop
    ctx->pc = 0x49d458u;
    // NOP
label_49d45c:
    // 0x49d45c: 0x0  nop
    ctx->pc = 0x49d45cu;
    // NOP
label_49d460:
    // 0x49d460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49d460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49d464:
    // 0x49d464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49d464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49d468:
    // 0x49d468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49d468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49d46c:
    // 0x49d46c: 0xc0e3580  jal         func_38D600
label_49d470:
    if (ctx->pc == 0x49D470u) {
        ctx->pc = 0x49D470u;
            // 0x49d470: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49D474u;
        goto label_49d474;
    }
    ctx->pc = 0x49D46Cu;
    SET_GPR_U32(ctx, 31, 0x49D474u);
    ctx->pc = 0x49D470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D46Cu;
            // 0x49d470: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D474u; }
        if (ctx->pc != 0x49D474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D474u; }
        if (ctx->pc != 0x49D474u) { return; }
    }
    ctx->pc = 0x49D474u;
label_49d474:
    // 0x49d474: 0x8e0700b0  lw          $a3, 0xB0($s0)
    ctx->pc = 0x49d474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_49d478:
    // 0x49d478: 0x2406f9ff  addiu       $a2, $zero, -0x601
    ctx->pc = 0x49d478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_49d47c:
    // 0x49d47c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x49d47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49d480:
    // 0x49d480: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x49d480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_49d484:
    // 0x49d484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49d484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49d488:
    // 0x49d488: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x49d488u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_49d48c:
    // 0x49d48c: 0x34c60600  ori         $a2, $a2, 0x600
    ctx->pc = 0x49d48cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1536);
label_49d490:
    // 0x49d490: 0xae0600b0  sw          $a2, 0xB0($s0)
    ctx->pc = 0x49d490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 6));
label_49d494:
    // 0x49d494: 0xa2050064  sb          $a1, 0x64($s0)
    ctx->pc = 0x49d494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 5));
label_49d498:
    // 0x49d498: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x49d498u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_49d49c:
    // 0x49d49c: 0xa2040068  sb          $a0, 0x68($s0)
    ctx->pc = 0x49d49cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 4));
label_49d4a0:
    // 0x49d4a0: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x49d4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
label_49d4a4:
    // 0x49d4a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49d4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49d4a8:
    // 0x49d4a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49d4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49d4ac:
    // 0x49d4ac: 0x3e00008  jr          $ra
label_49d4b0:
    if (ctx->pc == 0x49D4B0u) {
        ctx->pc = 0x49D4B0u;
            // 0x49d4b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x49D4B4u;
        goto label_49d4b4;
    }
    ctx->pc = 0x49D4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D4ACu;
            // 0x49d4b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49D4B4u;
label_49d4b4:
    // 0x49d4b4: 0x0  nop
    ctx->pc = 0x49d4b4u;
    // NOP
label_49d4b8:
    // 0x49d4b8: 0x0  nop
    ctx->pc = 0x49d4b8u;
    // NOP
label_49d4bc:
    // 0x49d4bc: 0x0  nop
    ctx->pc = 0x49d4bcu;
    // NOP
label_49d4c0:
    // 0x49d4c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x49d4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_49d4c4:
    // 0x49d4c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49d4c8:
    // 0x49d4c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49d4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49d4cc:
    // 0x49d4cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x49d4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_49d4d0:
    // 0x49d4d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x49d4d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_49d4d4:
    // 0x49d4d4: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x49d4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_49d4d8:
    // 0x49d4d8: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
label_49d4dc:
    if (ctx->pc == 0x49D4DCu) {
        ctx->pc = 0x49D4DCu;
            // 0x49d4dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49D4E0u;
        goto label_49d4e0;
    }
    ctx->pc = 0x49D4D8u;
    {
        const bool branch_taken_0x49d4d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x49D4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D4D8u;
            // 0x49d4dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d4d8) {
            ctx->pc = 0x49D564u;
            goto label_49d564;
        }
    }
    ctx->pc = 0x49D4E0u;
label_49d4e0:
    // 0x49d4e0: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_49d4e4:
    if (ctx->pc == 0x49D4E4u) {
        ctx->pc = 0x49D4E4u;
            // 0x49d4e4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x49D4E8u;
        goto label_49d4e8;
    }
    ctx->pc = 0x49D4E0u;
    {
        const bool branch_taken_0x49d4e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d4e0) {
            ctx->pc = 0x49D4E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49D4E0u;
            // 0x49d4e4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49D4F0u;
            goto label_49d4f0;
        }
    }
    ctx->pc = 0x49D4E8u;
label_49d4e8:
    // 0x49d4e8: 0x10000155  b           . + 4 + (0x155 << 2)
label_49d4ec:
    if (ctx->pc == 0x49D4ECu) {
        ctx->pc = 0x49D4ECu;
            // 0x49d4ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x49D4F0u;
        goto label_49d4f0;
    }
    ctx->pc = 0x49D4E8u;
    {
        const bool branch_taken_0x49d4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D4E8u;
            // 0x49d4ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d4e8) {
            ctx->pc = 0x49DA40u;
            goto label_49da40;
        }
    }
    ctx->pc = 0x49D4F0u;
label_49d4f0:
    // 0x49d4f0: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x49d4f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_49d4f4:
    // 0x49d4f4: 0x320f809  jalr        $t9
label_49d4f8:
    if (ctx->pc == 0x49D4F8u) {
        ctx->pc = 0x49D4FCu;
        goto label_49d4fc;
    }
    ctx->pc = 0x49D4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49D4FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49D4FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49D4FCu; }
            if (ctx->pc != 0x49D4FCu) { return; }
        }
        }
    }
    ctx->pc = 0x49D4FCu;
label_49d4fc:
    // 0x49d4fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x49d4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_49d500:
    // 0x49d500: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x49d500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_49d504:
    // 0x49d504: 0x8c637c10  lw          $v1, 0x7C10($v1)
    ctx->pc = 0x49d504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31760)));
label_49d508:
    // 0x49d508: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x49d508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_49d50c:
    // 0x49d50c: 0x8c680030  lw          $t0, 0x30($v1)
    ctx->pc = 0x49d50cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_49d510:
    // 0x49d510: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x49d510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
label_49d514:
    // 0x49d514: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x49d514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_49d518:
    // 0x49d518: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x49d518u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49d51c:
    // 0x49d51c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x49d51cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_49d520:
    // 0x49d520: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x49d520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_49d524:
    // 0x49d524: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x49d524u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_49d528:
    // 0x49d528: 0x8c643f50  lw          $a0, 0x3F50($v1)
    ctx->pc = 0x49d528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16208)));
label_49d52c:
    // 0x49d52c: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x49d52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_49d530:
    // 0x49d530: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x49d530u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_49d534:
    // 0x49d534: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x49d534u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_49d538:
    // 0x49d538: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x49d538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_49d53c:
    // 0x49d53c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x49d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_49d540:
    // 0x49d540: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x49d540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_49d544:
    // 0x49d544: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x49d544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49d548:
    // 0x49d548: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x49d548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_49d54c:
    // 0x49d54c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x49d54cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_49d550:
    // 0x49d550: 0x1d20fff3  bgtz        $t1, . + 4 + (-0xD << 2)
label_49d554:
    if (ctx->pc == 0x49D554u) {
        ctx->pc = 0x49D554u;
            // 0x49d554: 0xa0e40020  sb          $a0, 0x20($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x49D558u;
        goto label_49d558;
    }
    ctx->pc = 0x49D550u;
    {
        const bool branch_taken_0x49d550 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x49D554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D550u;
            // 0x49d554: 0xa0e40020  sb          $a0, 0x20($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d550) {
            ctx->pc = 0x49D520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49d520;
        }
    }
    ctx->pc = 0x49D558u;
label_49d558:
    // 0x49d558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49d558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49d55c:
    // 0x49d55c: 0x10000137  b           . + 4 + (0x137 << 2)
label_49d560:
    if (ctx->pc == 0x49D560u) {
        ctx->pc = 0x49D560u;
            // 0x49d560: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x49D564u;
        goto label_49d564;
    }
    ctx->pc = 0x49D55Cu;
    {
        const bool branch_taken_0x49d55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D55Cu;
            // 0x49d560: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d55c) {
            ctx->pc = 0x49DA3Cu;
            goto label_49da3c;
        }
    }
    ctx->pc = 0x49D564u;
label_49d564:
    // 0x49d564: 0xc0b6e68  jal         func_2DB9A0
label_49d568:
    if (ctx->pc == 0x49D568u) {
        ctx->pc = 0x49D568u;
            // 0x49d568: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x49D56Cu;
        goto label_49d56c;
    }
    ctx->pc = 0x49D564u;
    SET_GPR_U32(ctx, 31, 0x49D56Cu);
    ctx->pc = 0x49D568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D564u;
            // 0x49d568: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D56Cu; }
        if (ctx->pc != 0x49D56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D56Cu; }
        if (ctx->pc != 0x49D56Cu) { return; }
    }
    ctx->pc = 0x49D56Cu;
label_49d56c:
    // 0x49d56c: 0xc127698  jal         func_49DA60
label_49d570:
    if (ctx->pc == 0x49D570u) {
        ctx->pc = 0x49D570u;
            // 0x49d570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49D574u;
        goto label_49d574;
    }
    ctx->pc = 0x49D56Cu;
    SET_GPR_U32(ctx, 31, 0x49D574u);
    ctx->pc = 0x49D570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D56Cu;
            // 0x49d570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49DA60u;
    if (runtime->hasFunction(0x49DA60u)) {
        auto targetFn = runtime->lookupFunction(0x49DA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D574u; }
        if (ctx->pc != 0x49D574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049DA60_0x49da60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D574u; }
        if (ctx->pc != 0x49D574u) { return; }
    }
    ctx->pc = 0x49D574u;
label_49d574:
    // 0x49d574: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x49d574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49d578:
    // 0x49d578: 0x104300d5  beq         $v0, $v1, . + 4 + (0xD5 << 2)
label_49d57c:
    if (ctx->pc == 0x49D57Cu) {
        ctx->pc = 0x49D580u;
        goto label_49d580;
    }
    ctx->pc = 0x49D578u;
    {
        const bool branch_taken_0x49d578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49d578) {
            ctx->pc = 0x49D8D0u;
            goto label_49d8d0;
        }
    }
    ctx->pc = 0x49D580u;
label_49d580:
    // 0x49d580: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49d580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49d584:
    // 0x49d584: 0x50430095  beql        $v0, $v1, . + 4 + (0x95 << 2)
label_49d588:
    if (ctx->pc == 0x49D588u) {
        ctx->pc = 0x49D588u;
            // 0x49d588: 0xc60000fc  lwc1        $f0, 0xFC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x49D58Cu;
        goto label_49d58c;
    }
    ctx->pc = 0x49D584u;
    {
        const bool branch_taken_0x49d584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49d584) {
            ctx->pc = 0x49D588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49D584u;
            // 0x49d588: 0xc60000fc  lwc1        $f0, 0xFC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x49D7DCu;
            goto label_49d7dc;
        }
    }
    ctx->pc = 0x49D58Cu;
label_49d58c:
    // 0x49d58c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49d58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49d590:
    // 0x49d590: 0x10430035  beq         $v0, $v1, . + 4 + (0x35 << 2)
label_49d594:
    if (ctx->pc == 0x49D594u) {
        ctx->pc = 0x49D598u;
        goto label_49d598;
    }
    ctx->pc = 0x49D590u;
    {
        const bool branch_taken_0x49d590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49d590) {
            ctx->pc = 0x49D668u;
            goto label_49d668;
        }
    }
    ctx->pc = 0x49D598u;
label_49d598:
    // 0x49d598: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_49d59c:
    if (ctx->pc == 0x49D59Cu) {
        ctx->pc = 0x49D59Cu;
            // 0x49d59c: 0xc60100fc  lwc1        $f1, 0xFC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x49D5A0u;
        goto label_49d5a0;
    }
    ctx->pc = 0x49D598u;
    {
        const bool branch_taken_0x49d598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d598) {
            ctx->pc = 0x49D59Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49D598u;
            // 0x49d59c: 0xc60100fc  lwc1        $f1, 0xFC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x49D5A8u;
            goto label_49d5a8;
        }
    }
    ctx->pc = 0x49D5A0u;
label_49d5a0:
    // 0x49d5a0: 0x10000126  b           . + 4 + (0x126 << 2)
label_49d5a4:
    if (ctx->pc == 0x49D5A4u) {
        ctx->pc = 0x49D5A4u;
            // 0x49d5a4: 0xa6000130  sh          $zero, 0x130($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x49D5A8u;
        goto label_49d5a8;
    }
    ctx->pc = 0x49D5A0u;
    {
        const bool branch_taken_0x49d5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D5A0u;
            // 0x49d5a4: 0xa6000130  sh          $zero, 0x130($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d5a0) {
            ctx->pc = 0x49DA3Cu;
            goto label_49da3c;
        }
    }
    ctx->pc = 0x49D5A8u;
label_49d5a8:
    // 0x49d5a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49d5a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49d5ac:
    // 0x49d5ac: 0x0  nop
    ctx->pc = 0x49d5acu;
    // NOP
label_49d5b0:
    // 0x49d5b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x49d5b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49d5b4:
    // 0x49d5b4: 0x45010120  bc1t        . + 4 + (0x120 << 2)
label_49d5b8:
    if (ctx->pc == 0x49D5B8u) {
        ctx->pc = 0x49D5BCu;
        goto label_49d5bc;
    }
    ctx->pc = 0x49D5B4u;
    {
        const bool branch_taken_0x49d5b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49d5b4) {
            ctx->pc = 0x49DA38u;
            goto label_49da38;
        }
    }
    ctx->pc = 0x49D5BCu;
label_49d5bc:
    // 0x49d5bc: 0xc0775b8  jal         func_1DD6E0
label_49d5c0:
    if (ctx->pc == 0x49D5C0u) {
        ctx->pc = 0x49D5C4u;
        goto label_49d5c4;
    }
    ctx->pc = 0x49D5BCu;
    SET_GPR_U32(ctx, 31, 0x49D5C4u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D5C4u; }
        if (ctx->pc != 0x49D5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D5C4u; }
        if (ctx->pc != 0x49D5C4u) { return; }
    }
    ctx->pc = 0x49D5C4u;
label_49d5c4:
    // 0x49d5c4: 0xc0775b4  jal         func_1DD6D0
label_49d5c8:
    if (ctx->pc == 0x49D5C8u) {
        ctx->pc = 0x49D5C8u;
            // 0x49d5c8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49D5CCu;
        goto label_49d5cc;
    }
    ctx->pc = 0x49D5C4u;
    SET_GPR_U32(ctx, 31, 0x49D5CCu);
    ctx->pc = 0x49D5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D5C4u;
            // 0x49d5c8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D5CCu; }
        if (ctx->pc != 0x49D5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D5CCu; }
        if (ctx->pc != 0x49D5CCu) { return; }
    }
    ctx->pc = 0x49D5CCu;
label_49d5cc:
    // 0x49d5cc: 0xc60200fc  lwc1        $f2, 0xFC($s0)
    ctx->pc = 0x49d5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49d5d0:
    // 0x49d5d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x49d5d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_49d5d4:
    // 0x49d5d4: 0x0  nop
    ctx->pc = 0x49d5d4u;
    // NOP
label_49d5d8:
    // 0x49d5d8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x49d5d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_49d5dc:
    // 0x49d5dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x49d5dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49d5e0:
    // 0x49d5e0: 0x45000115  bc1f        . + 4 + (0x115 << 2)
label_49d5e4:
    if (ctx->pc == 0x49D5E4u) {
        ctx->pc = 0x49D5E4u;
            // 0x49d5e4: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->pc = 0x49D5E8u;
        goto label_49d5e8;
    }
    ctx->pc = 0x49D5E0u;
    {
        const bool branch_taken_0x49d5e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x49D5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D5E0u;
            // 0x49d5e4: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d5e0) {
            ctx->pc = 0x49DA38u;
            goto label_49da38;
        }
    }
    ctx->pc = 0x49D5E8u;
label_49d5e8:
    // 0x49d5e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x49d5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_49d5ec:
    // 0x49d5ec: 0xc0b6de4  jal         func_2DB790
label_49d5f0:
    if (ctx->pc == 0x49D5F0u) {
        ctx->pc = 0x49D5F0u;
            // 0x49d5f0: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->pc = 0x49D5F4u;
        goto label_49d5f4;
    }
    ctx->pc = 0x49D5ECu;
    SET_GPR_U32(ctx, 31, 0x49D5F4u);
    ctx->pc = 0x49D5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D5ECu;
            // 0x49d5f0: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB790u;
    if (runtime->hasFunction(0x2DB790u)) {
        auto targetFn = runtime->lookupFunction(0x2DB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D5F4u; }
        if (ctx->pc != 0x49D5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB790_0x2db790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D5F4u; }
        if (ctx->pc != 0x49D5F4u) { return; }
    }
    ctx->pc = 0x49D5F4u;
label_49d5f4:
    // 0x49d5f4: 0xc0b6e84  jal         func_2DBA10
label_49d5f8:
    if (ctx->pc == 0x49D5F8u) {
        ctx->pc = 0x49D5FCu;
        goto label_49d5fc;
    }
    ctx->pc = 0x49D5F4u;
    SET_GPR_U32(ctx, 31, 0x49D5FCu);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D5FCu; }
        if (ctx->pc != 0x49D5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D5FCu; }
        if (ctx->pc != 0x49D5FCu) { return; }
    }
    ctx->pc = 0x49D5FCu;
label_49d5fc:
    // 0x49d5fc: 0xc0b6e60  jal         func_2DB980
label_49d600:
    if (ctx->pc == 0x49D600u) {
        ctx->pc = 0x49D600u;
            // 0x49d600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49D604u;
        goto label_49d604;
    }
    ctx->pc = 0x49D5FCu;
    SET_GPR_U32(ctx, 31, 0x49D604u);
    ctx->pc = 0x49D600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D5FCu;
            // 0x49d600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D604u; }
        if (ctx->pc != 0x49D604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D604u; }
        if (ctx->pc != 0x49D604u) { return; }
    }
    ctx->pc = 0x49D604u;
label_49d604:
    // 0x49d604: 0xc0b6e38  jal         func_2DB8E0
label_49d608:
    if (ctx->pc == 0x49D608u) {
        ctx->pc = 0x49D608u;
            // 0x49d608: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x49D60Cu;
        goto label_49d60c;
    }
    ctx->pc = 0x49D604u;
    SET_GPR_U32(ctx, 31, 0x49D60Cu);
    ctx->pc = 0x49D608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D604u;
            // 0x49d608: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D60Cu; }
        if (ctx->pc != 0x49D60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D60Cu; }
        if (ctx->pc != 0x49D60Cu) { return; }
    }
    ctx->pc = 0x49D60Cu;
label_49d60c:
    // 0x49d60c: 0xc0775b8  jal         func_1DD6E0
label_49d610:
    if (ctx->pc == 0x49D610u) {
        ctx->pc = 0x49D610u;
            // 0x49d610: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x49D614u;
        goto label_49d614;
    }
    ctx->pc = 0x49D60Cu;
    SET_GPR_U32(ctx, 31, 0x49D614u);
    ctx->pc = 0x49D610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D60Cu;
            // 0x49d610: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D614u; }
        if (ctx->pc != 0x49D614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D614u; }
        if (ctx->pc != 0x49D614u) { return; }
    }
    ctx->pc = 0x49D614u;
label_49d614:
    // 0x49d614: 0xc0775b4  jal         func_1DD6D0
label_49d618:
    if (ctx->pc == 0x49D618u) {
        ctx->pc = 0x49D618u;
            // 0x49d618: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49D61Cu;
        goto label_49d61c;
    }
    ctx->pc = 0x49D614u;
    SET_GPR_U32(ctx, 31, 0x49D61Cu);
    ctx->pc = 0x49D618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D614u;
            // 0x49d618: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D61Cu; }
        if (ctx->pc != 0x49D61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D61Cu; }
        if (ctx->pc != 0x49D61Cu) { return; }
    }
    ctx->pc = 0x49D61Cu;
label_49d61c:
    // 0x49d61c: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x49d61cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_49d620:
    // 0x49d620: 0xc0b6e28  jal         func_2DB8A0
label_49d624:
    if (ctx->pc == 0x49D624u) {
        ctx->pc = 0x49D624u;
            // 0x49d624: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x49D628u;
        goto label_49d628;
    }
    ctx->pc = 0x49D620u;
    SET_GPR_U32(ctx, 31, 0x49D628u);
    ctx->pc = 0x49D624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D620u;
            // 0x49d624: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D628u; }
        if (ctx->pc != 0x49D628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D628u; }
        if (ctx->pc != 0x49D628u) { return; }
    }
    ctx->pc = 0x49D628u;
label_49d628:
    // 0x49d628: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x49d628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_49d62c:
    // 0x49d62c: 0xc0e07f8  jal         func_381FE0
label_49d630:
    if (ctx->pc == 0x49D630u) {
        ctx->pc = 0x49D630u;
            // 0x49d630: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x49D634u;
        goto label_49d634;
    }
    ctx->pc = 0x49D62Cu;
    SET_GPR_U32(ctx, 31, 0x49D634u);
    ctx->pc = 0x49D630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D62Cu;
            // 0x49d630: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D634u; }
        if (ctx->pc != 0x49D634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D634u; }
        if (ctx->pc != 0x49D634u) { return; }
    }
    ctx->pc = 0x49D634u;
label_49d634:
    // 0x49d634: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x49d634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d638:
    // 0x49d638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49d638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d63c:
    // 0x49d63c: 0xc0d1c10  jal         func_347040
label_49d640:
    if (ctx->pc == 0x49D640u) {
        ctx->pc = 0x49D640u;
            // 0x49d640: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->pc = 0x49D644u;
        goto label_49d644;
    }
    ctx->pc = 0x49D63Cu;
    SET_GPR_U32(ctx, 31, 0x49D644u);
    ctx->pc = 0x49D640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D63Cu;
            // 0x49d640: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D644u; }
        if (ctx->pc != 0x49D644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D644u; }
        if (ctx->pc != 0x49D644u) { return; }
    }
    ctx->pc = 0x49D644u;
label_49d644:
    // 0x49d644: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x49d644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_49d648:
    // 0x49d648: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x49d648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49d64c:
    // 0x49d64c: 0xc122d2c  jal         func_48B4B0
label_49d650:
    if (ctx->pc == 0x49D650u) {
        ctx->pc = 0x49D650u;
            // 0x49d650: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49D654u;
        goto label_49d654;
    }
    ctx->pc = 0x49D64Cu;
    SET_GPR_U32(ctx, 31, 0x49D654u);
    ctx->pc = 0x49D650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D64Cu;
            // 0x49d650: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D654u; }
        if (ctx->pc != 0x49D654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D654u; }
        if (ctx->pc != 0x49D654u) { return; }
    }
    ctx->pc = 0x49D654u;
label_49d654:
    // 0x49d654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49d654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d658:
    // 0x49d658: 0xc127694  jal         func_49DA50
label_49d65c:
    if (ctx->pc == 0x49D65Cu) {
        ctx->pc = 0x49D65Cu;
            // 0x49d65c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49D660u;
        goto label_49d660;
    }
    ctx->pc = 0x49D658u;
    SET_GPR_U32(ctx, 31, 0x49D660u);
    ctx->pc = 0x49D65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D658u;
            // 0x49d65c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49DA50u;
    if (runtime->hasFunction(0x49DA50u)) {
        auto targetFn = runtime->lookupFunction(0x49DA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D660u; }
        if (ctx->pc != 0x49D660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049DA50_0x49da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D660u; }
        if (ctx->pc != 0x49D660u) { return; }
    }
    ctx->pc = 0x49D660u;
label_49d660:
    // 0x49d660: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_49d664:
    if (ctx->pc == 0x49D664u) {
        ctx->pc = 0x49D668u;
        goto label_49d668;
    }
    ctx->pc = 0x49D660u;
    {
        const bool branch_taken_0x49d660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d660) {
            ctx->pc = 0x49DA38u;
            goto label_49da38;
        }
    }
    ctx->pc = 0x49D668u;
label_49d668:
    // 0x49d668: 0xc0775b8  jal         func_1DD6E0
label_49d66c:
    if (ctx->pc == 0x49D66Cu) {
        ctx->pc = 0x49D670u;
        goto label_49d670;
    }
    ctx->pc = 0x49D668u;
    SET_GPR_U32(ctx, 31, 0x49D670u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D670u; }
        if (ctx->pc != 0x49D670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D670u; }
        if (ctx->pc != 0x49D670u) { return; }
    }
    ctx->pc = 0x49D670u;
label_49d670:
    // 0x49d670: 0xc0775b4  jal         func_1DD6D0
label_49d674:
    if (ctx->pc == 0x49D674u) {
        ctx->pc = 0x49D674u;
            // 0x49d674: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49D678u;
        goto label_49d678;
    }
    ctx->pc = 0x49D670u;
    SET_GPR_U32(ctx, 31, 0x49D678u);
    ctx->pc = 0x49D674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D670u;
            // 0x49d674: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D678u; }
        if (ctx->pc != 0x49D678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D678u; }
        if (ctx->pc != 0x49D678u) { return; }
    }
    ctx->pc = 0x49D678u;
label_49d678:
    // 0x49d678: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x49d678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49d67c:
    // 0x49d67c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x49d67cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_49d680:
    // 0x49d680: 0xc0775b8  jal         func_1DD6E0
label_49d684:
    if (ctx->pc == 0x49D684u) {
        ctx->pc = 0x49D684u;
            // 0x49d684: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->pc = 0x49D688u;
        goto label_49d688;
    }
    ctx->pc = 0x49D680u;
    SET_GPR_U32(ctx, 31, 0x49D688u);
    ctx->pc = 0x49D684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D680u;
            // 0x49d684: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D688u; }
        if (ctx->pc != 0x49D688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D688u; }
        if (ctx->pc != 0x49D688u) { return; }
    }
    ctx->pc = 0x49D688u;
label_49d688:
    // 0x49d688: 0xc0775b4  jal         func_1DD6D0
label_49d68c:
    if (ctx->pc == 0x49D68Cu) {
        ctx->pc = 0x49D68Cu;
            // 0x49d68c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49D690u;
        goto label_49d690;
    }
    ctx->pc = 0x49D688u;
    SET_GPR_U32(ctx, 31, 0x49D690u);
    ctx->pc = 0x49D68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D688u;
            // 0x49d68c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D690u; }
        if (ctx->pc != 0x49D690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D690u; }
        if (ctx->pc != 0x49D690u) { return; }
    }
    ctx->pc = 0x49D690u;
label_49d690:
    // 0x49d690: 0xc60200dc  lwc1        $f2, 0xDC($s0)
    ctx->pc = 0x49d690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49d694:
    // 0x49d694: 0xc60300f0  lwc1        $f3, 0xF0($s0)
    ctx->pc = 0x49d694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_49d698:
    // 0x49d698: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x49d698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_49d69c:
    // 0x49d69c: 0x0  nop
    ctx->pc = 0x49d69cu;
    // NOP
label_49d6a0:
    // 0x49d6a0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x49d6a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_49d6a4:
    // 0x49d6a4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x49d6a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_49d6a8:
    // 0x49d6a8: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x49d6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
label_49d6ac:
    // 0x49d6ac: 0xc60c0160  lwc1        $f12, 0x160($s0)
    ctx->pc = 0x49d6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_49d6b0:
    // 0x49d6b0: 0xc60d00dc  lwc1        $f13, 0xDC($s0)
    ctx->pc = 0x49d6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_49d6b4:
    // 0x49d6b4: 0xc60e0168  lwc1        $f14, 0x168($s0)
    ctx->pc = 0x49d6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_49d6b8:
    // 0x49d6b8: 0xc0d3f08  jal         func_34FC20
label_49d6bc:
    if (ctx->pc == 0x49D6BCu) {
        ctx->pc = 0x49D6BCu;
            // 0x49d6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49D6C0u;
        goto label_49d6c0;
    }
    ctx->pc = 0x49D6B8u;
    SET_GPR_U32(ctx, 31, 0x49D6C0u);
    ctx->pc = 0x49D6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D6B8u;
            // 0x49d6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (runtime->hasFunction(0x34FC20u)) {
        auto targetFn = runtime->lookupFunction(0x34FC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D6C0u; }
        if (ctx->pc != 0x49D6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FC20_0x34fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D6C0u; }
        if (ctx->pc != 0x49D6C0u) { return; }
    }
    ctx->pc = 0x49D6C0u;
label_49d6c0:
    // 0x49d6c0: 0xc60000fc  lwc1        $f0, 0xFC($s0)
    ctx->pc = 0x49d6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d6c4:
    // 0x49d6c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x49d6c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49d6c8:
    // 0x49d6c8: 0x0  nop
    ctx->pc = 0x49d6c8u;
    // NOP
label_49d6cc:
    // 0x49d6cc: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x49d6ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49d6d0:
    // 0x49d6d0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_49d6d4:
    if (ctx->pc == 0x49D6D4u) {
        ctx->pc = 0x49D6D8u;
        goto label_49d6d8;
    }
    ctx->pc = 0x49D6D0u;
    {
        const bool branch_taken_0x49d6d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x49d6d0) {
            ctx->pc = 0x49D70Cu;
            goto label_49d70c;
        }
    }
    ctx->pc = 0x49D6D8u;
label_49d6d8:
    // 0x49d6d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x49d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_49d6dc:
    // 0x49d6dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x49d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_49d6e0:
    // 0x49d6e0: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x49d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
label_49d6e4:
    // 0x49d6e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x49d6e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_49d6e8:
    // 0x49d6e8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x49d6e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_49d6ec:
    // 0x49d6ec: 0xc0b6df0  jal         func_2DB7C0
label_49d6f0:
    if (ctx->pc == 0x49D6F0u) {
        ctx->pc = 0x49D6F0u;
            // 0x49d6f0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x49D6F4u;
        goto label_49d6f4;
    }
    ctx->pc = 0x49D6ECu;
    SET_GPR_U32(ctx, 31, 0x49D6F4u);
    ctx->pc = 0x49D6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D6ECu;
            // 0x49d6f0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D6F4u; }
        if (ctx->pc != 0x49D6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D6F4u; }
        if (ctx->pc != 0x49D6F4u) { return; }
    }
    ctx->pc = 0x49D6F4u;
label_49d6f4:
    // 0x49d6f4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x49d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_49d6f8:
    // 0x49d6f8: 0xc0e07f8  jal         func_381FE0
label_49d6fc:
    if (ctx->pc == 0x49D6FCu) {
        ctx->pc = 0x49D6FCu;
            // 0x49d6fc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x49D700u;
        goto label_49d700;
    }
    ctx->pc = 0x49D6F8u;
    SET_GPR_U32(ctx, 31, 0x49D700u);
    ctx->pc = 0x49D6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D6F8u;
            // 0x49d6fc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D700u; }
        if (ctx->pc != 0x49D700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D700u; }
        if (ctx->pc != 0x49D700u) { return; }
    }
    ctx->pc = 0x49D700u;
label_49d700:
    // 0x49d700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49d700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d704:
    // 0x49d704: 0xc127694  jal         func_49DA50
label_49d708:
    if (ctx->pc == 0x49D708u) {
        ctx->pc = 0x49D708u;
            // 0x49d708: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x49D70Cu;
        goto label_49d70c;
    }
    ctx->pc = 0x49D704u;
    SET_GPR_U32(ctx, 31, 0x49D70Cu);
    ctx->pc = 0x49D708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D704u;
            // 0x49d708: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49DA50u;
    if (runtime->hasFunction(0x49DA50u)) {
        auto targetFn = runtime->lookupFunction(0x49DA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D70Cu; }
        if (ctx->pc != 0x49D70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049DA50_0x49da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D70Cu; }
        if (ctx->pc != 0x49D70Cu) { return; }
    }
    ctx->pc = 0x49D70Cu;
label_49d70c:
    // 0x49d70c: 0xc0775b8  jal         func_1DD6E0
label_49d710:
    if (ctx->pc == 0x49D710u) {
        ctx->pc = 0x49D714u;
        goto label_49d714;
    }
    ctx->pc = 0x49D70Cu;
    SET_GPR_U32(ctx, 31, 0x49D714u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D714u; }
        if (ctx->pc != 0x49D714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D714u; }
        if (ctx->pc != 0x49D714u) { return; }
    }
    ctx->pc = 0x49D714u;
label_49d714:
    // 0x49d714: 0xc0775b4  jal         func_1DD6D0
label_49d718:
    if (ctx->pc == 0x49D718u) {
        ctx->pc = 0x49D718u;
            // 0x49d718: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49D71Cu;
        goto label_49d71c;
    }
    ctx->pc = 0x49D714u;
    SET_GPR_U32(ctx, 31, 0x49D71Cu);
    ctx->pc = 0x49D718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D714u;
            // 0x49d718: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D71Cu; }
        if (ctx->pc != 0x49D71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D71Cu; }
        if (ctx->pc != 0x49D71Cu) { return; }
    }
    ctx->pc = 0x49D71Cu;
label_49d71c:
    // 0x49d71c: 0xc6020158  lwc1        $f2, 0x158($s0)
    ctx->pc = 0x49d71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49d720:
    // 0x49d720: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x49d720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_49d724:
    // 0x49d724: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x49d724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_49d728:
    // 0x49d728: 0x0  nop
    ctx->pc = 0x49d728u;
    // NOP
label_49d72c:
    // 0x49d72c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x49d72cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_49d730:
    // 0x49d730: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x49d730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49d734:
    // 0x49d734: 0x450100c0  bc1t        . + 4 + (0xC0 << 2)
label_49d738:
    if (ctx->pc == 0x49D738u) {
        ctx->pc = 0x49D738u;
            // 0x49d738: 0xe6000158  swc1        $f0, 0x158($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
        ctx->pc = 0x49D73Cu;
        goto label_49d73c;
    }
    ctx->pc = 0x49D734u;
    {
        const bool branch_taken_0x49d734 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x49D738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D734u;
            // 0x49d738: 0xe6000158  swc1        $f0, 0x158($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d734) {
            ctx->pc = 0x49DA38u;
            goto label_49da38;
        }
    }
    ctx->pc = 0x49D73Cu;
label_49d73c:
    // 0x49d73c: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x49d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
label_49d740:
    // 0x49d740: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x49d740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_49d744:
    // 0x49d744: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x49d744u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_49d748:
    // 0x49d748: 0x102000bb  beqz        $at, . + 4 + (0xBB << 2)
label_49d74c:
    if (ctx->pc == 0x49D74Cu) {
        ctx->pc = 0x49D750u;
        goto label_49d750;
    }
    ctx->pc = 0x49D748u;
    {
        const bool branch_taken_0x49d748 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d748) {
            ctx->pc = 0x49DA38u;
            goto label_49da38;
        }
    }
    ctx->pc = 0x49D750u;
label_49d750:
    // 0x49d750: 0xc0d1c10  jal         func_347040
label_49d754:
    if (ctx->pc == 0x49D754u) {
        ctx->pc = 0x49D754u;
            // 0x49d754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49D758u;
        goto label_49d758;
    }
    ctx->pc = 0x49D750u;
    SET_GPR_U32(ctx, 31, 0x49D758u);
    ctx->pc = 0x49D754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D750u;
            // 0x49d754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D758u; }
        if (ctx->pc != 0x49D758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D758u; }
        if (ctx->pc != 0x49D758u) { return; }
    }
    ctx->pc = 0x49D758u;
label_49d758:
    // 0x49d758: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x49d758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d75c:
    // 0x49d75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49d75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d760:
    // 0x49d760: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x49d760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49d764:
    // 0x49d764: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x49d764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49d768:
    // 0x49d768: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x49d768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_49d76c:
    // 0x49d76c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x49d76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d770:
    // 0x49d770: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x49d770u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_49d774:
    // 0x49d774: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x49d774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_49d778:
    // 0x49d778: 0xc0adc64  jal         func_2B7190
label_49d77c:
    if (ctx->pc == 0x49D77Cu) {
        ctx->pc = 0x49D77Cu;
            // 0x49d77c: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x49D780u;
        goto label_49d780;
    }
    ctx->pc = 0x49D778u;
    SET_GPR_U32(ctx, 31, 0x49D780u);
    ctx->pc = 0x49D77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D778u;
            // 0x49d77c: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7190u;
    if (runtime->hasFunction(0x2B7190u)) {
        auto targetFn = runtime->lookupFunction(0x2B7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D780u; }
        if (ctx->pc != 0x49D780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7190_0x2b7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D780u; }
        if (ctx->pc != 0x49D780u) { return; }
    }
    ctx->pc = 0x49D780u;
label_49d780:
    // 0x49d780: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x49d780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d784:
    // 0x49d784: 0x3c0340ec  lui         $v1, 0x40EC
    ctx->pc = 0x49d784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16620 << 16));
label_49d788:
    // 0x49d788: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x49d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49d78c:
    // 0x49d78c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x49d78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_49d790:
    // 0x49d790: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x49d790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49d794:
    // 0x49d794: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x49d794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49d798:
    // 0x49d798: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x49d798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_49d79c:
    // 0x49d79c: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x49d79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_49d7a0:
    // 0x49d7a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x49d7a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49d7a4:
    // 0x49d7a4: 0x0  nop
    ctx->pc = 0x49d7a4u;
    // NOP
label_49d7a8:
    // 0x49d7a8: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x49d7a8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_49d7ac:
    // 0x49d7ac: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x49d7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d7b0:
    // 0x49d7b0: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x49d7b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_49d7b4:
    // 0x49d7b4: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x49d7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_49d7b8:
    // 0x49d7b8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x49d7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_49d7bc:
    // 0x49d7bc: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x49d7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_49d7c0:
    // 0x49d7c0: 0xc7af0090  lwc1        $f15, 0x90($sp)
    ctx->pc = 0x49d7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_49d7c4:
    // 0x49d7c4: 0xc7b00094  lwc1        $f16, 0x94($sp)
    ctx->pc = 0x49d7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_49d7c8:
    // 0x49d7c8: 0xc7b10098  lwc1        $f17, 0x98($sp)
    ctx->pc = 0x49d7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_49d7cc:
    // 0x49d7cc: 0xc0bafb8  jal         func_2EBEE0
label_49d7d0:
    if (ctx->pc == 0x49D7D0u) {
        ctx->pc = 0x49D7D0u;
            // 0x49d7d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x49D7D4u;
        goto label_49d7d4;
    }
    ctx->pc = 0x49D7CCu;
    SET_GPR_U32(ctx, 31, 0x49D7D4u);
    ctx->pc = 0x49D7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D7CCu;
            // 0x49d7d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D7D4u; }
        if (ctx->pc != 0x49D7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D7D4u; }
        if (ctx->pc != 0x49D7D4u) { return; }
    }
    ctx->pc = 0x49D7D4u;
label_49d7d4:
    // 0x49d7d4: 0x10000098  b           . + 4 + (0x98 << 2)
label_49d7d8:
    if (ctx->pc == 0x49D7D8u) {
        ctx->pc = 0x49D7DCu;
        goto label_49d7dc;
    }
    ctx->pc = 0x49D7D4u;
    {
        const bool branch_taken_0x49d7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d7d4) {
            ctx->pc = 0x49DA38u;
            goto label_49da38;
        }
    }
    ctx->pc = 0x49D7DCu;
label_49d7dc:
    // 0x49d7dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x49d7dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_49d7e0:
    // 0x49d7e0: 0x0  nop
    ctx->pc = 0x49d7e0u;
    // NOP
label_49d7e4:
    // 0x49d7e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x49d7e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49d7e8:
    // 0x49d7e8: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_49d7ec:
    if (ctx->pc == 0x49D7ECu) {
        ctx->pc = 0x49D7ECu;
            // 0x49d7ec: 0x86030130  lh          $v1, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->pc = 0x49D7F0u;
        goto label_49d7f0;
    }
    ctx->pc = 0x49D7E8u;
    {
        const bool branch_taken_0x49d7e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49d7e8) {
            ctx->pc = 0x49D7ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49D7E8u;
            // 0x49d7ec: 0x86030130  lh          $v1, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49D810u;
            goto label_49d810;
        }
    }
    ctx->pc = 0x49D7F0u;
label_49d7f0:
    // 0x49d7f0: 0xc0775b8  jal         func_1DD6E0
label_49d7f4:
    if (ctx->pc == 0x49D7F4u) {
        ctx->pc = 0x49D7F8u;
        goto label_49d7f8;
    }
    ctx->pc = 0x49D7F0u;
    SET_GPR_U32(ctx, 31, 0x49D7F8u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D7F8u; }
        if (ctx->pc != 0x49D7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D7F8u; }
        if (ctx->pc != 0x49D7F8u) { return; }
    }
    ctx->pc = 0x49D7F8u;
label_49d7f8:
    // 0x49d7f8: 0xc0775b4  jal         func_1DD6D0
label_49d7fc:
    if (ctx->pc == 0x49D7FCu) {
        ctx->pc = 0x49D7FCu;
            // 0x49d7fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49D800u;
        goto label_49d800;
    }
    ctx->pc = 0x49D7F8u;
    SET_GPR_U32(ctx, 31, 0x49D800u);
    ctx->pc = 0x49D7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D7F8u;
            // 0x49d7fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D800u; }
        if (ctx->pc != 0x49D800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D800u; }
        if (ctx->pc != 0x49D800u) { return; }
    }
    ctx->pc = 0x49D800u;
label_49d800:
    // 0x49d800: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x49d800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49d804:
    // 0x49d804: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x49d804u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_49d808:
    // 0x49d808: 0x1000008b  b           . + 4 + (0x8B << 2)
label_49d80c:
    if (ctx->pc == 0x49D80Cu) {
        ctx->pc = 0x49D80Cu;
            // 0x49d80c: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->pc = 0x49D810u;
        goto label_49d810;
    }
    ctx->pc = 0x49D808u;
    {
        const bool branch_taken_0x49d808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D808u;
            // 0x49d80c: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d808) {
            ctx->pc = 0x49DA38u;
            goto label_49da38;
        }
    }
    ctx->pc = 0x49D810u;
label_49d810:
    // 0x49d810: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
label_49d814:
    if (ctx->pc == 0x49D814u) {
        ctx->pc = 0x49D814u;
            // 0x49d814: 0xc6010178  lwc1        $f1, 0x178($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x49D818u;
        goto label_49d818;
    }
    ctx->pc = 0x49D810u;
    {
        const bool branch_taken_0x49d810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49d810) {
            ctx->pc = 0x49D814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49D810u;
            // 0x49d814: 0xc6010178  lwc1        $f1, 0x178($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x49D89Cu;
            goto label_49d89c;
        }
    }
    ctx->pc = 0x49D818u;
label_49d818:
    // 0x49d818: 0xc6000178  lwc1        $f0, 0x178($s0)
    ctx->pc = 0x49d818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d81c:
    // 0x49d81c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x49d81cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49d820:
    // 0x49d820: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_49d824:
    if (ctx->pc == 0x49D824u) {
        ctx->pc = 0x49D828u;
        goto label_49d828;
    }
    ctx->pc = 0x49D820u;
    {
        const bool branch_taken_0x49d820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x49d820) {
            ctx->pc = 0x49D898u;
            goto label_49d898;
        }
    }
    ctx->pc = 0x49D828u;
label_49d828:
    // 0x49d828: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x49d828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d82c:
    // 0x49d82c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x49d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_49d830:
    // 0x49d830: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x49d830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_49d834:
    // 0x49d834: 0xc0b6de4  jal         func_2DB790
label_49d838:
    if (ctx->pc == 0x49D838u) {
        ctx->pc = 0x49D838u;
            // 0x49d838: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->pc = 0x49D83Cu;
        goto label_49d83c;
    }
    ctx->pc = 0x49D834u;
    SET_GPR_U32(ctx, 31, 0x49D83Cu);
    ctx->pc = 0x49D838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D834u;
            // 0x49d838: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB790u;
    if (runtime->hasFunction(0x2DB790u)) {
        auto targetFn = runtime->lookupFunction(0x2DB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D83Cu; }
        if (ctx->pc != 0x49D83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB790_0x2db790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D83Cu; }
        if (ctx->pc != 0x49D83Cu) { return; }
    }
    ctx->pc = 0x49D83Cu;
label_49d83c:
    // 0x49d83c: 0xc0b6e84  jal         func_2DBA10
label_49d840:
    if (ctx->pc == 0x49D840u) {
        ctx->pc = 0x49D844u;
        goto label_49d844;
    }
    ctx->pc = 0x49D83Cu;
    SET_GPR_U32(ctx, 31, 0x49D844u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D844u; }
        if (ctx->pc != 0x49D844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D844u; }
        if (ctx->pc != 0x49D844u) { return; }
    }
    ctx->pc = 0x49D844u;
label_49d844:
    // 0x49d844: 0xc0b6e60  jal         func_2DB980
label_49d848:
    if (ctx->pc == 0x49D848u) {
        ctx->pc = 0x49D848u;
            // 0x49d848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49D84Cu;
        goto label_49d84c;
    }
    ctx->pc = 0x49D844u;
    SET_GPR_U32(ctx, 31, 0x49D84Cu);
    ctx->pc = 0x49D848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D844u;
            // 0x49d848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D84Cu; }
        if (ctx->pc != 0x49D84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D84Cu; }
        if (ctx->pc != 0x49D84Cu) { return; }
    }
    ctx->pc = 0x49D84Cu;
label_49d84c:
    // 0x49d84c: 0xc0b6e38  jal         func_2DB8E0
label_49d850:
    if (ctx->pc == 0x49D850u) {
        ctx->pc = 0x49D850u;
            // 0x49d850: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x49D854u;
        goto label_49d854;
    }
    ctx->pc = 0x49D84Cu;
    SET_GPR_U32(ctx, 31, 0x49D854u);
    ctx->pc = 0x49D850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D84Cu;
            // 0x49d850: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D854u; }
        if (ctx->pc != 0x49D854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D854u; }
        if (ctx->pc != 0x49D854u) { return; }
    }
    ctx->pc = 0x49D854u;
label_49d854:
    // 0x49d854: 0xc0775b8  jal         func_1DD6E0
label_49d858:
    if (ctx->pc == 0x49D858u) {
        ctx->pc = 0x49D858u;
            // 0x49d858: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x49D85Cu;
        goto label_49d85c;
    }
    ctx->pc = 0x49D854u;
    SET_GPR_U32(ctx, 31, 0x49D85Cu);
    ctx->pc = 0x49D858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D854u;
            // 0x49d858: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D85Cu; }
        if (ctx->pc != 0x49D85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D85Cu; }
        if (ctx->pc != 0x49D85Cu) { return; }
    }
    ctx->pc = 0x49D85Cu;
label_49d85c:
    // 0x49d85c: 0xc0775b4  jal         func_1DD6D0
label_49d860:
    if (ctx->pc == 0x49D860u) {
        ctx->pc = 0x49D860u;
            // 0x49d860: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49D864u;
        goto label_49d864;
    }
    ctx->pc = 0x49D85Cu;
    SET_GPR_U32(ctx, 31, 0x49D864u);
    ctx->pc = 0x49D860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D85Cu;
            // 0x49d860: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D864u; }
        if (ctx->pc != 0x49D864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D864u; }
        if (ctx->pc != 0x49D864u) { return; }
    }
    ctx->pc = 0x49D864u;
label_49d864:
    // 0x49d864: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x49d864u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_49d868:
    // 0x49d868: 0xc0b6e28  jal         func_2DB8A0
label_49d86c:
    if (ctx->pc == 0x49D86Cu) {
        ctx->pc = 0x49D86Cu;
            // 0x49d86c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x49D870u;
        goto label_49d870;
    }
    ctx->pc = 0x49D868u;
    SET_GPR_U32(ctx, 31, 0x49D870u);
    ctx->pc = 0x49D86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D868u;
            // 0x49d86c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D870u; }
        if (ctx->pc != 0x49D870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D870u; }
        if (ctx->pc != 0x49D870u) { return; }
    }
    ctx->pc = 0x49D870u;
label_49d870:
    // 0x49d870: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x49d870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_49d874:
    // 0x49d874: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x49d874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49d878:
    // 0x49d878: 0xc0b6e28  jal         func_2DB8A0
label_49d87c:
    if (ctx->pc == 0x49D87Cu) {
        ctx->pc = 0x49D87Cu;
            // 0x49d87c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x49D880u;
        goto label_49d880;
    }
    ctx->pc = 0x49D878u;
    SET_GPR_U32(ctx, 31, 0x49D880u);
    ctx->pc = 0x49D87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D878u;
            // 0x49d87c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D880u; }
        if (ctx->pc != 0x49D880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D880u; }
        if (ctx->pc != 0x49D880u) { return; }
    }
    ctx->pc = 0x49D880u;
label_49d880:
    // 0x49d880: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x49d880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_49d884:
    // 0x49d884: 0xc0e07f8  jal         func_381FE0
label_49d888:
    if (ctx->pc == 0x49D888u) {
        ctx->pc = 0x49D888u;
            // 0x49d888: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x49D88Cu;
        goto label_49d88c;
    }
    ctx->pc = 0x49D884u;
    SET_GPR_U32(ctx, 31, 0x49D88Cu);
    ctx->pc = 0x49D888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D884u;
            // 0x49d888: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D88Cu; }
        if (ctx->pc != 0x49D88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D88Cu; }
        if (ctx->pc != 0x49D88Cu) { return; }
    }
    ctx->pc = 0x49D88Cu;
label_49d88c:
    // 0x49d88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49d88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d890:
    // 0x49d890: 0xc127694  jal         func_49DA50
label_49d894:
    if (ctx->pc == 0x49D894u) {
        ctx->pc = 0x49D894u;
            // 0x49d894: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x49D898u;
        goto label_49d898;
    }
    ctx->pc = 0x49D890u;
    SET_GPR_U32(ctx, 31, 0x49D898u);
    ctx->pc = 0x49D894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D890u;
            // 0x49d894: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49DA50u;
    if (runtime->hasFunction(0x49DA50u)) {
        auto targetFn = runtime->lookupFunction(0x49DA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D898u; }
        if (ctx->pc != 0x49D898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049DA50_0x49da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D898u; }
        if (ctx->pc != 0x49D898u) { return; }
    }
    ctx->pc = 0x49D898u;
label_49d898:
    // 0x49d898: 0xc6010178  lwc1        $f1, 0x178($s0)
    ctx->pc = 0x49d898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49d89c:
    // 0x49d89c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49d89cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49d8a0:
    // 0x49d8a0: 0x0  nop
    ctx->pc = 0x49d8a0u;
    // NOP
label_49d8a4:
    // 0x49d8a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x49d8a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49d8a8:
    // 0x49d8a8: 0x45010063  bc1t        . + 4 + (0x63 << 2)
label_49d8ac:
    if (ctx->pc == 0x49D8ACu) {
        ctx->pc = 0x49D8B0u;
        goto label_49d8b0;
    }
    ctx->pc = 0x49D8A8u;
    {
        const bool branch_taken_0x49d8a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49d8a8) {
            ctx->pc = 0x49DA38u;
            goto label_49da38;
        }
    }
    ctx->pc = 0x49D8B0u;
label_49d8b0:
    // 0x49d8b0: 0xc0775b8  jal         func_1DD6E0
label_49d8b4:
    if (ctx->pc == 0x49D8B4u) {
        ctx->pc = 0x49D8B8u;
        goto label_49d8b8;
    }
    ctx->pc = 0x49D8B0u;
    SET_GPR_U32(ctx, 31, 0x49D8B8u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D8B8u; }
        if (ctx->pc != 0x49D8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D8B8u; }
        if (ctx->pc != 0x49D8B8u) { return; }
    }
    ctx->pc = 0x49D8B8u;
label_49d8b8:
    // 0x49d8b8: 0xc0775b4  jal         func_1DD6D0
label_49d8bc:
    if (ctx->pc == 0x49D8BCu) {
        ctx->pc = 0x49D8BCu;
            // 0x49d8bc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49D8C0u;
        goto label_49d8c0;
    }
    ctx->pc = 0x49D8B8u;
    SET_GPR_U32(ctx, 31, 0x49D8C0u);
    ctx->pc = 0x49D8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D8B8u;
            // 0x49d8bc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D8C0u; }
        if (ctx->pc != 0x49D8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D8C0u; }
        if (ctx->pc != 0x49D8C0u) { return; }
    }
    ctx->pc = 0x49D8C0u;
label_49d8c0:
    // 0x49d8c0: 0xc6010178  lwc1        $f1, 0x178($s0)
    ctx->pc = 0x49d8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49d8c4:
    // 0x49d8c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x49d8c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_49d8c8:
    // 0x49d8c8: 0x1000005b  b           . + 4 + (0x5B << 2)
label_49d8cc:
    if (ctx->pc == 0x49D8CCu) {
        ctx->pc = 0x49D8CCu;
            // 0x49d8cc: 0xe6000178  swc1        $f0, 0x178($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
        ctx->pc = 0x49D8D0u;
        goto label_49d8d0;
    }
    ctx->pc = 0x49D8C8u;
    {
        const bool branch_taken_0x49d8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D8C8u;
            // 0x49d8cc: 0xe6000178  swc1        $f0, 0x178($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d8c8) {
            ctx->pc = 0x49DA38u;
            goto label_49da38;
        }
    }
    ctx->pc = 0x49D8D0u;
label_49d8d0:
    // 0x49d8d0: 0xc0775b8  jal         func_1DD6E0
label_49d8d4:
    if (ctx->pc == 0x49D8D4u) {
        ctx->pc = 0x49D8D8u;
        goto label_49d8d8;
    }
    ctx->pc = 0x49D8D0u;
    SET_GPR_U32(ctx, 31, 0x49D8D8u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D8D8u; }
        if (ctx->pc != 0x49D8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D8D8u; }
        if (ctx->pc != 0x49D8D8u) { return; }
    }
    ctx->pc = 0x49D8D8u;
label_49d8d8:
    // 0x49d8d8: 0xc0775b4  jal         func_1DD6D0
label_49d8dc:
    if (ctx->pc == 0x49D8DCu) {
        ctx->pc = 0x49D8DCu;
            // 0x49d8dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49D8E0u;
        goto label_49d8e0;
    }
    ctx->pc = 0x49D8D8u;
    SET_GPR_U32(ctx, 31, 0x49D8E0u);
    ctx->pc = 0x49D8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D8D8u;
            // 0x49d8dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D8E0u; }
        if (ctx->pc != 0x49D8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D8E0u; }
        if (ctx->pc != 0x49D8E0u) { return; }
    }
    ctx->pc = 0x49D8E0u;
label_49d8e0:
    // 0x49d8e0: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x49d8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49d8e4:
    // 0x49d8e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x49d8e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_49d8e8:
    // 0x49d8e8: 0xc0775b8  jal         func_1DD6E0
label_49d8ec:
    if (ctx->pc == 0x49D8ECu) {
        ctx->pc = 0x49D8ECu;
            // 0x49d8ec: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->pc = 0x49D8F0u;
        goto label_49d8f0;
    }
    ctx->pc = 0x49D8E8u;
    SET_GPR_U32(ctx, 31, 0x49D8F0u);
    ctx->pc = 0x49D8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D8E8u;
            // 0x49d8ec: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D8F0u; }
        if (ctx->pc != 0x49D8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D8F0u; }
        if (ctx->pc != 0x49D8F0u) { return; }
    }
    ctx->pc = 0x49D8F0u;
label_49d8f0:
    // 0x49d8f0: 0xc0775b4  jal         func_1DD6D0
label_49d8f4:
    if (ctx->pc == 0x49D8F4u) {
        ctx->pc = 0x49D8F4u;
            // 0x49d8f4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49D8F8u;
        goto label_49d8f8;
    }
    ctx->pc = 0x49D8F0u;
    SET_GPR_U32(ctx, 31, 0x49D8F8u);
    ctx->pc = 0x49D8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D8F0u;
            // 0x49d8f4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D8F8u; }
        if (ctx->pc != 0x49D8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D8F8u; }
        if (ctx->pc != 0x49D8F8u) { return; }
    }
    ctx->pc = 0x49D8F8u;
label_49d8f8:
    // 0x49d8f8: 0xc60200dc  lwc1        $f2, 0xDC($s0)
    ctx->pc = 0x49d8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49d8fc:
    // 0x49d8fc: 0xc60300f0  lwc1        $f3, 0xF0($s0)
    ctx->pc = 0x49d8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_49d900:
    // 0x49d900: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x49d900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_49d904:
    // 0x49d904: 0x0  nop
    ctx->pc = 0x49d904u;
    // NOP
label_49d908:
    // 0x49d908: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x49d908u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_49d90c:
    // 0x49d90c: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x49d90cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_49d910:
    // 0x49d910: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x49d910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
label_49d914:
    // 0x49d914: 0xc60c0160  lwc1        $f12, 0x160($s0)
    ctx->pc = 0x49d914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_49d918:
    // 0x49d918: 0xc60d00dc  lwc1        $f13, 0xDC($s0)
    ctx->pc = 0x49d918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_49d91c:
    // 0x49d91c: 0xc60e0168  lwc1        $f14, 0x168($s0)
    ctx->pc = 0x49d91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_49d920:
    // 0x49d920: 0xc0d3f08  jal         func_34FC20
label_49d924:
    if (ctx->pc == 0x49D924u) {
        ctx->pc = 0x49D924u;
            // 0x49d924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49D928u;
        goto label_49d928;
    }
    ctx->pc = 0x49D920u;
    SET_GPR_U32(ctx, 31, 0x49D928u);
    ctx->pc = 0x49D924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D920u;
            // 0x49d924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (runtime->hasFunction(0x34FC20u)) {
        auto targetFn = runtime->lookupFunction(0x34FC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D928u; }
        if (ctx->pc != 0x49D928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FC20_0x34fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D928u; }
        if (ctx->pc != 0x49D928u) { return; }
    }
    ctx->pc = 0x49D928u;
label_49d928:
    // 0x49d928: 0xc60000fc  lwc1        $f0, 0xFC($s0)
    ctx->pc = 0x49d928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d92c:
    // 0x49d92c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x49d92cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49d930:
    // 0x49d930: 0x0  nop
    ctx->pc = 0x49d930u;
    // NOP
label_49d934:
    // 0x49d934: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x49d934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49d938:
    // 0x49d938: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_49d93c:
    if (ctx->pc == 0x49D93Cu) {
        ctx->pc = 0x49D940u;
        goto label_49d940;
    }
    ctx->pc = 0x49D938u;
    {
        const bool branch_taken_0x49d938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x49d938) {
            ctx->pc = 0x49D970u;
            goto label_49d970;
        }
    }
    ctx->pc = 0x49D940u;
label_49d940:
    // 0x49d940: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x49d940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_49d944:
    // 0x49d944: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x49d944u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_49d948:
    // 0x49d948: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x49d948u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_49d94c:
    // 0x49d94c: 0xc0b6df0  jal         func_2DB7C0
label_49d950:
    if (ctx->pc == 0x49D950u) {
        ctx->pc = 0x49D950u;
            // 0x49d950: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x49D954u;
        goto label_49d954;
    }
    ctx->pc = 0x49D94Cu;
    SET_GPR_U32(ctx, 31, 0x49D954u);
    ctx->pc = 0x49D950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D94Cu;
            // 0x49d950: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D954u; }
        if (ctx->pc != 0x49D954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D954u; }
        if (ctx->pc != 0x49D954u) { return; }
    }
    ctx->pc = 0x49D954u;
label_49d954:
    // 0x49d954: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x49d954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_49d958:
    // 0x49d958: 0xc0e07f8  jal         func_381FE0
label_49d95c:
    if (ctx->pc == 0x49D95Cu) {
        ctx->pc = 0x49D95Cu;
            // 0x49d95c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x49D960u;
        goto label_49d960;
    }
    ctx->pc = 0x49D958u;
    SET_GPR_U32(ctx, 31, 0x49D960u);
    ctx->pc = 0x49D95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D958u;
            // 0x49d95c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D960u; }
        if (ctx->pc != 0x49D960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D960u; }
        if (ctx->pc != 0x49D960u) { return; }
    }
    ctx->pc = 0x49D960u;
label_49d960:
    // 0x49d960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49d960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d964:
    // 0x49d964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49d964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d968:
    // 0x49d968: 0xc127694  jal         func_49DA50
label_49d96c:
    if (ctx->pc == 0x49D96Cu) {
        ctx->pc = 0x49D96Cu;
            // 0x49d96c: 0xae0000fc  sw          $zero, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
        ctx->pc = 0x49D970u;
        goto label_49d970;
    }
    ctx->pc = 0x49D968u;
    SET_GPR_U32(ctx, 31, 0x49D970u);
    ctx->pc = 0x49D96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D968u;
            // 0x49d96c: 0xae0000fc  sw          $zero, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49DA50u;
    if (runtime->hasFunction(0x49DA50u)) {
        auto targetFn = runtime->lookupFunction(0x49DA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D970u; }
        if (ctx->pc != 0x49D970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049DA50_0x49da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D970u; }
        if (ctx->pc != 0x49D970u) { return; }
    }
    ctx->pc = 0x49D970u;
label_49d970:
    // 0x49d970: 0xc0775b8  jal         func_1DD6E0
label_49d974:
    if (ctx->pc == 0x49D974u) {
        ctx->pc = 0x49D978u;
        goto label_49d978;
    }
    ctx->pc = 0x49D970u;
    SET_GPR_U32(ctx, 31, 0x49D978u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D978u; }
        if (ctx->pc != 0x49D978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D978u; }
        if (ctx->pc != 0x49D978u) { return; }
    }
    ctx->pc = 0x49D978u;
label_49d978:
    // 0x49d978: 0xc0775b4  jal         func_1DD6D0
label_49d97c:
    if (ctx->pc == 0x49D97Cu) {
        ctx->pc = 0x49D97Cu;
            // 0x49d97c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49D980u;
        goto label_49d980;
    }
    ctx->pc = 0x49D978u;
    SET_GPR_U32(ctx, 31, 0x49D980u);
    ctx->pc = 0x49D97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D978u;
            // 0x49d97c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D980u; }
        if (ctx->pc != 0x49D980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D980u; }
        if (ctx->pc != 0x49D980u) { return; }
    }
    ctx->pc = 0x49D980u;
label_49d980:
    // 0x49d980: 0xc6020158  lwc1        $f2, 0x158($s0)
    ctx->pc = 0x49d980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49d984:
    // 0x49d984: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x49d984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_49d988:
    // 0x49d988: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x49d988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_49d98c:
    // 0x49d98c: 0x0  nop
    ctx->pc = 0x49d98cu;
    // NOP
label_49d990:
    // 0x49d990: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x49d990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_49d994:
    // 0x49d994: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x49d994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49d998:
    // 0x49d998: 0x45010027  bc1t        . + 4 + (0x27 << 2)
label_49d99c:
    if (ctx->pc == 0x49D99Cu) {
        ctx->pc = 0x49D99Cu;
            // 0x49d99c: 0xe6000158  swc1        $f0, 0x158($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
        ctx->pc = 0x49D9A0u;
        goto label_49d9a0;
    }
    ctx->pc = 0x49D998u;
    {
        const bool branch_taken_0x49d998 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x49D99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49D998u;
            // 0x49d99c: 0xe6000158  swc1        $f0, 0x158($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d998) {
            ctx->pc = 0x49DA38u;
            goto label_49da38;
        }
    }
    ctx->pc = 0x49D9A0u;
label_49d9a0:
    // 0x49d9a0: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x49d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
label_49d9a4:
    // 0x49d9a4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x49d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_49d9a8:
    // 0x49d9a8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x49d9a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_49d9ac:
    // 0x49d9ac: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_49d9b0:
    if (ctx->pc == 0x49D9B0u) {
        ctx->pc = 0x49D9B4u;
        goto label_49d9b4;
    }
    ctx->pc = 0x49D9ACu;
    {
        const bool branch_taken_0x49d9ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d9ac) {
            ctx->pc = 0x49DA38u;
            goto label_49da38;
        }
    }
    ctx->pc = 0x49D9B4u;
label_49d9b4:
    // 0x49d9b4: 0xc0d1c10  jal         func_347040
label_49d9b8:
    if (ctx->pc == 0x49D9B8u) {
        ctx->pc = 0x49D9B8u;
            // 0x49d9b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49D9BCu;
        goto label_49d9bc;
    }
    ctx->pc = 0x49D9B4u;
    SET_GPR_U32(ctx, 31, 0x49D9BCu);
    ctx->pc = 0x49D9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D9B4u;
            // 0x49d9b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D9BCu; }
        if (ctx->pc != 0x49D9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D9BCu; }
        if (ctx->pc != 0x49D9BCu) { return; }
    }
    ctx->pc = 0x49D9BCu;
label_49d9bc:
    // 0x49d9bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x49d9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d9c0:
    // 0x49d9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49d9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49d9c4:
    // 0x49d9c4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x49d9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49d9c8:
    // 0x49d9c8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x49d9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49d9cc:
    // 0x49d9cc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x49d9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_49d9d0:
    // 0x49d9d0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x49d9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d9d4:
    // 0x49d9d4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x49d9d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_49d9d8:
    // 0x49d9d8: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x49d9d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_49d9dc:
    // 0x49d9dc: 0xc0adc64  jal         func_2B7190
label_49d9e0:
    if (ctx->pc == 0x49D9E0u) {
        ctx->pc = 0x49D9E0u;
            // 0x49d9e0: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x49D9E4u;
        goto label_49d9e4;
    }
    ctx->pc = 0x49D9DCu;
    SET_GPR_U32(ctx, 31, 0x49D9E4u);
    ctx->pc = 0x49D9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49D9DCu;
            // 0x49d9e0: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7190u;
    if (runtime->hasFunction(0x2B7190u)) {
        auto targetFn = runtime->lookupFunction(0x2B7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D9E4u; }
        if (ctx->pc != 0x49D9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7190_0x2b7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49D9E4u; }
        if (ctx->pc != 0x49D9E4u) { return; }
    }
    ctx->pc = 0x49D9E4u;
label_49d9e4:
    // 0x49d9e4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x49d9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49d9e8:
    // 0x49d9e8: 0x3c0340ec  lui         $v1, 0x40EC
    ctx->pc = 0x49d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16620 << 16));
label_49d9ec:
    // 0x49d9ec: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x49d9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49d9f0:
    // 0x49d9f0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x49d9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_49d9f4:
    // 0x49d9f4: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x49d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49d9f8:
    // 0x49d9f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x49d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49d9fc:
    // 0x49d9fc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x49d9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_49da00:
    // 0x49da00: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x49da00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_49da04:
    // 0x49da04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x49da04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49da08:
    // 0x49da08: 0x0  nop
    ctx->pc = 0x49da08u;
    // NOP
label_49da0c:
    // 0x49da0c: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x49da0cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_49da10:
    // 0x49da10: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x49da10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49da14:
    // 0x49da14: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x49da14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_49da18:
    // 0x49da18: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x49da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_49da1c:
    // 0x49da1c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x49da1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_49da20:
    // 0x49da20: 0xc7ae0038  lwc1        $f14, 0x38($sp)
    ctx->pc = 0x49da20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_49da24:
    // 0x49da24: 0xc7af0080  lwc1        $f15, 0x80($sp)
    ctx->pc = 0x49da24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_49da28:
    // 0x49da28: 0xc7b00084  lwc1        $f16, 0x84($sp)
    ctx->pc = 0x49da28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_49da2c:
    // 0x49da2c: 0xc7b10088  lwc1        $f17, 0x88($sp)
    ctx->pc = 0x49da2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_49da30:
    // 0x49da30: 0xc0bafb8  jal         func_2EBEE0
label_49da34:
    if (ctx->pc == 0x49DA34u) {
        ctx->pc = 0x49DA34u;
            // 0x49da34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x49DA38u;
        goto label_49da38;
    }
    ctx->pc = 0x49DA30u;
    SET_GPR_U32(ctx, 31, 0x49DA38u);
    ctx->pc = 0x49DA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DA30u;
            // 0x49da34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DA38u; }
        if (ctx->pc != 0x49DA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DA38u; }
        if (ctx->pc != 0x49DA38u) { return; }
    }
    ctx->pc = 0x49DA38u;
label_49da38:
    // 0x49da38: 0xa6000130  sh          $zero, 0x130($s0)
    ctx->pc = 0x49da38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 0));
label_49da3c:
    // 0x49da3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49da3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49da40:
    // 0x49da40: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x49da40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_49da44:
    // 0x49da44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49da44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49da48:
    // 0x49da48: 0x3e00008  jr          $ra
label_49da4c:
    if (ctx->pc == 0x49DA4Cu) {
        ctx->pc = 0x49DA4Cu;
            // 0x49da4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x49DA50u;
        goto label_fallthrough_0x49da48;
    }
    ctx->pc = 0x49DA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DA48u;
            // 0x49da4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x49da48:
    ctx->pc = 0x49DA50u;
}
