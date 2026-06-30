#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026C4D0
// Address: 0x26c4d0 - 0x26cff0
void sub_0026C4D0_0x26c4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C4D0_0x26c4d0");
#endif

    switch (ctx->pc) {
        case 0x26c4d0u: goto label_26c4d0;
        case 0x26c4d4u: goto label_26c4d4;
        case 0x26c4d8u: goto label_26c4d8;
        case 0x26c4dcu: goto label_26c4dc;
        case 0x26c4e0u: goto label_26c4e0;
        case 0x26c4e4u: goto label_26c4e4;
        case 0x26c4e8u: goto label_26c4e8;
        case 0x26c4ecu: goto label_26c4ec;
        case 0x26c4f0u: goto label_26c4f0;
        case 0x26c4f4u: goto label_26c4f4;
        case 0x26c4f8u: goto label_26c4f8;
        case 0x26c4fcu: goto label_26c4fc;
        case 0x26c500u: goto label_26c500;
        case 0x26c504u: goto label_26c504;
        case 0x26c508u: goto label_26c508;
        case 0x26c50cu: goto label_26c50c;
        case 0x26c510u: goto label_26c510;
        case 0x26c514u: goto label_26c514;
        case 0x26c518u: goto label_26c518;
        case 0x26c51cu: goto label_26c51c;
        case 0x26c520u: goto label_26c520;
        case 0x26c524u: goto label_26c524;
        case 0x26c528u: goto label_26c528;
        case 0x26c52cu: goto label_26c52c;
        case 0x26c530u: goto label_26c530;
        case 0x26c534u: goto label_26c534;
        case 0x26c538u: goto label_26c538;
        case 0x26c53cu: goto label_26c53c;
        case 0x26c540u: goto label_26c540;
        case 0x26c544u: goto label_26c544;
        case 0x26c548u: goto label_26c548;
        case 0x26c54cu: goto label_26c54c;
        case 0x26c550u: goto label_26c550;
        case 0x26c554u: goto label_26c554;
        case 0x26c558u: goto label_26c558;
        case 0x26c55cu: goto label_26c55c;
        case 0x26c560u: goto label_26c560;
        case 0x26c564u: goto label_26c564;
        case 0x26c568u: goto label_26c568;
        case 0x26c56cu: goto label_26c56c;
        case 0x26c570u: goto label_26c570;
        case 0x26c574u: goto label_26c574;
        case 0x26c578u: goto label_26c578;
        case 0x26c57cu: goto label_26c57c;
        case 0x26c580u: goto label_26c580;
        case 0x26c584u: goto label_26c584;
        case 0x26c588u: goto label_26c588;
        case 0x26c58cu: goto label_26c58c;
        case 0x26c590u: goto label_26c590;
        case 0x26c594u: goto label_26c594;
        case 0x26c598u: goto label_26c598;
        case 0x26c59cu: goto label_26c59c;
        case 0x26c5a0u: goto label_26c5a0;
        case 0x26c5a4u: goto label_26c5a4;
        case 0x26c5a8u: goto label_26c5a8;
        case 0x26c5acu: goto label_26c5ac;
        case 0x26c5b0u: goto label_26c5b0;
        case 0x26c5b4u: goto label_26c5b4;
        case 0x26c5b8u: goto label_26c5b8;
        case 0x26c5bcu: goto label_26c5bc;
        case 0x26c5c0u: goto label_26c5c0;
        case 0x26c5c4u: goto label_26c5c4;
        case 0x26c5c8u: goto label_26c5c8;
        case 0x26c5ccu: goto label_26c5cc;
        case 0x26c5d0u: goto label_26c5d0;
        case 0x26c5d4u: goto label_26c5d4;
        case 0x26c5d8u: goto label_26c5d8;
        case 0x26c5dcu: goto label_26c5dc;
        case 0x26c5e0u: goto label_26c5e0;
        case 0x26c5e4u: goto label_26c5e4;
        case 0x26c5e8u: goto label_26c5e8;
        case 0x26c5ecu: goto label_26c5ec;
        case 0x26c5f0u: goto label_26c5f0;
        case 0x26c5f4u: goto label_26c5f4;
        case 0x26c5f8u: goto label_26c5f8;
        case 0x26c5fcu: goto label_26c5fc;
        case 0x26c600u: goto label_26c600;
        case 0x26c604u: goto label_26c604;
        case 0x26c608u: goto label_26c608;
        case 0x26c60cu: goto label_26c60c;
        case 0x26c610u: goto label_26c610;
        case 0x26c614u: goto label_26c614;
        case 0x26c618u: goto label_26c618;
        case 0x26c61cu: goto label_26c61c;
        case 0x26c620u: goto label_26c620;
        case 0x26c624u: goto label_26c624;
        case 0x26c628u: goto label_26c628;
        case 0x26c62cu: goto label_26c62c;
        case 0x26c630u: goto label_26c630;
        case 0x26c634u: goto label_26c634;
        case 0x26c638u: goto label_26c638;
        case 0x26c63cu: goto label_26c63c;
        case 0x26c640u: goto label_26c640;
        case 0x26c644u: goto label_26c644;
        case 0x26c648u: goto label_26c648;
        case 0x26c64cu: goto label_26c64c;
        case 0x26c650u: goto label_26c650;
        case 0x26c654u: goto label_26c654;
        case 0x26c658u: goto label_26c658;
        case 0x26c65cu: goto label_26c65c;
        case 0x26c660u: goto label_26c660;
        case 0x26c664u: goto label_26c664;
        case 0x26c668u: goto label_26c668;
        case 0x26c66cu: goto label_26c66c;
        case 0x26c670u: goto label_26c670;
        case 0x26c674u: goto label_26c674;
        case 0x26c678u: goto label_26c678;
        case 0x26c67cu: goto label_26c67c;
        case 0x26c680u: goto label_26c680;
        case 0x26c684u: goto label_26c684;
        case 0x26c688u: goto label_26c688;
        case 0x26c68cu: goto label_26c68c;
        case 0x26c690u: goto label_26c690;
        case 0x26c694u: goto label_26c694;
        case 0x26c698u: goto label_26c698;
        case 0x26c69cu: goto label_26c69c;
        case 0x26c6a0u: goto label_26c6a0;
        case 0x26c6a4u: goto label_26c6a4;
        case 0x26c6a8u: goto label_26c6a8;
        case 0x26c6acu: goto label_26c6ac;
        case 0x26c6b0u: goto label_26c6b0;
        case 0x26c6b4u: goto label_26c6b4;
        case 0x26c6b8u: goto label_26c6b8;
        case 0x26c6bcu: goto label_26c6bc;
        case 0x26c6c0u: goto label_26c6c0;
        case 0x26c6c4u: goto label_26c6c4;
        case 0x26c6c8u: goto label_26c6c8;
        case 0x26c6ccu: goto label_26c6cc;
        case 0x26c6d0u: goto label_26c6d0;
        case 0x26c6d4u: goto label_26c6d4;
        case 0x26c6d8u: goto label_26c6d8;
        case 0x26c6dcu: goto label_26c6dc;
        case 0x26c6e0u: goto label_26c6e0;
        case 0x26c6e4u: goto label_26c6e4;
        case 0x26c6e8u: goto label_26c6e8;
        case 0x26c6ecu: goto label_26c6ec;
        case 0x26c6f0u: goto label_26c6f0;
        case 0x26c6f4u: goto label_26c6f4;
        case 0x26c6f8u: goto label_26c6f8;
        case 0x26c6fcu: goto label_26c6fc;
        case 0x26c700u: goto label_26c700;
        case 0x26c704u: goto label_26c704;
        case 0x26c708u: goto label_26c708;
        case 0x26c70cu: goto label_26c70c;
        case 0x26c710u: goto label_26c710;
        case 0x26c714u: goto label_26c714;
        case 0x26c718u: goto label_26c718;
        case 0x26c71cu: goto label_26c71c;
        case 0x26c720u: goto label_26c720;
        case 0x26c724u: goto label_26c724;
        case 0x26c728u: goto label_26c728;
        case 0x26c72cu: goto label_26c72c;
        case 0x26c730u: goto label_26c730;
        case 0x26c734u: goto label_26c734;
        case 0x26c738u: goto label_26c738;
        case 0x26c73cu: goto label_26c73c;
        case 0x26c740u: goto label_26c740;
        case 0x26c744u: goto label_26c744;
        case 0x26c748u: goto label_26c748;
        case 0x26c74cu: goto label_26c74c;
        case 0x26c750u: goto label_26c750;
        case 0x26c754u: goto label_26c754;
        case 0x26c758u: goto label_26c758;
        case 0x26c75cu: goto label_26c75c;
        case 0x26c760u: goto label_26c760;
        case 0x26c764u: goto label_26c764;
        case 0x26c768u: goto label_26c768;
        case 0x26c76cu: goto label_26c76c;
        case 0x26c770u: goto label_26c770;
        case 0x26c774u: goto label_26c774;
        case 0x26c778u: goto label_26c778;
        case 0x26c77cu: goto label_26c77c;
        case 0x26c780u: goto label_26c780;
        case 0x26c784u: goto label_26c784;
        case 0x26c788u: goto label_26c788;
        case 0x26c78cu: goto label_26c78c;
        case 0x26c790u: goto label_26c790;
        case 0x26c794u: goto label_26c794;
        case 0x26c798u: goto label_26c798;
        case 0x26c79cu: goto label_26c79c;
        case 0x26c7a0u: goto label_26c7a0;
        case 0x26c7a4u: goto label_26c7a4;
        case 0x26c7a8u: goto label_26c7a8;
        case 0x26c7acu: goto label_26c7ac;
        case 0x26c7b0u: goto label_26c7b0;
        case 0x26c7b4u: goto label_26c7b4;
        case 0x26c7b8u: goto label_26c7b8;
        case 0x26c7bcu: goto label_26c7bc;
        case 0x26c7c0u: goto label_26c7c0;
        case 0x26c7c4u: goto label_26c7c4;
        case 0x26c7c8u: goto label_26c7c8;
        case 0x26c7ccu: goto label_26c7cc;
        case 0x26c7d0u: goto label_26c7d0;
        case 0x26c7d4u: goto label_26c7d4;
        case 0x26c7d8u: goto label_26c7d8;
        case 0x26c7dcu: goto label_26c7dc;
        case 0x26c7e0u: goto label_26c7e0;
        case 0x26c7e4u: goto label_26c7e4;
        case 0x26c7e8u: goto label_26c7e8;
        case 0x26c7ecu: goto label_26c7ec;
        case 0x26c7f0u: goto label_26c7f0;
        case 0x26c7f4u: goto label_26c7f4;
        case 0x26c7f8u: goto label_26c7f8;
        case 0x26c7fcu: goto label_26c7fc;
        case 0x26c800u: goto label_26c800;
        case 0x26c804u: goto label_26c804;
        case 0x26c808u: goto label_26c808;
        case 0x26c80cu: goto label_26c80c;
        case 0x26c810u: goto label_26c810;
        case 0x26c814u: goto label_26c814;
        case 0x26c818u: goto label_26c818;
        case 0x26c81cu: goto label_26c81c;
        case 0x26c820u: goto label_26c820;
        case 0x26c824u: goto label_26c824;
        case 0x26c828u: goto label_26c828;
        case 0x26c82cu: goto label_26c82c;
        case 0x26c830u: goto label_26c830;
        case 0x26c834u: goto label_26c834;
        case 0x26c838u: goto label_26c838;
        case 0x26c83cu: goto label_26c83c;
        case 0x26c840u: goto label_26c840;
        case 0x26c844u: goto label_26c844;
        case 0x26c848u: goto label_26c848;
        case 0x26c84cu: goto label_26c84c;
        case 0x26c850u: goto label_26c850;
        case 0x26c854u: goto label_26c854;
        case 0x26c858u: goto label_26c858;
        case 0x26c85cu: goto label_26c85c;
        case 0x26c860u: goto label_26c860;
        case 0x26c864u: goto label_26c864;
        case 0x26c868u: goto label_26c868;
        case 0x26c86cu: goto label_26c86c;
        case 0x26c870u: goto label_26c870;
        case 0x26c874u: goto label_26c874;
        case 0x26c878u: goto label_26c878;
        case 0x26c87cu: goto label_26c87c;
        case 0x26c880u: goto label_26c880;
        case 0x26c884u: goto label_26c884;
        case 0x26c888u: goto label_26c888;
        case 0x26c88cu: goto label_26c88c;
        case 0x26c890u: goto label_26c890;
        case 0x26c894u: goto label_26c894;
        case 0x26c898u: goto label_26c898;
        case 0x26c89cu: goto label_26c89c;
        case 0x26c8a0u: goto label_26c8a0;
        case 0x26c8a4u: goto label_26c8a4;
        case 0x26c8a8u: goto label_26c8a8;
        case 0x26c8acu: goto label_26c8ac;
        case 0x26c8b0u: goto label_26c8b0;
        case 0x26c8b4u: goto label_26c8b4;
        case 0x26c8b8u: goto label_26c8b8;
        case 0x26c8bcu: goto label_26c8bc;
        case 0x26c8c0u: goto label_26c8c0;
        case 0x26c8c4u: goto label_26c8c4;
        case 0x26c8c8u: goto label_26c8c8;
        case 0x26c8ccu: goto label_26c8cc;
        case 0x26c8d0u: goto label_26c8d0;
        case 0x26c8d4u: goto label_26c8d4;
        case 0x26c8d8u: goto label_26c8d8;
        case 0x26c8dcu: goto label_26c8dc;
        case 0x26c8e0u: goto label_26c8e0;
        case 0x26c8e4u: goto label_26c8e4;
        case 0x26c8e8u: goto label_26c8e8;
        case 0x26c8ecu: goto label_26c8ec;
        case 0x26c8f0u: goto label_26c8f0;
        case 0x26c8f4u: goto label_26c8f4;
        case 0x26c8f8u: goto label_26c8f8;
        case 0x26c8fcu: goto label_26c8fc;
        case 0x26c900u: goto label_26c900;
        case 0x26c904u: goto label_26c904;
        case 0x26c908u: goto label_26c908;
        case 0x26c90cu: goto label_26c90c;
        case 0x26c910u: goto label_26c910;
        case 0x26c914u: goto label_26c914;
        case 0x26c918u: goto label_26c918;
        case 0x26c91cu: goto label_26c91c;
        case 0x26c920u: goto label_26c920;
        case 0x26c924u: goto label_26c924;
        case 0x26c928u: goto label_26c928;
        case 0x26c92cu: goto label_26c92c;
        case 0x26c930u: goto label_26c930;
        case 0x26c934u: goto label_26c934;
        case 0x26c938u: goto label_26c938;
        case 0x26c93cu: goto label_26c93c;
        case 0x26c940u: goto label_26c940;
        case 0x26c944u: goto label_26c944;
        case 0x26c948u: goto label_26c948;
        case 0x26c94cu: goto label_26c94c;
        case 0x26c950u: goto label_26c950;
        case 0x26c954u: goto label_26c954;
        case 0x26c958u: goto label_26c958;
        case 0x26c95cu: goto label_26c95c;
        case 0x26c960u: goto label_26c960;
        case 0x26c964u: goto label_26c964;
        case 0x26c968u: goto label_26c968;
        case 0x26c96cu: goto label_26c96c;
        case 0x26c970u: goto label_26c970;
        case 0x26c974u: goto label_26c974;
        case 0x26c978u: goto label_26c978;
        case 0x26c97cu: goto label_26c97c;
        case 0x26c980u: goto label_26c980;
        case 0x26c984u: goto label_26c984;
        case 0x26c988u: goto label_26c988;
        case 0x26c98cu: goto label_26c98c;
        case 0x26c990u: goto label_26c990;
        case 0x26c994u: goto label_26c994;
        case 0x26c998u: goto label_26c998;
        case 0x26c99cu: goto label_26c99c;
        case 0x26c9a0u: goto label_26c9a0;
        case 0x26c9a4u: goto label_26c9a4;
        case 0x26c9a8u: goto label_26c9a8;
        case 0x26c9acu: goto label_26c9ac;
        case 0x26c9b0u: goto label_26c9b0;
        case 0x26c9b4u: goto label_26c9b4;
        case 0x26c9b8u: goto label_26c9b8;
        case 0x26c9bcu: goto label_26c9bc;
        case 0x26c9c0u: goto label_26c9c0;
        case 0x26c9c4u: goto label_26c9c4;
        case 0x26c9c8u: goto label_26c9c8;
        case 0x26c9ccu: goto label_26c9cc;
        case 0x26c9d0u: goto label_26c9d0;
        case 0x26c9d4u: goto label_26c9d4;
        case 0x26c9d8u: goto label_26c9d8;
        case 0x26c9dcu: goto label_26c9dc;
        case 0x26c9e0u: goto label_26c9e0;
        case 0x26c9e4u: goto label_26c9e4;
        case 0x26c9e8u: goto label_26c9e8;
        case 0x26c9ecu: goto label_26c9ec;
        case 0x26c9f0u: goto label_26c9f0;
        case 0x26c9f4u: goto label_26c9f4;
        case 0x26c9f8u: goto label_26c9f8;
        case 0x26c9fcu: goto label_26c9fc;
        case 0x26ca00u: goto label_26ca00;
        case 0x26ca04u: goto label_26ca04;
        case 0x26ca08u: goto label_26ca08;
        case 0x26ca0cu: goto label_26ca0c;
        case 0x26ca10u: goto label_26ca10;
        case 0x26ca14u: goto label_26ca14;
        case 0x26ca18u: goto label_26ca18;
        case 0x26ca1cu: goto label_26ca1c;
        case 0x26ca20u: goto label_26ca20;
        case 0x26ca24u: goto label_26ca24;
        case 0x26ca28u: goto label_26ca28;
        case 0x26ca2cu: goto label_26ca2c;
        case 0x26ca30u: goto label_26ca30;
        case 0x26ca34u: goto label_26ca34;
        case 0x26ca38u: goto label_26ca38;
        case 0x26ca3cu: goto label_26ca3c;
        case 0x26ca40u: goto label_26ca40;
        case 0x26ca44u: goto label_26ca44;
        case 0x26ca48u: goto label_26ca48;
        case 0x26ca4cu: goto label_26ca4c;
        case 0x26ca50u: goto label_26ca50;
        case 0x26ca54u: goto label_26ca54;
        case 0x26ca58u: goto label_26ca58;
        case 0x26ca5cu: goto label_26ca5c;
        case 0x26ca60u: goto label_26ca60;
        case 0x26ca64u: goto label_26ca64;
        case 0x26ca68u: goto label_26ca68;
        case 0x26ca6cu: goto label_26ca6c;
        case 0x26ca70u: goto label_26ca70;
        case 0x26ca74u: goto label_26ca74;
        case 0x26ca78u: goto label_26ca78;
        case 0x26ca7cu: goto label_26ca7c;
        case 0x26ca80u: goto label_26ca80;
        case 0x26ca84u: goto label_26ca84;
        case 0x26ca88u: goto label_26ca88;
        case 0x26ca8cu: goto label_26ca8c;
        case 0x26ca90u: goto label_26ca90;
        case 0x26ca94u: goto label_26ca94;
        case 0x26ca98u: goto label_26ca98;
        case 0x26ca9cu: goto label_26ca9c;
        case 0x26caa0u: goto label_26caa0;
        case 0x26caa4u: goto label_26caa4;
        case 0x26caa8u: goto label_26caa8;
        case 0x26caacu: goto label_26caac;
        case 0x26cab0u: goto label_26cab0;
        case 0x26cab4u: goto label_26cab4;
        case 0x26cab8u: goto label_26cab8;
        case 0x26cabcu: goto label_26cabc;
        case 0x26cac0u: goto label_26cac0;
        case 0x26cac4u: goto label_26cac4;
        case 0x26cac8u: goto label_26cac8;
        case 0x26caccu: goto label_26cacc;
        case 0x26cad0u: goto label_26cad0;
        case 0x26cad4u: goto label_26cad4;
        case 0x26cad8u: goto label_26cad8;
        case 0x26cadcu: goto label_26cadc;
        case 0x26cae0u: goto label_26cae0;
        case 0x26cae4u: goto label_26cae4;
        case 0x26cae8u: goto label_26cae8;
        case 0x26caecu: goto label_26caec;
        case 0x26caf0u: goto label_26caf0;
        case 0x26caf4u: goto label_26caf4;
        case 0x26caf8u: goto label_26caf8;
        case 0x26cafcu: goto label_26cafc;
        case 0x26cb00u: goto label_26cb00;
        case 0x26cb04u: goto label_26cb04;
        case 0x26cb08u: goto label_26cb08;
        case 0x26cb0cu: goto label_26cb0c;
        case 0x26cb10u: goto label_26cb10;
        case 0x26cb14u: goto label_26cb14;
        case 0x26cb18u: goto label_26cb18;
        case 0x26cb1cu: goto label_26cb1c;
        case 0x26cb20u: goto label_26cb20;
        case 0x26cb24u: goto label_26cb24;
        case 0x26cb28u: goto label_26cb28;
        case 0x26cb2cu: goto label_26cb2c;
        case 0x26cb30u: goto label_26cb30;
        case 0x26cb34u: goto label_26cb34;
        case 0x26cb38u: goto label_26cb38;
        case 0x26cb3cu: goto label_26cb3c;
        case 0x26cb40u: goto label_26cb40;
        case 0x26cb44u: goto label_26cb44;
        case 0x26cb48u: goto label_26cb48;
        case 0x26cb4cu: goto label_26cb4c;
        case 0x26cb50u: goto label_26cb50;
        case 0x26cb54u: goto label_26cb54;
        case 0x26cb58u: goto label_26cb58;
        case 0x26cb5cu: goto label_26cb5c;
        case 0x26cb60u: goto label_26cb60;
        case 0x26cb64u: goto label_26cb64;
        case 0x26cb68u: goto label_26cb68;
        case 0x26cb6cu: goto label_26cb6c;
        case 0x26cb70u: goto label_26cb70;
        case 0x26cb74u: goto label_26cb74;
        case 0x26cb78u: goto label_26cb78;
        case 0x26cb7cu: goto label_26cb7c;
        case 0x26cb80u: goto label_26cb80;
        case 0x26cb84u: goto label_26cb84;
        case 0x26cb88u: goto label_26cb88;
        case 0x26cb8cu: goto label_26cb8c;
        case 0x26cb90u: goto label_26cb90;
        case 0x26cb94u: goto label_26cb94;
        case 0x26cb98u: goto label_26cb98;
        case 0x26cb9cu: goto label_26cb9c;
        case 0x26cba0u: goto label_26cba0;
        case 0x26cba4u: goto label_26cba4;
        case 0x26cba8u: goto label_26cba8;
        case 0x26cbacu: goto label_26cbac;
        case 0x26cbb0u: goto label_26cbb0;
        case 0x26cbb4u: goto label_26cbb4;
        case 0x26cbb8u: goto label_26cbb8;
        case 0x26cbbcu: goto label_26cbbc;
        case 0x26cbc0u: goto label_26cbc0;
        case 0x26cbc4u: goto label_26cbc4;
        case 0x26cbc8u: goto label_26cbc8;
        case 0x26cbccu: goto label_26cbcc;
        case 0x26cbd0u: goto label_26cbd0;
        case 0x26cbd4u: goto label_26cbd4;
        case 0x26cbd8u: goto label_26cbd8;
        case 0x26cbdcu: goto label_26cbdc;
        case 0x26cbe0u: goto label_26cbe0;
        case 0x26cbe4u: goto label_26cbe4;
        case 0x26cbe8u: goto label_26cbe8;
        case 0x26cbecu: goto label_26cbec;
        case 0x26cbf0u: goto label_26cbf0;
        case 0x26cbf4u: goto label_26cbf4;
        case 0x26cbf8u: goto label_26cbf8;
        case 0x26cbfcu: goto label_26cbfc;
        case 0x26cc00u: goto label_26cc00;
        case 0x26cc04u: goto label_26cc04;
        case 0x26cc08u: goto label_26cc08;
        case 0x26cc0cu: goto label_26cc0c;
        case 0x26cc10u: goto label_26cc10;
        case 0x26cc14u: goto label_26cc14;
        case 0x26cc18u: goto label_26cc18;
        case 0x26cc1cu: goto label_26cc1c;
        case 0x26cc20u: goto label_26cc20;
        case 0x26cc24u: goto label_26cc24;
        case 0x26cc28u: goto label_26cc28;
        case 0x26cc2cu: goto label_26cc2c;
        case 0x26cc30u: goto label_26cc30;
        case 0x26cc34u: goto label_26cc34;
        case 0x26cc38u: goto label_26cc38;
        case 0x26cc3cu: goto label_26cc3c;
        case 0x26cc40u: goto label_26cc40;
        case 0x26cc44u: goto label_26cc44;
        case 0x26cc48u: goto label_26cc48;
        case 0x26cc4cu: goto label_26cc4c;
        case 0x26cc50u: goto label_26cc50;
        case 0x26cc54u: goto label_26cc54;
        case 0x26cc58u: goto label_26cc58;
        case 0x26cc5cu: goto label_26cc5c;
        case 0x26cc60u: goto label_26cc60;
        case 0x26cc64u: goto label_26cc64;
        case 0x26cc68u: goto label_26cc68;
        case 0x26cc6cu: goto label_26cc6c;
        case 0x26cc70u: goto label_26cc70;
        case 0x26cc74u: goto label_26cc74;
        case 0x26cc78u: goto label_26cc78;
        case 0x26cc7cu: goto label_26cc7c;
        case 0x26cc80u: goto label_26cc80;
        case 0x26cc84u: goto label_26cc84;
        case 0x26cc88u: goto label_26cc88;
        case 0x26cc8cu: goto label_26cc8c;
        case 0x26cc90u: goto label_26cc90;
        case 0x26cc94u: goto label_26cc94;
        case 0x26cc98u: goto label_26cc98;
        case 0x26cc9cu: goto label_26cc9c;
        case 0x26cca0u: goto label_26cca0;
        case 0x26cca4u: goto label_26cca4;
        case 0x26cca8u: goto label_26cca8;
        case 0x26ccacu: goto label_26ccac;
        case 0x26ccb0u: goto label_26ccb0;
        case 0x26ccb4u: goto label_26ccb4;
        case 0x26ccb8u: goto label_26ccb8;
        case 0x26ccbcu: goto label_26ccbc;
        case 0x26ccc0u: goto label_26ccc0;
        case 0x26ccc4u: goto label_26ccc4;
        case 0x26ccc8u: goto label_26ccc8;
        case 0x26ccccu: goto label_26cccc;
        case 0x26ccd0u: goto label_26ccd0;
        case 0x26ccd4u: goto label_26ccd4;
        case 0x26ccd8u: goto label_26ccd8;
        case 0x26ccdcu: goto label_26ccdc;
        case 0x26cce0u: goto label_26cce0;
        case 0x26cce4u: goto label_26cce4;
        case 0x26cce8u: goto label_26cce8;
        case 0x26ccecu: goto label_26ccec;
        case 0x26ccf0u: goto label_26ccf0;
        case 0x26ccf4u: goto label_26ccf4;
        case 0x26ccf8u: goto label_26ccf8;
        case 0x26ccfcu: goto label_26ccfc;
        case 0x26cd00u: goto label_26cd00;
        case 0x26cd04u: goto label_26cd04;
        case 0x26cd08u: goto label_26cd08;
        case 0x26cd0cu: goto label_26cd0c;
        case 0x26cd10u: goto label_26cd10;
        case 0x26cd14u: goto label_26cd14;
        case 0x26cd18u: goto label_26cd18;
        case 0x26cd1cu: goto label_26cd1c;
        case 0x26cd20u: goto label_26cd20;
        case 0x26cd24u: goto label_26cd24;
        case 0x26cd28u: goto label_26cd28;
        case 0x26cd2cu: goto label_26cd2c;
        case 0x26cd30u: goto label_26cd30;
        case 0x26cd34u: goto label_26cd34;
        case 0x26cd38u: goto label_26cd38;
        case 0x26cd3cu: goto label_26cd3c;
        case 0x26cd40u: goto label_26cd40;
        case 0x26cd44u: goto label_26cd44;
        case 0x26cd48u: goto label_26cd48;
        case 0x26cd4cu: goto label_26cd4c;
        case 0x26cd50u: goto label_26cd50;
        case 0x26cd54u: goto label_26cd54;
        case 0x26cd58u: goto label_26cd58;
        case 0x26cd5cu: goto label_26cd5c;
        case 0x26cd60u: goto label_26cd60;
        case 0x26cd64u: goto label_26cd64;
        case 0x26cd68u: goto label_26cd68;
        case 0x26cd6cu: goto label_26cd6c;
        case 0x26cd70u: goto label_26cd70;
        case 0x26cd74u: goto label_26cd74;
        case 0x26cd78u: goto label_26cd78;
        case 0x26cd7cu: goto label_26cd7c;
        case 0x26cd80u: goto label_26cd80;
        case 0x26cd84u: goto label_26cd84;
        case 0x26cd88u: goto label_26cd88;
        case 0x26cd8cu: goto label_26cd8c;
        case 0x26cd90u: goto label_26cd90;
        case 0x26cd94u: goto label_26cd94;
        case 0x26cd98u: goto label_26cd98;
        case 0x26cd9cu: goto label_26cd9c;
        case 0x26cda0u: goto label_26cda0;
        case 0x26cda4u: goto label_26cda4;
        case 0x26cda8u: goto label_26cda8;
        case 0x26cdacu: goto label_26cdac;
        case 0x26cdb0u: goto label_26cdb0;
        case 0x26cdb4u: goto label_26cdb4;
        case 0x26cdb8u: goto label_26cdb8;
        case 0x26cdbcu: goto label_26cdbc;
        case 0x26cdc0u: goto label_26cdc0;
        case 0x26cdc4u: goto label_26cdc4;
        case 0x26cdc8u: goto label_26cdc8;
        case 0x26cdccu: goto label_26cdcc;
        case 0x26cdd0u: goto label_26cdd0;
        case 0x26cdd4u: goto label_26cdd4;
        case 0x26cdd8u: goto label_26cdd8;
        case 0x26cddcu: goto label_26cddc;
        case 0x26cde0u: goto label_26cde0;
        case 0x26cde4u: goto label_26cde4;
        case 0x26cde8u: goto label_26cde8;
        case 0x26cdecu: goto label_26cdec;
        case 0x26cdf0u: goto label_26cdf0;
        case 0x26cdf4u: goto label_26cdf4;
        case 0x26cdf8u: goto label_26cdf8;
        case 0x26cdfcu: goto label_26cdfc;
        case 0x26ce00u: goto label_26ce00;
        case 0x26ce04u: goto label_26ce04;
        case 0x26ce08u: goto label_26ce08;
        case 0x26ce0cu: goto label_26ce0c;
        case 0x26ce10u: goto label_26ce10;
        case 0x26ce14u: goto label_26ce14;
        case 0x26ce18u: goto label_26ce18;
        case 0x26ce1cu: goto label_26ce1c;
        case 0x26ce20u: goto label_26ce20;
        case 0x26ce24u: goto label_26ce24;
        case 0x26ce28u: goto label_26ce28;
        case 0x26ce2cu: goto label_26ce2c;
        case 0x26ce30u: goto label_26ce30;
        case 0x26ce34u: goto label_26ce34;
        case 0x26ce38u: goto label_26ce38;
        case 0x26ce3cu: goto label_26ce3c;
        case 0x26ce40u: goto label_26ce40;
        case 0x26ce44u: goto label_26ce44;
        case 0x26ce48u: goto label_26ce48;
        case 0x26ce4cu: goto label_26ce4c;
        case 0x26ce50u: goto label_26ce50;
        case 0x26ce54u: goto label_26ce54;
        case 0x26ce58u: goto label_26ce58;
        case 0x26ce5cu: goto label_26ce5c;
        case 0x26ce60u: goto label_26ce60;
        case 0x26ce64u: goto label_26ce64;
        case 0x26ce68u: goto label_26ce68;
        case 0x26ce6cu: goto label_26ce6c;
        case 0x26ce70u: goto label_26ce70;
        case 0x26ce74u: goto label_26ce74;
        case 0x26ce78u: goto label_26ce78;
        case 0x26ce7cu: goto label_26ce7c;
        case 0x26ce80u: goto label_26ce80;
        case 0x26ce84u: goto label_26ce84;
        case 0x26ce88u: goto label_26ce88;
        case 0x26ce8cu: goto label_26ce8c;
        case 0x26ce90u: goto label_26ce90;
        case 0x26ce94u: goto label_26ce94;
        case 0x26ce98u: goto label_26ce98;
        case 0x26ce9cu: goto label_26ce9c;
        case 0x26cea0u: goto label_26cea0;
        case 0x26cea4u: goto label_26cea4;
        case 0x26cea8u: goto label_26cea8;
        case 0x26ceacu: goto label_26ceac;
        case 0x26ceb0u: goto label_26ceb0;
        case 0x26ceb4u: goto label_26ceb4;
        case 0x26ceb8u: goto label_26ceb8;
        case 0x26cebcu: goto label_26cebc;
        case 0x26cec0u: goto label_26cec0;
        case 0x26cec4u: goto label_26cec4;
        case 0x26cec8u: goto label_26cec8;
        case 0x26ceccu: goto label_26cecc;
        case 0x26ced0u: goto label_26ced0;
        case 0x26ced4u: goto label_26ced4;
        case 0x26ced8u: goto label_26ced8;
        case 0x26cedcu: goto label_26cedc;
        case 0x26cee0u: goto label_26cee0;
        case 0x26cee4u: goto label_26cee4;
        case 0x26cee8u: goto label_26cee8;
        case 0x26ceecu: goto label_26ceec;
        case 0x26cef0u: goto label_26cef0;
        case 0x26cef4u: goto label_26cef4;
        case 0x26cef8u: goto label_26cef8;
        case 0x26cefcu: goto label_26cefc;
        case 0x26cf00u: goto label_26cf00;
        case 0x26cf04u: goto label_26cf04;
        case 0x26cf08u: goto label_26cf08;
        case 0x26cf0cu: goto label_26cf0c;
        case 0x26cf10u: goto label_26cf10;
        case 0x26cf14u: goto label_26cf14;
        case 0x26cf18u: goto label_26cf18;
        case 0x26cf1cu: goto label_26cf1c;
        case 0x26cf20u: goto label_26cf20;
        case 0x26cf24u: goto label_26cf24;
        case 0x26cf28u: goto label_26cf28;
        case 0x26cf2cu: goto label_26cf2c;
        case 0x26cf30u: goto label_26cf30;
        case 0x26cf34u: goto label_26cf34;
        case 0x26cf38u: goto label_26cf38;
        case 0x26cf3cu: goto label_26cf3c;
        case 0x26cf40u: goto label_26cf40;
        case 0x26cf44u: goto label_26cf44;
        case 0x26cf48u: goto label_26cf48;
        case 0x26cf4cu: goto label_26cf4c;
        case 0x26cf50u: goto label_26cf50;
        case 0x26cf54u: goto label_26cf54;
        case 0x26cf58u: goto label_26cf58;
        case 0x26cf5cu: goto label_26cf5c;
        case 0x26cf60u: goto label_26cf60;
        case 0x26cf64u: goto label_26cf64;
        case 0x26cf68u: goto label_26cf68;
        case 0x26cf6cu: goto label_26cf6c;
        case 0x26cf70u: goto label_26cf70;
        case 0x26cf74u: goto label_26cf74;
        case 0x26cf78u: goto label_26cf78;
        case 0x26cf7cu: goto label_26cf7c;
        case 0x26cf80u: goto label_26cf80;
        case 0x26cf84u: goto label_26cf84;
        case 0x26cf88u: goto label_26cf88;
        case 0x26cf8cu: goto label_26cf8c;
        case 0x26cf90u: goto label_26cf90;
        case 0x26cf94u: goto label_26cf94;
        case 0x26cf98u: goto label_26cf98;
        case 0x26cf9cu: goto label_26cf9c;
        case 0x26cfa0u: goto label_26cfa0;
        case 0x26cfa4u: goto label_26cfa4;
        case 0x26cfa8u: goto label_26cfa8;
        case 0x26cfacu: goto label_26cfac;
        case 0x26cfb0u: goto label_26cfb0;
        case 0x26cfb4u: goto label_26cfb4;
        case 0x26cfb8u: goto label_26cfb8;
        case 0x26cfbcu: goto label_26cfbc;
        case 0x26cfc0u: goto label_26cfc0;
        case 0x26cfc4u: goto label_26cfc4;
        case 0x26cfc8u: goto label_26cfc8;
        case 0x26cfccu: goto label_26cfcc;
        case 0x26cfd0u: goto label_26cfd0;
        case 0x26cfd4u: goto label_26cfd4;
        case 0x26cfd8u: goto label_26cfd8;
        case 0x26cfdcu: goto label_26cfdc;
        case 0x26cfe0u: goto label_26cfe0;
        case 0x26cfe4u: goto label_26cfe4;
        case 0x26cfe8u: goto label_26cfe8;
        case 0x26cfecu: goto label_26cfec;
        default: break;
    }

    ctx->pc = 0x26c4d0u;

label_26c4d0:
    // 0x26c4d0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x26c4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_26c4d4:
    // 0x26c4d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26c4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_26c4d8:
    // 0x26c4d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x26c4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_26c4dc:
    // 0x26c4dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26c4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_26c4e0:
    // 0x26c4e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26c4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_26c4e4:
    // 0x26c4e4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x26c4e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26c4e8:
    // 0x26c4e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26c4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_26c4ec:
    // 0x26c4ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26c4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_26c4f0:
    // 0x26c4f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x26c4f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26c4f4:
    // 0x26c4f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26c4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_26c4f8:
    // 0x26c4f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26c4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_26c4fc:
    // 0x26c4fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26c4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26c500:
    // 0x26c500: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26c500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26c504:
    // 0x26c504: 0xafa6012c  sw          $a2, 0x12C($sp)
    ctx->pc = 0x26c504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 6));
label_26c508:
    // 0x26c508: 0xafa80128  sw          $t0, 0x128($sp)
    ctx->pc = 0x26c508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 8));
label_26c50c:
    // 0x26c50c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x26c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_26c510:
    // 0x26c510: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x26c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_26c514:
    // 0x26c514: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26c518:
    if (ctx->pc == 0x26C518u) {
        ctx->pc = 0x26C518u;
            // 0x26c518: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C51Cu;
        goto label_26c51c;
    }
    ctx->pc = 0x26C514u;
    {
        const bool branch_taken_0x26c514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C514u;
            // 0x26c518: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c514) {
            ctx->pc = 0x26C528u;
            goto label_26c528;
        }
    }
    ctx->pc = 0x26C51Cu;
label_26c51c:
    // 0x26c51c: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x26c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_26c520:
    // 0x26c520: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x26c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_26c524:
    // 0x26c524: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x26c524u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
label_26c528:
    // 0x26c528: 0x82e20004  lb          $v0, 0x4($s7)
    ctx->pc = 0x26c528u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
label_26c52c:
    // 0x26c52c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_26c530:
    if (ctx->pc == 0x26C530u) {
        ctx->pc = 0x26C534u;
        goto label_26c534;
    }
    ctx->pc = 0x26C52Cu;
    {
        const bool branch_taken_0x26c52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c52c) {
            ctx->pc = 0x26C610u;
            goto label_26c610;
        }
    }
    ctx->pc = 0x26C534u;
label_26c534:
    // 0x26c534: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x26c534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_26c538:
    // 0x26c538: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x26c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_26c53c:
    // 0x26c53c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26c540:
    if (ctx->pc == 0x26C540u) {
        ctx->pc = 0x26C544u;
        goto label_26c544;
    }
    ctx->pc = 0x26C53Cu;
    {
        const bool branch_taken_0x26c53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c53c) {
            ctx->pc = 0x26C550u;
            goto label_26c550;
        }
    }
    ctx->pc = 0x26C544u;
label_26c544:
    // 0x26c544: 0x8ee20060  lw          $v0, 0x60($s7)
    ctx->pc = 0x26c544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 96)));
label_26c548:
    // 0x26c548: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26c548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26c54c:
    // 0x26c54c: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x26c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
label_26c550:
    // 0x26c550: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x26c550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_26c554:
    // 0x26c554: 0x8fa6012c  lw          $a2, 0x12C($sp)
    ctx->pc = 0x26c554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_26c558:
    // 0x26c558: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26c558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c55c:
    // 0x26c55c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26c55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26c560:
    // 0x26c560: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x26c560u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_26c564:
    // 0x26c564: 0xc09c074  jal         func_2701D0
label_26c568:
    if (ctx->pc == 0x26C568u) {
        ctx->pc = 0x26C568u;
            // 0x26c568: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C56Cu;
        goto label_26c56c;
    }
    ctx->pc = 0x26C564u;
    SET_GPR_U32(ctx, 31, 0x26C56Cu);
    ctx->pc = 0x26C568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C564u;
            // 0x26c568: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2701D0u;
    if (runtime->hasFunction(0x2701D0u)) {
        auto targetFn = runtime->lookupFunction(0x2701D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C56Cu; }
        if (ctx->pc != 0x26C56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002701D0_0x2701d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C56Cu; }
        if (ctx->pc != 0x26C56Cu) { return; }
    }
    ctx->pc = 0x26C56Cu;
label_26c56c:
    // 0x26c56c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x26c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_26c570:
    // 0x26c570: 0x26f00060  addiu       $s0, $s7, 0x60
    ctx->pc = 0x26c570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 96));
label_26c574:
    // 0x26c574: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x26c574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_26c578:
    // 0x26c578: 0x8ef20060  lw          $s2, 0x60($s7)
    ctx->pc = 0x26c578u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 96)));
label_26c57c:
    // 0x26c57c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_26c580:
    // 0x26c580: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x26c580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_26c584:
    // 0x26c584: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26c584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_26c588:
    // 0x26c588: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x26c588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_26c58c:
    // 0x26c58c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x26c58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_26c590:
    // 0x26c590: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_26c594:
    if (ctx->pc == 0x26C594u) {
        ctx->pc = 0x26C594u;
            // 0x26c594: 0x918823  subu        $s1, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->pc = 0x26C598u;
        goto label_26c598;
    }
    ctx->pc = 0x26C590u;
    {
        const bool branch_taken_0x26c590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C590u;
            // 0x26c594: 0x918823  subu        $s1, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c590) {
            ctx->pc = 0x26C5A8u;
            goto label_26c5a8;
        }
    }
    ctx->pc = 0x26C598u;
label_26c598:
    // 0x26c598: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x26c598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_26c59c:
    // 0x26c59c: 0xc0a728c  jal         func_29CA30
label_26c5a0:
    if (ctx->pc == 0x26C5A0u) {
        ctx->pc = 0x26C5A0u;
            // 0x26c5a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x26C5A4u;
        goto label_26c5a4;
    }
    ctx->pc = 0x26C59Cu;
    SET_GPR_U32(ctx, 31, 0x26C5A4u);
    ctx->pc = 0x26C5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C59Cu;
            // 0x26c5a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C5A4u; }
        if (ctx->pc != 0x26C5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C5A4u; }
        if (ctx->pc != 0x26C5A4u) { return; }
    }
    ctx->pc = 0x26C5A4u;
label_26c5a4:
    // 0x26c5a4: 0x0  nop
    ctx->pc = 0x26c5a4u;
    // NOP
label_26c5a8:
    // 0x26c5a8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x26c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_26c5ac:
    // 0x26c5ac: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x26c5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26c5b0:
    // 0x26c5b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x26c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_26c5b4:
    // 0x26c5b4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x26c5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26c5b8:
    // 0x26c5b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26c5bc:
    // 0x26c5bc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x26c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_26c5c0:
    // 0x26c5c0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x26c5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_26c5c4:
    // 0x26c5c4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x26c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_26c5c8:
    // 0x26c5c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26c5cc:
    // 0x26c5cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26c5d0:
    // 0x26c5d0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x26c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_26c5d4:
    // 0x26c5d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26c5d8:
    // 0x26c5d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26c5dc:
    // 0x26c5dc: 0xafa2021c  sw          $v0, 0x21C($sp)
    ctx->pc = 0x26c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
label_26c5e0:
    // 0x26c5e0: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x26c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_26c5e4:
    // 0x26c5e4: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x26c5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_26c5e8:
    // 0x26c5e8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_26c5ec:
    if (ctx->pc == 0x26C5ECu) {
        ctx->pc = 0x26C5F0u;
        goto label_26c5f0;
    }
    ctx->pc = 0x26C5E8u;
    {
        const bool branch_taken_0x26c5e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5e8) {
            ctx->pc = 0x26C608u;
            goto label_26c608;
        }
    }
    ctx->pc = 0x26C5F0u;
label_26c5f0:
    // 0x26c5f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x26c5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26c5f4:
    // 0x26c5f4: 0x27a5021c  addiu       $a1, $sp, 0x21C
    ctx->pc = 0x26c5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
label_26c5f8:
    // 0x26c5f8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x26c5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_26c5fc:
    // 0x26c5fc: 0x320f809  jalr        $t9
label_26c600:
    if (ctx->pc == 0x26C600u) {
        ctx->pc = 0x26C600u;
            // 0x26c600: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x26C604u;
        goto label_26c604;
    }
    ctx->pc = 0x26C5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26C604u);
        ctx->pc = 0x26C600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C5FCu;
            // 0x26c600: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26C604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26C604u; }
            if (ctx->pc != 0x26C604u) { return; }
        }
        }
    }
    ctx->pc = 0x26C604u;
label_26c604:
    // 0x26c604: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x26c604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_26c608:
    // 0x26c608: 0x1000026d  b           . + 4 + (0x26D << 2)
label_26c60c:
    if (ctx->pc == 0x26C60Cu) {
        ctx->pc = 0x26C60Cu;
            // 0x26c60c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C610u;
        goto label_26c610;
    }
    ctx->pc = 0x26C608u;
    {
        const bool branch_taken_0x26c608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C608u;
            // 0x26c60c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c608) {
            ctx->pc = 0x26CFC0u;
            goto label_26cfc0;
        }
    }
    ctx->pc = 0x26C610u;
label_26c610:
    // 0x26c610: 0x8fa6012c  lw          $a2, 0x12C($sp)
    ctx->pc = 0x26c610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_26c614:
    // 0x26c614: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26c614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26c618:
    // 0x26c618: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26c618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26c61c:
    // 0x26c61c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26c61cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c620:
    // 0x26c620: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x26c620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_26c624:
    // 0x26c624: 0xc09aee8  jal         func_26BBA0
label_26c628:
    if (ctx->pc == 0x26C628u) {
        ctx->pc = 0x26C628u;
            // 0x26c628: 0xa3a001d0  sb          $zero, 0x1D0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x26C62Cu;
        goto label_26c62c;
    }
    ctx->pc = 0x26C624u;
    SET_GPR_U32(ctx, 31, 0x26C62Cu);
    ctx->pc = 0x26C628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C624u;
            // 0x26c628: 0xa3a001d0  sb          $zero, 0x1D0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BBA0u;
    if (runtime->hasFunction(0x26BBA0u)) {
        auto targetFn = runtime->lookupFunction(0x26BBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C62Cu; }
        if (ctx->pc != 0x26C62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BBA0_0x26bba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C62Cu; }
        if (ctx->pc != 0x26C62Cu) { return; }
    }
    ctx->pc = 0x26C62Cu;
label_26c62c:
    // 0x26c62c: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x26c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_26c630:
    // 0x26c630: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x26c630u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_26c634:
    // 0x26c634: 0x27a50218  addiu       $a1, $sp, 0x218
    ctx->pc = 0x26c634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_26c638:
    // 0x26c638: 0x27a801a8  addiu       $t0, $sp, 0x1A8
    ctx->pc = 0x26c638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_26c63c:
    // 0x26c63c: 0x27a301b8  addiu       $v1, $sp, 0x1B8
    ctx->pc = 0x26c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_26c640:
    // 0x26c640: 0x27a701c0  addiu       $a3, $sp, 0x1C0
    ctx->pc = 0x26c640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_26c644:
    // 0x26c644: 0x27a601c4  addiu       $a2, $sp, 0x1C4
    ctx->pc = 0x26c644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
label_26c648:
    // 0x26c648: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x26c648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_26c64c:
    // 0x26c64c: 0x26e20074  addiu       $v0, $s7, 0x74
    ctx->pc = 0x26c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 116));
label_26c650:
    // 0x26c650: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x26c650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_26c654:
    // 0x26c654: 0xae840034  sw          $a0, 0x34($s4)
    ctx->pc = 0x26c654u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 4));
label_26c658:
    // 0x26c658: 0x27a201bc  addiu       $v0, $sp, 0x1BC
    ctx->pc = 0x26c658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
label_26c65c:
    // 0x26c65c: 0xafa00210  sw          $zero, 0x210($sp)
    ctx->pc = 0x26c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
label_26c660:
    // 0x26c660: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x26c660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
label_26c664:
    // 0x26c664: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x26c664u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
label_26c668:
    // 0x26c668: 0x8ee50074  lw          $a1, 0x74($s7)
    ctx->pc = 0x26c668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 116)));
label_26c66c:
    // 0x26c66c: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x26c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
label_26c670:
    // 0x26c670: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x26c670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26c674:
    // 0x26c674: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x26c674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
label_26c678:
    // 0x26c678: 0x92890004  lbu         $t1, 0x4($s4)
    ctx->pc = 0x26c678u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
label_26c67c:
    // 0x26c67c: 0x27a50184  addiu       $a1, $sp, 0x184
    ctx->pc = 0x26c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_26c680:
    // 0x26c680: 0xa0a90000  sb          $t1, 0x0($a1)
    ctx->pc = 0x26c680u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 9));
label_26c684:
    // 0x26c684: 0x8e890008  lw          $t1, 0x8($s4)
    ctx->pc = 0x26c684u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_26c688:
    // 0x26c688: 0x27a50188  addiu       $a1, $sp, 0x188
    ctx->pc = 0x26c688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_26c68c:
    // 0x26c68c: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x26c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
label_26c690:
    // 0x26c690: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x26c690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26c694:
    // 0x26c694: 0x27a5018c  addiu       $a1, $sp, 0x18C
    ctx->pc = 0x26c694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_26c698:
    // 0x26c698: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x26c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26c69c:
    // 0x26c69c: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x26c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c6a0:
    // 0x26c6a0: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x26c6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c6a4:
    // 0x26c6a4: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x26c6a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_26c6a8:
    // 0x26c6a8: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x26c6a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_26c6ac:
    // 0x26c6ac: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x26c6acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_26c6b0:
    // 0x26c6b0: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x26c6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_26c6b4:
    // 0x26c6b4: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x26c6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c6b8:
    // 0x26c6b8: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x26c6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c6bc:
    // 0x26c6bc: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x26c6bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_26c6c0:
    // 0x26c6c0: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x26c6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_26c6c4:
    // 0x26c6c4: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x26c6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_26c6c8:
    // 0x26c6c8: 0xafa501a4  sw          $a1, 0x1A4($sp)
    ctx->pc = 0x26c6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 5));
label_26c6cc:
    // 0x26c6cc: 0xc6820028  lwc1        $f2, 0x28($s4)
    ctx->pc = 0x26c6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26c6d0:
    // 0x26c6d0: 0xc681002c  lwc1        $f1, 0x2C($s4)
    ctx->pc = 0x26c6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c6d4:
    // 0x26c6d4: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x26c6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c6d8:
    // 0x26c6d8: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x26c6d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_26c6dc:
    // 0x26c6dc: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x26c6dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_26c6e0:
    // 0x26c6e0: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x26c6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_26c6e4:
    // 0x26c6e4: 0x8e850034  lw          $a1, 0x34($s4)
    ctx->pc = 0x26c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_26c6e8:
    // 0x26c6e8: 0xafa501b4  sw          $a1, 0x1B4($sp)
    ctx->pc = 0x26c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 5));
label_26c6ec:
    // 0x26c6ec: 0x8e850038  lw          $a1, 0x38($s4)
    ctx->pc = 0x26c6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_26c6f0:
    // 0x26c6f0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x26c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_26c6f4:
    // 0x26c6f4: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x26c6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_26c6f8:
    // 0x26c6f8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x26c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_26c6fc:
    // 0x26c6fc: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x26c6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c700:
    // 0x26c700: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x26c700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_26c704:
    // 0x26c704: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x26c704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c708:
    // 0x26c708: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x26c708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_26c70c:
    // 0x26c70c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x26c70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_26c710:
    // 0x26c710: 0x8ca60028  lw          $a2, 0x28($a1)
    ctx->pc = 0x26c710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_26c714:
    // 0x26c714: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x26c714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_26c718:
    // 0x26c718: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26c718u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_26c71c:
    // 0x26c71c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x26c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_26c720:
    // 0x26c720: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x26c720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_26c724:
    // 0x26c724: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x26c724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26c728:
    // 0x26c728: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26c728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_26c72c:
    // 0x26c72c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x26c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_26c730:
    // 0x26c730: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x26c730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_26c734:
    // 0x26c734: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x26c734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26c738:
    // 0x26c738: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_26c73c:
    if (ctx->pc == 0x26C73Cu) {
        ctx->pc = 0x26C73Cu;
            // 0x26c73c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C740u;
        goto label_26c740;
    }
    ctx->pc = 0x26C738u;
    {
        const bool branch_taken_0x26c738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C738u;
            // 0x26c73c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c738) {
            ctx->pc = 0x26C780u;
            goto label_26c780;
        }
    }
    ctx->pc = 0x26C740u;
label_26c740:
    // 0x26c740: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x26c740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_26c744:
    // 0x26c744: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x26c744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_26c748:
    // 0x26c748: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x26c748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_26c74c:
    // 0x26c74c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_26c750:
    // 0x26c750: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x26c750u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
label_26c754:
    // 0x26c754: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x26c754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_26c758:
    // 0x26c758: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x26c758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_26c75c:
    // 0x26c75c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26c760:
    // 0x26c760: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x26c760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_26c764:
    // 0x26c764: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x26c764u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
label_26c768:
    // 0x26c768: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x26c768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_26c76c:
    // 0x26c76c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x26c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_26c770:
    // 0x26c770: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x26c770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26c774:
    // 0x26c774: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_26c778:
    if (ctx->pc == 0x26C778u) {
        ctx->pc = 0x26C778u;
            // 0x26c778: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x26C77Cu;
        goto label_26c77c;
    }
    ctx->pc = 0x26C774u;
    {
        const bool branch_taken_0x26c774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C774u;
            // 0x26c778: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c774) {
            ctx->pc = 0x26C748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c748;
        }
    }
    ctx->pc = 0x26C77Cu;
label_26c77c:
    // 0x26c77c: 0x0  nop
    ctx->pc = 0x26c77cu;
    // NOP
label_26c780:
    // 0x26c780: 0x8fb10100  lw          $s1, 0x100($sp)
    ctx->pc = 0x26c780u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_26c784:
    // 0x26c784: 0x26b30030  addiu       $s3, $s5, 0x30
    ctx->pc = 0x26c784u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_26c788:
    // 0x26c788: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x26c788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_26c78c:
    // 0x26c78c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x26c78cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c790:
    // 0x26c790: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x26c790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26c794:
    // 0x26c794: 0x27b00180  addiu       $s0, $sp, 0x180
    ctx->pc = 0x26c794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_26c798:
    // 0x26c798: 0x26be003c  addiu       $fp, $s5, 0x3C
    ctx->pc = 0x26c798u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
label_26c79c:
    // 0x26c79c: 0x0  nop
    ctx->pc = 0x26c79cu;
    // NOP
label_26c7a0:
    // 0x26c7a0: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x26c7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26c7a4:
    // 0x26c7a4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x26c7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c7a8:
    // 0x26c7a8: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x26c7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c7ac:
    // 0x26c7ac: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26c7acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_26c7b0:
    // 0x26c7b0: 0xc0a3264  jal         func_28C990
label_26c7b4:
    if (ctx->pc == 0x26C7B4u) {
        ctx->pc = 0x26C7B4u;
            // 0x26c7b4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x26C7B8u;
        goto label_26c7b8;
    }
    ctx->pc = 0x26C7B0u;
    SET_GPR_U32(ctx, 31, 0x26C7B8u);
    ctx->pc = 0x26C7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C7B0u;
            // 0x26c7b4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C7B8u; }
        if (ctx->pc != 0x26C7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C7B8u; }
        if (ctx->pc != 0x26C7B8u) { return; }
    }
    ctx->pc = 0x26C7B8u;
label_26c7b8:
    // 0x26c7b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_26c7bc:
    // 0x26c7bc: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x26c7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26c7c0:
    // 0x26c7c0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x26c7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c7c4:
    // 0x26c7c4: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x26c7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c7c8:
    // 0x26c7c8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26c7c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_26c7cc:
    // 0x26c7cc: 0xc0a3264  jal         func_28C990
label_26c7d0:
    if (ctx->pc == 0x26C7D0u) {
        ctx->pc = 0x26C7D0u;
            // 0x26c7d0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x26C7D4u;
        goto label_26c7d4;
    }
    ctx->pc = 0x26C7CCu;
    SET_GPR_U32(ctx, 31, 0x26C7D4u);
    ctx->pc = 0x26C7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C7CCu;
            // 0x26c7d0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C7D4u; }
        if (ctx->pc != 0x26C7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C7D4u; }
        if (ctx->pc != 0x26C7D4u) { return; }
    }
    ctx->pc = 0x26C7D4u;
label_26c7d4:
    // 0x26c7d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26c7d8:
    // 0x26c7d8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x26c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_26c7dc:
    // 0x26c7dc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_26c7e0:
    // 0x26c7e0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_26c7e4:
    // 0x26c7e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x26c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26c7e8:
    // 0x26c7e8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x26c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_26c7ec:
    // 0x26c7ec: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x26c7ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26c7f0:
    // 0x26c7f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_26c7f4:
    if (ctx->pc == 0x26C7F4u) {
        ctx->pc = 0x26C7F8u;
        goto label_26c7f8;
    }
    ctx->pc = 0x26C7F0u;
    {
        const bool branch_taken_0x26c7f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c7f0) {
            ctx->pc = 0x26C800u;
            goto label_26c800;
        }
    }
    ctx->pc = 0x26C7F8u;
label_26c7f8:
    // 0x26c7f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_26c7fc:
    if (ctx->pc == 0x26C7FCu) {
        ctx->pc = 0x26C7FCu;
            // 0x26c7fc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x26C800u;
        goto label_26c800;
    }
    ctx->pc = 0x26C7F8u;
    {
        const bool branch_taken_0x26c7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C7F8u;
            // 0x26c7fc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7f8) {
            ctx->pc = 0x26C808u;
            goto label_26c808;
        }
    }
    ctx->pc = 0x26C800u;
label_26c800:
    // 0x26c800: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x26c800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_26c804:
    // 0x26c804: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x26c804u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_26c808:
    // 0x26c808: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x26c808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_26c80c:
    // 0x26c80c: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x26c80cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
label_26c810:
    // 0x26c810: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x26c810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_26c814:
    // 0x26c814: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_26c818:
    if (ctx->pc == 0x26C818u) {
        ctx->pc = 0x26C818u;
            // 0x26c818: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x26C81Cu;
        goto label_26c81c;
    }
    ctx->pc = 0x26C814u;
    {
        const bool branch_taken_0x26c814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C814u;
            // 0x26c818: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c814) {
            ctx->pc = 0x26C7A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c7a0;
        }
    }
    ctx->pc = 0x26C81Cu;
label_26c81c:
    // 0x26c81c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x26c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26c820:
    // 0x26c820: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26c820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26c824:
    // 0x26c824: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x26c824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_26c828:
    // 0x26c828: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x26c828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_26c82c:
    // 0x26c82c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x26c82cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_26c830:
    // 0x26c830: 0x27a2018c  addiu       $v0, $sp, 0x18C
    ctx->pc = 0x26c830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_26c834:
    // 0x26c834: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x26c834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_26c838:
    // 0x26c838: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26c838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26c83c:
    // 0x26c83c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x26c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_26c840:
    // 0x26c840: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x26c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_26c844:
    // 0x26c844: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26c844u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_26c848:
    // 0x26c848: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26c848u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26c84c:
    // 0x26c84c: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26c84cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26c850:
    // 0x26c850: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26c850u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_26c854:
    // 0x26c854: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x26c854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_26c858:
    // 0x26c858: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x26c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_26c85c:
    // 0x26c85c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26c860:
    // 0x26c860: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26c860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26c864:
    // 0x26c864: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26c864u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_26c868:
    // 0x26c868: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x26c868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26c86c:
    // 0x26c86c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_26c870:
    if (ctx->pc == 0x26C870u) {
        ctx->pc = 0x26C870u;
            // 0x26c870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C874u;
        goto label_26c874;
    }
    ctx->pc = 0x26C86Cu;
    {
        const bool branch_taken_0x26c86c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C86Cu;
            // 0x26c870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c86c) {
            ctx->pc = 0x26C898u;
            goto label_26c898;
        }
    }
    ctx->pc = 0x26C874u;
label_26c874:
    // 0x26c874: 0x0  nop
    ctx->pc = 0x26c874u;
    // NOP
label_26c878:
    // 0x26c878: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x26c878u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_26c87c:
    // 0x26c87c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26c880:
    // 0x26c880: 0x0  nop
    ctx->pc = 0x26c880u;
    // NOP
label_26c884:
    // 0x26c884: 0x0  nop
    ctx->pc = 0x26c884u;
    // NOP
label_26c888:
    // 0x26c888: 0x0  nop
    ctx->pc = 0x26c888u;
    // NOP
label_26c88c:
    // 0x26c88c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_26c890:
    if (ctx->pc == 0x26C890u) {
        ctx->pc = 0x26C894u;
        goto label_26c894;
    }
    ctx->pc = 0x26C88Cu;
    {
        const bool branch_taken_0x26c88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c88c) {
            ctx->pc = 0x26C878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c878;
        }
    }
    ctx->pc = 0x26C894u;
label_26c894:
    // 0x26c894: 0x0  nop
    ctx->pc = 0x26c894u;
    // NOP
label_26c898:
    // 0x26c898: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x26c898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_26c89c:
    // 0x26c89c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c8a0:
    // 0x26c8a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26c8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26c8a4:
    // 0x26c8a4: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x26c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_26c8a8:
    // 0x26c8a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c8ac:
    // 0x26c8ac: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x26c8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26c8b0:
    // 0x26c8b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x26c8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26c8b4:
    // 0x26c8b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_26c8b8:
    if (ctx->pc == 0x26C8B8u) {
        ctx->pc = 0x26C8B8u;
            // 0x26c8b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C8BCu;
        goto label_26c8bc;
    }
    ctx->pc = 0x26C8B4u;
    {
        const bool branch_taken_0x26c8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8B4u;
            // 0x26c8b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8b4) {
            ctx->pc = 0x26C8E0u;
            goto label_26c8e0;
        }
    }
    ctx->pc = 0x26C8BCu;
label_26c8bc:
    // 0x26c8bc: 0x0  nop
    ctx->pc = 0x26c8bcu;
    // NOP
label_26c8c0:
    // 0x26c8c0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x26c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_26c8c4:
    // 0x26c8c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_26c8c8:
    // 0x26c8c8: 0x0  nop
    ctx->pc = 0x26c8c8u;
    // NOP
label_26c8cc:
    // 0x26c8cc: 0x0  nop
    ctx->pc = 0x26c8ccu;
    // NOP
label_26c8d0:
    // 0x26c8d0: 0x0  nop
    ctx->pc = 0x26c8d0u;
    // NOP
label_26c8d4:
    // 0x26c8d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_26c8d8:
    if (ctx->pc == 0x26C8D8u) {
        ctx->pc = 0x26C8DCu;
        goto label_26c8dc;
    }
    ctx->pc = 0x26C8D4u;
    {
        const bool branch_taken_0x26c8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c8d4) {
            ctx->pc = 0x26C8C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c8c0;
        }
    }
    ctx->pc = 0x26C8DCu;
label_26c8dc:
    // 0x26c8dc: 0x0  nop
    ctx->pc = 0x26c8dcu;
    // NOP
label_26c8e0:
    // 0x26c8e0: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x26c8e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26c8e4:
    // 0x26c8e4: 0xc1200a  movz        $a0, $a2, $at
    ctx->pc = 0x26c8e4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_26c8e8:
    // 0x26c8e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26c8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_26c8ec:
    // 0x26c8ec: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x26c8ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_26c8f0:
    // 0x26c8f0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_26c8f4:
    if (ctx->pc == 0x26C8F4u) {
        ctx->pc = 0x26C8F4u;
            // 0x26c8f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C8F8u;
        goto label_26c8f8;
    }
    ctx->pc = 0x26C8F0u;
    {
        const bool branch_taken_0x26c8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8F0u;
            // 0x26c8f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8f0) {
            ctx->pc = 0x26C8B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c8b0;
        }
    }
    ctx->pc = 0x26C8F8u;
label_26c8f8:
    // 0x26c8f8: 0x28810019  slti        $at, $a0, 0x19
    ctx->pc = 0x26c8f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
label_26c8fc:
    // 0x26c8fc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_26c900:
    if (ctx->pc == 0x26C900u) {
        ctx->pc = 0x26C904u;
        goto label_26c904;
    }
    ctx->pc = 0x26C8FCu;
    {
        const bool branch_taken_0x26c8fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c8fc) {
            ctx->pc = 0x26C908u;
            goto label_26c908;
        }
    }
    ctx->pc = 0x26C904u;
label_26c904:
    // 0x26c904: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x26c904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_26c908:
    // 0x26c908: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x26c908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_26c90c:
    // 0x26c90c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x26c90cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c910:
    // 0x26c910: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x26c910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_26c914:
    // 0x26c914: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x26c914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_26c918:
    // 0x26c918: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x26c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_26c91c:
    // 0x26c91c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26c91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26c920:
    // 0x26c920: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x26c920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_26c924:
    // 0x26c924: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x26c924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_26c928:
    // 0x26c928: 0xc09b134  jal         func_26C4D0
label_26c92c:
    if (ctx->pc == 0x26C92Cu) {
        ctx->pc = 0x26C92Cu;
            // 0x26c92c: 0x27a80210  addiu       $t0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x26C930u;
        goto label_26c930;
    }
    ctx->pc = 0x26C928u;
    SET_GPR_U32(ctx, 31, 0x26C930u);
    ctx->pc = 0x26C92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C928u;
            // 0x26c92c: 0x27a80210  addiu       $t0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C4D0u;
    goto label_26c4d0;
    ctx->pc = 0x26C930u;
label_26c930:
    // 0x26c930: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x26c930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_26c934:
    // 0x26c934: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x26c934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_26c938:
    // 0x26c938: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x26c938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_26c93c:
    // 0x26c93c: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x26c93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_26c940:
    // 0x26c940: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x26c940u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_26c944:
    // 0x26c944: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x26c944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_26c948:
    // 0x26c948: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_26c94c:
    if (ctx->pc == 0x26C94Cu) {
        ctx->pc = 0x26C94Cu;
            // 0x26c94c: 0x8fb20110  lw          $s2, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->pc = 0x26C950u;
        goto label_26c950;
    }
    ctx->pc = 0x26C948u;
    {
        const bool branch_taken_0x26c948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C948u;
            // 0x26c94c: 0x8fb20110  lw          $s2, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c948) {
            ctx->pc = 0x26C970u;
            goto label_26c970;
        }
    }
    ctx->pc = 0x26C950u;
label_26c950:
    // 0x26c950: 0x8fa60214  lw          $a2, 0x214($sp)
    ctx->pc = 0x26c950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_26c954:
    // 0x26c954: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_26c958:
    if (ctx->pc == 0x26C958u) {
        ctx->pc = 0x26C95Cu;
        goto label_26c95c;
    }
    ctx->pc = 0x26C954u;
    {
        const bool branch_taken_0x26c954 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c954) {
            ctx->pc = 0x26C970u;
            goto label_26c970;
        }
    }
    ctx->pc = 0x26C95Cu;
label_26c95c:
    // 0x26c95c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x26c95cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26c960:
    // 0x26c960: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x26c960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_26c964:
    // 0x26c964: 0x320f809  jalr        $t9
label_26c968:
    if (ctx->pc == 0x26C968u) {
        ctx->pc = 0x26C968u;
            // 0x26c968: 0x8fa50210  lw          $a1, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->pc = 0x26C96Cu;
        goto label_26c96c;
    }
    ctx->pc = 0x26C964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26C96Cu);
        ctx->pc = 0x26C968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C964u;
            // 0x26c968: 0x8fa50210  lw          $a1, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26C96Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26C96Cu; }
            if (ctx->pc != 0x26C96Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26C96Cu;
label_26c96c:
    // 0x26c96c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x26c96cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_26c970:
    // 0x26c970: 0x26e20070  addiu       $v0, $s7, 0x70
    ctx->pc = 0x26c970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
label_26c974:
    // 0x26c974: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x26c974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_26c978:
    // 0x26c978: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x26c978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_26c97c:
    // 0x26c97c: 0xafa00200  sw          $zero, 0x200($sp)
    ctx->pc = 0x26c97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 0));
label_26c980:
    // 0x26c980: 0x27a20208  addiu       $v0, $sp, 0x208
    ctx->pc = 0x26c980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_26c984:
    // 0x26c984: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x26c984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
label_26c988:
    // 0x26c988: 0x27a80158  addiu       $t0, $sp, 0x158
    ctx->pc = 0x26c988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_26c98c:
    // 0x26c98c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26c98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_26c990:
    // 0x26c990: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x26c990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_26c994:
    // 0x26c994: 0x8ee20070  lw          $v0, 0x70($s7)
    ctx->pc = 0x26c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 112)));
label_26c998:
    // 0x26c998: 0x27a30168  addiu       $v1, $sp, 0x168
    ctx->pc = 0x26c998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_26c99c:
    // 0x26c99c: 0x27a60174  addiu       $a2, $sp, 0x174
    ctx->pc = 0x26c99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_26c9a0:
    // 0x26c9a0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x26c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_26c9a4:
    // 0x26c9a4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x26c9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26c9a8:
    // 0x26c9a8: 0x27a2016c  addiu       $v0, $sp, 0x16C
    ctx->pc = 0x26c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_26c9ac:
    // 0x26c9ac: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x26c9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
label_26c9b0:
    // 0x26c9b0: 0x92890004  lbu         $t1, 0x4($s4)
    ctx->pc = 0x26c9b0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
label_26c9b4:
    // 0x26c9b4: 0x27a50134  addiu       $a1, $sp, 0x134
    ctx->pc = 0x26c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_26c9b8:
    // 0x26c9b8: 0xa0a90000  sb          $t1, 0x0($a1)
    ctx->pc = 0x26c9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 9));
label_26c9bc:
    // 0x26c9bc: 0x8e890008  lw          $t1, 0x8($s4)
    ctx->pc = 0x26c9bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_26c9c0:
    // 0x26c9c0: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x26c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_26c9c4:
    // 0x26c9c4: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x26c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
label_26c9c8:
    // 0x26c9c8: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x26c9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26c9cc:
    // 0x26c9cc: 0x27a5013c  addiu       $a1, $sp, 0x13C
    ctx->pc = 0x26c9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_26c9d0:
    // 0x26c9d0: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x26c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26c9d4:
    // 0x26c9d4: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x26c9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c9d8:
    // 0x26c9d8: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x26c9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c9dc:
    // 0x26c9dc: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x26c9dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_26c9e0:
    // 0x26c9e0: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x26c9e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_26c9e4:
    // 0x26c9e4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x26c9e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_26c9e8:
    // 0x26c9e8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x26c9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_26c9ec:
    // 0x26c9ec: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x26c9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c9f0:
    // 0x26c9f0: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x26c9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c9f4:
    // 0x26c9f4: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x26c9f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_26c9f8:
    // 0x26c9f8: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x26c9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_26c9fc:
    // 0x26c9fc: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x26c9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_26ca00:
    // 0x26ca00: 0xafa50154  sw          $a1, 0x154($sp)
    ctx->pc = 0x26ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 5));
label_26ca04:
    // 0x26ca04: 0xc6820028  lwc1        $f2, 0x28($s4)
    ctx->pc = 0x26ca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26ca08:
    // 0x26ca08: 0xc681002c  lwc1        $f1, 0x2C($s4)
    ctx->pc = 0x26ca08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ca0c:
    // 0x26ca0c: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x26ca0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ca10:
    // 0x26ca10: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x26ca10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_26ca14:
    // 0x26ca14: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x26ca14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_26ca18:
    // 0x26ca18: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x26ca18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_26ca1c:
    // 0x26ca1c: 0x8e850034  lw          $a1, 0x34($s4)
    ctx->pc = 0x26ca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_26ca20:
    // 0x26ca20: 0xafa50164  sw          $a1, 0x164($sp)
    ctx->pc = 0x26ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 5));
label_26ca24:
    // 0x26ca24: 0x8e850038  lw          $a1, 0x38($s4)
    ctx->pc = 0x26ca24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_26ca28:
    // 0x26ca28: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x26ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_26ca2c:
    // 0x26ca2c: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x26ca2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_26ca30:
    // 0x26ca30: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x26ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_26ca34:
    // 0x26ca34: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x26ca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ca38:
    // 0x26ca38: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x26ca38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_26ca3c:
    // 0x26ca3c: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x26ca3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ca40:
    // 0x26ca40: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x26ca40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_26ca44:
    // 0x26ca44: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x26ca44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_26ca48:
    // 0x26ca48: 0x8ca60028  lw          $a2, 0x28($a1)
    ctx->pc = 0x26ca48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_26ca4c:
    // 0x26ca4c: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x26ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_26ca50:
    // 0x26ca50: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26ca50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_26ca54:
    // 0x26ca54: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x26ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_26ca58:
    // 0x26ca58: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x26ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_26ca5c:
    // 0x26ca5c: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x26ca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26ca60:
    // 0x26ca60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26ca60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_26ca64:
    // 0x26ca64: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_26ca68:
    // 0x26ca68: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x26ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_26ca6c:
    // 0x26ca6c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x26ca6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26ca70:
    // 0x26ca70: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_26ca74:
    if (ctx->pc == 0x26CA74u) {
        ctx->pc = 0x26CA74u;
            // 0x26ca74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26CA78u;
        goto label_26ca78;
    }
    ctx->pc = 0x26CA70u;
    {
        const bool branch_taken_0x26ca70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA70u;
            // 0x26ca74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca70) {
            ctx->pc = 0x26CAB8u;
            goto label_26cab8;
        }
    }
    ctx->pc = 0x26CA78u;
label_26ca78:
    // 0x26ca78: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x26ca78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_26ca7c:
    // 0x26ca7c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x26ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_26ca80:
    // 0x26ca80: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x26ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_26ca84:
    // 0x26ca84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_26ca88:
    // 0x26ca88: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x26ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
label_26ca8c:
    // 0x26ca8c: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x26ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_26ca90:
    // 0x26ca90: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x26ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_26ca94:
    // 0x26ca94: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26ca98:
    // 0x26ca98: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x26ca98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_26ca9c:
    // 0x26ca9c: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x26ca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
label_26caa0:
    // 0x26caa0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_26caa4:
    // 0x26caa4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x26caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_26caa8:
    // 0x26caa8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x26caa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26caac:
    // 0x26caac: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_26cab0:
    if (ctx->pc == 0x26CAB0u) {
        ctx->pc = 0x26CAB0u;
            // 0x26cab0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x26CAB4u;
        goto label_26cab4;
    }
    ctx->pc = 0x26CAACu;
    {
        const bool branch_taken_0x26caac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CAACu;
            // 0x26cab0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26caac) {
            ctx->pc = 0x26CA80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26ca80;
        }
    }
    ctx->pc = 0x26CAB4u;
label_26cab4:
    // 0x26cab4: 0x0  nop
    ctx->pc = 0x26cab4u;
    // NOP
label_26cab8:
    // 0x26cab8: 0x8fb100f0  lw          $s1, 0xF0($sp)
    ctx->pc = 0x26cab8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_26cabc:
    // 0x26cabc: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x26cabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_26cac0:
    // 0x26cac0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x26cac0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26cac4:
    // 0x26cac4: 0x27b00130  addiu       $s0, $sp, 0x130
    ctx->pc = 0x26cac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_26cac8:
    // 0x26cac8: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x26cac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26cacc:
    // 0x26cacc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x26caccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cad0:
    // 0x26cad0: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x26cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cad4:
    // 0x26cad4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26cad4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_26cad8:
    // 0x26cad8: 0xc0a3264  jal         func_28C990
label_26cadc:
    if (ctx->pc == 0x26CADCu) {
        ctx->pc = 0x26CADCu;
            // 0x26cadc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x26CAE0u;
        goto label_26cae0;
    }
    ctx->pc = 0x26CAD8u;
    SET_GPR_U32(ctx, 31, 0x26CAE0u);
    ctx->pc = 0x26CADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CAD8u;
            // 0x26cadc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CAE0u; }
        if (ctx->pc != 0x26CAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CAE0u; }
        if (ctx->pc != 0x26CAE0u) { return; }
    }
    ctx->pc = 0x26CAE0u;
label_26cae0:
    // 0x26cae0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_26cae4:
    // 0x26cae4: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x26cae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26cae8:
    // 0x26cae8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x26cae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26caec:
    // 0x26caec: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x26caecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26caf0:
    // 0x26caf0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26caf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_26caf4:
    // 0x26caf4: 0xc0a3264  jal         func_28C990
label_26caf8:
    if (ctx->pc == 0x26CAF8u) {
        ctx->pc = 0x26CAF8u;
            // 0x26caf8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x26CAFCu;
        goto label_26cafc;
    }
    ctx->pc = 0x26CAF4u;
    SET_GPR_U32(ctx, 31, 0x26CAFCu);
    ctx->pc = 0x26CAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CAF4u;
            // 0x26caf8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CAFCu; }
        if (ctx->pc != 0x26CAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CAFCu; }
        if (ctx->pc != 0x26CAFCu) { return; }
    }
    ctx->pc = 0x26CAFCu;
label_26cafc:
    // 0x26cafc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26cb00:
    // 0x26cb00: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x26cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_26cb04:
    // 0x26cb04: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_26cb08:
    // 0x26cb08: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_26cb0c:
    // 0x26cb0c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x26cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26cb10:
    // 0x26cb10: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x26cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_26cb14:
    // 0x26cb14: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x26cb14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26cb18:
    // 0x26cb18: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_26cb1c:
    if (ctx->pc == 0x26CB1Cu) {
        ctx->pc = 0x26CB20u;
        goto label_26cb20;
    }
    ctx->pc = 0x26CB18u;
    {
        const bool branch_taken_0x26cb18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cb18) {
            ctx->pc = 0x26CB28u;
            goto label_26cb28;
        }
    }
    ctx->pc = 0x26CB20u;
label_26cb20:
    // 0x26cb20: 0x10000003  b           . + 4 + (0x3 << 2)
label_26cb24:
    if (ctx->pc == 0x26CB24u) {
        ctx->pc = 0x26CB24u;
            // 0x26cb24: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x26CB28u;
        goto label_26cb28;
    }
    ctx->pc = 0x26CB20u;
    {
        const bool branch_taken_0x26cb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB20u;
            // 0x26cb24: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb20) {
            ctx->pc = 0x26CB30u;
            goto label_26cb30;
        }
    }
    ctx->pc = 0x26CB28u;
label_26cb28:
    // 0x26cb28: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x26cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_26cb2c:
    // 0x26cb2c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x26cb2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_26cb30:
    // 0x26cb30: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x26cb30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_26cb34:
    // 0x26cb34: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x26cb34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
label_26cb38:
    // 0x26cb38: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x26cb38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_26cb3c:
    // 0x26cb3c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_26cb40:
    if (ctx->pc == 0x26CB40u) {
        ctx->pc = 0x26CB40u;
            // 0x26cb40: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x26CB44u;
        goto label_26cb44;
    }
    ctx->pc = 0x26CB3Cu;
    {
        const bool branch_taken_0x26cb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB3Cu;
            // 0x26cb40: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb3c) {
            ctx->pc = 0x26CAC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26cac8;
        }
    }
    ctx->pc = 0x26CB44u;
label_26cb44:
    // 0x26cb44: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x26cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26cb48:
    // 0x26cb48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26cb4c:
    // 0x26cb4c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x26cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_26cb50:
    // 0x26cb50: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x26cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_26cb54:
    // 0x26cb54: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x26cb54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_26cb58:
    // 0x26cb58: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x26cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_26cb5c:
    // 0x26cb5c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x26cb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_26cb60:
    // 0x26cb60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26cb64:
    // 0x26cb64: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x26cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_26cb68:
    // 0x26cb68: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x26cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_26cb6c:
    // 0x26cb6c: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_26cb70:
    // 0x26cb70: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26cb74:
    // 0x26cb74: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26cb74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26cb78:
    // 0x26cb78: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26cb78u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_26cb7c:
    // 0x26cb7c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x26cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_26cb80:
    // 0x26cb80: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x26cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_26cb84:
    // 0x26cb84: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26cb88:
    // 0x26cb88: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26cb88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26cb8c:
    // 0x26cb8c: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26cb8cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_26cb90:
    // 0x26cb90: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x26cb90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26cb94:
    // 0x26cb94: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_26cb98:
    if (ctx->pc == 0x26CB98u) {
        ctx->pc = 0x26CB98u;
            // 0x26cb98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26CB9Cu;
        goto label_26cb9c;
    }
    ctx->pc = 0x26CB94u;
    {
        const bool branch_taken_0x26cb94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB94u;
            // 0x26cb98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb94) {
            ctx->pc = 0x26CBC0u;
            goto label_26cbc0;
        }
    }
    ctx->pc = 0x26CB9Cu;
label_26cb9c:
    // 0x26cb9c: 0x0  nop
    ctx->pc = 0x26cb9cu;
    // NOP
label_26cba0:
    // 0x26cba0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x26cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_26cba4:
    // 0x26cba4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26cba8:
    // 0x26cba8: 0x0  nop
    ctx->pc = 0x26cba8u;
    // NOP
label_26cbac:
    // 0x26cbac: 0x0  nop
    ctx->pc = 0x26cbacu;
    // NOP
label_26cbb0:
    // 0x26cbb0: 0x0  nop
    ctx->pc = 0x26cbb0u;
    // NOP
label_26cbb4:
    // 0x26cbb4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_26cbb8:
    if (ctx->pc == 0x26CBB8u) {
        ctx->pc = 0x26CBBCu;
        goto label_26cbbc;
    }
    ctx->pc = 0x26CBB4u;
    {
        const bool branch_taken_0x26cbb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cbb4) {
            ctx->pc = 0x26CBA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26cba0;
        }
    }
    ctx->pc = 0x26CBBCu;
label_26cbbc:
    // 0x26cbbc: 0x0  nop
    ctx->pc = 0x26cbbcu;
    // NOP
label_26cbc0:
    // 0x26cbc0: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x26cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_26cbc4:
    // 0x26cbc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cbc8:
    // 0x26cbc8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26cbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26cbcc:
    // 0x26cbcc: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x26cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_26cbd0:
    // 0x26cbd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26cbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26cbd4:
    // 0x26cbd4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x26cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26cbd8:
    // 0x26cbd8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x26cbd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26cbdc:
    // 0x26cbdc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_26cbe0:
    if (ctx->pc == 0x26CBE0u) {
        ctx->pc = 0x26CBE0u;
            // 0x26cbe0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26CBE4u;
        goto label_26cbe4;
    }
    ctx->pc = 0x26CBDCu;
    {
        const bool branch_taken_0x26cbdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBDCu;
            // 0x26cbe0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbdc) {
            ctx->pc = 0x26CC08u;
            goto label_26cc08;
        }
    }
    ctx->pc = 0x26CBE4u;
label_26cbe4:
    // 0x26cbe4: 0x0  nop
    ctx->pc = 0x26cbe4u;
    // NOP
label_26cbe8:
    // 0x26cbe8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x26cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_26cbec:
    // 0x26cbec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_26cbf0:
    // 0x26cbf0: 0x0  nop
    ctx->pc = 0x26cbf0u;
    // NOP
label_26cbf4:
    // 0x26cbf4: 0x0  nop
    ctx->pc = 0x26cbf4u;
    // NOP
label_26cbf8:
    // 0x26cbf8: 0x0  nop
    ctx->pc = 0x26cbf8u;
    // NOP
label_26cbfc:
    // 0x26cbfc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_26cc00:
    if (ctx->pc == 0x26CC00u) {
        ctx->pc = 0x26CC04u;
        goto label_26cc04;
    }
    ctx->pc = 0x26CBFCu;
    {
        const bool branch_taken_0x26cbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cbfc) {
            ctx->pc = 0x26CBE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26cbe8;
        }
    }
    ctx->pc = 0x26CC04u;
label_26cc04:
    // 0x26cc04: 0x0  nop
    ctx->pc = 0x26cc04u;
    // NOP
label_26cc08:
    // 0x26cc08: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x26cc08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26cc0c:
    // 0x26cc0c: 0xc1200a  movz        $a0, $a2, $at
    ctx->pc = 0x26cc0cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_26cc10:
    // 0x26cc10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26cc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_26cc14:
    // 0x26cc14: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x26cc14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_26cc18:
    // 0x26cc18: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_26cc1c:
    if (ctx->pc == 0x26CC1Cu) {
        ctx->pc = 0x26CC1Cu;
            // 0x26cc1c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26CC20u;
        goto label_26cc20;
    }
    ctx->pc = 0x26CC18u;
    {
        const bool branch_taken_0x26cc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC18u;
            // 0x26cc1c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc18) {
            ctx->pc = 0x26CBD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26cbd8;
        }
    }
    ctx->pc = 0x26CC20u;
label_26cc20:
    // 0x26cc20: 0x28810019  slti        $at, $a0, 0x19
    ctx->pc = 0x26cc20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
label_26cc24:
    // 0x26cc24: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_26cc28:
    if (ctx->pc == 0x26CC28u) {
        ctx->pc = 0x26CC2Cu;
        goto label_26cc2c;
    }
    ctx->pc = 0x26CC24u;
    {
        const bool branch_taken_0x26cc24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cc24) {
            ctx->pc = 0x26CC30u;
            goto label_26cc30;
        }
    }
    ctx->pc = 0x26CC2Cu;
label_26cc2c:
    // 0x26cc2c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x26cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_26cc30:
    // 0x26cc30: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x26cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_26cc34:
    // 0x26cc34: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x26cc34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26cc38:
    // 0x26cc38: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x26cc38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_26cc3c:
    // 0x26cc3c: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x26cc3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_26cc40:
    // 0x26cc40: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x26cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_26cc44:
    // 0x26cc44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26cc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26cc48:
    // 0x26cc48: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x26cc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_26cc4c:
    // 0x26cc4c: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x26cc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_26cc50:
    // 0x26cc50: 0xc09b134  jal         func_26C4D0
label_26cc54:
    if (ctx->pc == 0x26CC54u) {
        ctx->pc = 0x26CC54u;
            // 0x26cc54: 0x27a80200  addiu       $t0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x26CC58u;
        goto label_26cc58;
    }
    ctx->pc = 0x26CC50u;
    SET_GPR_U32(ctx, 31, 0x26CC58u);
    ctx->pc = 0x26CC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC50u;
            // 0x26cc54: 0x27a80200  addiu       $t0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C4D0u;
    goto label_26c4d0;
    ctx->pc = 0x26CC58u;
label_26cc58:
    // 0x26cc58: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x26cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_26cc5c:
    // 0x26cc5c: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x26cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_26cc60:
    // 0x26cc60: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x26cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_26cc64:
    // 0x26cc64: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x26cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_26cc68:
    // 0x26cc68: 0x70f023  subu        $fp, $v1, $s0
    ctx->pc = 0x26cc68u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_26cc6c:
    // 0x26cc6c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_26cc70:
    if (ctx->pc == 0x26CC70u) {
        ctx->pc = 0x26CC70u;
            // 0x26cc70: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26CC74u;
        goto label_26cc74;
    }
    ctx->pc = 0x26CC6Cu;
    {
        const bool branch_taken_0x26cc6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC6Cu;
            // 0x26cc70: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc6c) {
            ctx->pc = 0x26CC98u;
            goto label_26cc98;
        }
    }
    ctx->pc = 0x26CC74u;
label_26cc74:
    // 0x26cc74: 0x8fa60204  lw          $a2, 0x204($sp)
    ctx->pc = 0x26cc74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_26cc78:
    // 0x26cc78: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_26cc7c:
    if (ctx->pc == 0x26CC7Cu) {
        ctx->pc = 0x26CC80u;
        goto label_26cc80;
    }
    ctx->pc = 0x26CC78u;
    {
        const bool branch_taken_0x26cc78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cc78) {
            ctx->pc = 0x26CC98u;
            goto label_26cc98;
        }
    }
    ctx->pc = 0x26CC80u;
label_26cc80:
    // 0x26cc80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x26cc80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26cc84:
    // 0x26cc84: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x26cc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_26cc88:
    // 0x26cc88: 0x320f809  jalr        $t9
label_26cc8c:
    if (ctx->pc == 0x26CC8Cu) {
        ctx->pc = 0x26CC8Cu;
            // 0x26cc8c: 0x8fa50200  lw          $a1, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->pc = 0x26CC90u;
        goto label_26cc90;
    }
    ctx->pc = 0x26CC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26CC90u);
        ctx->pc = 0x26CC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC88u;
            // 0x26cc8c: 0x8fa50200  lw          $a1, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26CC90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26CC90u; }
            if (ctx->pc != 0x26CC90u) { return; }
        }
        }
    }
    ctx->pc = 0x26CC90u;
label_26cc90:
    // 0x26cc90: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x26cc90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_26cc94:
    // 0x26cc94: 0x0  nop
    ctx->pc = 0x26cc94u;
    // NOP
label_26cc98:
    // 0x26cc98: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x26cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_26cc9c:
    // 0x26cc9c: 0x8fa6012c  lw          $a2, 0x12C($sp)
    ctx->pc = 0x26cc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_26cca0:
    // 0x26cca0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26cca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26cca4:
    // 0x26cca4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26cca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26cca8:
    // 0x26cca8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26cca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26ccac:
    // 0x26ccac: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x26ccacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_26ccb0:
    // 0x26ccb0: 0xc09c0a0  jal         func_270280
label_26ccb4:
    if (ctx->pc == 0x26CCB4u) {
        ctx->pc = 0x26CCB4u;
            // 0x26ccb4: 0x27a801d0  addiu       $t0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x26CCB8u;
        goto label_26ccb8;
    }
    ctx->pc = 0x26CCB0u;
    SET_GPR_U32(ctx, 31, 0x26CCB8u);
    ctx->pc = 0x26CCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCB0u;
            // 0x26ccb4: 0x27a801d0  addiu       $t0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270280u;
    if (runtime->hasFunction(0x270280u)) {
        auto targetFn = runtime->lookupFunction(0x270280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CCB8u; }
        if (ctx->pc != 0x26CCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270280_0x270280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CCB8u; }
        if (ctx->pc != 0x26CCB8u) { return; }
    }
    ctx->pc = 0x26CCB8u;
label_26ccb8:
    // 0x26ccb8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x26ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_26ccbc:
    // 0x26ccbc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x26ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_26ccc0:
    // 0x26ccc0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x26ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_26ccc4:
    // 0x26ccc4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_26ccc8:
    // 0x26ccc8: 0x508023  subu        $s0, $v0, $s0
    ctx->pc = 0x26ccc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_26cccc:
    // 0x26cccc: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x26ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
label_26ccd0:
    // 0x26ccd0: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x26ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
label_26ccd4:
    // 0x26ccd4: 0x27a201f8  addiu       $v0, $sp, 0x1F8
    ctx->pc = 0x26ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_26ccd8:
    // 0x26ccd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_26ccdc:
    // 0x26ccdc: 0x27a20214  addiu       $v0, $sp, 0x214
    ctx->pc = 0x26ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
label_26cce0:
    // 0x26cce0: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x26cce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_26cce4:
    // 0x26cce4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x26cce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26cce8:
    // 0x26cce8: 0xc09c580  jal         func_271600
label_26ccec:
    if (ctx->pc == 0x26CCECu) {
        ctx->pc = 0x26CCECu;
            // 0x26ccec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26CCF0u;
        goto label_26ccf0;
    }
    ctx->pc = 0x26CCE8u;
    SET_GPR_U32(ctx, 31, 0x26CCF0u);
    ctx->pc = 0x26CCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCE8u;
            // 0x26ccec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x271600u;
    if (runtime->hasFunction(0x271600u)) {
        auto targetFn = runtime->lookupFunction(0x271600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CCF0u; }
        if (ctx->pc != 0x26CCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00271600_0x271600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CCF0u; }
        if (ctx->pc != 0x26CCF0u) { return; }
    }
    ctx->pc = 0x26CCF0u;
label_26ccf0:
    // 0x26ccf0: 0x27b401f4  addiu       $s4, $sp, 0x1F4
    ctx->pc = 0x26ccf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_26ccf4:
    // 0x26ccf4: 0x27a20204  addiu       $v0, $sp, 0x204
    ctx->pc = 0x26ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_26ccf8:
    // 0x26ccf8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x26ccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26ccfc:
    // 0x26ccfc: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x26ccfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_26cd00:
    // 0x26cd00: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x26cd00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26cd04:
    // 0x26cd04: 0xc09c580  jal         func_271600
label_26cd08:
    if (ctx->pc == 0x26CD08u) {
        ctx->pc = 0x26CD08u;
            // 0x26cd08: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x26CD0Cu;
        goto label_26cd0c;
    }
    ctx->pc = 0x26CD04u;
    SET_GPR_U32(ctx, 31, 0x26CD0Cu);
    ctx->pc = 0x26CD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD04u;
            // 0x26cd08: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x271600u;
    if (runtime->hasFunction(0x271600u)) {
        auto targetFn = runtime->lookupFunction(0x271600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD0Cu; }
        if (ctx->pc != 0x26CD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00271600_0x271600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD0Cu; }
        if (ctx->pc != 0x26CD0Cu) { return; }
    }
    ctx->pc = 0x26CD0Cu;
label_26cd0c:
    // 0x26cd0c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_26cd10:
    // 0x26cd10: 0x3c21821  addu        $v1, $fp, $v0
    ctx->pc = 0x26cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_26cd14:
    // 0x26cd14: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x26cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_26cd18:
    // 0x26cd18: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x26cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_26cd1c:
    // 0x26cd1c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_26cd20:
    if (ctx->pc == 0x26CD20u) {
        ctx->pc = 0x26CD20u;
            // 0x26cd20: 0x2039821  addu        $s3, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->pc = 0x26CD24u;
        goto label_26cd24;
    }
    ctx->pc = 0x26CD1Cu;
    {
        const bool branch_taken_0x26cd1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD1Cu;
            // 0x26cd20: 0x2039821  addu        $s3, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd1c) {
            ctx->pc = 0x26CD48u;
            goto label_26cd48;
        }
    }
    ctx->pc = 0x26CD24u;
label_26cd24:
    // 0x26cd24: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x26cd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26cd28:
    // 0x26cd28: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_26cd2c:
    if (ctx->pc == 0x26CD2Cu) {
        ctx->pc = 0x26CD30u;
        goto label_26cd30;
    }
    ctx->pc = 0x26CD28u;
    {
        const bool branch_taken_0x26cd28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cd28) {
            ctx->pc = 0x26CD48u;
            goto label_26cd48;
        }
    }
    ctx->pc = 0x26CD30u;
label_26cd30:
    // 0x26cd30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x26cd30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26cd34:
    // 0x26cd34: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x26cd34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_26cd38:
    // 0x26cd38: 0x320f809  jalr        $t9
label_26cd3c:
    if (ctx->pc == 0x26CD3Cu) {
        ctx->pc = 0x26CD3Cu;
            // 0x26cd3c: 0x8fa501f0  lw          $a1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->pc = 0x26CD40u;
        goto label_26cd40;
    }
    ctx->pc = 0x26CD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26CD40u);
        ctx->pc = 0x26CD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD38u;
            // 0x26cd3c: 0x8fa501f0  lw          $a1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26CD40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26CD40u; }
            if (ctx->pc != 0x26CD40u) { return; }
        }
        }
    }
    ctx->pc = 0x26CD40u;
label_26cd40:
    // 0x26cd40: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x26cd40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_26cd44:
    // 0x26cd44: 0x0  nop
    ctx->pc = 0x26cd44u;
    // NOP
label_26cd48:
    // 0x26cd48: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x26cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_26cd4c:
    // 0x26cd4c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x26cd4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26cd50:
    // 0x26cd50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26cd54:
    // 0x26cd54: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x26cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_26cd58:
    // 0x26cd58: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26cd5c:
    // 0x26cd5c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x26cd5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26cd60:
    // 0x26cd60: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
label_26cd64:
    if (ctx->pc == 0x26CD64u) {
        ctx->pc = 0x26CD64u;
            // 0x26cd64: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26CD68u;
        goto label_26cd68;
    }
    ctx->pc = 0x26CD60u;
    {
        const bool branch_taken_0x26cd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD60u;
            // 0x26cd64: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd60) {
            ctx->pc = 0x26CEA8u;
            goto label_26cea8;
        }
    }
    ctx->pc = 0x26CD68u;
label_26cd68:
    // 0x26cd68: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x26cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_26cd6c:
    // 0x26cd6c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x26cd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_26cd70:
    // 0x26cd70: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x26cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_26cd74:
    // 0x26cd74: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x26cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_26cd78:
    // 0x26cd78: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x26cd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_26cd7c:
    // 0x26cd7c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x26cd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_26cd80:
    // 0x26cd80: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_26cd84:
    if (ctx->pc == 0x26CD84u) {
        ctx->pc = 0x26CD84u;
            // 0x26cd84: 0x24930010  addiu       $s3, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x26CD88u;
        goto label_26cd88;
    }
    ctx->pc = 0x26CD80u;
    {
        const bool branch_taken_0x26cd80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26CD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD80u;
            // 0x26cd84: 0x24930010  addiu       $s3, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd80) {
            ctx->pc = 0x26CD98u;
            goto label_26cd98;
        }
    }
    ctx->pc = 0x26CD88u;
label_26cd88:
    // 0x26cd88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26cd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26cd8c:
    // 0x26cd8c: 0xc0a728c  jal         func_29CA30
label_26cd90:
    if (ctx->pc == 0x26CD90u) {
        ctx->pc = 0x26CD90u;
            // 0x26cd90: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x26CD94u;
        goto label_26cd94;
    }
    ctx->pc = 0x26CD8Cu;
    SET_GPR_U32(ctx, 31, 0x26CD94u);
    ctx->pc = 0x26CD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD8Cu;
            // 0x26cd90: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD94u; }
        if (ctx->pc != 0x26CD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD94u; }
        if (ctx->pc != 0x26CD94u) { return; }
    }
    ctx->pc = 0x26CD94u;
label_26cd94:
    // 0x26cd94: 0x0  nop
    ctx->pc = 0x26cd94u;
    // NOP
label_26cd98:
    // 0x26cd98: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x26cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_26cd9c:
    // 0x26cd9c: 0x251082a  slt         $at, $s2, $s1
    ctx->pc = 0x26cd9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_26cda0:
    // 0x26cda0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x26cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_26cda4:
    // 0x26cda4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x26cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_26cda8:
    // 0x26cda8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x26cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_26cdac:
    // 0x26cdac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x26cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26cdb0:
    // 0x26cdb0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_26cdb4:
    if (ctx->pc == 0x26CDB4u) {
        ctx->pc = 0x26CDB4u;
            // 0x26cdb4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x26CDB8u;
        goto label_26cdb8;
    }
    ctx->pc = 0x26CDB0u;
    {
        const bool branch_taken_0x26cdb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDB0u;
            // 0x26cdb4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cdb0) {
            ctx->pc = 0x26CDF0u;
            goto label_26cdf0;
        }
    }
    ctx->pc = 0x26CDB8u;
label_26cdb8:
    // 0x26cdb8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x26cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_26cdbc:
    // 0x26cdbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26cdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26cdc0:
    // 0x26cdc0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x26cdc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26cdc4:
    // 0x26cdc4: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x26cdc4u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_26cdc8:
    // 0x26cdc8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x26cdc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26cdcc:
    // 0x26cdcc: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_26cdd0:
    if (ctx->pc == 0x26CDD0u) {
        ctx->pc = 0x26CDD0u;
            // 0x26cdd0: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26CDD4u;
        goto label_26cdd4;
    }
    ctx->pc = 0x26CDCCu;
    {
        const bool branch_taken_0x26cdcc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDCCu;
            // 0x26cdd0: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cdcc) {
            ctx->pc = 0x26CDDCu;
            goto label_26cddc;
        }
    }
    ctx->pc = 0x26CDD4u;
label_26cdd4:
    // 0x26cdd4: 0x10000003  b           . + 4 + (0x3 << 2)
label_26cdd8:
    if (ctx->pc == 0x26CDD8u) {
        ctx->pc = 0x26CDD8u;
            // 0x26cdd8: 0x26130006  addiu       $s3, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->pc = 0x26CDDCu;
        goto label_26cddc;
    }
    ctx->pc = 0x26CDD4u;
    {
        const bool branch_taken_0x26cdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDD4u;
            // 0x26cdd8: 0x26130006  addiu       $s3, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cdd4) {
            ctx->pc = 0x26CDE4u;
            goto label_26cde4;
        }
    }
    ctx->pc = 0x26CDDCu;
label_26cddc:
    // 0x26cddc: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x26cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_26cde0:
    // 0x26cde0: 0x24730003  addiu       $s3, $v1, 0x3
    ctx->pc = 0x26cde0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_26cde4:
    // 0x26cde4: 0x1000000e  b           . + 4 + (0xE << 2)
label_26cde8:
    if (ctx->pc == 0x26CDE8u) {
        ctx->pc = 0x26CDECu;
        goto label_26cdec;
    }
    ctx->pc = 0x26CDE4u;
    {
        const bool branch_taken_0x26cde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cde4) {
            ctx->pc = 0x26CE20u;
            goto label_26ce20;
        }
    }
    ctx->pc = 0x26CDECu;
label_26cdec:
    // 0x26cdec: 0x0  nop
    ctx->pc = 0x26cdecu;
    // NOP
label_26cdf0:
    // 0x26cdf0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x26cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_26cdf4:
    // 0x26cdf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26cdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26cdf8:
    // 0x26cdf8: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x26cdf8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_26cdfc:
    // 0x26cdfc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x26cdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26ce00:
    // 0x26ce00: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_26ce04:
    // 0x26ce04: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_26ce08:
    if (ctx->pc == 0x26CE08u) {
        ctx->pc = 0x26CE08u;
            // 0x26ce08: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x26CE0Cu;
        goto label_26ce0c;
    }
    ctx->pc = 0x26CE04u;
    {
        const bool branch_taken_0x26ce04 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE04u;
            // 0x26ce08: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce04) {
            ctx->pc = 0x26CE14u;
            goto label_26ce14;
        }
    }
    ctx->pc = 0x26CE0Cu;
label_26ce0c:
    // 0x26ce0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_26ce10:
    if (ctx->pc == 0x26CE10u) {
        ctx->pc = 0x26CE10u;
            // 0x26ce10: 0x26130006  addiu       $s3, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->pc = 0x26CE14u;
        goto label_26ce14;
    }
    ctx->pc = 0x26CE0Cu;
    {
        const bool branch_taken_0x26ce0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE0Cu;
            // 0x26ce10: 0x26130006  addiu       $s3, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce0c) {
            ctx->pc = 0x26CE1Cu;
            goto label_26ce1c;
        }
    }
    ctx->pc = 0x26CE14u;
label_26ce14:
    // 0x26ce14: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x26ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_26ce18:
    // 0x26ce18: 0x24730003  addiu       $s3, $v1, 0x3
    ctx->pc = 0x26ce18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_26ce1c:
    // 0x26ce1c: 0x0  nop
    ctx->pc = 0x26ce1cu;
    // NOP
label_26ce20:
    // 0x26ce20: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x26ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_26ce24:
    // 0x26ce24: 0x24850005  addiu       $a1, $a0, 0x5
    ctx->pc = 0x26ce24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
label_26ce28:
    // 0x26ce28: 0x2444fffd  addiu       $a0, $v0, -0x3
    ctx->pc = 0x26ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_26ce2c:
    // 0x26ce2c: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x26ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_26ce30:
    // 0x26ce30: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_26ce34:
    // 0x26ce34: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x26ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_26ce38:
    // 0x26ce38: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x26ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_26ce3c:
    // 0x26ce3c: 0xace30040  sw          $v1, 0x40($a3)
    ctx->pc = 0x26ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 3));
label_26ce40:
    // 0x26ce40: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x26ce40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_26ce44:
    // 0x26ce44: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x26ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_26ce48:
    // 0x26ce48: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x26ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_26ce4c:
    // 0x26ce4c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x26ce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_26ce50:
    // 0x26ce50: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x26ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_26ce54:
    // 0x26ce54: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_26ce58:
    if (ctx->pc == 0x26CE58u) {
        ctx->pc = 0x26CE58u;
            // 0x26ce58: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x26CE5Cu;
        goto label_26ce5c;
    }
    ctx->pc = 0x26CE54u;
    {
        const bool branch_taken_0x26ce54 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE54u;
            // 0x26ce58: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce54) {
            ctx->pc = 0x26CE68u;
            goto label_26ce68;
        }
    }
    ctx->pc = 0x26CE5Cu;
label_26ce5c:
    // 0x26ce5c: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x26ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_26ce60:
    // 0x26ce60: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x26ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_26ce64:
    // 0x26ce64: 0xaca3005c  sw          $v1, 0x5C($a1)
    ctx->pc = 0x26ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 3));
label_26ce68:
    // 0x26ce68: 0x2443fffd  addiu       $v1, $v0, -0x3
    ctx->pc = 0x26ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_26ce6c:
    // 0x26ce6c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x26ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_26ce70:
    // 0x26ce70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26ce70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26ce74:
    // 0x26ce74: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x26ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_26ce78:
    // 0x26ce78: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26ce7c:
    // 0x26ce7c: 0xac82005c  sw          $v0, 0x5C($a0)
    ctx->pc = 0x26ce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
label_26ce80:
    // 0x26ce80: 0x8ee2005c  lw          $v0, 0x5C($s7)
    ctx->pc = 0x26ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 92)));
label_26ce84:
    // 0x26ce84: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26ce88:
    // 0x26ce88: 0xaee2005c  sw          $v0, 0x5C($s7)
    ctx->pc = 0x26ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 92), GPR_U32(ctx, 2));
label_26ce8c:
    // 0x26ce8c: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x26ce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_26ce90:
    // 0x26ce90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26ce94:
    // 0x26ce94: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x26ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_26ce98:
    // 0x26ce98: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26ce9c:
    // 0x26ce9c: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x26ce9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26cea0:
    // 0x26cea0: 0x1020ffb1  beqz        $at, . + 4 + (-0x4F << 2)
label_26cea4:
    if (ctx->pc == 0x26CEA4u) {
        ctx->pc = 0x26CEA8u;
        goto label_26cea8;
    }
    ctx->pc = 0x26CEA0u;
    {
        const bool branch_taken_0x26cea0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cea0) {
            ctx->pc = 0x26CD68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26cd68;
        }
    }
    ctx->pc = 0x26CEA8u;
label_26cea8:
    // 0x26cea8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x26cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_26ceac:
    // 0x26ceac: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
label_26ceb0:
    if (ctx->pc == 0x26CEB0u) {
        ctx->pc = 0x26CEB0u;
            // 0x26ceb0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x26CEB4u;
        goto label_26ceb4;
    }
    ctx->pc = 0x26CEACu;
    {
        const bool branch_taken_0x26ceac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEACu;
            // 0x26ceb0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ceac) {
            ctx->pc = 0x26CED0u;
            goto label_26ced0;
        }
    }
    ctx->pc = 0x26CEB4u;
label_26ceb4:
    // 0x26ceb4: 0x27a20214  addiu       $v0, $sp, 0x214
    ctx->pc = 0x26ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
label_26ceb8:
    // 0x26ceb8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x26ceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_26cebc:
    // 0x26cebc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x26cebcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26cec0:
    // 0x26cec0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x26cec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26cec4:
    // 0x26cec4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x26cec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_26cec8:
    // 0x26cec8: 0xc09c580  jal         func_271600
label_26cecc:
    if (ctx->pc == 0x26CECCu) {
        ctx->pc = 0x26CECCu;
            // 0x26cecc: 0x8fa60210  lw          $a2, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->pc = 0x26CED0u;
        goto label_26ced0;
    }
    ctx->pc = 0x26CEC8u;
    SET_GPR_U32(ctx, 31, 0x26CED0u);
    ctx->pc = 0x26CECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEC8u;
            // 0x26cecc: 0x8fa60210  lw          $a2, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x271600u;
    if (runtime->hasFunction(0x271600u)) {
        auto targetFn = runtime->lookupFunction(0x271600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CED0u; }
        if (ctx->pc != 0x26CED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00271600_0x271600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CED0u; }
        if (ctx->pc != 0x26CED0u) { return; }
    }
    ctx->pc = 0x26CED0u;
label_26ced0:
    // 0x26ced0: 0x16c00009  bnez        $s6, . + 4 + (0x9 << 2)
label_26ced4:
    if (ctx->pc == 0x26CED4u) {
        ctx->pc = 0x26CED8u;
        goto label_26ced8;
    }
    ctx->pc = 0x26CED0u;
    {
        const bool branch_taken_0x26ced0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ced0) {
            ctx->pc = 0x26CEF8u;
            goto label_26cef8;
        }
    }
    ctx->pc = 0x26CED8u;
label_26ced8:
    // 0x26ced8: 0x27a20204  addiu       $v0, $sp, 0x204
    ctx->pc = 0x26ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_26cedc:
    // 0x26cedc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x26cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_26cee0:
    // 0x26cee0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x26cee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26cee4:
    // 0x26cee4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x26cee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26cee8:
    // 0x26cee8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x26cee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_26ceec:
    // 0x26ceec: 0xc09c580  jal         func_271600
label_26cef0:
    if (ctx->pc == 0x26CEF0u) {
        ctx->pc = 0x26CEF0u;
            // 0x26cef0: 0x8fa60200  lw          $a2, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->pc = 0x26CEF4u;
        goto label_26cef4;
    }
    ctx->pc = 0x26CEECu;
    SET_GPR_U32(ctx, 31, 0x26CEF4u);
    ctx->pc = 0x26CEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEECu;
            // 0x26cef0: 0x8fa60200  lw          $a2, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x271600u;
    if (runtime->hasFunction(0x271600u)) {
        auto targetFn = runtime->lookupFunction(0x271600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CEF4u; }
        if (ctx->pc != 0x26CEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00271600_0x271600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CEF4u; }
        if (ctx->pc != 0x26CEF4u) { return; }
    }
    ctx->pc = 0x26CEF4u;
label_26cef4:
    // 0x26cef4: 0x0  nop
    ctx->pc = 0x26cef4u;
    // NOP
label_26cef8:
    // 0x26cef8: 0x27a201f8  addiu       $v0, $sp, 0x1F8
    ctx->pc = 0x26cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_26cefc:
    // 0x26cefc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26cf00:
    // 0x26cf00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_26cf04:
    // 0x26cf04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26cf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_26cf08:
    // 0x26cf08: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_26cf0c:
    if (ctx->pc == 0x26CF0Cu) {
        ctx->pc = 0x26CF10u;
        goto label_26cf10;
    }
    ctx->pc = 0x26CF08u;
    {
        const bool branch_taken_0x26cf08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cf08) {
            ctx->pc = 0x26CF38u;
            goto label_26cf38;
        }
    }
    ctx->pc = 0x26CF10u;
label_26cf10:
    // 0x26cf10: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x26cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_26cf14:
    // 0x26cf14: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26cf14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_26cf18:
    // 0x26cf18: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_26cf1c:
    // 0x26cf1c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x26cf1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_26cf20:
    // 0x26cf20: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x26cf20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_26cf24:
    // 0x26cf24: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x26cf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_26cf28:
    // 0x26cf28: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x26cf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_26cf2c:
    // 0x26cf2c: 0xc0a7ab4  jal         func_29EAD0
label_26cf30:
    if (ctx->pc == 0x26CF30u) {
        ctx->pc = 0x26CF30u;
            // 0x26cf30: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x26CF34u;
        goto label_26cf34;
    }
    ctx->pc = 0x26CF2Cu;
    SET_GPR_U32(ctx, 31, 0x26CF34u);
    ctx->pc = 0x26CF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF2Cu;
            // 0x26cf30: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF34u; }
        if (ctx->pc != 0x26CF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF34u; }
        if (ctx->pc != 0x26CF34u) { return; }
    }
    ctx->pc = 0x26CF34u;
label_26cf34:
    // 0x26cf34: 0x0  nop
    ctx->pc = 0x26cf34u;
    // NOP
label_26cf38:
    // 0x26cf38: 0x27a20208  addiu       $v0, $sp, 0x208
    ctx->pc = 0x26cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_26cf3c:
    // 0x26cf3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26cf40:
    // 0x26cf40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_26cf44:
    // 0x26cf44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26cf44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_26cf48:
    // 0x26cf48: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_26cf4c:
    if (ctx->pc == 0x26CF4Cu) {
        ctx->pc = 0x26CF50u;
        goto label_26cf50;
    }
    ctx->pc = 0x26CF48u;
    {
        const bool branch_taken_0x26cf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cf48) {
            ctx->pc = 0x26CF78u;
            goto label_26cf78;
        }
    }
    ctx->pc = 0x26CF50u;
label_26cf50:
    // 0x26cf50: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x26cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_26cf54:
    // 0x26cf54: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26cf54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_26cf58:
    // 0x26cf58: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_26cf5c:
    // 0x26cf5c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x26cf5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_26cf60:
    // 0x26cf60: 0x8fa50200  lw          $a1, 0x200($sp)
    ctx->pc = 0x26cf60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_26cf64:
    // 0x26cf64: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x26cf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_26cf68:
    // 0x26cf68: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x26cf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_26cf6c:
    // 0x26cf6c: 0xc0a7ab4  jal         func_29EAD0
label_26cf70:
    if (ctx->pc == 0x26CF70u) {
        ctx->pc = 0x26CF70u;
            // 0x26cf70: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x26CF74u;
        goto label_26cf74;
    }
    ctx->pc = 0x26CF6Cu;
    SET_GPR_U32(ctx, 31, 0x26CF74u);
    ctx->pc = 0x26CF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF6Cu;
            // 0x26cf70: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF74u; }
        if (ctx->pc != 0x26CF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF74u; }
        if (ctx->pc != 0x26CF74u) { return; }
    }
    ctx->pc = 0x26CF74u;
label_26cf74:
    // 0x26cf74: 0x0  nop
    ctx->pc = 0x26cf74u;
    // NOP
label_26cf78:
    // 0x26cf78: 0x27a20218  addiu       $v0, $sp, 0x218
    ctx->pc = 0x26cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_26cf7c:
    // 0x26cf7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26cf80:
    // 0x26cf80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_26cf84:
    // 0x26cf84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26cf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_26cf88:
    // 0x26cf88: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_26cf8c:
    if (ctx->pc == 0x26CF8Cu) {
        ctx->pc = 0x26CF90u;
        goto label_26cf90;
    }
    ctx->pc = 0x26CF88u;
    {
        const bool branch_taken_0x26cf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cf88) {
            ctx->pc = 0x26CFB8u;
            goto label_26cfb8;
        }
    }
    ctx->pc = 0x26CF90u;
label_26cf90:
    // 0x26cf90: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x26cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_26cf94:
    // 0x26cf94: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26cf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_26cf98:
    // 0x26cf98: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26cf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_26cf9c:
    // 0x26cf9c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x26cf9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_26cfa0:
    // 0x26cfa0: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x26cfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_26cfa4:
    // 0x26cfa4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x26cfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_26cfa8:
    // 0x26cfa8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x26cfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_26cfac:
    // 0x26cfac: 0xc0a7ab4  jal         func_29EAD0
label_26cfb0:
    if (ctx->pc == 0x26CFB0u) {
        ctx->pc = 0x26CFB0u;
            // 0x26cfb0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x26CFB4u;
        goto label_26cfb4;
    }
    ctx->pc = 0x26CFACu;
    SET_GPR_U32(ctx, 31, 0x26CFB4u);
    ctx->pc = 0x26CFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CFACu;
            // 0x26cfb0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFB4u; }
        if (ctx->pc != 0x26CFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFB4u; }
        if (ctx->pc != 0x26CFB4u) { return; }
    }
    ctx->pc = 0x26CFB4u;
label_26cfb4:
    // 0x26cfb4: 0x0  nop
    ctx->pc = 0x26cfb4u;
    // NOP
label_26cfb8:
    // 0x26cfb8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x26cfb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26cfbc:
    // 0x26cfbc: 0x0  nop
    ctx->pc = 0x26cfbcu;
    // NOP
label_26cfc0:
    // 0x26cfc0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26cfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_26cfc4:
    // 0x26cfc4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26cfc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26cfc8:
    // 0x26cfc8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26cfc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26cfcc:
    // 0x26cfcc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26cfccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26cfd0:
    // 0x26cfd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26cfd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26cfd4:
    // 0x26cfd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26cfd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26cfd8:
    // 0x26cfd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26cfd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26cfdc:
    // 0x26cfdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26cfdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26cfe0:
    // 0x26cfe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26cfe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26cfe4:
    // 0x26cfe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26cfe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26cfe8:
    // 0x26cfe8: 0x3e00008  jr          $ra
label_26cfec:
    if (ctx->pc == 0x26CFECu) {
        ctx->pc = 0x26CFECu;
            // 0x26cfec: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x26CFF0u;
        goto label_fallthrough_0x26cfe8;
    }
    ctx->pc = 0x26CFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CFE8u;
            // 0x26cfec: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26cfe8:
    ctx->pc = 0x26CFF0u;
}
