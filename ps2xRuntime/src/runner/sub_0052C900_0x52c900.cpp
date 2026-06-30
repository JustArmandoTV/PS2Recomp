#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052C900
// Address: 0x52c900 - 0x52d030
void sub_0052C900_0x52c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052C900_0x52c900");
#endif

    switch (ctx->pc) {
        case 0x52c900u: goto label_52c900;
        case 0x52c904u: goto label_52c904;
        case 0x52c908u: goto label_52c908;
        case 0x52c90cu: goto label_52c90c;
        case 0x52c910u: goto label_52c910;
        case 0x52c914u: goto label_52c914;
        case 0x52c918u: goto label_52c918;
        case 0x52c91cu: goto label_52c91c;
        case 0x52c920u: goto label_52c920;
        case 0x52c924u: goto label_52c924;
        case 0x52c928u: goto label_52c928;
        case 0x52c92cu: goto label_52c92c;
        case 0x52c930u: goto label_52c930;
        case 0x52c934u: goto label_52c934;
        case 0x52c938u: goto label_52c938;
        case 0x52c93cu: goto label_52c93c;
        case 0x52c940u: goto label_52c940;
        case 0x52c944u: goto label_52c944;
        case 0x52c948u: goto label_52c948;
        case 0x52c94cu: goto label_52c94c;
        case 0x52c950u: goto label_52c950;
        case 0x52c954u: goto label_52c954;
        case 0x52c958u: goto label_52c958;
        case 0x52c95cu: goto label_52c95c;
        case 0x52c960u: goto label_52c960;
        case 0x52c964u: goto label_52c964;
        case 0x52c968u: goto label_52c968;
        case 0x52c96cu: goto label_52c96c;
        case 0x52c970u: goto label_52c970;
        case 0x52c974u: goto label_52c974;
        case 0x52c978u: goto label_52c978;
        case 0x52c97cu: goto label_52c97c;
        case 0x52c980u: goto label_52c980;
        case 0x52c984u: goto label_52c984;
        case 0x52c988u: goto label_52c988;
        case 0x52c98cu: goto label_52c98c;
        case 0x52c990u: goto label_52c990;
        case 0x52c994u: goto label_52c994;
        case 0x52c998u: goto label_52c998;
        case 0x52c99cu: goto label_52c99c;
        case 0x52c9a0u: goto label_52c9a0;
        case 0x52c9a4u: goto label_52c9a4;
        case 0x52c9a8u: goto label_52c9a8;
        case 0x52c9acu: goto label_52c9ac;
        case 0x52c9b0u: goto label_52c9b0;
        case 0x52c9b4u: goto label_52c9b4;
        case 0x52c9b8u: goto label_52c9b8;
        case 0x52c9bcu: goto label_52c9bc;
        case 0x52c9c0u: goto label_52c9c0;
        case 0x52c9c4u: goto label_52c9c4;
        case 0x52c9c8u: goto label_52c9c8;
        case 0x52c9ccu: goto label_52c9cc;
        case 0x52c9d0u: goto label_52c9d0;
        case 0x52c9d4u: goto label_52c9d4;
        case 0x52c9d8u: goto label_52c9d8;
        case 0x52c9dcu: goto label_52c9dc;
        case 0x52c9e0u: goto label_52c9e0;
        case 0x52c9e4u: goto label_52c9e4;
        case 0x52c9e8u: goto label_52c9e8;
        case 0x52c9ecu: goto label_52c9ec;
        case 0x52c9f0u: goto label_52c9f0;
        case 0x52c9f4u: goto label_52c9f4;
        case 0x52c9f8u: goto label_52c9f8;
        case 0x52c9fcu: goto label_52c9fc;
        case 0x52ca00u: goto label_52ca00;
        case 0x52ca04u: goto label_52ca04;
        case 0x52ca08u: goto label_52ca08;
        case 0x52ca0cu: goto label_52ca0c;
        case 0x52ca10u: goto label_52ca10;
        case 0x52ca14u: goto label_52ca14;
        case 0x52ca18u: goto label_52ca18;
        case 0x52ca1cu: goto label_52ca1c;
        case 0x52ca20u: goto label_52ca20;
        case 0x52ca24u: goto label_52ca24;
        case 0x52ca28u: goto label_52ca28;
        case 0x52ca2cu: goto label_52ca2c;
        case 0x52ca30u: goto label_52ca30;
        case 0x52ca34u: goto label_52ca34;
        case 0x52ca38u: goto label_52ca38;
        case 0x52ca3cu: goto label_52ca3c;
        case 0x52ca40u: goto label_52ca40;
        case 0x52ca44u: goto label_52ca44;
        case 0x52ca48u: goto label_52ca48;
        case 0x52ca4cu: goto label_52ca4c;
        case 0x52ca50u: goto label_52ca50;
        case 0x52ca54u: goto label_52ca54;
        case 0x52ca58u: goto label_52ca58;
        case 0x52ca5cu: goto label_52ca5c;
        case 0x52ca60u: goto label_52ca60;
        case 0x52ca64u: goto label_52ca64;
        case 0x52ca68u: goto label_52ca68;
        case 0x52ca6cu: goto label_52ca6c;
        case 0x52ca70u: goto label_52ca70;
        case 0x52ca74u: goto label_52ca74;
        case 0x52ca78u: goto label_52ca78;
        case 0x52ca7cu: goto label_52ca7c;
        case 0x52ca80u: goto label_52ca80;
        case 0x52ca84u: goto label_52ca84;
        case 0x52ca88u: goto label_52ca88;
        case 0x52ca8cu: goto label_52ca8c;
        case 0x52ca90u: goto label_52ca90;
        case 0x52ca94u: goto label_52ca94;
        case 0x52ca98u: goto label_52ca98;
        case 0x52ca9cu: goto label_52ca9c;
        case 0x52caa0u: goto label_52caa0;
        case 0x52caa4u: goto label_52caa4;
        case 0x52caa8u: goto label_52caa8;
        case 0x52caacu: goto label_52caac;
        case 0x52cab0u: goto label_52cab0;
        case 0x52cab4u: goto label_52cab4;
        case 0x52cab8u: goto label_52cab8;
        case 0x52cabcu: goto label_52cabc;
        case 0x52cac0u: goto label_52cac0;
        case 0x52cac4u: goto label_52cac4;
        case 0x52cac8u: goto label_52cac8;
        case 0x52caccu: goto label_52cacc;
        case 0x52cad0u: goto label_52cad0;
        case 0x52cad4u: goto label_52cad4;
        case 0x52cad8u: goto label_52cad8;
        case 0x52cadcu: goto label_52cadc;
        case 0x52cae0u: goto label_52cae0;
        case 0x52cae4u: goto label_52cae4;
        case 0x52cae8u: goto label_52cae8;
        case 0x52caecu: goto label_52caec;
        case 0x52caf0u: goto label_52caf0;
        case 0x52caf4u: goto label_52caf4;
        case 0x52caf8u: goto label_52caf8;
        case 0x52cafcu: goto label_52cafc;
        case 0x52cb00u: goto label_52cb00;
        case 0x52cb04u: goto label_52cb04;
        case 0x52cb08u: goto label_52cb08;
        case 0x52cb0cu: goto label_52cb0c;
        case 0x52cb10u: goto label_52cb10;
        case 0x52cb14u: goto label_52cb14;
        case 0x52cb18u: goto label_52cb18;
        case 0x52cb1cu: goto label_52cb1c;
        case 0x52cb20u: goto label_52cb20;
        case 0x52cb24u: goto label_52cb24;
        case 0x52cb28u: goto label_52cb28;
        case 0x52cb2cu: goto label_52cb2c;
        case 0x52cb30u: goto label_52cb30;
        case 0x52cb34u: goto label_52cb34;
        case 0x52cb38u: goto label_52cb38;
        case 0x52cb3cu: goto label_52cb3c;
        case 0x52cb40u: goto label_52cb40;
        case 0x52cb44u: goto label_52cb44;
        case 0x52cb48u: goto label_52cb48;
        case 0x52cb4cu: goto label_52cb4c;
        case 0x52cb50u: goto label_52cb50;
        case 0x52cb54u: goto label_52cb54;
        case 0x52cb58u: goto label_52cb58;
        case 0x52cb5cu: goto label_52cb5c;
        case 0x52cb60u: goto label_52cb60;
        case 0x52cb64u: goto label_52cb64;
        case 0x52cb68u: goto label_52cb68;
        case 0x52cb6cu: goto label_52cb6c;
        case 0x52cb70u: goto label_52cb70;
        case 0x52cb74u: goto label_52cb74;
        case 0x52cb78u: goto label_52cb78;
        case 0x52cb7cu: goto label_52cb7c;
        case 0x52cb80u: goto label_52cb80;
        case 0x52cb84u: goto label_52cb84;
        case 0x52cb88u: goto label_52cb88;
        case 0x52cb8cu: goto label_52cb8c;
        case 0x52cb90u: goto label_52cb90;
        case 0x52cb94u: goto label_52cb94;
        case 0x52cb98u: goto label_52cb98;
        case 0x52cb9cu: goto label_52cb9c;
        case 0x52cba0u: goto label_52cba0;
        case 0x52cba4u: goto label_52cba4;
        case 0x52cba8u: goto label_52cba8;
        case 0x52cbacu: goto label_52cbac;
        case 0x52cbb0u: goto label_52cbb0;
        case 0x52cbb4u: goto label_52cbb4;
        case 0x52cbb8u: goto label_52cbb8;
        case 0x52cbbcu: goto label_52cbbc;
        case 0x52cbc0u: goto label_52cbc0;
        case 0x52cbc4u: goto label_52cbc4;
        case 0x52cbc8u: goto label_52cbc8;
        case 0x52cbccu: goto label_52cbcc;
        case 0x52cbd0u: goto label_52cbd0;
        case 0x52cbd4u: goto label_52cbd4;
        case 0x52cbd8u: goto label_52cbd8;
        case 0x52cbdcu: goto label_52cbdc;
        case 0x52cbe0u: goto label_52cbe0;
        case 0x52cbe4u: goto label_52cbe4;
        case 0x52cbe8u: goto label_52cbe8;
        case 0x52cbecu: goto label_52cbec;
        case 0x52cbf0u: goto label_52cbf0;
        case 0x52cbf4u: goto label_52cbf4;
        case 0x52cbf8u: goto label_52cbf8;
        case 0x52cbfcu: goto label_52cbfc;
        case 0x52cc00u: goto label_52cc00;
        case 0x52cc04u: goto label_52cc04;
        case 0x52cc08u: goto label_52cc08;
        case 0x52cc0cu: goto label_52cc0c;
        case 0x52cc10u: goto label_52cc10;
        case 0x52cc14u: goto label_52cc14;
        case 0x52cc18u: goto label_52cc18;
        case 0x52cc1cu: goto label_52cc1c;
        case 0x52cc20u: goto label_52cc20;
        case 0x52cc24u: goto label_52cc24;
        case 0x52cc28u: goto label_52cc28;
        case 0x52cc2cu: goto label_52cc2c;
        case 0x52cc30u: goto label_52cc30;
        case 0x52cc34u: goto label_52cc34;
        case 0x52cc38u: goto label_52cc38;
        case 0x52cc3cu: goto label_52cc3c;
        case 0x52cc40u: goto label_52cc40;
        case 0x52cc44u: goto label_52cc44;
        case 0x52cc48u: goto label_52cc48;
        case 0x52cc4cu: goto label_52cc4c;
        case 0x52cc50u: goto label_52cc50;
        case 0x52cc54u: goto label_52cc54;
        case 0x52cc58u: goto label_52cc58;
        case 0x52cc5cu: goto label_52cc5c;
        case 0x52cc60u: goto label_52cc60;
        case 0x52cc64u: goto label_52cc64;
        case 0x52cc68u: goto label_52cc68;
        case 0x52cc6cu: goto label_52cc6c;
        case 0x52cc70u: goto label_52cc70;
        case 0x52cc74u: goto label_52cc74;
        case 0x52cc78u: goto label_52cc78;
        case 0x52cc7cu: goto label_52cc7c;
        case 0x52cc80u: goto label_52cc80;
        case 0x52cc84u: goto label_52cc84;
        case 0x52cc88u: goto label_52cc88;
        case 0x52cc8cu: goto label_52cc8c;
        case 0x52cc90u: goto label_52cc90;
        case 0x52cc94u: goto label_52cc94;
        case 0x52cc98u: goto label_52cc98;
        case 0x52cc9cu: goto label_52cc9c;
        case 0x52cca0u: goto label_52cca0;
        case 0x52cca4u: goto label_52cca4;
        case 0x52cca8u: goto label_52cca8;
        case 0x52ccacu: goto label_52ccac;
        case 0x52ccb0u: goto label_52ccb0;
        case 0x52ccb4u: goto label_52ccb4;
        case 0x52ccb8u: goto label_52ccb8;
        case 0x52ccbcu: goto label_52ccbc;
        case 0x52ccc0u: goto label_52ccc0;
        case 0x52ccc4u: goto label_52ccc4;
        case 0x52ccc8u: goto label_52ccc8;
        case 0x52ccccu: goto label_52cccc;
        case 0x52ccd0u: goto label_52ccd0;
        case 0x52ccd4u: goto label_52ccd4;
        case 0x52ccd8u: goto label_52ccd8;
        case 0x52ccdcu: goto label_52ccdc;
        case 0x52cce0u: goto label_52cce0;
        case 0x52cce4u: goto label_52cce4;
        case 0x52cce8u: goto label_52cce8;
        case 0x52ccecu: goto label_52ccec;
        case 0x52ccf0u: goto label_52ccf0;
        case 0x52ccf4u: goto label_52ccf4;
        case 0x52ccf8u: goto label_52ccf8;
        case 0x52ccfcu: goto label_52ccfc;
        case 0x52cd00u: goto label_52cd00;
        case 0x52cd04u: goto label_52cd04;
        case 0x52cd08u: goto label_52cd08;
        case 0x52cd0cu: goto label_52cd0c;
        case 0x52cd10u: goto label_52cd10;
        case 0x52cd14u: goto label_52cd14;
        case 0x52cd18u: goto label_52cd18;
        case 0x52cd1cu: goto label_52cd1c;
        case 0x52cd20u: goto label_52cd20;
        case 0x52cd24u: goto label_52cd24;
        case 0x52cd28u: goto label_52cd28;
        case 0x52cd2cu: goto label_52cd2c;
        case 0x52cd30u: goto label_52cd30;
        case 0x52cd34u: goto label_52cd34;
        case 0x52cd38u: goto label_52cd38;
        case 0x52cd3cu: goto label_52cd3c;
        case 0x52cd40u: goto label_52cd40;
        case 0x52cd44u: goto label_52cd44;
        case 0x52cd48u: goto label_52cd48;
        case 0x52cd4cu: goto label_52cd4c;
        case 0x52cd50u: goto label_52cd50;
        case 0x52cd54u: goto label_52cd54;
        case 0x52cd58u: goto label_52cd58;
        case 0x52cd5cu: goto label_52cd5c;
        case 0x52cd60u: goto label_52cd60;
        case 0x52cd64u: goto label_52cd64;
        case 0x52cd68u: goto label_52cd68;
        case 0x52cd6cu: goto label_52cd6c;
        case 0x52cd70u: goto label_52cd70;
        case 0x52cd74u: goto label_52cd74;
        case 0x52cd78u: goto label_52cd78;
        case 0x52cd7cu: goto label_52cd7c;
        case 0x52cd80u: goto label_52cd80;
        case 0x52cd84u: goto label_52cd84;
        case 0x52cd88u: goto label_52cd88;
        case 0x52cd8cu: goto label_52cd8c;
        case 0x52cd90u: goto label_52cd90;
        case 0x52cd94u: goto label_52cd94;
        case 0x52cd98u: goto label_52cd98;
        case 0x52cd9cu: goto label_52cd9c;
        case 0x52cda0u: goto label_52cda0;
        case 0x52cda4u: goto label_52cda4;
        case 0x52cda8u: goto label_52cda8;
        case 0x52cdacu: goto label_52cdac;
        case 0x52cdb0u: goto label_52cdb0;
        case 0x52cdb4u: goto label_52cdb4;
        case 0x52cdb8u: goto label_52cdb8;
        case 0x52cdbcu: goto label_52cdbc;
        case 0x52cdc0u: goto label_52cdc0;
        case 0x52cdc4u: goto label_52cdc4;
        case 0x52cdc8u: goto label_52cdc8;
        case 0x52cdccu: goto label_52cdcc;
        case 0x52cdd0u: goto label_52cdd0;
        case 0x52cdd4u: goto label_52cdd4;
        case 0x52cdd8u: goto label_52cdd8;
        case 0x52cddcu: goto label_52cddc;
        case 0x52cde0u: goto label_52cde0;
        case 0x52cde4u: goto label_52cde4;
        case 0x52cde8u: goto label_52cde8;
        case 0x52cdecu: goto label_52cdec;
        case 0x52cdf0u: goto label_52cdf0;
        case 0x52cdf4u: goto label_52cdf4;
        case 0x52cdf8u: goto label_52cdf8;
        case 0x52cdfcu: goto label_52cdfc;
        case 0x52ce00u: goto label_52ce00;
        case 0x52ce04u: goto label_52ce04;
        case 0x52ce08u: goto label_52ce08;
        case 0x52ce0cu: goto label_52ce0c;
        case 0x52ce10u: goto label_52ce10;
        case 0x52ce14u: goto label_52ce14;
        case 0x52ce18u: goto label_52ce18;
        case 0x52ce1cu: goto label_52ce1c;
        case 0x52ce20u: goto label_52ce20;
        case 0x52ce24u: goto label_52ce24;
        case 0x52ce28u: goto label_52ce28;
        case 0x52ce2cu: goto label_52ce2c;
        case 0x52ce30u: goto label_52ce30;
        case 0x52ce34u: goto label_52ce34;
        case 0x52ce38u: goto label_52ce38;
        case 0x52ce3cu: goto label_52ce3c;
        case 0x52ce40u: goto label_52ce40;
        case 0x52ce44u: goto label_52ce44;
        case 0x52ce48u: goto label_52ce48;
        case 0x52ce4cu: goto label_52ce4c;
        case 0x52ce50u: goto label_52ce50;
        case 0x52ce54u: goto label_52ce54;
        case 0x52ce58u: goto label_52ce58;
        case 0x52ce5cu: goto label_52ce5c;
        case 0x52ce60u: goto label_52ce60;
        case 0x52ce64u: goto label_52ce64;
        case 0x52ce68u: goto label_52ce68;
        case 0x52ce6cu: goto label_52ce6c;
        case 0x52ce70u: goto label_52ce70;
        case 0x52ce74u: goto label_52ce74;
        case 0x52ce78u: goto label_52ce78;
        case 0x52ce7cu: goto label_52ce7c;
        case 0x52ce80u: goto label_52ce80;
        case 0x52ce84u: goto label_52ce84;
        case 0x52ce88u: goto label_52ce88;
        case 0x52ce8cu: goto label_52ce8c;
        case 0x52ce90u: goto label_52ce90;
        case 0x52ce94u: goto label_52ce94;
        case 0x52ce98u: goto label_52ce98;
        case 0x52ce9cu: goto label_52ce9c;
        case 0x52cea0u: goto label_52cea0;
        case 0x52cea4u: goto label_52cea4;
        case 0x52cea8u: goto label_52cea8;
        case 0x52ceacu: goto label_52ceac;
        case 0x52ceb0u: goto label_52ceb0;
        case 0x52ceb4u: goto label_52ceb4;
        case 0x52ceb8u: goto label_52ceb8;
        case 0x52cebcu: goto label_52cebc;
        case 0x52cec0u: goto label_52cec0;
        case 0x52cec4u: goto label_52cec4;
        case 0x52cec8u: goto label_52cec8;
        case 0x52ceccu: goto label_52cecc;
        case 0x52ced0u: goto label_52ced0;
        case 0x52ced4u: goto label_52ced4;
        case 0x52ced8u: goto label_52ced8;
        case 0x52cedcu: goto label_52cedc;
        case 0x52cee0u: goto label_52cee0;
        case 0x52cee4u: goto label_52cee4;
        case 0x52cee8u: goto label_52cee8;
        case 0x52ceecu: goto label_52ceec;
        case 0x52cef0u: goto label_52cef0;
        case 0x52cef4u: goto label_52cef4;
        case 0x52cef8u: goto label_52cef8;
        case 0x52cefcu: goto label_52cefc;
        case 0x52cf00u: goto label_52cf00;
        case 0x52cf04u: goto label_52cf04;
        case 0x52cf08u: goto label_52cf08;
        case 0x52cf0cu: goto label_52cf0c;
        case 0x52cf10u: goto label_52cf10;
        case 0x52cf14u: goto label_52cf14;
        case 0x52cf18u: goto label_52cf18;
        case 0x52cf1cu: goto label_52cf1c;
        case 0x52cf20u: goto label_52cf20;
        case 0x52cf24u: goto label_52cf24;
        case 0x52cf28u: goto label_52cf28;
        case 0x52cf2cu: goto label_52cf2c;
        case 0x52cf30u: goto label_52cf30;
        case 0x52cf34u: goto label_52cf34;
        case 0x52cf38u: goto label_52cf38;
        case 0x52cf3cu: goto label_52cf3c;
        case 0x52cf40u: goto label_52cf40;
        case 0x52cf44u: goto label_52cf44;
        case 0x52cf48u: goto label_52cf48;
        case 0x52cf4cu: goto label_52cf4c;
        case 0x52cf50u: goto label_52cf50;
        case 0x52cf54u: goto label_52cf54;
        case 0x52cf58u: goto label_52cf58;
        case 0x52cf5cu: goto label_52cf5c;
        case 0x52cf60u: goto label_52cf60;
        case 0x52cf64u: goto label_52cf64;
        case 0x52cf68u: goto label_52cf68;
        case 0x52cf6cu: goto label_52cf6c;
        case 0x52cf70u: goto label_52cf70;
        case 0x52cf74u: goto label_52cf74;
        case 0x52cf78u: goto label_52cf78;
        case 0x52cf7cu: goto label_52cf7c;
        case 0x52cf80u: goto label_52cf80;
        case 0x52cf84u: goto label_52cf84;
        case 0x52cf88u: goto label_52cf88;
        case 0x52cf8cu: goto label_52cf8c;
        case 0x52cf90u: goto label_52cf90;
        case 0x52cf94u: goto label_52cf94;
        case 0x52cf98u: goto label_52cf98;
        case 0x52cf9cu: goto label_52cf9c;
        case 0x52cfa0u: goto label_52cfa0;
        case 0x52cfa4u: goto label_52cfa4;
        case 0x52cfa8u: goto label_52cfa8;
        case 0x52cfacu: goto label_52cfac;
        case 0x52cfb0u: goto label_52cfb0;
        case 0x52cfb4u: goto label_52cfb4;
        case 0x52cfb8u: goto label_52cfb8;
        case 0x52cfbcu: goto label_52cfbc;
        case 0x52cfc0u: goto label_52cfc0;
        case 0x52cfc4u: goto label_52cfc4;
        case 0x52cfc8u: goto label_52cfc8;
        case 0x52cfccu: goto label_52cfcc;
        case 0x52cfd0u: goto label_52cfd0;
        case 0x52cfd4u: goto label_52cfd4;
        case 0x52cfd8u: goto label_52cfd8;
        case 0x52cfdcu: goto label_52cfdc;
        case 0x52cfe0u: goto label_52cfe0;
        case 0x52cfe4u: goto label_52cfe4;
        case 0x52cfe8u: goto label_52cfe8;
        case 0x52cfecu: goto label_52cfec;
        case 0x52cff0u: goto label_52cff0;
        case 0x52cff4u: goto label_52cff4;
        case 0x52cff8u: goto label_52cff8;
        case 0x52cffcu: goto label_52cffc;
        case 0x52d000u: goto label_52d000;
        case 0x52d004u: goto label_52d004;
        case 0x52d008u: goto label_52d008;
        case 0x52d00cu: goto label_52d00c;
        case 0x52d010u: goto label_52d010;
        case 0x52d014u: goto label_52d014;
        case 0x52d018u: goto label_52d018;
        case 0x52d01cu: goto label_52d01c;
        case 0x52d020u: goto label_52d020;
        case 0x52d024u: goto label_52d024;
        case 0x52d028u: goto label_52d028;
        case 0x52d02cu: goto label_52d02c;
        default: break;
    }

    ctx->pc = 0x52c900u;

label_52c900:
    // 0x52c900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x52c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_52c904:
    // 0x52c904: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x52c904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52c908:
    // 0x52c908: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x52c908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_52c90c:
    // 0x52c90c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52c90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52c910:
    // 0x52c910: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52c910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52c914:
    // 0x52c914: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x52c914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52c918:
    // 0x52c918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52c918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52c91c:
    // 0x52c91c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52c91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52c920:
    // 0x52c920: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x52c920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_52c924:
    // 0x52c924: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x52c924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_52c928:
    // 0x52c928: 0xc10ca68  jal         func_4329A0
label_52c92c:
    if (ctx->pc == 0x52C92Cu) {
        ctx->pc = 0x52C92Cu;
            // 0x52c92c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x52C930u;
        goto label_52c930;
    }
    ctx->pc = 0x52C928u;
    SET_GPR_U32(ctx, 31, 0x52C930u);
    ctx->pc = 0x52C92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C928u;
            // 0x52c92c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C930u; }
        if (ctx->pc != 0x52C930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C930u; }
        if (ctx->pc != 0x52C930u) { return; }
    }
    ctx->pc = 0x52C930u;
label_52c930:
    // 0x52c930: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x52c930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_52c934:
    // 0x52c934: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52c934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52c938:
    // 0x52c938: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x52c938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_52c93c:
    // 0x52c93c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x52c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_52c940:
    // 0x52c940: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x52c940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_52c944:
    // 0x52c944: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x52c944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_52c948:
    // 0x52c948: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x52c948u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_52c94c:
    // 0x52c94c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x52c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_52c950:
    // 0x52c950: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x52c950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_52c954:
    // 0x52c954: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52c954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52c958:
    // 0x52c958: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x52c958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_52c95c:
    // 0x52c95c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x52c95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_52c960:
    // 0x52c960: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x52c960u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_52c964:
    // 0x52c964: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x52c964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_52c968:
    // 0x52c968: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x52c968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_52c96c:
    // 0x52c96c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x52c96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_52c970:
    // 0x52c970: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x52c970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_52c974:
    // 0x52c974: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x52c974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_52c978:
    // 0x52c978: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x52c978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_52c97c:
    // 0x52c97c: 0xc0582cc  jal         func_160B30
label_52c980:
    if (ctx->pc == 0x52C980u) {
        ctx->pc = 0x52C980u;
            // 0x52c980: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x52C984u;
        goto label_52c984;
    }
    ctx->pc = 0x52C97Cu;
    SET_GPR_U32(ctx, 31, 0x52C984u);
    ctx->pc = 0x52C980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C97Cu;
            // 0x52c980: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C984u; }
        if (ctx->pc != 0x52C984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C984u; }
        if (ctx->pc != 0x52C984u) { return; }
    }
    ctx->pc = 0x52C984u;
label_52c984:
    // 0x52c984: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52c984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52c988:
    // 0x52c988: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x52c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_52c98c:
    // 0x52c98c: 0x246368f8  addiu       $v1, $v1, 0x68F8
    ctx->pc = 0x52c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26872));
label_52c990:
    // 0x52c990: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x52c990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_52c994:
    // 0x52c994: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x52c994u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_52c998:
    // 0x52c998: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x52c998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_52c99c:
    // 0x52c99c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52c9a0:
    // 0x52c9a0: 0xac44b608  sw          $a0, -0x49F8($v0)
    ctx->pc = 0x52c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948360), GPR_U32(ctx, 4));
label_52c9a4:
    // 0x52c9a4: 0x24636910  addiu       $v1, $v1, 0x6910
    ctx->pc = 0x52c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26896));
label_52c9a8:
    // 0x52c9a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52c9ac:
    // 0x52c9ac: 0x24426948  addiu       $v0, $v0, 0x6948
    ctx->pc = 0x52c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26952));
label_52c9b0:
    // 0x52c9b0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x52c9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_52c9b4:
    // 0x52c9b4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x52c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_52c9b8:
    // 0x52c9b8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x52c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_52c9bc:
    // 0x52c9bc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x52c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_52c9c0:
    // 0x52c9c0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x52c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_52c9c4:
    // 0x52c9c4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x52c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_52c9c8:
    // 0x52c9c8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x52c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_52c9cc:
    // 0x52c9cc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x52c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_52c9d0:
    // 0x52c9d0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x52c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_52c9d4:
    // 0x52c9d4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x52c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_52c9d8:
    // 0x52c9d8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x52c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_52c9dc:
    // 0x52c9dc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x52c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_52c9e0:
    // 0x52c9e0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x52c9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_52c9e4:
    // 0x52c9e4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_52c9e8:
    if (ctx->pc == 0x52C9E8u) {
        ctx->pc = 0x52C9ECu;
        goto label_52c9ec;
    }
    ctx->pc = 0x52C9E4u;
    {
        const bool branch_taken_0x52c9e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c9e4) {
            ctx->pc = 0x52CA80u;
            goto label_52ca80;
        }
    }
    ctx->pc = 0x52C9ECu;
label_52c9ec:
    // 0x52c9ec: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x52c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_52c9f0:
    // 0x52c9f0: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x52c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_52c9f4:
    // 0x52c9f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x52c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_52c9f8:
    // 0x52c9f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x52c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_52c9fc:
    // 0x52c9fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x52c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_52ca00:
    // 0x52ca00: 0xc040138  jal         func_1004E0
label_52ca04:
    if (ctx->pc == 0x52CA04u) {
        ctx->pc = 0x52CA04u;
            // 0x52ca04: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x52CA08u;
        goto label_52ca08;
    }
    ctx->pc = 0x52CA00u;
    SET_GPR_U32(ctx, 31, 0x52CA08u);
    ctx->pc = 0x52CA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CA00u;
            // 0x52ca04: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CA08u; }
        if (ctx->pc != 0x52CA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CA08u; }
        if (ctx->pc != 0x52CA08u) { return; }
    }
    ctx->pc = 0x52CA08u;
label_52ca08:
    // 0x52ca08: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x52ca08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_52ca0c:
    // 0x52ca0c: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x52ca0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_52ca10:
    // 0x52ca10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x52ca10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52ca14:
    // 0x52ca14: 0x24a5caa0  addiu       $a1, $a1, -0x3560
    ctx->pc = 0x52ca14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953632));
label_52ca18:
    // 0x52ca18: 0x24c6c1a0  addiu       $a2, $a2, -0x3E60
    ctx->pc = 0x52ca18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951328));
label_52ca1c:
    // 0x52ca1c: 0x240704b0  addiu       $a3, $zero, 0x4B0
    ctx->pc = 0x52ca1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
label_52ca20:
    // 0x52ca20: 0xc040840  jal         func_102100
label_52ca24:
    if (ctx->pc == 0x52CA24u) {
        ctx->pc = 0x52CA24u;
            // 0x52ca24: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52CA28u;
        goto label_52ca28;
    }
    ctx->pc = 0x52CA20u;
    SET_GPR_U32(ctx, 31, 0x52CA28u);
    ctx->pc = 0x52CA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CA20u;
            // 0x52ca24: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CA28u; }
        if (ctx->pc != 0x52CA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CA28u; }
        if (ctx->pc != 0x52CA28u) { return; }
    }
    ctx->pc = 0x52CA28u;
label_52ca28:
    // 0x52ca28: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x52ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_52ca2c:
    // 0x52ca2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x52ca2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52ca30:
    // 0x52ca30: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x52ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_52ca34:
    // 0x52ca34: 0xc0788fc  jal         func_1E23F0
label_52ca38:
    if (ctx->pc == 0x52CA38u) {
        ctx->pc = 0x52CA38u;
            // 0x52ca38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52CA3Cu;
        goto label_52ca3c;
    }
    ctx->pc = 0x52CA34u;
    SET_GPR_U32(ctx, 31, 0x52CA3Cu);
    ctx->pc = 0x52CA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CA34u;
            // 0x52ca38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CA3Cu; }
        if (ctx->pc != 0x52CA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CA3Cu; }
        if (ctx->pc != 0x52CA3Cu) { return; }
    }
    ctx->pc = 0x52CA3Cu;
label_52ca3c:
    // 0x52ca3c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x52ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_52ca40:
    // 0x52ca40: 0xc0788fc  jal         func_1E23F0
label_52ca44:
    if (ctx->pc == 0x52CA44u) {
        ctx->pc = 0x52CA44u;
            // 0x52ca44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52CA48u;
        goto label_52ca48;
    }
    ctx->pc = 0x52CA40u;
    SET_GPR_U32(ctx, 31, 0x52CA48u);
    ctx->pc = 0x52CA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CA40u;
            // 0x52ca44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CA48u; }
        if (ctx->pc != 0x52CA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CA48u; }
        if (ctx->pc != 0x52CA48u) { return; }
    }
    ctx->pc = 0x52CA48u;
label_52ca48:
    // 0x52ca48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x52ca48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52ca4c:
    // 0x52ca4c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x52ca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_52ca50:
    // 0x52ca50: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x52ca50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_52ca54:
    // 0x52ca54: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x52ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_52ca58:
    // 0x52ca58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52ca58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52ca5c:
    // 0x52ca5c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x52ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_52ca60:
    // 0x52ca60: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x52ca60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_52ca64:
    // 0x52ca64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_52ca68:
    // 0x52ca68: 0xc0a997c  jal         func_2A65F0
label_52ca6c:
    if (ctx->pc == 0x52CA6Cu) {
        ctx->pc = 0x52CA6Cu;
            // 0x52ca6c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x52CA70u;
        goto label_52ca70;
    }
    ctx->pc = 0x52CA68u;
    SET_GPR_U32(ctx, 31, 0x52CA70u);
    ctx->pc = 0x52CA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CA68u;
            // 0x52ca6c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CA70u; }
        if (ctx->pc != 0x52CA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CA70u; }
        if (ctx->pc != 0x52CA70u) { return; }
    }
    ctx->pc = 0x52CA70u;
label_52ca70:
    // 0x52ca70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x52ca70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_52ca74:
    // 0x52ca74: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x52ca74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_52ca78:
    // 0x52ca78: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_52ca7c:
    if (ctx->pc == 0x52CA7Cu) {
        ctx->pc = 0x52CA7Cu;
            // 0x52ca7c: 0x265204b0  addiu       $s2, $s2, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1200));
        ctx->pc = 0x52CA80u;
        goto label_52ca80;
    }
    ctx->pc = 0x52CA78u;
    {
        const bool branch_taken_0x52ca78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x52CA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CA78u;
            // 0x52ca7c: 0x265204b0  addiu       $s2, $s2, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52ca78) {
            ctx->pc = 0x52CA4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52ca4c;
        }
    }
    ctx->pc = 0x52CA80u;
label_52ca80:
    // 0x52ca80: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x52ca80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_52ca84:
    // 0x52ca84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x52ca84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_52ca88:
    // 0x52ca88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52ca88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52ca8c:
    // 0x52ca8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52ca8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52ca90:
    // 0x52ca90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52ca90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52ca94:
    // 0x52ca94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52ca94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52ca98:
    // 0x52ca98: 0x3e00008  jr          $ra
label_52ca9c:
    if (ctx->pc == 0x52CA9Cu) {
        ctx->pc = 0x52CA9Cu;
            // 0x52ca9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x52CAA0u;
        goto label_52caa0;
    }
    ctx->pc = 0x52CA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52CA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CA98u;
            // 0x52ca9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52CAA0u;
label_52caa0:
    // 0x52caa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x52caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_52caa4:
    // 0x52caa4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52caa8:
    // 0x52caa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52caa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52caac:
    // 0x52caac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x52caacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52cab0:
    // 0x52cab0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52cab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52cab4:
    // 0x52cab4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x52cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_52cab8:
    // 0x52cab8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x52cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_52cabc:
    // 0x52cabc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x52cabcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_52cac0:
    // 0x52cac0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x52cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_52cac4:
    // 0x52cac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x52cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52cac8:
    // 0x52cac8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x52cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_52cacc:
    // 0x52cacc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52caccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52cad0:
    // 0x52cad0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x52cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_52cad4:
    // 0x52cad4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x52cad4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_52cad8:
    // 0x52cad8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x52cad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_52cadc:
    // 0x52cadc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x52cadcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_52cae0:
    // 0x52cae0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x52cae0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_52cae4:
    // 0x52cae4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x52cae4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_52cae8:
    // 0x52cae8: 0xc04cbd8  jal         func_132F60
label_52caec:
    if (ctx->pc == 0x52CAECu) {
        ctx->pc = 0x52CAECu;
            // 0x52caec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x52CAF0u;
        goto label_52caf0;
    }
    ctx->pc = 0x52CAE8u;
    SET_GPR_U32(ctx, 31, 0x52CAF0u);
    ctx->pc = 0x52CAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CAE8u;
            // 0x52caec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CAF0u; }
        if (ctx->pc != 0x52CAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CAF0u; }
        if (ctx->pc != 0x52CAF0u) { return; }
    }
    ctx->pc = 0x52CAF0u;
label_52caf0:
    // 0x52caf0: 0xc04c968  jal         func_1325A0
label_52caf4:
    if (ctx->pc == 0x52CAF4u) {
        ctx->pc = 0x52CAF4u;
            // 0x52caf4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x52CAF8u;
        goto label_52caf8;
    }
    ctx->pc = 0x52CAF0u;
    SET_GPR_U32(ctx, 31, 0x52CAF8u);
    ctx->pc = 0x52CAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CAF0u;
            // 0x52caf4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CAF8u; }
        if (ctx->pc != 0x52CAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CAF8u; }
        if (ctx->pc != 0x52CAF8u) { return; }
    }
    ctx->pc = 0x52CAF8u;
label_52caf8:
    // 0x52caf8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52cafc:
    // 0x52cafc: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x52cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_52cb00:
    // 0x52cb00: 0x8c480e80  lw          $t0, 0xE80($v0)
    ctx->pc = 0x52cb00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_52cb04:
    // 0x52cb04: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x52cb04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_52cb08:
    // 0x52cb08: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x52cb08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_52cb0c:
    // 0x52cb0c: 0x2463c560  addiu       $v1, $v1, -0x3AA0
    ctx->pc = 0x52cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952288));
label_52cb10:
    // 0x52cb10: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x52cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_52cb14:
    // 0x52cb14: 0x24a5cb60  addiu       $a1, $a1, -0x34A0
    ctx->pc = 0x52cb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953824));
label_52cb18:
    // 0x52cb18: 0x8d090788  lw          $t1, 0x788($t0)
    ctx->pc = 0x52cb18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1928)));
label_52cb1c:
    // 0x52cb1c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52cb20:
    // 0x52cb20: 0x244269b0  addiu       $v0, $v0, 0x69B0
    ctx->pc = 0x52cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27056));
label_52cb24:
    // 0x52cb24: 0x24c6c250  addiu       $a2, $a2, -0x3DB0
    ctx->pc = 0x52cb24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951504));
label_52cb28:
    // 0x52cb28: 0x24070110  addiu       $a3, $zero, 0x110
    ctx->pc = 0x52cb28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_52cb2c:
    // 0x52cb2c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x52cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_52cb30:
    // 0x52cb30: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x52cb30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52cb34:
    // 0x52cb34: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x52cb34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_52cb38:
    // 0x52cb38: 0xa203004d  sb          $v1, 0x4D($s0)
    ctx->pc = 0x52cb38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 3));
label_52cb3c:
    // 0x52cb3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x52cb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_52cb40:
    // 0x52cb40: 0xc040804  jal         func_102010
label_52cb44:
    if (ctx->pc == 0x52CB44u) {
        ctx->pc = 0x52CB44u;
            // 0x52cb44: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x52CB48u;
        goto label_52cb48;
    }
    ctx->pc = 0x52CB40u;
    SET_GPR_U32(ctx, 31, 0x52CB48u);
    ctx->pc = 0x52CB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CB40u;
            // 0x52cb44: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CB48u; }
        if (ctx->pc != 0x52CB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CB48u; }
        if (ctx->pc != 0x52CB48u) { return; }
    }
    ctx->pc = 0x52CB48u;
label_52cb48:
    // 0x52cb48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52cb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52cb4c:
    // 0x52cb4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52cb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52cb50:
    // 0x52cb50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52cb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52cb54:
    // 0x52cb54: 0x3e00008  jr          $ra
label_52cb58:
    if (ctx->pc == 0x52CB58u) {
        ctx->pc = 0x52CB58u;
            // 0x52cb58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x52CB5Cu;
        goto label_52cb5c;
    }
    ctx->pc = 0x52CB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52CB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CB54u;
            // 0x52cb58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52CB5Cu;
label_52cb5c:
    // 0x52cb5c: 0x0  nop
    ctx->pc = 0x52cb5cu;
    // NOP
label_52cb60:
    // 0x52cb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x52cb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_52cb64:
    // 0x52cb64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52cb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52cb68:
    // 0x52cb68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52cb6c:
    // 0x52cb6c: 0xc0aeebc  jal         func_2BBAF0
label_52cb70:
    if (ctx->pc == 0x52CB70u) {
        ctx->pc = 0x52CB70u;
            // 0x52cb70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52CB74u;
        goto label_52cb74;
    }
    ctx->pc = 0x52CB6Cu;
    SET_GPR_U32(ctx, 31, 0x52CB74u);
    ctx->pc = 0x52CB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CB6Cu;
            // 0x52cb70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CB74u; }
        if (ctx->pc != 0x52CB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CB74u; }
        if (ctx->pc != 0x52CB74u) { return; }
    }
    ctx->pc = 0x52CB74u;
label_52cb74:
    // 0x52cb74: 0xc0aeeb4  jal         func_2BBAD0
label_52cb78:
    if (ctx->pc == 0x52CB78u) {
        ctx->pc = 0x52CB78u;
            // 0x52cb78: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x52CB7Cu;
        goto label_52cb7c;
    }
    ctx->pc = 0x52CB74u;
    SET_GPR_U32(ctx, 31, 0x52CB7Cu);
    ctx->pc = 0x52CB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CB74u;
            // 0x52cb78: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CB7Cu; }
        if (ctx->pc != 0x52CB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CB7Cu; }
        if (ctx->pc != 0x52CB7Cu) { return; }
    }
    ctx->pc = 0x52CB7Cu;
label_52cb7c:
    // 0x52cb7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x52cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_52cb80:
    // 0x52cb80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52cb84:
    // 0x52cb84: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x52cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_52cb88:
    // 0x52cb88: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x52cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_52cb8c:
    // 0x52cb8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52cb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_52cb90:
    // 0x52cb90: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x52cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_52cb94:
    // 0x52cb94: 0xc0aeea4  jal         func_2BBA90
label_52cb98:
    if (ctx->pc == 0x52CB98u) {
        ctx->pc = 0x52CB98u;
            // 0x52cb98: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x52CB9Cu;
        goto label_52cb9c;
    }
    ctx->pc = 0x52CB94u;
    SET_GPR_U32(ctx, 31, 0x52CB9Cu);
    ctx->pc = 0x52CB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CB94u;
            // 0x52cb98: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CB9Cu; }
        if (ctx->pc != 0x52CB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CB9Cu; }
        if (ctx->pc != 0x52CB9Cu) { return; }
    }
    ctx->pc = 0x52CB9Cu;
label_52cb9c:
    // 0x52cb9c: 0xc0aee8c  jal         func_2BBA30
label_52cba0:
    if (ctx->pc == 0x52CBA0u) {
        ctx->pc = 0x52CBA0u;
            // 0x52cba0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x52CBA4u;
        goto label_52cba4;
    }
    ctx->pc = 0x52CB9Cu;
    SET_GPR_U32(ctx, 31, 0x52CBA4u);
    ctx->pc = 0x52CBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CB9Cu;
            // 0x52cba0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CBA4u; }
        if (ctx->pc != 0x52CBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CBA4u; }
        if (ctx->pc != 0x52CBA4u) { return; }
    }
    ctx->pc = 0x52CBA4u;
label_52cba4:
    // 0x52cba4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x52cba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_52cba8:
    // 0x52cba8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x52cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_52cbac:
    // 0x52cbac: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x52cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_52cbb0:
    // 0x52cbb0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x52cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_52cbb4:
    // 0x52cbb4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x52cbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_52cbb8:
    // 0x52cbb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52cbbc:
    // 0x52cbbc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x52cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_52cbc0:
    // 0x52cbc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x52cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_52cbc4:
    // 0x52cbc4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x52cbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_52cbc8:
    // 0x52cbc8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x52cbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_52cbcc:
    // 0x52cbcc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x52cbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_52cbd0:
    // 0x52cbd0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x52cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_52cbd4:
    // 0x52cbd4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x52cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_52cbd8:
    // 0x52cbd8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x52cbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_52cbdc:
    // 0x52cbdc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x52cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_52cbe0:
    // 0x52cbe0: 0xc0775b8  jal         func_1DD6E0
label_52cbe4:
    if (ctx->pc == 0x52CBE4u) {
        ctx->pc = 0x52CBE4u;
            // 0x52cbe4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x52CBE8u;
        goto label_52cbe8;
    }
    ctx->pc = 0x52CBE0u;
    SET_GPR_U32(ctx, 31, 0x52CBE8u);
    ctx->pc = 0x52CBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CBE0u;
            // 0x52cbe4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CBE8u; }
        if (ctx->pc != 0x52CBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CBE8u; }
        if (ctx->pc != 0x52CBE8u) { return; }
    }
    ctx->pc = 0x52CBE8u;
label_52cbe8:
    // 0x52cbe8: 0xc077314  jal         func_1DCC50
label_52cbec:
    if (ctx->pc == 0x52CBECu) {
        ctx->pc = 0x52CBECu;
            // 0x52cbec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x52CBF0u;
        goto label_52cbf0;
    }
    ctx->pc = 0x52CBE8u;
    SET_GPR_U32(ctx, 31, 0x52CBF0u);
    ctx->pc = 0x52CBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CBE8u;
            // 0x52cbec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CBF0u; }
        if (ctx->pc != 0x52CBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CBF0u; }
        if (ctx->pc != 0x52CBF0u) { return; }
    }
    ctx->pc = 0x52CBF0u;
label_52cbf0:
    // 0x52cbf0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x52cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_52cbf4:
    // 0x52cbf4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x52cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_52cbf8:
    // 0x52cbf8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x52cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_52cbfc:
    // 0x52cbfc: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x52cbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_52cc00:
    // 0x52cc00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x52cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_52cc04:
    // 0x52cc04: 0x24846a00  addiu       $a0, $a0, 0x6A00
    ctx->pc = 0x52cc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27136));
label_52cc08:
    // 0x52cc08: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x52cc08u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_52cc0c:
    // 0x52cc0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52cc10:
    // 0x52cc10: 0x24636a40  addiu       $v1, $v1, 0x6A40
    ctx->pc = 0x52cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27200));
label_52cc14:
    // 0x52cc14: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x52cc14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_52cc18:
    // 0x52cc18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52cc18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52cc1c:
    // 0x52cc1c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x52cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_52cc20:
    // 0x52cc20: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x52cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_52cc24:
    // 0x52cc24: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x52cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_52cc28:
    // 0x52cc28: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x52cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_52cc2c:
    // 0x52cc2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52cc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52cc30:
    // 0x52cc30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52cc30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52cc34:
    // 0x52cc34: 0x3e00008  jr          $ra
label_52cc38:
    if (ctx->pc == 0x52CC38u) {
        ctx->pc = 0x52CC38u;
            // 0x52cc38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x52CC3Cu;
        goto label_52cc3c;
    }
    ctx->pc = 0x52CC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52CC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CC34u;
            // 0x52cc38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52CC3Cu;
label_52cc3c:
    // 0x52cc3c: 0x0  nop
    ctx->pc = 0x52cc3cu;
    // NOP
label_52cc40:
    // 0x52cc40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52cc44:
    // 0x52cc44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_52cc48:
    // 0x52cc48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52cc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52cc4c:
    // 0x52cc4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52cc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52cc50:
    // 0x52cc50: 0x24910060  addiu       $s1, $a0, 0x60
    ctx->pc = 0x52cc50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_52cc54:
    // 0x52cc54: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x52cc54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52cc58:
    // 0x52cc58: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x52cc58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_52cc5c:
    // 0x52cc5c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x52cc5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_52cc60:
    // 0x52cc60: 0x320f809  jalr        $t9
label_52cc64:
    if (ctx->pc == 0x52CC64u) {
        ctx->pc = 0x52CC64u;
            // 0x52cc64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52CC68u;
        goto label_52cc68;
    }
    ctx->pc = 0x52CC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52CC68u);
        ctx->pc = 0x52CC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CC60u;
            // 0x52cc64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52CC68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52CC68u; }
            if (ctx->pc != 0x52CC68u) { return; }
        }
        }
    }
    ctx->pc = 0x52CC68u;
label_52cc68:
    // 0x52cc68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x52cc68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_52cc6c:
    // 0x52cc6c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_52cc70:
    if (ctx->pc == 0x52CC70u) {
        ctx->pc = 0x52CC70u;
            // 0x52cc70: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->pc = 0x52CC74u;
        goto label_52cc74;
    }
    ctx->pc = 0x52CC6Cu;
    {
        const bool branch_taken_0x52cc6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x52CC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CC6Cu;
            // 0x52cc70: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52cc6c) {
            ctx->pc = 0x52CC58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52cc58;
        }
    }
    ctx->pc = 0x52CC74u;
label_52cc74:
    // 0x52cc74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52cc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52cc78:
    // 0x52cc78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52cc78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52cc7c:
    // 0x52cc7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52cc7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52cc80:
    // 0x52cc80: 0x3e00008  jr          $ra
label_52cc84:
    if (ctx->pc == 0x52CC84u) {
        ctx->pc = 0x52CC84u;
            // 0x52cc84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52CC88u;
        goto label_52cc88;
    }
    ctx->pc = 0x52CC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52CC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CC80u;
            // 0x52cc84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52CC88u;
label_52cc88:
    // 0x52cc88: 0x0  nop
    ctx->pc = 0x52cc88u;
    // NOP
label_52cc8c:
    // 0x52cc8c: 0x0  nop
    ctx->pc = 0x52cc8cu;
    // NOP
label_52cc90:
    // 0x52cc90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x52cc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_52cc94:
    // 0x52cc94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x52cc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_52cc98:
    // 0x52cc98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52cc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52cc9c:
    // 0x52cc9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52cc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52cca0:
    // 0x52cca0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x52cca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52cca4:
    // 0x52cca4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52cca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52cca8:
    // 0x52cca8: 0x26510060  addiu       $s1, $s2, 0x60
    ctx->pc = 0x52cca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_52ccac:
    // 0x52ccac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x52ccacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52ccb0:
    // 0x52ccb0: 0xae3200d4  sw          $s2, 0xD4($s1)
    ctx->pc = 0x52ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 18));
label_52ccb4:
    // 0x52ccb4: 0xae3000d8  sw          $s0, 0xD8($s1)
    ctx->pc = 0x52ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
label_52ccb8:
    // 0x52ccb8: 0x8e45003c  lw          $a1, 0x3C($s2)
    ctx->pc = 0x52ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_52ccbc:
    // 0x52ccbc: 0xc0d879c  jal         func_361E70
label_52ccc0:
    if (ctx->pc == 0x52CCC0u) {
        ctx->pc = 0x52CCC0u;
            // 0x52ccc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52CCC4u;
        goto label_52ccc4;
    }
    ctx->pc = 0x52CCBCu;
    SET_GPR_U32(ctx, 31, 0x52CCC4u);
    ctx->pc = 0x52CCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CCBCu;
            // 0x52ccc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CCC4u; }
        if (ctx->pc != 0x52CCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CCC4u; }
        if (ctx->pc != 0x52CCC4u) { return; }
    }
    ctx->pc = 0x52CCC4u;
label_52ccc4:
    // 0x52ccc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x52ccc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_52ccc8:
    // 0x52ccc8: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x52ccc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_52cccc:
    // 0x52cccc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_52ccd0:
    if (ctx->pc == 0x52CCD0u) {
        ctx->pc = 0x52CCD0u;
            // 0x52ccd0: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->pc = 0x52CCD4u;
        goto label_52ccd4;
    }
    ctx->pc = 0x52CCCCu;
    {
        const bool branch_taken_0x52cccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52CCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CCCCu;
            // 0x52ccd0: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52cccc) {
            ctx->pc = 0x52CCB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52ccb0;
        }
    }
    ctx->pc = 0x52CCD4u;
label_52ccd4:
    // 0x52ccd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x52ccd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_52ccd8:
    // 0x52ccd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52ccd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52ccdc:
    // 0x52ccdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52ccdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52cce0:
    // 0x52cce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52cce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52cce4:
    // 0x52cce4: 0x3e00008  jr          $ra
label_52cce8:
    if (ctx->pc == 0x52CCE8u) {
        ctx->pc = 0x52CCE8u;
            // 0x52cce8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x52CCECu;
        goto label_52ccec;
    }
    ctx->pc = 0x52CCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52CCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CCE4u;
            // 0x52cce8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52CCECu;
label_52ccec:
    // 0x52ccec: 0x0  nop
    ctx->pc = 0x52ccecu;
    // NOP
label_52ccf0:
    // 0x52ccf0: 0x3e00008  jr          $ra
label_52ccf4:
    if (ctx->pc == 0x52CCF4u) {
        ctx->pc = 0x52CCF8u;
        goto label_52ccf8;
    }
    ctx->pc = 0x52CCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52CCF8u;
label_52ccf8:
    // 0x52ccf8: 0x0  nop
    ctx->pc = 0x52ccf8u;
    // NOP
label_52ccfc:
    // 0x52ccfc: 0x0  nop
    ctx->pc = 0x52ccfcu;
    // NOP
label_52cd00:
    // 0x52cd00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x52cd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_52cd04:
    // 0x52cd04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x52cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_52cd08:
    // 0x52cd08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52cd0c:
    // 0x52cd0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52cd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52cd10:
    // 0x52cd10: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x52cd10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52cd14:
    // 0x52cd14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52cd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52cd18:
    // 0x52cd18: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x52cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_52cd1c:
    // 0x52cd1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52cd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52cd20:
    // 0x52cd20: 0xac8004a0  sw          $zero, 0x4A0($a0)
    ctx->pc = 0x52cd20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1184), GPR_U32(ctx, 0));
label_52cd24:
    // 0x52cd24: 0x26110060  addiu       $s1, $s0, 0x60
    ctx->pc = 0x52cd24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_52cd28:
    // 0x52cd28: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x52cd28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_52cd2c:
    // 0x52cd2c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x52cd2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_52cd30:
    // 0x52cd30: 0x320f809  jalr        $t9
label_52cd34:
    if (ctx->pc == 0x52CD34u) {
        ctx->pc = 0x52CD34u;
            // 0x52cd34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52CD38u;
        goto label_52cd38;
    }
    ctx->pc = 0x52CD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52CD38u);
        ctx->pc = 0x52CD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CD30u;
            // 0x52cd34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52CD38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52CD38u; }
            if (ctx->pc != 0x52CD38u) { return; }
        }
        }
    }
    ctx->pc = 0x52CD38u;
label_52cd38:
    // 0x52cd38: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x52cd38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_52cd3c:
    // 0x52cd3c: 0x1640fffa  bnez        $s2, . + 4 + (-0x6 << 2)
label_52cd40:
    if (ctx->pc == 0x52CD40u) {
        ctx->pc = 0x52CD40u;
            // 0x52cd40: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->pc = 0x52CD44u;
        goto label_52cd44;
    }
    ctx->pc = 0x52CD3Cu;
    {
        const bool branch_taken_0x52cd3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x52CD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CD3Cu;
            // 0x52cd40: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52cd3c) {
            ctx->pc = 0x52CD28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52cd28;
        }
    }
    ctx->pc = 0x52CD44u;
label_52cd44:
    // 0x52cd44: 0x92030160  lbu         $v1, 0x160($s0)
    ctx->pc = 0x52cd44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 352)));
label_52cd48:
    // 0x52cd48: 0x54600013  bnel        $v1, $zero, . + 4 + (0x13 << 2)
label_52cd4c:
    if (ctx->pc == 0x52CD4Cu) {
        ctx->pc = 0x52CD4Cu;
            // 0x52cd4c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x52CD50u;
        goto label_52cd50;
    }
    ctx->pc = 0x52CD48u;
    {
        const bool branch_taken_0x52cd48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x52cd48) {
            ctx->pc = 0x52CD4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52CD48u;
            // 0x52cd4c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52CD98u;
            goto label_52cd98;
        }
    }
    ctx->pc = 0x52CD50u;
label_52cd50:
    // 0x52cd50: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x52cd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_52cd54:
    // 0x52cd54: 0x3c02ff1e  lui         $v0, 0xFF1E
    ctx->pc = 0x52cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65310 << 16));
label_52cd58:
    // 0x52cd58: 0x3444fedf  ori         $a0, $v0, 0xFEDF
    ctx->pc = 0x52cd58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65247);
label_52cd5c:
    // 0x52cd5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52cd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52cd60:
    // 0x52cd60: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x52cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_52cd64:
    // 0x52cd64: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x52cd64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_52cd68:
    // 0x52cd68: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x52cd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_52cd6c:
    // 0x52cd6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52cd70:
    // 0x52cd70: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x52cd70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_52cd74:
    // 0x52cd74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x52cd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_52cd78:
    // 0x52cd78: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x52cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_52cd7c:
    // 0x52cd7c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52cd80:
    // 0x52cd80: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x52cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_52cd84:
    // 0x52cd84: 0xc08bff0  jal         func_22FFC0
label_52cd88:
    if (ctx->pc == 0x52CD88u) {
        ctx->pc = 0x52CD88u;
            // 0x52cd88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52CD8Cu;
        goto label_52cd8c;
    }
    ctx->pc = 0x52CD84u;
    SET_GPR_U32(ctx, 31, 0x52CD8Cu);
    ctx->pc = 0x52CD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CD84u;
            // 0x52cd88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CD8Cu; }
        if (ctx->pc != 0x52CD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CD8Cu; }
        if (ctx->pc != 0x52CD8Cu) { return; }
    }
    ctx->pc = 0x52CD8Cu;
label_52cd8c:
    // 0x52cd8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52cd90:
    // 0x52cd90: 0xa2030160  sb          $v1, 0x160($s0)
    ctx->pc = 0x52cd90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 352), (uint8_t)GPR_U32(ctx, 3));
label_52cd94:
    // 0x52cd94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x52cd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_52cd98:
    // 0x52cd98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52cd98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52cd9c:
    // 0x52cd9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52cd9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52cda0:
    // 0x52cda0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52cda0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52cda4:
    // 0x52cda4: 0x3e00008  jr          $ra
label_52cda8:
    if (ctx->pc == 0x52CDA8u) {
        ctx->pc = 0x52CDA8u;
            // 0x52cda8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x52CDACu;
        goto label_52cdac;
    }
    ctx->pc = 0x52CDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52CDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CDA4u;
            // 0x52cda8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52CDACu;
label_52cdac:
    // 0x52cdac: 0x0  nop
    ctx->pc = 0x52cdacu;
    // NOP
label_52cdb0:
    // 0x52cdb0: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x52cdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_52cdb4:
    // 0x52cdb4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x52cdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_52cdb8:
    // 0x52cdb8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x52cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52cdbc:
    // 0x52cdbc: 0x80bb2e8  j           func_2ECBA0
label_52cdc0:
    if (ctx->pc == 0x52CDC0u) {
        ctx->pc = 0x52CDC0u;
            // 0x52cdc0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x52CDC4u;
        goto label_52cdc4;
    }
    ctx->pc = 0x52CDBCu;
    ctx->pc = 0x52CDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CDBCu;
            // 0x52cdc0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x52CDC4u;
label_52cdc4:
    // 0x52cdc4: 0x0  nop
    ctx->pc = 0x52cdc4u;
    // NOP
label_52cdc8:
    // 0x52cdc8: 0x0  nop
    ctx->pc = 0x52cdc8u;
    // NOP
label_52cdcc:
    // 0x52cdcc: 0x0  nop
    ctx->pc = 0x52cdccu;
    // NOP
label_52cdd0:
    // 0x52cdd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x52cdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_52cdd4:
    // 0x52cdd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x52cdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_52cdd8:
    // 0x52cdd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52cdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52cddc:
    // 0x52cddc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52cddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52cde0:
    // 0x52cde0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x52cde0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52cde4:
    // 0x52cde4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52cde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52cde8:
    // 0x52cde8: 0xc0e34b0  jal         func_38D2C0
label_52cdec:
    if (ctx->pc == 0x52CDECu) {
        ctx->pc = 0x52CDECu;
            // 0x52cdec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x52CDF0u;
        goto label_52cdf0;
    }
    ctx->pc = 0x52CDE8u;
    SET_GPR_U32(ctx, 31, 0x52CDF0u);
    ctx->pc = 0x52CDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CDE8u;
            // 0x52cdec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CDF0u; }
        if (ctx->pc != 0x52CDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CDF0u; }
        if (ctx->pc != 0x52CDF0u) { return; }
    }
    ctx->pc = 0x52CDF0u;
label_52cdf0:
    // 0x52cdf0: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x52cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_52cdf4:
    // 0x52cdf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52cdf8:
    // 0x52cdf8: 0x5483003c  bnel        $a0, $v1, . + 4 + (0x3C << 2)
label_52cdfc:
    if (ctx->pc == 0x52CDFCu) {
        ctx->pc = 0x52CDFCu;
            // 0x52cdfc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x52CE00u;
        goto label_52ce00;
    }
    ctx->pc = 0x52CDF8u;
    {
        const bool branch_taken_0x52cdf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x52cdf8) {
            ctx->pc = 0x52CDFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52CDF8u;
            // 0x52cdfc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52CEECu;
            goto label_52ceec;
        }
    }
    ctx->pc = 0x52CE00u;
label_52ce00:
    // 0x52ce00: 0x92630100  lbu         $v1, 0x100($s3)
    ctx->pc = 0x52ce00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 256)));
label_52ce04:
    // 0x52ce04: 0x5060002f  beql        $v1, $zero, . + 4 + (0x2F << 2)
label_52ce08:
    if (ctx->pc == 0x52CE08u) {
        ctx->pc = 0x52CE08u;
            // 0x52ce08: 0x8e6400d4  lw          $a0, 0xD4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
        ctx->pc = 0x52CE0Cu;
        goto label_52ce0c;
    }
    ctx->pc = 0x52CE04u;
    {
        const bool branch_taken_0x52ce04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ce04) {
            ctx->pc = 0x52CE08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52CE04u;
            // 0x52ce08: 0x8e6400d4  lw          $a0, 0xD4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52CEC4u;
            goto label_52cec4;
        }
    }
    ctx->pc = 0x52CE0Cu;
label_52ce0c:
    // 0x52ce0c: 0x8e7200d8  lw          $s2, 0xD8($s3)
    ctx->pc = 0x52ce0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_52ce10:
    // 0x52ce10: 0x2e410003  sltiu       $at, $s2, 0x3
    ctx->pc = 0x52ce10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_52ce14:
    // 0x52ce14: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
label_52ce18:
    if (ctx->pc == 0x52CE18u) {
        ctx->pc = 0x52CE18u;
            // 0x52ce18: 0x8e7000d4  lw          $s0, 0xD4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
        ctx->pc = 0x52CE1Cu;
        goto label_52ce1c;
    }
    ctx->pc = 0x52CE14u;
    {
        const bool branch_taken_0x52ce14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x52CE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CE14u;
            // 0x52ce18: 0x8e7000d4  lw          $s0, 0xD4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52ce14) {
            ctx->pc = 0x52CEE0u;
            goto label_52cee0;
        }
    }
    ctx->pc = 0x52CE1Cu;
label_52ce1c:
    // 0x52ce1c: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x52ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_52ce20:
    // 0x52ce20: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x52ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_52ce24:
    // 0x52ce24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x52ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_52ce28:
    // 0x52ce28: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x52ce28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_52ce2c:
    // 0x52ce2c: 0x92230270  lbu         $v1, 0x270($s1)
    ctx->pc = 0x52ce2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 624)));
label_52ce30:
    // 0x52ce30: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_52ce34:
    if (ctx->pc == 0x52CE34u) {
        ctx->pc = 0x52CE38u;
        goto label_52ce38;
    }
    ctx->pc = 0x52CE30u;
    {
        const bool branch_taken_0x52ce30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ce30) {
            ctx->pc = 0x52CE40u;
            goto label_52ce40;
        }
    }
    ctx->pc = 0x52CE38u;
label_52ce38:
    // 0x52ce38: 0x10000013  b           . + 4 + (0x13 << 2)
label_52ce3c:
    if (ctx->pc == 0x52CE3Cu) {
        ctx->pc = 0x52CE3Cu;
            // 0x52ce3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52CE40u;
        goto label_52ce40;
    }
    ctx->pc = 0x52CE38u;
    {
        const bool branch_taken_0x52ce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52CE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CE38u;
            // 0x52ce3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52ce38) {
            ctx->pc = 0x52CE88u;
            goto label_52ce88;
        }
    }
    ctx->pc = 0x52CE40u;
label_52ce40:
    // 0x52ce40: 0x8e2501c0  lw          $a1, 0x1C0($s1)
    ctx->pc = 0x52ce40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_52ce44:
    // 0x52ce44: 0x3c03ff1e  lui         $v1, 0xFF1E
    ctx->pc = 0x52ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65310 << 16));
label_52ce48:
    // 0x52ce48: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x52ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_52ce4c:
    // 0x52ce4c: 0x3464fedf  ori         $a0, $v1, 0xFEDF
    ctx->pc = 0x52ce4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65247);
label_52ce50:
    // 0x52ce50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52ce50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52ce54:
    // 0x52ce54: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x52ce54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_52ce58:
    // 0x52ce58: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x52ce58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_52ce5c:
    // 0x52ce5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52ce60:
    // 0x52ce60: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x52ce60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_52ce64:
    // 0x52ce64: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x52ce64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_52ce68:
    // 0x52ce68: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x52ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_52ce6c:
    // 0x52ce6c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52ce70:
    // 0x52ce70: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x52ce70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_52ce74:
    // 0x52ce74: 0xc08bff0  jal         func_22FFC0
label_52ce78:
    if (ctx->pc == 0x52CE78u) {
        ctx->pc = 0x52CE78u;
            // 0x52ce78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52CE7Cu;
        goto label_52ce7c;
    }
    ctx->pc = 0x52CE74u;
    SET_GPR_U32(ctx, 31, 0x52CE7Cu);
    ctx->pc = 0x52CE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CE74u;
            // 0x52ce78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CE7Cu; }
        if (ctx->pc != 0x52CE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CE7Cu; }
        if (ctx->pc != 0x52CE7Cu) { return; }
    }
    ctx->pc = 0x52CE7Cu;
label_52ce7c:
    // 0x52ce7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52ce80:
    // 0x52ce80: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x52ce80u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_52ce84:
    // 0x52ce84: 0xa2230270  sb          $v1, 0x270($s1)
    ctx->pc = 0x52ce84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 624), (uint8_t)GPR_U32(ctx, 3));
label_52ce88:
    // 0x52ce88: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_52ce8c:
    if (ctx->pc == 0x52CE8Cu) {
        ctx->pc = 0x52CE90u;
        goto label_52ce90;
    }
    ctx->pc = 0x52CE88u;
    {
        const bool branch_taken_0x52ce88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x52ce88) {
            ctx->pc = 0x52CEA0u;
            goto label_52cea0;
        }
    }
    ctx->pc = 0x52CE90u;
label_52ce90:
    // 0x52ce90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x52ce90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_52ce94:
    // 0x52ce94: 0x2e430003  sltiu       $v1, $s2, 0x3
    ctx->pc = 0x52ce94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_52ce98:
    // 0x52ce98: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_52ce9c:
    if (ctx->pc == 0x52CE9Cu) {
        ctx->pc = 0x52CE9Cu;
            // 0x52ce9c: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->pc = 0x52CEA0u;
        goto label_52cea0;
    }
    ctx->pc = 0x52CE98u;
    {
        const bool branch_taken_0x52ce98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52CE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CE98u;
            // 0x52ce9c: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52ce98) {
            ctx->pc = 0x52CE2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52ce2c;
        }
    }
    ctx->pc = 0x52CEA0u;
label_52cea0:
    // 0x52cea0: 0xc60104a0  lwc1        $f1, 0x4A0($s0)
    ctx->pc = 0x52cea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52cea4:
    // 0x52cea4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x52cea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52cea8:
    // 0x52cea8: 0x0  nop
    ctx->pc = 0x52cea8u;
    // NOP
label_52ceac:
    // 0x52ceac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x52ceacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52ceb0:
    // 0x52ceb0: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_52ceb4:
    if (ctx->pc == 0x52CEB4u) {
        ctx->pc = 0x52CEB4u;
            // 0x52ceb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52CEB8u;
        goto label_52ceb8;
    }
    ctx->pc = 0x52CEB0u;
    {
        const bool branch_taken_0x52ceb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x52ceb0) {
            ctx->pc = 0x52CEB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52CEB0u;
            // 0x52ceb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52CEE4u;
            goto label_52cee4;
        }
    }
    ctx->pc = 0x52CEB8u;
label_52ceb8:
    // 0x52ceb8: 0x3c034561  lui         $v1, 0x4561
    ctx->pc = 0x52ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17761 << 16));
label_52cebc:
    // 0x52cebc: 0x10000008  b           . + 4 + (0x8 << 2)
label_52cec0:
    if (ctx->pc == 0x52CEC0u) {
        ctx->pc = 0x52CEC0u;
            // 0x52cec0: 0xae0304a0  sw          $v1, 0x4A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1184), GPR_U32(ctx, 3));
        ctx->pc = 0x52CEC4u;
        goto label_52cec4;
    }
    ctx->pc = 0x52CEBCu;
    {
        const bool branch_taken_0x52cebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52CEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CEBCu;
            // 0x52cec0: 0xae0304a0  sw          $v1, 0x4A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52cebc) {
            ctx->pc = 0x52CEE0u;
            goto label_52cee0;
        }
    }
    ctx->pc = 0x52CEC4u;
label_52cec4:
    // 0x52cec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x52cec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52cec8:
    // 0x52cec8: 0xc48104a0  lwc1        $f1, 0x4A0($a0)
    ctx->pc = 0x52cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52cecc:
    // 0x52cecc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x52ceccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52ced0:
    // 0x52ced0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_52ced4:
    if (ctx->pc == 0x52CED4u) {
        ctx->pc = 0x52CED8u;
        goto label_52ced8;
    }
    ctx->pc = 0x52CED0u;
    {
        const bool branch_taken_0x52ced0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x52ced0) {
            ctx->pc = 0x52CEE0u;
            goto label_52cee0;
        }
    }
    ctx->pc = 0x52CED8u;
label_52ced8:
    // 0x52ced8: 0x3c034561  lui         $v1, 0x4561
    ctx->pc = 0x52ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17761 << 16));
label_52cedc:
    // 0x52cedc: 0xac8304a0  sw          $v1, 0x4A0($a0)
    ctx->pc = 0x52cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1184), GPR_U32(ctx, 3));
label_52cee0:
    // 0x52cee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52cee4:
    // 0x52cee4: 0xa2630100  sb          $v1, 0x100($s3)
    ctx->pc = 0x52cee4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 256), (uint8_t)GPR_U32(ctx, 3));
label_52cee8:
    // 0x52cee8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x52cee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_52ceec:
    // 0x52ceec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52ceecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52cef0:
    // 0x52cef0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52cef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52cef4:
    // 0x52cef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52cef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52cef8:
    // 0x52cef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52cef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52cefc:
    // 0x52cefc: 0x3e00008  jr          $ra
label_52cf00:
    if (ctx->pc == 0x52CF00u) {
        ctx->pc = 0x52CF00u;
            // 0x52cf00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x52CF04u;
        goto label_52cf04;
    }
    ctx->pc = 0x52CEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52CF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CEFCu;
            // 0x52cf00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52CF04u;
label_52cf04:
    // 0x52cf04: 0x0  nop
    ctx->pc = 0x52cf04u;
    // NOP
label_52cf08:
    // 0x52cf08: 0x0  nop
    ctx->pc = 0x52cf08u;
    // NOP
label_52cf0c:
    // 0x52cf0c: 0x0  nop
    ctx->pc = 0x52cf0cu;
    // NOP
label_52cf10:
    // 0x52cf10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x52cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_52cf14:
    // 0x52cf14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x52cf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_52cf18:
    // 0x52cf18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52cf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52cf1c:
    // 0x52cf1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52cf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52cf20:
    // 0x52cf20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52cf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52cf24:
    // 0x52cf24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52cf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52cf28:
    // 0x52cf28: 0x90830101  lbu         $v1, 0x101($a0)
    ctx->pc = 0x52cf28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 257)));
label_52cf2c:
    // 0x52cf2c: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_52cf30:
    if (ctx->pc == 0x52CF30u) {
        ctx->pc = 0x52CF30u;
            // 0x52cf30: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52CF34u;
        goto label_52cf34;
    }
    ctx->pc = 0x52CF2Cu;
    {
        const bool branch_taken_0x52cf2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52CF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CF2Cu;
            // 0x52cf30: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52cf2c) {
            ctx->pc = 0x52D00Cu;
            goto label_52d00c;
        }
    }
    ctx->pc = 0x52CF34u;
label_52cf34:
    // 0x52cf34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x52cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52cf38:
    // 0x52cf38: 0xa2620101  sb          $v0, 0x101($s3)
    ctx->pc = 0x52cf38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 257), (uint8_t)GPR_U32(ctx, 2));
label_52cf3c:
    // 0x52cf3c: 0x8e7200d8  lw          $s2, 0xD8($s3)
    ctx->pc = 0x52cf3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_52cf40:
    // 0x52cf40: 0x2e410003  sltiu       $at, $s2, 0x3
    ctx->pc = 0x52cf40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_52cf44:
    // 0x52cf44: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
label_52cf48:
    if (ctx->pc == 0x52CF48u) {
        ctx->pc = 0x52CF48u;
            // 0x52cf48: 0x8e7000d4  lw          $s0, 0xD4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
        ctx->pc = 0x52CF4Cu;
        goto label_52cf4c;
    }
    ctx->pc = 0x52CF44u;
    {
        const bool branch_taken_0x52cf44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x52CF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CF44u;
            // 0x52cf48: 0x8e7000d4  lw          $s0, 0xD4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52cf44) {
            ctx->pc = 0x52CFF0u;
            goto label_52cff0;
        }
    }
    ctx->pc = 0x52CF4Cu;
label_52cf4c:
    // 0x52cf4c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x52cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_52cf50:
    // 0x52cf50: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x52cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_52cf54:
    // 0x52cf54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x52cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_52cf58:
    // 0x52cf58: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x52cf58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_52cf5c:
    // 0x52cf5c: 0x92220270  lbu         $v0, 0x270($s1)
    ctx->pc = 0x52cf5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 624)));
label_52cf60:
    // 0x52cf60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_52cf64:
    if (ctx->pc == 0x52CF64u) {
        ctx->pc = 0x52CF68u;
        goto label_52cf68;
    }
    ctx->pc = 0x52CF60u;
    {
        const bool branch_taken_0x52cf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52cf60) {
            ctx->pc = 0x52CF70u;
            goto label_52cf70;
        }
    }
    ctx->pc = 0x52CF68u;
label_52cf68:
    // 0x52cf68: 0x10000013  b           . + 4 + (0x13 << 2)
label_52cf6c:
    if (ctx->pc == 0x52CF6Cu) {
        ctx->pc = 0x52CF6Cu;
            // 0x52cf6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52CF70u;
        goto label_52cf70;
    }
    ctx->pc = 0x52CF68u;
    {
        const bool branch_taken_0x52cf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52CF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CF68u;
            // 0x52cf6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52cf68) {
            ctx->pc = 0x52CFB8u;
            goto label_52cfb8;
        }
    }
    ctx->pc = 0x52CF70u;
label_52cf70:
    // 0x52cf70: 0x8e2501c0  lw          $a1, 0x1C0($s1)
    ctx->pc = 0x52cf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_52cf74:
    // 0x52cf74: 0x3c03ff1e  lui         $v1, 0xFF1E
    ctx->pc = 0x52cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65310 << 16));
label_52cf78:
    // 0x52cf78: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x52cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_52cf7c:
    // 0x52cf7c: 0x3464fedf  ori         $a0, $v1, 0xFEDF
    ctx->pc = 0x52cf7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65247);
label_52cf80:
    // 0x52cf80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52cf80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52cf84:
    // 0x52cf84: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x52cf84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_52cf88:
    // 0x52cf88: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x52cf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_52cf8c:
    // 0x52cf8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52cf90:
    // 0x52cf90: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x52cf90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_52cf94:
    // 0x52cf94: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x52cf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_52cf98:
    // 0x52cf98: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x52cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_52cf9c:
    // 0x52cf9c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52cfa0:
    // 0x52cfa0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x52cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_52cfa4:
    // 0x52cfa4: 0xc08bff0  jal         func_22FFC0
label_52cfa8:
    if (ctx->pc == 0x52CFA8u) {
        ctx->pc = 0x52CFA8u;
            // 0x52cfa8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52CFACu;
        goto label_52cfac;
    }
    ctx->pc = 0x52CFA4u;
    SET_GPR_U32(ctx, 31, 0x52CFACu);
    ctx->pc = 0x52CFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52CFA4u;
            // 0x52cfa8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CFACu; }
        if (ctx->pc != 0x52CFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52CFACu; }
        if (ctx->pc != 0x52CFACu) { return; }
    }
    ctx->pc = 0x52CFACu;
label_52cfac:
    // 0x52cfac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x52cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52cfb0:
    // 0x52cfb0: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x52cfb0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_52cfb4:
    // 0x52cfb4: 0xa2220270  sb          $v0, 0x270($s1)
    ctx->pc = 0x52cfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 624), (uint8_t)GPR_U32(ctx, 2));
label_52cfb8:
    // 0x52cfb8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_52cfbc:
    if (ctx->pc == 0x52CFBCu) {
        ctx->pc = 0x52CFC0u;
        goto label_52cfc0;
    }
    ctx->pc = 0x52CFB8u;
    {
        const bool branch_taken_0x52cfb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x52cfb8) {
            ctx->pc = 0x52CFD0u;
            goto label_52cfd0;
        }
    }
    ctx->pc = 0x52CFC0u;
label_52cfc0:
    // 0x52cfc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x52cfc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_52cfc4:
    // 0x52cfc4: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x52cfc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_52cfc8:
    // 0x52cfc8: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_52cfcc:
    if (ctx->pc == 0x52CFCCu) {
        ctx->pc = 0x52CFCCu;
            // 0x52cfcc: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->pc = 0x52CFD0u;
        goto label_52cfd0;
    }
    ctx->pc = 0x52CFC8u;
    {
        const bool branch_taken_0x52cfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x52CFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52CFC8u;
            // 0x52cfcc: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52cfc8) {
            ctx->pc = 0x52CF5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52cf5c;
        }
    }
    ctx->pc = 0x52CFD0u;
label_52cfd0:
    // 0x52cfd0: 0xc60104a0  lwc1        $f1, 0x4A0($s0)
    ctx->pc = 0x52cfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52cfd4:
    // 0x52cfd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x52cfd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52cfd8:
    // 0x52cfd8: 0x0  nop
    ctx->pc = 0x52cfd8u;
    // NOP
label_52cfdc:
    // 0x52cfdc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x52cfdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52cfe0:
    // 0x52cfe0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_52cfe4:
    if (ctx->pc == 0x52CFE4u) {
        ctx->pc = 0x52CFE4u;
            // 0x52cfe4: 0x8e6200a0  lw          $v0, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->pc = 0x52CFE8u;
        goto label_52cfe8;
    }
    ctx->pc = 0x52CFE0u;
    {
        const bool branch_taken_0x52cfe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x52cfe0) {
            ctx->pc = 0x52CFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52CFE0u;
            // 0x52cfe4: 0x8e6200a0  lw          $v0, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52CFF4u;
            goto label_52cff4;
        }
    }
    ctx->pc = 0x52CFE8u;
label_52cfe8:
    // 0x52cfe8: 0x3c024561  lui         $v0, 0x4561
    ctx->pc = 0x52cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17761 << 16));
label_52cfec:
    // 0x52cfec: 0xae0204a0  sw          $v0, 0x4A0($s0)
    ctx->pc = 0x52cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1184), GPR_U32(ctx, 2));
label_52cff0:
    // 0x52cff0: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x52cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_52cff4:
    // 0x52cff4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x52cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_52cff8:
    // 0x52cff8: 0x8c440d60  lw          $a0, 0xD60($v0)
    ctx->pc = 0x52cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_52cffc:
    // 0x52cffc: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x52cffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_52d000:
    // 0x52d000: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x52d000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_52d004:
    // 0x52d004: 0x320f809  jalr        $t9
label_52d008:
    if (ctx->pc == 0x52D008u) {
        ctx->pc = 0x52D008u;
            // 0x52d008: 0x240516a9  addiu       $a1, $zero, 0x16A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5801));
        ctx->pc = 0x52D00Cu;
        goto label_52d00c;
    }
    ctx->pc = 0x52D004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52D00Cu);
        ctx->pc = 0x52D008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D004u;
            // 0x52d008: 0x240516a9  addiu       $a1, $zero, 0x16A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5801));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52D00Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52D00Cu; }
            if (ctx->pc != 0x52D00Cu) { return; }
        }
        }
    }
    ctx->pc = 0x52D00Cu;
label_52d00c:
    // 0x52d00c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x52d00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_52d010:
    // 0x52d010: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52d010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52d014:
    // 0x52d014: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52d014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52d018:
    // 0x52d018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52d018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52d01c:
    // 0x52d01c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52d01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52d020:
    // 0x52d020: 0x3e00008  jr          $ra
label_52d024:
    if (ctx->pc == 0x52D024u) {
        ctx->pc = 0x52D024u;
            // 0x52d024: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x52D028u;
        goto label_52d028;
    }
    ctx->pc = 0x52D020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52D024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D020u;
            // 0x52d024: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52D028u;
label_52d028:
    // 0x52d028: 0x0  nop
    ctx->pc = 0x52d028u;
    // NOP
label_52d02c:
    // 0x52d02c: 0x0  nop
    ctx->pc = 0x52d02cu;
    // NOP
}
