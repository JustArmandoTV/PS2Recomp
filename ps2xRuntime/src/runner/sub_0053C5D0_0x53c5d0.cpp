#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053C5D0
// Address: 0x53c5d0 - 0x53d170
void sub_0053C5D0_0x53c5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053C5D0_0x53c5d0");
#endif

    switch (ctx->pc) {
        case 0x53c5d0u: goto label_53c5d0;
        case 0x53c5d4u: goto label_53c5d4;
        case 0x53c5d8u: goto label_53c5d8;
        case 0x53c5dcu: goto label_53c5dc;
        case 0x53c5e0u: goto label_53c5e0;
        case 0x53c5e4u: goto label_53c5e4;
        case 0x53c5e8u: goto label_53c5e8;
        case 0x53c5ecu: goto label_53c5ec;
        case 0x53c5f0u: goto label_53c5f0;
        case 0x53c5f4u: goto label_53c5f4;
        case 0x53c5f8u: goto label_53c5f8;
        case 0x53c5fcu: goto label_53c5fc;
        case 0x53c600u: goto label_53c600;
        case 0x53c604u: goto label_53c604;
        case 0x53c608u: goto label_53c608;
        case 0x53c60cu: goto label_53c60c;
        case 0x53c610u: goto label_53c610;
        case 0x53c614u: goto label_53c614;
        case 0x53c618u: goto label_53c618;
        case 0x53c61cu: goto label_53c61c;
        case 0x53c620u: goto label_53c620;
        case 0x53c624u: goto label_53c624;
        case 0x53c628u: goto label_53c628;
        case 0x53c62cu: goto label_53c62c;
        case 0x53c630u: goto label_53c630;
        case 0x53c634u: goto label_53c634;
        case 0x53c638u: goto label_53c638;
        case 0x53c63cu: goto label_53c63c;
        case 0x53c640u: goto label_53c640;
        case 0x53c644u: goto label_53c644;
        case 0x53c648u: goto label_53c648;
        case 0x53c64cu: goto label_53c64c;
        case 0x53c650u: goto label_53c650;
        case 0x53c654u: goto label_53c654;
        case 0x53c658u: goto label_53c658;
        case 0x53c65cu: goto label_53c65c;
        case 0x53c660u: goto label_53c660;
        case 0x53c664u: goto label_53c664;
        case 0x53c668u: goto label_53c668;
        case 0x53c66cu: goto label_53c66c;
        case 0x53c670u: goto label_53c670;
        case 0x53c674u: goto label_53c674;
        case 0x53c678u: goto label_53c678;
        case 0x53c67cu: goto label_53c67c;
        case 0x53c680u: goto label_53c680;
        case 0x53c684u: goto label_53c684;
        case 0x53c688u: goto label_53c688;
        case 0x53c68cu: goto label_53c68c;
        case 0x53c690u: goto label_53c690;
        case 0x53c694u: goto label_53c694;
        case 0x53c698u: goto label_53c698;
        case 0x53c69cu: goto label_53c69c;
        case 0x53c6a0u: goto label_53c6a0;
        case 0x53c6a4u: goto label_53c6a4;
        case 0x53c6a8u: goto label_53c6a8;
        case 0x53c6acu: goto label_53c6ac;
        case 0x53c6b0u: goto label_53c6b0;
        case 0x53c6b4u: goto label_53c6b4;
        case 0x53c6b8u: goto label_53c6b8;
        case 0x53c6bcu: goto label_53c6bc;
        case 0x53c6c0u: goto label_53c6c0;
        case 0x53c6c4u: goto label_53c6c4;
        case 0x53c6c8u: goto label_53c6c8;
        case 0x53c6ccu: goto label_53c6cc;
        case 0x53c6d0u: goto label_53c6d0;
        case 0x53c6d4u: goto label_53c6d4;
        case 0x53c6d8u: goto label_53c6d8;
        case 0x53c6dcu: goto label_53c6dc;
        case 0x53c6e0u: goto label_53c6e0;
        case 0x53c6e4u: goto label_53c6e4;
        case 0x53c6e8u: goto label_53c6e8;
        case 0x53c6ecu: goto label_53c6ec;
        case 0x53c6f0u: goto label_53c6f0;
        case 0x53c6f4u: goto label_53c6f4;
        case 0x53c6f8u: goto label_53c6f8;
        case 0x53c6fcu: goto label_53c6fc;
        case 0x53c700u: goto label_53c700;
        case 0x53c704u: goto label_53c704;
        case 0x53c708u: goto label_53c708;
        case 0x53c70cu: goto label_53c70c;
        case 0x53c710u: goto label_53c710;
        case 0x53c714u: goto label_53c714;
        case 0x53c718u: goto label_53c718;
        case 0x53c71cu: goto label_53c71c;
        case 0x53c720u: goto label_53c720;
        case 0x53c724u: goto label_53c724;
        case 0x53c728u: goto label_53c728;
        case 0x53c72cu: goto label_53c72c;
        case 0x53c730u: goto label_53c730;
        case 0x53c734u: goto label_53c734;
        case 0x53c738u: goto label_53c738;
        case 0x53c73cu: goto label_53c73c;
        case 0x53c740u: goto label_53c740;
        case 0x53c744u: goto label_53c744;
        case 0x53c748u: goto label_53c748;
        case 0x53c74cu: goto label_53c74c;
        case 0x53c750u: goto label_53c750;
        case 0x53c754u: goto label_53c754;
        case 0x53c758u: goto label_53c758;
        case 0x53c75cu: goto label_53c75c;
        case 0x53c760u: goto label_53c760;
        case 0x53c764u: goto label_53c764;
        case 0x53c768u: goto label_53c768;
        case 0x53c76cu: goto label_53c76c;
        case 0x53c770u: goto label_53c770;
        case 0x53c774u: goto label_53c774;
        case 0x53c778u: goto label_53c778;
        case 0x53c77cu: goto label_53c77c;
        case 0x53c780u: goto label_53c780;
        case 0x53c784u: goto label_53c784;
        case 0x53c788u: goto label_53c788;
        case 0x53c78cu: goto label_53c78c;
        case 0x53c790u: goto label_53c790;
        case 0x53c794u: goto label_53c794;
        case 0x53c798u: goto label_53c798;
        case 0x53c79cu: goto label_53c79c;
        case 0x53c7a0u: goto label_53c7a0;
        case 0x53c7a4u: goto label_53c7a4;
        case 0x53c7a8u: goto label_53c7a8;
        case 0x53c7acu: goto label_53c7ac;
        case 0x53c7b0u: goto label_53c7b0;
        case 0x53c7b4u: goto label_53c7b4;
        case 0x53c7b8u: goto label_53c7b8;
        case 0x53c7bcu: goto label_53c7bc;
        case 0x53c7c0u: goto label_53c7c0;
        case 0x53c7c4u: goto label_53c7c4;
        case 0x53c7c8u: goto label_53c7c8;
        case 0x53c7ccu: goto label_53c7cc;
        case 0x53c7d0u: goto label_53c7d0;
        case 0x53c7d4u: goto label_53c7d4;
        case 0x53c7d8u: goto label_53c7d8;
        case 0x53c7dcu: goto label_53c7dc;
        case 0x53c7e0u: goto label_53c7e0;
        case 0x53c7e4u: goto label_53c7e4;
        case 0x53c7e8u: goto label_53c7e8;
        case 0x53c7ecu: goto label_53c7ec;
        case 0x53c7f0u: goto label_53c7f0;
        case 0x53c7f4u: goto label_53c7f4;
        case 0x53c7f8u: goto label_53c7f8;
        case 0x53c7fcu: goto label_53c7fc;
        case 0x53c800u: goto label_53c800;
        case 0x53c804u: goto label_53c804;
        case 0x53c808u: goto label_53c808;
        case 0x53c80cu: goto label_53c80c;
        case 0x53c810u: goto label_53c810;
        case 0x53c814u: goto label_53c814;
        case 0x53c818u: goto label_53c818;
        case 0x53c81cu: goto label_53c81c;
        case 0x53c820u: goto label_53c820;
        case 0x53c824u: goto label_53c824;
        case 0x53c828u: goto label_53c828;
        case 0x53c82cu: goto label_53c82c;
        case 0x53c830u: goto label_53c830;
        case 0x53c834u: goto label_53c834;
        case 0x53c838u: goto label_53c838;
        case 0x53c83cu: goto label_53c83c;
        case 0x53c840u: goto label_53c840;
        case 0x53c844u: goto label_53c844;
        case 0x53c848u: goto label_53c848;
        case 0x53c84cu: goto label_53c84c;
        case 0x53c850u: goto label_53c850;
        case 0x53c854u: goto label_53c854;
        case 0x53c858u: goto label_53c858;
        case 0x53c85cu: goto label_53c85c;
        case 0x53c860u: goto label_53c860;
        case 0x53c864u: goto label_53c864;
        case 0x53c868u: goto label_53c868;
        case 0x53c86cu: goto label_53c86c;
        case 0x53c870u: goto label_53c870;
        case 0x53c874u: goto label_53c874;
        case 0x53c878u: goto label_53c878;
        case 0x53c87cu: goto label_53c87c;
        case 0x53c880u: goto label_53c880;
        case 0x53c884u: goto label_53c884;
        case 0x53c888u: goto label_53c888;
        case 0x53c88cu: goto label_53c88c;
        case 0x53c890u: goto label_53c890;
        case 0x53c894u: goto label_53c894;
        case 0x53c898u: goto label_53c898;
        case 0x53c89cu: goto label_53c89c;
        case 0x53c8a0u: goto label_53c8a0;
        case 0x53c8a4u: goto label_53c8a4;
        case 0x53c8a8u: goto label_53c8a8;
        case 0x53c8acu: goto label_53c8ac;
        case 0x53c8b0u: goto label_53c8b0;
        case 0x53c8b4u: goto label_53c8b4;
        case 0x53c8b8u: goto label_53c8b8;
        case 0x53c8bcu: goto label_53c8bc;
        case 0x53c8c0u: goto label_53c8c0;
        case 0x53c8c4u: goto label_53c8c4;
        case 0x53c8c8u: goto label_53c8c8;
        case 0x53c8ccu: goto label_53c8cc;
        case 0x53c8d0u: goto label_53c8d0;
        case 0x53c8d4u: goto label_53c8d4;
        case 0x53c8d8u: goto label_53c8d8;
        case 0x53c8dcu: goto label_53c8dc;
        case 0x53c8e0u: goto label_53c8e0;
        case 0x53c8e4u: goto label_53c8e4;
        case 0x53c8e8u: goto label_53c8e8;
        case 0x53c8ecu: goto label_53c8ec;
        case 0x53c8f0u: goto label_53c8f0;
        case 0x53c8f4u: goto label_53c8f4;
        case 0x53c8f8u: goto label_53c8f8;
        case 0x53c8fcu: goto label_53c8fc;
        case 0x53c900u: goto label_53c900;
        case 0x53c904u: goto label_53c904;
        case 0x53c908u: goto label_53c908;
        case 0x53c90cu: goto label_53c90c;
        case 0x53c910u: goto label_53c910;
        case 0x53c914u: goto label_53c914;
        case 0x53c918u: goto label_53c918;
        case 0x53c91cu: goto label_53c91c;
        case 0x53c920u: goto label_53c920;
        case 0x53c924u: goto label_53c924;
        case 0x53c928u: goto label_53c928;
        case 0x53c92cu: goto label_53c92c;
        case 0x53c930u: goto label_53c930;
        case 0x53c934u: goto label_53c934;
        case 0x53c938u: goto label_53c938;
        case 0x53c93cu: goto label_53c93c;
        case 0x53c940u: goto label_53c940;
        case 0x53c944u: goto label_53c944;
        case 0x53c948u: goto label_53c948;
        case 0x53c94cu: goto label_53c94c;
        case 0x53c950u: goto label_53c950;
        case 0x53c954u: goto label_53c954;
        case 0x53c958u: goto label_53c958;
        case 0x53c95cu: goto label_53c95c;
        case 0x53c960u: goto label_53c960;
        case 0x53c964u: goto label_53c964;
        case 0x53c968u: goto label_53c968;
        case 0x53c96cu: goto label_53c96c;
        case 0x53c970u: goto label_53c970;
        case 0x53c974u: goto label_53c974;
        case 0x53c978u: goto label_53c978;
        case 0x53c97cu: goto label_53c97c;
        case 0x53c980u: goto label_53c980;
        case 0x53c984u: goto label_53c984;
        case 0x53c988u: goto label_53c988;
        case 0x53c98cu: goto label_53c98c;
        case 0x53c990u: goto label_53c990;
        case 0x53c994u: goto label_53c994;
        case 0x53c998u: goto label_53c998;
        case 0x53c99cu: goto label_53c99c;
        case 0x53c9a0u: goto label_53c9a0;
        case 0x53c9a4u: goto label_53c9a4;
        case 0x53c9a8u: goto label_53c9a8;
        case 0x53c9acu: goto label_53c9ac;
        case 0x53c9b0u: goto label_53c9b0;
        case 0x53c9b4u: goto label_53c9b4;
        case 0x53c9b8u: goto label_53c9b8;
        case 0x53c9bcu: goto label_53c9bc;
        case 0x53c9c0u: goto label_53c9c0;
        case 0x53c9c4u: goto label_53c9c4;
        case 0x53c9c8u: goto label_53c9c8;
        case 0x53c9ccu: goto label_53c9cc;
        case 0x53c9d0u: goto label_53c9d0;
        case 0x53c9d4u: goto label_53c9d4;
        case 0x53c9d8u: goto label_53c9d8;
        case 0x53c9dcu: goto label_53c9dc;
        case 0x53c9e0u: goto label_53c9e0;
        case 0x53c9e4u: goto label_53c9e4;
        case 0x53c9e8u: goto label_53c9e8;
        case 0x53c9ecu: goto label_53c9ec;
        case 0x53c9f0u: goto label_53c9f0;
        case 0x53c9f4u: goto label_53c9f4;
        case 0x53c9f8u: goto label_53c9f8;
        case 0x53c9fcu: goto label_53c9fc;
        case 0x53ca00u: goto label_53ca00;
        case 0x53ca04u: goto label_53ca04;
        case 0x53ca08u: goto label_53ca08;
        case 0x53ca0cu: goto label_53ca0c;
        case 0x53ca10u: goto label_53ca10;
        case 0x53ca14u: goto label_53ca14;
        case 0x53ca18u: goto label_53ca18;
        case 0x53ca1cu: goto label_53ca1c;
        case 0x53ca20u: goto label_53ca20;
        case 0x53ca24u: goto label_53ca24;
        case 0x53ca28u: goto label_53ca28;
        case 0x53ca2cu: goto label_53ca2c;
        case 0x53ca30u: goto label_53ca30;
        case 0x53ca34u: goto label_53ca34;
        case 0x53ca38u: goto label_53ca38;
        case 0x53ca3cu: goto label_53ca3c;
        case 0x53ca40u: goto label_53ca40;
        case 0x53ca44u: goto label_53ca44;
        case 0x53ca48u: goto label_53ca48;
        case 0x53ca4cu: goto label_53ca4c;
        case 0x53ca50u: goto label_53ca50;
        case 0x53ca54u: goto label_53ca54;
        case 0x53ca58u: goto label_53ca58;
        case 0x53ca5cu: goto label_53ca5c;
        case 0x53ca60u: goto label_53ca60;
        case 0x53ca64u: goto label_53ca64;
        case 0x53ca68u: goto label_53ca68;
        case 0x53ca6cu: goto label_53ca6c;
        case 0x53ca70u: goto label_53ca70;
        case 0x53ca74u: goto label_53ca74;
        case 0x53ca78u: goto label_53ca78;
        case 0x53ca7cu: goto label_53ca7c;
        case 0x53ca80u: goto label_53ca80;
        case 0x53ca84u: goto label_53ca84;
        case 0x53ca88u: goto label_53ca88;
        case 0x53ca8cu: goto label_53ca8c;
        case 0x53ca90u: goto label_53ca90;
        case 0x53ca94u: goto label_53ca94;
        case 0x53ca98u: goto label_53ca98;
        case 0x53ca9cu: goto label_53ca9c;
        case 0x53caa0u: goto label_53caa0;
        case 0x53caa4u: goto label_53caa4;
        case 0x53caa8u: goto label_53caa8;
        case 0x53caacu: goto label_53caac;
        case 0x53cab0u: goto label_53cab0;
        case 0x53cab4u: goto label_53cab4;
        case 0x53cab8u: goto label_53cab8;
        case 0x53cabcu: goto label_53cabc;
        case 0x53cac0u: goto label_53cac0;
        case 0x53cac4u: goto label_53cac4;
        case 0x53cac8u: goto label_53cac8;
        case 0x53caccu: goto label_53cacc;
        case 0x53cad0u: goto label_53cad0;
        case 0x53cad4u: goto label_53cad4;
        case 0x53cad8u: goto label_53cad8;
        case 0x53cadcu: goto label_53cadc;
        case 0x53cae0u: goto label_53cae0;
        case 0x53cae4u: goto label_53cae4;
        case 0x53cae8u: goto label_53cae8;
        case 0x53caecu: goto label_53caec;
        case 0x53caf0u: goto label_53caf0;
        case 0x53caf4u: goto label_53caf4;
        case 0x53caf8u: goto label_53caf8;
        case 0x53cafcu: goto label_53cafc;
        case 0x53cb00u: goto label_53cb00;
        case 0x53cb04u: goto label_53cb04;
        case 0x53cb08u: goto label_53cb08;
        case 0x53cb0cu: goto label_53cb0c;
        case 0x53cb10u: goto label_53cb10;
        case 0x53cb14u: goto label_53cb14;
        case 0x53cb18u: goto label_53cb18;
        case 0x53cb1cu: goto label_53cb1c;
        case 0x53cb20u: goto label_53cb20;
        case 0x53cb24u: goto label_53cb24;
        case 0x53cb28u: goto label_53cb28;
        case 0x53cb2cu: goto label_53cb2c;
        case 0x53cb30u: goto label_53cb30;
        case 0x53cb34u: goto label_53cb34;
        case 0x53cb38u: goto label_53cb38;
        case 0x53cb3cu: goto label_53cb3c;
        case 0x53cb40u: goto label_53cb40;
        case 0x53cb44u: goto label_53cb44;
        case 0x53cb48u: goto label_53cb48;
        case 0x53cb4cu: goto label_53cb4c;
        case 0x53cb50u: goto label_53cb50;
        case 0x53cb54u: goto label_53cb54;
        case 0x53cb58u: goto label_53cb58;
        case 0x53cb5cu: goto label_53cb5c;
        case 0x53cb60u: goto label_53cb60;
        case 0x53cb64u: goto label_53cb64;
        case 0x53cb68u: goto label_53cb68;
        case 0x53cb6cu: goto label_53cb6c;
        case 0x53cb70u: goto label_53cb70;
        case 0x53cb74u: goto label_53cb74;
        case 0x53cb78u: goto label_53cb78;
        case 0x53cb7cu: goto label_53cb7c;
        case 0x53cb80u: goto label_53cb80;
        case 0x53cb84u: goto label_53cb84;
        case 0x53cb88u: goto label_53cb88;
        case 0x53cb8cu: goto label_53cb8c;
        case 0x53cb90u: goto label_53cb90;
        case 0x53cb94u: goto label_53cb94;
        case 0x53cb98u: goto label_53cb98;
        case 0x53cb9cu: goto label_53cb9c;
        case 0x53cba0u: goto label_53cba0;
        case 0x53cba4u: goto label_53cba4;
        case 0x53cba8u: goto label_53cba8;
        case 0x53cbacu: goto label_53cbac;
        case 0x53cbb0u: goto label_53cbb0;
        case 0x53cbb4u: goto label_53cbb4;
        case 0x53cbb8u: goto label_53cbb8;
        case 0x53cbbcu: goto label_53cbbc;
        case 0x53cbc0u: goto label_53cbc0;
        case 0x53cbc4u: goto label_53cbc4;
        case 0x53cbc8u: goto label_53cbc8;
        case 0x53cbccu: goto label_53cbcc;
        case 0x53cbd0u: goto label_53cbd0;
        case 0x53cbd4u: goto label_53cbd4;
        case 0x53cbd8u: goto label_53cbd8;
        case 0x53cbdcu: goto label_53cbdc;
        case 0x53cbe0u: goto label_53cbe0;
        case 0x53cbe4u: goto label_53cbe4;
        case 0x53cbe8u: goto label_53cbe8;
        case 0x53cbecu: goto label_53cbec;
        case 0x53cbf0u: goto label_53cbf0;
        case 0x53cbf4u: goto label_53cbf4;
        case 0x53cbf8u: goto label_53cbf8;
        case 0x53cbfcu: goto label_53cbfc;
        case 0x53cc00u: goto label_53cc00;
        case 0x53cc04u: goto label_53cc04;
        case 0x53cc08u: goto label_53cc08;
        case 0x53cc0cu: goto label_53cc0c;
        case 0x53cc10u: goto label_53cc10;
        case 0x53cc14u: goto label_53cc14;
        case 0x53cc18u: goto label_53cc18;
        case 0x53cc1cu: goto label_53cc1c;
        case 0x53cc20u: goto label_53cc20;
        case 0x53cc24u: goto label_53cc24;
        case 0x53cc28u: goto label_53cc28;
        case 0x53cc2cu: goto label_53cc2c;
        case 0x53cc30u: goto label_53cc30;
        case 0x53cc34u: goto label_53cc34;
        case 0x53cc38u: goto label_53cc38;
        case 0x53cc3cu: goto label_53cc3c;
        case 0x53cc40u: goto label_53cc40;
        case 0x53cc44u: goto label_53cc44;
        case 0x53cc48u: goto label_53cc48;
        case 0x53cc4cu: goto label_53cc4c;
        case 0x53cc50u: goto label_53cc50;
        case 0x53cc54u: goto label_53cc54;
        case 0x53cc58u: goto label_53cc58;
        case 0x53cc5cu: goto label_53cc5c;
        case 0x53cc60u: goto label_53cc60;
        case 0x53cc64u: goto label_53cc64;
        case 0x53cc68u: goto label_53cc68;
        case 0x53cc6cu: goto label_53cc6c;
        case 0x53cc70u: goto label_53cc70;
        case 0x53cc74u: goto label_53cc74;
        case 0x53cc78u: goto label_53cc78;
        case 0x53cc7cu: goto label_53cc7c;
        case 0x53cc80u: goto label_53cc80;
        case 0x53cc84u: goto label_53cc84;
        case 0x53cc88u: goto label_53cc88;
        case 0x53cc8cu: goto label_53cc8c;
        case 0x53cc90u: goto label_53cc90;
        case 0x53cc94u: goto label_53cc94;
        case 0x53cc98u: goto label_53cc98;
        case 0x53cc9cu: goto label_53cc9c;
        case 0x53cca0u: goto label_53cca0;
        case 0x53cca4u: goto label_53cca4;
        case 0x53cca8u: goto label_53cca8;
        case 0x53ccacu: goto label_53ccac;
        case 0x53ccb0u: goto label_53ccb0;
        case 0x53ccb4u: goto label_53ccb4;
        case 0x53ccb8u: goto label_53ccb8;
        case 0x53ccbcu: goto label_53ccbc;
        case 0x53ccc0u: goto label_53ccc0;
        case 0x53ccc4u: goto label_53ccc4;
        case 0x53ccc8u: goto label_53ccc8;
        case 0x53ccccu: goto label_53cccc;
        case 0x53ccd0u: goto label_53ccd0;
        case 0x53ccd4u: goto label_53ccd4;
        case 0x53ccd8u: goto label_53ccd8;
        case 0x53ccdcu: goto label_53ccdc;
        case 0x53cce0u: goto label_53cce0;
        case 0x53cce4u: goto label_53cce4;
        case 0x53cce8u: goto label_53cce8;
        case 0x53ccecu: goto label_53ccec;
        case 0x53ccf0u: goto label_53ccf0;
        case 0x53ccf4u: goto label_53ccf4;
        case 0x53ccf8u: goto label_53ccf8;
        case 0x53ccfcu: goto label_53ccfc;
        case 0x53cd00u: goto label_53cd00;
        case 0x53cd04u: goto label_53cd04;
        case 0x53cd08u: goto label_53cd08;
        case 0x53cd0cu: goto label_53cd0c;
        case 0x53cd10u: goto label_53cd10;
        case 0x53cd14u: goto label_53cd14;
        case 0x53cd18u: goto label_53cd18;
        case 0x53cd1cu: goto label_53cd1c;
        case 0x53cd20u: goto label_53cd20;
        case 0x53cd24u: goto label_53cd24;
        case 0x53cd28u: goto label_53cd28;
        case 0x53cd2cu: goto label_53cd2c;
        case 0x53cd30u: goto label_53cd30;
        case 0x53cd34u: goto label_53cd34;
        case 0x53cd38u: goto label_53cd38;
        case 0x53cd3cu: goto label_53cd3c;
        case 0x53cd40u: goto label_53cd40;
        case 0x53cd44u: goto label_53cd44;
        case 0x53cd48u: goto label_53cd48;
        case 0x53cd4cu: goto label_53cd4c;
        case 0x53cd50u: goto label_53cd50;
        case 0x53cd54u: goto label_53cd54;
        case 0x53cd58u: goto label_53cd58;
        case 0x53cd5cu: goto label_53cd5c;
        case 0x53cd60u: goto label_53cd60;
        case 0x53cd64u: goto label_53cd64;
        case 0x53cd68u: goto label_53cd68;
        case 0x53cd6cu: goto label_53cd6c;
        case 0x53cd70u: goto label_53cd70;
        case 0x53cd74u: goto label_53cd74;
        case 0x53cd78u: goto label_53cd78;
        case 0x53cd7cu: goto label_53cd7c;
        case 0x53cd80u: goto label_53cd80;
        case 0x53cd84u: goto label_53cd84;
        case 0x53cd88u: goto label_53cd88;
        case 0x53cd8cu: goto label_53cd8c;
        case 0x53cd90u: goto label_53cd90;
        case 0x53cd94u: goto label_53cd94;
        case 0x53cd98u: goto label_53cd98;
        case 0x53cd9cu: goto label_53cd9c;
        case 0x53cda0u: goto label_53cda0;
        case 0x53cda4u: goto label_53cda4;
        case 0x53cda8u: goto label_53cda8;
        case 0x53cdacu: goto label_53cdac;
        case 0x53cdb0u: goto label_53cdb0;
        case 0x53cdb4u: goto label_53cdb4;
        case 0x53cdb8u: goto label_53cdb8;
        case 0x53cdbcu: goto label_53cdbc;
        case 0x53cdc0u: goto label_53cdc0;
        case 0x53cdc4u: goto label_53cdc4;
        case 0x53cdc8u: goto label_53cdc8;
        case 0x53cdccu: goto label_53cdcc;
        case 0x53cdd0u: goto label_53cdd0;
        case 0x53cdd4u: goto label_53cdd4;
        case 0x53cdd8u: goto label_53cdd8;
        case 0x53cddcu: goto label_53cddc;
        case 0x53cde0u: goto label_53cde0;
        case 0x53cde4u: goto label_53cde4;
        case 0x53cde8u: goto label_53cde8;
        case 0x53cdecu: goto label_53cdec;
        case 0x53cdf0u: goto label_53cdf0;
        case 0x53cdf4u: goto label_53cdf4;
        case 0x53cdf8u: goto label_53cdf8;
        case 0x53cdfcu: goto label_53cdfc;
        case 0x53ce00u: goto label_53ce00;
        case 0x53ce04u: goto label_53ce04;
        case 0x53ce08u: goto label_53ce08;
        case 0x53ce0cu: goto label_53ce0c;
        case 0x53ce10u: goto label_53ce10;
        case 0x53ce14u: goto label_53ce14;
        case 0x53ce18u: goto label_53ce18;
        case 0x53ce1cu: goto label_53ce1c;
        case 0x53ce20u: goto label_53ce20;
        case 0x53ce24u: goto label_53ce24;
        case 0x53ce28u: goto label_53ce28;
        case 0x53ce2cu: goto label_53ce2c;
        case 0x53ce30u: goto label_53ce30;
        case 0x53ce34u: goto label_53ce34;
        case 0x53ce38u: goto label_53ce38;
        case 0x53ce3cu: goto label_53ce3c;
        case 0x53ce40u: goto label_53ce40;
        case 0x53ce44u: goto label_53ce44;
        case 0x53ce48u: goto label_53ce48;
        case 0x53ce4cu: goto label_53ce4c;
        case 0x53ce50u: goto label_53ce50;
        case 0x53ce54u: goto label_53ce54;
        case 0x53ce58u: goto label_53ce58;
        case 0x53ce5cu: goto label_53ce5c;
        case 0x53ce60u: goto label_53ce60;
        case 0x53ce64u: goto label_53ce64;
        case 0x53ce68u: goto label_53ce68;
        case 0x53ce6cu: goto label_53ce6c;
        case 0x53ce70u: goto label_53ce70;
        case 0x53ce74u: goto label_53ce74;
        case 0x53ce78u: goto label_53ce78;
        case 0x53ce7cu: goto label_53ce7c;
        case 0x53ce80u: goto label_53ce80;
        case 0x53ce84u: goto label_53ce84;
        case 0x53ce88u: goto label_53ce88;
        case 0x53ce8cu: goto label_53ce8c;
        case 0x53ce90u: goto label_53ce90;
        case 0x53ce94u: goto label_53ce94;
        case 0x53ce98u: goto label_53ce98;
        case 0x53ce9cu: goto label_53ce9c;
        case 0x53cea0u: goto label_53cea0;
        case 0x53cea4u: goto label_53cea4;
        case 0x53cea8u: goto label_53cea8;
        case 0x53ceacu: goto label_53ceac;
        case 0x53ceb0u: goto label_53ceb0;
        case 0x53ceb4u: goto label_53ceb4;
        case 0x53ceb8u: goto label_53ceb8;
        case 0x53cebcu: goto label_53cebc;
        case 0x53cec0u: goto label_53cec0;
        case 0x53cec4u: goto label_53cec4;
        case 0x53cec8u: goto label_53cec8;
        case 0x53ceccu: goto label_53cecc;
        case 0x53ced0u: goto label_53ced0;
        case 0x53ced4u: goto label_53ced4;
        case 0x53ced8u: goto label_53ced8;
        case 0x53cedcu: goto label_53cedc;
        case 0x53cee0u: goto label_53cee0;
        case 0x53cee4u: goto label_53cee4;
        case 0x53cee8u: goto label_53cee8;
        case 0x53ceecu: goto label_53ceec;
        case 0x53cef0u: goto label_53cef0;
        case 0x53cef4u: goto label_53cef4;
        case 0x53cef8u: goto label_53cef8;
        case 0x53cefcu: goto label_53cefc;
        case 0x53cf00u: goto label_53cf00;
        case 0x53cf04u: goto label_53cf04;
        case 0x53cf08u: goto label_53cf08;
        case 0x53cf0cu: goto label_53cf0c;
        case 0x53cf10u: goto label_53cf10;
        case 0x53cf14u: goto label_53cf14;
        case 0x53cf18u: goto label_53cf18;
        case 0x53cf1cu: goto label_53cf1c;
        case 0x53cf20u: goto label_53cf20;
        case 0x53cf24u: goto label_53cf24;
        case 0x53cf28u: goto label_53cf28;
        case 0x53cf2cu: goto label_53cf2c;
        case 0x53cf30u: goto label_53cf30;
        case 0x53cf34u: goto label_53cf34;
        case 0x53cf38u: goto label_53cf38;
        case 0x53cf3cu: goto label_53cf3c;
        case 0x53cf40u: goto label_53cf40;
        case 0x53cf44u: goto label_53cf44;
        case 0x53cf48u: goto label_53cf48;
        case 0x53cf4cu: goto label_53cf4c;
        case 0x53cf50u: goto label_53cf50;
        case 0x53cf54u: goto label_53cf54;
        case 0x53cf58u: goto label_53cf58;
        case 0x53cf5cu: goto label_53cf5c;
        case 0x53cf60u: goto label_53cf60;
        case 0x53cf64u: goto label_53cf64;
        case 0x53cf68u: goto label_53cf68;
        case 0x53cf6cu: goto label_53cf6c;
        case 0x53cf70u: goto label_53cf70;
        case 0x53cf74u: goto label_53cf74;
        case 0x53cf78u: goto label_53cf78;
        case 0x53cf7cu: goto label_53cf7c;
        case 0x53cf80u: goto label_53cf80;
        case 0x53cf84u: goto label_53cf84;
        case 0x53cf88u: goto label_53cf88;
        case 0x53cf8cu: goto label_53cf8c;
        case 0x53cf90u: goto label_53cf90;
        case 0x53cf94u: goto label_53cf94;
        case 0x53cf98u: goto label_53cf98;
        case 0x53cf9cu: goto label_53cf9c;
        case 0x53cfa0u: goto label_53cfa0;
        case 0x53cfa4u: goto label_53cfa4;
        case 0x53cfa8u: goto label_53cfa8;
        case 0x53cfacu: goto label_53cfac;
        case 0x53cfb0u: goto label_53cfb0;
        case 0x53cfb4u: goto label_53cfb4;
        case 0x53cfb8u: goto label_53cfb8;
        case 0x53cfbcu: goto label_53cfbc;
        case 0x53cfc0u: goto label_53cfc0;
        case 0x53cfc4u: goto label_53cfc4;
        case 0x53cfc8u: goto label_53cfc8;
        case 0x53cfccu: goto label_53cfcc;
        case 0x53cfd0u: goto label_53cfd0;
        case 0x53cfd4u: goto label_53cfd4;
        case 0x53cfd8u: goto label_53cfd8;
        case 0x53cfdcu: goto label_53cfdc;
        case 0x53cfe0u: goto label_53cfe0;
        case 0x53cfe4u: goto label_53cfe4;
        case 0x53cfe8u: goto label_53cfe8;
        case 0x53cfecu: goto label_53cfec;
        case 0x53cff0u: goto label_53cff0;
        case 0x53cff4u: goto label_53cff4;
        case 0x53cff8u: goto label_53cff8;
        case 0x53cffcu: goto label_53cffc;
        case 0x53d000u: goto label_53d000;
        case 0x53d004u: goto label_53d004;
        case 0x53d008u: goto label_53d008;
        case 0x53d00cu: goto label_53d00c;
        case 0x53d010u: goto label_53d010;
        case 0x53d014u: goto label_53d014;
        case 0x53d018u: goto label_53d018;
        case 0x53d01cu: goto label_53d01c;
        case 0x53d020u: goto label_53d020;
        case 0x53d024u: goto label_53d024;
        case 0x53d028u: goto label_53d028;
        case 0x53d02cu: goto label_53d02c;
        case 0x53d030u: goto label_53d030;
        case 0x53d034u: goto label_53d034;
        case 0x53d038u: goto label_53d038;
        case 0x53d03cu: goto label_53d03c;
        case 0x53d040u: goto label_53d040;
        case 0x53d044u: goto label_53d044;
        case 0x53d048u: goto label_53d048;
        case 0x53d04cu: goto label_53d04c;
        case 0x53d050u: goto label_53d050;
        case 0x53d054u: goto label_53d054;
        case 0x53d058u: goto label_53d058;
        case 0x53d05cu: goto label_53d05c;
        case 0x53d060u: goto label_53d060;
        case 0x53d064u: goto label_53d064;
        case 0x53d068u: goto label_53d068;
        case 0x53d06cu: goto label_53d06c;
        case 0x53d070u: goto label_53d070;
        case 0x53d074u: goto label_53d074;
        case 0x53d078u: goto label_53d078;
        case 0x53d07cu: goto label_53d07c;
        case 0x53d080u: goto label_53d080;
        case 0x53d084u: goto label_53d084;
        case 0x53d088u: goto label_53d088;
        case 0x53d08cu: goto label_53d08c;
        case 0x53d090u: goto label_53d090;
        case 0x53d094u: goto label_53d094;
        case 0x53d098u: goto label_53d098;
        case 0x53d09cu: goto label_53d09c;
        case 0x53d0a0u: goto label_53d0a0;
        case 0x53d0a4u: goto label_53d0a4;
        case 0x53d0a8u: goto label_53d0a8;
        case 0x53d0acu: goto label_53d0ac;
        case 0x53d0b0u: goto label_53d0b0;
        case 0x53d0b4u: goto label_53d0b4;
        case 0x53d0b8u: goto label_53d0b8;
        case 0x53d0bcu: goto label_53d0bc;
        case 0x53d0c0u: goto label_53d0c0;
        case 0x53d0c4u: goto label_53d0c4;
        case 0x53d0c8u: goto label_53d0c8;
        case 0x53d0ccu: goto label_53d0cc;
        case 0x53d0d0u: goto label_53d0d0;
        case 0x53d0d4u: goto label_53d0d4;
        case 0x53d0d8u: goto label_53d0d8;
        case 0x53d0dcu: goto label_53d0dc;
        case 0x53d0e0u: goto label_53d0e0;
        case 0x53d0e4u: goto label_53d0e4;
        case 0x53d0e8u: goto label_53d0e8;
        case 0x53d0ecu: goto label_53d0ec;
        case 0x53d0f0u: goto label_53d0f0;
        case 0x53d0f4u: goto label_53d0f4;
        case 0x53d0f8u: goto label_53d0f8;
        case 0x53d0fcu: goto label_53d0fc;
        case 0x53d100u: goto label_53d100;
        case 0x53d104u: goto label_53d104;
        case 0x53d108u: goto label_53d108;
        case 0x53d10cu: goto label_53d10c;
        case 0x53d110u: goto label_53d110;
        case 0x53d114u: goto label_53d114;
        case 0x53d118u: goto label_53d118;
        case 0x53d11cu: goto label_53d11c;
        case 0x53d120u: goto label_53d120;
        case 0x53d124u: goto label_53d124;
        case 0x53d128u: goto label_53d128;
        case 0x53d12cu: goto label_53d12c;
        case 0x53d130u: goto label_53d130;
        case 0x53d134u: goto label_53d134;
        case 0x53d138u: goto label_53d138;
        case 0x53d13cu: goto label_53d13c;
        case 0x53d140u: goto label_53d140;
        case 0x53d144u: goto label_53d144;
        case 0x53d148u: goto label_53d148;
        case 0x53d14cu: goto label_53d14c;
        case 0x53d150u: goto label_53d150;
        case 0x53d154u: goto label_53d154;
        case 0x53d158u: goto label_53d158;
        case 0x53d15cu: goto label_53d15c;
        case 0x53d160u: goto label_53d160;
        case 0x53d164u: goto label_53d164;
        case 0x53d168u: goto label_53d168;
        case 0x53d16cu: goto label_53d16c;
        default: break;
    }

    ctx->pc = 0x53c5d0u;

label_53c5d0:
    // 0x53c5d0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x53c5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_53c5d4:
    // 0x53c5d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53c5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53c5d8:
    // 0x53c5d8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x53c5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_53c5dc:
    // 0x53c5dc: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x53c5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_53c5e0:
    // 0x53c5e0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x53c5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_53c5e4:
    // 0x53c5e4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x53c5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_53c5e8:
    // 0x53c5e8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x53c5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_53c5ec:
    // 0x53c5ec: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x53c5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_53c5f0:
    // 0x53c5f0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x53c5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_53c5f4:
    // 0x53c5f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x53c5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_53c5f8:
    // 0x53c5f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x53c5f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53c5fc:
    // 0x53c5fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x53c5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_53c600:
    // 0x53c600: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x53c600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_53c604:
    // 0x53c604: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x53c604u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_53c608:
    // 0x53c608: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x53c608u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_53c60c:
    // 0x53c60c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x53c60cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_53c610:
    // 0x53c610: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x53c610u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_53c614:
    // 0x53c614: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x53c614u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_53c618:
    // 0x53c618: 0x8c7589e0  lw          $s5, -0x7620($v1)
    ctx->pc = 0x53c618u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_53c61c:
    // 0x53c61c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53c620:
    // 0x53c620: 0x8c7489f0  lw          $s4, -0x7610($v1)
    ctx->pc = 0x53c620u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_53c624:
    // 0x53c624: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x53c624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_53c628:
    // 0x53c628: 0x8c630cc8  lw          $v1, 0xCC8($v1)
    ctx->pc = 0x53c628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3272)));
label_53c62c:
    // 0x53c62c: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x53c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_53c630:
    // 0x53c630: 0x106000a9  beqz        $v1, . + 4 + (0xA9 << 2)
label_53c634:
    if (ctx->pc == 0x53C634u) {
        ctx->pc = 0x53C634u;
            // 0x53c634: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->pc = 0x53C638u;
        goto label_53c638;
    }
    ctx->pc = 0x53C630u;
    {
        const bool branch_taken_0x53c630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x53C634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C630u;
            // 0x53c634: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c630) {
            ctx->pc = 0x53C8D8u;
            goto label_53c8d8;
        }
    }
    ctx->pc = 0x53C638u;
label_53c638:
    // 0x53c638: 0x3c170067  lui         $s7, 0x67
    ctx->pc = 0x53c638u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)103 << 16));
label_53c63c:
    // 0x53c63c: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x53c63cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_53c640:
    // 0x53c640: 0x26f7d3c0  addiu       $s7, $s7, -0x2C40
    ctx->pc = 0x53c640u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294955968));
label_53c644:
    // 0x53c644: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
label_53c648:
    if (ctx->pc == 0x53C648u) {
        ctx->pc = 0x53C648u;
            // 0x53c648: 0x2652d460  addiu       $s2, $s2, -0x2BA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956128));
        ctx->pc = 0x53C64Cu;
        goto label_53c64c;
    }
    ctx->pc = 0x53C644u;
    {
        const bool branch_taken_0x53c644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x53C648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C644u;
            // 0x53c648: 0x2652d460  addiu       $s2, $s2, -0x2BA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c644) {
            ctx->pc = 0x53C8D8u;
            goto label_53c8d8;
        }
    }
    ctx->pc = 0x53C64Cu;
label_53c64c:
    // 0x53c64c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x53c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_53c650:
    // 0x53c650: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x53c650u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53c654:
    // 0x53c654: 0xc475c060  lwc1        $f21, -0x3FA0($v1)
    ctx->pc = 0x53c654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294951008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_53c658:
    // 0x53c658: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x53c658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_53c65c:
    // 0x53c65c: 0xc474c058  lwc1        $f20, -0x3FA8($v1)
    ctx->pc = 0x53c65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294951000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_53c660:
    // 0x53c660: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x53c660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_53c664:
    // 0x53c664: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x53c664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_53c668:
    // 0x53c668: 0x8c680cc8  lw          $t0, 0xCC8($v1)
    ctx->pc = 0x53c668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3272)));
label_53c66c:
    // 0x53c66c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x53c66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_53c670:
    // 0x53c670: 0x8c87d130  lw          $a3, -0x2ED0($a0)
    ctx->pc = 0x53c670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_53c674:
    // 0x53c674: 0x24a5d470  addiu       $a1, $a1, -0x2B90
    ctx->pc = 0x53c674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956144));
label_53c678:
    // 0x53c678: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x53c678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_53c67c:
    // 0x53c67c: 0x8d080074  lw          $t0, 0x74($t0)
    ctx->pc = 0x53c67cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_53c680:
    // 0x53c680: 0x8c66d120  lw          $a2, -0x2EE0($v1)
    ctx->pc = 0x53c680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_53c684:
    // 0x53c684: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x53c684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_53c688:
    // 0x53c688: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x53c688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_53c68c:
    // 0x53c68c: 0x8ce30130  lw          $v1, 0x130($a3)
    ctx->pc = 0x53c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_53c690:
    // 0x53c690: 0x8084007a  lb          $a0, 0x7A($a0)
    ctx->pc = 0x53c690u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 122)));
label_53c694:
    // 0x53c694: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x53c694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_53c698:
    // 0x53c698: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x53c698u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_53c69c:
    // 0x53c69c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x53c69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_53c6a0:
    // 0x53c6a0: 0x1163021  addu        $a2, $t0, $s6
    ctx->pc = 0x53c6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 22)));
label_53c6a4:
    // 0x53c6a4: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x53c6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_53c6a8:
    // 0x53c6a8: 0xc496fffc  lwc1        $f22, -0x4($a0)
    ctx->pc = 0x53c6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_53c6ac:
    // 0x53c6ac: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x53c6acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_53c6b0:
    // 0x53c6b0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x53c6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_53c6b4:
    // 0x53c6b4: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x53c6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_53c6b8:
    // 0x53c6b8: 0x8e06012c  lw          $a2, 0x12C($s0)
    ctx->pc = 0x53c6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_53c6bc:
    // 0x53c6bc: 0x24f10150  addiu       $s1, $a3, 0x150
    ctx->pc = 0x53c6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 336));
label_53c6c0:
    // 0x53c6c0: 0x4c0007f  bltz        $a2, . + 4 + (0x7F << 2)
label_53c6c4:
    if (ctx->pc == 0x53C6C4u) {
        ctx->pc = 0x53C6C4u;
            // 0x53c6c4: 0x24fe0200  addiu       $fp, $a3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
        ctx->pc = 0x53C6C8u;
        goto label_53c6c8;
    }
    ctx->pc = 0x53C6C0u;
    {
        const bool branch_taken_0x53c6c0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x53C6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C6C0u;
            // 0x53c6c4: 0x24fe0200  addiu       $fp, $a3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c6c0) {
            ctx->pc = 0x53C8C0u;
            goto label_53c8c0;
        }
    }
    ctx->pc = 0x53C6C8u;
label_53c6c8:
    // 0x53c6c8: 0x8e050124  lw          $a1, 0x124($s0)
    ctx->pc = 0x53c6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_53c6cc:
    // 0x53c6cc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x53c6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_53c6d0:
    // 0x53c6d0: 0x10a4007b  beq         $a1, $a0, . + 4 + (0x7B << 2)
label_53c6d4:
    if (ctx->pc == 0x53C6D4u) {
        ctx->pc = 0x53C6D8u;
        goto label_53c6d8;
    }
    ctx->pc = 0x53C6D0u;
    {
        const bool branch_taken_0x53c6d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x53c6d0) {
            ctx->pc = 0x53C8C0u;
            goto label_53c8c0;
        }
    }
    ctx->pc = 0x53C6D8u;
label_53c6d8:
    // 0x53c6d8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x53c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_53c6dc:
    // 0x53c6dc: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x53c6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_53c6e0:
    // 0x53c6e0: 0x24840e80  addiu       $a0, $a0, 0xE80
    ctx->pc = 0x53c6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3712));
label_53c6e4:
    // 0x53c6e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x53c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_53c6e8:
    // 0x53c6e8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x53c6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_53c6ec:
    // 0x53c6ec: 0x808411aa  lb          $a0, 0x11AA($a0)
    ctx->pc = 0x53c6ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4522)));
label_53c6f0:
    // 0x53c6f0: 0x14830073  bne         $a0, $v1, . + 4 + (0x73 << 2)
label_53c6f4:
    if (ctx->pc == 0x53C6F4u) {
        ctx->pc = 0x53C6F8u;
        goto label_53c6f8;
    }
    ctx->pc = 0x53C6F0u;
    {
        const bool branch_taken_0x53c6f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x53c6f0) {
            ctx->pc = 0x53C8C0u;
            goto label_53c8c0;
        }
    }
    ctx->pc = 0x53C6F8u;
label_53c6f8:
    // 0x53c6f8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x53c6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53c6fc:
    // 0x53c6fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x53c6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_53c700:
    // 0x53c700: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x53c700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_53c704:
    // 0x53c704: 0x320f809  jalr        $t9
label_53c708:
    if (ctx->pc == 0x53C708u) {
        ctx->pc = 0x53C708u;
            // 0x53c708: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x53C70Cu;
        goto label_53c70c;
    }
    ctx->pc = 0x53C704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C70Cu);
        ctx->pc = 0x53C708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C704u;
            // 0x53c708: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C70Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C70Cu; }
            if (ctx->pc != 0x53C70Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53C70Cu;
label_53c70c:
    // 0x53c70c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x53c70cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53c710:
    // 0x53c710: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x53c710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_53c714:
    // 0x53c714: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x53c714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_53c718:
    // 0x53c718: 0x320f809  jalr        $t9
label_53c71c:
    if (ctx->pc == 0x53C71Cu) {
        ctx->pc = 0x53C71Cu;
            // 0x53c71c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53C720u;
        goto label_53c720;
    }
    ctx->pc = 0x53C718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C720u);
        ctx->pc = 0x53C71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C718u;
            // 0x53c71c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C720u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C720u; }
            if (ctx->pc != 0x53C720u) { return; }
        }
        }
    }
    ctx->pc = 0x53C720u;
label_53c720:
    // 0x53c720: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x53c720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_53c724:
    // 0x53c724: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x53c724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_53c728:
    // 0x53c728: 0xc60e0018  lwc1        $f14, 0x18($s0)
    ctx->pc = 0x53c728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_53c72c:
    // 0x53c72c: 0xc04cbd8  jal         func_132F60
label_53c730:
    if (ctx->pc == 0x53C730u) {
        ctx->pc = 0x53C730u;
            // 0x53c730: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x53C734u;
        goto label_53c734;
    }
    ctx->pc = 0x53C72Cu;
    SET_GPR_U32(ctx, 31, 0x53C734u);
    ctx->pc = 0x53C730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53C72Cu;
            // 0x53c730: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C734u; }
        if (ctx->pc != 0x53C734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C734u; }
        if (ctx->pc != 0x53C734u) { return; }
    }
    ctx->pc = 0x53C734u;
label_53c734:
    // 0x53c734: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x53c734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53c738:
    // 0x53c738: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x53c738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_53c73c:
    // 0x53c73c: 0xc075094  jal         func_1D4250
label_53c740:
    if (ctx->pc == 0x53C740u) {
        ctx->pc = 0x53C740u;
            // 0x53c740: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x53C744u;
        goto label_53c744;
    }
    ctx->pc = 0x53C73Cu;
    SET_GPR_U32(ctx, 31, 0x53C744u);
    ctx->pc = 0x53C740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53C73Cu;
            // 0x53c740: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C744u; }
        if (ctx->pc != 0x53C744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C744u; }
        if (ctx->pc != 0x53C744u) { return; }
    }
    ctx->pc = 0x53C744u;
label_53c744:
    // 0x53c744: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x53c744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53c748:
    // 0x53c748: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x53c748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53c74c:
    // 0x53c74c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_53c750:
    if (ctx->pc == 0x53C750u) {
        ctx->pc = 0x53C750u;
            // 0x53c750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53C754u;
        goto label_53c754;
    }
    ctx->pc = 0x53C74Cu;
    {
        const bool branch_taken_0x53c74c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x53C750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C74Cu;
            // 0x53c750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c74c) {
            ctx->pc = 0x53C758u;
            goto label_53c758;
        }
    }
    ctx->pc = 0x53C754u;
label_53c754:
    // 0x53c754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x53c754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53c758:
    // 0x53c758: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x53c758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53c75c:
    // 0x53c75c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x53c75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_53c760:
    // 0x53c760: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_53c764:
    if (ctx->pc == 0x53C764u) {
        ctx->pc = 0x53C764u;
            // 0x53c764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53C768u;
        goto label_53c768;
    }
    ctx->pc = 0x53C760u;
    {
        const bool branch_taken_0x53c760 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x53C764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C760u;
            // 0x53c764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c760) {
            ctx->pc = 0x53C76Cu;
            goto label_53c76c;
        }
    }
    ctx->pc = 0x53C768u;
label_53c768:
    // 0x53c768: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x53c768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53c76c:
    // 0x53c76c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x53c76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_53c770:
    // 0x53c770: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x53c770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_53c774:
    // 0x53c774: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_53c778:
    if (ctx->pc == 0x53C778u) {
        ctx->pc = 0x53C77Cu;
        goto label_53c77c;
    }
    ctx->pc = 0x53C774u;
    {
        const bool branch_taken_0x53c774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53c774) {
            ctx->pc = 0x53C898u;
            goto label_53c898;
        }
    }
    ctx->pc = 0x53C77Cu;
label_53c77c:
    // 0x53c77c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x53c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_53c780:
    // 0x53c780: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x53c780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53c784:
    // 0x53c784: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x53c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_53c788:
    // 0x53c788: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x53c788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_53c78c:
    // 0x53c78c: 0x27a500fc  addiu       $a1, $sp, 0xFC
    ctx->pc = 0x53c78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_53c790:
    // 0x53c790: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x53c790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_53c794:
    // 0x53c794: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x53c794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_53c798:
    // 0x53c798: 0x320f809  jalr        $t9
label_53c79c:
    if (ctx->pc == 0x53C79Cu) {
        ctx->pc = 0x53C79Cu;
            // 0x53c79c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x53C7A0u;
        goto label_53c7a0;
    }
    ctx->pc = 0x53C798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C7A0u);
        ctx->pc = 0x53C79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C798u;
            // 0x53c79c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C7A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C7A0u; }
            if (ctx->pc != 0x53C7A0u) { return; }
        }
        }
    }
    ctx->pc = 0x53C7A0u;
label_53c7a0:
    // 0x53c7a0: 0x87b100fc  lh          $s1, 0xFC($sp)
    ctx->pc = 0x53c7a0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 252)));
label_53c7a4:
    // 0x53c7a4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x53c7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_53c7a8:
    // 0x53c7a8: 0x87b000fe  lh          $s0, 0xFE($sp)
    ctx->pc = 0x53c7a8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 254)));
label_53c7ac:
    // 0x53c7ac: 0xc04cc1c  jal         func_133070
label_53c7b0:
    if (ctx->pc == 0x53C7B0u) {
        ctx->pc = 0x53C7B0u;
            // 0x53c7b0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x53C7B4u;
        goto label_53c7b4;
    }
    ctx->pc = 0x53C7ACu;
    SET_GPR_U32(ctx, 31, 0x53C7B4u);
    ctx->pc = 0x53C7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53C7ACu;
            // 0x53c7b0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C7B4u; }
        if (ctx->pc != 0x53C7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C7B4u; }
        if (ctx->pc != 0x53C7B4u) { return; }
    }
    ctx->pc = 0x53C7B4u;
label_53c7b4:
    // 0x53c7b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x53c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_53c7b8:
    // 0x53c7b8: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x53c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_53c7bc:
    // 0x53c7bc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x53c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_53c7c0:
    // 0x53c7c0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x53c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_53c7c4:
    // 0x53c7c4: 0x1a200034  blez        $s1, . + 4 + (0x34 << 2)
label_53c7c8:
    if (ctx->pc == 0x53C7C8u) {
        ctx->pc = 0x53C7C8u;
            // 0x53c7c8: 0x46000607  neg.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x53C7CCu;
        goto label_53c7cc;
    }
    ctx->pc = 0x53C7C4u;
    {
        const bool branch_taken_0x53c7c4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x53C7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C7C4u;
            // 0x53c7c8: 0x46000607  neg.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c7c4) {
            ctx->pc = 0x53C898u;
            goto label_53c898;
        }
    }
    ctx->pc = 0x53C7CCu;
label_53c7cc:
    // 0x53c7cc: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x53c7ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_53c7d0:
    // 0x53c7d0: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_53c7d4:
    if (ctx->pc == 0x53C7D4u) {
        ctx->pc = 0x53C7D8u;
        goto label_53c7d8;
    }
    ctx->pc = 0x53C7D0u;
    {
        const bool branch_taken_0x53c7d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53c7d0) {
            ctx->pc = 0x53C898u;
            goto label_53c898;
        }
    }
    ctx->pc = 0x53C7D8u;
label_53c7d8:
    // 0x53c7d8: 0x1a00002f  blez        $s0, . + 4 + (0x2F << 2)
label_53c7dc:
    if (ctx->pc == 0x53C7DCu) {
        ctx->pc = 0x53C7E0u;
        goto label_53c7e0;
    }
    ctx->pc = 0x53C7D8u;
    {
        const bool branch_taken_0x53c7d8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x53c7d8) {
            ctx->pc = 0x53C898u;
            goto label_53c898;
        }
    }
    ctx->pc = 0x53C7E0u;
label_53c7e0:
    // 0x53c7e0: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x53c7e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_53c7e4:
    // 0x53c7e4: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
label_53c7e8:
    if (ctx->pc == 0x53C7E8u) {
        ctx->pc = 0x53C7ECu;
        goto label_53c7ec;
    }
    ctx->pc = 0x53C7E4u;
    {
        const bool branch_taken_0x53c7e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53c7e4) {
            ctx->pc = 0x53C898u;
            goto label_53c898;
        }
    }
    ctx->pc = 0x53C7ECu;
label_53c7ec:
    // 0x53c7ec: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x53c7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53c7f0:
    // 0x53c7f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x53c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_53c7f4:
    // 0x53c7f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x53c7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_53c7f8:
    // 0x53c7f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x53c7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53c7fc:
    // 0x53c7fc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x53c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_53c800:
    // 0x53c800: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x53c800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
label_53c804:
    // 0x53c804: 0x8c44aad0  lw          $a0, -0x5530($v0)
    ctx->pc = 0x53c804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945488)));
label_53c808:
    // 0x53c808: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x53c808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53c80c:
    // 0x53c80c: 0x46020dc2  mul.s       $f23, $f1, $f2
    ctx->pc = 0x53c80cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_53c810:
    // 0x53c810: 0xc0506ac  jal         func_141AB0
label_53c814:
    if (ctx->pc == 0x53C814u) {
        ctx->pc = 0x53C814u;
            // 0x53c814: 0x46160582  mul.s       $f22, $f0, $f22 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->pc = 0x53C818u;
        goto label_53c818;
    }
    ctx->pc = 0x53C810u;
    SET_GPR_U32(ctx, 31, 0x53C818u);
    ctx->pc = 0x53C814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53C810u;
            // 0x53c814: 0x46160582  mul.s       $f22, $f0, $f22 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C818u; }
        if (ctx->pc != 0x53C818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C818u; }
        if (ctx->pc != 0x53C818u) { return; }
    }
    ctx->pc = 0x53C818u;
label_53c818:
    // 0x53c818: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x53c818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_53c81c:
    // 0x53c81c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x53c81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_53c820:
    // 0x53c820: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x53c820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_53c824:
    // 0x53c824: 0x320f809  jalr        $t9
label_53c828:
    if (ctx->pc == 0x53C828u) {
        ctx->pc = 0x53C828u;
            // 0x53c828: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x53C82Cu;
        goto label_53c82c;
    }
    ctx->pc = 0x53C824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C82Cu);
        ctx->pc = 0x53C828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C824u;
            // 0x53c828: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C82Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C82Cu; }
            if (ctx->pc != 0x53C82Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53C82Cu;
label_53c82c:
    // 0x53c82c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x53c82cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53c830:
    // 0x53c830: 0x86e30000  lh          $v1, 0x0($s7)
    ctx->pc = 0x53c830u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_53c834:
    // 0x53c834: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x53c834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_53c838:
    // 0x53c838: 0x86e20002  lh          $v0, 0x2($s7)
    ctx->pc = 0x53c838u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_53c83c:
    // 0x53c83c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x53c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53c840:
    // 0x53c840: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x53c840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_53c844:
    // 0x53c844: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x53c844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_53c848:
    // 0x53c848: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x53c848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53c84c:
    // 0x53c84c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x53c84cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53c850:
    // 0x53c850: 0x0  nop
    ctx->pc = 0x53c850u;
    // NOP
label_53c854:
    // 0x53c854: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x53c854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_53c858:
    // 0x53c858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x53c858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53c85c:
    // 0x53c85c: 0x0  nop
    ctx->pc = 0x53c85cu;
    // NOP
label_53c860:
    // 0x53c860: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x53c860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_53c864:
    // 0x53c864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x53c864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53c868:
    // 0x53c868: 0x0  nop
    ctx->pc = 0x53c868u;
    // NOP
label_53c86c:
    // 0x53c86c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x53c86cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_53c870:
    // 0x53c870: 0x46167b41  sub.s       $f13, $f15, $f22
    ctx->pc = 0x53c870u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[22]);
label_53c874:
    // 0x53c874: 0x46170b01  sub.s       $f12, $f1, $f23
    ctx->pc = 0x53c874u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
label_53c878:
    // 0x53c878: 0x46170b80  add.s       $f14, $f1, $f23
    ctx->pc = 0x53c878u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
label_53c87c:
    // 0x53c87c: 0xc0bc284  jal         func_2F0A10
label_53c880:
    if (ctx->pc == 0x53C880u) {
        ctx->pc = 0x53C880u;
            // 0x53c880: 0x4600c486  mov.s       $f18, $f24 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x53C884u;
        goto label_53c884;
    }
    ctx->pc = 0x53C87Cu;
    SET_GPR_U32(ctx, 31, 0x53C884u);
    ctx->pc = 0x53C880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53C87Cu;
            // 0x53c880: 0x4600c486  mov.s       $f18, $f24 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C884u; }
        if (ctx->pc != 0x53C884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C884u; }
        if (ctx->pc != 0x53C884u) { return; }
    }
    ctx->pc = 0x53C884u;
label_53c884:
    // 0x53c884: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x53c884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_53c888:
    // 0x53c888: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x53c888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_53c88c:
    // 0x53c88c: 0x320f809  jalr        $t9
label_53c890:
    if (ctx->pc == 0x53C890u) {
        ctx->pc = 0x53C890u;
            // 0x53c890: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53C894u;
        goto label_53c894;
    }
    ctx->pc = 0x53C88Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C894u);
        ctx->pc = 0x53C890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C88Cu;
            // 0x53c890: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C894u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C894u; }
            if (ctx->pc != 0x53C894u) { return; }
        }
        }
    }
    ctx->pc = 0x53C894u;
label_53c894:
    // 0x53c894: 0x0  nop
    ctx->pc = 0x53c894u;
    // NOP
label_53c898:
    // 0x53c898: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x53c898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53c89c:
    // 0x53c89c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x53c89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_53c8a0:
    // 0x53c8a0: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x53c8a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_53c8a4:
    // 0x53c8a4: 0x320f809  jalr        $t9
label_53c8a8:
    if (ctx->pc == 0x53C8A8u) {
        ctx->pc = 0x53C8A8u;
            // 0x53c8a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53C8ACu;
        goto label_53c8ac;
    }
    ctx->pc = 0x53C8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C8ACu);
        ctx->pc = 0x53C8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C8A4u;
            // 0x53c8a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C8ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C8ACu; }
            if (ctx->pc != 0x53C8ACu) { return; }
        }
        }
    }
    ctx->pc = 0x53C8ACu;
label_53c8ac:
    // 0x53c8ac: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x53c8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53c8b0:
    // 0x53c8b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x53c8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_53c8b4:
    // 0x53c8b4: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x53c8b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_53c8b8:
    // 0x53c8b8: 0x320f809  jalr        $t9
label_53c8bc:
    if (ctx->pc == 0x53C8BCu) {
        ctx->pc = 0x53C8BCu;
            // 0x53c8bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53C8C0u;
        goto label_53c8c0;
    }
    ctx->pc = 0x53C8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C8C0u);
        ctx->pc = 0x53C8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C8B8u;
            // 0x53c8bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C8C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C8C0u; }
            if (ctx->pc != 0x53C8C0u) { return; }
        }
        }
    }
    ctx->pc = 0x53C8C0u;
label_53c8c0:
    // 0x53c8c0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x53c8c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_53c8c4:
    // 0x53c8c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x53c8c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_53c8c8:
    // 0x53c8c8: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x53c8c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_53c8cc:
    // 0x53c8cc: 0x1460ff64  bnez        $v1, . + 4 + (-0x9C << 2)
label_53c8d0:
    if (ctx->pc == 0x53C8D0u) {
        ctx->pc = 0x53C8D0u;
            // 0x53c8d0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x53C8D4u;
        goto label_53c8d4;
    }
    ctx->pc = 0x53C8CCu;
    {
        const bool branch_taken_0x53c8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x53C8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C8CCu;
            // 0x53c8d0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c8cc) {
            ctx->pc = 0x53C660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53c660;
        }
    }
    ctx->pc = 0x53C8D4u;
label_53c8d4:
    // 0x53c8d4: 0x0  nop
    ctx->pc = 0x53c8d4u;
    // NOP
label_53c8d8:
    // 0x53c8d8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x53c8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_53c8dc:
    // 0x53c8dc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x53c8dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_53c8e0:
    // 0x53c8e0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x53c8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_53c8e4:
    // 0x53c8e4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x53c8e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_53c8e8:
    // 0x53c8e8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x53c8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_53c8ec:
    // 0x53c8ec: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x53c8ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_53c8f0:
    // 0x53c8f0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x53c8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_53c8f4:
    // 0x53c8f4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x53c8f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_53c8f8:
    // 0x53c8f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x53c8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_53c8fc:
    // 0x53c8fc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x53c8fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_53c900:
    // 0x53c900: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x53c900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_53c904:
    // 0x53c904: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x53c904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_53c908:
    // 0x53c908: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x53c908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_53c90c:
    // 0x53c90c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x53c90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53c910:
    // 0x53c910: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x53c910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53c914:
    // 0x53c914: 0x3e00008  jr          $ra
label_53c918:
    if (ctx->pc == 0x53C918u) {
        ctx->pc = 0x53C918u;
            // 0x53c918: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x53C91Cu;
        goto label_53c91c;
    }
    ctx->pc = 0x53C914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53C918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C914u;
            // 0x53c918: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53C91Cu;
label_53c91c:
    // 0x53c91c: 0x0  nop
    ctx->pc = 0x53c91cu;
    // NOP
label_53c920:
    // 0x53c920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53c920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_53c924:
    // 0x53c924: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x53c924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_53c928:
    // 0x53c928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53c928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53c92c:
    // 0x53c92c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53c92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53c930:
    // 0x53c930: 0x8c670e80  lw          $a3, 0xE80($v1)
    ctx->pc = 0x53c930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_53c934:
    // 0x53c934: 0x8ce30cb4  lw          $v1, 0xCB4($a3)
    ctx->pc = 0x53c934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
label_53c938:
    // 0x53c938: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x53c938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_53c93c:
    // 0x53c93c: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_53c940:
    if (ctx->pc == 0x53C940u) {
        ctx->pc = 0x53C940u;
            // 0x53c940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53C944u;
        goto label_53c944;
    }
    ctx->pc = 0x53C93Cu;
    {
        const bool branch_taken_0x53c93c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x53C940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C93Cu;
            // 0x53c940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c93c) {
            ctx->pc = 0x53C9C8u;
            goto label_53c9c8;
        }
    }
    ctx->pc = 0x53C944u;
label_53c944:
    // 0x53c944: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x53c944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_53c948:
    // 0x53c948: 0x8c630cc8  lw          $v1, 0xCC8($v1)
    ctx->pc = 0x53c948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3272)));
label_53c94c:
    // 0x53c94c: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
label_53c950:
    if (ctx->pc == 0x53C950u) {
        ctx->pc = 0x53C950u;
            // 0x53c950: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x53C954u;
        goto label_53c954;
    }
    ctx->pc = 0x53C94Cu;
    {
        const bool branch_taken_0x53c94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x53c94c) {
            ctx->pc = 0x53C950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53C94Cu;
            // 0x53c950: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53C9CCu;
            goto label_53c9cc;
        }
    }
    ctx->pc = 0x53C954u;
label_53c954:
    // 0x53c954: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53c954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53c958:
    // 0x53c958: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x53c958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53c95c:
    // 0x53c95c: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x53c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_53c960:
    // 0x53c960: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x53c960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_53c964:
    // 0x53c964: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x53c964u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_53c968:
    // 0x53c968: 0x10c5000f  beq         $a2, $a1, . + 4 + (0xF << 2)
label_53c96c:
    if (ctx->pc == 0x53C96Cu) {
        ctx->pc = 0x53C970u;
        goto label_53c970;
    }
    ctx->pc = 0x53C968u;
    {
        const bool branch_taken_0x53c968 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x53c968) {
            ctx->pc = 0x53C9A8u;
            goto label_53c9a8;
        }
    }
    ctx->pc = 0x53C970u;
label_53c970:
    // 0x53c970: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53c970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53c974:
    // 0x53c974: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
label_53c978:
    if (ctx->pc == 0x53C978u) {
        ctx->pc = 0x53C978u;
            // 0x53c978: 0x8ce50cb4  lw          $a1, 0xCB4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
        ctx->pc = 0x53C97Cu;
        goto label_53c97c;
    }
    ctx->pc = 0x53C974u;
    {
        const bool branch_taken_0x53c974 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x53c974) {
            ctx->pc = 0x53C978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53C974u;
            // 0x53c978: 0x8ce50cb4  lw          $a1, 0xCB4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53C984u;
            goto label_53c984;
        }
    }
    ctx->pc = 0x53C97Cu;
label_53c97c:
    // 0x53c97c: 0x1000000e  b           . + 4 + (0xE << 2)
label_53c980:
    if (ctx->pc == 0x53C980u) {
        ctx->pc = 0x53C984u;
        goto label_53c984;
    }
    ctx->pc = 0x53C97Cu;
    {
        const bool branch_taken_0x53c97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53c97c) {
            ctx->pc = 0x53C9B8u;
            goto label_53c9b8;
        }
    }
    ctx->pc = 0x53C984u;
label_53c984:
    // 0x53c984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53c984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53c988:
    // 0x53c988: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_53c98c:
    if (ctx->pc == 0x53C98Cu) {
        ctx->pc = 0x53C990u;
        goto label_53c990;
    }
    ctx->pc = 0x53C988u;
    {
        const bool branch_taken_0x53c988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53c988) {
            ctx->pc = 0x53C9B8u;
            goto label_53c9b8;
        }
    }
    ctx->pc = 0x53C990u;
label_53c990:
    // 0x53c990: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53c990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53c994:
    // 0x53c994: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x53c994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_53c998:
    // 0x53c998: 0x320f809  jalr        $t9
label_53c99c:
    if (ctx->pc == 0x53C99Cu) {
        ctx->pc = 0x53C9A0u;
        goto label_53c9a0;
    }
    ctx->pc = 0x53C998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C9A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C9A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C9A0u; }
            if (ctx->pc != 0x53C9A0u) { return; }
        }
        }
    }
    ctx->pc = 0x53C9A0u;
label_53c9a0:
    // 0x53c9a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_53c9a4:
    if (ctx->pc == 0x53C9A4u) {
        ctx->pc = 0x53C9A8u;
        goto label_53c9a8;
    }
    ctx->pc = 0x53C9A0u;
    {
        const bool branch_taken_0x53c9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53c9a0) {
            ctx->pc = 0x53C9B8u;
            goto label_53c9b8;
        }
    }
    ctx->pc = 0x53C9A8u;
label_53c9a8:
    // 0x53c9a8: 0xc14f174  jal         func_53C5D0
label_53c9ac:
    if (ctx->pc == 0x53C9ACu) {
        ctx->pc = 0x53C9B0u;
        goto label_53c9b0;
    }
    ctx->pc = 0x53C9A8u;
    SET_GPR_U32(ctx, 31, 0x53C9B0u);
    ctx->pc = 0x53C5D0u;
    goto label_53c5d0;
    ctx->pc = 0x53C9B0u;
label_53c9b0:
    // 0x53c9b0: 0xc14f084  jal         func_53C210
label_53c9b4:
    if (ctx->pc == 0x53C9B4u) {
        ctx->pc = 0x53C9B4u;
            // 0x53c9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53C9B8u;
        goto label_53c9b8;
    }
    ctx->pc = 0x53C9B0u;
    SET_GPR_U32(ctx, 31, 0x53C9B8u);
    ctx->pc = 0x53C9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53C9B0u;
            // 0x53c9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53C210u;
    if (runtime->hasFunction(0x53C210u)) {
        auto targetFn = runtime->lookupFunction(0x53C210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C9B8u; }
        if (ctx->pc != 0x53C9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053C210_0x53c210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C9B8u; }
        if (ctx->pc != 0x53C9B8u) { return; }
    }
    ctx->pc = 0x53C9B8u;
label_53c9b8:
    // 0x53c9b8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53c9bc:
    // 0x53c9bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x53c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53c9c0:
    // 0x53c9c0: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x53c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_53c9c4:
    // 0x53c9c4: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x53c9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_53c9c8:
    // 0x53c9c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53c9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53c9cc:
    // 0x53c9cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53c9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53c9d0:
    // 0x53c9d0: 0x3e00008  jr          $ra
label_53c9d4:
    if (ctx->pc == 0x53C9D4u) {
        ctx->pc = 0x53C9D4u;
            // 0x53c9d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x53C9D8u;
        goto label_53c9d8;
    }
    ctx->pc = 0x53C9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53C9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C9D0u;
            // 0x53c9d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53C9D8u;
label_53c9d8:
    // 0x53c9d8: 0x0  nop
    ctx->pc = 0x53c9d8u;
    // NOP
label_53c9dc:
    // 0x53c9dc: 0x0  nop
    ctx->pc = 0x53c9dcu;
    // NOP
label_53c9e0:
    // 0x53c9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53c9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_53c9e4:
    // 0x53c9e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53c9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53c9e8:
    // 0x53c9e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53c9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53c9ec:
    // 0x53c9ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53c9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53c9f0:
    // 0x53c9f0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_53c9f4:
    if (ctx->pc == 0x53C9F4u) {
        ctx->pc = 0x53C9F4u;
            // 0x53c9f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53C9F8u;
        goto label_53c9f8;
    }
    ctx->pc = 0x53C9F0u;
    {
        const bool branch_taken_0x53c9f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x53c9f0) {
            ctx->pc = 0x53C9F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53C9F0u;
            // 0x53c9f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53CA30u;
            goto label_53ca30;
        }
    }
    ctx->pc = 0x53C9F8u;
label_53c9f8:
    // 0x53c9f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_53c9fc:
    // 0x53c9fc: 0x244273a0  addiu       $v0, $v0, 0x73A0
    ctx->pc = 0x53c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29600));
label_53ca00:
    // 0x53ca00: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_53ca04:
    if (ctx->pc == 0x53CA04u) {
        ctx->pc = 0x53CA04u;
            // 0x53ca04: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x53CA08u;
        goto label_53ca08;
    }
    ctx->pc = 0x53CA00u;
    {
        const bool branch_taken_0x53ca00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x53CA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CA00u;
            // 0x53ca04: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53ca00) {
            ctx->pc = 0x53CA14u;
            goto label_53ca14;
        }
    }
    ctx->pc = 0x53CA08u;
label_53ca08:
    // 0x53ca08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_53ca0c:
    // 0x53ca0c: 0x2442cf10  addiu       $v0, $v0, -0x30F0
    ctx->pc = 0x53ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954768));
label_53ca10:
    // 0x53ca10: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x53ca10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_53ca14:
    // 0x53ca14: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x53ca14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_53ca18:
    // 0x53ca18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x53ca18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_53ca1c:
    // 0x53ca1c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_53ca20:
    if (ctx->pc == 0x53CA20u) {
        ctx->pc = 0x53CA24u;
        goto label_53ca24;
    }
    ctx->pc = 0x53CA1Cu;
    {
        const bool branch_taken_0x53ca1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x53ca1c) {
            ctx->pc = 0x53CA2Cu;
            goto label_53ca2c;
        }
    }
    ctx->pc = 0x53CA24u;
label_53ca24:
    // 0x53ca24: 0xc0400a8  jal         func_1002A0
label_53ca28:
    if (ctx->pc == 0x53CA28u) {
        ctx->pc = 0x53CA28u;
            // 0x53ca28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53CA2Cu;
        goto label_53ca2c;
    }
    ctx->pc = 0x53CA24u;
    SET_GPR_U32(ctx, 31, 0x53CA2Cu);
    ctx->pc = 0x53CA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53CA24u;
            // 0x53ca28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CA2Cu; }
        if (ctx->pc != 0x53CA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CA2Cu; }
        if (ctx->pc != 0x53CA2Cu) { return; }
    }
    ctx->pc = 0x53CA2Cu;
label_53ca2c:
    // 0x53ca2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x53ca2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53ca30:
    // 0x53ca30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53ca30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53ca34:
    // 0x53ca34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53ca34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53ca38:
    // 0x53ca38: 0x3e00008  jr          $ra
label_53ca3c:
    if (ctx->pc == 0x53CA3Cu) {
        ctx->pc = 0x53CA3Cu;
            // 0x53ca3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x53CA40u;
        goto label_53ca40;
    }
    ctx->pc = 0x53CA38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53CA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CA38u;
            // 0x53ca3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CA40u;
label_53ca40:
    // 0x53ca40: 0x3e00008  jr          $ra
label_53ca44:
    if (ctx->pc == 0x53CA44u) {
        ctx->pc = 0x53CA48u;
        goto label_53ca48;
    }
    ctx->pc = 0x53CA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CA48u;
label_53ca48:
    // 0x53ca48: 0x0  nop
    ctx->pc = 0x53ca48u;
    // NOP
label_53ca4c:
    // 0x53ca4c: 0x0  nop
    ctx->pc = 0x53ca4cu;
    // NOP
label_53ca50:
    // 0x53ca50: 0x3e00008  jr          $ra
label_53ca54:
    if (ctx->pc == 0x53CA54u) {
        ctx->pc = 0x53CA58u;
        goto label_53ca58;
    }
    ctx->pc = 0x53CA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CA58u;
label_53ca58:
    // 0x53ca58: 0x0  nop
    ctx->pc = 0x53ca58u;
    // NOP
label_53ca5c:
    // 0x53ca5c: 0x0  nop
    ctx->pc = 0x53ca5cu;
    // NOP
label_53ca60:
    // 0x53ca60: 0x3e00008  jr          $ra
label_53ca64:
    if (ctx->pc == 0x53CA64u) {
        ctx->pc = 0x53CA68u;
        goto label_53ca68;
    }
    ctx->pc = 0x53CA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CA68u;
label_53ca68:
    // 0x53ca68: 0x0  nop
    ctx->pc = 0x53ca68u;
    // NOP
label_53ca6c:
    // 0x53ca6c: 0x0  nop
    ctx->pc = 0x53ca6cu;
    // NOP
label_53ca70:
    // 0x53ca70: 0x3e00008  jr          $ra
label_53ca74:
    if (ctx->pc == 0x53CA74u) {
        ctx->pc = 0x53CA78u;
        goto label_53ca78;
    }
    ctx->pc = 0x53CA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CA78u;
label_53ca78:
    // 0x53ca78: 0x0  nop
    ctx->pc = 0x53ca78u;
    // NOP
label_53ca7c:
    // 0x53ca7c: 0x0  nop
    ctx->pc = 0x53ca7cu;
    // NOP
label_53ca80:
    // 0x53ca80: 0x3e00008  jr          $ra
label_53ca84:
    if (ctx->pc == 0x53CA84u) {
        ctx->pc = 0x53CA88u;
        goto label_53ca88;
    }
    ctx->pc = 0x53CA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CA88u;
label_53ca88:
    // 0x53ca88: 0x0  nop
    ctx->pc = 0x53ca88u;
    // NOP
label_53ca8c:
    // 0x53ca8c: 0x0  nop
    ctx->pc = 0x53ca8cu;
    // NOP
label_53ca90:
    // 0x53ca90: 0x3e00008  jr          $ra
label_53ca94:
    if (ctx->pc == 0x53CA94u) {
        ctx->pc = 0x53CA98u;
        goto label_53ca98;
    }
    ctx->pc = 0x53CA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CA98u;
label_53ca98:
    // 0x53ca98: 0x0  nop
    ctx->pc = 0x53ca98u;
    // NOP
label_53ca9c:
    // 0x53ca9c: 0x0  nop
    ctx->pc = 0x53ca9cu;
    // NOP
label_53caa0:
    // 0x53caa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_53caa4:
    // 0x53caa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x53caa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53caa8:
    // 0x53caa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53caa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53caac:
    // 0x53caac: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x53caacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_53cab0:
    // 0x53cab0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53cab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53cab4:
    // 0x53cab4: 0xc04a576  jal         func_1295D8
label_53cab8:
    if (ctx->pc == 0x53CAB8u) {
        ctx->pc = 0x53CAB8u;
            // 0x53cab8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53CABCu;
        goto label_53cabc;
    }
    ctx->pc = 0x53CAB4u;
    SET_GPR_U32(ctx, 31, 0x53CABCu);
    ctx->pc = 0x53CAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53CAB4u;
            // 0x53cab8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CABCu; }
        if (ctx->pc != 0x53CABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CABCu; }
        if (ctx->pc != 0x53CABCu) { return; }
    }
    ctx->pc = 0x53CABCu;
label_53cabc:
    // 0x53cabc: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x53cabcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
label_53cac0:
    // 0x53cac0: 0x1e3c  dsll32      $v1, $zero, 24
    ctx->pc = 0x53cac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (32 + 24));
label_53cac4:
    // 0x53cac4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x53cac4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_53cac8:
    // 0x53cac8: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x53cac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
label_53cacc:
    // 0x53cacc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x53caccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_53cad0:
    // 0x53cad0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x53cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_53cad4:
    // 0x53cad4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x53cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_53cad8:
    // 0x53cad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53cad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53cadc:
    // 0x53cadc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53cadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53cae0:
    // 0x53cae0: 0x3e00008  jr          $ra
label_53cae4:
    if (ctx->pc == 0x53CAE4u) {
        ctx->pc = 0x53CAE4u;
            // 0x53cae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x53CAE8u;
        goto label_53cae8;
    }
    ctx->pc = 0x53CAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53CAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CAE0u;
            // 0x53cae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CAE8u;
label_53cae8:
    // 0x53cae8: 0x0  nop
    ctx->pc = 0x53cae8u;
    // NOP
label_53caec:
    // 0x53caec: 0x0  nop
    ctx->pc = 0x53caecu;
    // NOP
label_53caf0:
    // 0x53caf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53caf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53caf4:
    // 0x53caf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53caf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53caf8:
    // 0x53caf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53caf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53cafc:
    // 0x53cafc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53cafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53cb00:
    // 0x53cb00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x53cb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53cb04:
    // 0x53cb04: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
label_53cb08:
    if (ctx->pc == 0x53CB08u) {
        ctx->pc = 0x53CB08u;
            // 0x53cb08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53CB0Cu;
        goto label_53cb0c;
    }
    ctx->pc = 0x53CB04u;
    {
        const bool branch_taken_0x53cb04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x53CB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CB04u;
            // 0x53cb08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53cb04) {
            ctx->pc = 0x53CBA8u;
            goto label_53cba8;
        }
    }
    ctx->pc = 0x53CB0Cu;
label_53cb0c:
    // 0x53cb0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_53cb10:
    // 0x53cb10: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53cb14:
    // 0x53cb14: 0x246373d0  addiu       $v1, $v1, 0x73D0
    ctx->pc = 0x53cb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29648));
label_53cb18:
    // 0x53cb18: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x53cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_53cb1c:
    // 0x53cb1c: 0x8c443e28  lw          $a0, 0x3E28($v0)
    ctx->pc = 0x53cb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
label_53cb20:
    // 0x53cb20: 0xc14f030  jal         func_53C0C0
label_53cb24:
    if (ctx->pc == 0x53CB24u) {
        ctx->pc = 0x53CB24u;
            // 0x53cb24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53CB28u;
        goto label_53cb28;
    }
    ctx->pc = 0x53CB20u;
    SET_GPR_U32(ctx, 31, 0x53CB28u);
    ctx->pc = 0x53CB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53CB20u;
            // 0x53cb24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53C0C0u;
    if (runtime->hasFunction(0x53C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x53C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CB28u; }
        if (ctx->pc != 0x53CB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053C0C0_0x53c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CB28u; }
        if (ctx->pc != 0x53CB28u) { return; }
    }
    ctx->pc = 0x53CB28u;
label_53cb28:
    // 0x53cb28: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x53cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_53cb2c:
    // 0x53cb2c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_53cb30:
    if (ctx->pc == 0x53CB30u) {
        ctx->pc = 0x53CB30u;
            // 0x53cb30: 0x8e240080  lw          $a0, 0x80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->pc = 0x53CB34u;
        goto label_53cb34;
    }
    ctx->pc = 0x53CB2Cu;
    {
        const bool branch_taken_0x53cb2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53cb2c) {
            ctx->pc = 0x53CB30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53CB2Cu;
            // 0x53cb30: 0x8e240080  lw          $a0, 0x80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53CB48u;
            goto label_53cb48;
        }
    }
    ctx->pc = 0x53CB34u;
label_53cb34:
    // 0x53cb34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53cb34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53cb38:
    // 0x53cb38: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x53cb38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_53cb3c:
    // 0x53cb3c: 0x320f809  jalr        $t9
label_53cb40:
    if (ctx->pc == 0x53CB40u) {
        ctx->pc = 0x53CB40u;
            // 0x53cb40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53CB44u;
        goto label_53cb44;
    }
    ctx->pc = 0x53CB3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53CB44u);
        ctx->pc = 0x53CB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CB3Cu;
            // 0x53cb40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53CB44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53CB44u; }
            if (ctx->pc != 0x53CB44u) { return; }
        }
        }
    }
    ctx->pc = 0x53CB44u;
label_53cb44:
    // 0x53cb44: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x53cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_53cb48:
    // 0x53cb48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53cb48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53cb4c:
    // 0x53cb4c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x53cb4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_53cb50:
    // 0x53cb50: 0x320f809  jalr        $t9
label_53cb54:
    if (ctx->pc == 0x53CB54u) {
        ctx->pc = 0x53CB58u;
        goto label_53cb58;
    }
    ctx->pc = 0x53CB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53CB58u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53CB58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53CB58u; }
            if (ctx->pc != 0x53CB58u) { return; }
        }
        }
    }
    ctx->pc = 0x53CB58u;
label_53cb58:
    // 0x53cb58: 0x26220054  addiu       $v0, $s1, 0x54
    ctx->pc = 0x53cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_53cb5c:
    // 0x53cb5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_53cb60:
    if (ctx->pc == 0x53CB60u) {
        ctx->pc = 0x53CB64u;
        goto label_53cb64;
    }
    ctx->pc = 0x53CB5Cu;
    {
        const bool branch_taken_0x53cb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53cb5c) {
            ctx->pc = 0x53CB70u;
            goto label_53cb70;
        }
    }
    ctx->pc = 0x53CB64u;
label_53cb64:
    // 0x53cb64: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_53cb68:
    // 0x53cb68: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x53cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
label_53cb6c:
    // 0x53cb6c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x53cb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_53cb70:
    // 0x53cb70: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_53cb74:
    if (ctx->pc == 0x53CB74u) {
        ctx->pc = 0x53CB74u;
            // 0x53cb74: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x53CB78u;
        goto label_53cb78;
    }
    ctx->pc = 0x53CB70u;
    {
        const bool branch_taken_0x53cb70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x53cb70) {
            ctx->pc = 0x53CB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53CB70u;
            // 0x53cb74: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53CB94u;
            goto label_53cb94;
        }
    }
    ctx->pc = 0x53CB78u;
label_53cb78:
    // 0x53cb78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_53cb7c:
    // 0x53cb7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53cb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53cb80:
    // 0x53cb80: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x53cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_53cb84:
    // 0x53cb84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x53cb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53cb88:
    // 0x53cb88: 0xc057a68  jal         func_15E9A0
label_53cb8c:
    if (ctx->pc == 0x53CB8Cu) {
        ctx->pc = 0x53CB8Cu;
            // 0x53cb8c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x53CB90u;
        goto label_53cb90;
    }
    ctx->pc = 0x53CB88u;
    SET_GPR_U32(ctx, 31, 0x53CB90u);
    ctx->pc = 0x53CB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53CB88u;
            // 0x53cb8c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CB90u; }
        if (ctx->pc != 0x53CB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CB90u; }
        if (ctx->pc != 0x53CB90u) { return; }
    }
    ctx->pc = 0x53CB90u;
label_53cb90:
    // 0x53cb90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x53cb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_53cb94:
    // 0x53cb94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x53cb94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_53cb98:
    // 0x53cb98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_53cb9c:
    if (ctx->pc == 0x53CB9Cu) {
        ctx->pc = 0x53CB9Cu;
            // 0x53cb9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53CBA0u;
        goto label_53cba0;
    }
    ctx->pc = 0x53CB98u;
    {
        const bool branch_taken_0x53cb98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x53cb98) {
            ctx->pc = 0x53CB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53CB98u;
            // 0x53cb9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53CBACu;
            goto label_53cbac;
        }
    }
    ctx->pc = 0x53CBA0u;
label_53cba0:
    // 0x53cba0: 0xc0400a8  jal         func_1002A0
label_53cba4:
    if (ctx->pc == 0x53CBA4u) {
        ctx->pc = 0x53CBA4u;
            // 0x53cba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53CBA8u;
        goto label_53cba8;
    }
    ctx->pc = 0x53CBA0u;
    SET_GPR_U32(ctx, 31, 0x53CBA8u);
    ctx->pc = 0x53CBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53CBA0u;
            // 0x53cba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CBA8u; }
        if (ctx->pc != 0x53CBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CBA8u; }
        if (ctx->pc != 0x53CBA8u) { return; }
    }
    ctx->pc = 0x53CBA8u;
label_53cba8:
    // 0x53cba8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x53cba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53cbac:
    // 0x53cbac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53cbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53cbb0:
    // 0x53cbb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53cbb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53cbb4:
    // 0x53cbb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53cbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53cbb8:
    // 0x53cbb8: 0x3e00008  jr          $ra
label_53cbbc:
    if (ctx->pc == 0x53CBBCu) {
        ctx->pc = 0x53CBBCu;
            // 0x53cbbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53CBC0u;
        goto label_53cbc0;
    }
    ctx->pc = 0x53CBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53CBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CBB8u;
            // 0x53cbbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CBC0u;
label_53cbc0:
    // 0x53cbc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53cbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53cbc4:
    // 0x53cbc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53cbc8:
    // 0x53cbc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53cbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53cbcc:
    // 0x53cbcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53cbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53cbd0:
    // 0x53cbd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x53cbd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53cbd4:
    // 0x53cbd4: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_53cbd8:
    if (ctx->pc == 0x53CBD8u) {
        ctx->pc = 0x53CBD8u;
            // 0x53cbd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53CBDCu;
        goto label_53cbdc;
    }
    ctx->pc = 0x53CBD4u;
    {
        const bool branch_taken_0x53cbd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x53CBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CBD4u;
            // 0x53cbd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53cbd4) {
            ctx->pc = 0x53CC1Cu;
            goto label_53cc1c;
        }
    }
    ctx->pc = 0x53CBDCu;
label_53cbdc:
    // 0x53cbdc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_53cbe0:
    // 0x53cbe0: 0x24427960  addiu       $v0, $v0, 0x7960
    ctx->pc = 0x53cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31072));
label_53cbe4:
    // 0x53cbe4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x53cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_53cbe8:
    // 0x53cbe8: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x53cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_53cbec:
    // 0x53cbec: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_53cbf0:
    if (ctx->pc == 0x53CBF0u) {
        ctx->pc = 0x53CBF0u;
            // 0x53cbf0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x53CBF4u;
        goto label_53cbf4;
    }
    ctx->pc = 0x53CBECu;
    {
        const bool branch_taken_0x53cbec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x53cbec) {
            ctx->pc = 0x53CBF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53CBECu;
            // 0x53cbf0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53CC08u;
            goto label_53cc08;
        }
    }
    ctx->pc = 0x53CBF4u;
label_53cbf4:
    // 0x53cbf4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53cbf8:
    // 0x53cbf8: 0xc0fe48c  jal         func_3F9230
label_53cbfc:
    if (ctx->pc == 0x53CBFCu) {
        ctx->pc = 0x53CBFCu;
            // 0x53cbfc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x53CC00u;
        goto label_53cc00;
    }
    ctx->pc = 0x53CBF8u;
    SET_GPR_U32(ctx, 31, 0x53CC00u);
    ctx->pc = 0x53CBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53CBF8u;
            // 0x53cbfc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CC00u; }
        if (ctx->pc != 0x53CC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CC00u; }
        if (ctx->pc != 0x53CC00u) { return; }
    }
    ctx->pc = 0x53CC00u;
label_53cc00:
    // 0x53cc00: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x53cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_53cc04:
    // 0x53cc04: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x53cc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_53cc08:
    // 0x53cc08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x53cc08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_53cc0c:
    // 0x53cc0c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_53cc10:
    if (ctx->pc == 0x53CC10u) {
        ctx->pc = 0x53CC10u;
            // 0x53cc10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53CC14u;
        goto label_53cc14;
    }
    ctx->pc = 0x53CC0Cu;
    {
        const bool branch_taken_0x53cc0c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x53cc0c) {
            ctx->pc = 0x53CC10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53CC0Cu;
            // 0x53cc10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53CC20u;
            goto label_53cc20;
        }
    }
    ctx->pc = 0x53CC14u;
label_53cc14:
    // 0x53cc14: 0xc0400a8  jal         func_1002A0
label_53cc18:
    if (ctx->pc == 0x53CC18u) {
        ctx->pc = 0x53CC18u;
            // 0x53cc18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53CC1Cu;
        goto label_53cc1c;
    }
    ctx->pc = 0x53CC14u;
    SET_GPR_U32(ctx, 31, 0x53CC1Cu);
    ctx->pc = 0x53CC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53CC14u;
            // 0x53cc18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CC1Cu; }
        if (ctx->pc != 0x53CC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CC1Cu; }
        if (ctx->pc != 0x53CC1Cu) { return; }
    }
    ctx->pc = 0x53CC1Cu;
label_53cc1c:
    // 0x53cc1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x53cc1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53cc20:
    // 0x53cc20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53cc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53cc24:
    // 0x53cc24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53cc24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53cc28:
    // 0x53cc28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53cc28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53cc2c:
    // 0x53cc2c: 0x3e00008  jr          $ra
label_53cc30:
    if (ctx->pc == 0x53CC30u) {
        ctx->pc = 0x53CC30u;
            // 0x53cc30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53CC34u;
        goto label_53cc34;
    }
    ctx->pc = 0x53CC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53CC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CC2Cu;
            // 0x53cc30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CC34u;
label_53cc34:
    // 0x53cc34: 0x0  nop
    ctx->pc = 0x53cc34u;
    // NOP
label_53cc38:
    // 0x53cc38: 0x0  nop
    ctx->pc = 0x53cc38u;
    // NOP
label_53cc3c:
    // 0x53cc3c: 0x0  nop
    ctx->pc = 0x53cc3cu;
    // NOP
label_53cc40:
    // 0x53cc40: 0x8c840090  lw          $a0, 0x90($a0)
    ctx->pc = 0x53cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_53cc44:
    // 0x53cc44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53cc44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53cc48:
    // 0x53cc48: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53cc48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53cc4c:
    // 0x53cc4c: 0x3200008  jr          $t9
label_53cc50:
    if (ctx->pc == 0x53CC50u) {
        ctx->pc = 0x53CC54u;
        goto label_53cc54;
    }
    ctx->pc = 0x53CC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CC54u;
label_53cc54:
    // 0x53cc54: 0x0  nop
    ctx->pc = 0x53cc54u;
    // NOP
label_53cc58:
    // 0x53cc58: 0x0  nop
    ctx->pc = 0x53cc58u;
    // NOP
label_53cc5c:
    // 0x53cc5c: 0x0  nop
    ctx->pc = 0x53cc5cu;
    // NOP
label_53cc60:
    // 0x53cc60: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x53cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_53cc64:
    // 0x53cc64: 0x8c633e28  lw          $v1, 0x3E28($v1)
    ctx->pc = 0x53cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_53cc68:
    // 0x53cc68: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x53cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
label_53cc6c:
    // 0x53cc6c: 0x3e00008  jr          $ra
label_53cc70:
    if (ctx->pc == 0x53CC70u) {
        ctx->pc = 0x53CC70u;
            // 0x53cc70: 0xac66001c  sw          $a2, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
        ctx->pc = 0x53CC74u;
        goto label_53cc74;
    }
    ctx->pc = 0x53CC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53CC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CC6Cu;
            // 0x53cc70: 0xac66001c  sw          $a2, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CC74u;
label_53cc74:
    // 0x53cc74: 0x0  nop
    ctx->pc = 0x53cc74u;
    // NOP
label_53cc78:
    // 0x53cc78: 0x0  nop
    ctx->pc = 0x53cc78u;
    // NOP
label_53cc7c:
    // 0x53cc7c: 0x0  nop
    ctx->pc = 0x53cc7cu;
    // NOP
label_53cc80:
    // 0x53cc80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53cc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_53cc84:
    // 0x53cc84: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x53cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_53cc88:
    // 0x53cc88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53cc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53cc8c:
    // 0x53cc8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53cc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53cc90:
    // 0x53cc90: 0x8c703e28  lw          $s0, 0x3E28($v1)
    ctx->pc = 0x53cc90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_53cc94:
    // 0x53cc94: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x53cc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_53cc98:
    // 0x53cc98: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
label_53cc9c:
    if (ctx->pc == 0x53CC9Cu) {
        ctx->pc = 0x53CC9Cu;
            // 0x53cc9c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x53CCA0u;
        goto label_53cca0;
    }
    ctx->pc = 0x53CC98u;
    {
        const bool branch_taken_0x53cc98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x53cc98) {
            ctx->pc = 0x53CC9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53CC98u;
            // 0x53cc9c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53CCD8u;
            goto label_53ccd8;
        }
    }
    ctx->pc = 0x53CCA0u;
label_53cca0:
    // 0x53cca0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53cca4:
    // 0x53cca4: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x53cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_53cca8:
    // 0x53cca8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x53cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_53ccac:
    // 0x53ccac: 0x45082b  sltu        $at, $v0, $a1
    ctx->pc = 0x53ccacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_53ccb0:
    // 0x53ccb0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_53ccb4:
    if (ctx->pc == 0x53CCB4u) {
        ctx->pc = 0x53CCB8u;
        goto label_53ccb8;
    }
    ctx->pc = 0x53CCB0u;
    {
        const bool branch_taken_0x53ccb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x53ccb0) {
            ctx->pc = 0x53CCC8u;
            goto label_53ccc8;
        }
    }
    ctx->pc = 0x53CCB8u;
label_53ccb8:
    // 0x53ccb8: 0xc0fe4e8  jal         func_3F93A0
label_53ccbc:
    if (ctx->pc == 0x53CCBCu) {
        ctx->pc = 0x53CCC0u;
        goto label_53ccc0;
    }
    ctx->pc = 0x53CCB8u;
    SET_GPR_U32(ctx, 31, 0x53CCC0u);
    ctx->pc = 0x3F93A0u;
    if (runtime->hasFunction(0x3F93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CCC0u; }
        if (ctx->pc != 0x53CCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F93A0_0x3f93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CCC0u; }
        if (ctx->pc != 0x53CCC0u) { return; }
    }
    ctx->pc = 0x53CCC0u;
label_53ccc0:
    // 0x53ccc0: 0x10000004  b           . + 4 + (0x4 << 2)
label_53ccc4:
    if (ctx->pc == 0x53CCC4u) {
        ctx->pc = 0x53CCC4u;
            // 0x53ccc4: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x53CCC8u;
        goto label_53ccc8;
    }
    ctx->pc = 0x53CCC0u;
    {
        const bool branch_taken_0x53ccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53CCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CCC0u;
            // 0x53ccc4: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53ccc0) {
            ctx->pc = 0x53CCD4u;
            goto label_53ccd4;
        }
    }
    ctx->pc = 0x53CCC8u;
label_53ccc8:
    // 0x53ccc8: 0xc0fe48c  jal         func_3F9230
label_53cccc:
    if (ctx->pc == 0x53CCCCu) {
        ctx->pc = 0x53CCD0u;
        goto label_53ccd0;
    }
    ctx->pc = 0x53CCC8u;
    SET_GPR_U32(ctx, 31, 0x53CCD0u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CCD0u; }
        if (ctx->pc != 0x53CCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CCD0u; }
        if (ctx->pc != 0x53CCD0u) { return; }
    }
    ctx->pc = 0x53CCD0u;
label_53ccd0:
    // 0x53ccd0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x53ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_53ccd4:
    // 0x53ccd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x53ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_53ccd8:
    // 0x53ccd8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x53ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_53ccdc:
    // 0x53ccdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53ccdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53cce0:
    // 0x53cce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53cce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53cce4:
    // 0x53cce4: 0x3e00008  jr          $ra
label_53cce8:
    if (ctx->pc == 0x53CCE8u) {
        ctx->pc = 0x53CCE8u;
            // 0x53cce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x53CCECu;
        goto label_53ccec;
    }
    ctx->pc = 0x53CCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53CCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CCE4u;
            // 0x53cce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CCECu;
label_53ccec:
    // 0x53ccec: 0x0  nop
    ctx->pc = 0x53ccecu;
    // NOP
label_53ccf0:
    // 0x53ccf0: 0x3e00008  jr          $ra
label_53ccf4:
    if (ctx->pc == 0x53CCF4u) {
        ctx->pc = 0x53CCF8u;
        goto label_53ccf8;
    }
    ctx->pc = 0x53CCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CCF8u;
label_53ccf8:
    // 0x53ccf8: 0x0  nop
    ctx->pc = 0x53ccf8u;
    // NOP
label_53ccfc:
    // 0x53ccfc: 0x0  nop
    ctx->pc = 0x53ccfcu;
    // NOP
label_53cd00:
    // 0x53cd00: 0x3e00008  jr          $ra
label_53cd04:
    if (ctx->pc == 0x53CD04u) {
        ctx->pc = 0x53CD08u;
        goto label_53cd08;
    }
    ctx->pc = 0x53CD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CD08u;
label_53cd08:
    // 0x53cd08: 0x0  nop
    ctx->pc = 0x53cd08u;
    // NOP
label_53cd0c:
    // 0x53cd0c: 0x0  nop
    ctx->pc = 0x53cd0cu;
    // NOP
label_53cd10:
    // 0x53cd10: 0x3e00008  jr          $ra
label_53cd14:
    if (ctx->pc == 0x53CD14u) {
        ctx->pc = 0x53CD18u;
        goto label_53cd18;
    }
    ctx->pc = 0x53CD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CD18u;
label_53cd18:
    // 0x53cd18: 0x0  nop
    ctx->pc = 0x53cd18u;
    // NOP
label_53cd1c:
    // 0x53cd1c: 0x0  nop
    ctx->pc = 0x53cd1cu;
    // NOP
label_53cd20:
    // 0x53cd20: 0x3e00008  jr          $ra
label_53cd24:
    if (ctx->pc == 0x53CD24u) {
        ctx->pc = 0x53CD28u;
        goto label_53cd28;
    }
    ctx->pc = 0x53CD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CD28u;
label_53cd28:
    // 0x53cd28: 0x0  nop
    ctx->pc = 0x53cd28u;
    // NOP
label_53cd2c:
    // 0x53cd2c: 0x0  nop
    ctx->pc = 0x53cd2cu;
    // NOP
label_53cd30:
    // 0x53cd30: 0x3e00008  jr          $ra
label_53cd34:
    if (ctx->pc == 0x53CD34u) {
        ctx->pc = 0x53CD38u;
        goto label_53cd38;
    }
    ctx->pc = 0x53CD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CD38u;
label_53cd38:
    // 0x53cd38: 0x0  nop
    ctx->pc = 0x53cd38u;
    // NOP
label_53cd3c:
    // 0x53cd3c: 0x0  nop
    ctx->pc = 0x53cd3cu;
    // NOP
label_53cd40:
    // 0x53cd40: 0x3e00008  jr          $ra
label_53cd44:
    if (ctx->pc == 0x53CD44u) {
        ctx->pc = 0x53CD48u;
        goto label_53cd48;
    }
    ctx->pc = 0x53CD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CD48u;
label_53cd48:
    // 0x53cd48: 0x0  nop
    ctx->pc = 0x53cd48u;
    // NOP
label_53cd4c:
    // 0x53cd4c: 0x0  nop
    ctx->pc = 0x53cd4cu;
    // NOP
label_53cd50:
    // 0x53cd50: 0x3e00008  jr          $ra
label_53cd54:
    if (ctx->pc == 0x53CD54u) {
        ctx->pc = 0x53CD58u;
        goto label_53cd58;
    }
    ctx->pc = 0x53CD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CD58u;
label_53cd58:
    // 0x53cd58: 0x0  nop
    ctx->pc = 0x53cd58u;
    // NOP
label_53cd5c:
    // 0x53cd5c: 0x0  nop
    ctx->pc = 0x53cd5cu;
    // NOP
label_53cd60:
    // 0x53cd60: 0x3e00008  jr          $ra
label_53cd64:
    if (ctx->pc == 0x53CD64u) {
        ctx->pc = 0x53CD68u;
        goto label_53cd68;
    }
    ctx->pc = 0x53CD60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CD68u;
label_53cd68:
    // 0x53cd68: 0x0  nop
    ctx->pc = 0x53cd68u;
    // NOP
label_53cd6c:
    // 0x53cd6c: 0x0  nop
    ctx->pc = 0x53cd6cu;
    // NOP
label_53cd70:
    // 0x53cd70: 0x3e00008  jr          $ra
label_53cd74:
    if (ctx->pc == 0x53CD74u) {
        ctx->pc = 0x53CD78u;
        goto label_53cd78;
    }
    ctx->pc = 0x53CD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CD78u;
label_53cd78:
    // 0x53cd78: 0x0  nop
    ctx->pc = 0x53cd78u;
    // NOP
label_53cd7c:
    // 0x53cd7c: 0x0  nop
    ctx->pc = 0x53cd7cu;
    // NOP
label_53cd80:
    // 0x53cd80: 0x3e00008  jr          $ra
label_53cd84:
    if (ctx->pc == 0x53CD84u) {
        ctx->pc = 0x53CD88u;
        goto label_53cd88;
    }
    ctx->pc = 0x53CD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CD88u;
label_53cd88:
    // 0x53cd88: 0x0  nop
    ctx->pc = 0x53cd88u;
    // NOP
label_53cd8c:
    // 0x53cd8c: 0x0  nop
    ctx->pc = 0x53cd8cu;
    // NOP
label_53cd90:
    // 0x53cd90: 0x3e00008  jr          $ra
label_53cd94:
    if (ctx->pc == 0x53CD94u) {
        ctx->pc = 0x53CD98u;
        goto label_53cd98;
    }
    ctx->pc = 0x53CD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CD98u;
label_53cd98:
    // 0x53cd98: 0x0  nop
    ctx->pc = 0x53cd98u;
    // NOP
label_53cd9c:
    // 0x53cd9c: 0x0  nop
    ctx->pc = 0x53cd9cu;
    // NOP
label_53cda0:
    // 0x53cda0: 0x3e00008  jr          $ra
label_53cda4:
    if (ctx->pc == 0x53CDA4u) {
        ctx->pc = 0x53CDA8u;
        goto label_53cda8;
    }
    ctx->pc = 0x53CDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CDA8u;
label_53cda8:
    // 0x53cda8: 0x0  nop
    ctx->pc = 0x53cda8u;
    // NOP
label_53cdac:
    // 0x53cdac: 0x0  nop
    ctx->pc = 0x53cdacu;
    // NOP
label_53cdb0:
    // 0x53cdb0: 0x3e00008  jr          $ra
label_53cdb4:
    if (ctx->pc == 0x53CDB4u) {
        ctx->pc = 0x53CDB8u;
        goto label_53cdb8;
    }
    ctx->pc = 0x53CDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CDB8u;
label_53cdb8:
    // 0x53cdb8: 0x0  nop
    ctx->pc = 0x53cdb8u;
    // NOP
label_53cdbc:
    // 0x53cdbc: 0x0  nop
    ctx->pc = 0x53cdbcu;
    // NOP
label_53cdc0:
    // 0x53cdc0: 0x3e00008  jr          $ra
label_53cdc4:
    if (ctx->pc == 0x53CDC4u) {
        ctx->pc = 0x53CDC8u;
        goto label_53cdc8;
    }
    ctx->pc = 0x53CDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CDC8u;
label_53cdc8:
    // 0x53cdc8: 0x0  nop
    ctx->pc = 0x53cdc8u;
    // NOP
label_53cdcc:
    // 0x53cdcc: 0x0  nop
    ctx->pc = 0x53cdccu;
    // NOP
label_53cdd0:
    // 0x53cdd0: 0x3e00008  jr          $ra
label_53cdd4:
    if (ctx->pc == 0x53CDD4u) {
        ctx->pc = 0x53CDD8u;
        goto label_53cdd8;
    }
    ctx->pc = 0x53CDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CDD8u;
label_53cdd8:
    // 0x53cdd8: 0x0  nop
    ctx->pc = 0x53cdd8u;
    // NOP
label_53cddc:
    // 0x53cddc: 0x0  nop
    ctx->pc = 0x53cddcu;
    // NOP
label_53cde0:
    // 0x53cde0: 0x3e00008  jr          $ra
label_53cde4:
    if (ctx->pc == 0x53CDE4u) {
        ctx->pc = 0x53CDE8u;
        goto label_53cde8;
    }
    ctx->pc = 0x53CDE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CDE8u;
label_53cde8:
    // 0x53cde8: 0x0  nop
    ctx->pc = 0x53cde8u;
    // NOP
label_53cdec:
    // 0x53cdec: 0x0  nop
    ctx->pc = 0x53cdecu;
    // NOP
label_53cdf0:
    // 0x53cdf0: 0x3e00008  jr          $ra
label_53cdf4:
    if (ctx->pc == 0x53CDF4u) {
        ctx->pc = 0x53CDF8u;
        goto label_53cdf8;
    }
    ctx->pc = 0x53CDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CDF8u;
label_53cdf8:
    // 0x53cdf8: 0x0  nop
    ctx->pc = 0x53cdf8u;
    // NOP
label_53cdfc:
    // 0x53cdfc: 0x0  nop
    ctx->pc = 0x53cdfcu;
    // NOP
label_53ce00:
    // 0x53ce00: 0x3e00008  jr          $ra
label_53ce04:
    if (ctx->pc == 0x53CE04u) {
        ctx->pc = 0x53CE08u;
        goto label_53ce08;
    }
    ctx->pc = 0x53CE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CE08u;
label_53ce08:
    // 0x53ce08: 0x0  nop
    ctx->pc = 0x53ce08u;
    // NOP
label_53ce0c:
    // 0x53ce0c: 0x0  nop
    ctx->pc = 0x53ce0cu;
    // NOP
label_53ce10:
    // 0x53ce10: 0x3e00008  jr          $ra
label_53ce14:
    if (ctx->pc == 0x53CE14u) {
        ctx->pc = 0x53CE18u;
        goto label_53ce18;
    }
    ctx->pc = 0x53CE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CE18u;
label_53ce18:
    // 0x53ce18: 0x0  nop
    ctx->pc = 0x53ce18u;
    // NOP
label_53ce1c:
    // 0x53ce1c: 0x0  nop
    ctx->pc = 0x53ce1cu;
    // NOP
label_53ce20:
    // 0x53ce20: 0x3e00008  jr          $ra
label_53ce24:
    if (ctx->pc == 0x53CE24u) {
        ctx->pc = 0x53CE28u;
        goto label_53ce28;
    }
    ctx->pc = 0x53CE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CE28u;
label_53ce28:
    // 0x53ce28: 0x0  nop
    ctx->pc = 0x53ce28u;
    // NOP
label_53ce2c:
    // 0x53ce2c: 0x0  nop
    ctx->pc = 0x53ce2cu;
    // NOP
label_53ce30:
    // 0x53ce30: 0x3e00008  jr          $ra
label_53ce34:
    if (ctx->pc == 0x53CE34u) {
        ctx->pc = 0x53CE38u;
        goto label_53ce38;
    }
    ctx->pc = 0x53CE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CE38u;
label_53ce38:
    // 0x53ce38: 0x0  nop
    ctx->pc = 0x53ce38u;
    // NOP
label_53ce3c:
    // 0x53ce3c: 0x0  nop
    ctx->pc = 0x53ce3cu;
    // NOP
label_53ce40:
    // 0x53ce40: 0x3e00008  jr          $ra
label_53ce44:
    if (ctx->pc == 0x53CE44u) {
        ctx->pc = 0x53CE48u;
        goto label_53ce48;
    }
    ctx->pc = 0x53CE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CE48u;
label_53ce48:
    // 0x53ce48: 0x0  nop
    ctx->pc = 0x53ce48u;
    // NOP
label_53ce4c:
    // 0x53ce4c: 0x0  nop
    ctx->pc = 0x53ce4cu;
    // NOP
label_53ce50:
    // 0x53ce50: 0x3e00008  jr          $ra
label_53ce54:
    if (ctx->pc == 0x53CE54u) {
        ctx->pc = 0x53CE58u;
        goto label_53ce58;
    }
    ctx->pc = 0x53CE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CE58u;
label_53ce58:
    // 0x53ce58: 0x0  nop
    ctx->pc = 0x53ce58u;
    // NOP
label_53ce5c:
    // 0x53ce5c: 0x0  nop
    ctx->pc = 0x53ce5cu;
    // NOP
label_53ce60:
    // 0x53ce60: 0x3e00008  jr          $ra
label_53ce64:
    if (ctx->pc == 0x53CE64u) {
        ctx->pc = 0x53CE68u;
        goto label_53ce68;
    }
    ctx->pc = 0x53CE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CE68u;
label_53ce68:
    // 0x53ce68: 0x0  nop
    ctx->pc = 0x53ce68u;
    // NOP
label_53ce6c:
    // 0x53ce6c: 0x0  nop
    ctx->pc = 0x53ce6cu;
    // NOP
label_53ce70:
    // 0x53ce70: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x53ce70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53ce74:
    // 0x53ce74: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_53ce78:
    if (ctx->pc == 0x53CE78u) {
        ctx->pc = 0x53CE78u;
            // 0x53ce78: 0xa0850010  sb          $a1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x53CE7Cu;
        goto label_53ce7c;
    }
    ctx->pc = 0x53CE74u;
    {
        const bool branch_taken_0x53ce74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53ce74) {
            ctx->pc = 0x53CE78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53CE74u;
            // 0x53ce78: 0xa0850010  sb          $a1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53CE84u;
            goto label_53ce84;
        }
    }
    ctx->pc = 0x53CE7Cu;
label_53ce7c:
    // 0x53ce7c: 0xa08300a3  sb          $v1, 0xA3($a0)
    ctx->pc = 0x53ce7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 163), (uint8_t)GPR_U32(ctx, 3));
label_53ce80:
    // 0x53ce80: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x53ce80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
label_53ce84:
    // 0x53ce84: 0x3e00008  jr          $ra
label_53ce88:
    if (ctx->pc == 0x53CE88u) {
        ctx->pc = 0x53CE8Cu;
        goto label_53ce8c;
    }
    ctx->pc = 0x53CE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CE8Cu;
label_53ce8c:
    // 0x53ce8c: 0x0  nop
    ctx->pc = 0x53ce8cu;
    // NOP
label_53ce90:
    // 0x53ce90: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_53ce94:
    if (ctx->pc == 0x53CE94u) {
        ctx->pc = 0x53CE94u;
            // 0x53ce94: 0x90830010  lbu         $v1, 0x10($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x53CE98u;
        goto label_53ce98;
    }
    ctx->pc = 0x53CE90u;
    {
        const bool branch_taken_0x53ce90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ce90) {
            ctx->pc = 0x53CE94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53CE90u;
            // 0x53ce94: 0x90830010  lbu         $v1, 0x10($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53CEACu;
            goto label_53ceac;
        }
    }
    ctx->pc = 0x53CE98u;
label_53ce98:
    // 0x53ce98: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x53ce98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53ce9c:
    // 0x53ce9c: 0x10a30002  beq         $a1, $v1, . + 4 + (0x2 << 2)
label_53cea0:
    if (ctx->pc == 0x53CEA0u) {
        ctx->pc = 0x53CEA4u;
        goto label_53cea4;
    }
    ctx->pc = 0x53CE9Cu;
    {
        const bool branch_taken_0x53ce9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53ce9c) {
            ctx->pc = 0x53CEA8u;
            goto label_53cea8;
        }
    }
    ctx->pc = 0x53CEA4u;
label_53cea4:
    // 0x53cea4: 0xa08300a3  sb          $v1, 0xA3($a0)
    ctx->pc = 0x53cea4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 163), (uint8_t)GPR_U32(ctx, 3));
label_53cea8:
    // 0x53cea8: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x53cea8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53ceac:
    // 0x53ceac: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x53ceacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_53ceb0:
    // 0x53ceb0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x53ceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_53ceb4:
    // 0x53ceb4: 0x3e00008  jr          $ra
label_53ceb8:
    if (ctx->pc == 0x53CEB8u) {
        ctx->pc = 0x53CEB8u;
            // 0x53ceb8: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x53CEBCu;
        goto label_53cebc;
    }
    ctx->pc = 0x53CEB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53CEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CEB4u;
            // 0x53ceb8: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CEBCu;
label_53cebc:
    // 0x53cebc: 0x0  nop
    ctx->pc = 0x53cebcu;
    // NOP
label_53cec0:
    // 0x53cec0: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x53cec0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53cec4:
    // 0x53cec4: 0xa08300a3  sb          $v1, 0xA3($a0)
    ctx->pc = 0x53cec4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 163), (uint8_t)GPR_U32(ctx, 3));
label_53cec8:
    // 0x53cec8: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x53cec8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53cecc:
    // 0x53cecc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x53ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_53ced0:
    // 0x53ced0: 0x3e00008  jr          $ra
label_53ced4:
    if (ctx->pc == 0x53CED4u) {
        ctx->pc = 0x53CED4u;
            // 0x53ced4: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x53CED8u;
        goto label_53ced8;
    }
    ctx->pc = 0x53CED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53CED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CED0u;
            // 0x53ced4: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CED8u;
label_53ced8:
    // 0x53ced8: 0x0  nop
    ctx->pc = 0x53ced8u;
    // NOP
label_53cedc:
    // 0x53cedc: 0x0  nop
    ctx->pc = 0x53cedcu;
    // NOP
label_53cee0:
    // 0x53cee0: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x53cee0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53cee4:
    // 0x53cee4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_53cee8:
    if (ctx->pc == 0x53CEE8u) {
        ctx->pc = 0x53CEE8u;
            // 0x53cee8: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x53CEECu;
        goto label_53ceec;
    }
    ctx->pc = 0x53CEE4u;
    {
        const bool branch_taken_0x53cee4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53cee4) {
            ctx->pc = 0x53CEE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53CEE4u;
            // 0x53cee8: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x53CEF4u;
            goto label_53cef4;
        }
    }
    ctx->pc = 0x53CEECu;
label_53ceec:
    // 0x53ceec: 0xa08300a3  sb          $v1, 0xA3($a0)
    ctx->pc = 0x53ceecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 163), (uint8_t)GPR_U32(ctx, 3));
label_53cef0:
    // 0x53cef0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x53cef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_53cef4:
    // 0x53cef4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x53cef4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53cef8:
    // 0x53cef8: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x53cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_53cefc:
    // 0x53cefc: 0x3e00008  jr          $ra
label_53cf00:
    if (ctx->pc == 0x53CF00u) {
        ctx->pc = 0x53CF00u;
            // 0x53cf00: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x53CF04u;
        goto label_53cf04;
    }
    ctx->pc = 0x53CEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53CF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CEFCu;
            // 0x53cf00: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CF04u;
label_53cf04:
    // 0x53cf04: 0x0  nop
    ctx->pc = 0x53cf04u;
    // NOP
label_53cf08:
    // 0x53cf08: 0x0  nop
    ctx->pc = 0x53cf08u;
    // NOP
label_53cf0c:
    // 0x53cf0c: 0x0  nop
    ctx->pc = 0x53cf0cu;
    // NOP
label_53cf10:
    // 0x53cf10: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x53cf10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53cf14:
    // 0x53cf14: 0xa08300a3  sb          $v1, 0xA3($a0)
    ctx->pc = 0x53cf14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 163), (uint8_t)GPR_U32(ctx, 3));
label_53cf18:
    // 0x53cf18: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x53cf18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53cf1c:
    // 0x53cf1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x53cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_53cf20:
    // 0x53cf20: 0x3e00008  jr          $ra
label_53cf24:
    if (ctx->pc == 0x53CF24u) {
        ctx->pc = 0x53CF24u;
            // 0x53cf24: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x53CF28u;
        goto label_53cf28;
    }
    ctx->pc = 0x53CF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53CF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CF20u;
            // 0x53cf24: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CF28u;
label_53cf28:
    // 0x53cf28: 0x0  nop
    ctx->pc = 0x53cf28u;
    // NOP
label_53cf2c:
    // 0x53cf2c: 0x0  nop
    ctx->pc = 0x53cf2cu;
    // NOP
label_53cf30:
    // 0x53cf30: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x53cf30u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53cf34:
    // 0x53cf34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53cf38:
    // 0x53cf38: 0xa08500a3  sb          $a1, 0xA3($a0)
    ctx->pc = 0x53cf38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 163), (uint8_t)GPR_U32(ctx, 5));
label_53cf3c:
    // 0x53cf3c: 0x3e00008  jr          $ra
label_53cf40:
    if (ctx->pc == 0x53CF40u) {
        ctx->pc = 0x53CF40u;
            // 0x53cf40: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x53CF44u;
        goto label_53cf44;
    }
    ctx->pc = 0x53CF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53CF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CF3Cu;
            // 0x53cf40: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CF44u;
label_53cf44:
    // 0x53cf44: 0x0  nop
    ctx->pc = 0x53cf44u;
    // NOP
label_53cf48:
    // 0x53cf48: 0x0  nop
    ctx->pc = 0x53cf48u;
    // NOP
label_53cf4c:
    // 0x53cf4c: 0x0  nop
    ctx->pc = 0x53cf4cu;
    // NOP
label_53cf50:
    // 0x53cf50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x53cf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_53cf54:
    // 0x53cf54: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_53cf58:
    if (ctx->pc == 0x53CF58u) {
        ctx->pc = 0x53CF58u;
            // 0x53cf58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x53CF5Cu;
        goto label_53cf5c;
    }
    ctx->pc = 0x53CF54u;
    {
        const bool branch_taken_0x53cf54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x53CF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CF54u;
            // 0x53cf58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53cf54) {
            ctx->pc = 0x53CF6Cu;
            goto label_53cf6c;
        }
    }
    ctx->pc = 0x53CF5Cu;
label_53cf5c:
    // 0x53cf5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53cf5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53cf60:
    // 0x53cf60: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53cf60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53cf64:
    // 0x53cf64: 0x320f809  jalr        $t9
label_53cf68:
    if (ctx->pc == 0x53CF68u) {
        ctx->pc = 0x53CF68u;
            // 0x53cf68: 0x908500a3  lbu         $a1, 0xA3($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 163)));
        ctx->pc = 0x53CF6Cu;
        goto label_53cf6c;
    }
    ctx->pc = 0x53CF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53CF6Cu);
        ctx->pc = 0x53CF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CF64u;
            // 0x53cf68: 0x908500a3  lbu         $a1, 0xA3($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 163)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53CF6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53CF6Cu; }
            if (ctx->pc != 0x53CF6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53CF6Cu;
label_53cf6c:
    // 0x53cf6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x53cf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_53cf70:
    // 0x53cf70: 0x3e00008  jr          $ra
label_53cf74:
    if (ctx->pc == 0x53CF74u) {
        ctx->pc = 0x53CF74u;
            // 0x53cf74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x53CF78u;
        goto label_53cf78;
    }
    ctx->pc = 0x53CF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53CF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CF70u;
            // 0x53cf74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CF78u;
label_53cf78:
    // 0x53cf78: 0x0  nop
    ctx->pc = 0x53cf78u;
    // NOP
label_53cf7c:
    // 0x53cf7c: 0x0  nop
    ctx->pc = 0x53cf7cu;
    // NOP
label_53cf80:
    // 0x53cf80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53cf80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53cf84:
    // 0x53cf84: 0x908500a3  lbu         $a1, 0xA3($a0)
    ctx->pc = 0x53cf84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 163)));
label_53cf88:
    // 0x53cf88: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53cf88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53cf8c:
    // 0x53cf8c: 0x3200008  jr          $t9
label_53cf90:
    if (ctx->pc == 0x53CF90u) {
        ctx->pc = 0x53CF94u;
        goto label_53cf94;
    }
    ctx->pc = 0x53CF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CF94u;
label_53cf94:
    // 0x53cf94: 0x0  nop
    ctx->pc = 0x53cf94u;
    // NOP
label_53cf98:
    // 0x53cf98: 0x0  nop
    ctx->pc = 0x53cf98u;
    // NOP
label_53cf9c:
    // 0x53cf9c: 0x0  nop
    ctx->pc = 0x53cf9cu;
    // NOP
label_53cfa0:
    // 0x53cfa0: 0xa08500a3  sb          $a1, 0xA3($a0)
    ctx->pc = 0x53cfa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 163), (uint8_t)GPR_U32(ctx, 5));
label_53cfa4:
    // 0x53cfa4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53cfa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53cfa8:
    // 0x53cfa8: 0x908500a3  lbu         $a1, 0xA3($a0)
    ctx->pc = 0x53cfa8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 163)));
label_53cfac:
    // 0x53cfac: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53cfacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53cfb0:
    // 0x53cfb0: 0x3200008  jr          $t9
label_53cfb4:
    if (ctx->pc == 0x53CFB4u) {
        ctx->pc = 0x53CFB8u;
        goto label_53cfb8;
    }
    ctx->pc = 0x53CFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53CFB8u;
label_53cfb8:
    // 0x53cfb8: 0x0  nop
    ctx->pc = 0x53cfb8u;
    // NOP
label_53cfbc:
    // 0x53cfbc: 0x0  nop
    ctx->pc = 0x53cfbcu;
    // NOP
label_53cfc0:
    // 0x53cfc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x53cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_53cfc4:
    // 0x53cfc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x53cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_53cfc8:
    // 0x53cfc8: 0xa08500a1  sb          $a1, 0xA1($a0)
    ctx->pc = 0x53cfc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 161), (uint8_t)GPR_U32(ctx, 5));
label_53cfcc:
    // 0x53cfcc: 0xa08600a2  sb          $a2, 0xA2($a0)
    ctx->pc = 0x53cfccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 162), (uint8_t)GPR_U32(ctx, 6));
label_53cfd0:
    // 0x53cfd0: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x53cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_53cfd4:
    // 0x53cfd4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_53cfd8:
    if (ctx->pc == 0x53CFD8u) {
        ctx->pc = 0x53CFD8u;
            // 0x53cfd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53CFDCu;
        goto label_53cfdc;
    }
    ctx->pc = 0x53CFD4u;
    {
        const bool branch_taken_0x53cfd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x53CFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CFD4u;
            // 0x53cfd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53cfd4) {
            ctx->pc = 0x53CFF8u;
            goto label_53cff8;
        }
    }
    ctx->pc = 0x53CFDCu;
label_53cfdc:
    // 0x53cfdc: 0x80a200a1  lb          $v0, 0xA1($a1)
    ctx->pc = 0x53cfdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 161)));
label_53cfe0:
    // 0x53cfe0: 0x4420003  bltzl       $v0, . + 4 + (0x3 << 2)
label_53cfe4:
    if (ctx->pc == 0x53CFE4u) {
        ctx->pc = 0x53CFE4u;
            // 0x53cfe4: 0x8ca40080  lw          $a0, 0x80($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
        ctx->pc = 0x53CFE8u;
        goto label_53cfe8;
    }
    ctx->pc = 0x53CFE0u;
    {
        const bool branch_taken_0x53cfe0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x53cfe0) {
            ctx->pc = 0x53CFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53CFE0u;
            // 0x53cfe4: 0x8ca40080  lw          $a0, 0x80($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53CFF0u;
            goto label_53cff0;
        }
    }
    ctx->pc = 0x53CFE8u;
label_53cfe8:
    // 0x53cfe8: 0xa062007d  sb          $v0, 0x7D($v1)
    ctx->pc = 0x53cfe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 125), (uint8_t)GPR_U32(ctx, 2));
label_53cfec:
    // 0x53cfec: 0x8ca40080  lw          $a0, 0x80($a1)
    ctx->pc = 0x53cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_53cff0:
    // 0x53cff0: 0xc15964c  jal         func_565930
label_53cff4:
    if (ctx->pc == 0x53CFF4u) {
        ctx->pc = 0x53CFF4u;
            // 0x53cff4: 0x80a500a2  lb          $a1, 0xA2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 162)));
        ctx->pc = 0x53CFF8u;
        goto label_53cff8;
    }
    ctx->pc = 0x53CFF0u;
    SET_GPR_U32(ctx, 31, 0x53CFF8u);
    ctx->pc = 0x53CFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53CFF0u;
            // 0x53cff4: 0x80a500a2  lb          $a1, 0xA2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 162)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565930u;
    if (runtime->hasFunction(0x565930u)) {
        auto targetFn = runtime->lookupFunction(0x565930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CFF8u; }
        if (ctx->pc != 0x53CFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565930_0x565930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53CFF8u; }
        if (ctx->pc != 0x53CFF8u) { return; }
    }
    ctx->pc = 0x53CFF8u;
label_53cff8:
    // 0x53cff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x53cff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_53cffc:
    // 0x53cffc: 0x3e00008  jr          $ra
label_53d000:
    if (ctx->pc == 0x53D000u) {
        ctx->pc = 0x53D000u;
            // 0x53d000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x53D004u;
        goto label_53d004;
    }
    ctx->pc = 0x53CFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53D000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53CFFCu;
            // 0x53d000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53D004u;
label_53d004:
    // 0x53d004: 0x0  nop
    ctx->pc = 0x53d004u;
    // NOP
label_53d008:
    // 0x53d008: 0x0  nop
    ctx->pc = 0x53d008u;
    // NOP
label_53d00c:
    // 0x53d00c: 0x0  nop
    ctx->pc = 0x53d00cu;
    // NOP
label_53d010:
    // 0x53d010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x53d010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_53d014:
    // 0x53d014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x53d014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_53d018:
    // 0x53d018: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x53d018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_53d01c:
    // 0x53d01c: 0x2c61000d  sltiu       $at, $v1, 0xD
    ctx->pc = 0x53d01cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_53d020:
    // 0x53d020: 0x5020004f  beql        $at, $zero, . + 4 + (0x4F << 2)
label_53d024:
    if (ctx->pc == 0x53D024u) {
        ctx->pc = 0x53D024u;
            // 0x53d024: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x53D028u;
        goto label_53d028;
    }
    ctx->pc = 0x53D020u;
    {
        const bool branch_taken_0x53d020 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d020) {
            ctx->pc = 0x53D024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D020u;
            // 0x53d024: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D160u;
            goto label_53d160;
        }
    }
    ctx->pc = 0x53D028u;
label_53d028:
    // 0x53d028: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x53d028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_53d02c:
    // 0x53d02c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x53d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_53d030:
    // 0x53d030: 0x24a5d4c0  addiu       $a1, $a1, -0x2B40
    ctx->pc = 0x53d030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956224));
label_53d034:
    // 0x53d034: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x53d034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_53d038:
    // 0x53d038: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x53d038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_53d03c:
    // 0x53d03c: 0x600008  jr          $v1
label_53d040:
    if (ctx->pc == 0x53D040u) {
        ctx->pc = 0x53D044u;
        goto label_53d044;
    }
    ctx->pc = 0x53D03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x53D044u: goto label_53d044;
            case 0x53D05Cu: goto label_53d05c;
            case 0x53D074u: goto label_53d074;
            case 0x53D08Cu: goto label_53d08c;
            case 0x53D0A4u: goto label_53d0a4;
            case 0x53D0BCu: goto label_53d0bc;
            case 0x53D0D4u: goto label_53d0d4;
            case 0x53D0ECu: goto label_53d0ec;
            case 0x53D104u: goto label_53d104;
            case 0x53D11Cu: goto label_53d11c;
            case 0x53D134u: goto label_53d134;
            case 0x53D14Cu: goto label_53d14c;
            case 0x53D15Cu: goto label_53d15c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x53D044u;
label_53d044:
    // 0x53d044: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d048:
    // 0x53d048: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x53d048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_53d04c:
    // 0x53d04c: 0x320f809  jalr        $t9
label_53d050:
    if (ctx->pc == 0x53D050u) {
        ctx->pc = 0x53D054u;
        goto label_53d054;
    }
    ctx->pc = 0x53D04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D054u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D054u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D054u; }
            if (ctx->pc != 0x53D054u) { return; }
        }
        }
    }
    ctx->pc = 0x53D054u;
label_53d054:
    // 0x53d054: 0x10000041  b           . + 4 + (0x41 << 2)
label_53d058:
    if (ctx->pc == 0x53D058u) {
        ctx->pc = 0x53D05Cu;
        goto label_53d05c;
    }
    ctx->pc = 0x53D054u;
    {
        const bool branch_taken_0x53d054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d054) {
            ctx->pc = 0x53D15Cu;
            goto label_53d15c;
        }
    }
    ctx->pc = 0x53D05Cu;
label_53d05c:
    // 0x53d05c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d05cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d060:
    // 0x53d060: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x53d060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_53d064:
    // 0x53d064: 0x320f809  jalr        $t9
label_53d068:
    if (ctx->pc == 0x53D068u) {
        ctx->pc = 0x53D06Cu;
        goto label_53d06c;
    }
    ctx->pc = 0x53D064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D06Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D06Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D06Cu; }
            if (ctx->pc != 0x53D06Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53D06Cu;
label_53d06c:
    // 0x53d06c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_53d070:
    if (ctx->pc == 0x53D070u) {
        ctx->pc = 0x53D074u;
        goto label_53d074;
    }
    ctx->pc = 0x53D06Cu;
    {
        const bool branch_taken_0x53d06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d06c) {
            ctx->pc = 0x53D15Cu;
            goto label_53d15c;
        }
    }
    ctx->pc = 0x53D074u;
label_53d074:
    // 0x53d074: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d078:
    // 0x53d078: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x53d078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_53d07c:
    // 0x53d07c: 0x320f809  jalr        $t9
label_53d080:
    if (ctx->pc == 0x53D080u) {
        ctx->pc = 0x53D084u;
        goto label_53d084;
    }
    ctx->pc = 0x53D07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D084u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D084u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D084u; }
            if (ctx->pc != 0x53D084u) { return; }
        }
        }
    }
    ctx->pc = 0x53D084u;
label_53d084:
    // 0x53d084: 0x10000035  b           . + 4 + (0x35 << 2)
label_53d088:
    if (ctx->pc == 0x53D088u) {
        ctx->pc = 0x53D08Cu;
        goto label_53d08c;
    }
    ctx->pc = 0x53D084u;
    {
        const bool branch_taken_0x53d084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d084) {
            ctx->pc = 0x53D15Cu;
            goto label_53d15c;
        }
    }
    ctx->pc = 0x53D08Cu;
label_53d08c:
    // 0x53d08c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d08cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d090:
    // 0x53d090: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x53d090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_53d094:
    // 0x53d094: 0x320f809  jalr        $t9
label_53d098:
    if (ctx->pc == 0x53D098u) {
        ctx->pc = 0x53D09Cu;
        goto label_53d09c;
    }
    ctx->pc = 0x53D094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D09Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D09Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D09Cu; }
            if (ctx->pc != 0x53D09Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53D09Cu;
label_53d09c:
    // 0x53d09c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_53d0a0:
    if (ctx->pc == 0x53D0A0u) {
        ctx->pc = 0x53D0A4u;
        goto label_53d0a4;
    }
    ctx->pc = 0x53D09Cu;
    {
        const bool branch_taken_0x53d09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d09c) {
            ctx->pc = 0x53D15Cu;
            goto label_53d15c;
        }
    }
    ctx->pc = 0x53D0A4u;
label_53d0a4:
    // 0x53d0a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d0a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d0a8:
    // 0x53d0a8: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x53d0a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_53d0ac:
    // 0x53d0ac: 0x320f809  jalr        $t9
label_53d0b0:
    if (ctx->pc == 0x53D0B0u) {
        ctx->pc = 0x53D0B4u;
        goto label_53d0b4;
    }
    ctx->pc = 0x53D0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D0B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D0B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D0B4u; }
            if (ctx->pc != 0x53D0B4u) { return; }
        }
        }
    }
    ctx->pc = 0x53D0B4u;
label_53d0b4:
    // 0x53d0b4: 0x10000029  b           . + 4 + (0x29 << 2)
label_53d0b8:
    if (ctx->pc == 0x53D0B8u) {
        ctx->pc = 0x53D0BCu;
        goto label_53d0bc;
    }
    ctx->pc = 0x53D0B4u;
    {
        const bool branch_taken_0x53d0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d0b4) {
            ctx->pc = 0x53D15Cu;
            goto label_53d15c;
        }
    }
    ctx->pc = 0x53D0BCu;
label_53d0bc:
    // 0x53d0bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d0bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d0c0:
    // 0x53d0c0: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x53d0c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_53d0c4:
    // 0x53d0c4: 0x320f809  jalr        $t9
label_53d0c8:
    if (ctx->pc == 0x53D0C8u) {
        ctx->pc = 0x53D0CCu;
        goto label_53d0cc;
    }
    ctx->pc = 0x53D0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D0CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D0CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D0CCu; }
            if (ctx->pc != 0x53D0CCu) { return; }
        }
        }
    }
    ctx->pc = 0x53D0CCu;
label_53d0cc:
    // 0x53d0cc: 0x10000023  b           . + 4 + (0x23 << 2)
label_53d0d0:
    if (ctx->pc == 0x53D0D0u) {
        ctx->pc = 0x53D0D4u;
        goto label_53d0d4;
    }
    ctx->pc = 0x53D0CCu;
    {
        const bool branch_taken_0x53d0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d0cc) {
            ctx->pc = 0x53D15Cu;
            goto label_53d15c;
        }
    }
    ctx->pc = 0x53D0D4u;
label_53d0d4:
    // 0x53d0d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d0d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d0d8:
    // 0x53d0d8: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x53d0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_53d0dc:
    // 0x53d0dc: 0x320f809  jalr        $t9
label_53d0e0:
    if (ctx->pc == 0x53D0E0u) {
        ctx->pc = 0x53D0E4u;
        goto label_53d0e4;
    }
    ctx->pc = 0x53D0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D0E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D0E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D0E4u; }
            if (ctx->pc != 0x53D0E4u) { return; }
        }
        }
    }
    ctx->pc = 0x53D0E4u;
label_53d0e4:
    // 0x53d0e4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_53d0e8:
    if (ctx->pc == 0x53D0E8u) {
        ctx->pc = 0x53D0ECu;
        goto label_53d0ec;
    }
    ctx->pc = 0x53D0E4u;
    {
        const bool branch_taken_0x53d0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d0e4) {
            ctx->pc = 0x53D15Cu;
            goto label_53d15c;
        }
    }
    ctx->pc = 0x53D0ECu;
label_53d0ec:
    // 0x53d0ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d0ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d0f0:
    // 0x53d0f0: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x53d0f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_53d0f4:
    // 0x53d0f4: 0x320f809  jalr        $t9
label_53d0f8:
    if (ctx->pc == 0x53D0F8u) {
        ctx->pc = 0x53D0FCu;
        goto label_53d0fc;
    }
    ctx->pc = 0x53D0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D0FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D0FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D0FCu; }
            if (ctx->pc != 0x53D0FCu) { return; }
        }
        }
    }
    ctx->pc = 0x53D0FCu;
label_53d0fc:
    // 0x53d0fc: 0x10000017  b           . + 4 + (0x17 << 2)
label_53d100:
    if (ctx->pc == 0x53D100u) {
        ctx->pc = 0x53D104u;
        goto label_53d104;
    }
    ctx->pc = 0x53D0FCu;
    {
        const bool branch_taken_0x53d0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d0fc) {
            ctx->pc = 0x53D15Cu;
            goto label_53d15c;
        }
    }
    ctx->pc = 0x53D104u;
label_53d104:
    // 0x53d104: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d108:
    // 0x53d108: 0x8f3900a8  lw          $t9, 0xA8($t9)
    ctx->pc = 0x53d108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 168)));
label_53d10c:
    // 0x53d10c: 0x320f809  jalr        $t9
label_53d110:
    if (ctx->pc == 0x53D110u) {
        ctx->pc = 0x53D114u;
        goto label_53d114;
    }
    ctx->pc = 0x53D10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D114u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D114u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D114u; }
            if (ctx->pc != 0x53D114u) { return; }
        }
        }
    }
    ctx->pc = 0x53D114u;
label_53d114:
    // 0x53d114: 0x10000011  b           . + 4 + (0x11 << 2)
label_53d118:
    if (ctx->pc == 0x53D118u) {
        ctx->pc = 0x53D11Cu;
        goto label_53d11c;
    }
    ctx->pc = 0x53D114u;
    {
        const bool branch_taken_0x53d114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d114) {
            ctx->pc = 0x53D15Cu;
            goto label_53d15c;
        }
    }
    ctx->pc = 0x53D11Cu;
label_53d11c:
    // 0x53d11c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d120:
    // 0x53d120: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x53d120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_53d124:
    // 0x53d124: 0x320f809  jalr        $t9
label_53d128:
    if (ctx->pc == 0x53D128u) {
        ctx->pc = 0x53D12Cu;
        goto label_53d12c;
    }
    ctx->pc = 0x53D124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D12Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D12Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D12Cu; }
            if (ctx->pc != 0x53D12Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53D12Cu;
label_53d12c:
    // 0x53d12c: 0x1000000b  b           . + 4 + (0xB << 2)
label_53d130:
    if (ctx->pc == 0x53D130u) {
        ctx->pc = 0x53D134u;
        goto label_53d134;
    }
    ctx->pc = 0x53D12Cu;
    {
        const bool branch_taken_0x53d12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d12c) {
            ctx->pc = 0x53D15Cu;
            goto label_53d15c;
        }
    }
    ctx->pc = 0x53D134u;
label_53d134:
    // 0x53d134: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d138:
    // 0x53d138: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x53d138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_53d13c:
    // 0x53d13c: 0x320f809  jalr        $t9
label_53d140:
    if (ctx->pc == 0x53D140u) {
        ctx->pc = 0x53D144u;
        goto label_53d144;
    }
    ctx->pc = 0x53D13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D144u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D144u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D144u; }
            if (ctx->pc != 0x53D144u) { return; }
        }
        }
    }
    ctx->pc = 0x53D144u;
label_53d144:
    // 0x53d144: 0x10000005  b           . + 4 + (0x5 << 2)
label_53d148:
    if (ctx->pc == 0x53D148u) {
        ctx->pc = 0x53D14Cu;
        goto label_53d14c;
    }
    ctx->pc = 0x53D144u;
    {
        const bool branch_taken_0x53d144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d144) {
            ctx->pc = 0x53D15Cu;
            goto label_53d15c;
        }
    }
    ctx->pc = 0x53D14Cu;
label_53d14c:
    // 0x53d14c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d14cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d150:
    // 0x53d150: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x53d150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_53d154:
    // 0x53d154: 0x320f809  jalr        $t9
label_53d158:
    if (ctx->pc == 0x53D158u) {
        ctx->pc = 0x53D15Cu;
        goto label_53d15c;
    }
    ctx->pc = 0x53D154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D15Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D15Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D15Cu; }
            if (ctx->pc != 0x53D15Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53D15Cu;
label_53d15c:
    // 0x53d15c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x53d15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_53d160:
    // 0x53d160: 0x3e00008  jr          $ra
label_53d164:
    if (ctx->pc == 0x53D164u) {
        ctx->pc = 0x53D164u;
            // 0x53d164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x53D168u;
        goto label_53d168;
    }
    ctx->pc = 0x53D160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53D164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D160u;
            // 0x53d164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53D168u;
label_53d168:
    // 0x53d168: 0x0  nop
    ctx->pc = 0x53d168u;
    // NOP
label_53d16c:
    // 0x53d16c: 0x0  nop
    ctx->pc = 0x53d16cu;
    // NOP
}
