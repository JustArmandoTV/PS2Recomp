#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C7B0
// Address: 0x20c7b0 - 0x20cea0
void sub_0020C7B0_0x20c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C7B0_0x20c7b0");
#endif

    switch (ctx->pc) {
        case 0x20c7b0u: goto label_20c7b0;
        case 0x20c7b4u: goto label_20c7b4;
        case 0x20c7b8u: goto label_20c7b8;
        case 0x20c7bcu: goto label_20c7bc;
        case 0x20c7c0u: goto label_20c7c0;
        case 0x20c7c4u: goto label_20c7c4;
        case 0x20c7c8u: goto label_20c7c8;
        case 0x20c7ccu: goto label_20c7cc;
        case 0x20c7d0u: goto label_20c7d0;
        case 0x20c7d4u: goto label_20c7d4;
        case 0x20c7d8u: goto label_20c7d8;
        case 0x20c7dcu: goto label_20c7dc;
        case 0x20c7e0u: goto label_20c7e0;
        case 0x20c7e4u: goto label_20c7e4;
        case 0x20c7e8u: goto label_20c7e8;
        case 0x20c7ecu: goto label_20c7ec;
        case 0x20c7f0u: goto label_20c7f0;
        case 0x20c7f4u: goto label_20c7f4;
        case 0x20c7f8u: goto label_20c7f8;
        case 0x20c7fcu: goto label_20c7fc;
        case 0x20c800u: goto label_20c800;
        case 0x20c804u: goto label_20c804;
        case 0x20c808u: goto label_20c808;
        case 0x20c80cu: goto label_20c80c;
        case 0x20c810u: goto label_20c810;
        case 0x20c814u: goto label_20c814;
        case 0x20c818u: goto label_20c818;
        case 0x20c81cu: goto label_20c81c;
        case 0x20c820u: goto label_20c820;
        case 0x20c824u: goto label_20c824;
        case 0x20c828u: goto label_20c828;
        case 0x20c82cu: goto label_20c82c;
        case 0x20c830u: goto label_20c830;
        case 0x20c834u: goto label_20c834;
        case 0x20c838u: goto label_20c838;
        case 0x20c83cu: goto label_20c83c;
        case 0x20c840u: goto label_20c840;
        case 0x20c844u: goto label_20c844;
        case 0x20c848u: goto label_20c848;
        case 0x20c84cu: goto label_20c84c;
        case 0x20c850u: goto label_20c850;
        case 0x20c854u: goto label_20c854;
        case 0x20c858u: goto label_20c858;
        case 0x20c85cu: goto label_20c85c;
        case 0x20c860u: goto label_20c860;
        case 0x20c864u: goto label_20c864;
        case 0x20c868u: goto label_20c868;
        case 0x20c86cu: goto label_20c86c;
        case 0x20c870u: goto label_20c870;
        case 0x20c874u: goto label_20c874;
        case 0x20c878u: goto label_20c878;
        case 0x20c87cu: goto label_20c87c;
        case 0x20c880u: goto label_20c880;
        case 0x20c884u: goto label_20c884;
        case 0x20c888u: goto label_20c888;
        case 0x20c88cu: goto label_20c88c;
        case 0x20c890u: goto label_20c890;
        case 0x20c894u: goto label_20c894;
        case 0x20c898u: goto label_20c898;
        case 0x20c89cu: goto label_20c89c;
        case 0x20c8a0u: goto label_20c8a0;
        case 0x20c8a4u: goto label_20c8a4;
        case 0x20c8a8u: goto label_20c8a8;
        case 0x20c8acu: goto label_20c8ac;
        case 0x20c8b0u: goto label_20c8b0;
        case 0x20c8b4u: goto label_20c8b4;
        case 0x20c8b8u: goto label_20c8b8;
        case 0x20c8bcu: goto label_20c8bc;
        case 0x20c8c0u: goto label_20c8c0;
        case 0x20c8c4u: goto label_20c8c4;
        case 0x20c8c8u: goto label_20c8c8;
        case 0x20c8ccu: goto label_20c8cc;
        case 0x20c8d0u: goto label_20c8d0;
        case 0x20c8d4u: goto label_20c8d4;
        case 0x20c8d8u: goto label_20c8d8;
        case 0x20c8dcu: goto label_20c8dc;
        case 0x20c8e0u: goto label_20c8e0;
        case 0x20c8e4u: goto label_20c8e4;
        case 0x20c8e8u: goto label_20c8e8;
        case 0x20c8ecu: goto label_20c8ec;
        case 0x20c8f0u: goto label_20c8f0;
        case 0x20c8f4u: goto label_20c8f4;
        case 0x20c8f8u: goto label_20c8f8;
        case 0x20c8fcu: goto label_20c8fc;
        case 0x20c900u: goto label_20c900;
        case 0x20c904u: goto label_20c904;
        case 0x20c908u: goto label_20c908;
        case 0x20c90cu: goto label_20c90c;
        case 0x20c910u: goto label_20c910;
        case 0x20c914u: goto label_20c914;
        case 0x20c918u: goto label_20c918;
        case 0x20c91cu: goto label_20c91c;
        case 0x20c920u: goto label_20c920;
        case 0x20c924u: goto label_20c924;
        case 0x20c928u: goto label_20c928;
        case 0x20c92cu: goto label_20c92c;
        case 0x20c930u: goto label_20c930;
        case 0x20c934u: goto label_20c934;
        case 0x20c938u: goto label_20c938;
        case 0x20c93cu: goto label_20c93c;
        case 0x20c940u: goto label_20c940;
        case 0x20c944u: goto label_20c944;
        case 0x20c948u: goto label_20c948;
        case 0x20c94cu: goto label_20c94c;
        case 0x20c950u: goto label_20c950;
        case 0x20c954u: goto label_20c954;
        case 0x20c958u: goto label_20c958;
        case 0x20c95cu: goto label_20c95c;
        case 0x20c960u: goto label_20c960;
        case 0x20c964u: goto label_20c964;
        case 0x20c968u: goto label_20c968;
        case 0x20c96cu: goto label_20c96c;
        case 0x20c970u: goto label_20c970;
        case 0x20c974u: goto label_20c974;
        case 0x20c978u: goto label_20c978;
        case 0x20c97cu: goto label_20c97c;
        case 0x20c980u: goto label_20c980;
        case 0x20c984u: goto label_20c984;
        case 0x20c988u: goto label_20c988;
        case 0x20c98cu: goto label_20c98c;
        case 0x20c990u: goto label_20c990;
        case 0x20c994u: goto label_20c994;
        case 0x20c998u: goto label_20c998;
        case 0x20c99cu: goto label_20c99c;
        case 0x20c9a0u: goto label_20c9a0;
        case 0x20c9a4u: goto label_20c9a4;
        case 0x20c9a8u: goto label_20c9a8;
        case 0x20c9acu: goto label_20c9ac;
        case 0x20c9b0u: goto label_20c9b0;
        case 0x20c9b4u: goto label_20c9b4;
        case 0x20c9b8u: goto label_20c9b8;
        case 0x20c9bcu: goto label_20c9bc;
        case 0x20c9c0u: goto label_20c9c0;
        case 0x20c9c4u: goto label_20c9c4;
        case 0x20c9c8u: goto label_20c9c8;
        case 0x20c9ccu: goto label_20c9cc;
        case 0x20c9d0u: goto label_20c9d0;
        case 0x20c9d4u: goto label_20c9d4;
        case 0x20c9d8u: goto label_20c9d8;
        case 0x20c9dcu: goto label_20c9dc;
        case 0x20c9e0u: goto label_20c9e0;
        case 0x20c9e4u: goto label_20c9e4;
        case 0x20c9e8u: goto label_20c9e8;
        case 0x20c9ecu: goto label_20c9ec;
        case 0x20c9f0u: goto label_20c9f0;
        case 0x20c9f4u: goto label_20c9f4;
        case 0x20c9f8u: goto label_20c9f8;
        case 0x20c9fcu: goto label_20c9fc;
        case 0x20ca00u: goto label_20ca00;
        case 0x20ca04u: goto label_20ca04;
        case 0x20ca08u: goto label_20ca08;
        case 0x20ca0cu: goto label_20ca0c;
        case 0x20ca10u: goto label_20ca10;
        case 0x20ca14u: goto label_20ca14;
        case 0x20ca18u: goto label_20ca18;
        case 0x20ca1cu: goto label_20ca1c;
        case 0x20ca20u: goto label_20ca20;
        case 0x20ca24u: goto label_20ca24;
        case 0x20ca28u: goto label_20ca28;
        case 0x20ca2cu: goto label_20ca2c;
        case 0x20ca30u: goto label_20ca30;
        case 0x20ca34u: goto label_20ca34;
        case 0x20ca38u: goto label_20ca38;
        case 0x20ca3cu: goto label_20ca3c;
        case 0x20ca40u: goto label_20ca40;
        case 0x20ca44u: goto label_20ca44;
        case 0x20ca48u: goto label_20ca48;
        case 0x20ca4cu: goto label_20ca4c;
        case 0x20ca50u: goto label_20ca50;
        case 0x20ca54u: goto label_20ca54;
        case 0x20ca58u: goto label_20ca58;
        case 0x20ca5cu: goto label_20ca5c;
        case 0x20ca60u: goto label_20ca60;
        case 0x20ca64u: goto label_20ca64;
        case 0x20ca68u: goto label_20ca68;
        case 0x20ca6cu: goto label_20ca6c;
        case 0x20ca70u: goto label_20ca70;
        case 0x20ca74u: goto label_20ca74;
        case 0x20ca78u: goto label_20ca78;
        case 0x20ca7cu: goto label_20ca7c;
        case 0x20ca80u: goto label_20ca80;
        case 0x20ca84u: goto label_20ca84;
        case 0x20ca88u: goto label_20ca88;
        case 0x20ca8cu: goto label_20ca8c;
        case 0x20ca90u: goto label_20ca90;
        case 0x20ca94u: goto label_20ca94;
        case 0x20ca98u: goto label_20ca98;
        case 0x20ca9cu: goto label_20ca9c;
        case 0x20caa0u: goto label_20caa0;
        case 0x20caa4u: goto label_20caa4;
        case 0x20caa8u: goto label_20caa8;
        case 0x20caacu: goto label_20caac;
        case 0x20cab0u: goto label_20cab0;
        case 0x20cab4u: goto label_20cab4;
        case 0x20cab8u: goto label_20cab8;
        case 0x20cabcu: goto label_20cabc;
        case 0x20cac0u: goto label_20cac0;
        case 0x20cac4u: goto label_20cac4;
        case 0x20cac8u: goto label_20cac8;
        case 0x20caccu: goto label_20cacc;
        case 0x20cad0u: goto label_20cad0;
        case 0x20cad4u: goto label_20cad4;
        case 0x20cad8u: goto label_20cad8;
        case 0x20cadcu: goto label_20cadc;
        case 0x20cae0u: goto label_20cae0;
        case 0x20cae4u: goto label_20cae4;
        case 0x20cae8u: goto label_20cae8;
        case 0x20caecu: goto label_20caec;
        case 0x20caf0u: goto label_20caf0;
        case 0x20caf4u: goto label_20caf4;
        case 0x20caf8u: goto label_20caf8;
        case 0x20cafcu: goto label_20cafc;
        case 0x20cb00u: goto label_20cb00;
        case 0x20cb04u: goto label_20cb04;
        case 0x20cb08u: goto label_20cb08;
        case 0x20cb0cu: goto label_20cb0c;
        case 0x20cb10u: goto label_20cb10;
        case 0x20cb14u: goto label_20cb14;
        case 0x20cb18u: goto label_20cb18;
        case 0x20cb1cu: goto label_20cb1c;
        case 0x20cb20u: goto label_20cb20;
        case 0x20cb24u: goto label_20cb24;
        case 0x20cb28u: goto label_20cb28;
        case 0x20cb2cu: goto label_20cb2c;
        case 0x20cb30u: goto label_20cb30;
        case 0x20cb34u: goto label_20cb34;
        case 0x20cb38u: goto label_20cb38;
        case 0x20cb3cu: goto label_20cb3c;
        case 0x20cb40u: goto label_20cb40;
        case 0x20cb44u: goto label_20cb44;
        case 0x20cb48u: goto label_20cb48;
        case 0x20cb4cu: goto label_20cb4c;
        case 0x20cb50u: goto label_20cb50;
        case 0x20cb54u: goto label_20cb54;
        case 0x20cb58u: goto label_20cb58;
        case 0x20cb5cu: goto label_20cb5c;
        case 0x20cb60u: goto label_20cb60;
        case 0x20cb64u: goto label_20cb64;
        case 0x20cb68u: goto label_20cb68;
        case 0x20cb6cu: goto label_20cb6c;
        case 0x20cb70u: goto label_20cb70;
        case 0x20cb74u: goto label_20cb74;
        case 0x20cb78u: goto label_20cb78;
        case 0x20cb7cu: goto label_20cb7c;
        case 0x20cb80u: goto label_20cb80;
        case 0x20cb84u: goto label_20cb84;
        case 0x20cb88u: goto label_20cb88;
        case 0x20cb8cu: goto label_20cb8c;
        case 0x20cb90u: goto label_20cb90;
        case 0x20cb94u: goto label_20cb94;
        case 0x20cb98u: goto label_20cb98;
        case 0x20cb9cu: goto label_20cb9c;
        case 0x20cba0u: goto label_20cba0;
        case 0x20cba4u: goto label_20cba4;
        case 0x20cba8u: goto label_20cba8;
        case 0x20cbacu: goto label_20cbac;
        case 0x20cbb0u: goto label_20cbb0;
        case 0x20cbb4u: goto label_20cbb4;
        case 0x20cbb8u: goto label_20cbb8;
        case 0x20cbbcu: goto label_20cbbc;
        case 0x20cbc0u: goto label_20cbc0;
        case 0x20cbc4u: goto label_20cbc4;
        case 0x20cbc8u: goto label_20cbc8;
        case 0x20cbccu: goto label_20cbcc;
        case 0x20cbd0u: goto label_20cbd0;
        case 0x20cbd4u: goto label_20cbd4;
        case 0x20cbd8u: goto label_20cbd8;
        case 0x20cbdcu: goto label_20cbdc;
        case 0x20cbe0u: goto label_20cbe0;
        case 0x20cbe4u: goto label_20cbe4;
        case 0x20cbe8u: goto label_20cbe8;
        case 0x20cbecu: goto label_20cbec;
        case 0x20cbf0u: goto label_20cbf0;
        case 0x20cbf4u: goto label_20cbf4;
        case 0x20cbf8u: goto label_20cbf8;
        case 0x20cbfcu: goto label_20cbfc;
        case 0x20cc00u: goto label_20cc00;
        case 0x20cc04u: goto label_20cc04;
        case 0x20cc08u: goto label_20cc08;
        case 0x20cc0cu: goto label_20cc0c;
        case 0x20cc10u: goto label_20cc10;
        case 0x20cc14u: goto label_20cc14;
        case 0x20cc18u: goto label_20cc18;
        case 0x20cc1cu: goto label_20cc1c;
        case 0x20cc20u: goto label_20cc20;
        case 0x20cc24u: goto label_20cc24;
        case 0x20cc28u: goto label_20cc28;
        case 0x20cc2cu: goto label_20cc2c;
        case 0x20cc30u: goto label_20cc30;
        case 0x20cc34u: goto label_20cc34;
        case 0x20cc38u: goto label_20cc38;
        case 0x20cc3cu: goto label_20cc3c;
        case 0x20cc40u: goto label_20cc40;
        case 0x20cc44u: goto label_20cc44;
        case 0x20cc48u: goto label_20cc48;
        case 0x20cc4cu: goto label_20cc4c;
        case 0x20cc50u: goto label_20cc50;
        case 0x20cc54u: goto label_20cc54;
        case 0x20cc58u: goto label_20cc58;
        case 0x20cc5cu: goto label_20cc5c;
        case 0x20cc60u: goto label_20cc60;
        case 0x20cc64u: goto label_20cc64;
        case 0x20cc68u: goto label_20cc68;
        case 0x20cc6cu: goto label_20cc6c;
        case 0x20cc70u: goto label_20cc70;
        case 0x20cc74u: goto label_20cc74;
        case 0x20cc78u: goto label_20cc78;
        case 0x20cc7cu: goto label_20cc7c;
        case 0x20cc80u: goto label_20cc80;
        case 0x20cc84u: goto label_20cc84;
        case 0x20cc88u: goto label_20cc88;
        case 0x20cc8cu: goto label_20cc8c;
        case 0x20cc90u: goto label_20cc90;
        case 0x20cc94u: goto label_20cc94;
        case 0x20cc98u: goto label_20cc98;
        case 0x20cc9cu: goto label_20cc9c;
        case 0x20cca0u: goto label_20cca0;
        case 0x20cca4u: goto label_20cca4;
        case 0x20cca8u: goto label_20cca8;
        case 0x20ccacu: goto label_20ccac;
        case 0x20ccb0u: goto label_20ccb0;
        case 0x20ccb4u: goto label_20ccb4;
        case 0x20ccb8u: goto label_20ccb8;
        case 0x20ccbcu: goto label_20ccbc;
        case 0x20ccc0u: goto label_20ccc0;
        case 0x20ccc4u: goto label_20ccc4;
        case 0x20ccc8u: goto label_20ccc8;
        case 0x20ccccu: goto label_20cccc;
        case 0x20ccd0u: goto label_20ccd0;
        case 0x20ccd4u: goto label_20ccd4;
        case 0x20ccd8u: goto label_20ccd8;
        case 0x20ccdcu: goto label_20ccdc;
        case 0x20cce0u: goto label_20cce0;
        case 0x20cce4u: goto label_20cce4;
        case 0x20cce8u: goto label_20cce8;
        case 0x20ccecu: goto label_20ccec;
        case 0x20ccf0u: goto label_20ccf0;
        case 0x20ccf4u: goto label_20ccf4;
        case 0x20ccf8u: goto label_20ccf8;
        case 0x20ccfcu: goto label_20ccfc;
        case 0x20cd00u: goto label_20cd00;
        case 0x20cd04u: goto label_20cd04;
        case 0x20cd08u: goto label_20cd08;
        case 0x20cd0cu: goto label_20cd0c;
        case 0x20cd10u: goto label_20cd10;
        case 0x20cd14u: goto label_20cd14;
        case 0x20cd18u: goto label_20cd18;
        case 0x20cd1cu: goto label_20cd1c;
        case 0x20cd20u: goto label_20cd20;
        case 0x20cd24u: goto label_20cd24;
        case 0x20cd28u: goto label_20cd28;
        case 0x20cd2cu: goto label_20cd2c;
        case 0x20cd30u: goto label_20cd30;
        case 0x20cd34u: goto label_20cd34;
        case 0x20cd38u: goto label_20cd38;
        case 0x20cd3cu: goto label_20cd3c;
        case 0x20cd40u: goto label_20cd40;
        case 0x20cd44u: goto label_20cd44;
        case 0x20cd48u: goto label_20cd48;
        case 0x20cd4cu: goto label_20cd4c;
        case 0x20cd50u: goto label_20cd50;
        case 0x20cd54u: goto label_20cd54;
        case 0x20cd58u: goto label_20cd58;
        case 0x20cd5cu: goto label_20cd5c;
        case 0x20cd60u: goto label_20cd60;
        case 0x20cd64u: goto label_20cd64;
        case 0x20cd68u: goto label_20cd68;
        case 0x20cd6cu: goto label_20cd6c;
        case 0x20cd70u: goto label_20cd70;
        case 0x20cd74u: goto label_20cd74;
        case 0x20cd78u: goto label_20cd78;
        case 0x20cd7cu: goto label_20cd7c;
        case 0x20cd80u: goto label_20cd80;
        case 0x20cd84u: goto label_20cd84;
        case 0x20cd88u: goto label_20cd88;
        case 0x20cd8cu: goto label_20cd8c;
        case 0x20cd90u: goto label_20cd90;
        case 0x20cd94u: goto label_20cd94;
        case 0x20cd98u: goto label_20cd98;
        case 0x20cd9cu: goto label_20cd9c;
        case 0x20cda0u: goto label_20cda0;
        case 0x20cda4u: goto label_20cda4;
        case 0x20cda8u: goto label_20cda8;
        case 0x20cdacu: goto label_20cdac;
        case 0x20cdb0u: goto label_20cdb0;
        case 0x20cdb4u: goto label_20cdb4;
        case 0x20cdb8u: goto label_20cdb8;
        case 0x20cdbcu: goto label_20cdbc;
        case 0x20cdc0u: goto label_20cdc0;
        case 0x20cdc4u: goto label_20cdc4;
        case 0x20cdc8u: goto label_20cdc8;
        case 0x20cdccu: goto label_20cdcc;
        case 0x20cdd0u: goto label_20cdd0;
        case 0x20cdd4u: goto label_20cdd4;
        case 0x20cdd8u: goto label_20cdd8;
        case 0x20cddcu: goto label_20cddc;
        case 0x20cde0u: goto label_20cde0;
        case 0x20cde4u: goto label_20cde4;
        case 0x20cde8u: goto label_20cde8;
        case 0x20cdecu: goto label_20cdec;
        case 0x20cdf0u: goto label_20cdf0;
        case 0x20cdf4u: goto label_20cdf4;
        case 0x20cdf8u: goto label_20cdf8;
        case 0x20cdfcu: goto label_20cdfc;
        case 0x20ce00u: goto label_20ce00;
        case 0x20ce04u: goto label_20ce04;
        case 0x20ce08u: goto label_20ce08;
        case 0x20ce0cu: goto label_20ce0c;
        case 0x20ce10u: goto label_20ce10;
        case 0x20ce14u: goto label_20ce14;
        case 0x20ce18u: goto label_20ce18;
        case 0x20ce1cu: goto label_20ce1c;
        case 0x20ce20u: goto label_20ce20;
        case 0x20ce24u: goto label_20ce24;
        case 0x20ce28u: goto label_20ce28;
        case 0x20ce2cu: goto label_20ce2c;
        case 0x20ce30u: goto label_20ce30;
        case 0x20ce34u: goto label_20ce34;
        case 0x20ce38u: goto label_20ce38;
        case 0x20ce3cu: goto label_20ce3c;
        case 0x20ce40u: goto label_20ce40;
        case 0x20ce44u: goto label_20ce44;
        case 0x20ce48u: goto label_20ce48;
        case 0x20ce4cu: goto label_20ce4c;
        case 0x20ce50u: goto label_20ce50;
        case 0x20ce54u: goto label_20ce54;
        case 0x20ce58u: goto label_20ce58;
        case 0x20ce5cu: goto label_20ce5c;
        case 0x20ce60u: goto label_20ce60;
        case 0x20ce64u: goto label_20ce64;
        case 0x20ce68u: goto label_20ce68;
        case 0x20ce6cu: goto label_20ce6c;
        case 0x20ce70u: goto label_20ce70;
        case 0x20ce74u: goto label_20ce74;
        case 0x20ce78u: goto label_20ce78;
        case 0x20ce7cu: goto label_20ce7c;
        case 0x20ce80u: goto label_20ce80;
        case 0x20ce84u: goto label_20ce84;
        case 0x20ce88u: goto label_20ce88;
        case 0x20ce8cu: goto label_20ce8c;
        case 0x20ce90u: goto label_20ce90;
        case 0x20ce94u: goto label_20ce94;
        case 0x20ce98u: goto label_20ce98;
        case 0x20ce9cu: goto label_20ce9c;
        default: break;
    }

    ctx->pc = 0x20c7b0u;

label_20c7b0:
    // 0x20c7b0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x20c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_20c7b4:
    // 0x20c7b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20c7b8:
    // 0x20c7b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20c7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_20c7bc:
    // 0x20c7bc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x20c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_20c7c0:
    // 0x20c7c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20c7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20c7c4:
    // 0x20c7c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20c7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20c7c8:
    // 0x20c7c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x20c7c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20c7cc:
    // 0x20c7cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20c7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20c7d0:
    // 0x20c7d0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x20c7d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20c7d4:
    // 0x20c7d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20c7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20c7d8:
    // 0x20c7d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20c7d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20c7dc:
    // 0x20c7dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20c7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20c7e0:
    // 0x20c7e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20c7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20c7e4:
    // 0x20c7e4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x20c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_20c7e8:
    // 0x20c7e8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x20c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_20c7ec:
    // 0x20c7ec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x20c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_20c7f0:
    // 0x20c7f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20c7f4:
    // 0x20c7f4: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x20c7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20c7f8:
    // 0x20c7f8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x20c7f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_20c7fc:
    // 0x20c7fc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x20c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_20c800:
    // 0x20c800: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x20c800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_20c804:
    // 0x20c804: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x20c804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20c808:
    // 0x20c808: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x20c808u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_20c80c:
    // 0x20c80c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_20c810:
    if (ctx->pc == 0x20C810u) {
        ctx->pc = 0x20C810u;
            // 0x20c810: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C814u;
        goto label_20c814;
    }
    ctx->pc = 0x20C80Cu;
    {
        const bool branch_taken_0x20c80c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C80Cu;
            // 0x20c810: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c80c) {
            ctx->pc = 0x20C81Cu;
            goto label_20c81c;
        }
    }
    ctx->pc = 0x20C814u;
label_20c814:
    // 0x20c814: 0x10000005  b           . + 4 + (0x5 << 2)
label_20c818:
    if (ctx->pc == 0x20C818u) {
        ctx->pc = 0x20C818u;
            // 0x20c818: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x20C81Cu;
        goto label_20c81c;
    }
    ctx->pc = 0x20C814u;
    {
        const bool branch_taken_0x20c814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C814u;
            // 0x20c818: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c814) {
            ctx->pc = 0x20C82Cu;
            goto label_20c82c;
        }
    }
    ctx->pc = 0x20C81Cu;
label_20c81c:
    // 0x20c81c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20c81cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20c820:
    // 0x20c820: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x20c820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_20c824:
    // 0x20c824: 0x320f809  jalr        $t9
label_20c828:
    if (ctx->pc == 0x20C828u) {
        ctx->pc = 0x20C82Cu;
        goto label_20c82c;
    }
    ctx->pc = 0x20C824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20C82Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x20C82Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20C82Cu; }
            if (ctx->pc != 0x20C82Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20C82Cu;
label_20c82c:
    // 0x20c82c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x20c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_20c830:
    // 0x20c830: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20c830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20c834:
    // 0x20c834: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x20c834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_20c838:
    // 0x20c838: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x20c838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_20c83c:
    // 0x20c83c: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x20c83cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_20c840:
    // 0x20c840: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x20c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_20c844:
    // 0x20c844: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x20c844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_20c848:
    // 0x20c848: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x20c848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_20c84c:
    // 0x20c84c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x20c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_20c850:
    // 0x20c850: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x20c850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_20c854:
    // 0x20c854: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x20c854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20c858:
    // 0x20c858: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x20c858u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_20c85c:
    // 0x20c85c: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_20c860:
    if (ctx->pc == 0x20C860u) {
        ctx->pc = 0x20C860u;
            // 0x20c860: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x20C864u;
        goto label_20c864;
    }
    ctx->pc = 0x20C85Cu;
    {
        const bool branch_taken_0x20c85c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c85c) {
            ctx->pc = 0x20C860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C85Cu;
            // 0x20c860: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C86Cu;
            goto label_20c86c;
        }
    }
    ctx->pc = 0x20C864u;
label_20c864:
    // 0x20c864: 0x10000004  b           . + 4 + (0x4 << 2)
label_20c868:
    if (ctx->pc == 0x20C868u) {
        ctx->pc = 0x20C868u;
            // 0x20c868: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x20C86Cu;
        goto label_20c86c;
    }
    ctx->pc = 0x20C864u;
    {
        const bool branch_taken_0x20c864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C864u;
            // 0x20c868: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c864) {
            ctx->pc = 0x20C878u;
            goto label_20c878;
        }
    }
    ctx->pc = 0x20C86Cu;
label_20c86c:
    // 0x20c86c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x20c86cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_20c870:
    // 0x20c870: 0x320f809  jalr        $t9
label_20c874:
    if (ctx->pc == 0x20C874u) {
        ctx->pc = 0x20C878u;
        goto label_20c878;
    }
    ctx->pc = 0x20C870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20C878u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x20C878u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20C878u; }
            if (ctx->pc != 0x20C878u) { return; }
        }
        }
    }
    ctx->pc = 0x20C878u;
label_20c878:
    // 0x20c878: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20c878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20c87c:
    // 0x20c87c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20c87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20c880:
    // 0x20c880: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x20c880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_20c884:
    // 0x20c884: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x20c884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_20c888:
    // 0x20c888: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x20c888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_20c88c:
    // 0x20c88c: 0xc083110  jal         func_20C440
label_20c890:
    if (ctx->pc == 0x20C890u) {
        ctx->pc = 0x20C890u;
            // 0x20c890: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x20C894u;
        goto label_20c894;
    }
    ctx->pc = 0x20C88Cu;
    SET_GPR_U32(ctx, 31, 0x20C894u);
    ctx->pc = 0x20C890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C88Cu;
            // 0x20c890: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C440u;
    if (runtime->hasFunction(0x20C440u)) {
        auto targetFn = runtime->lookupFunction(0x20C440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C894u; }
        if (ctx->pc != 0x20C894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C440_0x20c440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C894u; }
        if (ctx->pc != 0x20C894u) { return; }
    }
    ctx->pc = 0x20C894u;
label_20c894:
    // 0x20c894: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x20c894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_20c898:
    // 0x20c898: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x20c898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20c89c:
    // 0x20c89c: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x20c89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_20c8a0:
    // 0x20c8a0: 0xc0830bc  jal         func_20C2F0
label_20c8a4:
    if (ctx->pc == 0x20C8A4u) {
        ctx->pc = 0x20C8A4u;
            // 0x20c8a4: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x20C8A8u;
        goto label_20c8a8;
    }
    ctx->pc = 0x20C8A0u;
    SET_GPR_U32(ctx, 31, 0x20C8A8u);
    ctx->pc = 0x20C8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C8A0u;
            // 0x20c8a4: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C2F0u;
    if (runtime->hasFunction(0x20C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x20C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C8A8u; }
        if (ctx->pc != 0x20C8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C2F0_0x20c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C8A8u; }
        if (ctx->pc != 0x20C8A8u) { return; }
    }
    ctx->pc = 0x20C8A8u;
label_20c8a8:
    // 0x20c8a8: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x20c8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c8ac:
    // 0x20c8ac: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x20c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
label_20c8b0:
    // 0x20c8b0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x20c8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c8b4:
    // 0x20c8b4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x20c8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_20c8b8:
    // 0x20c8b8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x20c8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_20c8bc:
    // 0x20c8bc: 0x26510020  addiu       $s1, $s2, 0x20
    ctx->pc = 0x20c8bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_20c8c0:
    // 0x20c8c0: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x20c8c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_20c8c4:
    // 0x20c8c4: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x20c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_20c8c8:
    // 0x20c8c8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x20c8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_20c8cc:
    // 0x20c8cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c8d0:
    // 0x20c8d0: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x20c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c8d4:
    // 0x20c8d4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x20c8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c8d8:
    // 0x20c8d8: 0xa3a2007c  sb          $v0, 0x7C($sp)
    ctx->pc = 0x20c8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 2));
label_20c8dc:
    // 0x20c8dc: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x20c8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20c8e0:
    // 0x20c8e0: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x20c8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20c8e4:
    // 0x20c8e4: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x20c8e4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20c8e8:
    // 0x20c8e8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x20c8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c8ec:
    // 0x20c8ec: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x20c8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c8f0:
    // 0x20c8f0: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x20c8f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_20c8f4:
    // 0x20c8f4: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x20c8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20c8f8:
    // 0x20c8f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20c8f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20c8fc:
    // 0x20c8fc: 0x46042843  div.s       $f1, $f5, $f4
    ctx->pc = 0x20c8fcu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[1] = ctx->f[5] / ctx->f[4];
label_20c900:
    // 0x20c900: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x20c900u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_20c904:
    // 0x20c904: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x20c904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_20c908:
    // 0x20c908: 0x46041043  div.s       $f1, $f2, $f4
    ctx->pc = 0x20c908u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[4];
label_20c90c:
    // 0x20c90c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x20c90cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
label_20c910:
    // 0x20c910: 0x0  nop
    ctx->pc = 0x20c910u;
    // NOP
label_20c914:
    // 0x20c914: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x20c914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_20c918:
    // 0x20c918: 0x1840006d  blez        $v0, . + 4 + (0x6D << 2)
label_20c91c:
    if (ctx->pc == 0x20C91Cu) {
        ctx->pc = 0x20C91Cu;
            // 0x20c91c: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x20C920u;
        goto label_20c920;
    }
    ctx->pc = 0x20C918u;
    {
        const bool branch_taken_0x20c918 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20C91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C918u;
            // 0x20c91c: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c918) {
            ctx->pc = 0x20CAD0u;
            goto label_20cad0;
        }
    }
    ctx->pc = 0x20C920u;
label_20c920:
    // 0x20c920: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x20c920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_20c924:
    // 0x20c924: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20c924u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c928:
    // 0x20c928: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x20c928u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20c92c:
    // 0x20c92c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x20c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_20c930:
    // 0x20c930: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x20c930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_20c934:
    // 0x20c934: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x20c934u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20c938:
    // 0x20c938: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x20c938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_20c93c:
    // 0x20c93c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x20c93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c940:
    // 0x20c940: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x20c940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_20c944:
    // 0x20c944: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x20c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c948:
    // 0x20c948: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20c948u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20c94c:
    // 0x20c94c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x20c94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_20c950:
    // 0x20c950: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x20c950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c954:
    // 0x20c954: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x20c954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c958:
    // 0x20c958: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20c958u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20c95c:
    // 0x20c95c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x20c95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_20c960:
    // 0x20c960: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x20c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c964:
    // 0x20c964: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x20c964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c968:
    // 0x20c968: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20c968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20c96c:
    // 0x20c96c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x20c96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_20c970:
    // 0x20c970: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x20c970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c974:
    // 0x20c974: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x20c974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c978:
    // 0x20c978: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20c978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20c97c:
    // 0x20c97c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x20c97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_20c980:
    // 0x20c980: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x20c980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_20c984:
    // 0x20c984: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x20c984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c988:
    // 0x20c988: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x20c988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_20c98c:
    // 0x20c98c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x20c98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c990:
    // 0x20c990: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x20c990u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_20c994:
    // 0x20c994: 0x0  nop
    ctx->pc = 0x20c994u;
    // NOP
label_20c998:
    // 0x20c998: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x20c998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_20c99c:
    // 0x20c99c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x20c99cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c9a0:
    // 0x20c9a0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_20c9a4:
    if (ctx->pc == 0x20C9A4u) {
        ctx->pc = 0x20C9A4u;
            // 0x20c9a4: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x20C9A8u;
        goto label_20c9a8;
    }
    ctx->pc = 0x20C9A0u;
    {
        const bool branch_taken_0x20c9a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c9a0) {
            ctx->pc = 0x20C9A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C9A0u;
            // 0x20c9a4: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C9B8u;
            goto label_20c9b8;
        }
    }
    ctx->pc = 0x20C9A8u;
label_20c9a8:
    // 0x20c9a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20c9a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_20c9ac:
    // 0x20c9ac: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x20c9acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_20c9b0:
    // 0x20c9b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_20c9b4:
    if (ctx->pc == 0x20C9B4u) {
        ctx->pc = 0x20C9B4u;
            // 0x20c9b4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x20C9B8u;
        goto label_20c9b8;
    }
    ctx->pc = 0x20C9B0u;
    {
        const bool branch_taken_0x20c9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C9B0u;
            // 0x20c9b4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9b0) {
            ctx->pc = 0x20C9CCu;
            goto label_20c9cc;
        }
    }
    ctx->pc = 0x20C9B8u;
label_20c9b8:
    // 0x20c9b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20c9b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_20c9bc:
    // 0x20c9bc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x20c9bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_20c9c0:
    // 0x20c9c0: 0x0  nop
    ctx->pc = 0x20c9c0u;
    // NOP
label_20c9c4:
    // 0x20c9c4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x20c9c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_20c9c8:
    // 0x20c9c8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x20c9c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_20c9cc:
    // 0x20c9cc: 0xa7a50108  sh          $a1, 0x108($sp)
    ctx->pc = 0x20c9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 264), (uint16_t)GPR_U32(ctx, 5));
label_20c9d0:
    // 0x20c9d0: 0x93a60108  lbu         $a2, 0x108($sp)
    ctx->pc = 0x20c9d0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 264)));
label_20c9d4:
    // 0x20c9d4: 0x93a50109  lbu         $a1, 0x109($sp)
    ctx->pc = 0x20c9d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 265)));
label_20c9d8:
    // 0x20c9d8: 0xa3a50108  sb          $a1, 0x108($sp)
    ctx->pc = 0x20c9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 264), (uint8_t)GPR_U32(ctx, 5));
label_20c9dc:
    // 0x20c9dc: 0xa3a60109  sb          $a2, 0x109($sp)
    ctx->pc = 0x20c9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 265), (uint8_t)GPR_U32(ctx, 6));
label_20c9e0:
    // 0x20c9e0: 0x97a50108  lhu         $a1, 0x108($sp)
    ctx->pc = 0x20c9e0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 264)));
label_20c9e4:
    // 0x20c9e4: 0xa6250000  sh          $a1, 0x0($s1)
    ctx->pc = 0x20c9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 5));
label_20c9e8:
    // 0x20c9e8: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x20c9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_20c9ec:
    // 0x20c9ec: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x20c9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c9f0:
    // 0x20c9f0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x20c9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_20c9f4:
    // 0x20c9f4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x20c9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c9f8:
    // 0x20c9f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x20c9f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_20c9fc:
    // 0x20c9fc: 0x0  nop
    ctx->pc = 0x20c9fcu;
    // NOP
label_20ca00:
    // 0x20ca00: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x20ca00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_20ca04:
    // 0x20ca04: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x20ca04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20ca08:
    // 0x20ca08: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_20ca0c:
    if (ctx->pc == 0x20CA0Cu) {
        ctx->pc = 0x20CA0Cu;
            // 0x20ca0c: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x20CA10u;
        goto label_20ca10;
    }
    ctx->pc = 0x20CA08u;
    {
        const bool branch_taken_0x20ca08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ca08) {
            ctx->pc = 0x20CA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20CA08u;
            // 0x20ca0c: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20CA20u;
            goto label_20ca20;
        }
    }
    ctx->pc = 0x20CA10u;
label_20ca10:
    // 0x20ca10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20ca10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_20ca14:
    // 0x20ca14: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x20ca14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_20ca18:
    // 0x20ca18: 0x10000006  b           . + 4 + (0x6 << 2)
label_20ca1c:
    if (ctx->pc == 0x20CA1Cu) {
        ctx->pc = 0x20CA1Cu;
            // 0x20ca1c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x20CA20u;
        goto label_20ca20;
    }
    ctx->pc = 0x20CA18u;
    {
        const bool branch_taken_0x20ca18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CA18u;
            // 0x20ca1c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca18) {
            ctx->pc = 0x20CA34u;
            goto label_20ca34;
        }
    }
    ctx->pc = 0x20CA20u;
label_20ca20:
    // 0x20ca20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20ca20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_20ca24:
    // 0x20ca24: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x20ca24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_20ca28:
    // 0x20ca28: 0x0  nop
    ctx->pc = 0x20ca28u;
    // NOP
label_20ca2c:
    // 0x20ca2c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x20ca2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_20ca30:
    // 0x20ca30: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x20ca30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_20ca34:
    // 0x20ca34: 0xa7a50104  sh          $a1, 0x104($sp)
    ctx->pc = 0x20ca34u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 5));
label_20ca38:
    // 0x20ca38: 0x93a60104  lbu         $a2, 0x104($sp)
    ctx->pc = 0x20ca38u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 260)));
label_20ca3c:
    // 0x20ca3c: 0x93a50105  lbu         $a1, 0x105($sp)
    ctx->pc = 0x20ca3cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 261)));
label_20ca40:
    // 0x20ca40: 0xa3a50104  sb          $a1, 0x104($sp)
    ctx->pc = 0x20ca40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 260), (uint8_t)GPR_U32(ctx, 5));
label_20ca44:
    // 0x20ca44: 0xa3a60105  sb          $a2, 0x105($sp)
    ctx->pc = 0x20ca44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 261), (uint8_t)GPR_U32(ctx, 6));
label_20ca48:
    // 0x20ca48: 0x97a50104  lhu         $a1, 0x104($sp)
    ctx->pc = 0x20ca48u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 260)));
label_20ca4c:
    // 0x20ca4c: 0xa6250002  sh          $a1, 0x2($s1)
    ctx->pc = 0x20ca4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 5));
label_20ca50:
    // 0x20ca50: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x20ca50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_20ca54:
    // 0x20ca54: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x20ca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ca58:
    // 0x20ca58: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x20ca58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_20ca5c:
    // 0x20ca5c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x20ca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ca60:
    // 0x20ca60: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x20ca60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_20ca64:
    // 0x20ca64: 0x0  nop
    ctx->pc = 0x20ca64u;
    // NOP
label_20ca68:
    // 0x20ca68: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x20ca68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_20ca6c:
    // 0x20ca6c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x20ca6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20ca70:
    // 0x20ca70: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_20ca74:
    if (ctx->pc == 0x20CA74u) {
        ctx->pc = 0x20CA74u;
            // 0x20ca74: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x20CA78u;
        goto label_20ca78;
    }
    ctx->pc = 0x20CA70u;
    {
        const bool branch_taken_0x20ca70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ca70) {
            ctx->pc = 0x20CA74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20CA70u;
            // 0x20ca74: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20CA88u;
            goto label_20ca88;
        }
    }
    ctx->pc = 0x20CA78u;
label_20ca78:
    // 0x20ca78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20ca78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_20ca7c:
    // 0x20ca7c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x20ca7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_20ca80:
    // 0x20ca80: 0x10000006  b           . + 4 + (0x6 << 2)
label_20ca84:
    if (ctx->pc == 0x20CA84u) {
        ctx->pc = 0x20CA84u;
            // 0x20ca84: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x20CA88u;
        goto label_20ca88;
    }
    ctx->pc = 0x20CA80u;
    {
        const bool branch_taken_0x20ca80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CA80u;
            // 0x20ca84: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca80) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20CA88u;
label_20ca88:
    // 0x20ca88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20ca88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_20ca8c:
    // 0x20ca8c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x20ca8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_20ca90:
    // 0x20ca90: 0x0  nop
    ctx->pc = 0x20ca90u;
    // NOP
label_20ca94:
    // 0x20ca94: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x20ca94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_20ca98:
    // 0x20ca98: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x20ca98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_20ca9c:
    // 0x20ca9c: 0xa7a50100  sh          $a1, 0x100($sp)
    ctx->pc = 0x20ca9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 5));
label_20caa0:
    // 0x20caa0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20caa4:
    // 0x20caa4: 0x93a60100  lbu         $a2, 0x100($sp)
    ctx->pc = 0x20caa4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
label_20caa8:
    // 0x20caa8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x20caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_20caac:
    // 0x20caac: 0x93a50101  lbu         $a1, 0x101($sp)
    ctx->pc = 0x20caacu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 257)));
label_20cab0:
    // 0x20cab0: 0xa3a50100  sb          $a1, 0x100($sp)
    ctx->pc = 0x20cab0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 5));
label_20cab4:
    // 0x20cab4: 0xa3a60101  sb          $a2, 0x101($sp)
    ctx->pc = 0x20cab4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 257), (uint8_t)GPR_U32(ctx, 6));
label_20cab8:
    // 0x20cab8: 0x97a50100  lhu         $a1, 0x100($sp)
    ctx->pc = 0x20cab8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
label_20cabc:
    // 0x20cabc: 0xa6250004  sh          $a1, 0x4($s1)
    ctx->pc = 0x20cabcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 5));
label_20cac0:
    // 0x20cac0: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x20cac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_20cac4:
    // 0x20cac4: 0x85282a  slt         $a1, $a0, $a1
    ctx->pc = 0x20cac4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_20cac8:
    // 0x20cac8: 0x14a0ff9b  bnez        $a1, . + 4 + (-0x65 << 2)
label_20cacc:
    if (ctx->pc == 0x20CACCu) {
        ctx->pc = 0x20CACCu;
            // 0x20cacc: 0x26310006  addiu       $s1, $s1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
        ctx->pc = 0x20CAD0u;
        goto label_20cad0;
    }
    ctx->pc = 0x20CAC8u;
    {
        const bool branch_taken_0x20cac8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CAC8u;
            // 0x20cacc: 0x26310006  addiu       $s1, $s1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cac8) {
            ctx->pc = 0x20C938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c938;
        }
    }
    ctx->pc = 0x20CAD0u;
label_20cad0:
    // 0x20cad0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x20cad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_20cad4:
    // 0x20cad4: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x20cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_20cad8:
    // 0x20cad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20cad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20cadc:
    // 0x20cadc: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x20cadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_20cae0:
    // 0x20cae0: 0xc0a8448  jal         func_2A1120
label_20cae4:
    if (ctx->pc == 0x20CAE4u) {
        ctx->pc = 0x20CAE4u;
            // 0x20cae4: 0xa3b4007d  sb          $s4, 0x7D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 125), (uint8_t)GPR_U32(ctx, 20));
        ctx->pc = 0x20CAE8u;
        goto label_20cae8;
    }
    ctx->pc = 0x20CAE0u;
    SET_GPR_U32(ctx, 31, 0x20CAE8u);
    ctx->pc = 0x20CAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CAE0u;
            // 0x20cae4: 0xa3b4007d  sb          $s4, 0x7D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 125), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CAE8u; }
        if (ctx->pc != 0x20CAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CAE8u; }
        if (ctx->pc != 0x20CAE8u) { return; }
    }
    ctx->pc = 0x20CAE8u;
label_20cae8:
    // 0x20cae8: 0x2303021  addu        $a2, $s1, $s0
    ctx->pc = 0x20cae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_20caec:
    // 0x20caec: 0x1a80006c  blez        $s4, . + 4 + (0x6C << 2)
label_20caf0:
    if (ctx->pc == 0x20CAF0u) {
        ctx->pc = 0x20CAF0u;
            // 0x20caf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20CAF4u;
        goto label_20caf4;
    }
    ctx->pc = 0x20CAECu;
    {
        const bool branch_taken_0x20caec = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x20CAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CAECu;
            // 0x20caf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20caec) {
            ctx->pc = 0x20CCA0u;
            goto label_20cca0;
        }
    }
    ctx->pc = 0x20CAF4u;
label_20caf4:
    // 0x20caf4: 0x2a810009  slti        $at, $s4, 0x9
    ctx->pc = 0x20caf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
label_20caf8:
    // 0x20caf8: 0x14200053  bnez        $at, . + 4 + (0x53 << 2)
label_20cafc:
    if (ctx->pc == 0x20CAFCu) {
        ctx->pc = 0x20CAFCu;
            // 0x20cafc: 0x2682fff8  addiu       $v0, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->pc = 0x20CB00u;
        goto label_20cb00;
    }
    ctx->pc = 0x20CAF8u;
    {
        const bool branch_taken_0x20caf8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CAF8u;
            // 0x20cafc: 0x2682fff8  addiu       $v0, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20caf8) {
            ctx->pc = 0x20CC48u;
            goto label_20cc48;
        }
    }
    ctx->pc = 0x20CB00u;
label_20cb00:
    // 0x20cb00: 0x6800007  bltz        $s4, . + 4 + (0x7 << 2)
label_20cb04:
    if (ctx->pc == 0x20CB04u) {
        ctx->pc = 0x20CB04u;
            // 0x20cb04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20CB08u;
        goto label_20cb08;
    }
    ctx->pc = 0x20CB00u;
    {
        const bool branch_taken_0x20cb00 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x20CB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CB00u;
            // 0x20cb04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb00) {
            ctx->pc = 0x20CB20u;
            goto label_20cb20;
        }
    }
    ctx->pc = 0x20CB08u;
label_20cb08:
    // 0x20cb08: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x20cb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_20cb0c:
    // 0x20cb0c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x20cb0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_20cb10:
    // 0x20cb10: 0x281082a  slt         $at, $s4, $at
    ctx->pc = 0x20cb10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_20cb14:
    // 0x20cb14: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_20cb18:
    if (ctx->pc == 0x20CB18u) {
        ctx->pc = 0x20CB1Cu;
        goto label_20cb1c;
    }
    ctx->pc = 0x20CB14u;
    {
        const bool branch_taken_0x20cb14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cb14) {
            ctx->pc = 0x20CB20u;
            goto label_20cb20;
        }
    }
    ctx->pc = 0x20CB1Cu;
label_20cb1c:
    // 0x20cb1c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x20cb1cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_20cb20:
    // 0x20cb20: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
label_20cb24:
    if (ctx->pc == 0x20CB24u) {
        ctx->pc = 0x20CB28u;
        goto label_20cb28;
    }
    ctx->pc = 0x20CB20u;
    {
        const bool branch_taken_0x20cb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cb20) {
            ctx->pc = 0x20CC48u;
            goto label_20cc48;
        }
    }
    ctx->pc = 0x20CB28u;
label_20cb28:
    // 0x20cb28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20cb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20cb2c:
    // 0x20cb2c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x20cb2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20cb30:
    // 0x20cb30: 0x94880014  lhu         $t0, 0x14($a0)
    ctx->pc = 0x20cb30u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_20cb34:
    // 0x20cb34: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x20cb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_20cb38:
    // 0x20cb38: 0xa2382a  slt         $a3, $a1, $v0
    ctx->pc = 0x20cb38u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20cb3c:
    // 0x20cb3c: 0xa7a800fc  sh          $t0, 0xFC($sp)
    ctx->pc = 0x20cb3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 252), (uint16_t)GPR_U32(ctx, 8));
label_20cb40:
    // 0x20cb40: 0x93a900fc  lbu         $t1, 0xFC($sp)
    ctx->pc = 0x20cb40u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 252)));
label_20cb44:
    // 0x20cb44: 0x93a800fd  lbu         $t0, 0xFD($sp)
    ctx->pc = 0x20cb44u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 253)));
label_20cb48:
    // 0x20cb48: 0xa3a800fc  sb          $t0, 0xFC($sp)
    ctx->pc = 0x20cb48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 252), (uint8_t)GPR_U32(ctx, 8));
label_20cb4c:
    // 0x20cb4c: 0xa3a900fd  sb          $t1, 0xFD($sp)
    ctx->pc = 0x20cb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 253), (uint8_t)GPR_U32(ctx, 9));
label_20cb50:
    // 0x20cb50: 0x97a800fc  lhu         $t0, 0xFC($sp)
    ctx->pc = 0x20cb50u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 252)));
label_20cb54:
    // 0x20cb54: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x20cb54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
label_20cb58:
    // 0x20cb58: 0x94880074  lhu         $t0, 0x74($a0)
    ctx->pc = 0x20cb58u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 116)));
label_20cb5c:
    // 0x20cb5c: 0xa7a800c4  sh          $t0, 0xC4($sp)
    ctx->pc = 0x20cb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 196), (uint16_t)GPR_U32(ctx, 8));
label_20cb60:
    // 0x20cb60: 0x93a900c4  lbu         $t1, 0xC4($sp)
    ctx->pc = 0x20cb60u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 196)));
label_20cb64:
    // 0x20cb64: 0x93a800c5  lbu         $t0, 0xC5($sp)
    ctx->pc = 0x20cb64u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 197)));
label_20cb68:
    // 0x20cb68: 0xa3a800c4  sb          $t0, 0xC4($sp)
    ctx->pc = 0x20cb68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 196), (uint8_t)GPR_U32(ctx, 8));
label_20cb6c:
    // 0x20cb6c: 0xa3a900c5  sb          $t1, 0xC5($sp)
    ctx->pc = 0x20cb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 197), (uint8_t)GPR_U32(ctx, 9));
label_20cb70:
    // 0x20cb70: 0x97a800c4  lhu         $t0, 0xC4($sp)
    ctx->pc = 0x20cb70u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 196)));
label_20cb74:
    // 0x20cb74: 0xa4680002  sh          $t0, 0x2($v1)
    ctx->pc = 0x20cb74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 8));
label_20cb78:
    // 0x20cb78: 0x948800d4  lhu         $t0, 0xD4($a0)
    ctx->pc = 0x20cb78u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 212)));
label_20cb7c:
    // 0x20cb7c: 0xa7a800c8  sh          $t0, 0xC8($sp)
    ctx->pc = 0x20cb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 200), (uint16_t)GPR_U32(ctx, 8));
label_20cb80:
    // 0x20cb80: 0x93a900c8  lbu         $t1, 0xC8($sp)
    ctx->pc = 0x20cb80u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
label_20cb84:
    // 0x20cb84: 0x93a800c9  lbu         $t0, 0xC9($sp)
    ctx->pc = 0x20cb84u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 201)));
label_20cb88:
    // 0x20cb88: 0xa3a800c8  sb          $t0, 0xC8($sp)
    ctx->pc = 0x20cb88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 8));
label_20cb8c:
    // 0x20cb8c: 0xa3a900c9  sb          $t1, 0xC9($sp)
    ctx->pc = 0x20cb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 201), (uint8_t)GPR_U32(ctx, 9));
label_20cb90:
    // 0x20cb90: 0x97a800c8  lhu         $t0, 0xC8($sp)
    ctx->pc = 0x20cb90u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 200)));
label_20cb94:
    // 0x20cb94: 0xa4680004  sh          $t0, 0x4($v1)
    ctx->pc = 0x20cb94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 8));
label_20cb98:
    // 0x20cb98: 0x94880134  lhu         $t0, 0x134($a0)
    ctx->pc = 0x20cb98u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 308)));
label_20cb9c:
    // 0x20cb9c: 0xa7a800cc  sh          $t0, 0xCC($sp)
    ctx->pc = 0x20cb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 204), (uint16_t)GPR_U32(ctx, 8));
label_20cba0:
    // 0x20cba0: 0x93a900cc  lbu         $t1, 0xCC($sp)
    ctx->pc = 0x20cba0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 204)));
label_20cba4:
    // 0x20cba4: 0x93a800cd  lbu         $t0, 0xCD($sp)
    ctx->pc = 0x20cba4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 205)));
label_20cba8:
    // 0x20cba8: 0xa3a800cc  sb          $t0, 0xCC($sp)
    ctx->pc = 0x20cba8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 204), (uint8_t)GPR_U32(ctx, 8));
label_20cbac:
    // 0x20cbac: 0xa3a900cd  sb          $t1, 0xCD($sp)
    ctx->pc = 0x20cbacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 205), (uint8_t)GPR_U32(ctx, 9));
label_20cbb0:
    // 0x20cbb0: 0x97a800cc  lhu         $t0, 0xCC($sp)
    ctx->pc = 0x20cbb0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
label_20cbb4:
    // 0x20cbb4: 0xa4680006  sh          $t0, 0x6($v1)
    ctx->pc = 0x20cbb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 8));
label_20cbb8:
    // 0x20cbb8: 0x94880194  lhu         $t0, 0x194($a0)
    ctx->pc = 0x20cbb8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 404)));
label_20cbbc:
    // 0x20cbbc: 0xa7a800d0  sh          $t0, 0xD0($sp)
    ctx->pc = 0x20cbbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 8));
label_20cbc0:
    // 0x20cbc0: 0x93a900d0  lbu         $t1, 0xD0($sp)
    ctx->pc = 0x20cbc0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_20cbc4:
    // 0x20cbc4: 0x93a800d1  lbu         $t0, 0xD1($sp)
    ctx->pc = 0x20cbc4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 209)));
label_20cbc8:
    // 0x20cbc8: 0xa3a800d0  sb          $t0, 0xD0($sp)
    ctx->pc = 0x20cbc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 8));
label_20cbcc:
    // 0x20cbcc: 0xa3a900d1  sb          $t1, 0xD1($sp)
    ctx->pc = 0x20cbccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 209), (uint8_t)GPR_U32(ctx, 9));
label_20cbd0:
    // 0x20cbd0: 0x97a800d0  lhu         $t0, 0xD0($sp)
    ctx->pc = 0x20cbd0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
label_20cbd4:
    // 0x20cbd4: 0xa4680008  sh          $t0, 0x8($v1)
    ctx->pc = 0x20cbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 8));
label_20cbd8:
    // 0x20cbd8: 0x948801f4  lhu         $t0, 0x1F4($a0)
    ctx->pc = 0x20cbd8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 500)));
label_20cbdc:
    // 0x20cbdc: 0xa7a800d4  sh          $t0, 0xD4($sp)
    ctx->pc = 0x20cbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 212), (uint16_t)GPR_U32(ctx, 8));
label_20cbe0:
    // 0x20cbe0: 0x93a900d4  lbu         $t1, 0xD4($sp)
    ctx->pc = 0x20cbe0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 212)));
label_20cbe4:
    // 0x20cbe4: 0x93a800d5  lbu         $t0, 0xD5($sp)
    ctx->pc = 0x20cbe4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 213)));
label_20cbe8:
    // 0x20cbe8: 0xa3a800d4  sb          $t0, 0xD4($sp)
    ctx->pc = 0x20cbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 212), (uint8_t)GPR_U32(ctx, 8));
label_20cbec:
    // 0x20cbec: 0xa3a900d5  sb          $t1, 0xD5($sp)
    ctx->pc = 0x20cbecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 213), (uint8_t)GPR_U32(ctx, 9));
label_20cbf0:
    // 0x20cbf0: 0x97a800d4  lhu         $t0, 0xD4($sp)
    ctx->pc = 0x20cbf0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 212)));
label_20cbf4:
    // 0x20cbf4: 0xa468000a  sh          $t0, 0xA($v1)
    ctx->pc = 0x20cbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 8));
label_20cbf8:
    // 0x20cbf8: 0x94880254  lhu         $t0, 0x254($a0)
    ctx->pc = 0x20cbf8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 596)));
label_20cbfc:
    // 0x20cbfc: 0xa7a800d8  sh          $t0, 0xD8($sp)
    ctx->pc = 0x20cbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 216), (uint16_t)GPR_U32(ctx, 8));
label_20cc00:
    // 0x20cc00: 0x93a900d8  lbu         $t1, 0xD8($sp)
    ctx->pc = 0x20cc00u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 216)));
label_20cc04:
    // 0x20cc04: 0x93a800d9  lbu         $t0, 0xD9($sp)
    ctx->pc = 0x20cc04u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 217)));
label_20cc08:
    // 0x20cc08: 0xa3a800d8  sb          $t0, 0xD8($sp)
    ctx->pc = 0x20cc08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 216), (uint8_t)GPR_U32(ctx, 8));
label_20cc0c:
    // 0x20cc0c: 0xa3a900d9  sb          $t1, 0xD9($sp)
    ctx->pc = 0x20cc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 217), (uint8_t)GPR_U32(ctx, 9));
label_20cc10:
    // 0x20cc10: 0x97a800d8  lhu         $t0, 0xD8($sp)
    ctx->pc = 0x20cc10u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 216)));
label_20cc14:
    // 0x20cc14: 0xa468000c  sh          $t0, 0xC($v1)
    ctx->pc = 0x20cc14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 8));
label_20cc18:
    // 0x20cc18: 0x948802b4  lhu         $t0, 0x2B4($a0)
    ctx->pc = 0x20cc18u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 692)));
label_20cc1c:
    // 0x20cc1c: 0xa7a800dc  sh          $t0, 0xDC($sp)
    ctx->pc = 0x20cc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 8));
label_20cc20:
    // 0x20cc20: 0x24840300  addiu       $a0, $a0, 0x300
    ctx->pc = 0x20cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
label_20cc24:
    // 0x20cc24: 0x93a900dc  lbu         $t1, 0xDC($sp)
    ctx->pc = 0x20cc24u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 220)));
label_20cc28:
    // 0x20cc28: 0x93a800dd  lbu         $t0, 0xDD($sp)
    ctx->pc = 0x20cc28u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 221)));
label_20cc2c:
    // 0x20cc2c: 0xa3a800dc  sb          $t0, 0xDC($sp)
    ctx->pc = 0x20cc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 220), (uint8_t)GPR_U32(ctx, 8));
label_20cc30:
    // 0x20cc30: 0xa3a900dd  sb          $t1, 0xDD($sp)
    ctx->pc = 0x20cc30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 221), (uint8_t)GPR_U32(ctx, 9));
label_20cc34:
    // 0x20cc34: 0x97a800dc  lhu         $t0, 0xDC($sp)
    ctx->pc = 0x20cc34u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
label_20cc38:
    // 0x20cc38: 0xa468000e  sh          $t0, 0xE($v1)
    ctx->pc = 0x20cc38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 8));
label_20cc3c:
    // 0x20cc3c: 0x14e0ffbc  bnez        $a3, . + 4 + (-0x44 << 2)
label_20cc40:
    if (ctx->pc == 0x20CC40u) {
        ctx->pc = 0x20CC40u;
            // 0x20cc40: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x20CC44u;
        goto label_20cc44;
    }
    ctx->pc = 0x20CC3Cu;
    {
        const bool branch_taken_0x20cc3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC3Cu;
            // 0x20cc40: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc3c) {
            ctx->pc = 0x20CB30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20cb30;
        }
    }
    ctx->pc = 0x20CC44u;
label_20cc44:
    // 0x20cc44: 0x0  nop
    ctx->pc = 0x20cc44u;
    // NOP
label_20cc48:
    // 0x20cc48: 0xb4082a  slt         $at, $a1, $s4
    ctx->pc = 0x20cc48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_20cc4c:
    // 0x20cc4c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_20cc50:
    if (ctx->pc == 0x20CC50u) {
        ctx->pc = 0x20CC54u;
        goto label_20cc54;
    }
    ctx->pc = 0x20CC4Cu;
    {
        const bool branch_taken_0x20cc4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cc4c) {
            ctx->pc = 0x20CCA0u;
            goto label_20cca0;
        }
    }
    ctx->pc = 0x20CC54u;
label_20cc54:
    // 0x20cc54: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x20cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_20cc58:
    // 0x20cc58: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x20cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20cc5c:
    // 0x20cc5c: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x20cc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_20cc60:
    // 0x20cc60: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x20cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_20cc64:
    // 0x20cc64: 0x2a24021  addu        $t0, $s5, $v0
    ctx->pc = 0x20cc64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_20cc68:
    // 0x20cc68: 0x95030014  lhu         $v1, 0x14($t0)
    ctx->pc = 0x20cc68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 20)));
label_20cc6c:
    // 0x20cc6c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20cc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20cc70:
    // 0x20cc70: 0xb4102a  slt         $v0, $a1, $s4
    ctx->pc = 0x20cc70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_20cc74:
    // 0x20cc74: 0xa7a300e0  sh          $v1, 0xE0($sp)
    ctx->pc = 0x20cc74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 3));
label_20cc78:
    // 0x20cc78: 0x25080060  addiu       $t0, $t0, 0x60
    ctx->pc = 0x20cc78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
label_20cc7c:
    // 0x20cc7c: 0x93a400e0  lbu         $a0, 0xE0($sp)
    ctx->pc = 0x20cc7cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
label_20cc80:
    // 0x20cc80: 0x93a300e1  lbu         $v1, 0xE1($sp)
    ctx->pc = 0x20cc80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 225)));
label_20cc84:
    // 0x20cc84: 0xa3a300e0  sb          $v1, 0xE0($sp)
    ctx->pc = 0x20cc84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 3));
label_20cc88:
    // 0x20cc88: 0xa3a400e1  sb          $a0, 0xE1($sp)
    ctx->pc = 0x20cc88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 225), (uint8_t)GPR_U32(ctx, 4));
label_20cc8c:
    // 0x20cc8c: 0x97a300e0  lhu         $v1, 0xE0($sp)
    ctx->pc = 0x20cc8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
label_20cc90:
    // 0x20cc90: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x20cc90u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_20cc94:
    // 0x20cc94: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_20cc98:
    if (ctx->pc == 0x20CC98u) {
        ctx->pc = 0x20CC98u;
            // 0x20cc98: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x20CC9Cu;
        goto label_20cc9c;
    }
    ctx->pc = 0x20CC94u;
    {
        const bool branch_taken_0x20cc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC94u;
            // 0x20cc98: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc94) {
            ctx->pc = 0x20CC68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20cc68;
        }
    }
    ctx->pc = 0x20CC9Cu;
label_20cc9c:
    // 0x20cc9c: 0x0  nop
    ctx->pc = 0x20cc9cu;
    // NOP
label_20cca0:
    // 0x20cca0: 0x52600002  beql        $s3, $zero, . + 4 + (0x2 << 2)
label_20cca4:
    if (ctx->pc == 0x20CCA4u) {
        ctx->pc = 0x20CCA4u;
            // 0x20cca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20CCA8u;
        goto label_20cca8;
    }
    ctx->pc = 0x20CCA0u;
    {
        const bool branch_taken_0x20cca0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cca0) {
            ctx->pc = 0x20CCA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20CCA0u;
            // 0x20cca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20CCACu;
            goto label_20ccac;
        }
    }
    ctx->pc = 0x20CCA8u;
label_20cca8:
    // 0x20cca8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x20cca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_20ccac:
    // 0x20ccac: 0xa3a2007e  sb          $v0, 0x7E($sp)
    ctx->pc = 0x20ccacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 2));
label_20ccb0:
    // 0x20ccb0: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x20ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_20ccb4:
    // 0x20ccb4: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x20ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_20ccb8:
    // 0x20ccb8: 0x93a2007e  lbu         $v0, 0x7E($sp)
    ctx->pc = 0x20ccb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 126)));
label_20ccbc:
    // 0x20ccbc: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_20ccc0:
    if (ctx->pc == 0x20CCC0u) {
        ctx->pc = 0x20CCC0u;
            // 0x20ccc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20CCC4u;
        goto label_20ccc4;
    }
    ctx->pc = 0x20CCBCu;
    {
        const bool branch_taken_0x20ccbc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20CCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CCBCu;
            // 0x20ccc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ccbc) {
            ctx->pc = 0x20CCE8u;
            goto label_20cce8;
        }
    }
    ctx->pc = 0x20CCC4u;
label_20ccc4:
    // 0x20ccc4: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x20ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_20ccc8:
    // 0x20ccc8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x20ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20cccc:
    // 0x20cccc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x20ccccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_20ccd0:
    // 0x20ccd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20ccd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20ccd4:
    // 0x20ccd4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x20ccd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_20ccd8:
    // 0x20ccd8: 0x93a2007e  lbu         $v0, 0x7E($sp)
    ctx->pc = 0x20ccd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 126)));
label_20ccdc:
    // 0x20ccdc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x20ccdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20cce0:
    // 0x20cce0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_20cce4:
    if (ctx->pc == 0x20CCE4u) {
        ctx->pc = 0x20CCE4u;
            // 0x20cce4: 0x2651821  addu        $v1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->pc = 0x20CCE8u;
        goto label_20cce8;
    }
    ctx->pc = 0x20CCE0u;
    {
        const bool branch_taken_0x20cce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cce0) {
            ctx->pc = 0x20CCE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20CCE0u;
            // 0x20cce4: 0x2651821  addu        $v1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20CCC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ccc8;
        }
    }
    ctx->pc = 0x20CCE8u;
label_20cce8:
    // 0x20cce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20cce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20ccec:
    // 0x20ccec: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x20ccecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ccf0:
    // 0x20ccf0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x20ccf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_20ccf4:
    // 0x20ccf4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x20ccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ccf8:
    // 0x20ccf8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x20ccf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_20ccfc:
    // 0x20ccfc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x20ccfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cd00:
    // 0x20cd00: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x20cd00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_20cd04:
    // 0x20cd04: 0x93a800f9  lbu         $t0, 0xF9($sp)
    ctx->pc = 0x20cd04u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 249)));
label_20cd08:
    // 0x20cd08: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x20cd08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_20cd0c:
    // 0x20cd0c: 0x93a700fa  lbu         $a3, 0xFA($sp)
    ctx->pc = 0x20cd0cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 250)));
label_20cd10:
    // 0x20cd10: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x20cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20cd14:
    // 0x20cd14: 0x93a300f8  lbu         $v1, 0xF8($sp)
    ctx->pc = 0x20cd14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 248)));
label_20cd18:
    // 0x20cd18: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x20cd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_20cd1c:
    // 0x20cd1c: 0x93a200fb  lbu         $v0, 0xFB($sp)
    ctx->pc = 0x20cd1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 251)));
label_20cd20:
    // 0x20cd20: 0xa3a700f9  sb          $a3, 0xF9($sp)
    ctx->pc = 0x20cd20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 249), (uint8_t)GPR_U32(ctx, 7));
label_20cd24:
    // 0x20cd24: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x20cd24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_20cd28:
    // 0x20cd28: 0xa3a800fa  sb          $t0, 0xFA($sp)
    ctx->pc = 0x20cd28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 250), (uint8_t)GPR_U32(ctx, 8));
label_20cd2c:
    // 0x20cd2c: 0xa3a200f8  sb          $v0, 0xF8($sp)
    ctx->pc = 0x20cd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 248), (uint8_t)GPR_U32(ctx, 2));
label_20cd30:
    // 0x20cd30: 0xa3a300fb  sb          $v1, 0xFB($sp)
    ctx->pc = 0x20cd30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 251), (uint8_t)GPR_U32(ctx, 3));
label_20cd34:
    // 0x20cd34: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x20cd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cd38:
    // 0x20cd38: 0x93a300f5  lbu         $v1, 0xF5($sp)
    ctx->pc = 0x20cd38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 245)));
label_20cd3c:
    // 0x20cd3c: 0x93a200f6  lbu         $v0, 0xF6($sp)
    ctx->pc = 0x20cd3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 246)));
label_20cd40:
    // 0x20cd40: 0x93a800f4  lbu         $t0, 0xF4($sp)
    ctx->pc = 0x20cd40u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 244)));
label_20cd44:
    // 0x20cd44: 0x93a700f7  lbu         $a3, 0xF7($sp)
    ctx->pc = 0x20cd44u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 247)));
label_20cd48:
    // 0x20cd48: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x20cd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_20cd4c:
    // 0x20cd4c: 0xa3a200f5  sb          $v0, 0xF5($sp)
    ctx->pc = 0x20cd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 245), (uint8_t)GPR_U32(ctx, 2));
label_20cd50:
    // 0x20cd50: 0xa3a300f6  sb          $v1, 0xF6($sp)
    ctx->pc = 0x20cd50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 246), (uint8_t)GPR_U32(ctx, 3));
label_20cd54:
    // 0x20cd54: 0xa3a800f7  sb          $t0, 0xF7($sp)
    ctx->pc = 0x20cd54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 247), (uint8_t)GPR_U32(ctx, 8));
label_20cd58:
    // 0x20cd58: 0xa3a700f4  sb          $a3, 0xF4($sp)
    ctx->pc = 0x20cd58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 244), (uint8_t)GPR_U32(ctx, 7));
label_20cd5c:
    // 0x20cd5c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x20cd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cd60:
    // 0x20cd60: 0x93a300f1  lbu         $v1, 0xF1($sp)
    ctx->pc = 0x20cd60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 241)));
label_20cd64:
    // 0x20cd64: 0x93a200f2  lbu         $v0, 0xF2($sp)
    ctx->pc = 0x20cd64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 242)));
label_20cd68:
    // 0x20cd68: 0x93a800e8  lbu         $t0, 0xE8($sp)
    ctx->pc = 0x20cd68u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
label_20cd6c:
    // 0x20cd6c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x20cd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_20cd70:
    // 0x20cd70: 0xa3a200f1  sb          $v0, 0xF1($sp)
    ctx->pc = 0x20cd70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 241), (uint8_t)GPR_U32(ctx, 2));
label_20cd74:
    // 0x20cd74: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x20cd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cd78:
    // 0x20cd78: 0xa3a300f2  sb          $v1, 0xF2($sp)
    ctx->pc = 0x20cd78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 242), (uint8_t)GPR_U32(ctx, 3));
label_20cd7c:
    // 0x20cd7c: 0x93a300f0  lbu         $v1, 0xF0($sp)
    ctx->pc = 0x20cd7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
label_20cd80:
    // 0x20cd80: 0x93a200f3  lbu         $v0, 0xF3($sp)
    ctx->pc = 0x20cd80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 243)));
label_20cd84:
    // 0x20cd84: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x20cd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_20cd88:
    // 0x20cd88: 0x93a700ed  lbu         $a3, 0xED($sp)
    ctx->pc = 0x20cd88u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 237)));
label_20cd8c:
    // 0x20cd8c: 0xa3a200f0  sb          $v0, 0xF0($sp)
    ctx->pc = 0x20cd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 2));
label_20cd90:
    // 0x20cd90: 0x93a200ee  lbu         $v0, 0xEE($sp)
    ctx->pc = 0x20cd90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 238)));
label_20cd94:
    // 0x20cd94: 0xa3a300f3  sb          $v1, 0xF3($sp)
    ctx->pc = 0x20cd94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 243), (uint8_t)GPR_U32(ctx, 3));
label_20cd98:
    // 0x20cd98: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x20cd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cd9c:
    // 0x20cd9c: 0x93a300ec  lbu         $v1, 0xEC($sp)
    ctx->pc = 0x20cd9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 236)));
label_20cda0:
    // 0x20cda0: 0xa3a200ed  sb          $v0, 0xED($sp)
    ctx->pc = 0x20cda0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 237), (uint8_t)GPR_U32(ctx, 2));
label_20cda4:
    // 0x20cda4: 0x93a200ef  lbu         $v0, 0xEF($sp)
    ctx->pc = 0x20cda4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 239)));
label_20cda8:
    // 0x20cda8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x20cda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_20cdac:
    // 0x20cdac: 0xa3a700ee  sb          $a3, 0xEE($sp)
    ctx->pc = 0x20cdacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 238), (uint8_t)GPR_U32(ctx, 7));
label_20cdb0:
    // 0x20cdb0: 0x93a700eb  lbu         $a3, 0xEB($sp)
    ctx->pc = 0x20cdb0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 235)));
label_20cdb4:
    // 0x20cdb4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x20cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cdb8:
    // 0x20cdb8: 0xa3a200ec  sb          $v0, 0xEC($sp)
    ctx->pc = 0x20cdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 236), (uint8_t)GPR_U32(ctx, 2));
label_20cdbc:
    // 0x20cdbc: 0xa3a300ef  sb          $v1, 0xEF($sp)
    ctx->pc = 0x20cdbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 239), (uint8_t)GPR_U32(ctx, 3));
label_20cdc0:
    // 0x20cdc0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x20cdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_20cdc4:
    // 0x20cdc4: 0x93a300e9  lbu         $v1, 0xE9($sp)
    ctx->pc = 0x20cdc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 233)));
label_20cdc8:
    // 0x20cdc8: 0x93a200ea  lbu         $v0, 0xEA($sp)
    ctx->pc = 0x20cdc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 234)));
label_20cdcc:
    // 0x20cdcc: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x20cdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cdd0:
    // 0x20cdd0: 0xa3a700e8  sb          $a3, 0xE8($sp)
    ctx->pc = 0x20cdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 232), (uint8_t)GPR_U32(ctx, 7));
label_20cdd4:
    // 0x20cdd4: 0xa3a800eb  sb          $t0, 0xEB($sp)
    ctx->pc = 0x20cdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 235), (uint8_t)GPR_U32(ctx, 8));
label_20cdd8:
    // 0x20cdd8: 0xa3a200e9  sb          $v0, 0xE9($sp)
    ctx->pc = 0x20cdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 233), (uint8_t)GPR_U32(ctx, 2));
label_20cddc:
    // 0x20cddc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x20cddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_20cde0:
    // 0x20cde0: 0xa3a300ea  sb          $v1, 0xEA($sp)
    ctx->pc = 0x20cde0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 234), (uint8_t)GPR_U32(ctx, 3));
label_20cde4:
    // 0x20cde4: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x20cde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cde8:
    // 0x20cde8: 0x93a300e5  lbu         $v1, 0xE5($sp)
    ctx->pc = 0x20cde8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 229)));
label_20cdec:
    // 0x20cdec: 0x93a200e6  lbu         $v0, 0xE6($sp)
    ctx->pc = 0x20cdecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 230)));
label_20cdf0:
    // 0x20cdf0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x20cdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_20cdf4:
    // 0x20cdf4: 0xa3a200e5  sb          $v0, 0xE5($sp)
    ctx->pc = 0x20cdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 229), (uint8_t)GPR_U32(ctx, 2));
label_20cdf8:
    // 0x20cdf8: 0xa3a300e6  sb          $v1, 0xE6($sp)
    ctx->pc = 0x20cdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 230), (uint8_t)GPR_U32(ctx, 3));
label_20cdfc:
    // 0x20cdfc: 0x93a300e4  lbu         $v1, 0xE4($sp)
    ctx->pc = 0x20cdfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 228)));
label_20ce00:
    // 0x20ce00: 0x93a200e7  lbu         $v0, 0xE7($sp)
    ctx->pc = 0x20ce00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 231)));
label_20ce04:
    // 0x20ce04: 0xa3a200e4  sb          $v0, 0xE4($sp)
    ctx->pc = 0x20ce04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 228), (uint8_t)GPR_U32(ctx, 2));
label_20ce08:
    // 0x20ce08: 0xa3a300e7  sb          $v1, 0xE7($sp)
    ctx->pc = 0x20ce08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 231), (uint8_t)GPR_U32(ctx, 3));
label_20ce0c:
    // 0x20ce0c: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x20ce0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ce10:
    // 0x20ce10: 0xc0a8448  jal         func_2A1120
label_20ce14:
    if (ctx->pc == 0x20CE14u) {
        ctx->pc = 0x20CE14u;
            // 0x20ce14: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x20CE18u;
        goto label_20ce18;
    }
    ctx->pc = 0x20CE10u;
    SET_GPR_U32(ctx, 31, 0x20CE18u);
    ctx->pc = 0x20CE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CE10u;
            // 0x20ce14: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE18u; }
        if (ctx->pc != 0x20CE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE18u; }
        if (ctx->pc != 0x20CE18u) { return; }
    }
    ctx->pc = 0x20CE18u;
label_20ce18:
    // 0x20ce18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_20ce1c:
    // 0x20ce1c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x20ce1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_20ce20:
    // 0x20ce20: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x20ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_20ce24:
    // 0x20ce24: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x20ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_20ce28:
    // 0x20ce28: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x20ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_20ce2c:
    // 0x20ce2c: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_20ce30:
    if (ctx->pc == 0x20CE30u) {
        ctx->pc = 0x20CE34u;
        goto label_20ce34;
    }
    ctx->pc = 0x20CE2Cu;
    {
        const bool branch_taken_0x20ce2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x20ce2c) {
            ctx->pc = 0x20CE44u;
            goto label_20ce44;
        }
    }
    ctx->pc = 0x20CE34u;
label_20ce34:
    // 0x20ce34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20ce34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20ce38:
    // 0x20ce38: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x20ce38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_20ce3c:
    // 0x20ce3c: 0x320f809  jalr        $t9
label_20ce40:
    if (ctx->pc == 0x20CE40u) {
        ctx->pc = 0x20CE44u;
        goto label_20ce44;
    }
    ctx->pc = 0x20CE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20CE44u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x20CE44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20CE44u; }
            if (ctx->pc != 0x20CE44u) { return; }
        }
        }
    }
    ctx->pc = 0x20CE44u;
label_20ce44:
    // 0x20ce44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_20ce48:
    // 0x20ce48: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x20ce48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_20ce4c:
    // 0x20ce4c: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x20ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_20ce50:
    // 0x20ce50: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x20ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_20ce54:
    // 0x20ce54: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x20ce54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_20ce58:
    // 0x20ce58: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_20ce5c:
    if (ctx->pc == 0x20CE5Cu) {
        ctx->pc = 0x20CE5Cu;
            // 0x20ce5c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x20CE60u;
        goto label_20ce60;
    }
    ctx->pc = 0x20CE58u;
    {
        const bool branch_taken_0x20ce58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x20ce58) {
            ctx->pc = 0x20CE5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20CE58u;
            // 0x20ce5c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20CE74u;
            goto label_20ce74;
        }
    }
    ctx->pc = 0x20CE60u;
label_20ce60:
    // 0x20ce60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20ce60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20ce64:
    // 0x20ce64: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x20ce64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_20ce68:
    // 0x20ce68: 0x320f809  jalr        $t9
label_20ce6c:
    if (ctx->pc == 0x20CE6Cu) {
        ctx->pc = 0x20CE70u;
        goto label_20ce70;
    }
    ctx->pc = 0x20CE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20CE70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x20CE70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20CE70u; }
            if (ctx->pc != 0x20CE70u) { return; }
        }
        }
    }
    ctx->pc = 0x20CE70u;
label_20ce70:
    // 0x20ce70: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20ce70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_20ce74:
    // 0x20ce74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20ce74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20ce78:
    // 0x20ce78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20ce78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20ce7c:
    // 0x20ce7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20ce7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20ce80:
    // 0x20ce80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20ce80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20ce84:
    // 0x20ce84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20ce84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ce88:
    // 0x20ce88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ce88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20ce8c:
    // 0x20ce8c: 0x3e00008  jr          $ra
label_20ce90:
    if (ctx->pc == 0x20CE90u) {
        ctx->pc = 0x20CE90u;
            // 0x20ce90: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x20CE94u;
        goto label_20ce94;
    }
    ctx->pc = 0x20CE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CE8Cu;
            // 0x20ce90: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20CE94u;
label_20ce94:
    // 0x20ce94: 0x0  nop
    ctx->pc = 0x20ce94u;
    // NOP
label_20ce98:
    // 0x20ce98: 0x0  nop
    ctx->pc = 0x20ce98u;
    // NOP
label_20ce9c:
    // 0x20ce9c: 0x0  nop
    ctx->pc = 0x20ce9cu;
    // NOP
}
