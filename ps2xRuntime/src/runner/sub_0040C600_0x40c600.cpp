#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040C600
// Address: 0x40c600 - 0x40ce50
void sub_0040C600_0x40c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C600_0x40c600");
#endif

    switch (ctx->pc) {
        case 0x40c600u: goto label_40c600;
        case 0x40c604u: goto label_40c604;
        case 0x40c608u: goto label_40c608;
        case 0x40c60cu: goto label_40c60c;
        case 0x40c610u: goto label_40c610;
        case 0x40c614u: goto label_40c614;
        case 0x40c618u: goto label_40c618;
        case 0x40c61cu: goto label_40c61c;
        case 0x40c620u: goto label_40c620;
        case 0x40c624u: goto label_40c624;
        case 0x40c628u: goto label_40c628;
        case 0x40c62cu: goto label_40c62c;
        case 0x40c630u: goto label_40c630;
        case 0x40c634u: goto label_40c634;
        case 0x40c638u: goto label_40c638;
        case 0x40c63cu: goto label_40c63c;
        case 0x40c640u: goto label_40c640;
        case 0x40c644u: goto label_40c644;
        case 0x40c648u: goto label_40c648;
        case 0x40c64cu: goto label_40c64c;
        case 0x40c650u: goto label_40c650;
        case 0x40c654u: goto label_40c654;
        case 0x40c658u: goto label_40c658;
        case 0x40c65cu: goto label_40c65c;
        case 0x40c660u: goto label_40c660;
        case 0x40c664u: goto label_40c664;
        case 0x40c668u: goto label_40c668;
        case 0x40c66cu: goto label_40c66c;
        case 0x40c670u: goto label_40c670;
        case 0x40c674u: goto label_40c674;
        case 0x40c678u: goto label_40c678;
        case 0x40c67cu: goto label_40c67c;
        case 0x40c680u: goto label_40c680;
        case 0x40c684u: goto label_40c684;
        case 0x40c688u: goto label_40c688;
        case 0x40c68cu: goto label_40c68c;
        case 0x40c690u: goto label_40c690;
        case 0x40c694u: goto label_40c694;
        case 0x40c698u: goto label_40c698;
        case 0x40c69cu: goto label_40c69c;
        case 0x40c6a0u: goto label_40c6a0;
        case 0x40c6a4u: goto label_40c6a4;
        case 0x40c6a8u: goto label_40c6a8;
        case 0x40c6acu: goto label_40c6ac;
        case 0x40c6b0u: goto label_40c6b0;
        case 0x40c6b4u: goto label_40c6b4;
        case 0x40c6b8u: goto label_40c6b8;
        case 0x40c6bcu: goto label_40c6bc;
        case 0x40c6c0u: goto label_40c6c0;
        case 0x40c6c4u: goto label_40c6c4;
        case 0x40c6c8u: goto label_40c6c8;
        case 0x40c6ccu: goto label_40c6cc;
        case 0x40c6d0u: goto label_40c6d0;
        case 0x40c6d4u: goto label_40c6d4;
        case 0x40c6d8u: goto label_40c6d8;
        case 0x40c6dcu: goto label_40c6dc;
        case 0x40c6e0u: goto label_40c6e0;
        case 0x40c6e4u: goto label_40c6e4;
        case 0x40c6e8u: goto label_40c6e8;
        case 0x40c6ecu: goto label_40c6ec;
        case 0x40c6f0u: goto label_40c6f0;
        case 0x40c6f4u: goto label_40c6f4;
        case 0x40c6f8u: goto label_40c6f8;
        case 0x40c6fcu: goto label_40c6fc;
        case 0x40c700u: goto label_40c700;
        case 0x40c704u: goto label_40c704;
        case 0x40c708u: goto label_40c708;
        case 0x40c70cu: goto label_40c70c;
        case 0x40c710u: goto label_40c710;
        case 0x40c714u: goto label_40c714;
        case 0x40c718u: goto label_40c718;
        case 0x40c71cu: goto label_40c71c;
        case 0x40c720u: goto label_40c720;
        case 0x40c724u: goto label_40c724;
        case 0x40c728u: goto label_40c728;
        case 0x40c72cu: goto label_40c72c;
        case 0x40c730u: goto label_40c730;
        case 0x40c734u: goto label_40c734;
        case 0x40c738u: goto label_40c738;
        case 0x40c73cu: goto label_40c73c;
        case 0x40c740u: goto label_40c740;
        case 0x40c744u: goto label_40c744;
        case 0x40c748u: goto label_40c748;
        case 0x40c74cu: goto label_40c74c;
        case 0x40c750u: goto label_40c750;
        case 0x40c754u: goto label_40c754;
        case 0x40c758u: goto label_40c758;
        case 0x40c75cu: goto label_40c75c;
        case 0x40c760u: goto label_40c760;
        case 0x40c764u: goto label_40c764;
        case 0x40c768u: goto label_40c768;
        case 0x40c76cu: goto label_40c76c;
        case 0x40c770u: goto label_40c770;
        case 0x40c774u: goto label_40c774;
        case 0x40c778u: goto label_40c778;
        case 0x40c77cu: goto label_40c77c;
        case 0x40c780u: goto label_40c780;
        case 0x40c784u: goto label_40c784;
        case 0x40c788u: goto label_40c788;
        case 0x40c78cu: goto label_40c78c;
        case 0x40c790u: goto label_40c790;
        case 0x40c794u: goto label_40c794;
        case 0x40c798u: goto label_40c798;
        case 0x40c79cu: goto label_40c79c;
        case 0x40c7a0u: goto label_40c7a0;
        case 0x40c7a4u: goto label_40c7a4;
        case 0x40c7a8u: goto label_40c7a8;
        case 0x40c7acu: goto label_40c7ac;
        case 0x40c7b0u: goto label_40c7b0;
        case 0x40c7b4u: goto label_40c7b4;
        case 0x40c7b8u: goto label_40c7b8;
        case 0x40c7bcu: goto label_40c7bc;
        case 0x40c7c0u: goto label_40c7c0;
        case 0x40c7c4u: goto label_40c7c4;
        case 0x40c7c8u: goto label_40c7c8;
        case 0x40c7ccu: goto label_40c7cc;
        case 0x40c7d0u: goto label_40c7d0;
        case 0x40c7d4u: goto label_40c7d4;
        case 0x40c7d8u: goto label_40c7d8;
        case 0x40c7dcu: goto label_40c7dc;
        case 0x40c7e0u: goto label_40c7e0;
        case 0x40c7e4u: goto label_40c7e4;
        case 0x40c7e8u: goto label_40c7e8;
        case 0x40c7ecu: goto label_40c7ec;
        case 0x40c7f0u: goto label_40c7f0;
        case 0x40c7f4u: goto label_40c7f4;
        case 0x40c7f8u: goto label_40c7f8;
        case 0x40c7fcu: goto label_40c7fc;
        case 0x40c800u: goto label_40c800;
        case 0x40c804u: goto label_40c804;
        case 0x40c808u: goto label_40c808;
        case 0x40c80cu: goto label_40c80c;
        case 0x40c810u: goto label_40c810;
        case 0x40c814u: goto label_40c814;
        case 0x40c818u: goto label_40c818;
        case 0x40c81cu: goto label_40c81c;
        case 0x40c820u: goto label_40c820;
        case 0x40c824u: goto label_40c824;
        case 0x40c828u: goto label_40c828;
        case 0x40c82cu: goto label_40c82c;
        case 0x40c830u: goto label_40c830;
        case 0x40c834u: goto label_40c834;
        case 0x40c838u: goto label_40c838;
        case 0x40c83cu: goto label_40c83c;
        case 0x40c840u: goto label_40c840;
        case 0x40c844u: goto label_40c844;
        case 0x40c848u: goto label_40c848;
        case 0x40c84cu: goto label_40c84c;
        case 0x40c850u: goto label_40c850;
        case 0x40c854u: goto label_40c854;
        case 0x40c858u: goto label_40c858;
        case 0x40c85cu: goto label_40c85c;
        case 0x40c860u: goto label_40c860;
        case 0x40c864u: goto label_40c864;
        case 0x40c868u: goto label_40c868;
        case 0x40c86cu: goto label_40c86c;
        case 0x40c870u: goto label_40c870;
        case 0x40c874u: goto label_40c874;
        case 0x40c878u: goto label_40c878;
        case 0x40c87cu: goto label_40c87c;
        case 0x40c880u: goto label_40c880;
        case 0x40c884u: goto label_40c884;
        case 0x40c888u: goto label_40c888;
        case 0x40c88cu: goto label_40c88c;
        case 0x40c890u: goto label_40c890;
        case 0x40c894u: goto label_40c894;
        case 0x40c898u: goto label_40c898;
        case 0x40c89cu: goto label_40c89c;
        case 0x40c8a0u: goto label_40c8a0;
        case 0x40c8a4u: goto label_40c8a4;
        case 0x40c8a8u: goto label_40c8a8;
        case 0x40c8acu: goto label_40c8ac;
        case 0x40c8b0u: goto label_40c8b0;
        case 0x40c8b4u: goto label_40c8b4;
        case 0x40c8b8u: goto label_40c8b8;
        case 0x40c8bcu: goto label_40c8bc;
        case 0x40c8c0u: goto label_40c8c0;
        case 0x40c8c4u: goto label_40c8c4;
        case 0x40c8c8u: goto label_40c8c8;
        case 0x40c8ccu: goto label_40c8cc;
        case 0x40c8d0u: goto label_40c8d0;
        case 0x40c8d4u: goto label_40c8d4;
        case 0x40c8d8u: goto label_40c8d8;
        case 0x40c8dcu: goto label_40c8dc;
        case 0x40c8e0u: goto label_40c8e0;
        case 0x40c8e4u: goto label_40c8e4;
        case 0x40c8e8u: goto label_40c8e8;
        case 0x40c8ecu: goto label_40c8ec;
        case 0x40c8f0u: goto label_40c8f0;
        case 0x40c8f4u: goto label_40c8f4;
        case 0x40c8f8u: goto label_40c8f8;
        case 0x40c8fcu: goto label_40c8fc;
        case 0x40c900u: goto label_40c900;
        case 0x40c904u: goto label_40c904;
        case 0x40c908u: goto label_40c908;
        case 0x40c90cu: goto label_40c90c;
        case 0x40c910u: goto label_40c910;
        case 0x40c914u: goto label_40c914;
        case 0x40c918u: goto label_40c918;
        case 0x40c91cu: goto label_40c91c;
        case 0x40c920u: goto label_40c920;
        case 0x40c924u: goto label_40c924;
        case 0x40c928u: goto label_40c928;
        case 0x40c92cu: goto label_40c92c;
        case 0x40c930u: goto label_40c930;
        case 0x40c934u: goto label_40c934;
        case 0x40c938u: goto label_40c938;
        case 0x40c93cu: goto label_40c93c;
        case 0x40c940u: goto label_40c940;
        case 0x40c944u: goto label_40c944;
        case 0x40c948u: goto label_40c948;
        case 0x40c94cu: goto label_40c94c;
        case 0x40c950u: goto label_40c950;
        case 0x40c954u: goto label_40c954;
        case 0x40c958u: goto label_40c958;
        case 0x40c95cu: goto label_40c95c;
        case 0x40c960u: goto label_40c960;
        case 0x40c964u: goto label_40c964;
        case 0x40c968u: goto label_40c968;
        case 0x40c96cu: goto label_40c96c;
        case 0x40c970u: goto label_40c970;
        case 0x40c974u: goto label_40c974;
        case 0x40c978u: goto label_40c978;
        case 0x40c97cu: goto label_40c97c;
        case 0x40c980u: goto label_40c980;
        case 0x40c984u: goto label_40c984;
        case 0x40c988u: goto label_40c988;
        case 0x40c98cu: goto label_40c98c;
        case 0x40c990u: goto label_40c990;
        case 0x40c994u: goto label_40c994;
        case 0x40c998u: goto label_40c998;
        case 0x40c99cu: goto label_40c99c;
        case 0x40c9a0u: goto label_40c9a0;
        case 0x40c9a4u: goto label_40c9a4;
        case 0x40c9a8u: goto label_40c9a8;
        case 0x40c9acu: goto label_40c9ac;
        case 0x40c9b0u: goto label_40c9b0;
        case 0x40c9b4u: goto label_40c9b4;
        case 0x40c9b8u: goto label_40c9b8;
        case 0x40c9bcu: goto label_40c9bc;
        case 0x40c9c0u: goto label_40c9c0;
        case 0x40c9c4u: goto label_40c9c4;
        case 0x40c9c8u: goto label_40c9c8;
        case 0x40c9ccu: goto label_40c9cc;
        case 0x40c9d0u: goto label_40c9d0;
        case 0x40c9d4u: goto label_40c9d4;
        case 0x40c9d8u: goto label_40c9d8;
        case 0x40c9dcu: goto label_40c9dc;
        case 0x40c9e0u: goto label_40c9e0;
        case 0x40c9e4u: goto label_40c9e4;
        case 0x40c9e8u: goto label_40c9e8;
        case 0x40c9ecu: goto label_40c9ec;
        case 0x40c9f0u: goto label_40c9f0;
        case 0x40c9f4u: goto label_40c9f4;
        case 0x40c9f8u: goto label_40c9f8;
        case 0x40c9fcu: goto label_40c9fc;
        case 0x40ca00u: goto label_40ca00;
        case 0x40ca04u: goto label_40ca04;
        case 0x40ca08u: goto label_40ca08;
        case 0x40ca0cu: goto label_40ca0c;
        case 0x40ca10u: goto label_40ca10;
        case 0x40ca14u: goto label_40ca14;
        case 0x40ca18u: goto label_40ca18;
        case 0x40ca1cu: goto label_40ca1c;
        case 0x40ca20u: goto label_40ca20;
        case 0x40ca24u: goto label_40ca24;
        case 0x40ca28u: goto label_40ca28;
        case 0x40ca2cu: goto label_40ca2c;
        case 0x40ca30u: goto label_40ca30;
        case 0x40ca34u: goto label_40ca34;
        case 0x40ca38u: goto label_40ca38;
        case 0x40ca3cu: goto label_40ca3c;
        case 0x40ca40u: goto label_40ca40;
        case 0x40ca44u: goto label_40ca44;
        case 0x40ca48u: goto label_40ca48;
        case 0x40ca4cu: goto label_40ca4c;
        case 0x40ca50u: goto label_40ca50;
        case 0x40ca54u: goto label_40ca54;
        case 0x40ca58u: goto label_40ca58;
        case 0x40ca5cu: goto label_40ca5c;
        case 0x40ca60u: goto label_40ca60;
        case 0x40ca64u: goto label_40ca64;
        case 0x40ca68u: goto label_40ca68;
        case 0x40ca6cu: goto label_40ca6c;
        case 0x40ca70u: goto label_40ca70;
        case 0x40ca74u: goto label_40ca74;
        case 0x40ca78u: goto label_40ca78;
        case 0x40ca7cu: goto label_40ca7c;
        case 0x40ca80u: goto label_40ca80;
        case 0x40ca84u: goto label_40ca84;
        case 0x40ca88u: goto label_40ca88;
        case 0x40ca8cu: goto label_40ca8c;
        case 0x40ca90u: goto label_40ca90;
        case 0x40ca94u: goto label_40ca94;
        case 0x40ca98u: goto label_40ca98;
        case 0x40ca9cu: goto label_40ca9c;
        case 0x40caa0u: goto label_40caa0;
        case 0x40caa4u: goto label_40caa4;
        case 0x40caa8u: goto label_40caa8;
        case 0x40caacu: goto label_40caac;
        case 0x40cab0u: goto label_40cab0;
        case 0x40cab4u: goto label_40cab4;
        case 0x40cab8u: goto label_40cab8;
        case 0x40cabcu: goto label_40cabc;
        case 0x40cac0u: goto label_40cac0;
        case 0x40cac4u: goto label_40cac4;
        case 0x40cac8u: goto label_40cac8;
        case 0x40caccu: goto label_40cacc;
        case 0x40cad0u: goto label_40cad0;
        case 0x40cad4u: goto label_40cad4;
        case 0x40cad8u: goto label_40cad8;
        case 0x40cadcu: goto label_40cadc;
        case 0x40cae0u: goto label_40cae0;
        case 0x40cae4u: goto label_40cae4;
        case 0x40cae8u: goto label_40cae8;
        case 0x40caecu: goto label_40caec;
        case 0x40caf0u: goto label_40caf0;
        case 0x40caf4u: goto label_40caf4;
        case 0x40caf8u: goto label_40caf8;
        case 0x40cafcu: goto label_40cafc;
        case 0x40cb00u: goto label_40cb00;
        case 0x40cb04u: goto label_40cb04;
        case 0x40cb08u: goto label_40cb08;
        case 0x40cb0cu: goto label_40cb0c;
        case 0x40cb10u: goto label_40cb10;
        case 0x40cb14u: goto label_40cb14;
        case 0x40cb18u: goto label_40cb18;
        case 0x40cb1cu: goto label_40cb1c;
        case 0x40cb20u: goto label_40cb20;
        case 0x40cb24u: goto label_40cb24;
        case 0x40cb28u: goto label_40cb28;
        case 0x40cb2cu: goto label_40cb2c;
        case 0x40cb30u: goto label_40cb30;
        case 0x40cb34u: goto label_40cb34;
        case 0x40cb38u: goto label_40cb38;
        case 0x40cb3cu: goto label_40cb3c;
        case 0x40cb40u: goto label_40cb40;
        case 0x40cb44u: goto label_40cb44;
        case 0x40cb48u: goto label_40cb48;
        case 0x40cb4cu: goto label_40cb4c;
        case 0x40cb50u: goto label_40cb50;
        case 0x40cb54u: goto label_40cb54;
        case 0x40cb58u: goto label_40cb58;
        case 0x40cb5cu: goto label_40cb5c;
        case 0x40cb60u: goto label_40cb60;
        case 0x40cb64u: goto label_40cb64;
        case 0x40cb68u: goto label_40cb68;
        case 0x40cb6cu: goto label_40cb6c;
        case 0x40cb70u: goto label_40cb70;
        case 0x40cb74u: goto label_40cb74;
        case 0x40cb78u: goto label_40cb78;
        case 0x40cb7cu: goto label_40cb7c;
        case 0x40cb80u: goto label_40cb80;
        case 0x40cb84u: goto label_40cb84;
        case 0x40cb88u: goto label_40cb88;
        case 0x40cb8cu: goto label_40cb8c;
        case 0x40cb90u: goto label_40cb90;
        case 0x40cb94u: goto label_40cb94;
        case 0x40cb98u: goto label_40cb98;
        case 0x40cb9cu: goto label_40cb9c;
        case 0x40cba0u: goto label_40cba0;
        case 0x40cba4u: goto label_40cba4;
        case 0x40cba8u: goto label_40cba8;
        case 0x40cbacu: goto label_40cbac;
        case 0x40cbb0u: goto label_40cbb0;
        case 0x40cbb4u: goto label_40cbb4;
        case 0x40cbb8u: goto label_40cbb8;
        case 0x40cbbcu: goto label_40cbbc;
        case 0x40cbc0u: goto label_40cbc0;
        case 0x40cbc4u: goto label_40cbc4;
        case 0x40cbc8u: goto label_40cbc8;
        case 0x40cbccu: goto label_40cbcc;
        case 0x40cbd0u: goto label_40cbd0;
        case 0x40cbd4u: goto label_40cbd4;
        case 0x40cbd8u: goto label_40cbd8;
        case 0x40cbdcu: goto label_40cbdc;
        case 0x40cbe0u: goto label_40cbe0;
        case 0x40cbe4u: goto label_40cbe4;
        case 0x40cbe8u: goto label_40cbe8;
        case 0x40cbecu: goto label_40cbec;
        case 0x40cbf0u: goto label_40cbf0;
        case 0x40cbf4u: goto label_40cbf4;
        case 0x40cbf8u: goto label_40cbf8;
        case 0x40cbfcu: goto label_40cbfc;
        case 0x40cc00u: goto label_40cc00;
        case 0x40cc04u: goto label_40cc04;
        case 0x40cc08u: goto label_40cc08;
        case 0x40cc0cu: goto label_40cc0c;
        case 0x40cc10u: goto label_40cc10;
        case 0x40cc14u: goto label_40cc14;
        case 0x40cc18u: goto label_40cc18;
        case 0x40cc1cu: goto label_40cc1c;
        case 0x40cc20u: goto label_40cc20;
        case 0x40cc24u: goto label_40cc24;
        case 0x40cc28u: goto label_40cc28;
        case 0x40cc2cu: goto label_40cc2c;
        case 0x40cc30u: goto label_40cc30;
        case 0x40cc34u: goto label_40cc34;
        case 0x40cc38u: goto label_40cc38;
        case 0x40cc3cu: goto label_40cc3c;
        case 0x40cc40u: goto label_40cc40;
        case 0x40cc44u: goto label_40cc44;
        case 0x40cc48u: goto label_40cc48;
        case 0x40cc4cu: goto label_40cc4c;
        case 0x40cc50u: goto label_40cc50;
        case 0x40cc54u: goto label_40cc54;
        case 0x40cc58u: goto label_40cc58;
        case 0x40cc5cu: goto label_40cc5c;
        case 0x40cc60u: goto label_40cc60;
        case 0x40cc64u: goto label_40cc64;
        case 0x40cc68u: goto label_40cc68;
        case 0x40cc6cu: goto label_40cc6c;
        case 0x40cc70u: goto label_40cc70;
        case 0x40cc74u: goto label_40cc74;
        case 0x40cc78u: goto label_40cc78;
        case 0x40cc7cu: goto label_40cc7c;
        case 0x40cc80u: goto label_40cc80;
        case 0x40cc84u: goto label_40cc84;
        case 0x40cc88u: goto label_40cc88;
        case 0x40cc8cu: goto label_40cc8c;
        case 0x40cc90u: goto label_40cc90;
        case 0x40cc94u: goto label_40cc94;
        case 0x40cc98u: goto label_40cc98;
        case 0x40cc9cu: goto label_40cc9c;
        case 0x40cca0u: goto label_40cca0;
        case 0x40cca4u: goto label_40cca4;
        case 0x40cca8u: goto label_40cca8;
        case 0x40ccacu: goto label_40ccac;
        case 0x40ccb0u: goto label_40ccb0;
        case 0x40ccb4u: goto label_40ccb4;
        case 0x40ccb8u: goto label_40ccb8;
        case 0x40ccbcu: goto label_40ccbc;
        case 0x40ccc0u: goto label_40ccc0;
        case 0x40ccc4u: goto label_40ccc4;
        case 0x40ccc8u: goto label_40ccc8;
        case 0x40ccccu: goto label_40cccc;
        case 0x40ccd0u: goto label_40ccd0;
        case 0x40ccd4u: goto label_40ccd4;
        case 0x40ccd8u: goto label_40ccd8;
        case 0x40ccdcu: goto label_40ccdc;
        case 0x40cce0u: goto label_40cce0;
        case 0x40cce4u: goto label_40cce4;
        case 0x40cce8u: goto label_40cce8;
        case 0x40ccecu: goto label_40ccec;
        case 0x40ccf0u: goto label_40ccf0;
        case 0x40ccf4u: goto label_40ccf4;
        case 0x40ccf8u: goto label_40ccf8;
        case 0x40ccfcu: goto label_40ccfc;
        case 0x40cd00u: goto label_40cd00;
        case 0x40cd04u: goto label_40cd04;
        case 0x40cd08u: goto label_40cd08;
        case 0x40cd0cu: goto label_40cd0c;
        case 0x40cd10u: goto label_40cd10;
        case 0x40cd14u: goto label_40cd14;
        case 0x40cd18u: goto label_40cd18;
        case 0x40cd1cu: goto label_40cd1c;
        case 0x40cd20u: goto label_40cd20;
        case 0x40cd24u: goto label_40cd24;
        case 0x40cd28u: goto label_40cd28;
        case 0x40cd2cu: goto label_40cd2c;
        case 0x40cd30u: goto label_40cd30;
        case 0x40cd34u: goto label_40cd34;
        case 0x40cd38u: goto label_40cd38;
        case 0x40cd3cu: goto label_40cd3c;
        case 0x40cd40u: goto label_40cd40;
        case 0x40cd44u: goto label_40cd44;
        case 0x40cd48u: goto label_40cd48;
        case 0x40cd4cu: goto label_40cd4c;
        case 0x40cd50u: goto label_40cd50;
        case 0x40cd54u: goto label_40cd54;
        case 0x40cd58u: goto label_40cd58;
        case 0x40cd5cu: goto label_40cd5c;
        case 0x40cd60u: goto label_40cd60;
        case 0x40cd64u: goto label_40cd64;
        case 0x40cd68u: goto label_40cd68;
        case 0x40cd6cu: goto label_40cd6c;
        case 0x40cd70u: goto label_40cd70;
        case 0x40cd74u: goto label_40cd74;
        case 0x40cd78u: goto label_40cd78;
        case 0x40cd7cu: goto label_40cd7c;
        case 0x40cd80u: goto label_40cd80;
        case 0x40cd84u: goto label_40cd84;
        case 0x40cd88u: goto label_40cd88;
        case 0x40cd8cu: goto label_40cd8c;
        case 0x40cd90u: goto label_40cd90;
        case 0x40cd94u: goto label_40cd94;
        case 0x40cd98u: goto label_40cd98;
        case 0x40cd9cu: goto label_40cd9c;
        case 0x40cda0u: goto label_40cda0;
        case 0x40cda4u: goto label_40cda4;
        case 0x40cda8u: goto label_40cda8;
        case 0x40cdacu: goto label_40cdac;
        case 0x40cdb0u: goto label_40cdb0;
        case 0x40cdb4u: goto label_40cdb4;
        case 0x40cdb8u: goto label_40cdb8;
        case 0x40cdbcu: goto label_40cdbc;
        case 0x40cdc0u: goto label_40cdc0;
        case 0x40cdc4u: goto label_40cdc4;
        case 0x40cdc8u: goto label_40cdc8;
        case 0x40cdccu: goto label_40cdcc;
        case 0x40cdd0u: goto label_40cdd0;
        case 0x40cdd4u: goto label_40cdd4;
        case 0x40cdd8u: goto label_40cdd8;
        case 0x40cddcu: goto label_40cddc;
        case 0x40cde0u: goto label_40cde0;
        case 0x40cde4u: goto label_40cde4;
        case 0x40cde8u: goto label_40cde8;
        case 0x40cdecu: goto label_40cdec;
        case 0x40cdf0u: goto label_40cdf0;
        case 0x40cdf4u: goto label_40cdf4;
        case 0x40cdf8u: goto label_40cdf8;
        case 0x40cdfcu: goto label_40cdfc;
        case 0x40ce00u: goto label_40ce00;
        case 0x40ce04u: goto label_40ce04;
        case 0x40ce08u: goto label_40ce08;
        case 0x40ce0cu: goto label_40ce0c;
        case 0x40ce10u: goto label_40ce10;
        case 0x40ce14u: goto label_40ce14;
        case 0x40ce18u: goto label_40ce18;
        case 0x40ce1cu: goto label_40ce1c;
        case 0x40ce20u: goto label_40ce20;
        case 0x40ce24u: goto label_40ce24;
        case 0x40ce28u: goto label_40ce28;
        case 0x40ce2cu: goto label_40ce2c;
        case 0x40ce30u: goto label_40ce30;
        case 0x40ce34u: goto label_40ce34;
        case 0x40ce38u: goto label_40ce38;
        case 0x40ce3cu: goto label_40ce3c;
        case 0x40ce40u: goto label_40ce40;
        case 0x40ce44u: goto label_40ce44;
        case 0x40ce48u: goto label_40ce48;
        case 0x40ce4cu: goto label_40ce4c;
        default: break;
    }

    ctx->pc = 0x40c600u;

label_40c600:
    // 0x40c600: 0x3e00008  jr          $ra
label_40c604:
    if (ctx->pc == 0x40C604u) {
        ctx->pc = 0x40C604u;
            // 0x40c604: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->pc = 0x40C608u;
        goto label_40c608;
    }
    ctx->pc = 0x40C600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C600u;
            // 0x40c604: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40C608u;
label_40c608:
    // 0x40c608: 0x0  nop
    ctx->pc = 0x40c608u;
    // NOP
label_40c60c:
    // 0x40c60c: 0x0  nop
    ctx->pc = 0x40c60cu;
    // NOP
label_40c610:
    // 0x40c610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x40c610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_40c614:
    // 0x40c614: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x40c614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40c618:
    // 0x40c618: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40c618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40c61c:
    // 0x40c61c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40c61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40c620:
    // 0x40c620: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40c620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40c624:
    // 0x40c624: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40c624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40c628:
    // 0x40c628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40c628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40c62c:
    // 0x40c62c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x40c62cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_40c630:
    // 0x40c630: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_40c634:
    if (ctx->pc == 0x40C634u) {
        ctx->pc = 0x40C634u;
            // 0x40c634: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C638u;
        goto label_40c638;
    }
    ctx->pc = 0x40C630u;
    {
        const bool branch_taken_0x40c630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x40C634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C630u;
            // 0x40c634: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c630) {
            ctx->pc = 0x40C664u;
            goto label_40c664;
        }
    }
    ctx->pc = 0x40C638u;
label_40c638:
    // 0x40c638: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x40c638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40c63c:
    // 0x40c63c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_40c640:
    if (ctx->pc == 0x40C640u) {
        ctx->pc = 0x40C640u;
            // 0x40c640: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x40C644u;
        goto label_40c644;
    }
    ctx->pc = 0x40C63Cu;
    {
        const bool branch_taken_0x40c63c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40c63c) {
            ctx->pc = 0x40C640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40C63Cu;
            // 0x40c640: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40C658u;
            goto label_40c658;
        }
    }
    ctx->pc = 0x40C644u;
label_40c644:
    // 0x40c644: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x40c644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40c648:
    // 0x40c648: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_40c64c:
    if (ctx->pc == 0x40C64Cu) {
        ctx->pc = 0x40C650u;
        goto label_40c650;
    }
    ctx->pc = 0x40C648u;
    {
        const bool branch_taken_0x40c648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40c648) {
            ctx->pc = 0x40C698u;
            goto label_40c698;
        }
    }
    ctx->pc = 0x40C650u;
label_40c650:
    // 0x40c650: 0x10000011  b           . + 4 + (0x11 << 2)
label_40c654:
    if (ctx->pc == 0x40C654u) {
        ctx->pc = 0x40C658u;
        goto label_40c658;
    }
    ctx->pc = 0x40C650u;
    {
        const bool branch_taken_0x40c650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c650) {
            ctx->pc = 0x40C698u;
            goto label_40c698;
        }
    }
    ctx->pc = 0x40C658u;
label_40c658:
    // 0x40c658: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x40c658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_40c65c:
    // 0x40c65c: 0x320f809  jalr        $t9
label_40c660:
    if (ctx->pc == 0x40C660u) {
        ctx->pc = 0x40C664u;
        goto label_40c664;
    }
    ctx->pc = 0x40C65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40C664u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x40C664u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40C664u; }
            if (ctx->pc != 0x40C664u) { return; }
        }
        }
    }
    ctx->pc = 0x40C664u;
label_40c664:
    // 0x40c664: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x40c664u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_40c668:
    // 0x40c668: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_40c66c:
    if (ctx->pc == 0x40C66Cu) {
        ctx->pc = 0x40C670u;
        goto label_40c670;
    }
    ctx->pc = 0x40C668u;
    {
        const bool branch_taken_0x40c668 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c668) {
            ctx->pc = 0x40C698u;
            goto label_40c698;
        }
    }
    ctx->pc = 0x40C670u;
label_40c670:
    // 0x40c670: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x40c670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c674:
    // 0x40c674: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x40c674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c678:
    // 0x40c678: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x40c678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_40c67c:
    // 0x40c67c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x40c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_40c680:
    // 0x40c680: 0xc0e3658  jal         func_38D960
label_40c684:
    if (ctx->pc == 0x40C684u) {
        ctx->pc = 0x40C684u;
            // 0x40c684: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x40C688u;
        goto label_40c688;
    }
    ctx->pc = 0x40C680u;
    SET_GPR_U32(ctx, 31, 0x40C688u);
    ctx->pc = 0x40C684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C680u;
            // 0x40c684: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C688u; }
        if (ctx->pc != 0x40C688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C688u; }
        if (ctx->pc != 0x40C688u) { return; }
    }
    ctx->pc = 0x40C688u;
label_40c688:
    // 0x40c688: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x40c688u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_40c68c:
    // 0x40c68c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x40c68cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_40c690:
    // 0x40c690: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_40c694:
    if (ctx->pc == 0x40C694u) {
        ctx->pc = 0x40C694u;
            // 0x40c694: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x40C698u;
        goto label_40c698;
    }
    ctx->pc = 0x40C690u;
    {
        const bool branch_taken_0x40c690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40C694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C690u;
            // 0x40c694: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c690) {
            ctx->pc = 0x40C678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40c678;
        }
    }
    ctx->pc = 0x40C698u;
label_40c698:
    // 0x40c698: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40c698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40c69c:
    // 0x40c69c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40c69cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40c6a0:
    // 0x40c6a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40c6a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40c6a4:
    // 0x40c6a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40c6a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40c6a8:
    // 0x40c6a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40c6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40c6ac:
    // 0x40c6ac: 0x3e00008  jr          $ra
label_40c6b0:
    if (ctx->pc == 0x40C6B0u) {
        ctx->pc = 0x40C6B0u;
            // 0x40c6b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40C6B4u;
        goto label_40c6b4;
    }
    ctx->pc = 0x40C6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C6ACu;
            // 0x40c6b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40C6B4u;
label_40c6b4:
    // 0x40c6b4: 0x0  nop
    ctx->pc = 0x40c6b4u;
    // NOP
label_40c6b8:
    // 0x40c6b8: 0x0  nop
    ctx->pc = 0x40c6b8u;
    // NOP
label_40c6bc:
    // 0x40c6bc: 0x0  nop
    ctx->pc = 0x40c6bcu;
    // NOP
label_40c6c0:
    // 0x40c6c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x40c6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_40c6c4:
    // 0x40c6c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40c6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40c6c8:
    // 0x40c6c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40c6cc:
    // 0x40c6cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40c6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40c6d0:
    // 0x40c6d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40c6d4:
    // 0x40c6d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40c6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40c6d8:
    // 0x40c6d8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x40c6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_40c6dc:
    // 0x40c6dc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_40c6e0:
    if (ctx->pc == 0x40C6E0u) {
        ctx->pc = 0x40C6E0u;
            // 0x40c6e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C6E4u;
        goto label_40c6e4;
    }
    ctx->pc = 0x40C6DCu;
    {
        const bool branch_taken_0x40c6dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C6DCu;
            // 0x40c6e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c6dc) {
            ctx->pc = 0x40C718u;
            goto label_40c718;
        }
    }
    ctx->pc = 0x40C6E4u;
label_40c6e4:
    // 0x40c6e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x40c6e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c6e8:
    // 0x40c6e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x40c6e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c6ec:
    // 0x40c6ec: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x40c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_40c6f0:
    // 0x40c6f0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x40c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_40c6f4:
    // 0x40c6f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x40c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_40c6f8:
    // 0x40c6f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40c6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40c6fc:
    // 0x40c6fc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x40c6fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_40c700:
    // 0x40c700: 0x320f809  jalr        $t9
label_40c704:
    if (ctx->pc == 0x40C704u) {
        ctx->pc = 0x40C708u;
        goto label_40c708;
    }
    ctx->pc = 0x40C700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40C708u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x40C708u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40C708u; }
            if (ctx->pc != 0x40C708u) { return; }
        }
        }
    }
    ctx->pc = 0x40C708u;
label_40c708:
    // 0x40c708: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x40c708u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_40c70c:
    // 0x40c70c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x40c70cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_40c710:
    // 0x40c710: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_40c714:
    if (ctx->pc == 0x40C714u) {
        ctx->pc = 0x40C714u;
            // 0x40c714: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x40C718u;
        goto label_40c718;
    }
    ctx->pc = 0x40C710u;
    {
        const bool branch_taken_0x40c710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40C714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C710u;
            // 0x40c714: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c710) {
            ctx->pc = 0x40C6ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40c6ec;
        }
    }
    ctx->pc = 0x40C718u;
label_40c718:
    // 0x40c718: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40c718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40c71c:
    // 0x40c71c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40c71cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40c720:
    // 0x40c720: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40c720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40c724:
    // 0x40c724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40c724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40c728:
    // 0x40c728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40c728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40c72c:
    // 0x40c72c: 0x3e00008  jr          $ra
label_40c730:
    if (ctx->pc == 0x40C730u) {
        ctx->pc = 0x40C730u;
            // 0x40c730: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40C734u;
        goto label_40c734;
    }
    ctx->pc = 0x40C72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C72Cu;
            // 0x40c730: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40C734u;
label_40c734:
    // 0x40c734: 0x0  nop
    ctx->pc = 0x40c734u;
    // NOP
label_40c738:
    // 0x40c738: 0x0  nop
    ctx->pc = 0x40c738u;
    // NOP
label_40c73c:
    // 0x40c73c: 0x0  nop
    ctx->pc = 0x40c73cu;
    // NOP
label_40c740:
    // 0x40c740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_40c744:
    // 0x40c744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40c744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40c748:
    // 0x40c748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40c748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40c74c:
    // 0x40c74c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40c74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40c750:
    // 0x40c750: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x40c750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_40c754:
    // 0x40c754: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_40c758:
    if (ctx->pc == 0x40C758u) {
        ctx->pc = 0x40C758u;
            // 0x40c758: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C75Cu;
        goto label_40c75c;
    }
    ctx->pc = 0x40C754u;
    {
        const bool branch_taken_0x40c754 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x40C758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C754u;
            // 0x40c758: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c754) {
            ctx->pc = 0x40C780u;
            goto label_40c780;
        }
    }
    ctx->pc = 0x40C75Cu;
label_40c75c:
    // 0x40c75c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_40c760:
    if (ctx->pc == 0x40C760u) {
        ctx->pc = 0x40C760u;
            // 0x40c760: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x40C764u;
        goto label_40c764;
    }
    ctx->pc = 0x40C75Cu;
    {
        const bool branch_taken_0x40c75c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c75c) {
            ctx->pc = 0x40C760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40C75Cu;
            // 0x40c760: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40C76Cu;
            goto label_40c76c;
        }
    }
    ctx->pc = 0x40C764u;
label_40c764:
    // 0x40c764: 0x10000007  b           . + 4 + (0x7 << 2)
label_40c768:
    if (ctx->pc == 0x40C768u) {
        ctx->pc = 0x40C768u;
            // 0x40c768: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x40C76Cu;
        goto label_40c76c;
    }
    ctx->pc = 0x40C764u;
    {
        const bool branch_taken_0x40c764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C764u;
            // 0x40c768: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c764) {
            ctx->pc = 0x40C784u;
            goto label_40c784;
        }
    }
    ctx->pc = 0x40C76Cu;
label_40c76c:
    // 0x40c76c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x40c76cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_40c770:
    // 0x40c770: 0x320f809  jalr        $t9
label_40c774:
    if (ctx->pc == 0x40C774u) {
        ctx->pc = 0x40C778u;
        goto label_40c778;
    }
    ctx->pc = 0x40C770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40C778u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x40C778u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40C778u; }
            if (ctx->pc != 0x40C778u) { return; }
        }
        }
    }
    ctx->pc = 0x40C778u;
label_40c778:
    // 0x40c778: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40c778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40c77c:
    // 0x40c77c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x40c77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_40c780:
    // 0x40c780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40c780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40c784:
    // 0x40c784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40c784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40c788:
    // 0x40c788: 0x3e00008  jr          $ra
label_40c78c:
    if (ctx->pc == 0x40C78Cu) {
        ctx->pc = 0x40C78Cu;
            // 0x40c78c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x40C790u;
        goto label_40c790;
    }
    ctx->pc = 0x40C788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C788u;
            // 0x40c78c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40C790u;
label_40c790:
    // 0x40c790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_40c794:
    // 0x40c794: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x40c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_40c798:
    // 0x40c798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40c798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40c79c:
    // 0x40c79c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40c7a0:
    // 0x40c7a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x40c7a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40c7a4:
    // 0x40c7a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40c7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40c7a8:
    // 0x40c7a8: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x40c7a8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_40c7ac:
    // 0x40c7ac: 0x8ca30e34  lw          $v1, 0xE34($a1)
    ctx->pc = 0x40c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3636)));
label_40c7b0:
    // 0x40c7b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40c7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40c7b4:
    // 0x40c7b4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_40c7b8:
    if (ctx->pc == 0x40C7B8u) {
        ctx->pc = 0x40C7B8u;
            // 0x40c7b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C7BCu;
        goto label_40c7bc;
    }
    ctx->pc = 0x40C7B4u;
    {
        const bool branch_taken_0x40c7b4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x40C7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C7B4u;
            // 0x40c7b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c7b4) {
            ctx->pc = 0x40C7CCu;
            goto label_40c7cc;
        }
    }
    ctx->pc = 0x40C7BCu;
label_40c7bc:
    // 0x40c7bc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x40c7bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_40c7c0:
    // 0x40c7c0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_40c7c4:
    if (ctx->pc == 0x40C7C4u) {
        ctx->pc = 0x40C7C8u;
        goto label_40c7c8;
    }
    ctx->pc = 0x40C7C0u;
    {
        const bool branch_taken_0x40c7c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c7c0) {
            ctx->pc = 0x40C7CCu;
            goto label_40c7cc;
        }
    }
    ctx->pc = 0x40C7C8u;
label_40c7c8:
    // 0x40c7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40c7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40c7cc:
    // 0x40c7cc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_40c7d0:
    if (ctx->pc == 0x40C7D0u) {
        ctx->pc = 0x40C7D4u;
        goto label_40c7d4;
    }
    ctx->pc = 0x40C7CCu;
    {
        const bool branch_taken_0x40c7cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x40c7cc) {
            ctx->pc = 0x40C7E8u;
            goto label_40c7e8;
        }
    }
    ctx->pc = 0x40C7D4u;
label_40c7d4:
    // 0x40c7d4: 0xc075eb4  jal         func_1D7AD0
label_40c7d8:
    if (ctx->pc == 0x40C7D8u) {
        ctx->pc = 0x40C7D8u;
            // 0x40c7d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C7DCu;
        goto label_40c7dc;
    }
    ctx->pc = 0x40C7D4u;
    SET_GPR_U32(ctx, 31, 0x40C7DCu);
    ctx->pc = 0x40C7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C7D4u;
            // 0x40c7d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C7DCu; }
        if (ctx->pc != 0x40C7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C7DCu; }
        if (ctx->pc != 0x40C7DCu) { return; }
    }
    ctx->pc = 0x40C7DCu;
label_40c7dc:
    // 0x40c7dc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_40c7e0:
    if (ctx->pc == 0x40C7E0u) {
        ctx->pc = 0x40C7E4u;
        goto label_40c7e4;
    }
    ctx->pc = 0x40C7DCu;
    {
        const bool branch_taken_0x40c7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40c7dc) {
            ctx->pc = 0x40C7E8u;
            goto label_40c7e8;
        }
    }
    ctx->pc = 0x40C7E4u;
label_40c7e4:
    // 0x40c7e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x40c7e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c7e8:
    // 0x40c7e8: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_40c7ec:
    if (ctx->pc == 0x40C7ECu) {
        ctx->pc = 0x40C7ECu;
            // 0x40c7ec: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->pc = 0x40C7F0u;
        goto label_40c7f0;
    }
    ctx->pc = 0x40C7E8u;
    {
        const bool branch_taken_0x40c7e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x40c7e8) {
            ctx->pc = 0x40C7ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40C7E8u;
            // 0x40c7ec: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40C804u;
            goto label_40c804;
        }
    }
    ctx->pc = 0x40C7F0u;
label_40c7f0:
    // 0x40c7f0: 0x8e440e34  lw          $a0, 0xE34($s2)
    ctx->pc = 0x40c7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_40c7f4:
    // 0x40c7f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x40c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_40c7f8:
    // 0x40c7f8: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
label_40c7fc:
    if (ctx->pc == 0x40C7FCu) {
        ctx->pc = 0x40C7FCu;
            // 0x40c7fc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x40C800u;
        goto label_40c800;
    }
    ctx->pc = 0x40C7F8u;
    {
        const bool branch_taken_0x40c7f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x40c7f8) {
            ctx->pc = 0x40C7FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40C7F8u;
            // 0x40c7fc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40C814u;
            goto label_40c814;
        }
    }
    ctx->pc = 0x40C800u;
label_40c800:
    // 0x40c800: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x40c800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_40c804:
    // 0x40c804: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x40c804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_40c808:
    // 0x40c808: 0xc122d2c  jal         func_48B4B0
label_40c80c:
    if (ctx->pc == 0x40C80Cu) {
        ctx->pc = 0x40C80Cu;
            // 0x40c80c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C810u;
        goto label_40c810;
    }
    ctx->pc = 0x40C808u;
    SET_GPR_U32(ctx, 31, 0x40C810u);
    ctx->pc = 0x40C80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C808u;
            // 0x40c80c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C810u; }
        if (ctx->pc != 0x40C810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C810u; }
        if (ctx->pc != 0x40C810u) { return; }
    }
    ctx->pc = 0x40C810u;
label_40c810:
    // 0x40c810: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x40c810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_40c814:
    // 0x40c814: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40c814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40c818:
    // 0x40c818: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40c818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40c81c:
    // 0x40c81c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40c81cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40c820:
    // 0x40c820: 0x3e00008  jr          $ra
label_40c824:
    if (ctx->pc == 0x40C824u) {
        ctx->pc = 0x40C824u;
            // 0x40c824: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x40C828u;
        goto label_40c828;
    }
    ctx->pc = 0x40C820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C820u;
            // 0x40c824: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40C828u;
label_40c828:
    // 0x40c828: 0x0  nop
    ctx->pc = 0x40c828u;
    // NOP
label_40c82c:
    // 0x40c82c: 0x0  nop
    ctx->pc = 0x40c82cu;
    // NOP
label_40c830:
    // 0x40c830: 0x3e00008  jr          $ra
label_40c834:
    if (ctx->pc == 0x40C834u) {
        ctx->pc = 0x40C838u;
        goto label_40c838;
    }
    ctx->pc = 0x40C830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40C838u;
label_40c838:
    // 0x40c838: 0x0  nop
    ctx->pc = 0x40c838u;
    // NOP
label_40c83c:
    // 0x40c83c: 0x0  nop
    ctx->pc = 0x40c83cu;
    // NOP
label_40c840:
    // 0x40c840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_40c844:
    // 0x40c844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40c844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40c848:
    // 0x40c848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40c848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40c84c:
    // 0x40c84c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40c84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40c850:
    // 0x40c850: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x40c850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_40c854:
    // 0x40c854: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_40c858:
    if (ctx->pc == 0x40C858u) {
        ctx->pc = 0x40C858u;
            // 0x40c858: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x40C85Cu;
        goto label_40c85c;
    }
    ctx->pc = 0x40C854u;
    {
        const bool branch_taken_0x40c854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c854) {
            ctx->pc = 0x40C858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40C854u;
            // 0x40c858: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40C870u;
            goto label_40c870;
        }
    }
    ctx->pc = 0x40C85Cu;
label_40c85c:
    // 0x40c85c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40c85cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40c860:
    // 0x40c860: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x40c860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_40c864:
    // 0x40c864: 0x320f809  jalr        $t9
label_40c868:
    if (ctx->pc == 0x40C868u) {
        ctx->pc = 0x40C868u;
            // 0x40c868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40C86Cu;
        goto label_40c86c;
    }
    ctx->pc = 0x40C864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40C86Cu);
        ctx->pc = 0x40C868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C864u;
            // 0x40c868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40C86Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40C86Cu; }
            if (ctx->pc != 0x40C86Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40C86Cu;
label_40c86c:
    // 0x40c86c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x40c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_40c870:
    // 0x40c870: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x40c870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_40c874:
    // 0x40c874: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_40c878:
    if (ctx->pc == 0x40C878u) {
        ctx->pc = 0x40C878u;
            // 0x40c878: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x40C87Cu;
        goto label_40c87c;
    }
    ctx->pc = 0x40C874u;
    {
        const bool branch_taken_0x40c874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c874) {
            ctx->pc = 0x40C878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40C874u;
            // 0x40c878: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40C890u;
            goto label_40c890;
        }
    }
    ctx->pc = 0x40C87Cu;
label_40c87c:
    // 0x40c87c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40c87cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40c880:
    // 0x40c880: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x40c880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_40c884:
    // 0x40c884: 0x320f809  jalr        $t9
label_40c888:
    if (ctx->pc == 0x40C888u) {
        ctx->pc = 0x40C888u;
            // 0x40c888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40C88Cu;
        goto label_40c88c;
    }
    ctx->pc = 0x40C884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40C88Cu);
        ctx->pc = 0x40C888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C884u;
            // 0x40c888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40C88Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40C88Cu; }
            if (ctx->pc != 0x40C88Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40C88Cu;
label_40c88c:
    // 0x40c88c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x40c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_40c890:
    // 0x40c890: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x40c890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_40c894:
    // 0x40c894: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_40c898:
    if (ctx->pc == 0x40C898u) {
        ctx->pc = 0x40C898u;
            // 0x40c898: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x40C89Cu;
        goto label_40c89c;
    }
    ctx->pc = 0x40C894u;
    {
        const bool branch_taken_0x40c894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c894) {
            ctx->pc = 0x40C898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40C894u;
            // 0x40c898: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40C8B0u;
            goto label_40c8b0;
        }
    }
    ctx->pc = 0x40C89Cu;
label_40c89c:
    // 0x40c89c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40c89cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40c8a0:
    // 0x40c8a0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x40c8a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_40c8a4:
    // 0x40c8a4: 0x320f809  jalr        $t9
label_40c8a8:
    if (ctx->pc == 0x40C8A8u) {
        ctx->pc = 0x40C8A8u;
            // 0x40c8a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40C8ACu;
        goto label_40c8ac;
    }
    ctx->pc = 0x40C8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40C8ACu);
        ctx->pc = 0x40C8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C8A4u;
            // 0x40c8a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40C8ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40C8ACu; }
            if (ctx->pc != 0x40C8ACu) { return; }
        }
        }
    }
    ctx->pc = 0x40C8ACu;
label_40c8ac:
    // 0x40c8ac: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x40c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_40c8b0:
    // 0x40c8b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40c8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40c8b4:
    // 0x40c8b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40c8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40c8b8:
    // 0x40c8b8: 0x3e00008  jr          $ra
label_40c8bc:
    if (ctx->pc == 0x40C8BCu) {
        ctx->pc = 0x40C8BCu;
            // 0x40c8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x40C8C0u;
        goto label_40c8c0;
    }
    ctx->pc = 0x40C8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C8B8u;
            // 0x40c8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40C8C0u;
label_40c8c0:
    // 0x40c8c0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x40c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_40c8c4:
    // 0x40c8c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40c8c8:
    // 0x40c8c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40c8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40c8cc:
    // 0x40c8cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40c8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40c8d0:
    // 0x40c8d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40c8d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40c8d4:
    // 0x40c8d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40c8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40c8d8:
    // 0x40c8d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x40c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_40c8dc:
    // 0x40c8dc: 0xc0892d0  jal         func_224B40
label_40c8e0:
    if (ctx->pc == 0x40C8E0u) {
        ctx->pc = 0x40C8E0u;
            // 0x40c8e0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x40C8E4u;
        goto label_40c8e4;
    }
    ctx->pc = 0x40C8DCu;
    SET_GPR_U32(ctx, 31, 0x40C8E4u);
    ctx->pc = 0x40C8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C8DCu;
            // 0x40c8e0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C8E4u; }
        if (ctx->pc != 0x40C8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C8E4u; }
        if (ctx->pc != 0x40C8E4u) { return; }
    }
    ctx->pc = 0x40C8E4u;
label_40c8e4:
    // 0x40c8e4: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x40c8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_40c8e8:
    // 0x40c8e8: 0xc049514  jal         func_125450
label_40c8ec:
    if (ctx->pc == 0x40C8ECu) {
        ctx->pc = 0x40C8ECu;
            // 0x40c8ec: 0x26500030  addiu       $s0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x40C8F0u;
        goto label_40c8f0;
    }
    ctx->pc = 0x40C8E8u;
    SET_GPR_U32(ctx, 31, 0x40C8F0u);
    ctx->pc = 0x40C8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C8E8u;
            // 0x40c8ec: 0x26500030  addiu       $s0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C8F0u; }
        if (ctx->pc != 0x40C8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C8F0u; }
        if (ctx->pc != 0x40C8F0u) { return; }
    }
    ctx->pc = 0x40C8F0u;
label_40c8f0:
    // 0x40c8f0: 0xc0474b6  jal         func_11D2D8
label_40c8f4:
    if (ctx->pc == 0x40C8F4u) {
        ctx->pc = 0x40C8F4u;
            // 0x40c8f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C8F8u;
        goto label_40c8f8;
    }
    ctx->pc = 0x40C8F0u;
    SET_GPR_U32(ctx, 31, 0x40C8F8u);
    ctx->pc = 0x40C8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C8F0u;
            // 0x40c8f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C8F8u; }
        if (ctx->pc != 0x40C8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C8F8u; }
        if (ctx->pc != 0x40C8F8u) { return; }
    }
    ctx->pc = 0x40C8F8u;
label_40c8f8:
    // 0x40c8f8: 0xc0497dc  jal         func_125F70
label_40c8fc:
    if (ctx->pc == 0x40C8FCu) {
        ctx->pc = 0x40C8FCu;
            // 0x40c8fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C900u;
        goto label_40c900;
    }
    ctx->pc = 0x40C8F8u;
    SET_GPR_U32(ctx, 31, 0x40C900u);
    ctx->pc = 0x40C8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C8F8u;
            // 0x40c8fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C900u; }
        if (ctx->pc != 0x40C900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C900u; }
        if (ctx->pc != 0x40C900u) { return; }
    }
    ctx->pc = 0x40C900u;
label_40c900:
    // 0x40c900: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x40c900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_40c904:
    // 0x40c904: 0xc049514  jal         func_125450
label_40c908:
    if (ctx->pc == 0x40C908u) {
        ctx->pc = 0x40C908u;
            // 0x40c908: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x40C90Cu;
        goto label_40c90c;
    }
    ctx->pc = 0x40C904u;
    SET_GPR_U32(ctx, 31, 0x40C90Cu);
    ctx->pc = 0x40C908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C904u;
            // 0x40c908: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C90Cu; }
        if (ctx->pc != 0x40C90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C90Cu; }
        if (ctx->pc != 0x40C90Cu) { return; }
    }
    ctx->pc = 0x40C90Cu;
label_40c90c:
    // 0x40c90c: 0xc0474b6  jal         func_11D2D8
label_40c910:
    if (ctx->pc == 0x40C910u) {
        ctx->pc = 0x40C910u;
            // 0x40c910: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C914u;
        goto label_40c914;
    }
    ctx->pc = 0x40C90Cu;
    SET_GPR_U32(ctx, 31, 0x40C914u);
    ctx->pc = 0x40C910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C90Cu;
            // 0x40c910: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C914u; }
        if (ctx->pc != 0x40C914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C914u; }
        if (ctx->pc != 0x40C914u) { return; }
    }
    ctx->pc = 0x40C914u;
label_40c914:
    // 0x40c914: 0xc0497dc  jal         func_125F70
label_40c918:
    if (ctx->pc == 0x40C918u) {
        ctx->pc = 0x40C918u;
            // 0x40c918: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C91Cu;
        goto label_40c91c;
    }
    ctx->pc = 0x40C914u;
    SET_GPR_U32(ctx, 31, 0x40C91Cu);
    ctx->pc = 0x40C918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C914u;
            // 0x40c918: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C91Cu; }
        if (ctx->pc != 0x40C91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C91Cu; }
        if (ctx->pc != 0x40C91Cu) { return; }
    }
    ctx->pc = 0x40C91Cu;
label_40c91c:
    // 0x40c91c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x40c91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_40c920:
    // 0x40c920: 0xc049514  jal         func_125450
label_40c924:
    if (ctx->pc == 0x40C924u) {
        ctx->pc = 0x40C924u;
            // 0x40c924: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x40C928u;
        goto label_40c928;
    }
    ctx->pc = 0x40C920u;
    SET_GPR_U32(ctx, 31, 0x40C928u);
    ctx->pc = 0x40C924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C920u;
            // 0x40c924: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C928u; }
        if (ctx->pc != 0x40C928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C928u; }
        if (ctx->pc != 0x40C928u) { return; }
    }
    ctx->pc = 0x40C928u;
label_40c928:
    // 0x40c928: 0xc0474b6  jal         func_11D2D8
label_40c92c:
    if (ctx->pc == 0x40C92Cu) {
        ctx->pc = 0x40C92Cu;
            // 0x40c92c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C930u;
        goto label_40c930;
    }
    ctx->pc = 0x40C928u;
    SET_GPR_U32(ctx, 31, 0x40C930u);
    ctx->pc = 0x40C92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C928u;
            // 0x40c92c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C930u; }
        if (ctx->pc != 0x40C930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C930u; }
        if (ctx->pc != 0x40C930u) { return; }
    }
    ctx->pc = 0x40C930u;
label_40c930:
    // 0x40c930: 0xc0497dc  jal         func_125F70
label_40c934:
    if (ctx->pc == 0x40C934u) {
        ctx->pc = 0x40C934u;
            // 0x40c934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C938u;
        goto label_40c938;
    }
    ctx->pc = 0x40C930u;
    SET_GPR_U32(ctx, 31, 0x40C938u);
    ctx->pc = 0x40C934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C930u;
            // 0x40c934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C938u; }
        if (ctx->pc != 0x40C938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C938u; }
        if (ctx->pc != 0x40C938u) { return; }
    }
    ctx->pc = 0x40C938u;
label_40c938:
    // 0x40c938: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x40c938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_40c93c:
    // 0x40c93c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x40c93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40c940:
    // 0x40c940: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x40c940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40c944:
    // 0x40c944: 0x0  nop
    ctx->pc = 0x40c944u;
    // NOP
label_40c948:
    // 0x40c948: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x40c948u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40c94c:
    // 0x40c94c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_40c950:
    if (ctx->pc == 0x40C950u) {
        ctx->pc = 0x40C950u;
            // 0x40c950: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x40C954u;
        goto label_40c954;
    }
    ctx->pc = 0x40C94Cu;
    {
        const bool branch_taken_0x40c94c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40c94c) {
            ctx->pc = 0x40C950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40C94Cu;
            // 0x40c950: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40C960u;
            goto label_40c960;
        }
    }
    ctx->pc = 0x40C954u;
label_40c954:
    // 0x40c954: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x40c954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_40c958:
    // 0x40c958: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x40c958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_40c95c:
    // 0x40c95c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x40c95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40c960:
    // 0x40c960: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40c960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40c964:
    // 0x40c964: 0x0  nop
    ctx->pc = 0x40c964u;
    // NOP
label_40c968:
    // 0x40c968: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x40c968u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40c96c:
    // 0x40c96c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_40c970:
    if (ctx->pc == 0x40C970u) {
        ctx->pc = 0x40C970u;
            // 0x40c970: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x40C974u;
        goto label_40c974;
    }
    ctx->pc = 0x40C96Cu;
    {
        const bool branch_taken_0x40c96c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40c96c) {
            ctx->pc = 0x40C970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40C96Cu;
            // 0x40c970: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40C980u;
            goto label_40c980;
        }
    }
    ctx->pc = 0x40C974u;
label_40c974:
    // 0x40c974: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x40c974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_40c978:
    // 0x40c978: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x40c978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_40c97c:
    // 0x40c97c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x40c97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40c980:
    // 0x40c980: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40c980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40c984:
    // 0x40c984: 0x0  nop
    ctx->pc = 0x40c984u;
    // NOP
label_40c988:
    // 0x40c988: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x40c988u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40c98c:
    // 0x40c98c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_40c990:
    if (ctx->pc == 0x40C990u) {
        ctx->pc = 0x40C990u;
            // 0x40c990: 0xc6020008  lwc1        $f2, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x40C994u;
        goto label_40c994;
    }
    ctx->pc = 0x40C98Cu;
    {
        const bool branch_taken_0x40c98c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40c98c) {
            ctx->pc = 0x40C990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40C98Cu;
            // 0x40c990: 0xc6020008  lwc1        $f2, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40C9A0u;
            goto label_40c9a0;
        }
    }
    ctx->pc = 0x40C994u;
label_40c994:
    // 0x40c994: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x40c994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_40c998:
    // 0x40c998: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x40c998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_40c99c:
    // 0x40c99c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x40c99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40c9a0:
    // 0x40c9a0: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x40c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
label_40c9a4:
    // 0x40c9a4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x40c9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40c9a8:
    // 0x40c9a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40c9ac:
    // 0x40c9ac: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x40c9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40c9b0:
    // 0x40c9b0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x40c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_40c9b4:
    // 0x40c9b4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40c9b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_40c9b8:
    // 0x40c9b8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x40c9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_40c9bc:
    // 0x40c9bc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x40c9bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_40c9c0:
    // 0x40c9c0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x40c9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_40c9c4:
    // 0x40c9c4: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x40c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_40c9c8:
    // 0x40c9c8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x40c9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_40c9cc:
    // 0x40c9cc: 0x46011802  mul.s       $f0, $f3, $f1
    ctx->pc = 0x40c9ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_40c9d0:
    // 0x40c9d0: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x40c9d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_40c9d4:
    // 0x40c9d4: 0xc0a7a88  jal         func_29EA20
label_40c9d8:
    if (ctx->pc == 0x40C9D8u) {
        ctx->pc = 0x40C9D8u;
            // 0x40c9d8: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->pc = 0x40C9DCu;
        goto label_40c9dc;
    }
    ctx->pc = 0x40C9D4u;
    SET_GPR_U32(ctx, 31, 0x40C9DCu);
    ctx->pc = 0x40C9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C9D4u;
            // 0x40c9d8: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C9DCu; }
        if (ctx->pc != 0x40C9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C9DCu; }
        if (ctx->pc != 0x40C9DCu) { return; }
    }
    ctx->pc = 0x40C9DCu;
label_40c9dc:
    // 0x40c9dc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x40c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_40c9e0:
    // 0x40c9e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40c9e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40c9e4:
    // 0x40c9e4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_40c9e8:
    if (ctx->pc == 0x40C9E8u) {
        ctx->pc = 0x40C9E8u;
            // 0x40c9e8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x40C9ECu;
        goto label_40c9ec;
    }
    ctx->pc = 0x40C9E4u;
    {
        const bool branch_taken_0x40c9e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C9E4u;
            // 0x40c9e8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c9e4) {
            ctx->pc = 0x40CA04u;
            goto label_40ca04;
        }
    }
    ctx->pc = 0x40C9ECu;
label_40c9ec:
    // 0x40c9ec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x40c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_40c9f0:
    // 0x40c9f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40c9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40c9f4:
    // 0x40c9f4: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x40c9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_40c9f8:
    // 0x40c9f8: 0xc0804bc  jal         func_2012F0
label_40c9fc:
    if (ctx->pc == 0x40C9FCu) {
        ctx->pc = 0x40C9FCu;
            // 0x40c9fc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x40CA00u;
        goto label_40ca00;
    }
    ctx->pc = 0x40C9F8u;
    SET_GPR_U32(ctx, 31, 0x40CA00u);
    ctx->pc = 0x40C9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C9F8u;
            // 0x40c9fc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CA00u; }
        if (ctx->pc != 0x40CA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CA00u; }
        if (ctx->pc != 0x40CA00u) { return; }
    }
    ctx->pc = 0x40CA00u;
label_40ca00:
    // 0x40ca00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40ca00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40ca04:
    // 0x40ca04: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x40ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_40ca08:
    // 0x40ca08: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x40ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_40ca0c:
    // 0x40ca0c: 0xc0b6e68  jal         func_2DB9A0
label_40ca10:
    if (ctx->pc == 0x40CA10u) {
        ctx->pc = 0x40CA10u;
            // 0x40ca10: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x40CA14u;
        goto label_40ca14;
    }
    ctx->pc = 0x40CA0Cu;
    SET_GPR_U32(ctx, 31, 0x40CA14u);
    ctx->pc = 0x40CA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CA0Cu;
            // 0x40ca10: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CA14u; }
        if (ctx->pc != 0x40CA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CA14u; }
        if (ctx->pc != 0x40CA14u) { return; }
    }
    ctx->pc = 0x40CA14u;
label_40ca14:
    // 0x40ca14: 0xc0b6dac  jal         func_2DB6B0
label_40ca18:
    if (ctx->pc == 0x40CA18u) {
        ctx->pc = 0x40CA18u;
            // 0x40ca18: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x40CA1Cu;
        goto label_40ca1c;
    }
    ctx->pc = 0x40CA14u;
    SET_GPR_U32(ctx, 31, 0x40CA1Cu);
    ctx->pc = 0x40CA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CA14u;
            // 0x40ca18: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CA1Cu; }
        if (ctx->pc != 0x40CA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CA1Cu; }
        if (ctx->pc != 0x40CA1Cu) { return; }
    }
    ctx->pc = 0x40CA1Cu;
label_40ca1c:
    // 0x40ca1c: 0xc0cac94  jal         func_32B250
label_40ca20:
    if (ctx->pc == 0x40CA20u) {
        ctx->pc = 0x40CA20u;
            // 0x40ca20: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x40CA24u;
        goto label_40ca24;
    }
    ctx->pc = 0x40CA1Cu;
    SET_GPR_U32(ctx, 31, 0x40CA24u);
    ctx->pc = 0x40CA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CA1Cu;
            // 0x40ca20: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CA24u; }
        if (ctx->pc != 0x40CA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CA24u; }
        if (ctx->pc != 0x40CA24u) { return; }
    }
    ctx->pc = 0x40CA24u;
label_40ca24:
    // 0x40ca24: 0xc0cac84  jal         func_32B210
label_40ca28:
    if (ctx->pc == 0x40CA28u) {
        ctx->pc = 0x40CA28u;
            // 0x40ca28: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x40CA2Cu;
        goto label_40ca2c;
    }
    ctx->pc = 0x40CA24u;
    SET_GPR_U32(ctx, 31, 0x40CA2Cu);
    ctx->pc = 0x40CA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CA24u;
            // 0x40ca28: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CA2Cu; }
        if (ctx->pc != 0x40CA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CA2Cu; }
        if (ctx->pc != 0x40CA2Cu) { return; }
    }
    ctx->pc = 0x40CA2Cu;
label_40ca2c:
    // 0x40ca2c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x40ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_40ca30:
    // 0x40ca30: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x40ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_40ca34:
    // 0x40ca34: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x40ca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_40ca38:
    // 0x40ca38: 0xc0a5a68  jal         func_2969A0
label_40ca3c:
    if (ctx->pc == 0x40CA3Cu) {
        ctx->pc = 0x40CA3Cu;
            // 0x40ca3c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40CA40u;
        goto label_40ca40;
    }
    ctx->pc = 0x40CA38u;
    SET_GPR_U32(ctx, 31, 0x40CA40u);
    ctx->pc = 0x40CA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CA38u;
            // 0x40ca3c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CA40u; }
        if (ctx->pc != 0x40CA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CA40u; }
        if (ctx->pc != 0x40CA40u) { return; }
    }
    ctx->pc = 0x40CA40u;
label_40ca40:
    // 0x40ca40: 0xafb100b4  sw          $s1, 0xB4($sp)
    ctx->pc = 0x40ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 17));
label_40ca44:
    // 0x40ca44: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x40ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_40ca48:
    // 0x40ca48: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x40ca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40ca4c:
    // 0x40ca4c: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x40ca4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_40ca50:
    // 0x40ca50: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x40ca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40ca54:
    // 0x40ca54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40ca58:
    // 0x40ca58: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x40ca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40ca5c:
    // 0x40ca5c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x40ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_40ca60:
    // 0x40ca60: 0xc7aa0070  lwc1        $f10, 0x70($sp)
    ctx->pc = 0x40ca60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_40ca64:
    // 0x40ca64: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x40ca64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40ca68:
    // 0x40ca68: 0xc7a90074  lwc1        $f9, 0x74($sp)
    ctx->pc = 0x40ca68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_40ca6c:
    // 0x40ca6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x40ca6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40ca70:
    // 0x40ca70: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x40ca70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_40ca74:
    // 0x40ca74: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x40ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_40ca78:
    // 0x40ca78: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x40ca78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_40ca7c:
    // 0x40ca7c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x40ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_40ca80:
    // 0x40ca80: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x40ca80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_40ca84:
    // 0x40ca84: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x40ca84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_40ca88:
    // 0x40ca88: 0xc64e002c  lwc1        $f14, 0x2C($s2)
    ctx->pc = 0x40ca88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_40ca8c:
    // 0x40ca8c: 0xc64d0028  lwc1        $f13, 0x28($s2)
    ctx->pc = 0x40ca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_40ca90:
    // 0x40ca90: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x40ca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_40ca94:
    // 0x40ca94: 0xc64b0020  lwc1        $f11, 0x20($s2)
    ctx->pc = 0x40ca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_40ca98:
    // 0x40ca98: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x40ca98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40ca9c:
    // 0x40ca9c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x40ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40caa0:
    // 0x40caa0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x40caa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40caa4:
    // 0x40caa4: 0xa3a80162  sb          $t0, 0x162($sp)
    ctx->pc = 0x40caa4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 354), (uint8_t)GPR_U32(ctx, 8));
label_40caa8:
    // 0x40caa8: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x40caa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_40caac:
    // 0x40caac: 0xa3a70160  sb          $a3, 0x160($sp)
    ctx->pc = 0x40caacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 7));
label_40cab0:
    // 0x40cab0: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x40cab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_40cab4:
    // 0x40cab4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x40cab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_40cab8:
    // 0x40cab8: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x40cab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_40cabc:
    // 0x40cabc: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x40cabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40cac0:
    // 0x40cac0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x40cac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40cac4:
    // 0x40cac4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x40cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40cac8:
    // 0x40cac8: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x40cac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_40cacc:
    // 0x40cacc: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x40caccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_40cad0:
    // 0x40cad0: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x40cad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_40cad4:
    // 0x40cad4: 0xc7a80078  lwc1        $f8, 0x78($sp)
    ctx->pc = 0x40cad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_40cad8:
    // 0x40cad8: 0xc7a7007c  lwc1        $f7, 0x7C($sp)
    ctx->pc = 0x40cad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_40cadc:
    // 0x40cadc: 0xc7a60080  lwc1        $f6, 0x80($sp)
    ctx->pc = 0x40cadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_40cae0:
    // 0x40cae0: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x40cae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_40cae4:
    // 0x40cae4: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x40cae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_40cae8:
    // 0x40cae8: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x40cae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_40caec:
    // 0x40caec: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x40caecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40caf0:
    // 0x40caf0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x40caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40caf4:
    // 0x40caf4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x40caf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40caf8:
    // 0x40caf8: 0xe7ab00d0  swc1        $f11, 0xD0($sp)
    ctx->pc = 0x40caf8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_40cafc:
    // 0x40cafc: 0xe7ac00d4  swc1        $f12, 0xD4($sp)
    ctx->pc = 0x40cafcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_40cb00:
    // 0x40cb00: 0xe7ad00d8  swc1        $f13, 0xD8($sp)
    ctx->pc = 0x40cb00u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_40cb04:
    // 0x40cb04: 0xe7ae00dc  swc1        $f14, 0xDC($sp)
    ctx->pc = 0x40cb04u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_40cb08:
    // 0x40cb08: 0xe7aa0100  swc1        $f10, 0x100($sp)
    ctx->pc = 0x40cb08u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_40cb0c:
    // 0x40cb0c: 0xe7a90104  swc1        $f9, 0x104($sp)
    ctx->pc = 0x40cb0cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_40cb10:
    // 0x40cb10: 0xe7a80108  swc1        $f8, 0x108($sp)
    ctx->pc = 0x40cb10u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_40cb14:
    // 0x40cb14: 0xe7a7010c  swc1        $f7, 0x10C($sp)
    ctx->pc = 0x40cb14u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_40cb18:
    // 0x40cb18: 0xe7a60110  swc1        $f6, 0x110($sp)
    ctx->pc = 0x40cb18u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_40cb1c:
    // 0x40cb1c: 0xe7a50114  swc1        $f5, 0x114($sp)
    ctx->pc = 0x40cb1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_40cb20:
    // 0x40cb20: 0xe7a40118  swc1        $f4, 0x118($sp)
    ctx->pc = 0x40cb20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_40cb24:
    // 0x40cb24: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x40cb24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_40cb28:
    // 0x40cb28: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x40cb28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_40cb2c:
    // 0x40cb2c: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x40cb2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_40cb30:
    // 0x40cb30: 0xc0a7a88  jal         func_29EA20
label_40cb34:
    if (ctx->pc == 0x40CB34u) {
        ctx->pc = 0x40CB34u;
            // 0x40cb34: 0xe7a0013c  swc1        $f0, 0x13C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
        ctx->pc = 0x40CB38u;
        goto label_40cb38;
    }
    ctx->pc = 0x40CB30u;
    SET_GPR_U32(ctx, 31, 0x40CB38u);
    ctx->pc = 0x40CB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CB30u;
            // 0x40cb34: 0xe7a0013c  swc1        $f0, 0x13C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CB38u; }
        if (ctx->pc != 0x40CB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CB38u; }
        if (ctx->pc != 0x40CB38u) { return; }
    }
    ctx->pc = 0x40CB38u;
label_40cb38:
    // 0x40cb38: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x40cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_40cb3c:
    // 0x40cb3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40cb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40cb40:
    // 0x40cb40: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_40cb44:
    if (ctx->pc == 0x40CB44u) {
        ctx->pc = 0x40CB44u;
            // 0x40cb44: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x40CB48u;
        goto label_40cb48;
    }
    ctx->pc = 0x40CB40u;
    {
        const bool branch_taken_0x40cb40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40CB40u;
            // 0x40cb44: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cb40) {
            ctx->pc = 0x40CB90u;
            goto label_40cb90;
        }
    }
    ctx->pc = 0x40CB48u;
label_40cb48:
    // 0x40cb48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40cb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40cb4c:
    // 0x40cb4c: 0xc088ef4  jal         func_223BD0
label_40cb50:
    if (ctx->pc == 0x40CB50u) {
        ctx->pc = 0x40CB50u;
            // 0x40cb50: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x40CB54u;
        goto label_40cb54;
    }
    ctx->pc = 0x40CB4Cu;
    SET_GPR_U32(ctx, 31, 0x40CB54u);
    ctx->pc = 0x40CB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CB4Cu;
            // 0x40cb50: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CB54u; }
        if (ctx->pc != 0x40CB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CB54u; }
        if (ctx->pc != 0x40CB54u) { return; }
    }
    ctx->pc = 0x40CB54u;
label_40cb54:
    // 0x40cb54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x40cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_40cb58:
    // 0x40cb58: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x40cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_40cb5c:
    // 0x40cb5c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x40cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_40cb60:
    // 0x40cb60: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x40cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_40cb64:
    // 0x40cb64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x40cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_40cb68:
    // 0x40cb68: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x40cb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_40cb6c:
    // 0x40cb6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40cb70:
    // 0x40cb70: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40cb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40cb74:
    // 0x40cb74: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x40cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_40cb78:
    // 0x40cb78: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x40cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_40cb7c:
    // 0x40cb7c: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x40cb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_40cb80:
    // 0x40cb80: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x40cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_40cb84:
    // 0x40cb84: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x40cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_40cb88:
    // 0x40cb88: 0xc088b38  jal         func_222CE0
label_40cb8c:
    if (ctx->pc == 0x40CB8Cu) {
        ctx->pc = 0x40CB8Cu;
            // 0x40cb8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CB90u;
        goto label_40cb90;
    }
    ctx->pc = 0x40CB88u;
    SET_GPR_U32(ctx, 31, 0x40CB90u);
    ctx->pc = 0x40CB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CB88u;
            // 0x40cb8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CB90u; }
        if (ctx->pc != 0x40CB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CB90u; }
        if (ctx->pc != 0x40CB90u) { return; }
    }
    ctx->pc = 0x40CB90u;
label_40cb90:
    // 0x40cb90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40cb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40cb94:
    // 0x40cb94: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x40cb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_40cb98:
    // 0x40cb98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x40cb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40cb9c:
    // 0x40cb9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40cb9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40cba0:
    // 0x40cba0: 0xc08914c  jal         func_224530
label_40cba4:
    if (ctx->pc == 0x40CBA4u) {
        ctx->pc = 0x40CBA4u;
            // 0x40cba4: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x40CBA8u;
        goto label_40cba8;
    }
    ctx->pc = 0x40CBA0u;
    SET_GPR_U32(ctx, 31, 0x40CBA8u);
    ctx->pc = 0x40CBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CBA0u;
            // 0x40cba4: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CBA8u; }
        if (ctx->pc != 0x40CBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CBA8u; }
        if (ctx->pc != 0x40CBA8u) { return; }
    }
    ctx->pc = 0x40CBA8u;
label_40cba8:
    // 0x40cba8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40cbac:
    // 0x40cbac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40cbacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40cbb0:
    // 0x40cbb0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x40cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_40cbb4:
    // 0x40cbb4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x40cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40cbb8:
    // 0x40cbb8: 0xc08c164  jal         func_230590
label_40cbbc:
    if (ctx->pc == 0x40CBBCu) {
        ctx->pc = 0x40CBBCu;
            // 0x40cbbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40CBC0u;
        goto label_40cbc0;
    }
    ctx->pc = 0x40CBB8u;
    SET_GPR_U32(ctx, 31, 0x40CBC0u);
    ctx->pc = 0x40CBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CBB8u;
            // 0x40cbbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CBC0u; }
        if (ctx->pc != 0x40CBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CBC0u; }
        if (ctx->pc != 0x40CBC0u) { return; }
    }
    ctx->pc = 0x40CBC0u;
label_40cbc0:
    // 0x40cbc0: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x40cbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
label_40cbc4:
    // 0x40cbc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40cbc8:
    // 0x40cbc8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x40cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_40cbcc:
    // 0x40cbcc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x40cbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_40cbd0:
    // 0x40cbd0: 0xc0a7a88  jal         func_29EA20
label_40cbd4:
    if (ctx->pc == 0x40CBD4u) {
        ctx->pc = 0x40CBD4u;
            // 0x40cbd4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x40CBD8u;
        goto label_40cbd8;
    }
    ctx->pc = 0x40CBD0u;
    SET_GPR_U32(ctx, 31, 0x40CBD8u);
    ctx->pc = 0x40CBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CBD0u;
            // 0x40cbd4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CBD8u; }
        if (ctx->pc != 0x40CBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CBD8u; }
        if (ctx->pc != 0x40CBD8u) { return; }
    }
    ctx->pc = 0x40CBD8u;
label_40cbd8:
    // 0x40cbd8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x40cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_40cbdc:
    // 0x40cbdc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x40cbdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40cbe0:
    // 0x40cbe0: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_40cbe4:
    if (ctx->pc == 0x40CBE4u) {
        ctx->pc = 0x40CBE4u;
            // 0x40cbe4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x40CBE8u;
        goto label_40cbe8;
    }
    ctx->pc = 0x40CBE0u;
    {
        const bool branch_taken_0x40cbe0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40CBE0u;
            // 0x40cbe4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cbe0) {
            ctx->pc = 0x40CC04u;
            goto label_40cc04;
        }
    }
    ctx->pc = 0x40CBE8u;
label_40cbe8:
    // 0x40cbe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40cbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40cbec:
    // 0x40cbec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40cbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40cbf0:
    // 0x40cbf0: 0xc0869d0  jal         func_21A740
label_40cbf4:
    if (ctx->pc == 0x40CBF4u) {
        ctx->pc = 0x40CBF4u;
            // 0x40cbf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CBF8u;
        goto label_40cbf8;
    }
    ctx->pc = 0x40CBF0u;
    SET_GPR_U32(ctx, 31, 0x40CBF8u);
    ctx->pc = 0x40CBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CBF0u;
            // 0x40cbf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CBF8u; }
        if (ctx->pc != 0x40CBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CBF8u; }
        if (ctx->pc != 0x40CBF8u) { return; }
    }
    ctx->pc = 0x40CBF8u;
label_40cbf8:
    // 0x40cbf8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x40cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_40cbfc:
    // 0x40cbfc: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x40cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_40cc00:
    // 0x40cc00: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x40cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_40cc04:
    // 0x40cc04: 0xae130210  sw          $s3, 0x210($s0)
    ctx->pc = 0x40cc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 19));
label_40cc08:
    // 0x40cc08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40cc0c:
    // 0x40cc0c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x40cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_40cc10:
    // 0x40cc10: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x40cc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40cc14:
    // 0x40cc14: 0xc08c650  jal         func_231940
label_40cc18:
    if (ctx->pc == 0x40CC18u) {
        ctx->pc = 0x40CC18u;
            // 0x40cc18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CC1Cu;
        goto label_40cc1c;
    }
    ctx->pc = 0x40CC14u;
    SET_GPR_U32(ctx, 31, 0x40CC1Cu);
    ctx->pc = 0x40CC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CC14u;
            // 0x40cc18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CC1Cu; }
        if (ctx->pc != 0x40CC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CC1Cu; }
        if (ctx->pc != 0x40CC1Cu) { return; }
    }
    ctx->pc = 0x40CC1Cu;
label_40cc1c:
    // 0x40cc1c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x40cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_40cc20:
    // 0x40cc20: 0xc040180  jal         func_100600
label_40cc24:
    if (ctx->pc == 0x40CC24u) {
        ctx->pc = 0x40CC24u;
            // 0x40cc24: 0xae5100d4  sw          $s1, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 17));
        ctx->pc = 0x40CC28u;
        goto label_40cc28;
    }
    ctx->pc = 0x40CC20u;
    SET_GPR_U32(ctx, 31, 0x40CC28u);
    ctx->pc = 0x40CC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CC20u;
            // 0x40cc24: 0xae5100d4  sw          $s1, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CC28u; }
        if (ctx->pc != 0x40CC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CC28u; }
        if (ctx->pc != 0x40CC28u) { return; }
    }
    ctx->pc = 0x40CC28u;
label_40cc28:
    // 0x40cc28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40cc28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40cc2c:
    // 0x40cc2c: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_40cc30:
    if (ctx->pc == 0x40CC30u) {
        ctx->pc = 0x40CC30u;
            // 0x40cc30: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x40CC34u;
        goto label_40cc34;
    }
    ctx->pc = 0x40CC2Cu;
    {
        const bool branch_taken_0x40cc2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x40cc2c) {
            ctx->pc = 0x40CC30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40CC2Cu;
            // 0x40cc30: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40CC6Cu;
            goto label_40cc6c;
        }
    }
    ctx->pc = 0x40CC34u;
label_40cc34:
    // 0x40cc34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x40cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_40cc38:
    // 0x40cc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40cc3c:
    // 0x40cc3c: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x40cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_40cc40:
    // 0x40cc40: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x40cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_40cc44:
    // 0x40cc44: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40cc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40cc48:
    // 0x40cc48: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x40cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_40cc4c:
    // 0x40cc4c: 0xc040138  jal         func_1004E0
label_40cc50:
    if (ctx->pc == 0x40CC50u) {
        ctx->pc = 0x40CC50u;
            // 0x40cc50: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x40CC54u;
        goto label_40cc54;
    }
    ctx->pc = 0x40CC4Cu;
    SET_GPR_U32(ctx, 31, 0x40CC54u);
    ctx->pc = 0x40CC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CC4Cu;
            // 0x40cc50: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CC54u; }
        if (ctx->pc != 0x40CC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CC54u; }
        if (ctx->pc != 0x40CC54u) { return; }
    }
    ctx->pc = 0x40CC54u;
label_40cc54:
    // 0x40cc54: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x40cc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_40cc58:
    // 0x40cc58: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x40cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_40cc5c:
    // 0x40cc5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40cc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40cc60:
    // 0x40cc60: 0xc04a576  jal         func_1295D8
label_40cc64:
    if (ctx->pc == 0x40CC64u) {
        ctx->pc = 0x40CC64u;
            // 0x40cc64: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x40CC68u;
        goto label_40cc68;
    }
    ctx->pc = 0x40CC60u;
    SET_GPR_U32(ctx, 31, 0x40CC68u);
    ctx->pc = 0x40CC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CC60u;
            // 0x40cc64: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CC68u; }
        if (ctx->pc != 0x40CC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CC68u; }
        if (ctx->pc != 0x40CC68u) { return; }
    }
    ctx->pc = 0x40CC68u;
label_40cc68:
    // 0x40cc68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x40cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_40cc6c:
    // 0x40cc6c: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x40cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_40cc70:
    // 0x40cc70: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x40cc70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40cc74:
    // 0x40cc74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40cc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40cc78:
    // 0x40cc78: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x40cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
label_40cc7c:
    // 0x40cc7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40cc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40cc80:
    // 0x40cc80: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x40cc80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40cc84:
    // 0x40cc84: 0x344611ae  ori         $a2, $v0, 0x11AE
    ctx->pc = 0x40cc84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4526);
label_40cc88:
    // 0x40cc88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40cc88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40cc8c:
    // 0x40cc8c: 0xc122cd8  jal         func_48B360
label_40cc90:
    if (ctx->pc == 0x40CC90u) {
        ctx->pc = 0x40CC90u;
            // 0x40cc90: 0xae5000d8  sw          $s0, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 16));
        ctx->pc = 0x40CC94u;
        goto label_40cc94;
    }
    ctx->pc = 0x40CC8Cu;
    SET_GPR_U32(ctx, 31, 0x40CC94u);
    ctx->pc = 0x40CC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CC8Cu;
            // 0x40cc90: 0xae5000d8  sw          $s0, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CC94u; }
        if (ctx->pc != 0x40CC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CC94u; }
        if (ctx->pc != 0x40CC94u) { return; }
    }
    ctx->pc = 0x40CC94u;
label_40cc94:
    // 0x40cc94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x40cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_40cc98:
    // 0x40cc98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x40cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40cc9c:
    // 0x40cc9c: 0xa2430064  sb          $v1, 0x64($s2)
    ctx->pc = 0x40cc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 3));
label_40cca0:
    // 0x40cca0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x40cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_40cca4:
    // 0x40cca4: 0xa2440065  sb          $a0, 0x65($s2)
    ctx->pc = 0x40cca4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 4));
label_40cca8:
    // 0x40cca8: 0xa2430068  sb          $v1, 0x68($s2)
    ctx->pc = 0x40cca8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 3));
label_40ccac:
    // 0x40ccac: 0xa2440069  sb          $a0, 0x69($s2)
    ctx->pc = 0x40ccacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 4));
label_40ccb0:
    // 0x40ccb0: 0xa243006a  sb          $v1, 0x6A($s2)
    ctx->pc = 0x40ccb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 3));
label_40ccb4:
    // 0x40ccb4: 0xa243006b  sb          $v1, 0x6B($s2)
    ctx->pc = 0x40ccb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 3));
label_40ccb8:
    // 0x40ccb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40ccb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40ccbc:
    // 0x40ccbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40ccbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40ccc0:
    // 0x40ccc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40ccc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40ccc4:
    // 0x40ccc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40ccc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40ccc8:
    // 0x40ccc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40ccc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40cccc:
    // 0x40cccc: 0x3e00008  jr          $ra
label_40ccd0:
    if (ctx->pc == 0x40CCD0u) {
        ctx->pc = 0x40CCD0u;
            // 0x40ccd0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x40CCD4u;
        goto label_40ccd4;
    }
    ctx->pc = 0x40CCCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40CCCCu;
            // 0x40ccd0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40CCD4u;
label_40ccd4:
    // 0x40ccd4: 0x0  nop
    ctx->pc = 0x40ccd4u;
    // NOP
label_40ccd8:
    // 0x40ccd8: 0x0  nop
    ctx->pc = 0x40ccd8u;
    // NOP
label_40ccdc:
    // 0x40ccdc: 0x0  nop
    ctx->pc = 0x40ccdcu;
    // NOP
label_40cce0:
    // 0x40cce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40cce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_40cce4:
    // 0x40cce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40cce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40cce8:
    // 0x40cce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40cce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40ccec:
    // 0x40ccec: 0xc0e3580  jal         func_38D600
label_40ccf0:
    if (ctx->pc == 0x40CCF0u) {
        ctx->pc = 0x40CCF0u;
            // 0x40ccf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CCF4u;
        goto label_40ccf4;
    }
    ctx->pc = 0x40CCECu;
    SET_GPR_U32(ctx, 31, 0x40CCF4u);
    ctx->pc = 0x40CCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CCECu;
            // 0x40ccf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CCF4u; }
        if (ctx->pc != 0x40CCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CCF4u; }
        if (ctx->pc != 0x40CCF4u) { return; }
    }
    ctx->pc = 0x40CCF4u;
label_40ccf4:
    // 0x40ccf4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x40ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40ccf8:
    // 0x40ccf8: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x40ccf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_40ccfc:
    // 0x40ccfc: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x40ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_40cd00:
    // 0x40cd00: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x40cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
label_40cd04:
    // 0x40cd04: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x40cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_40cd08:
    // 0x40cd08: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x40cd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_40cd0c:
    // 0x40cd0c: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x40cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_40cd10:
    // 0x40cd10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40cd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40cd14:
    // 0x40cd14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40cd14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40cd18:
    // 0x40cd18: 0x3e00008  jr          $ra
label_40cd1c:
    if (ctx->pc == 0x40CD1Cu) {
        ctx->pc = 0x40CD1Cu;
            // 0x40cd1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x40CD20u;
        goto label_40cd20;
    }
    ctx->pc = 0x40CD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40CD18u;
            // 0x40cd1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40CD20u;
label_40cd20:
    // 0x40cd20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40cd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_40cd24:
    // 0x40cd24: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x40cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_40cd28:
    // 0x40cd28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40cd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40cd2c:
    // 0x40cd2c: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x40cd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_40cd30:
    // 0x40cd30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40cd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40cd34:
    // 0x40cd34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40cd38:
    // 0x40cd38: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x40cd38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_40cd3c:
    // 0x40cd3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40cd3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40cd40:
    // 0x40cd40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40cd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40cd44:
    // 0x40cd44: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x40cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_40cd48:
    // 0x40cd48: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x40cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_40cd4c:
    // 0x40cd4c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x40cd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40cd50:
    // 0x40cd50: 0xc08bff0  jal         func_22FFC0
label_40cd54:
    if (ctx->pc == 0x40CD54u) {
        ctx->pc = 0x40CD54u;
            // 0x40cd54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CD58u;
        goto label_40cd58;
    }
    ctx->pc = 0x40CD50u;
    SET_GPR_U32(ctx, 31, 0x40CD58u);
    ctx->pc = 0x40CD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CD50u;
            // 0x40cd54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CD58u; }
        if (ctx->pc != 0x40CD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CD58u; }
        if (ctx->pc != 0x40CD58u) { return; }
    }
    ctx->pc = 0x40CD58u;
label_40cd58:
    // 0x40cd58: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x40cd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_40cd5c:
    // 0x40cd5c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x40cd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_40cd60:
    // 0x40cd60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x40cd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40cd64:
    // 0x40cd64: 0xc08914c  jal         func_224530
label_40cd68:
    if (ctx->pc == 0x40CD68u) {
        ctx->pc = 0x40CD68u;
            // 0x40cd68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CD6Cu;
        goto label_40cd6c;
    }
    ctx->pc = 0x40CD64u;
    SET_GPR_U32(ctx, 31, 0x40CD6Cu);
    ctx->pc = 0x40CD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CD64u;
            // 0x40cd68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CD6Cu; }
        if (ctx->pc != 0x40CD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CD6Cu; }
        if (ctx->pc != 0x40CD6Cu) { return; }
    }
    ctx->pc = 0x40CD6Cu;
label_40cd6c:
    // 0x40cd6c: 0xc0e393c  jal         func_38E4F0
label_40cd70:
    if (ctx->pc == 0x40CD70u) {
        ctx->pc = 0x40CD70u;
            // 0x40cd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CD74u;
        goto label_40cd74;
    }
    ctx->pc = 0x40CD6Cu;
    SET_GPR_U32(ctx, 31, 0x40CD74u);
    ctx->pc = 0x40CD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CD6Cu;
            // 0x40cd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CD74u; }
        if (ctx->pc != 0x40CD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CD74u; }
        if (ctx->pc != 0x40CD74u) { return; }
    }
    ctx->pc = 0x40CD74u;
label_40cd74:
    // 0x40cd74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40cd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40cd78:
    // 0x40cd78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40cd78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40cd7c:
    // 0x40cd7c: 0x3e00008  jr          $ra
label_40cd80:
    if (ctx->pc == 0x40CD80u) {
        ctx->pc = 0x40CD80u;
            // 0x40cd80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x40CD84u;
        goto label_40cd84;
    }
    ctx->pc = 0x40CD7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40CD7Cu;
            // 0x40cd80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40CD84u;
label_40cd84:
    // 0x40cd84: 0x0  nop
    ctx->pc = 0x40cd84u;
    // NOP
label_40cd88:
    // 0x40cd88: 0x0  nop
    ctx->pc = 0x40cd88u;
    // NOP
label_40cd8c:
    // 0x40cd8c: 0x0  nop
    ctx->pc = 0x40cd8cu;
    // NOP
label_40cd90:
    // 0x40cd90: 0x3e00008  jr          $ra
label_40cd94:
    if (ctx->pc == 0x40CD94u) {
        ctx->pc = 0x40CD94u;
            // 0x40cd94: 0x24020822  addiu       $v0, $zero, 0x822 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2082));
        ctx->pc = 0x40CD98u;
        goto label_40cd98;
    }
    ctx->pc = 0x40CD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40CD90u;
            // 0x40cd94: 0x24020822  addiu       $v0, $zero, 0x822 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2082));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40CD98u;
label_40cd98:
    // 0x40cd98: 0x0  nop
    ctx->pc = 0x40cd98u;
    // NOP
label_40cd9c:
    // 0x40cd9c: 0x0  nop
    ctx->pc = 0x40cd9cu;
    // NOP
label_40cda0:
    // 0x40cda0: 0x80b2388  j           func_2C8E20
label_40cda4:
    if (ctx->pc == 0x40CDA4u) {
        ctx->pc = 0x40CDA4u;
            // 0x40cda4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x40CDA8u;
        goto label_40cda8;
    }
    ctx->pc = 0x40CDA0u;
    ctx->pc = 0x40CDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CDA0u;
            // 0x40cda4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8E20u;
    {
        auto targetFn = runtime->lookupFunction(0x2C8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x40CDA8u;
label_40cda8:
    // 0x40cda8: 0x0  nop
    ctx->pc = 0x40cda8u;
    // NOP
label_40cdac:
    // 0x40cdac: 0x0  nop
    ctx->pc = 0x40cdacu;
    // NOP
label_40cdb0:
    // 0x40cdb0: 0x8102ff4  j           func_40BFD0
label_40cdb4:
    if (ctx->pc == 0x40CDB4u) {
        ctx->pc = 0x40CDB4u;
            // 0x40cdb4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x40CDB8u;
        goto label_40cdb8;
    }
    ctx->pc = 0x40CDB0u;
    ctx->pc = 0x40CDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CDB0u;
            // 0x40cdb4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40BFD0u;
    {
        auto targetFn = runtime->lookupFunction(0x40BFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x40CDB8u;
label_40cdb8:
    // 0x40cdb8: 0x0  nop
    ctx->pc = 0x40cdb8u;
    // NOP
label_40cdbc:
    // 0x40cdbc: 0x0  nop
    ctx->pc = 0x40cdbcu;
    // NOP
label_40cdc0:
    // 0x40cdc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40cdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_40cdc4:
    // 0x40cdc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x40cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_40cdc8:
    // 0x40cdc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40cdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40cdcc:
    // 0x40cdcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40cdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40cdd0:
    // 0x40cdd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40cdd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40cdd4:
    // 0x40cdd4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_40cdd8:
    if (ctx->pc == 0x40CDD8u) {
        ctx->pc = 0x40CDD8u;
            // 0x40cdd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CDDCu;
        goto label_40cddc;
    }
    ctx->pc = 0x40CDD4u;
    {
        const bool branch_taken_0x40cdd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40CDD4u;
            // 0x40cdd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cdd4) {
            ctx->pc = 0x40CE30u;
            goto label_40ce30;
        }
    }
    ctx->pc = 0x40CDDCu;
label_40cddc:
    // 0x40cddc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_40cde0:
    // 0x40cde0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_40cde4:
    // 0x40cde4: 0x2463aca0  addiu       $v1, $v1, -0x5360
    ctx->pc = 0x40cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945952));
label_40cde8:
    // 0x40cde8: 0x2442acd8  addiu       $v0, $v0, -0x5328
    ctx->pc = 0x40cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946008));
label_40cdec:
    // 0x40cdec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40cdf0:
    // 0x40cdf0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_40cdf4:
    if (ctx->pc == 0x40CDF4u) {
        ctx->pc = 0x40CDF4u;
            // 0x40cdf4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x40CDF8u;
        goto label_40cdf8;
    }
    ctx->pc = 0x40CDF0u;
    {
        const bool branch_taken_0x40cdf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40CDF0u;
            // 0x40cdf4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cdf0) {
            ctx->pc = 0x40CE18u;
            goto label_40ce18;
        }
    }
    ctx->pc = 0x40CDF8u;
label_40cdf8:
    // 0x40cdf8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_40cdfc:
    // 0x40cdfc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_40ce00:
    // 0x40ce00: 0x2463ae00  addiu       $v1, $v1, -0x5200
    ctx->pc = 0x40ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946304));
label_40ce04:
    // 0x40ce04: 0x2442ae38  addiu       $v0, $v0, -0x51C8
    ctx->pc = 0x40ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946360));
label_40ce08:
    // 0x40ce08: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40ce0c:
    // 0x40ce0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40ce0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ce10:
    // 0x40ce10: 0xc103394  jal         func_40CE50
label_40ce14:
    if (ctx->pc == 0x40CE14u) {
        ctx->pc = 0x40CE14u;
            // 0x40ce14: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x40CE18u;
        goto label_40ce18;
    }
    ctx->pc = 0x40CE10u;
    SET_GPR_U32(ctx, 31, 0x40CE18u);
    ctx->pc = 0x40CE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CE10u;
            // 0x40ce14: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40CE50u;
    if (runtime->hasFunction(0x40CE50u)) {
        auto targetFn = runtime->lookupFunction(0x40CE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CE18u; }
        if (ctx->pc != 0x40CE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040CE50_0x40ce50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CE18u; }
        if (ctx->pc != 0x40CE18u) { return; }
    }
    ctx->pc = 0x40CE18u;
label_40ce18:
    // 0x40ce18: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x40ce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_40ce1c:
    // 0x40ce1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x40ce1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_40ce20:
    // 0x40ce20: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_40ce24:
    if (ctx->pc == 0x40CE24u) {
        ctx->pc = 0x40CE24u;
            // 0x40ce24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CE28u;
        goto label_40ce28;
    }
    ctx->pc = 0x40CE20u;
    {
        const bool branch_taken_0x40ce20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x40ce20) {
            ctx->pc = 0x40CE24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40CE20u;
            // 0x40ce24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40CE34u;
            goto label_40ce34;
        }
    }
    ctx->pc = 0x40CE28u;
label_40ce28:
    // 0x40ce28: 0xc0400a8  jal         func_1002A0
label_40ce2c:
    if (ctx->pc == 0x40CE2Cu) {
        ctx->pc = 0x40CE2Cu;
            // 0x40ce2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CE30u;
        goto label_40ce30;
    }
    ctx->pc = 0x40CE28u;
    SET_GPR_U32(ctx, 31, 0x40CE30u);
    ctx->pc = 0x40CE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CE28u;
            // 0x40ce2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CE30u; }
        if (ctx->pc != 0x40CE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CE30u; }
        if (ctx->pc != 0x40CE30u) { return; }
    }
    ctx->pc = 0x40CE30u;
label_40ce30:
    // 0x40ce30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40ce30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40ce34:
    // 0x40ce34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x40ce34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_40ce38:
    // 0x40ce38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40ce38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40ce3c:
    // 0x40ce3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40ce3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40ce40:
    // 0x40ce40: 0x3e00008  jr          $ra
label_40ce44:
    if (ctx->pc == 0x40CE44u) {
        ctx->pc = 0x40CE44u;
            // 0x40ce44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x40CE48u;
        goto label_40ce48;
    }
    ctx->pc = 0x40CE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40CE40u;
            // 0x40ce44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40CE48u;
label_40ce48:
    // 0x40ce48: 0x0  nop
    ctx->pc = 0x40ce48u;
    // NOP
label_40ce4c:
    // 0x40ce4c: 0x0  nop
    ctx->pc = 0x40ce4cu;
    // NOP
}
