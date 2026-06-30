#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CA520
// Address: 0x3ca520 - 0x3cb160
void sub_003CA520_0x3ca520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA520_0x3ca520");
#endif

    switch (ctx->pc) {
        case 0x3ca520u: goto label_3ca520;
        case 0x3ca524u: goto label_3ca524;
        case 0x3ca528u: goto label_3ca528;
        case 0x3ca52cu: goto label_3ca52c;
        case 0x3ca530u: goto label_3ca530;
        case 0x3ca534u: goto label_3ca534;
        case 0x3ca538u: goto label_3ca538;
        case 0x3ca53cu: goto label_3ca53c;
        case 0x3ca540u: goto label_3ca540;
        case 0x3ca544u: goto label_3ca544;
        case 0x3ca548u: goto label_3ca548;
        case 0x3ca54cu: goto label_3ca54c;
        case 0x3ca550u: goto label_3ca550;
        case 0x3ca554u: goto label_3ca554;
        case 0x3ca558u: goto label_3ca558;
        case 0x3ca55cu: goto label_3ca55c;
        case 0x3ca560u: goto label_3ca560;
        case 0x3ca564u: goto label_3ca564;
        case 0x3ca568u: goto label_3ca568;
        case 0x3ca56cu: goto label_3ca56c;
        case 0x3ca570u: goto label_3ca570;
        case 0x3ca574u: goto label_3ca574;
        case 0x3ca578u: goto label_3ca578;
        case 0x3ca57cu: goto label_3ca57c;
        case 0x3ca580u: goto label_3ca580;
        case 0x3ca584u: goto label_3ca584;
        case 0x3ca588u: goto label_3ca588;
        case 0x3ca58cu: goto label_3ca58c;
        case 0x3ca590u: goto label_3ca590;
        case 0x3ca594u: goto label_3ca594;
        case 0x3ca598u: goto label_3ca598;
        case 0x3ca59cu: goto label_3ca59c;
        case 0x3ca5a0u: goto label_3ca5a0;
        case 0x3ca5a4u: goto label_3ca5a4;
        case 0x3ca5a8u: goto label_3ca5a8;
        case 0x3ca5acu: goto label_3ca5ac;
        case 0x3ca5b0u: goto label_3ca5b0;
        case 0x3ca5b4u: goto label_3ca5b4;
        case 0x3ca5b8u: goto label_3ca5b8;
        case 0x3ca5bcu: goto label_3ca5bc;
        case 0x3ca5c0u: goto label_3ca5c0;
        case 0x3ca5c4u: goto label_3ca5c4;
        case 0x3ca5c8u: goto label_3ca5c8;
        case 0x3ca5ccu: goto label_3ca5cc;
        case 0x3ca5d0u: goto label_3ca5d0;
        case 0x3ca5d4u: goto label_3ca5d4;
        case 0x3ca5d8u: goto label_3ca5d8;
        case 0x3ca5dcu: goto label_3ca5dc;
        case 0x3ca5e0u: goto label_3ca5e0;
        case 0x3ca5e4u: goto label_3ca5e4;
        case 0x3ca5e8u: goto label_3ca5e8;
        case 0x3ca5ecu: goto label_3ca5ec;
        case 0x3ca5f0u: goto label_3ca5f0;
        case 0x3ca5f4u: goto label_3ca5f4;
        case 0x3ca5f8u: goto label_3ca5f8;
        case 0x3ca5fcu: goto label_3ca5fc;
        case 0x3ca600u: goto label_3ca600;
        case 0x3ca604u: goto label_3ca604;
        case 0x3ca608u: goto label_3ca608;
        case 0x3ca60cu: goto label_3ca60c;
        case 0x3ca610u: goto label_3ca610;
        case 0x3ca614u: goto label_3ca614;
        case 0x3ca618u: goto label_3ca618;
        case 0x3ca61cu: goto label_3ca61c;
        case 0x3ca620u: goto label_3ca620;
        case 0x3ca624u: goto label_3ca624;
        case 0x3ca628u: goto label_3ca628;
        case 0x3ca62cu: goto label_3ca62c;
        case 0x3ca630u: goto label_3ca630;
        case 0x3ca634u: goto label_3ca634;
        case 0x3ca638u: goto label_3ca638;
        case 0x3ca63cu: goto label_3ca63c;
        case 0x3ca640u: goto label_3ca640;
        case 0x3ca644u: goto label_3ca644;
        case 0x3ca648u: goto label_3ca648;
        case 0x3ca64cu: goto label_3ca64c;
        case 0x3ca650u: goto label_3ca650;
        case 0x3ca654u: goto label_3ca654;
        case 0x3ca658u: goto label_3ca658;
        case 0x3ca65cu: goto label_3ca65c;
        case 0x3ca660u: goto label_3ca660;
        case 0x3ca664u: goto label_3ca664;
        case 0x3ca668u: goto label_3ca668;
        case 0x3ca66cu: goto label_3ca66c;
        case 0x3ca670u: goto label_3ca670;
        case 0x3ca674u: goto label_3ca674;
        case 0x3ca678u: goto label_3ca678;
        case 0x3ca67cu: goto label_3ca67c;
        case 0x3ca680u: goto label_3ca680;
        case 0x3ca684u: goto label_3ca684;
        case 0x3ca688u: goto label_3ca688;
        case 0x3ca68cu: goto label_3ca68c;
        case 0x3ca690u: goto label_3ca690;
        case 0x3ca694u: goto label_3ca694;
        case 0x3ca698u: goto label_3ca698;
        case 0x3ca69cu: goto label_3ca69c;
        case 0x3ca6a0u: goto label_3ca6a0;
        case 0x3ca6a4u: goto label_3ca6a4;
        case 0x3ca6a8u: goto label_3ca6a8;
        case 0x3ca6acu: goto label_3ca6ac;
        case 0x3ca6b0u: goto label_3ca6b0;
        case 0x3ca6b4u: goto label_3ca6b4;
        case 0x3ca6b8u: goto label_3ca6b8;
        case 0x3ca6bcu: goto label_3ca6bc;
        case 0x3ca6c0u: goto label_3ca6c0;
        case 0x3ca6c4u: goto label_3ca6c4;
        case 0x3ca6c8u: goto label_3ca6c8;
        case 0x3ca6ccu: goto label_3ca6cc;
        case 0x3ca6d0u: goto label_3ca6d0;
        case 0x3ca6d4u: goto label_3ca6d4;
        case 0x3ca6d8u: goto label_3ca6d8;
        case 0x3ca6dcu: goto label_3ca6dc;
        case 0x3ca6e0u: goto label_3ca6e0;
        case 0x3ca6e4u: goto label_3ca6e4;
        case 0x3ca6e8u: goto label_3ca6e8;
        case 0x3ca6ecu: goto label_3ca6ec;
        case 0x3ca6f0u: goto label_3ca6f0;
        case 0x3ca6f4u: goto label_3ca6f4;
        case 0x3ca6f8u: goto label_3ca6f8;
        case 0x3ca6fcu: goto label_3ca6fc;
        case 0x3ca700u: goto label_3ca700;
        case 0x3ca704u: goto label_3ca704;
        case 0x3ca708u: goto label_3ca708;
        case 0x3ca70cu: goto label_3ca70c;
        case 0x3ca710u: goto label_3ca710;
        case 0x3ca714u: goto label_3ca714;
        case 0x3ca718u: goto label_3ca718;
        case 0x3ca71cu: goto label_3ca71c;
        case 0x3ca720u: goto label_3ca720;
        case 0x3ca724u: goto label_3ca724;
        case 0x3ca728u: goto label_3ca728;
        case 0x3ca72cu: goto label_3ca72c;
        case 0x3ca730u: goto label_3ca730;
        case 0x3ca734u: goto label_3ca734;
        case 0x3ca738u: goto label_3ca738;
        case 0x3ca73cu: goto label_3ca73c;
        case 0x3ca740u: goto label_3ca740;
        case 0x3ca744u: goto label_3ca744;
        case 0x3ca748u: goto label_3ca748;
        case 0x3ca74cu: goto label_3ca74c;
        case 0x3ca750u: goto label_3ca750;
        case 0x3ca754u: goto label_3ca754;
        case 0x3ca758u: goto label_3ca758;
        case 0x3ca75cu: goto label_3ca75c;
        case 0x3ca760u: goto label_3ca760;
        case 0x3ca764u: goto label_3ca764;
        case 0x3ca768u: goto label_3ca768;
        case 0x3ca76cu: goto label_3ca76c;
        case 0x3ca770u: goto label_3ca770;
        case 0x3ca774u: goto label_3ca774;
        case 0x3ca778u: goto label_3ca778;
        case 0x3ca77cu: goto label_3ca77c;
        case 0x3ca780u: goto label_3ca780;
        case 0x3ca784u: goto label_3ca784;
        case 0x3ca788u: goto label_3ca788;
        case 0x3ca78cu: goto label_3ca78c;
        case 0x3ca790u: goto label_3ca790;
        case 0x3ca794u: goto label_3ca794;
        case 0x3ca798u: goto label_3ca798;
        case 0x3ca79cu: goto label_3ca79c;
        case 0x3ca7a0u: goto label_3ca7a0;
        case 0x3ca7a4u: goto label_3ca7a4;
        case 0x3ca7a8u: goto label_3ca7a8;
        case 0x3ca7acu: goto label_3ca7ac;
        case 0x3ca7b0u: goto label_3ca7b0;
        case 0x3ca7b4u: goto label_3ca7b4;
        case 0x3ca7b8u: goto label_3ca7b8;
        case 0x3ca7bcu: goto label_3ca7bc;
        case 0x3ca7c0u: goto label_3ca7c0;
        case 0x3ca7c4u: goto label_3ca7c4;
        case 0x3ca7c8u: goto label_3ca7c8;
        case 0x3ca7ccu: goto label_3ca7cc;
        case 0x3ca7d0u: goto label_3ca7d0;
        case 0x3ca7d4u: goto label_3ca7d4;
        case 0x3ca7d8u: goto label_3ca7d8;
        case 0x3ca7dcu: goto label_3ca7dc;
        case 0x3ca7e0u: goto label_3ca7e0;
        case 0x3ca7e4u: goto label_3ca7e4;
        case 0x3ca7e8u: goto label_3ca7e8;
        case 0x3ca7ecu: goto label_3ca7ec;
        case 0x3ca7f0u: goto label_3ca7f0;
        case 0x3ca7f4u: goto label_3ca7f4;
        case 0x3ca7f8u: goto label_3ca7f8;
        case 0x3ca7fcu: goto label_3ca7fc;
        case 0x3ca800u: goto label_3ca800;
        case 0x3ca804u: goto label_3ca804;
        case 0x3ca808u: goto label_3ca808;
        case 0x3ca80cu: goto label_3ca80c;
        case 0x3ca810u: goto label_3ca810;
        case 0x3ca814u: goto label_3ca814;
        case 0x3ca818u: goto label_3ca818;
        case 0x3ca81cu: goto label_3ca81c;
        case 0x3ca820u: goto label_3ca820;
        case 0x3ca824u: goto label_3ca824;
        case 0x3ca828u: goto label_3ca828;
        case 0x3ca82cu: goto label_3ca82c;
        case 0x3ca830u: goto label_3ca830;
        case 0x3ca834u: goto label_3ca834;
        case 0x3ca838u: goto label_3ca838;
        case 0x3ca83cu: goto label_3ca83c;
        case 0x3ca840u: goto label_3ca840;
        case 0x3ca844u: goto label_3ca844;
        case 0x3ca848u: goto label_3ca848;
        case 0x3ca84cu: goto label_3ca84c;
        case 0x3ca850u: goto label_3ca850;
        case 0x3ca854u: goto label_3ca854;
        case 0x3ca858u: goto label_3ca858;
        case 0x3ca85cu: goto label_3ca85c;
        case 0x3ca860u: goto label_3ca860;
        case 0x3ca864u: goto label_3ca864;
        case 0x3ca868u: goto label_3ca868;
        case 0x3ca86cu: goto label_3ca86c;
        case 0x3ca870u: goto label_3ca870;
        case 0x3ca874u: goto label_3ca874;
        case 0x3ca878u: goto label_3ca878;
        case 0x3ca87cu: goto label_3ca87c;
        case 0x3ca880u: goto label_3ca880;
        case 0x3ca884u: goto label_3ca884;
        case 0x3ca888u: goto label_3ca888;
        case 0x3ca88cu: goto label_3ca88c;
        case 0x3ca890u: goto label_3ca890;
        case 0x3ca894u: goto label_3ca894;
        case 0x3ca898u: goto label_3ca898;
        case 0x3ca89cu: goto label_3ca89c;
        case 0x3ca8a0u: goto label_3ca8a0;
        case 0x3ca8a4u: goto label_3ca8a4;
        case 0x3ca8a8u: goto label_3ca8a8;
        case 0x3ca8acu: goto label_3ca8ac;
        case 0x3ca8b0u: goto label_3ca8b0;
        case 0x3ca8b4u: goto label_3ca8b4;
        case 0x3ca8b8u: goto label_3ca8b8;
        case 0x3ca8bcu: goto label_3ca8bc;
        case 0x3ca8c0u: goto label_3ca8c0;
        case 0x3ca8c4u: goto label_3ca8c4;
        case 0x3ca8c8u: goto label_3ca8c8;
        case 0x3ca8ccu: goto label_3ca8cc;
        case 0x3ca8d0u: goto label_3ca8d0;
        case 0x3ca8d4u: goto label_3ca8d4;
        case 0x3ca8d8u: goto label_3ca8d8;
        case 0x3ca8dcu: goto label_3ca8dc;
        case 0x3ca8e0u: goto label_3ca8e0;
        case 0x3ca8e4u: goto label_3ca8e4;
        case 0x3ca8e8u: goto label_3ca8e8;
        case 0x3ca8ecu: goto label_3ca8ec;
        case 0x3ca8f0u: goto label_3ca8f0;
        case 0x3ca8f4u: goto label_3ca8f4;
        case 0x3ca8f8u: goto label_3ca8f8;
        case 0x3ca8fcu: goto label_3ca8fc;
        case 0x3ca900u: goto label_3ca900;
        case 0x3ca904u: goto label_3ca904;
        case 0x3ca908u: goto label_3ca908;
        case 0x3ca90cu: goto label_3ca90c;
        case 0x3ca910u: goto label_3ca910;
        case 0x3ca914u: goto label_3ca914;
        case 0x3ca918u: goto label_3ca918;
        case 0x3ca91cu: goto label_3ca91c;
        case 0x3ca920u: goto label_3ca920;
        case 0x3ca924u: goto label_3ca924;
        case 0x3ca928u: goto label_3ca928;
        case 0x3ca92cu: goto label_3ca92c;
        case 0x3ca930u: goto label_3ca930;
        case 0x3ca934u: goto label_3ca934;
        case 0x3ca938u: goto label_3ca938;
        case 0x3ca93cu: goto label_3ca93c;
        case 0x3ca940u: goto label_3ca940;
        case 0x3ca944u: goto label_3ca944;
        case 0x3ca948u: goto label_3ca948;
        case 0x3ca94cu: goto label_3ca94c;
        case 0x3ca950u: goto label_3ca950;
        case 0x3ca954u: goto label_3ca954;
        case 0x3ca958u: goto label_3ca958;
        case 0x3ca95cu: goto label_3ca95c;
        case 0x3ca960u: goto label_3ca960;
        case 0x3ca964u: goto label_3ca964;
        case 0x3ca968u: goto label_3ca968;
        case 0x3ca96cu: goto label_3ca96c;
        case 0x3ca970u: goto label_3ca970;
        case 0x3ca974u: goto label_3ca974;
        case 0x3ca978u: goto label_3ca978;
        case 0x3ca97cu: goto label_3ca97c;
        case 0x3ca980u: goto label_3ca980;
        case 0x3ca984u: goto label_3ca984;
        case 0x3ca988u: goto label_3ca988;
        case 0x3ca98cu: goto label_3ca98c;
        case 0x3ca990u: goto label_3ca990;
        case 0x3ca994u: goto label_3ca994;
        case 0x3ca998u: goto label_3ca998;
        case 0x3ca99cu: goto label_3ca99c;
        case 0x3ca9a0u: goto label_3ca9a0;
        case 0x3ca9a4u: goto label_3ca9a4;
        case 0x3ca9a8u: goto label_3ca9a8;
        case 0x3ca9acu: goto label_3ca9ac;
        case 0x3ca9b0u: goto label_3ca9b0;
        case 0x3ca9b4u: goto label_3ca9b4;
        case 0x3ca9b8u: goto label_3ca9b8;
        case 0x3ca9bcu: goto label_3ca9bc;
        case 0x3ca9c0u: goto label_3ca9c0;
        case 0x3ca9c4u: goto label_3ca9c4;
        case 0x3ca9c8u: goto label_3ca9c8;
        case 0x3ca9ccu: goto label_3ca9cc;
        case 0x3ca9d0u: goto label_3ca9d0;
        case 0x3ca9d4u: goto label_3ca9d4;
        case 0x3ca9d8u: goto label_3ca9d8;
        case 0x3ca9dcu: goto label_3ca9dc;
        case 0x3ca9e0u: goto label_3ca9e0;
        case 0x3ca9e4u: goto label_3ca9e4;
        case 0x3ca9e8u: goto label_3ca9e8;
        case 0x3ca9ecu: goto label_3ca9ec;
        case 0x3ca9f0u: goto label_3ca9f0;
        case 0x3ca9f4u: goto label_3ca9f4;
        case 0x3ca9f8u: goto label_3ca9f8;
        case 0x3ca9fcu: goto label_3ca9fc;
        case 0x3caa00u: goto label_3caa00;
        case 0x3caa04u: goto label_3caa04;
        case 0x3caa08u: goto label_3caa08;
        case 0x3caa0cu: goto label_3caa0c;
        case 0x3caa10u: goto label_3caa10;
        case 0x3caa14u: goto label_3caa14;
        case 0x3caa18u: goto label_3caa18;
        case 0x3caa1cu: goto label_3caa1c;
        case 0x3caa20u: goto label_3caa20;
        case 0x3caa24u: goto label_3caa24;
        case 0x3caa28u: goto label_3caa28;
        case 0x3caa2cu: goto label_3caa2c;
        case 0x3caa30u: goto label_3caa30;
        case 0x3caa34u: goto label_3caa34;
        case 0x3caa38u: goto label_3caa38;
        case 0x3caa3cu: goto label_3caa3c;
        case 0x3caa40u: goto label_3caa40;
        case 0x3caa44u: goto label_3caa44;
        case 0x3caa48u: goto label_3caa48;
        case 0x3caa4cu: goto label_3caa4c;
        case 0x3caa50u: goto label_3caa50;
        case 0x3caa54u: goto label_3caa54;
        case 0x3caa58u: goto label_3caa58;
        case 0x3caa5cu: goto label_3caa5c;
        case 0x3caa60u: goto label_3caa60;
        case 0x3caa64u: goto label_3caa64;
        case 0x3caa68u: goto label_3caa68;
        case 0x3caa6cu: goto label_3caa6c;
        case 0x3caa70u: goto label_3caa70;
        case 0x3caa74u: goto label_3caa74;
        case 0x3caa78u: goto label_3caa78;
        case 0x3caa7cu: goto label_3caa7c;
        case 0x3caa80u: goto label_3caa80;
        case 0x3caa84u: goto label_3caa84;
        case 0x3caa88u: goto label_3caa88;
        case 0x3caa8cu: goto label_3caa8c;
        case 0x3caa90u: goto label_3caa90;
        case 0x3caa94u: goto label_3caa94;
        case 0x3caa98u: goto label_3caa98;
        case 0x3caa9cu: goto label_3caa9c;
        case 0x3caaa0u: goto label_3caaa0;
        case 0x3caaa4u: goto label_3caaa4;
        case 0x3caaa8u: goto label_3caaa8;
        case 0x3caaacu: goto label_3caaac;
        case 0x3caab0u: goto label_3caab0;
        case 0x3caab4u: goto label_3caab4;
        case 0x3caab8u: goto label_3caab8;
        case 0x3caabcu: goto label_3caabc;
        case 0x3caac0u: goto label_3caac0;
        case 0x3caac4u: goto label_3caac4;
        case 0x3caac8u: goto label_3caac8;
        case 0x3caaccu: goto label_3caacc;
        case 0x3caad0u: goto label_3caad0;
        case 0x3caad4u: goto label_3caad4;
        case 0x3caad8u: goto label_3caad8;
        case 0x3caadcu: goto label_3caadc;
        case 0x3caae0u: goto label_3caae0;
        case 0x3caae4u: goto label_3caae4;
        case 0x3caae8u: goto label_3caae8;
        case 0x3caaecu: goto label_3caaec;
        case 0x3caaf0u: goto label_3caaf0;
        case 0x3caaf4u: goto label_3caaf4;
        case 0x3caaf8u: goto label_3caaf8;
        case 0x3caafcu: goto label_3caafc;
        case 0x3cab00u: goto label_3cab00;
        case 0x3cab04u: goto label_3cab04;
        case 0x3cab08u: goto label_3cab08;
        case 0x3cab0cu: goto label_3cab0c;
        case 0x3cab10u: goto label_3cab10;
        case 0x3cab14u: goto label_3cab14;
        case 0x3cab18u: goto label_3cab18;
        case 0x3cab1cu: goto label_3cab1c;
        case 0x3cab20u: goto label_3cab20;
        case 0x3cab24u: goto label_3cab24;
        case 0x3cab28u: goto label_3cab28;
        case 0x3cab2cu: goto label_3cab2c;
        case 0x3cab30u: goto label_3cab30;
        case 0x3cab34u: goto label_3cab34;
        case 0x3cab38u: goto label_3cab38;
        case 0x3cab3cu: goto label_3cab3c;
        case 0x3cab40u: goto label_3cab40;
        case 0x3cab44u: goto label_3cab44;
        case 0x3cab48u: goto label_3cab48;
        case 0x3cab4cu: goto label_3cab4c;
        case 0x3cab50u: goto label_3cab50;
        case 0x3cab54u: goto label_3cab54;
        case 0x3cab58u: goto label_3cab58;
        case 0x3cab5cu: goto label_3cab5c;
        case 0x3cab60u: goto label_3cab60;
        case 0x3cab64u: goto label_3cab64;
        case 0x3cab68u: goto label_3cab68;
        case 0x3cab6cu: goto label_3cab6c;
        case 0x3cab70u: goto label_3cab70;
        case 0x3cab74u: goto label_3cab74;
        case 0x3cab78u: goto label_3cab78;
        case 0x3cab7cu: goto label_3cab7c;
        case 0x3cab80u: goto label_3cab80;
        case 0x3cab84u: goto label_3cab84;
        case 0x3cab88u: goto label_3cab88;
        case 0x3cab8cu: goto label_3cab8c;
        case 0x3cab90u: goto label_3cab90;
        case 0x3cab94u: goto label_3cab94;
        case 0x3cab98u: goto label_3cab98;
        case 0x3cab9cu: goto label_3cab9c;
        case 0x3caba0u: goto label_3caba0;
        case 0x3caba4u: goto label_3caba4;
        case 0x3caba8u: goto label_3caba8;
        case 0x3cabacu: goto label_3cabac;
        case 0x3cabb0u: goto label_3cabb0;
        case 0x3cabb4u: goto label_3cabb4;
        case 0x3cabb8u: goto label_3cabb8;
        case 0x3cabbcu: goto label_3cabbc;
        case 0x3cabc0u: goto label_3cabc0;
        case 0x3cabc4u: goto label_3cabc4;
        case 0x3cabc8u: goto label_3cabc8;
        case 0x3cabccu: goto label_3cabcc;
        case 0x3cabd0u: goto label_3cabd0;
        case 0x3cabd4u: goto label_3cabd4;
        case 0x3cabd8u: goto label_3cabd8;
        case 0x3cabdcu: goto label_3cabdc;
        case 0x3cabe0u: goto label_3cabe0;
        case 0x3cabe4u: goto label_3cabe4;
        case 0x3cabe8u: goto label_3cabe8;
        case 0x3cabecu: goto label_3cabec;
        case 0x3cabf0u: goto label_3cabf0;
        case 0x3cabf4u: goto label_3cabf4;
        case 0x3cabf8u: goto label_3cabf8;
        case 0x3cabfcu: goto label_3cabfc;
        case 0x3cac00u: goto label_3cac00;
        case 0x3cac04u: goto label_3cac04;
        case 0x3cac08u: goto label_3cac08;
        case 0x3cac0cu: goto label_3cac0c;
        case 0x3cac10u: goto label_3cac10;
        case 0x3cac14u: goto label_3cac14;
        case 0x3cac18u: goto label_3cac18;
        case 0x3cac1cu: goto label_3cac1c;
        case 0x3cac20u: goto label_3cac20;
        case 0x3cac24u: goto label_3cac24;
        case 0x3cac28u: goto label_3cac28;
        case 0x3cac2cu: goto label_3cac2c;
        case 0x3cac30u: goto label_3cac30;
        case 0x3cac34u: goto label_3cac34;
        case 0x3cac38u: goto label_3cac38;
        case 0x3cac3cu: goto label_3cac3c;
        case 0x3cac40u: goto label_3cac40;
        case 0x3cac44u: goto label_3cac44;
        case 0x3cac48u: goto label_3cac48;
        case 0x3cac4cu: goto label_3cac4c;
        case 0x3cac50u: goto label_3cac50;
        case 0x3cac54u: goto label_3cac54;
        case 0x3cac58u: goto label_3cac58;
        case 0x3cac5cu: goto label_3cac5c;
        case 0x3cac60u: goto label_3cac60;
        case 0x3cac64u: goto label_3cac64;
        case 0x3cac68u: goto label_3cac68;
        case 0x3cac6cu: goto label_3cac6c;
        case 0x3cac70u: goto label_3cac70;
        case 0x3cac74u: goto label_3cac74;
        case 0x3cac78u: goto label_3cac78;
        case 0x3cac7cu: goto label_3cac7c;
        case 0x3cac80u: goto label_3cac80;
        case 0x3cac84u: goto label_3cac84;
        case 0x3cac88u: goto label_3cac88;
        case 0x3cac8cu: goto label_3cac8c;
        case 0x3cac90u: goto label_3cac90;
        case 0x3cac94u: goto label_3cac94;
        case 0x3cac98u: goto label_3cac98;
        case 0x3cac9cu: goto label_3cac9c;
        case 0x3caca0u: goto label_3caca0;
        case 0x3caca4u: goto label_3caca4;
        case 0x3caca8u: goto label_3caca8;
        case 0x3cacacu: goto label_3cacac;
        case 0x3cacb0u: goto label_3cacb0;
        case 0x3cacb4u: goto label_3cacb4;
        case 0x3cacb8u: goto label_3cacb8;
        case 0x3cacbcu: goto label_3cacbc;
        case 0x3cacc0u: goto label_3cacc0;
        case 0x3cacc4u: goto label_3cacc4;
        case 0x3cacc8u: goto label_3cacc8;
        case 0x3cacccu: goto label_3caccc;
        case 0x3cacd0u: goto label_3cacd0;
        case 0x3cacd4u: goto label_3cacd4;
        case 0x3cacd8u: goto label_3cacd8;
        case 0x3cacdcu: goto label_3cacdc;
        case 0x3cace0u: goto label_3cace0;
        case 0x3cace4u: goto label_3cace4;
        case 0x3cace8u: goto label_3cace8;
        case 0x3cacecu: goto label_3cacec;
        case 0x3cacf0u: goto label_3cacf0;
        case 0x3cacf4u: goto label_3cacf4;
        case 0x3cacf8u: goto label_3cacf8;
        case 0x3cacfcu: goto label_3cacfc;
        case 0x3cad00u: goto label_3cad00;
        case 0x3cad04u: goto label_3cad04;
        case 0x3cad08u: goto label_3cad08;
        case 0x3cad0cu: goto label_3cad0c;
        case 0x3cad10u: goto label_3cad10;
        case 0x3cad14u: goto label_3cad14;
        case 0x3cad18u: goto label_3cad18;
        case 0x3cad1cu: goto label_3cad1c;
        case 0x3cad20u: goto label_3cad20;
        case 0x3cad24u: goto label_3cad24;
        case 0x3cad28u: goto label_3cad28;
        case 0x3cad2cu: goto label_3cad2c;
        case 0x3cad30u: goto label_3cad30;
        case 0x3cad34u: goto label_3cad34;
        case 0x3cad38u: goto label_3cad38;
        case 0x3cad3cu: goto label_3cad3c;
        case 0x3cad40u: goto label_3cad40;
        case 0x3cad44u: goto label_3cad44;
        case 0x3cad48u: goto label_3cad48;
        case 0x3cad4cu: goto label_3cad4c;
        case 0x3cad50u: goto label_3cad50;
        case 0x3cad54u: goto label_3cad54;
        case 0x3cad58u: goto label_3cad58;
        case 0x3cad5cu: goto label_3cad5c;
        case 0x3cad60u: goto label_3cad60;
        case 0x3cad64u: goto label_3cad64;
        case 0x3cad68u: goto label_3cad68;
        case 0x3cad6cu: goto label_3cad6c;
        case 0x3cad70u: goto label_3cad70;
        case 0x3cad74u: goto label_3cad74;
        case 0x3cad78u: goto label_3cad78;
        case 0x3cad7cu: goto label_3cad7c;
        case 0x3cad80u: goto label_3cad80;
        case 0x3cad84u: goto label_3cad84;
        case 0x3cad88u: goto label_3cad88;
        case 0x3cad8cu: goto label_3cad8c;
        case 0x3cad90u: goto label_3cad90;
        case 0x3cad94u: goto label_3cad94;
        case 0x3cad98u: goto label_3cad98;
        case 0x3cad9cu: goto label_3cad9c;
        case 0x3cada0u: goto label_3cada0;
        case 0x3cada4u: goto label_3cada4;
        case 0x3cada8u: goto label_3cada8;
        case 0x3cadacu: goto label_3cadac;
        case 0x3cadb0u: goto label_3cadb0;
        case 0x3cadb4u: goto label_3cadb4;
        case 0x3cadb8u: goto label_3cadb8;
        case 0x3cadbcu: goto label_3cadbc;
        case 0x3cadc0u: goto label_3cadc0;
        case 0x3cadc4u: goto label_3cadc4;
        case 0x3cadc8u: goto label_3cadc8;
        case 0x3cadccu: goto label_3cadcc;
        case 0x3cadd0u: goto label_3cadd0;
        case 0x3cadd4u: goto label_3cadd4;
        case 0x3cadd8u: goto label_3cadd8;
        case 0x3caddcu: goto label_3caddc;
        case 0x3cade0u: goto label_3cade0;
        case 0x3cade4u: goto label_3cade4;
        case 0x3cade8u: goto label_3cade8;
        case 0x3cadecu: goto label_3cadec;
        case 0x3cadf0u: goto label_3cadf0;
        case 0x3cadf4u: goto label_3cadf4;
        case 0x3cadf8u: goto label_3cadf8;
        case 0x3cadfcu: goto label_3cadfc;
        case 0x3cae00u: goto label_3cae00;
        case 0x3cae04u: goto label_3cae04;
        case 0x3cae08u: goto label_3cae08;
        case 0x3cae0cu: goto label_3cae0c;
        case 0x3cae10u: goto label_3cae10;
        case 0x3cae14u: goto label_3cae14;
        case 0x3cae18u: goto label_3cae18;
        case 0x3cae1cu: goto label_3cae1c;
        case 0x3cae20u: goto label_3cae20;
        case 0x3cae24u: goto label_3cae24;
        case 0x3cae28u: goto label_3cae28;
        case 0x3cae2cu: goto label_3cae2c;
        case 0x3cae30u: goto label_3cae30;
        case 0x3cae34u: goto label_3cae34;
        case 0x3cae38u: goto label_3cae38;
        case 0x3cae3cu: goto label_3cae3c;
        case 0x3cae40u: goto label_3cae40;
        case 0x3cae44u: goto label_3cae44;
        case 0x3cae48u: goto label_3cae48;
        case 0x3cae4cu: goto label_3cae4c;
        case 0x3cae50u: goto label_3cae50;
        case 0x3cae54u: goto label_3cae54;
        case 0x3cae58u: goto label_3cae58;
        case 0x3cae5cu: goto label_3cae5c;
        case 0x3cae60u: goto label_3cae60;
        case 0x3cae64u: goto label_3cae64;
        case 0x3cae68u: goto label_3cae68;
        case 0x3cae6cu: goto label_3cae6c;
        case 0x3cae70u: goto label_3cae70;
        case 0x3cae74u: goto label_3cae74;
        case 0x3cae78u: goto label_3cae78;
        case 0x3cae7cu: goto label_3cae7c;
        case 0x3cae80u: goto label_3cae80;
        case 0x3cae84u: goto label_3cae84;
        case 0x3cae88u: goto label_3cae88;
        case 0x3cae8cu: goto label_3cae8c;
        case 0x3cae90u: goto label_3cae90;
        case 0x3cae94u: goto label_3cae94;
        case 0x3cae98u: goto label_3cae98;
        case 0x3cae9cu: goto label_3cae9c;
        case 0x3caea0u: goto label_3caea0;
        case 0x3caea4u: goto label_3caea4;
        case 0x3caea8u: goto label_3caea8;
        case 0x3caeacu: goto label_3caeac;
        case 0x3caeb0u: goto label_3caeb0;
        case 0x3caeb4u: goto label_3caeb4;
        case 0x3caeb8u: goto label_3caeb8;
        case 0x3caebcu: goto label_3caebc;
        case 0x3caec0u: goto label_3caec0;
        case 0x3caec4u: goto label_3caec4;
        case 0x3caec8u: goto label_3caec8;
        case 0x3caeccu: goto label_3caecc;
        case 0x3caed0u: goto label_3caed0;
        case 0x3caed4u: goto label_3caed4;
        case 0x3caed8u: goto label_3caed8;
        case 0x3caedcu: goto label_3caedc;
        case 0x3caee0u: goto label_3caee0;
        case 0x3caee4u: goto label_3caee4;
        case 0x3caee8u: goto label_3caee8;
        case 0x3caeecu: goto label_3caeec;
        case 0x3caef0u: goto label_3caef0;
        case 0x3caef4u: goto label_3caef4;
        case 0x3caef8u: goto label_3caef8;
        case 0x3caefcu: goto label_3caefc;
        case 0x3caf00u: goto label_3caf00;
        case 0x3caf04u: goto label_3caf04;
        case 0x3caf08u: goto label_3caf08;
        case 0x3caf0cu: goto label_3caf0c;
        case 0x3caf10u: goto label_3caf10;
        case 0x3caf14u: goto label_3caf14;
        case 0x3caf18u: goto label_3caf18;
        case 0x3caf1cu: goto label_3caf1c;
        case 0x3caf20u: goto label_3caf20;
        case 0x3caf24u: goto label_3caf24;
        case 0x3caf28u: goto label_3caf28;
        case 0x3caf2cu: goto label_3caf2c;
        case 0x3caf30u: goto label_3caf30;
        case 0x3caf34u: goto label_3caf34;
        case 0x3caf38u: goto label_3caf38;
        case 0x3caf3cu: goto label_3caf3c;
        case 0x3caf40u: goto label_3caf40;
        case 0x3caf44u: goto label_3caf44;
        case 0x3caf48u: goto label_3caf48;
        case 0x3caf4cu: goto label_3caf4c;
        case 0x3caf50u: goto label_3caf50;
        case 0x3caf54u: goto label_3caf54;
        case 0x3caf58u: goto label_3caf58;
        case 0x3caf5cu: goto label_3caf5c;
        case 0x3caf60u: goto label_3caf60;
        case 0x3caf64u: goto label_3caf64;
        case 0x3caf68u: goto label_3caf68;
        case 0x3caf6cu: goto label_3caf6c;
        case 0x3caf70u: goto label_3caf70;
        case 0x3caf74u: goto label_3caf74;
        case 0x3caf78u: goto label_3caf78;
        case 0x3caf7cu: goto label_3caf7c;
        case 0x3caf80u: goto label_3caf80;
        case 0x3caf84u: goto label_3caf84;
        case 0x3caf88u: goto label_3caf88;
        case 0x3caf8cu: goto label_3caf8c;
        case 0x3caf90u: goto label_3caf90;
        case 0x3caf94u: goto label_3caf94;
        case 0x3caf98u: goto label_3caf98;
        case 0x3caf9cu: goto label_3caf9c;
        case 0x3cafa0u: goto label_3cafa0;
        case 0x3cafa4u: goto label_3cafa4;
        case 0x3cafa8u: goto label_3cafa8;
        case 0x3cafacu: goto label_3cafac;
        case 0x3cafb0u: goto label_3cafb0;
        case 0x3cafb4u: goto label_3cafb4;
        case 0x3cafb8u: goto label_3cafb8;
        case 0x3cafbcu: goto label_3cafbc;
        case 0x3cafc0u: goto label_3cafc0;
        case 0x3cafc4u: goto label_3cafc4;
        case 0x3cafc8u: goto label_3cafc8;
        case 0x3cafccu: goto label_3cafcc;
        case 0x3cafd0u: goto label_3cafd0;
        case 0x3cafd4u: goto label_3cafd4;
        case 0x3cafd8u: goto label_3cafd8;
        case 0x3cafdcu: goto label_3cafdc;
        case 0x3cafe0u: goto label_3cafe0;
        case 0x3cafe4u: goto label_3cafe4;
        case 0x3cafe8u: goto label_3cafe8;
        case 0x3cafecu: goto label_3cafec;
        case 0x3caff0u: goto label_3caff0;
        case 0x3caff4u: goto label_3caff4;
        case 0x3caff8u: goto label_3caff8;
        case 0x3caffcu: goto label_3caffc;
        case 0x3cb000u: goto label_3cb000;
        case 0x3cb004u: goto label_3cb004;
        case 0x3cb008u: goto label_3cb008;
        case 0x3cb00cu: goto label_3cb00c;
        case 0x3cb010u: goto label_3cb010;
        case 0x3cb014u: goto label_3cb014;
        case 0x3cb018u: goto label_3cb018;
        case 0x3cb01cu: goto label_3cb01c;
        case 0x3cb020u: goto label_3cb020;
        case 0x3cb024u: goto label_3cb024;
        case 0x3cb028u: goto label_3cb028;
        case 0x3cb02cu: goto label_3cb02c;
        case 0x3cb030u: goto label_3cb030;
        case 0x3cb034u: goto label_3cb034;
        case 0x3cb038u: goto label_3cb038;
        case 0x3cb03cu: goto label_3cb03c;
        case 0x3cb040u: goto label_3cb040;
        case 0x3cb044u: goto label_3cb044;
        case 0x3cb048u: goto label_3cb048;
        case 0x3cb04cu: goto label_3cb04c;
        case 0x3cb050u: goto label_3cb050;
        case 0x3cb054u: goto label_3cb054;
        case 0x3cb058u: goto label_3cb058;
        case 0x3cb05cu: goto label_3cb05c;
        case 0x3cb060u: goto label_3cb060;
        case 0x3cb064u: goto label_3cb064;
        case 0x3cb068u: goto label_3cb068;
        case 0x3cb06cu: goto label_3cb06c;
        case 0x3cb070u: goto label_3cb070;
        case 0x3cb074u: goto label_3cb074;
        case 0x3cb078u: goto label_3cb078;
        case 0x3cb07cu: goto label_3cb07c;
        case 0x3cb080u: goto label_3cb080;
        case 0x3cb084u: goto label_3cb084;
        case 0x3cb088u: goto label_3cb088;
        case 0x3cb08cu: goto label_3cb08c;
        case 0x3cb090u: goto label_3cb090;
        case 0x3cb094u: goto label_3cb094;
        case 0x3cb098u: goto label_3cb098;
        case 0x3cb09cu: goto label_3cb09c;
        case 0x3cb0a0u: goto label_3cb0a0;
        case 0x3cb0a4u: goto label_3cb0a4;
        case 0x3cb0a8u: goto label_3cb0a8;
        case 0x3cb0acu: goto label_3cb0ac;
        case 0x3cb0b0u: goto label_3cb0b0;
        case 0x3cb0b4u: goto label_3cb0b4;
        case 0x3cb0b8u: goto label_3cb0b8;
        case 0x3cb0bcu: goto label_3cb0bc;
        case 0x3cb0c0u: goto label_3cb0c0;
        case 0x3cb0c4u: goto label_3cb0c4;
        case 0x3cb0c8u: goto label_3cb0c8;
        case 0x3cb0ccu: goto label_3cb0cc;
        case 0x3cb0d0u: goto label_3cb0d0;
        case 0x3cb0d4u: goto label_3cb0d4;
        case 0x3cb0d8u: goto label_3cb0d8;
        case 0x3cb0dcu: goto label_3cb0dc;
        case 0x3cb0e0u: goto label_3cb0e0;
        case 0x3cb0e4u: goto label_3cb0e4;
        case 0x3cb0e8u: goto label_3cb0e8;
        case 0x3cb0ecu: goto label_3cb0ec;
        case 0x3cb0f0u: goto label_3cb0f0;
        case 0x3cb0f4u: goto label_3cb0f4;
        case 0x3cb0f8u: goto label_3cb0f8;
        case 0x3cb0fcu: goto label_3cb0fc;
        case 0x3cb100u: goto label_3cb100;
        case 0x3cb104u: goto label_3cb104;
        case 0x3cb108u: goto label_3cb108;
        case 0x3cb10cu: goto label_3cb10c;
        case 0x3cb110u: goto label_3cb110;
        case 0x3cb114u: goto label_3cb114;
        case 0x3cb118u: goto label_3cb118;
        case 0x3cb11cu: goto label_3cb11c;
        case 0x3cb120u: goto label_3cb120;
        case 0x3cb124u: goto label_3cb124;
        case 0x3cb128u: goto label_3cb128;
        case 0x3cb12cu: goto label_3cb12c;
        case 0x3cb130u: goto label_3cb130;
        case 0x3cb134u: goto label_3cb134;
        case 0x3cb138u: goto label_3cb138;
        case 0x3cb13cu: goto label_3cb13c;
        case 0x3cb140u: goto label_3cb140;
        case 0x3cb144u: goto label_3cb144;
        case 0x3cb148u: goto label_3cb148;
        case 0x3cb14cu: goto label_3cb14c;
        case 0x3cb150u: goto label_3cb150;
        case 0x3cb154u: goto label_3cb154;
        case 0x3cb158u: goto label_3cb158;
        case 0x3cb15cu: goto label_3cb15c;
        default: break;
    }

    ctx->pc = 0x3ca520u;

label_3ca520:
    // 0x3ca520: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3ca520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3ca524:
    // 0x3ca524: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x3ca524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_3ca528:
    // 0x3ca528: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3ca528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3ca52c:
    // 0x3ca52c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ca52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ca530:
    // 0x3ca530: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ca530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3ca534:
    // 0x3ca534: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ca534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3ca538:
    // 0x3ca538: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ca538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3ca53c:
    // 0x3ca53c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ca53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ca540:
    // 0x3ca540: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ca540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ca544:
    // 0x3ca544: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ca544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3ca548:
    // 0x3ca548: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ca548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ca54c:
    // 0x3ca54c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ca54cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3ca550:
    // 0x3ca550: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3ca550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ca554:
    // 0x3ca554: 0x8ca30d74  lw          $v1, 0xD74($a1)
    ctx->pc = 0x3ca554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3444)));
label_3ca558:
    // 0x3ca558: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x3ca558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ca55c:
    // 0x3ca55c: 0x906202c5  lbu         $v0, 0x2C5($v1)
    ctx->pc = 0x3ca55cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 709)));
label_3ca560:
    // 0x3ca560: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x3ca560u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3ca564:
    // 0x3ca564: 0x247302a0  addiu       $s3, $v1, 0x2A0
    ctx->pc = 0x3ca564u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 672));
label_3ca568:
    // 0x3ca568: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x3ca568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_3ca56c:
    // 0x3ca56c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3ca56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3ca570:
    // 0x3ca570: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ca570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3ca574:
    // 0x3ca574: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3ca574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ca578:
    // 0x3ca578: 0xc04f278  jal         func_13C9E0
label_3ca57c:
    if (ctx->pc == 0x3CA57Cu) {
        ctx->pc = 0x3CA57Cu;
            // 0x3ca57c: 0x24540280  addiu       $s4, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->pc = 0x3CA580u;
        goto label_3ca580;
    }
    ctx->pc = 0x3CA578u;
    SET_GPR_U32(ctx, 31, 0x3CA580u);
    ctx->pc = 0x3CA57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA578u;
            // 0x3ca57c: 0x24540280  addiu       $s4, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA580u; }
        if (ctx->pc != 0x3CA580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA580u; }
        if (ctx->pc != 0x3CA580u) { return; }
    }
    ctx->pc = 0x3CA580u;
label_3ca580:
    // 0x3ca580: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3ca580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3ca584:
    // 0x3ca584: 0xc04ce80  jal         func_133A00
label_3ca588:
    if (ctx->pc == 0x3CA588u) {
        ctx->pc = 0x3CA588u;
            // 0x3ca588: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x3CA58Cu;
        goto label_3ca58c;
    }
    ctx->pc = 0x3CA584u;
    SET_GPR_U32(ctx, 31, 0x3CA58Cu);
    ctx->pc = 0x3CA588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA584u;
            // 0x3ca588: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA58Cu; }
        if (ctx->pc != 0x3CA58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA58Cu; }
        if (ctx->pc != 0x3CA58Cu) { return; }
    }
    ctx->pc = 0x3CA58Cu;
label_3ca58c:
    // 0x3ca58c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3ca58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3ca590:
    // 0x3ca590: 0xc04ccf4  jal         func_1333D0
label_3ca594:
    if (ctx->pc == 0x3CA594u) {
        ctx->pc = 0x3CA594u;
            // 0x3ca594: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA598u;
        goto label_3ca598;
    }
    ctx->pc = 0x3CA590u;
    SET_GPR_U32(ctx, 31, 0x3CA598u);
    ctx->pc = 0x3CA594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA590u;
            // 0x3ca594: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA598u; }
        if (ctx->pc != 0x3CA598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA598u; }
        if (ctx->pc != 0x3CA598u) { return; }
    }
    ctx->pc = 0x3CA598u;
label_3ca598:
    // 0x3ca598: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3ca598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3ca59c:
    // 0x3ca59c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3ca59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3ca5a0:
    // 0x3ca5a0: 0xc04cca0  jal         func_133280
label_3ca5a4:
    if (ctx->pc == 0x3CA5A4u) {
        ctx->pc = 0x3CA5A4u;
            // 0x3ca5a4: 0x262602c0  addiu       $a2, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->pc = 0x3CA5A8u;
        goto label_3ca5a8;
    }
    ctx->pc = 0x3CA5A0u;
    SET_GPR_U32(ctx, 31, 0x3CA5A8u);
    ctx->pc = 0x3CA5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA5A0u;
            // 0x3ca5a4: 0x262602c0  addiu       $a2, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA5A8u; }
        if (ctx->pc != 0x3CA5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA5A8u; }
        if (ctx->pc != 0x3CA5A8u) { return; }
    }
    ctx->pc = 0x3CA5A8u;
label_3ca5a8:
    // 0x3ca5a8: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x3ca5a8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_3ca5ac:
    // 0x3ca5ac: 0xc04cc2c  jal         func_1330B0
label_3ca5b0:
    if (ctx->pc == 0x3CA5B0u) {
        ctx->pc = 0x3CA5B0u;
            // 0x3ca5b0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3CA5B4u;
        goto label_3ca5b4;
    }
    ctx->pc = 0x3CA5ACu;
    SET_GPR_U32(ctx, 31, 0x3CA5B4u);
    ctx->pc = 0x3CA5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA5ACu;
            // 0x3ca5b0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA5B4u; }
        if (ctx->pc != 0x3CA5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA5B4u; }
        if (ctx->pc != 0x3CA5B4u) { return; }
    }
    ctx->pc = 0x3CA5B4u;
label_3ca5b4:
    // 0x3ca5b4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3ca5b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ca5b8:
    // 0x3ca5b8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3ca5bc:
    if (ctx->pc == 0x3CA5BCu) {
        ctx->pc = 0x3CA5BCu;
            // 0x3ca5bc: 0x92840001  lbu         $a0, 0x1($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
        ctx->pc = 0x3CA5C0u;
        goto label_3ca5c0;
    }
    ctx->pc = 0x3CA5B8u;
    {
        const bool branch_taken_0x3ca5b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ca5b8) {
            ctx->pc = 0x3CA5BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA5B8u;
            // 0x3ca5bc: 0x92840001  lbu         $a0, 0x1($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CA5D0u;
            goto label_3ca5d0;
        }
    }
    ctx->pc = 0x3CA5C0u;
label_3ca5c0:
    // 0x3ca5c0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3ca5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3ca5c4:
    // 0x3ca5c4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3ca5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3ca5c8:
    // 0x3ca5c8: 0x1000008a  b           . + 4 + (0x8A << 2)
label_3ca5cc:
    if (ctx->pc == 0x3CA5CCu) {
        ctx->pc = 0x3CA5CCu;
            // 0x3ca5cc: 0xac600120  sw          $zero, 0x120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 0));
        ctx->pc = 0x3CA5D0u;
        goto label_3ca5d0;
    }
    ctx->pc = 0x3CA5C8u;
    {
        const bool branch_taken_0x3ca5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA5C8u;
            // 0x3ca5cc: 0xac600120  sw          $zero, 0x120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca5c8) {
            ctx->pc = 0x3CA7F4u;
            goto label_3ca7f4;
        }
    }
    ctx->pc = 0x3CA5D0u;
label_3ca5d0:
    // 0x3ca5d0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3ca5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ca5d4:
    // 0x3ca5d4: 0x14830077  bne         $a0, $v1, . + 4 + (0x77 << 2)
label_3ca5d8:
    if (ctx->pc == 0x3CA5D8u) {
        ctx->pc = 0x3CA5DCu;
        goto label_3ca5dc;
    }
    ctx->pc = 0x3CA5D4u;
    {
        const bool branch_taken_0x3ca5d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ca5d4) {
            ctx->pc = 0x3CA7B4u;
            goto label_3ca7b4;
        }
    }
    ctx->pc = 0x3CA5DCu;
label_3ca5dc:
    // 0x3ca5dc: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x3ca5dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_3ca5e0:
    // 0x3ca5e0: 0x14600074  bnez        $v1, . + 4 + (0x74 << 2)
label_3ca5e4:
    if (ctx->pc == 0x3CA5E4u) {
        ctx->pc = 0x3CA5E8u;
        goto label_3ca5e8;
    }
    ctx->pc = 0x3CA5E0u;
    {
        const bool branch_taken_0x3ca5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca5e0) {
            ctx->pc = 0x3CA7B4u;
            goto label_3ca7b4;
        }
    }
    ctx->pc = 0x3CA5E8u;
label_3ca5e8:
    // 0x3ca5e8: 0xc0754b4  jal         func_1D52D0
label_3ca5ec:
    if (ctx->pc == 0x3CA5ECu) {
        ctx->pc = 0x3CA5ECu;
            // 0x3ca5ec: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->pc = 0x3CA5F0u;
        goto label_3ca5f0;
    }
    ctx->pc = 0x3CA5E8u;
    SET_GPR_U32(ctx, 31, 0x3CA5F0u);
    ctx->pc = 0x3CA5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA5E8u;
            // 0x3ca5ec: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA5F0u; }
        if (ctx->pc != 0x3CA5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA5F0u; }
        if (ctx->pc != 0x3CA5F0u) { return; }
    }
    ctx->pc = 0x3CA5F0u;
label_3ca5f0:
    // 0x3ca5f0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x3ca5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3ca5f4:
    // 0x3ca5f4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3ca5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3ca5f8:
    // 0x3ca5f8: 0x5060006b  beql        $v1, $zero, . + 4 + (0x6B << 2)
label_3ca5fc:
    if (ctx->pc == 0x3CA5FCu) {
        ctx->pc = 0x3CA5FCu;
            // 0x3ca5fc: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x3CA600u;
        goto label_3ca600;
    }
    ctx->pc = 0x3CA5F8u;
    {
        const bool branch_taken_0x3ca5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca5f8) {
            ctx->pc = 0x3CA5FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA5F8u;
            // 0x3ca5fc: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CA7A8u;
            goto label_3ca7a8;
        }
    }
    ctx->pc = 0x3CA600u;
label_3ca600:
    // 0x3ca600: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x3ca600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_3ca604:
    // 0x3ca604: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x3ca604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3ca608:
    // 0x3ca608: 0x10830066  beq         $a0, $v1, . + 4 + (0x66 << 2)
label_3ca60c:
    if (ctx->pc == 0x3CA60Cu) {
        ctx->pc = 0x3CA610u;
        goto label_3ca610;
    }
    ctx->pc = 0x3CA608u;
    {
        const bool branch_taken_0x3ca608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ca608) {
            ctx->pc = 0x3CA7A4u;
            goto label_3ca7a4;
        }
    }
    ctx->pc = 0x3CA610u;
label_3ca610:
    // 0x3ca610: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x3ca610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3ca614:
    // 0x3ca614: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
label_3ca618:
    if (ctx->pc == 0x3CA618u) {
        ctx->pc = 0x3CA61Cu;
        goto label_3ca61c;
    }
    ctx->pc = 0x3CA614u;
    {
        const bool branch_taken_0x3ca614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ca614) {
            ctx->pc = 0x3CA7A4u;
            goto label_3ca7a4;
        }
    }
    ctx->pc = 0x3CA61Cu;
label_3ca61c:
    // 0x3ca61c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x3ca61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3ca620:
    // 0x3ca620: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
label_3ca624:
    if (ctx->pc == 0x3CA624u) {
        ctx->pc = 0x3CA628u;
        goto label_3ca628;
    }
    ctx->pc = 0x3CA620u;
    {
        const bool branch_taken_0x3ca620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ca620) {
            ctx->pc = 0x3CA7A4u;
            goto label_3ca7a4;
        }
    }
    ctx->pc = 0x3CA628u;
label_3ca628:
    // 0x3ca628: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3ca628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3ca62c:
    // 0x3ca62c: 0x1083005d  beq         $a0, $v1, . + 4 + (0x5D << 2)
label_3ca630:
    if (ctx->pc == 0x3CA630u) {
        ctx->pc = 0x3CA634u;
        goto label_3ca634;
    }
    ctx->pc = 0x3CA62Cu;
    {
        const bool branch_taken_0x3ca62c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ca62c) {
            ctx->pc = 0x3CA7A4u;
            goto label_3ca7a4;
        }
    }
    ctx->pc = 0x3CA634u;
label_3ca634:
    // 0x3ca634: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x3ca634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3ca638:
    // 0x3ca638: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
label_3ca63c:
    if (ctx->pc == 0x3CA63Cu) {
        ctx->pc = 0x3CA640u;
        goto label_3ca640;
    }
    ctx->pc = 0x3CA638u;
    {
        const bool branch_taken_0x3ca638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ca638) {
            ctx->pc = 0x3CA7A4u;
            goto label_3ca7a4;
        }
    }
    ctx->pc = 0x3CA640u;
label_3ca640:
    // 0x3ca640: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3ca640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3ca644:
    // 0x3ca644: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
label_3ca648:
    if (ctx->pc == 0x3CA648u) {
        ctx->pc = 0x3CA64Cu;
        goto label_3ca64c;
    }
    ctx->pc = 0x3CA644u;
    {
        const bool branch_taken_0x3ca644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ca644) {
            ctx->pc = 0x3CA7A4u;
            goto label_3ca7a4;
        }
    }
    ctx->pc = 0x3CA64Cu;
label_3ca64c:
    // 0x3ca64c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3ca64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3ca650:
    // 0x3ca650: 0x10850054  beq         $a0, $a1, . + 4 + (0x54 << 2)
label_3ca654:
    if (ctx->pc == 0x3CA654u) {
        ctx->pc = 0x3CA658u;
        goto label_3ca658;
    }
    ctx->pc = 0x3CA650u;
    {
        const bool branch_taken_0x3ca650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x3ca650) {
            ctx->pc = 0x3CA7A4u;
            goto label_3ca7a4;
        }
    }
    ctx->pc = 0x3CA658u;
label_3ca658:
    // 0x3ca658: 0x5085000f  beql        $a0, $a1, . + 4 + (0xF << 2)
label_3ca65c:
    if (ctx->pc == 0x3CA65Cu) {
        ctx->pc = 0x3CA65Cu;
            // 0x3ca65c: 0x8e230e34  lw          $v1, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->pc = 0x3CA660u;
        goto label_3ca660;
    }
    ctx->pc = 0x3CA658u;
    {
        const bool branch_taken_0x3ca658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x3ca658) {
            ctx->pc = 0x3CA65Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA658u;
            // 0x3ca65c: 0x8e230e34  lw          $v1, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CA698u;
            goto label_3ca698;
        }
    }
    ctx->pc = 0x3CA660u;
label_3ca660:
    // 0x3ca660: 0xa6200c6a  sh          $zero, 0xC6A($s1)
    ctx->pc = 0x3ca660u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3178), (uint16_t)GPR_U32(ctx, 0));
label_3ca664:
    // 0x3ca664: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3ca664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ca668:
    // 0x3ca668: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3ca668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3ca66c:
    // 0x3ca66c: 0x320f809  jalr        $t9
label_3ca670:
    if (ctx->pc == 0x3CA670u) {
        ctx->pc = 0x3CA670u;
            // 0x3ca670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA674u;
        goto label_3ca674;
    }
    ctx->pc = 0x3CA66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CA674u);
        ctx->pc = 0x3CA670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA66Cu;
            // 0x3ca670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CA674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CA674u; }
            if (ctx->pc != 0x3CA674u) { return; }
        }
        }
    }
    ctx->pc = 0x3CA674u;
label_3ca674:
    // 0x3ca674: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ca674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ca678:
    // 0x3ca678: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3ca678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3ca67c:
    // 0x3ca67c: 0x8c630964  lw          $v1, 0x964($v1)
    ctx->pc = 0x3ca67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2404)));
label_3ca680:
    // 0x3ca680: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3ca680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3ca684:
    // 0x3ca684: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3ca688:
    if (ctx->pc == 0x3CA688u) {
        ctx->pc = 0x3CA68Cu;
        goto label_3ca68c;
    }
    ctx->pc = 0x3CA684u;
    {
        const bool branch_taken_0x3ca684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca684) {
            ctx->pc = 0x3CA694u;
            goto label_3ca694;
        }
    }
    ctx->pc = 0x3CA68Cu;
label_3ca68c:
    // 0x3ca68c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ca68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ca690:
    // 0x3ca690: 0xae230e0c  sw          $v1, 0xE0C($s1)
    ctx->pc = 0x3ca690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3596), GPR_U32(ctx, 3));
label_3ca694:
    // 0x3ca694: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x3ca694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_3ca698:
    // 0x3ca698: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x3ca698u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ca69c:
    // 0x3ca69c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3ca6a0:
    if (ctx->pc == 0x3CA6A0u) {
        ctx->pc = 0x3CA6A0u;
            // 0x3ca6a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA6A4u;
        goto label_3ca6a4;
    }
    ctx->pc = 0x3CA69Cu;
    {
        const bool branch_taken_0x3ca69c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3CA6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA69Cu;
            // 0x3ca6a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca69c) {
            ctx->pc = 0x3CA6B4u;
            goto label_3ca6b4;
        }
    }
    ctx->pc = 0x3CA6A4u;
label_3ca6a4:
    // 0x3ca6a4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3ca6a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3ca6a8:
    // 0x3ca6a8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3ca6ac:
    if (ctx->pc == 0x3CA6ACu) {
        ctx->pc = 0x3CA6B0u;
        goto label_3ca6b0;
    }
    ctx->pc = 0x3CA6A8u;
    {
        const bool branch_taken_0x3ca6a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca6a8) {
            ctx->pc = 0x3CA6B4u;
            goto label_3ca6b4;
        }
    }
    ctx->pc = 0x3CA6B0u;
label_3ca6b0:
    // 0x3ca6b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ca6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ca6b4:
    // 0x3ca6b4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3ca6b8:
    if (ctx->pc == 0x3CA6B8u) {
        ctx->pc = 0x3CA6BCu;
        goto label_3ca6bc;
    }
    ctx->pc = 0x3CA6B4u;
    {
        const bool branch_taken_0x3ca6b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca6b4) {
            ctx->pc = 0x3CA6D0u;
            goto label_3ca6d0;
        }
    }
    ctx->pc = 0x3CA6BCu;
label_3ca6bc:
    // 0x3ca6bc: 0xc075eb4  jal         func_1D7AD0
label_3ca6c0:
    if (ctx->pc == 0x3CA6C0u) {
        ctx->pc = 0x3CA6C0u;
            // 0x3ca6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA6C4u;
        goto label_3ca6c4;
    }
    ctx->pc = 0x3CA6BCu;
    SET_GPR_U32(ctx, 31, 0x3CA6C4u);
    ctx->pc = 0x3CA6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA6BCu;
            // 0x3ca6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA6C4u; }
        if (ctx->pc != 0x3CA6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA6C4u; }
        if (ctx->pc != 0x3CA6C4u) { return; }
    }
    ctx->pc = 0x3CA6C4u;
label_3ca6c4:
    // 0x3ca6c4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3ca6c8:
    if (ctx->pc == 0x3CA6C8u) {
        ctx->pc = 0x3CA6CCu;
        goto label_3ca6cc;
    }
    ctx->pc = 0x3CA6C4u;
    {
        const bool branch_taken_0x3ca6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca6c4) {
            ctx->pc = 0x3CA6D0u;
            goto label_3ca6d0;
        }
    }
    ctx->pc = 0x3CA6CCu;
label_3ca6cc:
    // 0x3ca6cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ca6ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ca6d0:
    // 0x3ca6d0: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_3ca6d4:
    if (ctx->pc == 0x3CA6D4u) {
        ctx->pc = 0x3CA6D4u;
            // 0x3ca6d4: 0x8e240e0c  lw          $a0, 0xE0C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3596)));
        ctx->pc = 0x3CA6D8u;
        goto label_3ca6d8;
    }
    ctx->pc = 0x3CA6D0u;
    {
        const bool branch_taken_0x3ca6d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca6d0) {
            ctx->pc = 0x3CA6D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA6D0u;
            // 0x3ca6d4: 0x8e240e0c  lw          $a0, 0xE0C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CA6ECu;
            goto label_3ca6ec;
        }
    }
    ctx->pc = 0x3CA6D8u;
label_3ca6d8:
    // 0x3ca6d8: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x3ca6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_3ca6dc:
    // 0x3ca6dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ca6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3ca6e0:
    // 0x3ca6e0: 0x5483000f  bnel        $a0, $v1, . + 4 + (0xF << 2)
label_3ca6e4:
    if (ctx->pc == 0x3CA6E4u) {
        ctx->pc = 0x3CA6E4u;
            // 0x3ca6e4: 0x8e230a74  lw          $v1, 0xA74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2676)));
        ctx->pc = 0x3CA6E8u;
        goto label_3ca6e8;
    }
    ctx->pc = 0x3CA6E0u;
    {
        const bool branch_taken_0x3ca6e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ca6e0) {
            ctx->pc = 0x3CA6E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA6E0u;
            // 0x3ca6e4: 0x8e230a74  lw          $v1, 0xA74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2676)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CA720u;
            goto label_3ca720;
        }
    }
    ctx->pc = 0x3CA6E8u;
label_3ca6e8:
    // 0x3ca6e8: 0x8e240e0c  lw          $a0, 0xE0C($s1)
    ctx->pc = 0x3ca6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3596)));
label_3ca6ec:
    // 0x3ca6ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ca6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ca6f0:
    // 0x3ca6f0: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_3ca6f4:
    if (ctx->pc == 0x3CA6F4u) {
        ctx->pc = 0x3CA6F8u;
        goto label_3ca6f8;
    }
    ctx->pc = 0x3CA6F0u;
    {
        const bool branch_taken_0x3ca6f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ca6f0) {
            ctx->pc = 0x3CA71Cu;
            goto label_3ca71c;
        }
    }
    ctx->pc = 0x3CA6F8u;
label_3ca6f8:
    // 0x3ca6f8: 0xc040180  jal         func_100600
label_3ca6fc:
    if (ctx->pc == 0x3CA6FCu) {
        ctx->pc = 0x3CA6FCu;
            // 0x3ca6fc: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x3CA700u;
        goto label_3ca700;
    }
    ctx->pc = 0x3CA6F8u;
    SET_GPR_U32(ctx, 31, 0x3CA700u);
    ctx->pc = 0x3CA6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA6F8u;
            // 0x3ca6fc: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA700u; }
        if (ctx->pc != 0x3CA700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA700u; }
        if (ctx->pc != 0x3CA700u) { return; }
    }
    ctx->pc = 0x3CA700u;
label_3ca700:
    // 0x3ca700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ca700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ca704:
    // 0x3ca704: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3ca708:
    if (ctx->pc == 0x3CA708u) {
        ctx->pc = 0x3CA70Cu;
        goto label_3ca70c;
    }
    ctx->pc = 0x3CA704u;
    {
        const bool branch_taken_0x3ca704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca704) {
            ctx->pc = 0x3CA71Cu;
            goto label_3ca71c;
        }
    }
    ctx->pc = 0x3CA70Cu;
label_3ca70c:
    // 0x3ca70c: 0x8e250d98  lw          $a1, 0xD98($s1)
    ctx->pc = 0x3ca70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_3ca710:
    // 0x3ca710: 0x8e260e0c  lw          $a2, 0xE0C($s1)
    ctx->pc = 0x3ca710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3596)));
label_3ca714:
    // 0x3ca714: 0xc0f3e5c  jal         func_3CF970
label_3ca718:
    if (ctx->pc == 0x3CA718u) {
        ctx->pc = 0x3CA718u;
            // 0x3ca718: 0x26270e0c  addiu       $a3, $s1, 0xE0C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 3596));
        ctx->pc = 0x3CA71Cu;
        goto label_3ca71c;
    }
    ctx->pc = 0x3CA714u;
    SET_GPR_U32(ctx, 31, 0x3CA71Cu);
    ctx->pc = 0x3CA718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA714u;
            // 0x3ca718: 0x26270e0c  addiu       $a3, $s1, 0xE0C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 3596));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CF970u;
    if (runtime->hasFunction(0x3CF970u)) {
        auto targetFn = runtime->lookupFunction(0x3CF970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA71Cu; }
        if (ctx->pc != 0x3CA71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CF970_0x3cf970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA71Cu; }
        if (ctx->pc != 0x3CA71Cu) { return; }
    }
    ctx->pc = 0x3CA71Cu;
label_3ca71c:
    // 0x3ca71c: 0x8e230a74  lw          $v1, 0xA74($s1)
    ctx->pc = 0x3ca71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2676)));
label_3ca720:
    // 0x3ca720: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_3ca724:
    if (ctx->pc == 0x3CA724u) {
        ctx->pc = 0x3CA724u;
            // 0x3ca724: 0x8e230e34  lw          $v1, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->pc = 0x3CA728u;
        goto label_3ca728;
    }
    ctx->pc = 0x3CA720u;
    {
        const bool branch_taken_0x3ca720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca720) {
            ctx->pc = 0x3CA724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA720u;
            // 0x3ca724: 0x8e230e34  lw          $v1, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CA738u;
            goto label_3ca738;
        }
    }
    ctx->pc = 0x3CA728u;
label_3ca728:
    // 0x3ca728: 0xc64000d8  lwc1        $f0, 0xD8($s2)
    ctx->pc = 0x3ca728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ca72c:
    // 0x3ca72c: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x3ca72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_3ca730:
    // 0x3ca730: 0xe6200e1c  swc1        $f0, 0xE1C($s1)
    ctx->pc = 0x3ca730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3612), bits); }
label_3ca734:
    // 0x3ca734: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x3ca734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_3ca738:
    // 0x3ca738: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x3ca738u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ca73c:
    // 0x3ca73c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3ca740:
    if (ctx->pc == 0x3CA740u) {
        ctx->pc = 0x3CA740u;
            // 0x3ca740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA744u;
        goto label_3ca744;
    }
    ctx->pc = 0x3CA73Cu;
    {
        const bool branch_taken_0x3ca73c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3CA740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA73Cu;
            // 0x3ca740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca73c) {
            ctx->pc = 0x3CA754u;
            goto label_3ca754;
        }
    }
    ctx->pc = 0x3CA744u;
label_3ca744:
    // 0x3ca744: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3ca744u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3ca748:
    // 0x3ca748: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3ca74c:
    if (ctx->pc == 0x3CA74Cu) {
        ctx->pc = 0x3CA750u;
        goto label_3ca750;
    }
    ctx->pc = 0x3CA748u;
    {
        const bool branch_taken_0x3ca748 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca748) {
            ctx->pc = 0x3CA754u;
            goto label_3ca754;
        }
    }
    ctx->pc = 0x3CA750u;
label_3ca750:
    // 0x3ca750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ca750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ca754:
    // 0x3ca754: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3ca758:
    if (ctx->pc == 0x3CA758u) {
        ctx->pc = 0x3CA75Cu;
        goto label_3ca75c;
    }
    ctx->pc = 0x3CA754u;
    {
        const bool branch_taken_0x3ca754 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca754) {
            ctx->pc = 0x3CA770u;
            goto label_3ca770;
        }
    }
    ctx->pc = 0x3CA75Cu;
label_3ca75c:
    // 0x3ca75c: 0xc075eb4  jal         func_1D7AD0
label_3ca760:
    if (ctx->pc == 0x3CA760u) {
        ctx->pc = 0x3CA760u;
            // 0x3ca760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA764u;
        goto label_3ca764;
    }
    ctx->pc = 0x3CA75Cu;
    SET_GPR_U32(ctx, 31, 0x3CA764u);
    ctx->pc = 0x3CA760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA75Cu;
            // 0x3ca760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA764u; }
        if (ctx->pc != 0x3CA764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA764u; }
        if (ctx->pc != 0x3CA764u) { return; }
    }
    ctx->pc = 0x3CA764u;
label_3ca764:
    // 0x3ca764: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3ca768:
    if (ctx->pc == 0x3CA768u) {
        ctx->pc = 0x3CA76Cu;
        goto label_3ca76c;
    }
    ctx->pc = 0x3CA764u;
    {
        const bool branch_taken_0x3ca764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca764) {
            ctx->pc = 0x3CA770u;
            goto label_3ca770;
        }
    }
    ctx->pc = 0x3CA76Cu;
label_3ca76c:
    // 0x3ca76c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ca76cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ca770:
    // 0x3ca770: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_3ca774:
    if (ctx->pc == 0x3CA774u) {
        ctx->pc = 0x3CA774u;
            // 0x3ca774: 0x8e240d70  lw          $a0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->pc = 0x3CA778u;
        goto label_3ca778;
    }
    ctx->pc = 0x3CA770u;
    {
        const bool branch_taken_0x3ca770 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca770) {
            ctx->pc = 0x3CA774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA770u;
            // 0x3ca774: 0x8e240d70  lw          $a0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CA78Cu;
            goto label_3ca78c;
        }
    }
    ctx->pc = 0x3CA778u;
label_3ca778:
    // 0x3ca778: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x3ca778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_3ca77c:
    // 0x3ca77c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ca77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3ca780:
    // 0x3ca780: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_3ca784:
    if (ctx->pc == 0x3CA784u) {
        ctx->pc = 0x3CA784u;
            // 0x3ca784: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x3CA788u;
        goto label_3ca788;
    }
    ctx->pc = 0x3CA780u;
    {
        const bool branch_taken_0x3ca780 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ca780) {
            ctx->pc = 0x3CA784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA780u;
            // 0x3ca784: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CA798u;
            goto label_3ca798;
        }
    }
    ctx->pc = 0x3CA788u;
label_3ca788:
    // 0x3ca788: 0x8e240d70  lw          $a0, 0xD70($s1)
    ctx->pc = 0x3ca788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_3ca78c:
    // 0x3ca78c: 0xc0bd99c  jal         func_2F6670
label_3ca790:
    if (ctx->pc == 0x3CA790u) {
        ctx->pc = 0x3CA794u;
        goto label_3ca794;
    }
    ctx->pc = 0x3CA78Cu;
    SET_GPR_U32(ctx, 31, 0x3CA794u);
    ctx->pc = 0x2F6670u;
    if (runtime->hasFunction(0x2F6670u)) {
        auto targetFn = runtime->lookupFunction(0x2F6670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA794u; }
        if (ctx->pc != 0x3CA794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6670_0x2f6670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA794u; }
        if (ctx->pc != 0x3CA794u) { return; }
    }
    ctx->pc = 0x3CA794u;
label_3ca794:
    // 0x3ca794: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3ca794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3ca798:
    // 0x3ca798: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3ca798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3ca79c:
    // 0x3ca79c: 0x10000015  b           . + 4 + (0x15 << 2)
label_3ca7a0:
    if (ctx->pc == 0x3CA7A0u) {
        ctx->pc = 0x3CA7A0u;
            // 0x3ca7a0: 0xac600120  sw          $zero, 0x120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 0));
        ctx->pc = 0x3CA7A4u;
        goto label_3ca7a4;
    }
    ctx->pc = 0x3CA79Cu;
    {
        const bool branch_taken_0x3ca79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA79Cu;
            // 0x3ca7a0: 0xac600120  sw          $zero, 0x120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca79c) {
            ctx->pc = 0x3CA7F4u;
            goto label_3ca7f4;
        }
    }
    ctx->pc = 0x3CA7A4u;
label_3ca7a4:
    // 0x3ca7a4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3ca7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3ca7a8:
    // 0x3ca7a8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3ca7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3ca7ac:
    // 0x3ca7ac: 0x10000011  b           . + 4 + (0x11 << 2)
label_3ca7b0:
    if (ctx->pc == 0x3CA7B0u) {
        ctx->pc = 0x3CA7B0u;
            // 0x3ca7b0: 0xac600120  sw          $zero, 0x120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 0));
        ctx->pc = 0x3CA7B4u;
        goto label_3ca7b4;
    }
    ctx->pc = 0x3CA7ACu;
    {
        const bool branch_taken_0x3ca7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA7ACu;
            // 0x3ca7b0: 0xac600120  sw          $zero, 0x120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca7ac) {
            ctx->pc = 0x3CA7F4u;
            goto label_3ca7f4;
        }
    }
    ctx->pc = 0x3CA7B4u;
label_3ca7b4:
    // 0x3ca7b4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ca7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3ca7b8:
    // 0x3ca7b8: 0x8e240da0  lw          $a0, 0xDA0($s1)
    ctx->pc = 0x3ca7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_3ca7bc:
    // 0x3ca7bc: 0x8c63f668  lw          $v1, -0x998($v1)
    ctx->pc = 0x3ca7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964840)));
label_3ca7c0:
    // 0x3ca7c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ca7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3ca7c4:
    // 0x3ca7c4: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_3ca7c8:
    if (ctx->pc == 0x3CA7C8u) {
        ctx->pc = 0x3CA7C8u;
            // 0x3ca7c8: 0x8e240db0  lw          $a0, 0xDB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
        ctx->pc = 0x3CA7CCu;
        goto label_3ca7cc;
    }
    ctx->pc = 0x3CA7C4u;
    {
        const bool branch_taken_0x3ca7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca7c4) {
            ctx->pc = 0x3CA7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA7C4u;
            // 0x3ca7c8: 0x8e240db0  lw          $a0, 0xDB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CA7DCu;
            goto label_3ca7dc;
        }
    }
    ctx->pc = 0x3CA7CCu;
label_3ca7cc:
    // 0x3ca7cc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3ca7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3ca7d0:
    // 0x3ca7d0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3ca7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3ca7d4:
    // 0x3ca7d4: 0xac600120  sw          $zero, 0x120($v1)
    ctx->pc = 0x3ca7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 0));
label_3ca7d8:
    // 0x3ca7d8: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x3ca7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_3ca7dc:
    // 0x3ca7dc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3ca7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3ca7e0:
    // 0x3ca7e0: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_3ca7e4:
    if (ctx->pc == 0x3CA7E4u) {
        ctx->pc = 0x3CA7E4u;
            // 0x3ca7e4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3CA7E8u;
        goto label_3ca7e8;
    }
    ctx->pc = 0x3CA7E0u;
    {
        const bool branch_taken_0x3ca7e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ca7e0) {
            ctx->pc = 0x3CA7E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA7E0u;
            // 0x3ca7e4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CA7F8u;
            goto label_3ca7f8;
        }
    }
    ctx->pc = 0x3CA7E8u;
label_3ca7e8:
    // 0x3ca7e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3ca7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3ca7ec:
    // 0x3ca7ec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3ca7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3ca7f0:
    // 0x3ca7f0: 0xac600120  sw          $zero, 0x120($v1)
    ctx->pc = 0x3ca7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 0));
label_3ca7f4:
    // 0x3ca7f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3ca7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3ca7f8:
    // 0x3ca7f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ca7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ca7fc:
    // 0x3ca7fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ca7fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ca800:
    // 0x3ca800: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ca800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ca804:
    // 0x3ca804: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ca804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ca808:
    // 0x3ca808: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ca808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ca80c:
    // 0x3ca80c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ca80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ca810:
    // 0x3ca810: 0x3e00008  jr          $ra
label_3ca814:
    if (ctx->pc == 0x3CA814u) {
        ctx->pc = 0x3CA814u;
            // 0x3ca814: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3CA818u;
        goto label_3ca818;
    }
    ctx->pc = 0x3CA810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA810u;
            // 0x3ca814: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CA818u;
label_3ca818:
    // 0x3ca818: 0x0  nop
    ctx->pc = 0x3ca818u;
    // NOP
label_3ca81c:
    // 0x3ca81c: 0x0  nop
    ctx->pc = 0x3ca81cu;
    // NOP
label_3ca820:
    // 0x3ca820: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3ca820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3ca824:
    // 0x3ca824: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ca824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ca828:
    // 0x3ca828: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ca828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ca82c:
    // 0x3ca82c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ca82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3ca830:
    // 0x3ca830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ca830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ca834:
    // 0x3ca834: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ca834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3ca838:
    // 0x3ca838: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x3ca838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_3ca83c:
    // 0x3ca83c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_3ca840:
    if (ctx->pc == 0x3CA840u) {
        ctx->pc = 0x3CA840u;
            // 0x3ca840: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA844u;
        goto label_3ca844;
    }
    ctx->pc = 0x3CA83Cu;
    {
        const bool branch_taken_0x3ca83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA83Cu;
            // 0x3ca840: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca83c) {
            ctx->pc = 0x3CA87Cu;
            goto label_3ca87c;
        }
    }
    ctx->pc = 0x3CA844u;
label_3ca844:
    // 0x3ca844: 0xc0754b4  jal         func_1D52D0
label_3ca848:
    if (ctx->pc == 0x3CA848u) {
        ctx->pc = 0x3CA848u;
            // 0x3ca848: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x3CA84Cu;
        goto label_3ca84c;
    }
    ctx->pc = 0x3CA844u;
    SET_GPR_U32(ctx, 31, 0x3CA84Cu);
    ctx->pc = 0x3CA848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA844u;
            // 0x3ca848: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA84Cu; }
        if (ctx->pc != 0x3CA84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA84Cu; }
        if (ctx->pc != 0x3CA84Cu) { return; }
    }
    ctx->pc = 0x3CA84Cu;
label_3ca84c:
    // 0x3ca84c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x3ca84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3ca850:
    // 0x3ca850: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3ca850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3ca854:
    // 0x3ca854: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_3ca858:
    if (ctx->pc == 0x3CA858u) {
        ctx->pc = 0x3CA858u;
            // 0x3ca858: 0x8e2300e0  lw          $v1, 0xE0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->pc = 0x3CA85Cu;
        goto label_3ca85c;
    }
    ctx->pc = 0x3CA854u;
    {
        const bool branch_taken_0x3ca854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca854) {
            ctx->pc = 0x3CA858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA854u;
            // 0x3ca858: 0x8e2300e0  lw          $v1, 0xE0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CA880u;
            goto label_3ca880;
        }
    }
    ctx->pc = 0x3CA85Cu;
label_3ca85c:
    // 0x3ca85c: 0x86030d98  lh          $v1, 0xD98($s0)
    ctx->pc = 0x3ca85cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 3480)));
label_3ca860:
    // 0x3ca860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ca860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3ca864:
    // 0x3ca864: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3ca864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3ca868:
    // 0x3ca868: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x3ca868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_3ca86c:
    // 0x3ca86c: 0x8c630120  lw          $v1, 0x120($v1)
    ctx->pc = 0x3ca86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_3ca870:
    // 0x3ca870: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_3ca874:
    if (ctx->pc == 0x3CA874u) {
        ctx->pc = 0x3CA878u;
        goto label_3ca878;
    }
    ctx->pc = 0x3CA870u;
    {
        const bool branch_taken_0x3ca870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca870) {
            ctx->pc = 0x3CA87Cu;
            goto label_3ca87c;
        }
    }
    ctx->pc = 0x3CA878u;
label_3ca878:
    // 0x3ca878: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x3ca878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_3ca87c:
    // 0x3ca87c: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x3ca87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_3ca880:
    // 0x3ca880: 0x5060007d  beql        $v1, $zero, . + 4 + (0x7D << 2)
label_3ca884:
    if (ctx->pc == 0x3CA884u) {
        ctx->pc = 0x3CA884u;
            // 0x3ca884: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3CA888u;
        goto label_3ca888;
    }
    ctx->pc = 0x3CA880u;
    {
        const bool branch_taken_0x3ca880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca880) {
            ctx->pc = 0x3CA884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA880u;
            // 0x3ca884: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CAA78u;
            goto label_3caa78;
        }
    }
    ctx->pc = 0x3CA888u;
label_3ca888:
    // 0x3ca888: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x3ca888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_3ca88c:
    // 0x3ca88c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x3ca88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3ca890:
    // 0x3ca890: 0x10830078  beq         $a0, $v1, . + 4 + (0x78 << 2)
label_3ca894:
    if (ctx->pc == 0x3CA894u) {
        ctx->pc = 0x3CA898u;
        goto label_3ca898;
    }
    ctx->pc = 0x3CA890u;
    {
        const bool branch_taken_0x3ca890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ca890) {
            ctx->pc = 0x3CAA74u;
            goto label_3caa74;
        }
    }
    ctx->pc = 0x3CA898u;
label_3ca898:
    // 0x3ca898: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3ca898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3ca89c:
    // 0x3ca89c: 0x10830075  beq         $a0, $v1, . + 4 + (0x75 << 2)
label_3ca8a0:
    if (ctx->pc == 0x3CA8A0u) {
        ctx->pc = 0x3CA8A4u;
        goto label_3ca8a4;
    }
    ctx->pc = 0x3CA89Cu;
    {
        const bool branch_taken_0x3ca89c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ca89c) {
            ctx->pc = 0x3CAA74u;
            goto label_3caa74;
        }
    }
    ctx->pc = 0x3CA8A4u;
label_3ca8a4:
    // 0x3ca8a4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3ca8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3ca8a8:
    // 0x3ca8a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ca8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3ca8ac:
    // 0x3ca8ac: 0x8c51e370  lw          $s1, -0x1C90($v0)
    ctx->pc = 0x3ca8acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_3ca8b0:
    // 0x3ca8b0: 0xc04f278  jal         func_13C9E0
label_3ca8b4:
    if (ctx->pc == 0x3CA8B4u) {
        ctx->pc = 0x3CA8B4u;
            // 0x3ca8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA8B8u;
        goto label_3ca8b8;
    }
    ctx->pc = 0x3CA8B0u;
    SET_GPR_U32(ctx, 31, 0x3CA8B8u);
    ctx->pc = 0x3CA8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA8B0u;
            // 0x3ca8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA8B8u; }
        if (ctx->pc != 0x3CA8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA8B8u; }
        if (ctx->pc != 0x3CA8B8u) { return; }
    }
    ctx->pc = 0x3CA8B8u;
label_3ca8b8:
    // 0x3ca8b8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3ca8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3ca8bc:
    // 0x3ca8bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ca8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca8c0:
    // 0x3ca8c0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3ca8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3ca8c4:
    // 0x3ca8c4: 0xc04cca0  jal         func_133280
label_3ca8c8:
    if (ctx->pc == 0x3CA8C8u) {
        ctx->pc = 0x3CA8C8u;
            // 0x3ca8c8: 0x24c68f50  addiu       $a2, $a2, -0x70B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938448));
        ctx->pc = 0x3CA8CCu;
        goto label_3ca8cc;
    }
    ctx->pc = 0x3CA8C4u;
    SET_GPR_U32(ctx, 31, 0x3CA8CCu);
    ctx->pc = 0x3CA8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA8C4u;
            // 0x3ca8c8: 0x24c68f50  addiu       $a2, $a2, -0x70B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA8CCu; }
        if (ctx->pc != 0x3CA8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA8CCu; }
        if (ctx->pc != 0x3CA8CCu) { return; }
    }
    ctx->pc = 0x3CA8CCu;
label_3ca8cc:
    // 0x3ca8cc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3ca8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3ca8d0:
    // 0x3ca8d0: 0xc04cc44  jal         func_133110
label_3ca8d4:
    if (ctx->pc == 0x3CA8D4u) {
        ctx->pc = 0x3CA8D4u;
            // 0x3ca8d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA8D8u;
        goto label_3ca8d8;
    }
    ctx->pc = 0x3CA8D0u;
    SET_GPR_U32(ctx, 31, 0x3CA8D8u);
    ctx->pc = 0x3CA8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA8D0u;
            // 0x3ca8d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA8D8u; }
        if (ctx->pc != 0x3CA8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA8D8u; }
        if (ctx->pc != 0x3CA8D8u) { return; }
    }
    ctx->pc = 0x3CA8D8u;
label_3ca8d8:
    // 0x3ca8d8: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3ca8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_3ca8dc:
    // 0x3ca8dc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3ca8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3ca8e0:
    // 0x3ca8e0: 0xc075378  jal         func_1D4DE0
label_3ca8e4:
    if (ctx->pc == 0x3CA8E4u) {
        ctx->pc = 0x3CA8E4u;
            // 0x3ca8e4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA8E8u;
        goto label_3ca8e8;
    }
    ctx->pc = 0x3CA8E0u;
    SET_GPR_U32(ctx, 31, 0x3CA8E8u);
    ctx->pc = 0x3CA8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA8E0u;
            // 0x3ca8e4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA8E8u; }
        if (ctx->pc != 0x3CA8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA8E8u; }
        if (ctx->pc != 0x3CA8E8u) { return; }
    }
    ctx->pc = 0x3CA8E8u;
label_3ca8e8:
    // 0x3ca8e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ca8e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ca8ec:
    // 0x3ca8ec: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x3ca8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
label_3ca8f0:
    // 0x3ca8f0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3ca8f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3ca8f4:
    // 0x3ca8f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3ca8f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3ca8f8:
    // 0x3ca8f8: 0xc0c753c  jal         func_31D4F0
label_3ca8fc:
    if (ctx->pc == 0x3CA8FCu) {
        ctx->pc = 0x3CA8FCu;
            // 0x3ca8fc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3CA900u;
        goto label_3ca900;
    }
    ctx->pc = 0x3CA8F8u;
    SET_GPR_U32(ctx, 31, 0x3CA900u);
    ctx->pc = 0x3CA8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA8F8u;
            // 0x3ca8fc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA900u; }
        if (ctx->pc != 0x3CA900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA900u; }
        if (ctx->pc != 0x3CA900u) { return; }
    }
    ctx->pc = 0x3CA900u;
label_3ca900:
    // 0x3ca900: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3ca900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3ca904:
    // 0x3ca904: 0x2604092c  addiu       $a0, $s0, 0x92C
    ctx->pc = 0x3ca904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
label_3ca908:
    // 0x3ca908: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3ca908u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3ca90c:
    // 0x3ca90c: 0xc0c753c  jal         func_31D4F0
label_3ca910:
    if (ctx->pc == 0x3CA910u) {
        ctx->pc = 0x3CA910u;
            // 0x3ca910: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3CA914u;
        goto label_3ca914;
    }
    ctx->pc = 0x3CA90Cu;
    SET_GPR_U32(ctx, 31, 0x3CA914u);
    ctx->pc = 0x3CA910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA90Cu;
            // 0x3ca910: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA914u; }
        if (ctx->pc != 0x3CA914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA914u; }
        if (ctx->pc != 0x3CA914u) { return; }
    }
    ctx->pc = 0x3CA914u;
label_3ca914:
    // 0x3ca914: 0x8e030e38  lw          $v1, 0xE38($s0)
    ctx->pc = 0x3ca914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3640)));
label_3ca918:
    // 0x3ca918: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3ca918u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ca91c:
    // 0x3ca91c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3ca920:
    if (ctx->pc == 0x3CA920u) {
        ctx->pc = 0x3CA920u;
            // 0x3ca920: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA924u;
        goto label_3ca924;
    }
    ctx->pc = 0x3CA91Cu;
    {
        const bool branch_taken_0x3ca91c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3CA920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA91Cu;
            // 0x3ca920: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca91c) {
            ctx->pc = 0x3CA934u;
            goto label_3ca934;
        }
    }
    ctx->pc = 0x3CA924u;
label_3ca924:
    // 0x3ca924: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3ca924u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3ca928:
    // 0x3ca928: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3ca92c:
    if (ctx->pc == 0x3CA92Cu) {
        ctx->pc = 0x3CA930u;
        goto label_3ca930;
    }
    ctx->pc = 0x3CA928u;
    {
        const bool branch_taken_0x3ca928 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca928) {
            ctx->pc = 0x3CA934u;
            goto label_3ca934;
        }
    }
    ctx->pc = 0x3CA930u;
label_3ca930:
    // 0x3ca930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ca930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca934:
    // 0x3ca934: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3ca938:
    if (ctx->pc == 0x3CA938u) {
        ctx->pc = 0x3CA93Cu;
        goto label_3ca93c;
    }
    ctx->pc = 0x3CA934u;
    {
        const bool branch_taken_0x3ca934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca934) {
            ctx->pc = 0x3CA950u;
            goto label_3ca950;
        }
    }
    ctx->pc = 0x3CA93Cu;
label_3ca93c:
    // 0x3ca93c: 0xc075eb4  jal         func_1D7AD0
label_3ca940:
    if (ctx->pc == 0x3CA940u) {
        ctx->pc = 0x3CA940u;
            // 0x3ca940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA944u;
        goto label_3ca944;
    }
    ctx->pc = 0x3CA93Cu;
    SET_GPR_U32(ctx, 31, 0x3CA944u);
    ctx->pc = 0x3CA940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA93Cu;
            // 0x3ca940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA944u; }
        if (ctx->pc != 0x3CA944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA944u; }
        if (ctx->pc != 0x3CA944u) { return; }
    }
    ctx->pc = 0x3CA944u;
label_3ca944:
    // 0x3ca944: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3ca948:
    if (ctx->pc == 0x3CA948u) {
        ctx->pc = 0x3CA94Cu;
        goto label_3ca94c;
    }
    ctx->pc = 0x3CA944u;
    {
        const bool branch_taken_0x3ca944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca944) {
            ctx->pc = 0x3CA950u;
            goto label_3ca950;
        }
    }
    ctx->pc = 0x3CA94Cu;
label_3ca94c:
    // 0x3ca94c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ca94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ca950:
    // 0x3ca950: 0x12200048  beqz        $s1, . + 4 + (0x48 << 2)
label_3ca954:
    if (ctx->pc == 0x3CA954u) {
        ctx->pc = 0x3CA958u;
        goto label_3ca958;
    }
    ctx->pc = 0x3CA950u;
    {
        const bool branch_taken_0x3ca950 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca950) {
            ctx->pc = 0x3CAA74u;
            goto label_3caa74;
        }
    }
    ctx->pc = 0x3CA958u;
label_3ca958:
    // 0x3ca958: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3ca958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3ca95c:
    // 0x3ca95c: 0x8e030d98  lw          $v1, 0xD98($s0)
    ctx->pc = 0x3ca95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3ca960:
    // 0x3ca960: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x3ca960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3ca964:
    // 0x3ca964: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ca964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3ca968:
    // 0x3ca968: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3ca968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3ca96c:
    // 0x3ca96c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ca96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ca970:
    // 0x3ca970: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ca970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ca974:
    // 0x3ca974: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ca974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ca978:
    // 0x3ca978: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3ca978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3ca97c:
    // 0x3ca97c: 0x320f809  jalr        $t9
label_3ca980:
    if (ctx->pc == 0x3CA980u) {
        ctx->pc = 0x3CA984u;
        goto label_3ca984;
    }
    ctx->pc = 0x3CA97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CA984u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CA984u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CA984u; }
            if (ctx->pc != 0x3CA984u) { return; }
        }
        }
    }
    ctx->pc = 0x3CA984u;
label_3ca984:
    // 0x3ca984: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3ca984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3ca988:
    // 0x3ca988: 0x8e040d98  lw          $a0, 0xD98($s0)
    ctx->pc = 0x3ca988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3ca98c:
    // 0x3ca98c: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x3ca98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3ca990:
    // 0x3ca990: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x3ca990u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3ca994:
    // 0x3ca994: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3ca994u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3ca998:
    // 0x3ca998: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3ca998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3ca99c:
    // 0x3ca99c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ca99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ca9a0:
    // 0x3ca9a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ca9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ca9a4:
    // 0x3ca9a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ca9a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ca9a8:
    // 0x3ca9a8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3ca9a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3ca9ac:
    // 0x3ca9ac: 0x320f809  jalr        $t9
label_3ca9b0:
    if (ctx->pc == 0x3CA9B0u) {
        ctx->pc = 0x3CA9B4u;
        goto label_3ca9b4;
    }
    ctx->pc = 0x3CA9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CA9B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CA9B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CA9B4u; }
            if (ctx->pc != 0x3CA9B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3CA9B4u;
label_3ca9b4:
    // 0x3ca9b4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_3ca9b8:
    if (ctx->pc == 0x3CA9B8u) {
        ctx->pc = 0x3CA9B8u;
            // 0x3ca9b8: 0x8c500018  lw          $s0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x3CA9BCu;
        goto label_3ca9bc;
    }
    ctx->pc = 0x3CA9B4u;
    {
        const bool branch_taken_0x3ca9b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA9B4u;
            // 0x3ca9b8: 0x8c500018  lw          $s0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca9b4) {
            ctx->pc = 0x3CAA14u;
            goto label_3caa14;
        }
    }
    ctx->pc = 0x3CA9BCu;
label_3ca9bc:
    // 0x3ca9bc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3ca9bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ca9c0:
    // 0x3ca9c0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3ca9c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3ca9c4:
    // 0x3ca9c4: 0x320f809  jalr        $t9
label_3ca9c8:
    if (ctx->pc == 0x3CA9C8u) {
        ctx->pc = 0x3CA9C8u;
            // 0x3ca9c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA9CCu;
        goto label_3ca9cc;
    }
    ctx->pc = 0x3CA9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CA9CCu);
        ctx->pc = 0x3CA9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA9C4u;
            // 0x3ca9c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CA9CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CA9CCu; }
            if (ctx->pc != 0x3CA9CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3CA9CCu;
label_3ca9cc:
    // 0x3ca9cc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3ca9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ca9d0:
    // 0x3ca9d0: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_3ca9d4:
    if (ctx->pc == 0x3CA9D4u) {
        ctx->pc = 0x3CA9D8u;
        goto label_3ca9d8;
    }
    ctx->pc = 0x3CA9D0u;
    {
        const bool branch_taken_0x3ca9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ca9d0) {
            ctx->pc = 0x3CAA14u;
            goto label_3caa14;
        }
    }
    ctx->pc = 0x3CA9D8u;
label_3ca9d8:
    // 0x3ca9d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3ca9d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ca9dc:
    // 0x3ca9dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ca9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca9e0:
    // 0x3ca9e0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3ca9e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3ca9e4:
    // 0x3ca9e4: 0x320f809  jalr        $t9
label_3ca9e8:
    if (ctx->pc == 0x3CA9E8u) {
        ctx->pc = 0x3CA9E8u;
            // 0x3ca9e8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3CA9ECu;
        goto label_3ca9ec;
    }
    ctx->pc = 0x3CA9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CA9ECu);
        ctx->pc = 0x3CA9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA9E4u;
            // 0x3ca9e8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CA9ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CA9ECu; }
            if (ctx->pc != 0x3CA9ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3CA9ECu;
label_3ca9ec:
    // 0x3ca9ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3ca9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_3ca9f0:
    // 0x3ca9f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ca9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ca9f4:
    // 0x3ca9f4: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x3ca9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_3ca9f8:
    // 0x3ca9f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ca9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca9fc:
    // 0x3ca9fc: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3ca9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_3caa00:
    // 0x3caa00: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x3caa00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_3caa04:
    // 0x3caa04: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3caa04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3caa08:
    // 0x3caa08: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x3caa08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_3caa0c:
    // 0x3caa0c: 0x320f809  jalr        $t9
label_3caa10:
    if (ctx->pc == 0x3CAA10u) {
        ctx->pc = 0x3CAA10u;
            // 0x3caa10: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3CAA14u;
        goto label_3caa14;
    }
    ctx->pc = 0x3CAA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CAA14u);
        ctx->pc = 0x3CAA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAA0Cu;
            // 0x3caa10: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CAA14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CAA14u; }
            if (ctx->pc != 0x3CAA14u) { return; }
        }
        }
    }
    ctx->pc = 0x3CAA14u;
label_3caa14:
    // 0x3caa14: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_3caa18:
    if (ctx->pc == 0x3CAA18u) {
        ctx->pc = 0x3CAA1Cu;
        goto label_3caa1c;
    }
    ctx->pc = 0x3CAA14u;
    {
        const bool branch_taken_0x3caa14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3caa14) {
            ctx->pc = 0x3CAA74u;
            goto label_3caa74;
        }
    }
    ctx->pc = 0x3CAA1Cu;
label_3caa1c:
    // 0x3caa1c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3caa1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3caa20:
    // 0x3caa20: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3caa20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3caa24:
    // 0x3caa24: 0x320f809  jalr        $t9
label_3caa28:
    if (ctx->pc == 0x3CAA28u) {
        ctx->pc = 0x3CAA28u;
            // 0x3caa28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CAA2Cu;
        goto label_3caa2c;
    }
    ctx->pc = 0x3CAA24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CAA2Cu);
        ctx->pc = 0x3CAA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAA24u;
            // 0x3caa28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CAA2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CAA2Cu; }
            if (ctx->pc != 0x3CAA2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3CAA2Cu;
label_3caa2c:
    // 0x3caa2c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3caa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3caa30:
    // 0x3caa30: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_3caa34:
    if (ctx->pc == 0x3CAA34u) {
        ctx->pc = 0x3CAA38u;
        goto label_3caa38;
    }
    ctx->pc = 0x3CAA30u;
    {
        const bool branch_taken_0x3caa30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3caa30) {
            ctx->pc = 0x3CAA74u;
            goto label_3caa74;
        }
    }
    ctx->pc = 0x3CAA38u;
label_3caa38:
    // 0x3caa38: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3caa38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3caa3c:
    // 0x3caa3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3caa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3caa40:
    // 0x3caa40: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3caa40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3caa44:
    // 0x3caa44: 0x320f809  jalr        $t9
label_3caa48:
    if (ctx->pc == 0x3CAA48u) {
        ctx->pc = 0x3CAA48u;
            // 0x3caa48: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3CAA4Cu;
        goto label_3caa4c;
    }
    ctx->pc = 0x3CAA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CAA4Cu);
        ctx->pc = 0x3CAA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAA44u;
            // 0x3caa48: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CAA4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CAA4Cu; }
            if (ctx->pc != 0x3CAA4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3CAA4Cu;
label_3caa4c:
    // 0x3caa4c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3caa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_3caa50:
    // 0x3caa50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3caa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3caa54:
    // 0x3caa54: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x3caa54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_3caa58:
    // 0x3caa58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3caa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3caa5c:
    // 0x3caa5c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3caa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_3caa60:
    // 0x3caa60: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x3caa60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_3caa64:
    // 0x3caa64: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3caa64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3caa68:
    // 0x3caa68: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x3caa68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_3caa6c:
    // 0x3caa6c: 0x320f809  jalr        $t9
label_3caa70:
    if (ctx->pc == 0x3CAA70u) {
        ctx->pc = 0x3CAA70u;
            // 0x3caa70: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3CAA74u;
        goto label_3caa74;
    }
    ctx->pc = 0x3CAA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CAA74u);
        ctx->pc = 0x3CAA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAA6Cu;
            // 0x3caa70: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CAA74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CAA74u; }
            if (ctx->pc != 0x3CAA74u) { return; }
        }
        }
    }
    ctx->pc = 0x3CAA74u;
label_3caa74:
    // 0x3caa74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3caa74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3caa78:
    // 0x3caa78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3caa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3caa7c:
    // 0x3caa7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3caa7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3caa80:
    // 0x3caa80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3caa80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3caa84:
    // 0x3caa84: 0x3e00008  jr          $ra
label_3caa88:
    if (ctx->pc == 0x3CAA88u) {
        ctx->pc = 0x3CAA88u;
            // 0x3caa88: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3CAA8Cu;
        goto label_3caa8c;
    }
    ctx->pc = 0x3CAA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CAA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAA84u;
            // 0x3caa88: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CAA8Cu;
label_3caa8c:
    // 0x3caa8c: 0x0  nop
    ctx->pc = 0x3caa8cu;
    // NOP
label_3caa90:
    // 0x3caa90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3caa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3caa94:
    // 0x3caa94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3caa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3caa98:
    // 0x3caa98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3caa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3caa9c:
    // 0x3caa9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3caa9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3caaa0:
    // 0x3caaa0: 0x8c840140  lw          $a0, 0x140($a0)
    ctx->pc = 0x3caaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
label_3caaa4:
    // 0x3caaa4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3caaa8:
    if (ctx->pc == 0x3CAAA8u) {
        ctx->pc = 0x3CAAA8u;
            // 0x3caaa8: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x3CAAACu;
        goto label_3caaac;
    }
    ctx->pc = 0x3CAAA4u;
    {
        const bool branch_taken_0x3caaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3caaa4) {
            ctx->pc = 0x3CAAA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAAA4u;
            // 0x3caaa8: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CAAC0u;
            goto label_3caac0;
        }
    }
    ctx->pc = 0x3CAAACu;
label_3caaac:
    // 0x3caaac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3caaacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3caab0:
    // 0x3caab0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3caab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3caab4:
    // 0x3caab4: 0x320f809  jalr        $t9
label_3caab8:
    if (ctx->pc == 0x3CAAB8u) {
        ctx->pc = 0x3CAAB8u;
            // 0x3caab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3CAABCu;
        goto label_3caabc;
    }
    ctx->pc = 0x3CAAB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CAABCu);
        ctx->pc = 0x3CAAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAAB4u;
            // 0x3caab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CAABCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CAABCu; }
            if (ctx->pc != 0x3CAABCu) { return; }
        }
        }
    }
    ctx->pc = 0x3CAABCu;
label_3caabc:
    // 0x3caabc: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3caabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3caac0:
    // 0x3caac0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3caac4:
    if (ctx->pc == 0x3CAAC4u) {
        ctx->pc = 0x3CAAC4u;
            // 0x3caac4: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3CAAC8u;
        goto label_3caac8;
    }
    ctx->pc = 0x3CAAC0u;
    {
        const bool branch_taken_0x3caac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3caac0) {
            ctx->pc = 0x3CAAC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAAC0u;
            // 0x3caac4: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CAADCu;
            goto label_3caadc;
        }
    }
    ctx->pc = 0x3CAAC8u;
label_3caac8:
    // 0x3caac8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3caac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3caacc:
    // 0x3caacc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3caaccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3caad0:
    // 0x3caad0: 0x320f809  jalr        $t9
label_3caad4:
    if (ctx->pc == 0x3CAAD4u) {
        ctx->pc = 0x3CAAD4u;
            // 0x3caad4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3CAAD8u;
        goto label_3caad8;
    }
    ctx->pc = 0x3CAAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CAAD8u);
        ctx->pc = 0x3CAAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAAD0u;
            // 0x3caad4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CAAD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CAAD8u; }
            if (ctx->pc != 0x3CAAD8u) { return; }
        }
        }
    }
    ctx->pc = 0x3CAAD8u;
label_3caad8:
    // 0x3caad8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3caad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_3caadc:
    // 0x3caadc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3caadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3caae0:
    // 0x3caae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3caae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3caae4:
    // 0x3caae4: 0x3e00008  jr          $ra
label_3caae8:
    if (ctx->pc == 0x3CAAE8u) {
        ctx->pc = 0x3CAAE8u;
            // 0x3caae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3CAAECu;
        goto label_3caaec;
    }
    ctx->pc = 0x3CAAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CAAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAAE4u;
            // 0x3caae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CAAECu;
label_3caaec:
    // 0x3caaec: 0x0  nop
    ctx->pc = 0x3caaecu;
    // NOP
label_3caaf0:
    // 0x3caaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3caaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3caaf4:
    // 0x3caaf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3caaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3caaf8:
    // 0x3caaf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3caaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3caafc:
    // 0x3caafc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3caafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cab00:
    // 0x3cab00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cab00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cab04:
    // 0x3cab04: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_3cab08:
    if (ctx->pc == 0x3CAB08u) {
        ctx->pc = 0x3CAB08u;
            // 0x3cab08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CAB0Cu;
        goto label_3cab0c;
    }
    ctx->pc = 0x3CAB04u;
    {
        const bool branch_taken_0x3cab04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAB04u;
            // 0x3cab08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cab04) {
            ctx->pc = 0x3CAB68u;
            goto label_3cab68;
        }
    }
    ctx->pc = 0x3CAB0Cu;
label_3cab0c:
    // 0x3cab0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3cab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3cab10:
    // 0x3cab10: 0x24429040  addiu       $v0, $v0, -0x6FC0
    ctx->pc = 0x3cab10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938688));
label_3cab14:
    // 0x3cab14: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_3cab18:
    if (ctx->pc == 0x3CAB18u) {
        ctx->pc = 0x3CAB18u;
            // 0x3cab18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3CAB1Cu;
        goto label_3cab1c;
    }
    ctx->pc = 0x3CAB14u;
    {
        const bool branch_taken_0x3cab14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAB14u;
            // 0x3cab18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cab14) {
            ctx->pc = 0x3CAB50u;
            goto label_3cab50;
        }
    }
    ctx->pc = 0x3CAB1Cu;
label_3cab1c:
    // 0x3cab1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3cab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3cab20:
    // 0x3cab20: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x3cab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_3cab24:
    // 0x3cab24: 0xc0d37dc  jal         func_34DF70
label_3cab28:
    if (ctx->pc == 0x3CAB28u) {
        ctx->pc = 0x3CAB28u;
            // 0x3cab28: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3CAB2Cu;
        goto label_3cab2c;
    }
    ctx->pc = 0x3CAB24u;
    SET_GPR_U32(ctx, 31, 0x3CAB2Cu);
    ctx->pc = 0x3CAB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAB24u;
            // 0x3cab28: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAB2Cu; }
        if (ctx->pc != 0x3CAB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAB2Cu; }
        if (ctx->pc != 0x3CAB2Cu) { return; }
    }
    ctx->pc = 0x3CAB2Cu;
label_3cab2c:
    // 0x3cab2c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_3cab30:
    if (ctx->pc == 0x3CAB30u) {
        ctx->pc = 0x3CAB30u;
            // 0x3cab30: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x3CAB34u;
        goto label_3cab34;
    }
    ctx->pc = 0x3CAB2Cu;
    {
        const bool branch_taken_0x3cab2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cab2c) {
            ctx->pc = 0x3CAB30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAB2Cu;
            // 0x3cab30: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CAB54u;
            goto label_3cab54;
        }
    }
    ctx->pc = 0x3CAB34u;
label_3cab34:
    // 0x3cab34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3cab34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3cab38:
    // 0x3cab38: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x3cab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_3cab3c:
    // 0x3cab3c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_3cab40:
    if (ctx->pc == 0x3CAB40u) {
        ctx->pc = 0x3CAB40u;
            // 0x3cab40: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3CAB44u;
        goto label_3cab44;
    }
    ctx->pc = 0x3CAB3Cu;
    {
        const bool branch_taken_0x3cab3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAB3Cu;
            // 0x3cab40: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cab3c) {
            ctx->pc = 0x3CAB50u;
            goto label_3cab50;
        }
    }
    ctx->pc = 0x3CAB44u;
label_3cab44:
    // 0x3cab44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3cab44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3cab48:
    // 0x3cab48: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3cab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3cab4c:
    // 0x3cab4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3cab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3cab50:
    // 0x3cab50: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3cab50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3cab54:
    // 0x3cab54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cab54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3cab58:
    // 0x3cab58: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3cab5c:
    if (ctx->pc == 0x3CAB5Cu) {
        ctx->pc = 0x3CAB5Cu;
            // 0x3cab5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CAB60u;
        goto label_3cab60;
    }
    ctx->pc = 0x3CAB58u;
    {
        const bool branch_taken_0x3cab58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3cab58) {
            ctx->pc = 0x3CAB5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAB58u;
            // 0x3cab5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CAB6Cu;
            goto label_3cab6c;
        }
    }
    ctx->pc = 0x3CAB60u;
label_3cab60:
    // 0x3cab60: 0xc0400a8  jal         func_1002A0
label_3cab64:
    if (ctx->pc == 0x3CAB64u) {
        ctx->pc = 0x3CAB64u;
            // 0x3cab64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CAB68u;
        goto label_3cab68;
    }
    ctx->pc = 0x3CAB60u;
    SET_GPR_U32(ctx, 31, 0x3CAB68u);
    ctx->pc = 0x3CAB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAB60u;
            // 0x3cab64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAB68u; }
        if (ctx->pc != 0x3CAB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAB68u; }
        if (ctx->pc != 0x3CAB68u) { return; }
    }
    ctx->pc = 0x3CAB68u;
label_3cab68:
    // 0x3cab68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3cab68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cab6c:
    // 0x3cab6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cab6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3cab70:
    // 0x3cab70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cab70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cab74:
    // 0x3cab74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cab74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cab78:
    // 0x3cab78: 0x3e00008  jr          $ra
label_3cab7c:
    if (ctx->pc == 0x3CAB7Cu) {
        ctx->pc = 0x3CAB7Cu;
            // 0x3cab7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3CAB80u;
        goto label_3cab80;
    }
    ctx->pc = 0x3CAB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CAB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAB78u;
            // 0x3cab7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CAB80u;
label_3cab80:
    // 0x3cab80: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x3cab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_3cab84:
    // 0x3cab84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3cab88:
    // 0x3cab88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cab88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cab8c:
    // 0x3cab8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3cab8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3cab90:
    // 0x3cab90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cab90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3cab94:
    // 0x3cab94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3cab94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cab98:
    // 0x3cab98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cab98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cab9c:
    // 0x3cab9c: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x3cab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3caba0:
    // 0x3caba0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3caba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3caba4:
    // 0x3caba4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3caba8:
    if (ctx->pc == 0x3CABA8u) {
        ctx->pc = 0x3CABA8u;
            // 0x3caba8: 0xe48100d4  swc1        $f1, 0xD4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
        ctx->pc = 0x3CABACu;
        goto label_3cabac;
    }
    ctx->pc = 0x3CABA4u;
    {
        const bool branch_taken_0x3caba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CABA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CABA4u;
            // 0x3caba8: 0xe48100d4  swc1        $f1, 0xD4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caba4) {
            ctx->pc = 0x3CABB4u;
            goto label_3cabb4;
        }
    }
    ctx->pc = 0x3CABACu;
label_3cabac:
    // 0x3cabac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3cabacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3cabb0:
    // 0x3cabb0: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x3cabb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
label_3cabb4:
    // 0x3cabb4: 0xc0892d0  jal         func_224B40
label_3cabb8:
    if (ctx->pc == 0x3CABB8u) {
        ctx->pc = 0x3CABB8u;
            // 0x3cabb8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x3CABBCu;
        goto label_3cabbc;
    }
    ctx->pc = 0x3CABB4u;
    SET_GPR_U32(ctx, 31, 0x3CABBCu);
    ctx->pc = 0x3CABB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CABB4u;
            // 0x3cabb8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CABBCu; }
        if (ctx->pc != 0x3CABBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CABBCu; }
        if (ctx->pc != 0x3CABBCu) { return; }
    }
    ctx->pc = 0x3CABBCu;
label_3cabbc:
    // 0x3cabbc: 0xc64100d4  lwc1        $f1, 0xD4($s2)
    ctx->pc = 0x3cabbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cabc0:
    // 0x3cabc0: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x3cabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_3cabc4:
    // 0x3cabc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cabc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cabc8:
    // 0x3cabc8: 0x3c034090  lui         $v1, 0x4090
    ctx->pc = 0x3cabc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16528 << 16));
label_3cabcc:
    // 0x3cabcc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3cabccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_3cabd0:
    // 0x3cabd0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3cabd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cabd4:
    // 0x3cabd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3cabd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3cabd8:
    // 0x3cabd8: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x3cabd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3cabdc:
    // 0x3cabdc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3cabdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3cabe0:
    // 0x3cabe0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3cabe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3cabe4:
    // 0x3cabe4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3cabe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3cabe8:
    // 0x3cabe8: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x3cabe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_3cabec:
    // 0x3cabec: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x3cabecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3cabf0:
    // 0x3cabf0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3cabf0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cabf4:
    // 0x3cabf4: 0x0  nop
    ctx->pc = 0x3cabf4u;
    // NOP
label_3cabf8:
    // 0x3cabf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3cabf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3cabfc:
    // 0x3cabfc: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x3cabfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_3cac00:
    // 0x3cac00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cac00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cac04:
    // 0x3cac04: 0x0  nop
    ctx->pc = 0x3cac04u;
    // NOP
label_3cac08:
    // 0x3cac08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3cac08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3cac0c:
    // 0x3cac0c: 0xc0a7a88  jal         func_29EA20
label_3cac10:
    if (ctx->pc == 0x3CAC10u) {
        ctx->pc = 0x3CAC10u;
            // 0x3cac10: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->pc = 0x3CAC14u;
        goto label_3cac14;
    }
    ctx->pc = 0x3CAC0Cu;
    SET_GPR_U32(ctx, 31, 0x3CAC14u);
    ctx->pc = 0x3CAC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAC0Cu;
            // 0x3cac10: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAC14u; }
        if (ctx->pc != 0x3CAC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAC14u; }
        if (ctx->pc != 0x3CAC14u) { return; }
    }
    ctx->pc = 0x3CAC14u;
label_3cac14:
    // 0x3cac14: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3cac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cac18:
    // 0x3cac18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cac18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cac1c:
    // 0x3cac1c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_3cac20:
    if (ctx->pc == 0x3CAC20u) {
        ctx->pc = 0x3CAC20u;
            // 0x3cac20: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3CAC24u;
        goto label_3cac24;
    }
    ctx->pc = 0x3CAC1Cu;
    {
        const bool branch_taken_0x3cac1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAC1Cu;
            // 0x3cac20: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cac1c) {
            ctx->pc = 0x3CAC3Cu;
            goto label_3cac3c;
        }
    }
    ctx->pc = 0x3CAC24u;
label_3cac24:
    // 0x3cac24: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3cac24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3cac28:
    // 0x3cac28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cac28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cac2c:
    // 0x3cac2c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3cac2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3cac30:
    // 0x3cac30: 0xc0804bc  jal         func_2012F0
label_3cac34:
    if (ctx->pc == 0x3CAC34u) {
        ctx->pc = 0x3CAC34u;
            // 0x3cac34: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x3CAC38u;
        goto label_3cac38;
    }
    ctx->pc = 0x3CAC30u;
    SET_GPR_U32(ctx, 31, 0x3CAC38u);
    ctx->pc = 0x3CAC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAC30u;
            // 0x3cac34: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAC38u; }
        if (ctx->pc != 0x3CAC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAC38u; }
        if (ctx->pc != 0x3CAC38u) { return; }
    }
    ctx->pc = 0x3CAC38u;
label_3cac38:
    // 0x3cac38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cac38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cac3c:
    // 0x3cac3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3cac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3cac40:
    // 0x3cac40: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x3cac40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_3cac44:
    // 0x3cac44: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x3cac44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_3cac48:
    // 0x3cac48: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3cac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3cac4c:
    // 0x3cac4c: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x3cac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
label_3cac50:
    // 0x3cac50: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x3cac50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_3cac54:
    // 0x3cac54: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x3cac54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_3cac58:
    // 0x3cac58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3cac58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cac5c:
    // 0x3cac5c: 0xc64000d4  lwc1        $f0, 0xD4($s2)
    ctx->pc = 0x3cac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cac60:
    // 0x3cac60: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x3cac60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3cac64:
    // 0x3cac64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3cac64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cac68:
    // 0x3cac68: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x3cac68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_3cac6c:
    // 0x3cac6c: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x3cac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
label_3cac70:
    // 0x3cac70: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x3cac70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_3cac74:
    // 0x3cac74: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x3cac74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_3cac78:
    // 0x3cac78: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x3cac78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_3cac7c:
    // 0x3cac7c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x3cac7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3cac80:
    // 0x3cac80: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x3cac80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_3cac84:
    // 0x3cac84: 0xc0a3830  jal         func_28E0C0
label_3cac88:
    if (ctx->pc == 0x3CAC88u) {
        ctx->pc = 0x3CAC88u;
            // 0x3cac88: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->pc = 0x3CAC8Cu;
        goto label_3cac8c;
    }
    ctx->pc = 0x3CAC84u;
    SET_GPR_U32(ctx, 31, 0x3CAC8Cu);
    ctx->pc = 0x3CAC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAC84u;
            // 0x3cac88: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAC8Cu; }
        if (ctx->pc != 0x3CAC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAC8Cu; }
        if (ctx->pc != 0x3CAC8Cu) { return; }
    }
    ctx->pc = 0x3CAC8Cu;
label_3cac8c:
    // 0x3cac8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3cac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3cac90:
    // 0x3cac90: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x3cac90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_3cac94:
    // 0x3cac94: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3cac94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3cac98:
    // 0x3cac98: 0xc0a7a88  jal         func_29EA20
label_3cac9c:
    if (ctx->pc == 0x3CAC9Cu) {
        ctx->pc = 0x3CAC9Cu;
            // 0x3cac9c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3CACA0u;
        goto label_3caca0;
    }
    ctx->pc = 0x3CAC98u;
    SET_GPR_U32(ctx, 31, 0x3CACA0u);
    ctx->pc = 0x3CAC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAC98u;
            // 0x3cac9c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CACA0u; }
        if (ctx->pc != 0x3CACA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CACA0u; }
        if (ctx->pc != 0x3CACA0u) { return; }
    }
    ctx->pc = 0x3CACA0u;
label_3caca0:
    // 0x3caca0: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x3caca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_3caca4:
    // 0x3caca4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3caca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3caca8:
    // 0x3caca8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3cacac:
    if (ctx->pc == 0x3CACACu) {
        ctx->pc = 0x3CACACu;
            // 0x3cacac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3CACB0u;
        goto label_3cacb0;
    }
    ctx->pc = 0x3CACA8u;
    {
        const bool branch_taken_0x3caca8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CACACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CACA8u;
            // 0x3cacac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caca8) {
            ctx->pc = 0x3CACC4u;
            goto label_3cacc4;
        }
    }
    ctx->pc = 0x3CACB0u;
label_3cacb0:
    // 0x3cacb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cacb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cacb4:
    // 0x3cacb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cacb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cacb8:
    // 0x3cacb8: 0xc082940  jal         func_20A500
label_3cacbc:
    if (ctx->pc == 0x3CACBCu) {
        ctx->pc = 0x3CACBCu;
            // 0x3cacbc: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3CACC0u;
        goto label_3cacc0;
    }
    ctx->pc = 0x3CACB8u;
    SET_GPR_U32(ctx, 31, 0x3CACC0u);
    ctx->pc = 0x3CACBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CACB8u;
            // 0x3cacbc: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CACC0u; }
        if (ctx->pc != 0x3CACC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CACC0u; }
        if (ctx->pc != 0x3CACC0u) { return; }
    }
    ctx->pc = 0x3CACC0u;
label_3cacc0:
    // 0x3cacc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cacc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cacc4:
    // 0x3cacc4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x3cacc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_3cacc8:
    // 0x3cacc8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3caccc:
    if (ctx->pc == 0x3CACCCu) {
        ctx->pc = 0x3CACCCu;
            // 0x3caccc: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->pc = 0x3CACD0u;
        goto label_3cacd0;
    }
    ctx->pc = 0x3CACC8u;
    {
        const bool branch_taken_0x3cacc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cacc8) {
            ctx->pc = 0x3CACCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CACC8u;
            // 0x3caccc: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CAD0Cu;
            goto label_3cad0c;
        }
    }
    ctx->pc = 0x3CACD0u;
label_3cacd0:
    // 0x3cacd0: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x3cacd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_3cacd4:
    // 0x3cacd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3cacd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3cacd8:
    // 0x3cacd8: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x3cacd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_3cacdc:
    // 0x3cacdc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3cacdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3cace0:
    // 0x3cace0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cace0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3cace4:
    // 0x3cace4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3cace8:
    if (ctx->pc == 0x3CACE8u) {
        ctx->pc = 0x3CACECu;
        goto label_3cacec;
    }
    ctx->pc = 0x3CACE4u;
    {
        const bool branch_taken_0x3cace4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cace4) {
            ctx->pc = 0x3CAD08u;
            goto label_3cad08;
        }
    }
    ctx->pc = 0x3CACECu;
label_3cacec:
    // 0x3cacec: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_3cacf0:
    if (ctx->pc == 0x3CACF0u) {
        ctx->pc = 0x3CACF4u;
        goto label_3cacf4;
    }
    ctx->pc = 0x3CACECu;
    {
        const bool branch_taken_0x3cacec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cacec) {
            ctx->pc = 0x3CAD08u;
            goto label_3cad08;
        }
    }
    ctx->pc = 0x3CACF4u;
label_3cacf4:
    // 0x3cacf4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3cacf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cacf8:
    // 0x3cacf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cacf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cacfc:
    // 0x3cacfc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3cacfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3cad00:
    // 0x3cad00: 0x320f809  jalr        $t9
label_3cad04:
    if (ctx->pc == 0x3CAD04u) {
        ctx->pc = 0x3CAD04u;
            // 0x3cad04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3CAD08u;
        goto label_3cad08;
    }
    ctx->pc = 0x3CAD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CAD08u);
        ctx->pc = 0x3CAD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAD00u;
            // 0x3cad04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CAD08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CAD08u; }
            if (ctx->pc != 0x3CAD08u) { return; }
        }
        }
    }
    ctx->pc = 0x3CAD08u;
label_3cad08:
    // 0x3cad08: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3cad08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3cad0c:
    // 0x3cad0c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3cad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_3cad10:
    // 0x3cad10: 0xc64200d4  lwc1        $f2, 0xD4($s2)
    ctx->pc = 0x3cad10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cad14:
    // 0x3cad14: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3cad14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cad18:
    // 0x3cad18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3cad18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cad1c:
    // 0x3cad1c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3cad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3cad20:
    // 0x3cad20: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3cad20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_3cad24:
    // 0x3cad24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cad24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cad28:
    // 0x3cad28: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x3cad28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_3cad2c:
    // 0x3cad2c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3cad2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3cad30:
    // 0x3cad30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3cad30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3cad34:
    // 0x3cad34: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3cad34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3cad38:
    // 0x3cad38: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3cad38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3cad3c:
    // 0x3cad3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cad3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cad40:
    // 0x3cad40: 0x0  nop
    ctx->pc = 0x3cad40u;
    // NOP
label_3cad44:
    // 0x3cad44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3cad44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3cad48:
    // 0x3cad48: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3cad48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3cad4c:
    // 0x3cad4c: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x3cad4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3cad50:
    // 0x3cad50: 0xc0a7a88  jal         func_29EA20
label_3cad54:
    if (ctx->pc == 0x3CAD54u) {
        ctx->pc = 0x3CAD54u;
            // 0x3cad54: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x3CAD58u;
        goto label_3cad58;
    }
    ctx->pc = 0x3CAD50u;
    SET_GPR_U32(ctx, 31, 0x3CAD58u);
    ctx->pc = 0x3CAD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAD50u;
            // 0x3cad54: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAD58u; }
        if (ctx->pc != 0x3CAD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAD58u; }
        if (ctx->pc != 0x3CAD58u) { return; }
    }
    ctx->pc = 0x3CAD58u;
label_3cad58:
    // 0x3cad58: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3cad58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cad5c:
    // 0x3cad5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cad5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cad60:
    // 0x3cad60: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_3cad64:
    if (ctx->pc == 0x3CAD64u) {
        ctx->pc = 0x3CAD64u;
            // 0x3cad64: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3CAD68u;
        goto label_3cad68;
    }
    ctx->pc = 0x3CAD60u;
    {
        const bool branch_taken_0x3cad60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAD60u;
            // 0x3cad64: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cad60) {
            ctx->pc = 0x3CAD80u;
            goto label_3cad80;
        }
    }
    ctx->pc = 0x3CAD68u;
label_3cad68:
    // 0x3cad68: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3cad68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3cad6c:
    // 0x3cad6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cad6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cad70:
    // 0x3cad70: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3cad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3cad74:
    // 0x3cad74: 0xc0804bc  jal         func_2012F0
label_3cad78:
    if (ctx->pc == 0x3CAD78u) {
        ctx->pc = 0x3CAD78u;
            // 0x3cad78: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3CAD7Cu;
        goto label_3cad7c;
    }
    ctx->pc = 0x3CAD74u;
    SET_GPR_U32(ctx, 31, 0x3CAD7Cu);
    ctx->pc = 0x3CAD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAD74u;
            // 0x3cad78: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAD7Cu; }
        if (ctx->pc != 0x3CAD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAD7Cu; }
        if (ctx->pc != 0x3CAD7Cu) { return; }
    }
    ctx->pc = 0x3CAD7Cu;
label_3cad7c:
    // 0x3cad7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cad7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cad80:
    // 0x3cad80: 0xc040180  jal         func_100600
label_3cad84:
    if (ctx->pc == 0x3CAD84u) {
        ctx->pc = 0x3CAD84u;
            // 0x3cad84: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3CAD88u;
        goto label_3cad88;
    }
    ctx->pc = 0x3CAD80u;
    SET_GPR_U32(ctx, 31, 0x3CAD88u);
    ctx->pc = 0x3CAD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAD80u;
            // 0x3cad84: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAD88u; }
        if (ctx->pc != 0x3CAD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAD88u; }
        if (ctx->pc != 0x3CAD88u) { return; }
    }
    ctx->pc = 0x3CAD88u;
label_3cad88:
    // 0x3cad88: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3cad8c:
    if (ctx->pc == 0x3CAD8Cu) {
        ctx->pc = 0x3CAD8Cu;
            // 0x3cad8c: 0xae420140  sw          $v0, 0x140($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
        ctx->pc = 0x3CAD90u;
        goto label_3cad90;
    }
    ctx->pc = 0x3CAD88u;
    {
        const bool branch_taken_0x3cad88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cad88) {
            ctx->pc = 0x3CAD8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAD88u;
            // 0x3cad8c: 0xae420140  sw          $v0, 0x140($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CADCCu;
            goto label_3cadcc;
        }
    }
    ctx->pc = 0x3CAD90u;
label_3cad90:
    // 0x3cad90: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3cad90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3cad94:
    // 0x3cad94: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3cad94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3cad98:
    // 0x3cad98: 0x2484cfe0  addiu       $a0, $a0, -0x3020
    ctx->pc = 0x3cad98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954976));
label_3cad9c:
    // 0x3cad9c: 0x246324a0  addiu       $v1, $v1, 0x24A0
    ctx->pc = 0x3cad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9376));
label_3cada0:
    // 0x3cada0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3cada0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3cada4:
    // 0x3cada4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3cada4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3cada8:
    // 0x3cada8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3cada8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3cadac:
    // 0x3cadac: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x3cadacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_3cadb0:
    // 0x3cadb0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3cadb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3cadb4:
    // 0x3cadb4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3cadb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3cadb8:
    // 0x3cadb8: 0x24639040  addiu       $v1, $v1, -0x6FC0
    ctx->pc = 0x3cadb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938688));
label_3cadbc:
    // 0x3cadbc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3cadbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3cadc0:
    // 0x3cadc0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3cadc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3cadc4:
    // 0x3cadc4: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x3cadc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_3cadc8:
    // 0x3cadc8: 0xae420140  sw          $v0, 0x140($s2)
    ctx->pc = 0x3cadc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
label_3cadcc:
    // 0x3cadcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3cadccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cadd0:
    // 0x3cadd0: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3cadd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3cadd4:
    // 0x3cadd4: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x3cadd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_3cadd8:
    // 0x3cadd8: 0xc0d37ec  jal         func_34DFB0
label_3caddc:
    if (ctx->pc == 0x3CADDCu) {
        ctx->pc = 0x3CADDCu;
            // 0x3caddc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CADE0u;
        goto label_3cade0;
    }
    ctx->pc = 0x3CADD8u;
    SET_GPR_U32(ctx, 31, 0x3CADE0u);
    ctx->pc = 0x3CADDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CADD8u;
            // 0x3caddc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CADE0u; }
        if (ctx->pc != 0x3CADE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CADE0u; }
        if (ctx->pc != 0x3CADE0u) { return; }
    }
    ctx->pc = 0x3CADE0u;
label_3cade0:
    // 0x3cade0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x3cade0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_3cade4:
    // 0x3cade4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3cade8:
    if (ctx->pc == 0x3CADE8u) {
        ctx->pc = 0x3CADE8u;
            // 0x3cade8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3CADECu;
        goto label_3cadec;
    }
    ctx->pc = 0x3CADE4u;
    {
        const bool branch_taken_0x3cade4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cade4) {
            ctx->pc = 0x3CADE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CADE4u;
            // 0x3cade8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CAE28u;
            goto label_3cae28;
        }
    }
    ctx->pc = 0x3CADECu;
label_3cadec:
    // 0x3cadec: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x3cadecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_3cadf0:
    // 0x3cadf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3cadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3cadf4:
    // 0x3cadf4: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x3cadf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_3cadf8:
    // 0x3cadf8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3cadf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3cadfc:
    // 0x3cadfc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cadfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3cae00:
    // 0x3cae00: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3cae04:
    if (ctx->pc == 0x3CAE04u) {
        ctx->pc = 0x3CAE08u;
        goto label_3cae08;
    }
    ctx->pc = 0x3CAE00u;
    {
        const bool branch_taken_0x3cae00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cae00) {
            ctx->pc = 0x3CAE24u;
            goto label_3cae24;
        }
    }
    ctx->pc = 0x3CAE08u;
label_3cae08:
    // 0x3cae08: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_3cae0c:
    if (ctx->pc == 0x3CAE0Cu) {
        ctx->pc = 0x3CAE10u;
        goto label_3cae10;
    }
    ctx->pc = 0x3CAE08u;
    {
        const bool branch_taken_0x3cae08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cae08) {
            ctx->pc = 0x3CAE24u;
            goto label_3cae24;
        }
    }
    ctx->pc = 0x3CAE10u;
label_3cae10:
    // 0x3cae10: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3cae10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cae14:
    // 0x3cae14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cae14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cae18:
    // 0x3cae18: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3cae18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3cae1c:
    // 0x3cae1c: 0x320f809  jalr        $t9
label_3cae20:
    if (ctx->pc == 0x3CAE20u) {
        ctx->pc = 0x3CAE20u;
            // 0x3cae20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3CAE24u;
        goto label_3cae24;
    }
    ctx->pc = 0x3CAE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CAE24u);
        ctx->pc = 0x3CAE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAE1Cu;
            // 0x3cae20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CAE24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CAE24u; }
            if (ctx->pc != 0x3CAE24u) { return; }
        }
        }
    }
    ctx->pc = 0x3CAE24u;
label_3cae24:
    // 0x3cae24: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3cae24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3cae28:
    // 0x3cae28: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cae28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cae2c:
    // 0x3cae2c: 0xc0b6e68  jal         func_2DB9A0
label_3cae30:
    if (ctx->pc == 0x3CAE30u) {
        ctx->pc = 0x3CAE30u;
            // 0x3cae30: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x3CAE34u;
        goto label_3cae34;
    }
    ctx->pc = 0x3CAE2Cu;
    SET_GPR_U32(ctx, 31, 0x3CAE34u);
    ctx->pc = 0x3CAE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAE2Cu;
            // 0x3cae30: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAE34u; }
        if (ctx->pc != 0x3CAE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAE34u; }
        if (ctx->pc != 0x3CAE34u) { return; }
    }
    ctx->pc = 0x3CAE34u;
label_3cae34:
    // 0x3cae34: 0xc0b6dac  jal         func_2DB6B0
label_3cae38:
    if (ctx->pc == 0x3CAE38u) {
        ctx->pc = 0x3CAE38u;
            // 0x3cae38: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3CAE3Cu;
        goto label_3cae3c;
    }
    ctx->pc = 0x3CAE34u;
    SET_GPR_U32(ctx, 31, 0x3CAE3Cu);
    ctx->pc = 0x3CAE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAE34u;
            // 0x3cae38: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAE3Cu; }
        if (ctx->pc != 0x3CAE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAE3Cu; }
        if (ctx->pc != 0x3CAE3Cu) { return; }
    }
    ctx->pc = 0x3CAE3Cu;
label_3cae3c:
    // 0x3cae3c: 0xc0cac94  jal         func_32B250
label_3cae40:
    if (ctx->pc == 0x3CAE40u) {
        ctx->pc = 0x3CAE40u;
            // 0x3cae40: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3CAE44u;
        goto label_3cae44;
    }
    ctx->pc = 0x3CAE3Cu;
    SET_GPR_U32(ctx, 31, 0x3CAE44u);
    ctx->pc = 0x3CAE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAE3Cu;
            // 0x3cae40: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAE44u; }
        if (ctx->pc != 0x3CAE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAE44u; }
        if (ctx->pc != 0x3CAE44u) { return; }
    }
    ctx->pc = 0x3CAE44u;
label_3cae44:
    // 0x3cae44: 0xc0cac84  jal         func_32B210
label_3cae48:
    if (ctx->pc == 0x3CAE48u) {
        ctx->pc = 0x3CAE48u;
            // 0x3cae48: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3CAE4Cu;
        goto label_3cae4c;
    }
    ctx->pc = 0x3CAE44u;
    SET_GPR_U32(ctx, 31, 0x3CAE4Cu);
    ctx->pc = 0x3CAE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAE44u;
            // 0x3cae48: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAE4Cu; }
        if (ctx->pc != 0x3CAE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAE4Cu; }
        if (ctx->pc != 0x3CAE4Cu) { return; }
    }
    ctx->pc = 0x3CAE4Cu;
label_3cae4c:
    // 0x3cae4c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3cae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3cae50:
    // 0x3cae50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3cae50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3cae54:
    // 0x3cae54: 0xc44dc910  lwc1        $f13, -0x36F0($v0)
    ctx->pc = 0x3cae54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3cae58:
    // 0x3cae58: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3cae58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cae5c:
    // 0x3cae5c: 0xc0a562c  jal         func_2958B0
label_3cae60:
    if (ctx->pc == 0x3CAE60u) {
        ctx->pc = 0x3CAE60u;
            // 0x3cae60: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3CAE64u;
        goto label_3cae64;
    }
    ctx->pc = 0x3CAE5Cu;
    SET_GPR_U32(ctx, 31, 0x3CAE64u);
    ctx->pc = 0x3CAE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAE5Cu;
            // 0x3cae60: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAE64u; }
        if (ctx->pc != 0x3CAE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAE64u; }
        if (ctx->pc != 0x3CAE64u) { return; }
    }
    ctx->pc = 0x3CAE64u;
label_3cae64:
    // 0x3cae64: 0xafb10134  sw          $s1, 0x134($sp)
    ctx->pc = 0x3cae64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 17));
label_3cae68:
    // 0x3cae68: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3cae68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_3cae6c:
    // 0x3cae6c: 0xc6460018  lwc1        $f6, 0x18($s2)
    ctx->pc = 0x3cae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3cae70:
    // 0x3cae70: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x3cae70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3cae74:
    // 0x3cae74: 0xc6450014  lwc1        $f5, 0x14($s2)
    ctx->pc = 0x3cae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cae78:
    // 0x3cae78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3cae78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3cae7c:
    // 0x3cae7c: 0xc6440010  lwc1        $f4, 0x10($s2)
    ctx->pc = 0x3cae7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cae80:
    // 0x3cae80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3cae80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cae84:
    // 0x3cae84: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x3cae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cae88:
    // 0x3cae88: 0x3c0842c8  lui         $t0, 0x42C8
    ctx->pc = 0x3cae88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17096 << 16));
label_3cae8c:
    // 0x3cae8c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x3cae8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cae90:
    // 0x3cae90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3cae90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cae94:
    // 0x3cae94: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x3cae94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cae98:
    // 0x3cae98: 0xafa401dc  sw          $a0, 0x1DC($sp)
    ctx->pc = 0x3cae98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 4));
label_3cae9c:
    // 0x3cae9c: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x3cae9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_3caea0:
    // 0x3caea0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3caea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3caea4:
    // 0x3caea4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x3caea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3caea8:
    // 0x3caea8: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x3caea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3caeac:
    // 0x3caeac: 0xe7a20184  swc1        $f2, 0x184($sp)
    ctx->pc = 0x3caeacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_3caeb0:
    // 0x3caeb0: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3caeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_3caeb4:
    // 0x3caeb4: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x3caeb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_3caeb8:
    // 0x3caeb8: 0xafa801d8  sw          $t0, 0x1D8($sp)
    ctx->pc = 0x3caeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 8));
label_3caebc:
    // 0x3caebc: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x3caebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_3caec0:
    // 0x3caec0: 0xa3a301e2  sb          $v1, 0x1E2($sp)
    ctx->pc = 0x3caec0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 482), (uint8_t)GPR_U32(ctx, 3));
label_3caec4:
    // 0x3caec4: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x3caec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3caec8:
    // 0x3caec8: 0xa3a701e0  sb          $a3, 0x1E0($sp)
    ctx->pc = 0x3caec8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 7));
label_3caecc:
    // 0x3caecc: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x3caeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3caed0:
    // 0x3caed0: 0xafa70130  sw          $a3, 0x130($sp)
    ctx->pc = 0x3caed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
label_3caed4:
    // 0x3caed4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x3caed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3caed8:
    // 0x3caed8: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x3caed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
label_3caedc:
    // 0x3caedc: 0xe7a20190  swc1        $f2, 0x190($sp)
    ctx->pc = 0x3caedcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_3caee0:
    // 0x3caee0: 0xe7a10194  swc1        $f1, 0x194($sp)
    ctx->pc = 0x3caee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_3caee4:
    // 0x3caee4: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x3caee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_3caee8:
    // 0x3caee8: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x3caee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3caeec:
    // 0x3caeec: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x3caeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3caef0:
    // 0x3caef0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3caef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3caef4:
    // 0x3caef4: 0xe7a2019c  swc1        $f2, 0x19C($sp)
    ctx->pc = 0x3caef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_3caef8:
    // 0x3caef8: 0xe7a101a0  swc1        $f1, 0x1A0($sp)
    ctx->pc = 0x3caef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_3caefc:
    // 0x3caefc: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x3caefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_3caf00:
    // 0x3caf00: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x3caf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3caf04:
    // 0x3caf04: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x3caf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3caf08:
    // 0x3caf08: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x3caf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3caf0c:
    // 0x3caf0c: 0xe7a201a8  swc1        $f2, 0x1A8($sp)
    ctx->pc = 0x3caf0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_3caf10:
    // 0x3caf10: 0xe7a101ac  swc1        $f1, 0x1AC($sp)
    ctx->pc = 0x3caf10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_3caf14:
    // 0x3caf14: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x3caf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_3caf18:
    // 0x3caf18: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x3caf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3caf1c:
    // 0x3caf1c: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x3caf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3caf20:
    // 0x3caf20: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x3caf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3caf24:
    // 0x3caf24: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x3caf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3caf28:
    // 0x3caf28: 0xe7a40140  swc1        $f4, 0x140($sp)
    ctx->pc = 0x3caf28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3caf2c:
    // 0x3caf2c: 0xe7a50144  swc1        $f5, 0x144($sp)
    ctx->pc = 0x3caf2cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_3caf30:
    // 0x3caf30: 0xe7a60148  swc1        $f6, 0x148($sp)
    ctx->pc = 0x3caf30u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3caf34:
    // 0x3caf34: 0xe7a30180  swc1        $f3, 0x180($sp)
    ctx->pc = 0x3caf34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_3caf38:
    // 0x3caf38: 0xe7a201b4  swc1        $f2, 0x1B4($sp)
    ctx->pc = 0x3caf38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_3caf3c:
    // 0x3caf3c: 0xe7a101b8  swc1        $f1, 0x1B8($sp)
    ctx->pc = 0x3caf3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_3caf40:
    // 0x3caf40: 0xc0a7a88  jal         func_29EA20
label_3caf44:
    if (ctx->pc == 0x3CAF44u) {
        ctx->pc = 0x3CAF44u;
            // 0x3caf44: 0xe7a001c0  swc1        $f0, 0x1C0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
        ctx->pc = 0x3CAF48u;
        goto label_3caf48;
    }
    ctx->pc = 0x3CAF40u;
    SET_GPR_U32(ctx, 31, 0x3CAF48u);
    ctx->pc = 0x3CAF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAF40u;
            // 0x3caf44: 0xe7a001c0  swc1        $f0, 0x1C0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAF48u; }
        if (ctx->pc != 0x3CAF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAF48u; }
        if (ctx->pc != 0x3CAF48u) { return; }
    }
    ctx->pc = 0x3CAF48u;
label_3caf48:
    // 0x3caf48: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3caf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3caf4c:
    // 0x3caf4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3caf4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3caf50:
    // 0x3caf50: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3caf54:
    if (ctx->pc == 0x3CAF54u) {
        ctx->pc = 0x3CAF54u;
            // 0x3caf54: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3CAF58u;
        goto label_3caf58;
    }
    ctx->pc = 0x3CAF50u;
    {
        const bool branch_taken_0x3caf50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAF50u;
            // 0x3caf54: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caf50) {
            ctx->pc = 0x3CAFA0u;
            goto label_3cafa0;
        }
    }
    ctx->pc = 0x3CAF58u;
label_3caf58:
    // 0x3caf58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3caf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3caf5c:
    // 0x3caf5c: 0xc088ef4  jal         func_223BD0
label_3caf60:
    if (ctx->pc == 0x3CAF60u) {
        ctx->pc = 0x3CAF60u;
            // 0x3caf60: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x3CAF64u;
        goto label_3caf64;
    }
    ctx->pc = 0x3CAF5Cu;
    SET_GPR_U32(ctx, 31, 0x3CAF64u);
    ctx->pc = 0x3CAF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAF5Cu;
            // 0x3caf60: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAF64u; }
        if (ctx->pc != 0x3CAF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAF64u; }
        if (ctx->pc != 0x3CAF64u) { return; }
    }
    ctx->pc = 0x3CAF64u;
label_3caf64:
    // 0x3caf64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3caf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3caf68:
    // 0x3caf68: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3caf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3caf6c:
    // 0x3caf6c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3caf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_3caf70:
    // 0x3caf70: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x3caf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_3caf74:
    // 0x3caf74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3caf74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3caf78:
    // 0x3caf78: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x3caf78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_3caf7c:
    // 0x3caf7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3caf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3caf80:
    // 0x3caf80: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3caf80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3caf84:
    // 0x3caf84: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x3caf84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_3caf88:
    // 0x3caf88: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x3caf88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_3caf8c:
    // 0x3caf8c: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x3caf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_3caf90:
    // 0x3caf90: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3caf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3caf94:
    // 0x3caf94: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x3caf94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3caf98:
    // 0x3caf98: 0xc088b38  jal         func_222CE0
label_3caf9c:
    if (ctx->pc == 0x3CAF9Cu) {
        ctx->pc = 0x3CAF9Cu;
            // 0x3caf9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CAFA0u;
        goto label_3cafa0;
    }
    ctx->pc = 0x3CAF98u;
    SET_GPR_U32(ctx, 31, 0x3CAFA0u);
    ctx->pc = 0x3CAF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAF98u;
            // 0x3caf9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAFA0u; }
        if (ctx->pc != 0x3CAFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CAFA0u; }
        if (ctx->pc != 0x3CAFA0u) { return; }
    }
    ctx->pc = 0x3CAFA0u;
label_3cafa0:
    // 0x3cafa0: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x3cafa0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_3cafa4:
    // 0x3cafa4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3cafa8:
    if (ctx->pc == 0x3CAFA8u) {
        ctx->pc = 0x3CAFACu;
        goto label_3cafac;
    }
    ctx->pc = 0x3CAFA4u;
    {
        const bool branch_taken_0x3cafa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cafa4) {
            ctx->pc = 0x3CAFE4u;
            goto label_3cafe4;
        }
    }
    ctx->pc = 0x3CAFACu;
label_3cafac:
    // 0x3cafac: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x3cafacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_3cafb0:
    // 0x3cafb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3cafb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3cafb4:
    // 0x3cafb4: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x3cafb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_3cafb8:
    // 0x3cafb8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3cafb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3cafbc:
    // 0x3cafbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cafbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3cafc0:
    // 0x3cafc0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3cafc4:
    if (ctx->pc == 0x3CAFC4u) {
        ctx->pc = 0x3CAFC8u;
        goto label_3cafc8;
    }
    ctx->pc = 0x3CAFC0u;
    {
        const bool branch_taken_0x3cafc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cafc0) {
            ctx->pc = 0x3CAFE4u;
            goto label_3cafe4;
        }
    }
    ctx->pc = 0x3CAFC8u;
label_3cafc8:
    // 0x3cafc8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3cafcc:
    if (ctx->pc == 0x3CAFCCu) {
        ctx->pc = 0x3CAFD0u;
        goto label_3cafd0;
    }
    ctx->pc = 0x3CAFC8u;
    {
        const bool branch_taken_0x3cafc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cafc8) {
            ctx->pc = 0x3CAFE4u;
            goto label_3cafe4;
        }
    }
    ctx->pc = 0x3CAFD0u;
label_3cafd0:
    // 0x3cafd0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3cafd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cafd4:
    // 0x3cafd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cafd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cafd8:
    // 0x3cafd8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3cafd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3cafdc:
    // 0x3cafdc: 0x320f809  jalr        $t9
label_3cafe0:
    if (ctx->pc == 0x3CAFE0u) {
        ctx->pc = 0x3CAFE0u;
            // 0x3cafe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3CAFE4u;
        goto label_3cafe4;
    }
    ctx->pc = 0x3CAFDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CAFE4u);
        ctx->pc = 0x3CAFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAFDCu;
            // 0x3cafe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CAFE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CAFE4u; }
            if (ctx->pc != 0x3CAFE4u) { return; }
        }
        }
    }
    ctx->pc = 0x3CAFE4u;
label_3cafe4:
    // 0x3cafe4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3cafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3cafe8:
    // 0x3cafe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cafe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cafec:
    // 0x3cafec: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x3cafecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
label_3caff0:
    // 0x3caff0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3caff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3caff4:
    // 0x3caff4: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x3caff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_3caff8:
    // 0x3caff8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3caff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3caffc:
    // 0x3caffc: 0xc08914c  jal         func_224530
label_3cb000:
    if (ctx->pc == 0x3CB000u) {
        ctx->pc = 0x3CB000u;
            // 0x3cb000: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB004u;
        goto label_3cb004;
    }
    ctx->pc = 0x3CAFFCu;
    SET_GPR_U32(ctx, 31, 0x3CB004u);
    ctx->pc = 0x3CB000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CAFFCu;
            // 0x3cb000: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB004u; }
        if (ctx->pc != 0x3CB004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB004u; }
        if (ctx->pc != 0x3CB004u) { return; }
    }
    ctx->pc = 0x3CB004u;
label_3cb004:
    // 0x3cb004: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x3cb004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb008:
    // 0x3cb008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb00c:
    // 0x3cb00c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x3cb00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb010:
    // 0x3cb010: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3cb010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3cb014:
    // 0x3cb014: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3cb014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb018:
    // 0x3cb018: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3cb018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cb01c:
    // 0x3cb01c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3cb01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3cb020:
    // 0x3cb020: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3cb020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3cb024:
    // 0x3cb024: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3cb024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3cb028:
    // 0x3cb028: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3cb028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3cb02c:
    // 0x3cb02c: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x3cb02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cb030:
    // 0x3cb030: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x3cb030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb034:
    // 0x3cb034: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x3cb034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb038:
    // 0x3cb038: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x3cb038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb03c:
    // 0x3cb03c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3cb03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3cb040:
    // 0x3cb040: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3cb040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3cb044:
    // 0x3cb044: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3cb044u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3cb048:
    // 0x3cb048: 0xc0892b0  jal         func_224AC0
label_3cb04c:
    if (ctx->pc == 0x3CB04Cu) {
        ctx->pc = 0x3CB04Cu;
            // 0x3cb04c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x3CB050u;
        goto label_3cb050;
    }
    ctx->pc = 0x3CB048u;
    SET_GPR_U32(ctx, 31, 0x3CB050u);
    ctx->pc = 0x3CB04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB048u;
            // 0x3cb04c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB050u; }
        if (ctx->pc != 0x3CB050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB050u; }
        if (ctx->pc != 0x3CB050u) { return; }
    }
    ctx->pc = 0x3CB050u;
label_3cb050:
    // 0x3cb050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb054:
    // 0x3cb054: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3cb054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3cb058:
    // 0x3cb058: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3cb058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3cb05c:
    // 0x3cb05c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3cb05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3cb060:
    // 0x3cb060: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3cb060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_3cb064:
    // 0x3cb064: 0xc0891d8  jal         func_224760
label_3cb068:
    if (ctx->pc == 0x3CB068u) {
        ctx->pc = 0x3CB068u;
            // 0x3cb068: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x3CB06Cu;
        goto label_3cb06c;
    }
    ctx->pc = 0x3CB064u;
    SET_GPR_U32(ctx, 31, 0x3CB06Cu);
    ctx->pc = 0x3CB068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB064u;
            // 0x3cb068: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB06Cu; }
        if (ctx->pc != 0x3CB06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB06Cu; }
        if (ctx->pc != 0x3CB06Cu) { return; }
    }
    ctx->pc = 0x3CB06Cu;
label_3cb06c:
    // 0x3cb06c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x3cb06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_3cb070:
    // 0x3cb070: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3cb070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3cb074:
    // 0x3cb074: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x3cb074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_3cb078:
    // 0x3cb078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cb078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb07c:
    // 0x3cb07c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3cb07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3cb080:
    // 0x3cb080: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3cb080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3cb084:
    // 0x3cb084: 0xc08c164  jal         func_230590
label_3cb088:
    if (ctx->pc == 0x3CB088u) {
        ctx->pc = 0x3CB088u;
            // 0x3cb088: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3CB08Cu;
        goto label_3cb08c;
    }
    ctx->pc = 0x3CB084u;
    SET_GPR_U32(ctx, 31, 0x3CB08Cu);
    ctx->pc = 0x3CB088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB084u;
            // 0x3cb088: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB08Cu; }
        if (ctx->pc != 0x3CB08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB08Cu; }
        if (ctx->pc != 0x3CB08Cu) { return; }
    }
    ctx->pc = 0x3CB08Cu;
label_3cb08c:
    // 0x3cb08c: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x3cb08cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
label_3cb090:
    // 0x3cb090: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3cb090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3cb094:
    // 0x3cb094: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3cb094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3cb098:
    // 0x3cb098: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3cb098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3cb09c:
    // 0x3cb09c: 0xc0a7a88  jal         func_29EA20
label_3cb0a0:
    if (ctx->pc == 0x3CB0A0u) {
        ctx->pc = 0x3CB0A0u;
            // 0x3cb0a0: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x3CB0A4u;
        goto label_3cb0a4;
    }
    ctx->pc = 0x3CB09Cu;
    SET_GPR_U32(ctx, 31, 0x3CB0A4u);
    ctx->pc = 0x3CB0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB09Cu;
            // 0x3cb0a0: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB0A4u; }
        if (ctx->pc != 0x3CB0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB0A4u; }
        if (ctx->pc != 0x3CB0A4u) { return; }
    }
    ctx->pc = 0x3CB0A4u;
label_3cb0a4:
    // 0x3cb0a4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3cb0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3cb0a8:
    // 0x3cb0a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cb0a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb0ac:
    // 0x3cb0ac: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_3cb0b0:
    if (ctx->pc == 0x3CB0B0u) {
        ctx->pc = 0x3CB0B0u;
            // 0x3cb0b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3CB0B4u;
        goto label_3cb0b4;
    }
    ctx->pc = 0x3CB0ACu;
    {
        const bool branch_taken_0x3cb0ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB0ACu;
            // 0x3cb0b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb0ac) {
            ctx->pc = 0x3CB0D0u;
            goto label_3cb0d0;
        }
    }
    ctx->pc = 0x3CB0B4u;
label_3cb0b4:
    // 0x3cb0b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cb0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb0b8:
    // 0x3cb0b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cb0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb0bc:
    // 0x3cb0bc: 0xc0869d0  jal         func_21A740
label_3cb0c0:
    if (ctx->pc == 0x3CB0C0u) {
        ctx->pc = 0x3CB0C0u;
            // 0x3cb0c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB0C4u;
        goto label_3cb0c4;
    }
    ctx->pc = 0x3CB0BCu;
    SET_GPR_U32(ctx, 31, 0x3CB0C4u);
    ctx->pc = 0x3CB0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB0BCu;
            // 0x3cb0c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB0C4u; }
        if (ctx->pc != 0x3CB0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB0C4u; }
        if (ctx->pc != 0x3CB0C4u) { return; }
    }
    ctx->pc = 0x3CB0C4u;
label_3cb0c4:
    // 0x3cb0c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3cb0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3cb0c8:
    // 0x3cb0c8: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x3cb0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_3cb0cc:
    // 0x3cb0cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3cb0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3cb0d0:
    // 0x3cb0d0: 0xae110210  sw          $s1, 0x210($s0)
    ctx->pc = 0x3cb0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
label_3cb0d4:
    // 0x3cb0d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3cb0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3cb0d8:
    // 0x3cb0d8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3cb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3cb0dc:
    // 0x3cb0dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3cb0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3cb0e0:
    // 0x3cb0e0: 0xc08c650  jal         func_231940
label_3cb0e4:
    if (ctx->pc == 0x3CB0E4u) {
        ctx->pc = 0x3CB0E4u;
            // 0x3cb0e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB0E8u;
        goto label_3cb0e8;
    }
    ctx->pc = 0x3CB0E0u;
    SET_GPR_U32(ctx, 31, 0x3CB0E8u);
    ctx->pc = 0x3CB0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB0E0u;
            // 0x3cb0e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB0E8u; }
        if (ctx->pc != 0x3CB0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB0E8u; }
        if (ctx->pc != 0x3CB0E8u) { return; }
    }
    ctx->pc = 0x3CB0E8u;
label_3cb0e8:
    // 0x3cb0e8: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x3cb0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb0ec:
    // 0x3cb0ec: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x3cb0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_3cb0f0:
    // 0x3cb0f0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3cb0f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3cb0f4:
    // 0x3cb0f4: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x3cb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_3cb0f8:
    // 0x3cb0f8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3cb0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3cb0fc:
    // 0x3cb0fc: 0x26440110  addiu       $a0, $s2, 0x110
    ctx->pc = 0x3cb0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_3cb100:
    // 0x3cb100: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3cb100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3cb104:
    // 0x3cb104: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x3cb104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_3cb108:
    // 0x3cb108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cb108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb10c:
    // 0x3cb10c: 0x0  nop
    ctx->pc = 0x3cb10cu;
    // NOP
label_3cb110:
    // 0x3cb110: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3cb110u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3cb114:
    // 0x3cb114: 0x0  nop
    ctx->pc = 0x3cb114u;
    // NOP
label_3cb118:
    // 0x3cb118: 0x0  nop
    ctx->pc = 0x3cb118u;
    // NOP
label_3cb11c:
    // 0x3cb11c: 0xc04c720  jal         func_131C80
label_3cb120:
    if (ctx->pc == 0x3CB120u) {
        ctx->pc = 0x3CB120u;
            // 0x3cb120: 0xe64000d8  swc1        $f0, 0xD8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
        ctx->pc = 0x3CB124u;
        goto label_3cb124;
    }
    ctx->pc = 0x3CB11Cu;
    SET_GPR_U32(ctx, 31, 0x3CB124u);
    ctx->pc = 0x3CB120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB11Cu;
            // 0x3cb120: 0xe64000d8  swc1        $f0, 0xD8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB124u; }
        if (ctx->pc != 0x3CB124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB124u; }
        if (ctx->pc != 0x3CB124u) { return; }
    }
    ctx->pc = 0x3CB124u;
label_3cb124:
    // 0x3cb124: 0xa2400064  sb          $zero, 0x64($s2)
    ctx->pc = 0x3cb124u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 0));
label_3cb128:
    // 0x3cb128: 0xa2400065  sb          $zero, 0x65($s2)
    ctx->pc = 0x3cb128u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 0));
label_3cb12c:
    // 0x3cb12c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cb12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3cb130:
    // 0x3cb130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3cb130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cb134:
    // 0x3cb134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cb134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cb138:
    // 0x3cb138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cb138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cb13c:
    // 0x3cb13c: 0x3e00008  jr          $ra
label_3cb140:
    if (ctx->pc == 0x3CB140u) {
        ctx->pc = 0x3CB140u;
            // 0x3cb140: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x3CB144u;
        goto label_3cb144;
    }
    ctx->pc = 0x3CB13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CB140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB13Cu;
            // 0x3cb140: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CB144u;
label_3cb144:
    // 0x3cb144: 0x0  nop
    ctx->pc = 0x3cb144u;
    // NOP
label_3cb148:
    // 0x3cb148: 0x0  nop
    ctx->pc = 0x3cb148u;
    // NOP
label_3cb14c:
    // 0x3cb14c: 0x0  nop
    ctx->pc = 0x3cb14cu;
    // NOP
label_3cb150:
    // 0x3cb150: 0x80e3580  j           func_38D600
label_3cb154:
    if (ctx->pc == 0x3CB154u) {
        ctx->pc = 0x3CB158u;
        goto label_3cb158;
    }
    ctx->pc = 0x3CB150u;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0038D600_0x38d600(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3CB158u;
label_3cb158:
    // 0x3cb158: 0x0  nop
    ctx->pc = 0x3cb158u;
    // NOP
label_3cb15c:
    // 0x3cb15c: 0x0  nop
    ctx->pc = 0x3cb15cu;
    // NOP
}
