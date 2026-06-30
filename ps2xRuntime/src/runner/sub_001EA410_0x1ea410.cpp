#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EA410
// Address: 0x1ea410 - 0x1eb230
void sub_001EA410_0x1ea410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA410_0x1ea410");
#endif

    switch (ctx->pc) {
        case 0x1ea410u: goto label_1ea410;
        case 0x1ea414u: goto label_1ea414;
        case 0x1ea418u: goto label_1ea418;
        case 0x1ea41cu: goto label_1ea41c;
        case 0x1ea420u: goto label_1ea420;
        case 0x1ea424u: goto label_1ea424;
        case 0x1ea428u: goto label_1ea428;
        case 0x1ea42cu: goto label_1ea42c;
        case 0x1ea430u: goto label_1ea430;
        case 0x1ea434u: goto label_1ea434;
        case 0x1ea438u: goto label_1ea438;
        case 0x1ea43cu: goto label_1ea43c;
        case 0x1ea440u: goto label_1ea440;
        case 0x1ea444u: goto label_1ea444;
        case 0x1ea448u: goto label_1ea448;
        case 0x1ea44cu: goto label_1ea44c;
        case 0x1ea450u: goto label_1ea450;
        case 0x1ea454u: goto label_1ea454;
        case 0x1ea458u: goto label_1ea458;
        case 0x1ea45cu: goto label_1ea45c;
        case 0x1ea460u: goto label_1ea460;
        case 0x1ea464u: goto label_1ea464;
        case 0x1ea468u: goto label_1ea468;
        case 0x1ea46cu: goto label_1ea46c;
        case 0x1ea470u: goto label_1ea470;
        case 0x1ea474u: goto label_1ea474;
        case 0x1ea478u: goto label_1ea478;
        case 0x1ea47cu: goto label_1ea47c;
        case 0x1ea480u: goto label_1ea480;
        case 0x1ea484u: goto label_1ea484;
        case 0x1ea488u: goto label_1ea488;
        case 0x1ea48cu: goto label_1ea48c;
        case 0x1ea490u: goto label_1ea490;
        case 0x1ea494u: goto label_1ea494;
        case 0x1ea498u: goto label_1ea498;
        case 0x1ea49cu: goto label_1ea49c;
        case 0x1ea4a0u: goto label_1ea4a0;
        case 0x1ea4a4u: goto label_1ea4a4;
        case 0x1ea4a8u: goto label_1ea4a8;
        case 0x1ea4acu: goto label_1ea4ac;
        case 0x1ea4b0u: goto label_1ea4b0;
        case 0x1ea4b4u: goto label_1ea4b4;
        case 0x1ea4b8u: goto label_1ea4b8;
        case 0x1ea4bcu: goto label_1ea4bc;
        case 0x1ea4c0u: goto label_1ea4c0;
        case 0x1ea4c4u: goto label_1ea4c4;
        case 0x1ea4c8u: goto label_1ea4c8;
        case 0x1ea4ccu: goto label_1ea4cc;
        case 0x1ea4d0u: goto label_1ea4d0;
        case 0x1ea4d4u: goto label_1ea4d4;
        case 0x1ea4d8u: goto label_1ea4d8;
        case 0x1ea4dcu: goto label_1ea4dc;
        case 0x1ea4e0u: goto label_1ea4e0;
        case 0x1ea4e4u: goto label_1ea4e4;
        case 0x1ea4e8u: goto label_1ea4e8;
        case 0x1ea4ecu: goto label_1ea4ec;
        case 0x1ea4f0u: goto label_1ea4f0;
        case 0x1ea4f4u: goto label_1ea4f4;
        case 0x1ea4f8u: goto label_1ea4f8;
        case 0x1ea4fcu: goto label_1ea4fc;
        case 0x1ea500u: goto label_1ea500;
        case 0x1ea504u: goto label_1ea504;
        case 0x1ea508u: goto label_1ea508;
        case 0x1ea50cu: goto label_1ea50c;
        case 0x1ea510u: goto label_1ea510;
        case 0x1ea514u: goto label_1ea514;
        case 0x1ea518u: goto label_1ea518;
        case 0x1ea51cu: goto label_1ea51c;
        case 0x1ea520u: goto label_1ea520;
        case 0x1ea524u: goto label_1ea524;
        case 0x1ea528u: goto label_1ea528;
        case 0x1ea52cu: goto label_1ea52c;
        case 0x1ea530u: goto label_1ea530;
        case 0x1ea534u: goto label_1ea534;
        case 0x1ea538u: goto label_1ea538;
        case 0x1ea53cu: goto label_1ea53c;
        case 0x1ea540u: goto label_1ea540;
        case 0x1ea544u: goto label_1ea544;
        case 0x1ea548u: goto label_1ea548;
        case 0x1ea54cu: goto label_1ea54c;
        case 0x1ea550u: goto label_1ea550;
        case 0x1ea554u: goto label_1ea554;
        case 0x1ea558u: goto label_1ea558;
        case 0x1ea55cu: goto label_1ea55c;
        case 0x1ea560u: goto label_1ea560;
        case 0x1ea564u: goto label_1ea564;
        case 0x1ea568u: goto label_1ea568;
        case 0x1ea56cu: goto label_1ea56c;
        case 0x1ea570u: goto label_1ea570;
        case 0x1ea574u: goto label_1ea574;
        case 0x1ea578u: goto label_1ea578;
        case 0x1ea57cu: goto label_1ea57c;
        case 0x1ea580u: goto label_1ea580;
        case 0x1ea584u: goto label_1ea584;
        case 0x1ea588u: goto label_1ea588;
        case 0x1ea58cu: goto label_1ea58c;
        case 0x1ea590u: goto label_1ea590;
        case 0x1ea594u: goto label_1ea594;
        case 0x1ea598u: goto label_1ea598;
        case 0x1ea59cu: goto label_1ea59c;
        case 0x1ea5a0u: goto label_1ea5a0;
        case 0x1ea5a4u: goto label_1ea5a4;
        case 0x1ea5a8u: goto label_1ea5a8;
        case 0x1ea5acu: goto label_1ea5ac;
        case 0x1ea5b0u: goto label_1ea5b0;
        case 0x1ea5b4u: goto label_1ea5b4;
        case 0x1ea5b8u: goto label_1ea5b8;
        case 0x1ea5bcu: goto label_1ea5bc;
        case 0x1ea5c0u: goto label_1ea5c0;
        case 0x1ea5c4u: goto label_1ea5c4;
        case 0x1ea5c8u: goto label_1ea5c8;
        case 0x1ea5ccu: goto label_1ea5cc;
        case 0x1ea5d0u: goto label_1ea5d0;
        case 0x1ea5d4u: goto label_1ea5d4;
        case 0x1ea5d8u: goto label_1ea5d8;
        case 0x1ea5dcu: goto label_1ea5dc;
        case 0x1ea5e0u: goto label_1ea5e0;
        case 0x1ea5e4u: goto label_1ea5e4;
        case 0x1ea5e8u: goto label_1ea5e8;
        case 0x1ea5ecu: goto label_1ea5ec;
        case 0x1ea5f0u: goto label_1ea5f0;
        case 0x1ea5f4u: goto label_1ea5f4;
        case 0x1ea5f8u: goto label_1ea5f8;
        case 0x1ea5fcu: goto label_1ea5fc;
        case 0x1ea600u: goto label_1ea600;
        case 0x1ea604u: goto label_1ea604;
        case 0x1ea608u: goto label_1ea608;
        case 0x1ea60cu: goto label_1ea60c;
        case 0x1ea610u: goto label_1ea610;
        case 0x1ea614u: goto label_1ea614;
        case 0x1ea618u: goto label_1ea618;
        case 0x1ea61cu: goto label_1ea61c;
        case 0x1ea620u: goto label_1ea620;
        case 0x1ea624u: goto label_1ea624;
        case 0x1ea628u: goto label_1ea628;
        case 0x1ea62cu: goto label_1ea62c;
        case 0x1ea630u: goto label_1ea630;
        case 0x1ea634u: goto label_1ea634;
        case 0x1ea638u: goto label_1ea638;
        case 0x1ea63cu: goto label_1ea63c;
        case 0x1ea640u: goto label_1ea640;
        case 0x1ea644u: goto label_1ea644;
        case 0x1ea648u: goto label_1ea648;
        case 0x1ea64cu: goto label_1ea64c;
        case 0x1ea650u: goto label_1ea650;
        case 0x1ea654u: goto label_1ea654;
        case 0x1ea658u: goto label_1ea658;
        case 0x1ea65cu: goto label_1ea65c;
        case 0x1ea660u: goto label_1ea660;
        case 0x1ea664u: goto label_1ea664;
        case 0x1ea668u: goto label_1ea668;
        case 0x1ea66cu: goto label_1ea66c;
        case 0x1ea670u: goto label_1ea670;
        case 0x1ea674u: goto label_1ea674;
        case 0x1ea678u: goto label_1ea678;
        case 0x1ea67cu: goto label_1ea67c;
        case 0x1ea680u: goto label_1ea680;
        case 0x1ea684u: goto label_1ea684;
        case 0x1ea688u: goto label_1ea688;
        case 0x1ea68cu: goto label_1ea68c;
        case 0x1ea690u: goto label_1ea690;
        case 0x1ea694u: goto label_1ea694;
        case 0x1ea698u: goto label_1ea698;
        case 0x1ea69cu: goto label_1ea69c;
        case 0x1ea6a0u: goto label_1ea6a0;
        case 0x1ea6a4u: goto label_1ea6a4;
        case 0x1ea6a8u: goto label_1ea6a8;
        case 0x1ea6acu: goto label_1ea6ac;
        case 0x1ea6b0u: goto label_1ea6b0;
        case 0x1ea6b4u: goto label_1ea6b4;
        case 0x1ea6b8u: goto label_1ea6b8;
        case 0x1ea6bcu: goto label_1ea6bc;
        case 0x1ea6c0u: goto label_1ea6c0;
        case 0x1ea6c4u: goto label_1ea6c4;
        case 0x1ea6c8u: goto label_1ea6c8;
        case 0x1ea6ccu: goto label_1ea6cc;
        case 0x1ea6d0u: goto label_1ea6d0;
        case 0x1ea6d4u: goto label_1ea6d4;
        case 0x1ea6d8u: goto label_1ea6d8;
        case 0x1ea6dcu: goto label_1ea6dc;
        case 0x1ea6e0u: goto label_1ea6e0;
        case 0x1ea6e4u: goto label_1ea6e4;
        case 0x1ea6e8u: goto label_1ea6e8;
        case 0x1ea6ecu: goto label_1ea6ec;
        case 0x1ea6f0u: goto label_1ea6f0;
        case 0x1ea6f4u: goto label_1ea6f4;
        case 0x1ea6f8u: goto label_1ea6f8;
        case 0x1ea6fcu: goto label_1ea6fc;
        case 0x1ea700u: goto label_1ea700;
        case 0x1ea704u: goto label_1ea704;
        case 0x1ea708u: goto label_1ea708;
        case 0x1ea70cu: goto label_1ea70c;
        case 0x1ea710u: goto label_1ea710;
        case 0x1ea714u: goto label_1ea714;
        case 0x1ea718u: goto label_1ea718;
        case 0x1ea71cu: goto label_1ea71c;
        case 0x1ea720u: goto label_1ea720;
        case 0x1ea724u: goto label_1ea724;
        case 0x1ea728u: goto label_1ea728;
        case 0x1ea72cu: goto label_1ea72c;
        case 0x1ea730u: goto label_1ea730;
        case 0x1ea734u: goto label_1ea734;
        case 0x1ea738u: goto label_1ea738;
        case 0x1ea73cu: goto label_1ea73c;
        case 0x1ea740u: goto label_1ea740;
        case 0x1ea744u: goto label_1ea744;
        case 0x1ea748u: goto label_1ea748;
        case 0x1ea74cu: goto label_1ea74c;
        case 0x1ea750u: goto label_1ea750;
        case 0x1ea754u: goto label_1ea754;
        case 0x1ea758u: goto label_1ea758;
        case 0x1ea75cu: goto label_1ea75c;
        case 0x1ea760u: goto label_1ea760;
        case 0x1ea764u: goto label_1ea764;
        case 0x1ea768u: goto label_1ea768;
        case 0x1ea76cu: goto label_1ea76c;
        case 0x1ea770u: goto label_1ea770;
        case 0x1ea774u: goto label_1ea774;
        case 0x1ea778u: goto label_1ea778;
        case 0x1ea77cu: goto label_1ea77c;
        case 0x1ea780u: goto label_1ea780;
        case 0x1ea784u: goto label_1ea784;
        case 0x1ea788u: goto label_1ea788;
        case 0x1ea78cu: goto label_1ea78c;
        case 0x1ea790u: goto label_1ea790;
        case 0x1ea794u: goto label_1ea794;
        case 0x1ea798u: goto label_1ea798;
        case 0x1ea79cu: goto label_1ea79c;
        case 0x1ea7a0u: goto label_1ea7a0;
        case 0x1ea7a4u: goto label_1ea7a4;
        case 0x1ea7a8u: goto label_1ea7a8;
        case 0x1ea7acu: goto label_1ea7ac;
        case 0x1ea7b0u: goto label_1ea7b0;
        case 0x1ea7b4u: goto label_1ea7b4;
        case 0x1ea7b8u: goto label_1ea7b8;
        case 0x1ea7bcu: goto label_1ea7bc;
        case 0x1ea7c0u: goto label_1ea7c0;
        case 0x1ea7c4u: goto label_1ea7c4;
        case 0x1ea7c8u: goto label_1ea7c8;
        case 0x1ea7ccu: goto label_1ea7cc;
        case 0x1ea7d0u: goto label_1ea7d0;
        case 0x1ea7d4u: goto label_1ea7d4;
        case 0x1ea7d8u: goto label_1ea7d8;
        case 0x1ea7dcu: goto label_1ea7dc;
        case 0x1ea7e0u: goto label_1ea7e0;
        case 0x1ea7e4u: goto label_1ea7e4;
        case 0x1ea7e8u: goto label_1ea7e8;
        case 0x1ea7ecu: goto label_1ea7ec;
        case 0x1ea7f0u: goto label_1ea7f0;
        case 0x1ea7f4u: goto label_1ea7f4;
        case 0x1ea7f8u: goto label_1ea7f8;
        case 0x1ea7fcu: goto label_1ea7fc;
        case 0x1ea800u: goto label_1ea800;
        case 0x1ea804u: goto label_1ea804;
        case 0x1ea808u: goto label_1ea808;
        case 0x1ea80cu: goto label_1ea80c;
        case 0x1ea810u: goto label_1ea810;
        case 0x1ea814u: goto label_1ea814;
        case 0x1ea818u: goto label_1ea818;
        case 0x1ea81cu: goto label_1ea81c;
        case 0x1ea820u: goto label_1ea820;
        case 0x1ea824u: goto label_1ea824;
        case 0x1ea828u: goto label_1ea828;
        case 0x1ea82cu: goto label_1ea82c;
        case 0x1ea830u: goto label_1ea830;
        case 0x1ea834u: goto label_1ea834;
        case 0x1ea838u: goto label_1ea838;
        case 0x1ea83cu: goto label_1ea83c;
        case 0x1ea840u: goto label_1ea840;
        case 0x1ea844u: goto label_1ea844;
        case 0x1ea848u: goto label_1ea848;
        case 0x1ea84cu: goto label_1ea84c;
        case 0x1ea850u: goto label_1ea850;
        case 0x1ea854u: goto label_1ea854;
        case 0x1ea858u: goto label_1ea858;
        case 0x1ea85cu: goto label_1ea85c;
        case 0x1ea860u: goto label_1ea860;
        case 0x1ea864u: goto label_1ea864;
        case 0x1ea868u: goto label_1ea868;
        case 0x1ea86cu: goto label_1ea86c;
        case 0x1ea870u: goto label_1ea870;
        case 0x1ea874u: goto label_1ea874;
        case 0x1ea878u: goto label_1ea878;
        case 0x1ea87cu: goto label_1ea87c;
        case 0x1ea880u: goto label_1ea880;
        case 0x1ea884u: goto label_1ea884;
        case 0x1ea888u: goto label_1ea888;
        case 0x1ea88cu: goto label_1ea88c;
        case 0x1ea890u: goto label_1ea890;
        case 0x1ea894u: goto label_1ea894;
        case 0x1ea898u: goto label_1ea898;
        case 0x1ea89cu: goto label_1ea89c;
        case 0x1ea8a0u: goto label_1ea8a0;
        case 0x1ea8a4u: goto label_1ea8a4;
        case 0x1ea8a8u: goto label_1ea8a8;
        case 0x1ea8acu: goto label_1ea8ac;
        case 0x1ea8b0u: goto label_1ea8b0;
        case 0x1ea8b4u: goto label_1ea8b4;
        case 0x1ea8b8u: goto label_1ea8b8;
        case 0x1ea8bcu: goto label_1ea8bc;
        case 0x1ea8c0u: goto label_1ea8c0;
        case 0x1ea8c4u: goto label_1ea8c4;
        case 0x1ea8c8u: goto label_1ea8c8;
        case 0x1ea8ccu: goto label_1ea8cc;
        case 0x1ea8d0u: goto label_1ea8d0;
        case 0x1ea8d4u: goto label_1ea8d4;
        case 0x1ea8d8u: goto label_1ea8d8;
        case 0x1ea8dcu: goto label_1ea8dc;
        case 0x1ea8e0u: goto label_1ea8e0;
        case 0x1ea8e4u: goto label_1ea8e4;
        case 0x1ea8e8u: goto label_1ea8e8;
        case 0x1ea8ecu: goto label_1ea8ec;
        case 0x1ea8f0u: goto label_1ea8f0;
        case 0x1ea8f4u: goto label_1ea8f4;
        case 0x1ea8f8u: goto label_1ea8f8;
        case 0x1ea8fcu: goto label_1ea8fc;
        case 0x1ea900u: goto label_1ea900;
        case 0x1ea904u: goto label_1ea904;
        case 0x1ea908u: goto label_1ea908;
        case 0x1ea90cu: goto label_1ea90c;
        case 0x1ea910u: goto label_1ea910;
        case 0x1ea914u: goto label_1ea914;
        case 0x1ea918u: goto label_1ea918;
        case 0x1ea91cu: goto label_1ea91c;
        case 0x1ea920u: goto label_1ea920;
        case 0x1ea924u: goto label_1ea924;
        case 0x1ea928u: goto label_1ea928;
        case 0x1ea92cu: goto label_1ea92c;
        case 0x1ea930u: goto label_1ea930;
        case 0x1ea934u: goto label_1ea934;
        case 0x1ea938u: goto label_1ea938;
        case 0x1ea93cu: goto label_1ea93c;
        case 0x1ea940u: goto label_1ea940;
        case 0x1ea944u: goto label_1ea944;
        case 0x1ea948u: goto label_1ea948;
        case 0x1ea94cu: goto label_1ea94c;
        case 0x1ea950u: goto label_1ea950;
        case 0x1ea954u: goto label_1ea954;
        case 0x1ea958u: goto label_1ea958;
        case 0x1ea95cu: goto label_1ea95c;
        case 0x1ea960u: goto label_1ea960;
        case 0x1ea964u: goto label_1ea964;
        case 0x1ea968u: goto label_1ea968;
        case 0x1ea96cu: goto label_1ea96c;
        case 0x1ea970u: goto label_1ea970;
        case 0x1ea974u: goto label_1ea974;
        case 0x1ea978u: goto label_1ea978;
        case 0x1ea97cu: goto label_1ea97c;
        case 0x1ea980u: goto label_1ea980;
        case 0x1ea984u: goto label_1ea984;
        case 0x1ea988u: goto label_1ea988;
        case 0x1ea98cu: goto label_1ea98c;
        case 0x1ea990u: goto label_1ea990;
        case 0x1ea994u: goto label_1ea994;
        case 0x1ea998u: goto label_1ea998;
        case 0x1ea99cu: goto label_1ea99c;
        case 0x1ea9a0u: goto label_1ea9a0;
        case 0x1ea9a4u: goto label_1ea9a4;
        case 0x1ea9a8u: goto label_1ea9a8;
        case 0x1ea9acu: goto label_1ea9ac;
        case 0x1ea9b0u: goto label_1ea9b0;
        case 0x1ea9b4u: goto label_1ea9b4;
        case 0x1ea9b8u: goto label_1ea9b8;
        case 0x1ea9bcu: goto label_1ea9bc;
        case 0x1ea9c0u: goto label_1ea9c0;
        case 0x1ea9c4u: goto label_1ea9c4;
        case 0x1ea9c8u: goto label_1ea9c8;
        case 0x1ea9ccu: goto label_1ea9cc;
        case 0x1ea9d0u: goto label_1ea9d0;
        case 0x1ea9d4u: goto label_1ea9d4;
        case 0x1ea9d8u: goto label_1ea9d8;
        case 0x1ea9dcu: goto label_1ea9dc;
        case 0x1ea9e0u: goto label_1ea9e0;
        case 0x1ea9e4u: goto label_1ea9e4;
        case 0x1ea9e8u: goto label_1ea9e8;
        case 0x1ea9ecu: goto label_1ea9ec;
        case 0x1ea9f0u: goto label_1ea9f0;
        case 0x1ea9f4u: goto label_1ea9f4;
        case 0x1ea9f8u: goto label_1ea9f8;
        case 0x1ea9fcu: goto label_1ea9fc;
        case 0x1eaa00u: goto label_1eaa00;
        case 0x1eaa04u: goto label_1eaa04;
        case 0x1eaa08u: goto label_1eaa08;
        case 0x1eaa0cu: goto label_1eaa0c;
        case 0x1eaa10u: goto label_1eaa10;
        case 0x1eaa14u: goto label_1eaa14;
        case 0x1eaa18u: goto label_1eaa18;
        case 0x1eaa1cu: goto label_1eaa1c;
        case 0x1eaa20u: goto label_1eaa20;
        case 0x1eaa24u: goto label_1eaa24;
        case 0x1eaa28u: goto label_1eaa28;
        case 0x1eaa2cu: goto label_1eaa2c;
        case 0x1eaa30u: goto label_1eaa30;
        case 0x1eaa34u: goto label_1eaa34;
        case 0x1eaa38u: goto label_1eaa38;
        case 0x1eaa3cu: goto label_1eaa3c;
        case 0x1eaa40u: goto label_1eaa40;
        case 0x1eaa44u: goto label_1eaa44;
        case 0x1eaa48u: goto label_1eaa48;
        case 0x1eaa4cu: goto label_1eaa4c;
        case 0x1eaa50u: goto label_1eaa50;
        case 0x1eaa54u: goto label_1eaa54;
        case 0x1eaa58u: goto label_1eaa58;
        case 0x1eaa5cu: goto label_1eaa5c;
        case 0x1eaa60u: goto label_1eaa60;
        case 0x1eaa64u: goto label_1eaa64;
        case 0x1eaa68u: goto label_1eaa68;
        case 0x1eaa6cu: goto label_1eaa6c;
        case 0x1eaa70u: goto label_1eaa70;
        case 0x1eaa74u: goto label_1eaa74;
        case 0x1eaa78u: goto label_1eaa78;
        case 0x1eaa7cu: goto label_1eaa7c;
        case 0x1eaa80u: goto label_1eaa80;
        case 0x1eaa84u: goto label_1eaa84;
        case 0x1eaa88u: goto label_1eaa88;
        case 0x1eaa8cu: goto label_1eaa8c;
        case 0x1eaa90u: goto label_1eaa90;
        case 0x1eaa94u: goto label_1eaa94;
        case 0x1eaa98u: goto label_1eaa98;
        case 0x1eaa9cu: goto label_1eaa9c;
        case 0x1eaaa0u: goto label_1eaaa0;
        case 0x1eaaa4u: goto label_1eaaa4;
        case 0x1eaaa8u: goto label_1eaaa8;
        case 0x1eaaacu: goto label_1eaaac;
        case 0x1eaab0u: goto label_1eaab0;
        case 0x1eaab4u: goto label_1eaab4;
        case 0x1eaab8u: goto label_1eaab8;
        case 0x1eaabcu: goto label_1eaabc;
        case 0x1eaac0u: goto label_1eaac0;
        case 0x1eaac4u: goto label_1eaac4;
        case 0x1eaac8u: goto label_1eaac8;
        case 0x1eaaccu: goto label_1eaacc;
        case 0x1eaad0u: goto label_1eaad0;
        case 0x1eaad4u: goto label_1eaad4;
        case 0x1eaad8u: goto label_1eaad8;
        case 0x1eaadcu: goto label_1eaadc;
        case 0x1eaae0u: goto label_1eaae0;
        case 0x1eaae4u: goto label_1eaae4;
        case 0x1eaae8u: goto label_1eaae8;
        case 0x1eaaecu: goto label_1eaaec;
        case 0x1eaaf0u: goto label_1eaaf0;
        case 0x1eaaf4u: goto label_1eaaf4;
        case 0x1eaaf8u: goto label_1eaaf8;
        case 0x1eaafcu: goto label_1eaafc;
        case 0x1eab00u: goto label_1eab00;
        case 0x1eab04u: goto label_1eab04;
        case 0x1eab08u: goto label_1eab08;
        case 0x1eab0cu: goto label_1eab0c;
        case 0x1eab10u: goto label_1eab10;
        case 0x1eab14u: goto label_1eab14;
        case 0x1eab18u: goto label_1eab18;
        case 0x1eab1cu: goto label_1eab1c;
        case 0x1eab20u: goto label_1eab20;
        case 0x1eab24u: goto label_1eab24;
        case 0x1eab28u: goto label_1eab28;
        case 0x1eab2cu: goto label_1eab2c;
        case 0x1eab30u: goto label_1eab30;
        case 0x1eab34u: goto label_1eab34;
        case 0x1eab38u: goto label_1eab38;
        case 0x1eab3cu: goto label_1eab3c;
        case 0x1eab40u: goto label_1eab40;
        case 0x1eab44u: goto label_1eab44;
        case 0x1eab48u: goto label_1eab48;
        case 0x1eab4cu: goto label_1eab4c;
        case 0x1eab50u: goto label_1eab50;
        case 0x1eab54u: goto label_1eab54;
        case 0x1eab58u: goto label_1eab58;
        case 0x1eab5cu: goto label_1eab5c;
        case 0x1eab60u: goto label_1eab60;
        case 0x1eab64u: goto label_1eab64;
        case 0x1eab68u: goto label_1eab68;
        case 0x1eab6cu: goto label_1eab6c;
        case 0x1eab70u: goto label_1eab70;
        case 0x1eab74u: goto label_1eab74;
        case 0x1eab78u: goto label_1eab78;
        case 0x1eab7cu: goto label_1eab7c;
        case 0x1eab80u: goto label_1eab80;
        case 0x1eab84u: goto label_1eab84;
        case 0x1eab88u: goto label_1eab88;
        case 0x1eab8cu: goto label_1eab8c;
        case 0x1eab90u: goto label_1eab90;
        case 0x1eab94u: goto label_1eab94;
        case 0x1eab98u: goto label_1eab98;
        case 0x1eab9cu: goto label_1eab9c;
        case 0x1eaba0u: goto label_1eaba0;
        case 0x1eaba4u: goto label_1eaba4;
        case 0x1eaba8u: goto label_1eaba8;
        case 0x1eabacu: goto label_1eabac;
        case 0x1eabb0u: goto label_1eabb0;
        case 0x1eabb4u: goto label_1eabb4;
        case 0x1eabb8u: goto label_1eabb8;
        case 0x1eabbcu: goto label_1eabbc;
        case 0x1eabc0u: goto label_1eabc0;
        case 0x1eabc4u: goto label_1eabc4;
        case 0x1eabc8u: goto label_1eabc8;
        case 0x1eabccu: goto label_1eabcc;
        case 0x1eabd0u: goto label_1eabd0;
        case 0x1eabd4u: goto label_1eabd4;
        case 0x1eabd8u: goto label_1eabd8;
        case 0x1eabdcu: goto label_1eabdc;
        case 0x1eabe0u: goto label_1eabe0;
        case 0x1eabe4u: goto label_1eabe4;
        case 0x1eabe8u: goto label_1eabe8;
        case 0x1eabecu: goto label_1eabec;
        case 0x1eabf0u: goto label_1eabf0;
        case 0x1eabf4u: goto label_1eabf4;
        case 0x1eabf8u: goto label_1eabf8;
        case 0x1eabfcu: goto label_1eabfc;
        case 0x1eac00u: goto label_1eac00;
        case 0x1eac04u: goto label_1eac04;
        case 0x1eac08u: goto label_1eac08;
        case 0x1eac0cu: goto label_1eac0c;
        case 0x1eac10u: goto label_1eac10;
        case 0x1eac14u: goto label_1eac14;
        case 0x1eac18u: goto label_1eac18;
        case 0x1eac1cu: goto label_1eac1c;
        case 0x1eac20u: goto label_1eac20;
        case 0x1eac24u: goto label_1eac24;
        case 0x1eac28u: goto label_1eac28;
        case 0x1eac2cu: goto label_1eac2c;
        case 0x1eac30u: goto label_1eac30;
        case 0x1eac34u: goto label_1eac34;
        case 0x1eac38u: goto label_1eac38;
        case 0x1eac3cu: goto label_1eac3c;
        case 0x1eac40u: goto label_1eac40;
        case 0x1eac44u: goto label_1eac44;
        case 0x1eac48u: goto label_1eac48;
        case 0x1eac4cu: goto label_1eac4c;
        case 0x1eac50u: goto label_1eac50;
        case 0x1eac54u: goto label_1eac54;
        case 0x1eac58u: goto label_1eac58;
        case 0x1eac5cu: goto label_1eac5c;
        case 0x1eac60u: goto label_1eac60;
        case 0x1eac64u: goto label_1eac64;
        case 0x1eac68u: goto label_1eac68;
        case 0x1eac6cu: goto label_1eac6c;
        case 0x1eac70u: goto label_1eac70;
        case 0x1eac74u: goto label_1eac74;
        case 0x1eac78u: goto label_1eac78;
        case 0x1eac7cu: goto label_1eac7c;
        case 0x1eac80u: goto label_1eac80;
        case 0x1eac84u: goto label_1eac84;
        case 0x1eac88u: goto label_1eac88;
        case 0x1eac8cu: goto label_1eac8c;
        case 0x1eac90u: goto label_1eac90;
        case 0x1eac94u: goto label_1eac94;
        case 0x1eac98u: goto label_1eac98;
        case 0x1eac9cu: goto label_1eac9c;
        case 0x1eaca0u: goto label_1eaca0;
        case 0x1eaca4u: goto label_1eaca4;
        case 0x1eaca8u: goto label_1eaca8;
        case 0x1eacacu: goto label_1eacac;
        case 0x1eacb0u: goto label_1eacb0;
        case 0x1eacb4u: goto label_1eacb4;
        case 0x1eacb8u: goto label_1eacb8;
        case 0x1eacbcu: goto label_1eacbc;
        case 0x1eacc0u: goto label_1eacc0;
        case 0x1eacc4u: goto label_1eacc4;
        case 0x1eacc8u: goto label_1eacc8;
        case 0x1eacccu: goto label_1eaccc;
        case 0x1eacd0u: goto label_1eacd0;
        case 0x1eacd4u: goto label_1eacd4;
        case 0x1eacd8u: goto label_1eacd8;
        case 0x1eacdcu: goto label_1eacdc;
        case 0x1eace0u: goto label_1eace0;
        case 0x1eace4u: goto label_1eace4;
        case 0x1eace8u: goto label_1eace8;
        case 0x1eacecu: goto label_1eacec;
        case 0x1eacf0u: goto label_1eacf0;
        case 0x1eacf4u: goto label_1eacf4;
        case 0x1eacf8u: goto label_1eacf8;
        case 0x1eacfcu: goto label_1eacfc;
        case 0x1ead00u: goto label_1ead00;
        case 0x1ead04u: goto label_1ead04;
        case 0x1ead08u: goto label_1ead08;
        case 0x1ead0cu: goto label_1ead0c;
        case 0x1ead10u: goto label_1ead10;
        case 0x1ead14u: goto label_1ead14;
        case 0x1ead18u: goto label_1ead18;
        case 0x1ead1cu: goto label_1ead1c;
        case 0x1ead20u: goto label_1ead20;
        case 0x1ead24u: goto label_1ead24;
        case 0x1ead28u: goto label_1ead28;
        case 0x1ead2cu: goto label_1ead2c;
        case 0x1ead30u: goto label_1ead30;
        case 0x1ead34u: goto label_1ead34;
        case 0x1ead38u: goto label_1ead38;
        case 0x1ead3cu: goto label_1ead3c;
        case 0x1ead40u: goto label_1ead40;
        case 0x1ead44u: goto label_1ead44;
        case 0x1ead48u: goto label_1ead48;
        case 0x1ead4cu: goto label_1ead4c;
        case 0x1ead50u: goto label_1ead50;
        case 0x1ead54u: goto label_1ead54;
        case 0x1ead58u: goto label_1ead58;
        case 0x1ead5cu: goto label_1ead5c;
        case 0x1ead60u: goto label_1ead60;
        case 0x1ead64u: goto label_1ead64;
        case 0x1ead68u: goto label_1ead68;
        case 0x1ead6cu: goto label_1ead6c;
        case 0x1ead70u: goto label_1ead70;
        case 0x1ead74u: goto label_1ead74;
        case 0x1ead78u: goto label_1ead78;
        case 0x1ead7cu: goto label_1ead7c;
        case 0x1ead80u: goto label_1ead80;
        case 0x1ead84u: goto label_1ead84;
        case 0x1ead88u: goto label_1ead88;
        case 0x1ead8cu: goto label_1ead8c;
        case 0x1ead90u: goto label_1ead90;
        case 0x1ead94u: goto label_1ead94;
        case 0x1ead98u: goto label_1ead98;
        case 0x1ead9cu: goto label_1ead9c;
        case 0x1eada0u: goto label_1eada0;
        case 0x1eada4u: goto label_1eada4;
        case 0x1eada8u: goto label_1eada8;
        case 0x1eadacu: goto label_1eadac;
        case 0x1eadb0u: goto label_1eadb0;
        case 0x1eadb4u: goto label_1eadb4;
        case 0x1eadb8u: goto label_1eadb8;
        case 0x1eadbcu: goto label_1eadbc;
        case 0x1eadc0u: goto label_1eadc0;
        case 0x1eadc4u: goto label_1eadc4;
        case 0x1eadc8u: goto label_1eadc8;
        case 0x1eadccu: goto label_1eadcc;
        case 0x1eadd0u: goto label_1eadd0;
        case 0x1eadd4u: goto label_1eadd4;
        case 0x1eadd8u: goto label_1eadd8;
        case 0x1eaddcu: goto label_1eaddc;
        case 0x1eade0u: goto label_1eade0;
        case 0x1eade4u: goto label_1eade4;
        case 0x1eade8u: goto label_1eade8;
        case 0x1eadecu: goto label_1eadec;
        case 0x1eadf0u: goto label_1eadf0;
        case 0x1eadf4u: goto label_1eadf4;
        case 0x1eadf8u: goto label_1eadf8;
        case 0x1eadfcu: goto label_1eadfc;
        case 0x1eae00u: goto label_1eae00;
        case 0x1eae04u: goto label_1eae04;
        case 0x1eae08u: goto label_1eae08;
        case 0x1eae0cu: goto label_1eae0c;
        case 0x1eae10u: goto label_1eae10;
        case 0x1eae14u: goto label_1eae14;
        case 0x1eae18u: goto label_1eae18;
        case 0x1eae1cu: goto label_1eae1c;
        case 0x1eae20u: goto label_1eae20;
        case 0x1eae24u: goto label_1eae24;
        case 0x1eae28u: goto label_1eae28;
        case 0x1eae2cu: goto label_1eae2c;
        case 0x1eae30u: goto label_1eae30;
        case 0x1eae34u: goto label_1eae34;
        case 0x1eae38u: goto label_1eae38;
        case 0x1eae3cu: goto label_1eae3c;
        case 0x1eae40u: goto label_1eae40;
        case 0x1eae44u: goto label_1eae44;
        case 0x1eae48u: goto label_1eae48;
        case 0x1eae4cu: goto label_1eae4c;
        case 0x1eae50u: goto label_1eae50;
        case 0x1eae54u: goto label_1eae54;
        case 0x1eae58u: goto label_1eae58;
        case 0x1eae5cu: goto label_1eae5c;
        case 0x1eae60u: goto label_1eae60;
        case 0x1eae64u: goto label_1eae64;
        case 0x1eae68u: goto label_1eae68;
        case 0x1eae6cu: goto label_1eae6c;
        case 0x1eae70u: goto label_1eae70;
        case 0x1eae74u: goto label_1eae74;
        case 0x1eae78u: goto label_1eae78;
        case 0x1eae7cu: goto label_1eae7c;
        case 0x1eae80u: goto label_1eae80;
        case 0x1eae84u: goto label_1eae84;
        case 0x1eae88u: goto label_1eae88;
        case 0x1eae8cu: goto label_1eae8c;
        case 0x1eae90u: goto label_1eae90;
        case 0x1eae94u: goto label_1eae94;
        case 0x1eae98u: goto label_1eae98;
        case 0x1eae9cu: goto label_1eae9c;
        case 0x1eaea0u: goto label_1eaea0;
        case 0x1eaea4u: goto label_1eaea4;
        case 0x1eaea8u: goto label_1eaea8;
        case 0x1eaeacu: goto label_1eaeac;
        case 0x1eaeb0u: goto label_1eaeb0;
        case 0x1eaeb4u: goto label_1eaeb4;
        case 0x1eaeb8u: goto label_1eaeb8;
        case 0x1eaebcu: goto label_1eaebc;
        case 0x1eaec0u: goto label_1eaec0;
        case 0x1eaec4u: goto label_1eaec4;
        case 0x1eaec8u: goto label_1eaec8;
        case 0x1eaeccu: goto label_1eaecc;
        case 0x1eaed0u: goto label_1eaed0;
        case 0x1eaed4u: goto label_1eaed4;
        case 0x1eaed8u: goto label_1eaed8;
        case 0x1eaedcu: goto label_1eaedc;
        case 0x1eaee0u: goto label_1eaee0;
        case 0x1eaee4u: goto label_1eaee4;
        case 0x1eaee8u: goto label_1eaee8;
        case 0x1eaeecu: goto label_1eaeec;
        case 0x1eaef0u: goto label_1eaef0;
        case 0x1eaef4u: goto label_1eaef4;
        case 0x1eaef8u: goto label_1eaef8;
        case 0x1eaefcu: goto label_1eaefc;
        case 0x1eaf00u: goto label_1eaf00;
        case 0x1eaf04u: goto label_1eaf04;
        case 0x1eaf08u: goto label_1eaf08;
        case 0x1eaf0cu: goto label_1eaf0c;
        case 0x1eaf10u: goto label_1eaf10;
        case 0x1eaf14u: goto label_1eaf14;
        case 0x1eaf18u: goto label_1eaf18;
        case 0x1eaf1cu: goto label_1eaf1c;
        case 0x1eaf20u: goto label_1eaf20;
        case 0x1eaf24u: goto label_1eaf24;
        case 0x1eaf28u: goto label_1eaf28;
        case 0x1eaf2cu: goto label_1eaf2c;
        case 0x1eaf30u: goto label_1eaf30;
        case 0x1eaf34u: goto label_1eaf34;
        case 0x1eaf38u: goto label_1eaf38;
        case 0x1eaf3cu: goto label_1eaf3c;
        case 0x1eaf40u: goto label_1eaf40;
        case 0x1eaf44u: goto label_1eaf44;
        case 0x1eaf48u: goto label_1eaf48;
        case 0x1eaf4cu: goto label_1eaf4c;
        case 0x1eaf50u: goto label_1eaf50;
        case 0x1eaf54u: goto label_1eaf54;
        case 0x1eaf58u: goto label_1eaf58;
        case 0x1eaf5cu: goto label_1eaf5c;
        case 0x1eaf60u: goto label_1eaf60;
        case 0x1eaf64u: goto label_1eaf64;
        case 0x1eaf68u: goto label_1eaf68;
        case 0x1eaf6cu: goto label_1eaf6c;
        case 0x1eaf70u: goto label_1eaf70;
        case 0x1eaf74u: goto label_1eaf74;
        case 0x1eaf78u: goto label_1eaf78;
        case 0x1eaf7cu: goto label_1eaf7c;
        case 0x1eaf80u: goto label_1eaf80;
        case 0x1eaf84u: goto label_1eaf84;
        case 0x1eaf88u: goto label_1eaf88;
        case 0x1eaf8cu: goto label_1eaf8c;
        case 0x1eaf90u: goto label_1eaf90;
        case 0x1eaf94u: goto label_1eaf94;
        case 0x1eaf98u: goto label_1eaf98;
        case 0x1eaf9cu: goto label_1eaf9c;
        case 0x1eafa0u: goto label_1eafa0;
        case 0x1eafa4u: goto label_1eafa4;
        case 0x1eafa8u: goto label_1eafa8;
        case 0x1eafacu: goto label_1eafac;
        case 0x1eafb0u: goto label_1eafb0;
        case 0x1eafb4u: goto label_1eafb4;
        case 0x1eafb8u: goto label_1eafb8;
        case 0x1eafbcu: goto label_1eafbc;
        case 0x1eafc0u: goto label_1eafc0;
        case 0x1eafc4u: goto label_1eafc4;
        case 0x1eafc8u: goto label_1eafc8;
        case 0x1eafccu: goto label_1eafcc;
        case 0x1eafd0u: goto label_1eafd0;
        case 0x1eafd4u: goto label_1eafd4;
        case 0x1eafd8u: goto label_1eafd8;
        case 0x1eafdcu: goto label_1eafdc;
        case 0x1eafe0u: goto label_1eafe0;
        case 0x1eafe4u: goto label_1eafe4;
        case 0x1eafe8u: goto label_1eafe8;
        case 0x1eafecu: goto label_1eafec;
        case 0x1eaff0u: goto label_1eaff0;
        case 0x1eaff4u: goto label_1eaff4;
        case 0x1eaff8u: goto label_1eaff8;
        case 0x1eaffcu: goto label_1eaffc;
        case 0x1eb000u: goto label_1eb000;
        case 0x1eb004u: goto label_1eb004;
        case 0x1eb008u: goto label_1eb008;
        case 0x1eb00cu: goto label_1eb00c;
        case 0x1eb010u: goto label_1eb010;
        case 0x1eb014u: goto label_1eb014;
        case 0x1eb018u: goto label_1eb018;
        case 0x1eb01cu: goto label_1eb01c;
        case 0x1eb020u: goto label_1eb020;
        case 0x1eb024u: goto label_1eb024;
        case 0x1eb028u: goto label_1eb028;
        case 0x1eb02cu: goto label_1eb02c;
        case 0x1eb030u: goto label_1eb030;
        case 0x1eb034u: goto label_1eb034;
        case 0x1eb038u: goto label_1eb038;
        case 0x1eb03cu: goto label_1eb03c;
        case 0x1eb040u: goto label_1eb040;
        case 0x1eb044u: goto label_1eb044;
        case 0x1eb048u: goto label_1eb048;
        case 0x1eb04cu: goto label_1eb04c;
        case 0x1eb050u: goto label_1eb050;
        case 0x1eb054u: goto label_1eb054;
        case 0x1eb058u: goto label_1eb058;
        case 0x1eb05cu: goto label_1eb05c;
        case 0x1eb060u: goto label_1eb060;
        case 0x1eb064u: goto label_1eb064;
        case 0x1eb068u: goto label_1eb068;
        case 0x1eb06cu: goto label_1eb06c;
        case 0x1eb070u: goto label_1eb070;
        case 0x1eb074u: goto label_1eb074;
        case 0x1eb078u: goto label_1eb078;
        case 0x1eb07cu: goto label_1eb07c;
        case 0x1eb080u: goto label_1eb080;
        case 0x1eb084u: goto label_1eb084;
        case 0x1eb088u: goto label_1eb088;
        case 0x1eb08cu: goto label_1eb08c;
        case 0x1eb090u: goto label_1eb090;
        case 0x1eb094u: goto label_1eb094;
        case 0x1eb098u: goto label_1eb098;
        case 0x1eb09cu: goto label_1eb09c;
        case 0x1eb0a0u: goto label_1eb0a0;
        case 0x1eb0a4u: goto label_1eb0a4;
        case 0x1eb0a8u: goto label_1eb0a8;
        case 0x1eb0acu: goto label_1eb0ac;
        case 0x1eb0b0u: goto label_1eb0b0;
        case 0x1eb0b4u: goto label_1eb0b4;
        case 0x1eb0b8u: goto label_1eb0b8;
        case 0x1eb0bcu: goto label_1eb0bc;
        case 0x1eb0c0u: goto label_1eb0c0;
        case 0x1eb0c4u: goto label_1eb0c4;
        case 0x1eb0c8u: goto label_1eb0c8;
        case 0x1eb0ccu: goto label_1eb0cc;
        case 0x1eb0d0u: goto label_1eb0d0;
        case 0x1eb0d4u: goto label_1eb0d4;
        case 0x1eb0d8u: goto label_1eb0d8;
        case 0x1eb0dcu: goto label_1eb0dc;
        case 0x1eb0e0u: goto label_1eb0e0;
        case 0x1eb0e4u: goto label_1eb0e4;
        case 0x1eb0e8u: goto label_1eb0e8;
        case 0x1eb0ecu: goto label_1eb0ec;
        case 0x1eb0f0u: goto label_1eb0f0;
        case 0x1eb0f4u: goto label_1eb0f4;
        case 0x1eb0f8u: goto label_1eb0f8;
        case 0x1eb0fcu: goto label_1eb0fc;
        case 0x1eb100u: goto label_1eb100;
        case 0x1eb104u: goto label_1eb104;
        case 0x1eb108u: goto label_1eb108;
        case 0x1eb10cu: goto label_1eb10c;
        case 0x1eb110u: goto label_1eb110;
        case 0x1eb114u: goto label_1eb114;
        case 0x1eb118u: goto label_1eb118;
        case 0x1eb11cu: goto label_1eb11c;
        case 0x1eb120u: goto label_1eb120;
        case 0x1eb124u: goto label_1eb124;
        case 0x1eb128u: goto label_1eb128;
        case 0x1eb12cu: goto label_1eb12c;
        case 0x1eb130u: goto label_1eb130;
        case 0x1eb134u: goto label_1eb134;
        case 0x1eb138u: goto label_1eb138;
        case 0x1eb13cu: goto label_1eb13c;
        case 0x1eb140u: goto label_1eb140;
        case 0x1eb144u: goto label_1eb144;
        case 0x1eb148u: goto label_1eb148;
        case 0x1eb14cu: goto label_1eb14c;
        case 0x1eb150u: goto label_1eb150;
        case 0x1eb154u: goto label_1eb154;
        case 0x1eb158u: goto label_1eb158;
        case 0x1eb15cu: goto label_1eb15c;
        case 0x1eb160u: goto label_1eb160;
        case 0x1eb164u: goto label_1eb164;
        case 0x1eb168u: goto label_1eb168;
        case 0x1eb16cu: goto label_1eb16c;
        case 0x1eb170u: goto label_1eb170;
        case 0x1eb174u: goto label_1eb174;
        case 0x1eb178u: goto label_1eb178;
        case 0x1eb17cu: goto label_1eb17c;
        case 0x1eb180u: goto label_1eb180;
        case 0x1eb184u: goto label_1eb184;
        case 0x1eb188u: goto label_1eb188;
        case 0x1eb18cu: goto label_1eb18c;
        case 0x1eb190u: goto label_1eb190;
        case 0x1eb194u: goto label_1eb194;
        case 0x1eb198u: goto label_1eb198;
        case 0x1eb19cu: goto label_1eb19c;
        case 0x1eb1a0u: goto label_1eb1a0;
        case 0x1eb1a4u: goto label_1eb1a4;
        case 0x1eb1a8u: goto label_1eb1a8;
        case 0x1eb1acu: goto label_1eb1ac;
        case 0x1eb1b0u: goto label_1eb1b0;
        case 0x1eb1b4u: goto label_1eb1b4;
        case 0x1eb1b8u: goto label_1eb1b8;
        case 0x1eb1bcu: goto label_1eb1bc;
        case 0x1eb1c0u: goto label_1eb1c0;
        case 0x1eb1c4u: goto label_1eb1c4;
        case 0x1eb1c8u: goto label_1eb1c8;
        case 0x1eb1ccu: goto label_1eb1cc;
        case 0x1eb1d0u: goto label_1eb1d0;
        case 0x1eb1d4u: goto label_1eb1d4;
        case 0x1eb1d8u: goto label_1eb1d8;
        case 0x1eb1dcu: goto label_1eb1dc;
        case 0x1eb1e0u: goto label_1eb1e0;
        case 0x1eb1e4u: goto label_1eb1e4;
        case 0x1eb1e8u: goto label_1eb1e8;
        case 0x1eb1ecu: goto label_1eb1ec;
        case 0x1eb1f0u: goto label_1eb1f0;
        case 0x1eb1f4u: goto label_1eb1f4;
        case 0x1eb1f8u: goto label_1eb1f8;
        case 0x1eb1fcu: goto label_1eb1fc;
        case 0x1eb200u: goto label_1eb200;
        case 0x1eb204u: goto label_1eb204;
        case 0x1eb208u: goto label_1eb208;
        case 0x1eb20cu: goto label_1eb20c;
        case 0x1eb210u: goto label_1eb210;
        case 0x1eb214u: goto label_1eb214;
        case 0x1eb218u: goto label_1eb218;
        case 0x1eb21cu: goto label_1eb21c;
        case 0x1eb220u: goto label_1eb220;
        case 0x1eb224u: goto label_1eb224;
        case 0x1eb228u: goto label_1eb228;
        case 0x1eb22cu: goto label_1eb22c;
        default: break;
    }

    ctx->pc = 0x1ea410u;

label_1ea410:
    // 0x1ea410: 0x27bdfc60  addiu       $sp, $sp, -0x3A0
    ctx->pc = 0x1ea410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966368));
label_1ea414:
    // 0x1ea414: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ea414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ea418:
    // 0x1ea418: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ea418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1ea41c:
    // 0x1ea41c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1ea41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1ea420:
    // 0x1ea420: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1ea420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1ea424:
    // 0x1ea424: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1ea424u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ea428:
    // 0x1ea428: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1ea428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1ea42c:
    // 0x1ea42c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1ea42cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ea430:
    // 0x1ea430: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ea430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1ea434:
    // 0x1ea434: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1ea434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1ea438:
    // 0x1ea438: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ea438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1ea43c:
    // 0x1ea43c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ea43cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ea440:
    // 0x1ea440: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ea440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ea444:
    // 0x1ea444: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ea444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ea448:
    // 0x1ea448: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ea448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ea44c:
    // 0x1ea44c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1ea44cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ea450:
    // 0x1ea450: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1ea450u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ea454:
    // 0x1ea454: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1ea454u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ea458:
    // 0x1ea458: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ea458u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ea45c:
    // 0x1ea45c: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1ea45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1ea460:
    // 0x1ea460: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ea460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ea464:
    // 0x1ea464: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1ea464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1ea468:
    // 0x1ea468: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1ea468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ea46c:
    // 0x1ea46c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1ea470:
    if (ctx->pc == 0x1EA470u) {
        ctx->pc = 0x1EA470u;
            // 0x1ea470: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1EA474u;
        goto label_1ea474;
    }
    ctx->pc = 0x1EA46Cu;
    {
        const bool branch_taken_0x1ea46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA46Cu;
            // 0x1ea470: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea46c) {
            ctx->pc = 0x1EA4A8u;
            goto label_1ea4a8;
        }
    }
    ctx->pc = 0x1EA474u;
label_1ea474:
    // 0x1ea474: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ea474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ea478:
    // 0x1ea478: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ea478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1ea47c:
    // 0x1ea47c: 0x2463ab10  addiu       $v1, $v1, -0x54F0
    ctx->pc = 0x1ea47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945552));
label_1ea480:
    // 0x1ea480: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ea480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1ea484:
    // 0x1ea484: 0x2442ab20  addiu       $v0, $v0, -0x54E0
    ctx->pc = 0x1ea484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945568));
label_1ea488:
    // 0x1ea488: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ea488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1ea48c:
    // 0x1ea48c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1ea48cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1ea490:
    // 0x1ea490: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ea490u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1ea494:
    // 0x1ea494: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ea494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ea498:
    // 0x1ea498: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ea498u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1ea49c:
    // 0x1ea49c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1ea49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1ea4a0:
    // 0x1ea4a0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1ea4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1ea4a4:
    // 0x1ea4a4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1ea4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1ea4a8:
    // 0x1ea4a8: 0xafb50320  sw          $s5, 0x320($sp)
    ctx->pc = 0x1ea4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 21));
label_1ea4ac:
    // 0x1ea4ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ea4acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ea4b0:
    // 0x1ea4b0: 0xafb30324  sw          $s3, 0x324($sp)
    ctx->pc = 0x1ea4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 19));
label_1ea4b4:
    // 0x1ea4b4: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x1ea4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_1ea4b8:
    // 0x1ea4b8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1ea4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1ea4bc:
    // 0x1ea4bc: 0xafa2032c  sw          $v0, 0x32C($sp)
    ctx->pc = 0x1ea4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 2));
label_1ea4c0:
    // 0x1ea4c0: 0xafb20328  sw          $s2, 0x328($sp)
    ctx->pc = 0x1ea4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 808), GPR_U32(ctx, 18));
label_1ea4c4:
    // 0x1ea4c4: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x1ea4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1ea4c8:
    // 0x1ea4c8: 0xc64c0028  lwc1        $f12, 0x28($s2)
    ctx->pc = 0x1ea4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ea4cc:
    // 0x1ea4cc: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x1ea4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ea4d0:
    // 0x1ea4d0: 0xc4a40044  lwc1        $f4, 0x44($a1)
    ctx->pc = 0x1ea4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ea4d4:
    // 0x1ea4d4: 0xc4a30054  lwc1        $f3, 0x54($a1)
    ctx->pc = 0x1ea4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ea4d8:
    // 0x1ea4d8: 0xc4a20048  lwc1        $f2, 0x48($a1)
    ctx->pc = 0x1ea4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea4dc:
    // 0x1ea4dc: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x1ea4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea4e0:
    // 0x1ea4e0: 0x46032201  sub.s       $f8, $f4, $f3
    ctx->pc = 0x1ea4e0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1ea4e4:
    // 0x1ea4e4: 0x46001181  sub.s       $f6, $f2, $f0
    ctx->pc = 0x1ea4e4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1ea4e8:
    // 0x1ea4e8: 0xc4a3005c  lwc1        $f3, 0x5C($a1)
    ctx->pc = 0x1ea4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ea4ec:
    // 0x1ea4ec: 0xc4a4004c  lwc1        $f4, 0x4C($a1)
    ctx->pc = 0x1ea4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ea4f0:
    // 0x1ea4f0: 0xc4c20050  lwc1        $f2, 0x50($a2)
    ctx->pc = 0x1ea4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea4f4:
    // 0x1ea4f4: 0xc4c00040  lwc1        $f0, 0x40($a2)
    ctx->pc = 0x1ea4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea4f8:
    // 0x1ea4f8: 0x460361c2  mul.s       $f7, $f12, $f3
    ctx->pc = 0x1ea4f8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_1ea4fc:
    // 0x1ea4fc: 0x46032141  sub.s       $f5, $f4, $f3
    ctx->pc = 0x1ea4fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1ea500:
    // 0x1ea500: 0x460012c1  sub.s       $f11, $f2, $f0
    ctx->pc = 0x1ea500u;
    ctx->f[11] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1ea504:
    // 0x1ea504: 0x46083902  mul.s       $f4, $f7, $f8
    ctx->pc = 0x1ea504u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
label_1ea508:
    // 0x1ea508: 0x460638c2  mul.s       $f3, $f7, $f6
    ctx->pc = 0x1ea508u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
label_1ea50c:
    // 0x1ea50c: 0x46053882  mul.s       $f2, $f7, $f5
    ctx->pc = 0x1ea50cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_1ea510:
    // 0x1ea510: 0xc4c80054  lwc1        $f8, 0x54($a2)
    ctx->pc = 0x1ea510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1ea514:
    // 0x1ea514: 0xc4c60044  lwc1        $f6, 0x44($a2)
    ctx->pc = 0x1ea514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ea518:
    // 0x1ea518: 0xc4c50058  lwc1        $f5, 0x58($a2)
    ctx->pc = 0x1ea518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ea51c:
    // 0x1ea51c: 0xc4c00048  lwc1        $f0, 0x48($a2)
    ctx->pc = 0x1ea51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea520:
    // 0x1ea520: 0x46064281  sub.s       $f10, $f8, $f6
    ctx->pc = 0x1ea520u;
    ctx->f[10] = FPU_SUB_S(ctx->f[8], ctx->f[6]);
label_1ea524:
    // 0x1ea524: 0x46002a41  sub.s       $f9, $f5, $f0
    ctx->pc = 0x1ea524u;
    ctx->f[9] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_1ea528:
    // 0x1ea528: 0xc4c8005c  lwc1        $f8, 0x5C($a2)
    ctx->pc = 0x1ea528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1ea52c:
    // 0x1ea52c: 0xc4c0004c  lwc1        $f0, 0x4C($a2)
    ctx->pc = 0x1ea52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea530:
    // 0x1ea530: 0xc4a50040  lwc1        $f5, 0x40($a1)
    ctx->pc = 0x1ea530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ea534:
    // 0x1ea534: 0x46086182  mul.s       $f6, $f12, $f8
    ctx->pc = 0x1ea534u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
label_1ea538:
    // 0x1ea538: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x1ea538u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_1ea53c:
    // 0x1ea53c: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x1ea53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea540:
    // 0x1ea540: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x1ea540u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_1ea544:
    // 0x1ea544: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x1ea544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1ea548:
    // 0x1ea548: 0xe7a00380  swc1        $f0, 0x380($sp)
    ctx->pc = 0x1ea548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
label_1ea54c:
    // 0x1ea54c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x1ea54cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ea550:
    // 0x1ea550: 0x460b301c  madd.s      $f0, $f6, $f11
    ctx->pc = 0x1ea550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[11]));
label_1ea554:
    // 0x1ea554: 0xe7a00380  swc1        $f0, 0x380($sp)
    ctx->pc = 0x1ea554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
label_1ea558:
    // 0x1ea558: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x1ea558u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1ea55c:
    // 0x1ea55c: 0x460a301c  madd.s      $f0, $f6, $f10
    ctx->pc = 0x1ea55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[10]));
label_1ea560:
    // 0x1ea560: 0xe7a40384  swc1        $f4, 0x384($sp)
    ctx->pc = 0x1ea560u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 900), bits); }
label_1ea564:
    // 0x1ea564: 0xe7a00384  swc1        $f0, 0x384($sp)
    ctx->pc = 0x1ea564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 900), bits); }
label_1ea568:
    // 0x1ea568: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x1ea568u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1ea56c:
    // 0x1ea56c: 0x4609301c  madd.s      $f0, $f6, $f9
    ctx->pc = 0x1ea56cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[9]));
label_1ea570:
    // 0x1ea570: 0xe7a30388  swc1        $f3, 0x388($sp)
    ctx->pc = 0x1ea570u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 904), bits); }
label_1ea574:
    // 0x1ea574: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1ea574u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1ea578:
    // 0x1ea578: 0xe7a00388  swc1        $f0, 0x388($sp)
    ctx->pc = 0x1ea578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 904), bits); }
label_1ea57c:
    // 0x1ea57c: 0xe7a2038c  swc1        $f2, 0x38C($sp)
    ctx->pc = 0x1ea57cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 908), bits); }
label_1ea580:
    // 0x1ea580: 0x4608301c  madd.s      $f0, $f6, $f8
    ctx->pc = 0x1ea580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[8]));
label_1ea584:
    // 0x1ea584: 0xe7a0038c  swc1        $f0, 0x38C($sp)
    ctx->pc = 0x1ea584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 908), bits); }
label_1ea588:
    // 0x1ea588: 0xc4a1009c  lwc1        $f1, 0x9C($a1)
    ctx->pc = 0x1ea588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea58c:
    // 0x1ea58c: 0xc4c0009c  lwc1        $f0, 0x9C($a2)
    ctx->pc = 0x1ea58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea590:
    // 0x1ea590: 0xc4a200a0  lwc1        $f2, 0xA0($a1)
    ctx->pc = 0x1ea590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea594:
    // 0x1ea594: 0x460138c2  mul.s       $f3, $f7, $f1
    ctx->pc = 0x1ea594u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_1ea598:
    // 0x1ea598: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x1ea598u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_1ea59c:
    // 0x1ea59c: 0xc4c000a0  lwc1        $f0, 0xA0($a2)
    ctx->pc = 0x1ea59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea5a0:
    // 0x1ea5a0: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x1ea5a0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea5a4:
    // 0x1ea5a4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1ea5a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1ea5a8:
    // 0x1ea5a8: 0xc0a45a0  jal         func_291680
label_1ea5ac:
    if (ctx->pc == 0x1EA5ACu) {
        ctx->pc = 0x1EA5ACu;
            // 0x1ea5ac: 0xe7a0038c  swc1        $f0, 0x38C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 908), bits); }
        ctx->pc = 0x1EA5B0u;
        goto label_1ea5b0;
    }
    ctx->pc = 0x1EA5A8u;
    SET_GPR_U32(ctx, 31, 0x1EA5B0u);
    ctx->pc = 0x1EA5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA5A8u;
            // 0x1ea5ac: 0xe7a0038c  swc1        $f0, 0x38C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 908), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5B0u; }
        if (ctx->pc != 0x1EA5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5B0u; }
        if (ctx->pc != 0x1EA5B0u) { return; }
    }
    ctx->pc = 0x1EA5B0u;
label_1ea5b0:
    // 0x1ea5b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ea5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1ea5b4:
    // 0x1ea5b4: 0x27a5011c  addiu       $a1, $sp, 0x11C
    ctx->pc = 0x1ea5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_1ea5b8:
    // 0x1ea5b8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1ea5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1ea5bc:
    // 0x1ea5bc: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x1ea5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
label_1ea5c0:
    // 0x1ea5c0: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x1ea5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_1ea5c4:
    // 0x1ea5c4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ea5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1ea5c8:
    // 0x1ea5c8: 0x8c44ab08  lw          $a0, -0x54F8($v0)
    ctx->pc = 0x1ea5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945544)));
label_1ea5cc:
    // 0x1ea5cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ea5ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea5d0:
    // 0x1ea5d0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1ea5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ea5d4:
    // 0x1ea5d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea5d8:
    // 0x1ea5d8: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x1ea5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
label_1ea5dc:
    // 0x1ea5dc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ea5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ea5e0:
    // 0x1ea5e0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ea5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1ea5e4:
    // 0x1ea5e4: 0x27a50330  addiu       $a1, $sp, 0x330
    ctx->pc = 0x1ea5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_1ea5e8:
    // 0x1ea5e8: 0xc0a4544  jal         func_291510
label_1ea5ec:
    if (ctx->pc == 0x1EA5ECu) {
        ctx->pc = 0x1EA5ECu;
            // 0x1ea5ec: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1EA5F0u;
        goto label_1ea5f0;
    }
    ctx->pc = 0x1EA5E8u;
    SET_GPR_U32(ctx, 31, 0x1EA5F0u);
    ctx->pc = 0x1EA5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA5E8u;
            // 0x1ea5ec: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291510u;
    if (runtime->hasFunction(0x291510u)) {
        auto targetFn = runtime->lookupFunction(0x291510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5F0u; }
        if (ctx->pc != 0x1EA5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291510_0x291510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5F0u; }
        if (ctx->pc != 0x1EA5F0u) { return; }
    }
    ctx->pc = 0x1EA5F0u;
label_1ea5f0:
    // 0x1ea5f0: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x1ea5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ea5f4:
    // 0x1ea5f4: 0xc7a70384  lwc1        $f7, 0x384($sp)
    ctx->pc = 0x1ea5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1ea5f8:
    // 0x1ea5f8: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1ea5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1ea5fc:
    // 0x1ea5fc: 0xc7a80380  lwc1        $f8, 0x380($sp)
    ctx->pc = 0x1ea5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1ea600:
    // 0x1ea600: 0xc7a60388  lwc1        $f6, 0x388($sp)
    ctx->pc = 0x1ea600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ea604:
    // 0x1ea604: 0x8eb10008  lw          $s1, 0x8($s5)
    ctx->pc = 0x1ea604u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1ea608:
    // 0x1ea608: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1ea608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea60c:
    // 0x1ea60c: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1ea60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_1ea610:
    // 0x1ea610: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1ea610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea614:
    // 0x1ea614: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x1ea614u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_1ea618:
    // 0x1ea618: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1ea618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea61c:
    // 0x1ea61c: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1ea61cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1ea620:
    // 0x1ea620: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x1ea620u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
label_1ea624:
    // 0x1ea624: 0x4602301c  madd.s      $f0, $f6, $f2
    ctx->pc = 0x1ea624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
label_1ea628:
    // 0x1ea628: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ea628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1ea62c:
    // 0x1ea62c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1ea62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea630:
    // 0x1ea630: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1ea630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ea634:
    // 0x1ea634: 0xc6040018  lwc1        $f4, 0x18($s0)
    ctx->pc = 0x1ea634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ea638:
    // 0x1ea638: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1ea638u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1ea63c:
    // 0x1ea63c: 0x4603401e  madda.s     $f8, $f3
    ctx->pc = 0x1ea63cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
label_1ea640:
    // 0x1ea640: 0x4604301c  madd.s      $f0, $f6, $f4
    ctx->pc = 0x1ea640u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_1ea644:
    // 0x1ea644: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1ea644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1ea648:
    // 0x1ea648: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1ea648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea64c:
    // 0x1ea64c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1ea64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea650:
    // 0x1ea650: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x1ea650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea654:
    // 0x1ea654: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1ea654u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1ea658:
    // 0x1ea658: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x1ea658u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
label_1ea65c:
    // 0x1ea65c: 0x4602301c  madd.s      $f0, $f6, $f2
    ctx->pc = 0x1ea65cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
label_1ea660:
    // 0x1ea660: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1ea660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ea664:
    // 0x1ea664: 0x10400117  beqz        $v0, . + 4 + (0x117 << 2)
label_1ea668:
    if (ctx->pc == 0x1EA668u) {
        ctx->pc = 0x1EA668u;
            // 0x1ea668: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->pc = 0x1EA66Cu;
        goto label_1ea66c;
    }
    ctx->pc = 0x1EA664u;
    {
        const bool branch_taken_0x1ea664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA664u;
            // 0x1ea668: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea664) {
            ctx->pc = 0x1EAAC4u;
            goto label_1eaac4;
        }
    }
    ctx->pc = 0x1EA66Cu;
label_1ea66c:
    // 0x1ea66c: 0xc603009c  lwc1        $f3, 0x9C($s0)
    ctx->pc = 0x1ea66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ea670:
    // 0x1ea670: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1ea670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1ea674:
    // 0x1ea674: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ea674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1ea678:
    // 0x1ea678: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1ea678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1ea67c:
    // 0x1ea67c: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x1ea67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea680:
    // 0x1ea680: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ea680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ea684:
    // 0x1ea684: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x1ea684u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_1ea688:
    // 0x1ea688: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ea688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ea68c:
    // 0x1ea68c: 0x2615009c  addiu       $s5, $s0, 0x9C
    ctx->pc = 0x1ea68cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
label_1ea690:
    // 0x1ea690: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1ea690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1ea694:
    // 0x1ea694: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1ea694u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea698:
    // 0x1ea698: 0xc621009c  lwc1        $f1, 0x9C($s1)
    ctx->pc = 0x1ea698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea69c:
    // 0x1ea69c: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x1ea69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea6a0:
    // 0x1ea6a0: 0x46152818  adda.s      $f5, $f21
    ctx->pc = 0x1ea6a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[21]);
label_1ea6a4:
    // 0x1ea6a4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1ea6a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1ea6a8:
    // 0x1ea6a8: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x1ea6a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_1ea6ac:
    // 0x1ea6ac: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1ea6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea6b0:
    // 0x1ea6b0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1ea6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ea6b4:
    // 0x1ea6b4: 0x46002818  adda.s      $f5, $f0
    ctx->pc = 0x1ea6b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1ea6b8:
    // 0x1ea6b8: 0x320f809  jalr        $t9
label_1ea6bc:
    if (ctx->pc == 0x1EA6BCu) {
        ctx->pc = 0x1EA6BCu;
            // 0x1ea6bc: 0x4602a31c  madd.s      $f12, $f20, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
        ctx->pc = 0x1EA6C0u;
        goto label_1ea6c0;
    }
    ctx->pc = 0x1EA6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EA6C0u);
        ctx->pc = 0x1EA6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA6B8u;
            // 0x1ea6bc: 0x4602a31c  madd.s      $f12, $f20, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EA6C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EA6C0u; }
            if (ctx->pc != 0x1EA6C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1EA6C0u;
label_1ea6c0:
    // 0x1ea6c0: 0xc62100a0  lwc1        $f1, 0xA0($s1)
    ctx->pc = 0x1ea6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea6c4:
    // 0x1ea6c4: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1ea6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_1ea6c8:
    // 0x1ea6c8: 0xc6450004  lwc1        $f5, 0x4($s2)
    ctx->pc = 0x1ea6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ea6cc:
    // 0x1ea6cc: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1ea6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ea6d0:
    // 0x1ea6d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ea6d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ea6d4:
    // 0x1ea6d4: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1ea6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_1ea6d8:
    // 0x1ea6d8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1ea6d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ea6dc:
    // 0x1ea6dc: 0x46016018  adda.s      $f12, $f1
    ctx->pc = 0x1ea6dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_1ea6e0:
    // 0x1ea6e0: 0x4605105c  madd.s      $f1, $f2, $f5
    ctx->pc = 0x1ea6e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
label_1ea6e4:
    // 0x1ea6e4: 0x4601aac0  add.s       $f11, $f21, $f1
    ctx->pc = 0x1ea6e4u;
    ctx->f[11] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_1ea6e8:
    // 0x1ea6e8: 0xc6240050  lwc1        $f4, 0x50($s1)
    ctx->pc = 0x1ea6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ea6ec:
    // 0x1ea6ec: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x1ea6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea6f0:
    // 0x1ea6f0: 0xc6220058  lwc1        $f2, 0x58($s1)
    ctx->pc = 0x1ea6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea6f4:
    // 0x1ea6f4: 0xc6260054  lwc1        $f6, 0x54($s1)
    ctx->pc = 0x1ea6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ea6f8:
    // 0x1ea6f8: 0x46012281  sub.s       $f10, $f4, $f1
    ctx->pc = 0x1ea6f8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_1ea6fc:
    // 0x1ea6fc: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x1ea6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea700:
    // 0x1ea700: 0xc4640034  lwc1        $f4, 0x34($v1)
    ctx->pc = 0x1ea700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ea704:
    // 0x1ea704: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x1ea704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ea708:
    // 0x1ea708: 0x46011201  sub.s       $f8, $f2, $f1
    ctx->pc = 0x1ea708u;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ea70c:
    // 0x1ea70c: 0x46043241  sub.s       $f9, $f6, $f4
    ctx->pc = 0x1ea70cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
label_1ea710:
    // 0x1ea710: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1ea710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea714:
    // 0x1ea714: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x1ea714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ea718:
    // 0x1ea718: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x1ea718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea71c:
    // 0x1ea71c: 0x4601481a  mula.s      $f9, $f1
    ctx->pc = 0x1ea71cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_1ea720:
    // 0x1ea720: 0x4604501e  madda.s     $f10, $f4
    ctx->pc = 0x1ea720u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[4]));
label_1ea724:
    // 0x1ea724: 0x460541dc  madd.s      $f7, $f8, $f5
    ctx->pc = 0x1ea724u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[5]));
label_1ea728:
    // 0x1ea728: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1ea728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea72c:
    // 0x1ea72c: 0xc4660018  lwc1        $f6, 0x18($v1)
    ctx->pc = 0x1ea72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ea730:
    // 0x1ea730: 0xc4640020  lwc1        $f4, 0x20($v1)
    ctx->pc = 0x1ea730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ea734:
    // 0x1ea734: 0x4601481a  mula.s      $f9, $f1
    ctx->pc = 0x1ea734u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_1ea738:
    // 0x1ea738: 0x4602501e  madda.s     $f10, $f2
    ctx->pc = 0x1ea738u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[2]));
label_1ea73c:
    // 0x1ea73c: 0x4606409c  madd.s      $f2, $f8, $f6
    ctx->pc = 0x1ea73cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[6]));
label_1ea740:
    // 0x1ea740: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1ea740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea744:
    // 0x1ea744: 0xc4650028  lwc1        $f5, 0x28($v1)
    ctx->pc = 0x1ea744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ea748:
    // 0x1ea748: 0x460b3b40  add.s       $f13, $f7, $f11
    ctx->pc = 0x1ea748u;
    ctx->f[13] = FPU_ADD_S(ctx->f[7], ctx->f[11]);
label_1ea74c:
    // 0x1ea74c: 0x4601481a  mula.s      $f9, $f1
    ctx->pc = 0x1ea74cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_1ea750:
    // 0x1ea750: 0x4604501e  madda.s     $f10, $f4
    ctx->pc = 0x1ea750u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[4]));
label_1ea754:
    // 0x1ea754: 0x4605405c  madd.s      $f1, $f8, $f5
    ctx->pc = 0x1ea754u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[5]));
label_1ea758:
    // 0x1ea758: 0x460b3901  sub.s       $f4, $f7, $f11
    ctx->pc = 0x1ea758u;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[11]);
label_1ea75c:
    // 0x1ea75c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ea75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea760:
    // 0x1ea760: 0xe7a70090  swc1        $f7, 0x90($sp)
    ctx->pc = 0x1ea760u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1ea764:
    // 0x1ea764: 0x460b1200  add.s       $f8, $f2, $f11
    ctx->pc = 0x1ea764u;
    ctx->f[8] = FPU_ADD_S(ctx->f[2], ctx->f[11]);
label_1ea768:
    // 0x1ea768: 0x460b0a40  add.s       $f9, $f1, $f11
    ctx->pc = 0x1ea768u;
    ctx->f[9] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
label_1ea76c:
    // 0x1ea76c: 0x460b6280  add.s       $f10, $f12, $f11
    ctx->pc = 0x1ea76cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[12], ctx->f[11]);
label_1ea770:
    // 0x1ea770: 0x460b61c1  sub.s       $f7, $f12, $f11
    ctx->pc = 0x1ea770u;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[11]);
label_1ea774:
    // 0x1ea774: 0x460b1141  sub.s       $f5, $f2, $f11
    ctx->pc = 0x1ea774u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
label_1ea778:
    // 0x1ea778: 0x460b0981  sub.s       $f6, $f1, $f11
    ctx->pc = 0x1ea778u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
label_1ea77c:
    // 0x1ea77c: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x1ea77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ea780:
    // 0x1ea780: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1ea780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea784:
    // 0x1ea784: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x1ea784u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1ea788:
    // 0x1ea788: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1ea78c:
    if (ctx->pc == 0x1EA78Cu) {
        ctx->pc = 0x1EA78Cu;
            // 0x1ea78c: 0xe7a10098  swc1        $f1, 0x98($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x1EA790u;
        goto label_1ea790;
    }
    ctx->pc = 0x1EA788u;
    {
        const bool branch_taken_0x1ea788 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA788u;
            // 0x1ea78c: 0xe7a10098  swc1        $f1, 0x98($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea788) {
            ctx->pc = 0x1EA798u;
            goto label_1ea798;
        }
    }
    ctx->pc = 0x1EA790u;
label_1ea790:
    // 0x1ea790: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea794:
    if (ctx->pc == 0x1EA794u) {
        ctx->pc = 0x1EA794u;
            // 0x1ea794: 0xc7a000b4  lwc1        $f0, 0xB4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1EA798u;
        goto label_1ea798;
    }
    ctx->pc = 0x1EA790u;
    {
        const bool branch_taken_0x1ea790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA790u;
            // 0x1ea794: 0xc7a000b4  lwc1        $f0, 0xB4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea790) {
            ctx->pc = 0x1EA7A0u;
            goto label_1ea7a0;
        }
    }
    ctx->pc = 0x1EA798u;
label_1ea798:
    // 0x1ea798: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x1ea798u;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
label_1ea79c:
    // 0x1ea79c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ea79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea7a0:
    // 0x1ea7a0: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x1ea7a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea7a4:
    // 0x1ea7a4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1ea7a8:
    if (ctx->pc == 0x1EA7A8u) {
        ctx->pc = 0x1EA7A8u;
            // 0x1ea7a8: 0xe7a300b0  swc1        $f3, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->pc = 0x1EA7ACu;
        goto label_1ea7ac;
    }
    ctx->pc = 0x1EA7A4u;
    {
        const bool branch_taken_0x1ea7a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7A4u;
            // 0x1ea7a8: 0xe7a300b0  swc1        $f3, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7a4) {
            ctx->pc = 0x1EA7B4u;
            goto label_1ea7b4;
        }
    }
    ctx->pc = 0x1EA7ACu;
label_1ea7ac:
    // 0x1ea7ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea7b0:
    if (ctx->pc == 0x1EA7B0u) {
        ctx->pc = 0x1EA7B0u;
            // 0x1ea7b0: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x1EA7B4u;
        goto label_1ea7b4;
    }
    ctx->pc = 0x1EA7ACu;
    {
        const bool branch_taken_0x1ea7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7ACu;
            // 0x1ea7b0: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7ac) {
            ctx->pc = 0x1EA7BCu;
            goto label_1ea7bc;
        }
    }
    ctx->pc = 0x1EA7B4u;
label_1ea7b4:
    // 0x1ea7b4: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x1ea7b4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
label_1ea7b8:
    // 0x1ea7b8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ea7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1ea7bc:
    // 0x1ea7bc: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1ea7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea7c0:
    // 0x1ea7c0: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x1ea7c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea7c4:
    // 0x1ea7c4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_1ea7c8:
    if (ctx->pc == 0x1EA7C8u) {
        ctx->pc = 0x1EA7C8u;
            // 0x1ea7c8: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->pc = 0x1EA7CCu;
        goto label_1ea7cc;
    }
    ctx->pc = 0x1EA7C4u;
    {
        const bool branch_taken_0x1ea7c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea7c4) {
            ctx->pc = 0x1EA7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7C4u;
            // 0x1ea7c8: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA7D8u;
            goto label_1ea7d8;
        }
    }
    ctx->pc = 0x1EA7CCu;
label_1ea7cc:
    // 0x1ea7cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea7d0:
    if (ctx->pc == 0x1EA7D0u) {
        ctx->pc = 0x1EA7D0u;
            // 0x1ea7d0: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->pc = 0x1EA7D4u;
        goto label_1ea7d4;
    }
    ctx->pc = 0x1EA7CCu;
    {
        const bool branch_taken_0x1ea7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7CCu;
            // 0x1ea7d0: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7cc) {
            ctx->pc = 0x1EA7DCu;
            goto label_1ea7dc;
        }
    }
    ctx->pc = 0x1EA7D4u;
label_1ea7d4:
    // 0x1ea7d4: 0x46003006  mov.s       $f0, $f6
    ctx->pc = 0x1ea7d4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[6]);
label_1ea7d8:
    // 0x1ea7d8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1ea7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1ea7dc:
    // 0x1ea7dc: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1ea7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea7e0:
    // 0x1ea7e0: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x1ea7e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea7e4:
    // 0x1ea7e4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_1ea7e8:
    if (ctx->pc == 0x1EA7E8u) {
        ctx->pc = 0x1EA7E8u;
            // 0x1ea7e8: 0x46003806  mov.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[7]);
        ctx->pc = 0x1EA7ECu;
        goto label_1ea7ec;
    }
    ctx->pc = 0x1EA7E4u;
    {
        const bool branch_taken_0x1ea7e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea7e4) {
            ctx->pc = 0x1EA7E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7E4u;
            // 0x1ea7e8: 0x46003806  mov.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA7F8u;
            goto label_1ea7f8;
        }
    }
    ctx->pc = 0x1EA7ECu;
label_1ea7ec:
    // 0x1ea7ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea7f0:
    if (ctx->pc == 0x1EA7F0u) {
        ctx->pc = 0x1EA7F0u;
            // 0x1ea7f0: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->pc = 0x1EA7F4u;
        goto label_1ea7f4;
    }
    ctx->pc = 0x1EA7ECu;
    {
        const bool branch_taken_0x1ea7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7ECu;
            // 0x1ea7f0: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7ec) {
            ctx->pc = 0x1EA7FCu;
            goto label_1ea7fc;
        }
    }
    ctx->pc = 0x1EA7F4u;
label_1ea7f4:
    // 0x1ea7f4: 0x46003806  mov.s       $f0, $f7
    ctx->pc = 0x1ea7f4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[7]);
label_1ea7f8:
    // 0x1ea7f8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1ea7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1ea7fc:
    // 0x1ea7fc: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1ea7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea800:
    // 0x1ea800: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x1ea800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea804:
    // 0x1ea804: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1ea808:
    if (ctx->pc == 0x1EA808u) {
        ctx->pc = 0x1EA808u;
            // 0x1ea808: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1EA80Cu;
        goto label_1ea80c;
    }
    ctx->pc = 0x1EA804u;
    {
        const bool branch_taken_0x1ea804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea804) {
            ctx->pc = 0x1EA808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA804u;
            // 0x1ea808: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA818u;
            goto label_1ea818;
        }
    }
    ctx->pc = 0x1EA80Cu;
label_1ea80c:
    // 0x1ea80c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea810:
    if (ctx->pc == 0x1EA810u) {
        ctx->pc = 0x1EA810u;
            // 0x1ea810: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->pc = 0x1EA814u;
        goto label_1ea814;
    }
    ctx->pc = 0x1EA80Cu;
    {
        const bool branch_taken_0x1ea80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA80Cu;
            // 0x1ea810: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea80c) {
            ctx->pc = 0x1EA81Cu;
            goto label_1ea81c;
        }
    }
    ctx->pc = 0x1EA814u;
label_1ea814:
    // 0x1ea814: 0x46006806  mov.s       $f0, $f13
    ctx->pc = 0x1ea814u;
    ctx->f[0] = FPU_MOV_S(ctx->f[13]);
label_1ea818:
    // 0x1ea818: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1ea818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1ea81c:
    // 0x1ea81c: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1ea81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea820:
    // 0x1ea820: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x1ea820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea824:
    // 0x1ea824: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1ea828:
    if (ctx->pc == 0x1EA828u) {
        ctx->pc = 0x1EA828u;
            // 0x1ea828: 0x46004006  mov.s       $f0, $f8 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[8]);
        ctx->pc = 0x1EA82Cu;
        goto label_1ea82c;
    }
    ctx->pc = 0x1EA824u;
    {
        const bool branch_taken_0x1ea824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea824) {
            ctx->pc = 0x1EA828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA824u;
            // 0x1ea828: 0x46004006  mov.s       $f0, $f8 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA838u;
            goto label_1ea838;
        }
    }
    ctx->pc = 0x1EA82Cu;
label_1ea82c:
    // 0x1ea82c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea830:
    if (ctx->pc == 0x1EA830u) {
        ctx->pc = 0x1EA830u;
            // 0x1ea830: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->pc = 0x1EA834u;
        goto label_1ea834;
    }
    ctx->pc = 0x1EA82Cu;
    {
        const bool branch_taken_0x1ea82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA82Cu;
            // 0x1ea830: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea82c) {
            ctx->pc = 0x1EA83Cu;
            goto label_1ea83c;
        }
    }
    ctx->pc = 0x1EA834u;
label_1ea834:
    // 0x1ea834: 0x46004006  mov.s       $f0, $f8
    ctx->pc = 0x1ea834u;
    ctx->f[0] = FPU_MOV_S(ctx->f[8]);
label_1ea838:
    // 0x1ea838: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1ea838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1ea83c:
    // 0x1ea83c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1ea83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea840:
    // 0x1ea840: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x1ea840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea844:
    // 0x1ea844: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1ea848:
    if (ctx->pc == 0x1EA848u) {
        ctx->pc = 0x1EA848u;
            // 0x1ea848: 0x46004806  mov.s       $f0, $f9 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[9]);
        ctx->pc = 0x1EA84Cu;
        goto label_1ea84c;
    }
    ctx->pc = 0x1EA844u;
    {
        const bool branch_taken_0x1ea844 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea844) {
            ctx->pc = 0x1EA848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA844u;
            // 0x1ea848: 0x46004806  mov.s       $f0, $f9 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA858u;
            goto label_1ea858;
        }
    }
    ctx->pc = 0x1EA84Cu;
label_1ea84c:
    // 0x1ea84c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea850:
    if (ctx->pc == 0x1EA850u) {
        ctx->pc = 0x1EA850u;
            // 0x1ea850: 0xc7a900cc  lwc1        $f9, 0xCC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->pc = 0x1EA854u;
        goto label_1ea854;
    }
    ctx->pc = 0x1EA84Cu;
    {
        const bool branch_taken_0x1ea84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA84Cu;
            // 0x1ea850: 0xc7a900cc  lwc1        $f9, 0xCC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea84c) {
            ctx->pc = 0x1EA85Cu;
            goto label_1ea85c;
        }
    }
    ctx->pc = 0x1EA854u;
label_1ea854:
    // 0x1ea854: 0x46004806  mov.s       $f0, $f9
    ctx->pc = 0x1ea854u;
    ctx->f[0] = FPU_MOV_S(ctx->f[9]);
label_1ea858:
    // 0x1ea858: 0xc7a900cc  lwc1        $f9, 0xCC($sp)
    ctx->pc = 0x1ea858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1ea85c:
    // 0x1ea85c: 0x460a4834  c.lt.s      $f9, $f10
    ctx->pc = 0x1ea85cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea860:
    // 0x1ea860: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1ea864:
    if (ctx->pc == 0x1EA864u) {
        ctx->pc = 0x1EA864u;
            // 0x1ea864: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x1EA868u;
        goto label_1ea868;
    }
    ctx->pc = 0x1EA860u;
    {
        const bool branch_taken_0x1ea860 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA860u;
            // 0x1ea864: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea860) {
            ctx->pc = 0x1EA870u;
            goto label_1ea870;
        }
    }
    ctx->pc = 0x1EA868u;
label_1ea868:
    // 0x1ea868: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea86c:
    if (ctx->pc == 0x1EA86Cu) {
        ctx->pc = 0x1EA86Cu;
            // 0x1ea86c: 0xe7a900cc  swc1        $f9, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->pc = 0x1EA870u;
        goto label_1ea870;
    }
    ctx->pc = 0x1EA868u;
    {
        const bool branch_taken_0x1ea868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA868u;
            // 0x1ea86c: 0xe7a900cc  swc1        $f9, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea868) {
            ctx->pc = 0x1EA878u;
            goto label_1ea878;
        }
    }
    ctx->pc = 0x1EA870u;
label_1ea870:
    // 0x1ea870: 0x46005246  mov.s       $f9, $f10
    ctx->pc = 0x1ea870u;
    ctx->f[9] = FPU_MOV_S(ctx->f[10]);
label_1ea874:
    // 0x1ea874: 0xe7a900cc  swc1        $f9, 0xCC($sp)
    ctx->pc = 0x1ea874u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1ea878:
    // 0x1ea878: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x1ea878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ea87c:
    // 0x1ea87c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ea880:
    // 0x1ea880: 0xc7a600c0  lwc1        $f6, 0xC0($sp)
    ctx->pc = 0x1ea880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ea884:
    // 0x1ea884: 0xc7a500b0  lwc1        $f5, 0xB0($sp)
    ctx->pc = 0x1ea884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ea888:
    // 0x1ea888: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1ea888u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea88c:
    // 0x1ea88c: 0x460530c1  sub.s       $f3, $f6, $f5
    ctx->pc = 0x1ea88cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_1ea890:
    // 0x1ea890: 0xc7a600bc  lwc1        $f6, 0xBC($sp)
    ctx->pc = 0x1ea890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ea894:
    // 0x1ea894: 0xc7a800c4  lwc1        $f8, 0xC4($sp)
    ctx->pc = 0x1ea894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1ea898:
    // 0x1ea898: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x1ea898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ea89c:
    // 0x1ea89c: 0xc7a700c8  lwc1        $f7, 0xC8($sp)
    ctx->pc = 0x1ea89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1ea8a0:
    // 0x1ea8a0: 0xc7a500b8  lwc1        $f5, 0xB8($sp)
    ctx->pc = 0x1ea8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ea8a4:
    // 0x1ea8a4: 0x46044101  sub.s       $f4, $f8, $f4
    ctx->pc = 0x1ea8a4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
label_1ea8a8:
    // 0x1ea8a8: 0x46053941  sub.s       $f5, $f7, $f5
    ctx->pc = 0x1ea8a8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
label_1ea8ac:
    // 0x1ea8ac: 0x45010027  bc1t        . + 4 + (0x27 << 2)
label_1ea8b0:
    if (ctx->pc == 0x1EA8B0u) {
        ctx->pc = 0x1EA8B0u;
            // 0x1ea8b0: 0x46064981  sub.s       $f6, $f9, $f6 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
        ctx->pc = 0x1EA8B4u;
        goto label_1ea8b4;
    }
    ctx->pc = 0x1EA8ACu;
    {
        const bool branch_taken_0x1ea8ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA8ACu;
            // 0x1ea8b0: 0x46064981  sub.s       $f6, $f9, $f6 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8ac) {
            ctx->pc = 0x1EA94Cu;
            goto label_1ea94c;
        }
    }
    ctx->pc = 0x1EA8B4u;
label_1ea8b4:
    // 0x1ea8b4: 0xc60c0084  lwc1        $f12, 0x84($s0)
    ctx->pc = 0x1ea8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ea8b8:
    // 0x1ea8b8: 0xc60b0088  lwc1        $f11, 0x88($s0)
    ctx->pc = 0x1ea8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1ea8bc:
    // 0x1ea8bc: 0xc60e0098  lwc1        $f14, 0x98($s0)
    ctx->pc = 0x1ea8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1ea8c0:
    // 0x1ea8c0: 0x460c1401  sub.s       $f16, $f2, $f12
    ctx->pc = 0x1ea8c0u;
    ctx->f[16] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_1ea8c4:
    // 0x1ea8c4: 0x460b0bc1  sub.s       $f15, $f1, $f11
    ctx->pc = 0x1ea8c4u;
    ctx->f[15] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
label_1ea8c8:
    // 0x1ea8c8: 0x460e8042  mul.s       $f1, $f16, $f14
    ctx->pc = 0x1ea8c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[14]);
label_1ea8cc:
    // 0x1ea8cc: 0xc602005c  lwc1        $f2, 0x5C($s0)
    ctx->pc = 0x1ea8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea8d0:
    // 0x1ea8d0: 0xc64b0028  lwc1        $f11, 0x28($s2)
    ctx->pc = 0x1ea8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1ea8d4:
    // 0x1ea8d4: 0xc60c0094  lwc1        $f12, 0x94($s0)
    ctx->pc = 0x1ea8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ea8d8:
    // 0x1ea8d8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ea8d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ea8dc:
    // 0x1ea8dc: 0x46025ac2  mul.s       $f11, $f11, $f2
    ctx->pc = 0x1ea8dcu;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
label_1ea8e0:
    // 0x1ea8e0: 0xc7aa00a0  lwc1        $f10, 0xA0($sp)
    ctx->pc = 0x1ea8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1ea8e4:
    // 0x1ea8e4: 0x460c785d  msub.s      $f1, $f15, $f12
    ctx->pc = 0x1ea8e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[12]));
label_1ea8e8:
    // 0x1ea8e8: 0xc60d0090  lwc1        $f13, 0x90($s0)
    ctx->pc = 0x1ea8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ea8ec:
    // 0x1ea8ec: 0x460a0018  adda.s      $f0, $f10
    ctx->pc = 0x1ea8ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
label_1ea8f0:
    // 0x1ea8f0: 0x4601585c  madd.s      $f1, $f11, $f1
    ctx->pc = 0x1ea8f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
label_1ea8f4:
    // 0x1ea8f4: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x1ea8f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1ea8f8:
    // 0x1ea8f8: 0x460d7842  mul.s       $f1, $f15, $f13
    ctx->pc = 0x1ea8f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[13]);
label_1ea8fc:
    // 0x1ea8fc: 0xc7a80090  lwc1        $f8, 0x90($sp)
    ctx->pc = 0x1ea8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1ea900:
    // 0x1ea900: 0xc6070080  lwc1        $f7, 0x80($s0)
    ctx->pc = 0x1ea900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1ea904:
    // 0x1ea904: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ea904u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ea908:
    // 0x1ea908: 0xc7a900a4  lwc1        $f9, 0xA4($sp)
    ctx->pc = 0x1ea908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1ea90c:
    // 0x1ea90c: 0x46074441  sub.s       $f17, $f8, $f7
    ctx->pc = 0x1ea90cu;
    ctx->f[17] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
label_1ea910:
    // 0x1ea910: 0x460e889d  msub.s      $f2, $f17, $f14
    ctx->pc = 0x1ea910u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[14]));
label_1ea914:
    // 0x1ea914: 0x46090018  adda.s      $f0, $f9
    ctx->pc = 0x1ea914u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
label_1ea918:
    // 0x1ea918: 0x4602589c  madd.s      $f2, $f11, $f2
    ctx->pc = 0x1ea918u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[2]));
label_1ea91c:
    // 0x1ea91c: 0x460c8842  mul.s       $f1, $f17, $f12
    ctx->pc = 0x1ea91cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[17], ctx->f[12]);
label_1ea920:
    // 0x1ea920: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ea920u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ea924:
    // 0x1ea924: 0xc7a800a8  lwc1        $f8, 0xA8($sp)
    ctx->pc = 0x1ea924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1ea928:
    // 0x1ea928: 0x460d805d  msub.s      $f1, $f16, $f13
    ctx->pc = 0x1ea928u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[13]));
label_1ea92c:
    // 0x1ea92c: 0xc7a700ac  lwc1        $f7, 0xAC($sp)
    ctx->pc = 0x1ea92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1ea930:
    // 0x1ea930: 0x46080018  adda.s      $f0, $f8
    ctx->pc = 0x1ea930u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_1ea934:
    // 0x1ea934: 0x4601585c  madd.s      $f1, $f11, $f1
    ctx->pc = 0x1ea934u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
label_1ea938:
    // 0x1ea938: 0x46070018  adda.s      $f0, $f7
    ctx->pc = 0x1ea938u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_1ea93c:
    // 0x1ea93c: 0x4600581c  madd.s      $f0, $f11, $f0
    ctx->pc = 0x1ea93cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[0]));
label_1ea940:
    // 0x1ea940: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x1ea940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1ea944:
    // 0x1ea944: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x1ea944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1ea948:
    // 0x1ea948: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1ea948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1ea94c:
    // 0x1ea94c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ea94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea950:
    // 0x1ea950: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1ea950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1ea954:
    // 0x1ea954: 0x0  nop
    ctx->pc = 0x1ea954u;
    // NOP
label_1ea958:
    // 0x1ea958: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x1ea958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea95c:
    // 0x1ea95c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1ea960:
    if (ctx->pc == 0x1EA960u) {
        ctx->pc = 0x1EA960u;
            // 0x1ea960: 0x46000206  mov.s       $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1EA964u;
        goto label_1ea964;
    }
    ctx->pc = 0x1EA95Cu;
    {
        const bool branch_taken_0x1ea95c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea95c) {
            ctx->pc = 0x1EA960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA95Cu;
            // 0x1ea960: 0x46000206  mov.s       $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA970u;
            goto label_1ea970;
        }
    }
    ctx->pc = 0x1EA964u;
label_1ea964:
    // 0x1ea964: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea968:
    if (ctx->pc == 0x1EA968u) {
        ctx->pc = 0x1EA968u;
            // 0x1ea968: 0xc7a700a4  lwc1        $f7, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->pc = 0x1EA96Cu;
        goto label_1ea96c;
    }
    ctx->pc = 0x1EA964u;
    {
        const bool branch_taken_0x1ea964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA964u;
            // 0x1ea968: 0xc7a700a4  lwc1        $f7, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea964) {
            ctx->pc = 0x1EA974u;
            goto label_1ea974;
        }
    }
    ctx->pc = 0x1EA96Cu;
label_1ea96c:
    // 0x1ea96c: 0x46000206  mov.s       $f8, $f0
    ctx->pc = 0x1ea96cu;
    ctx->f[8] = FPU_MOV_S(ctx->f[0]);
label_1ea970:
    // 0x1ea970: 0xc7a700a4  lwc1        $f7, 0xA4($sp)
    ctx->pc = 0x1ea970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1ea974:
    // 0x1ea974: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x1ea974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1ea978:
    // 0x1ea978: 0x0  nop
    ctx->pc = 0x1ea978u;
    // NOP
label_1ea97c:
    // 0x1ea97c: 0x46075034  c.lt.s      $f10, $f7
    ctx->pc = 0x1ea97cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea980:
    // 0x1ea980: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1ea984:
    if (ctx->pc == 0x1EA984u) {
        ctx->pc = 0x1EA984u;
            // 0x1ea984: 0x46003a86  mov.s       $f10, $f7 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[7]);
        ctx->pc = 0x1EA988u;
        goto label_1ea988;
    }
    ctx->pc = 0x1EA980u;
    {
        const bool branch_taken_0x1ea980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea980) {
            ctx->pc = 0x1EA984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA980u;
            // 0x1ea984: 0x46003a86  mov.s       $f10, $f7 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA994u;
            goto label_1ea994;
        }
    }
    ctx->pc = 0x1EA988u;
label_1ea988:
    // 0x1ea988: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea98c:
    if (ctx->pc == 0x1EA98Cu) {
        ctx->pc = 0x1EA98Cu;
            // 0x1ea98c: 0xc7a200a8  lwc1        $f2, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x1EA990u;
        goto label_1ea990;
    }
    ctx->pc = 0x1EA988u;
    {
        const bool branch_taken_0x1ea988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA988u;
            // 0x1ea98c: 0xc7a200a8  lwc1        $f2, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea988) {
            ctx->pc = 0x1EA998u;
            goto label_1ea998;
        }
    }
    ctx->pc = 0x1EA990u;
label_1ea990:
    // 0x1ea990: 0x46003a86  mov.s       $f10, $f7
    ctx->pc = 0x1ea990u;
    ctx->f[10] = FPU_MOV_S(ctx->f[7]);
label_1ea994:
    // 0x1ea994: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x1ea994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea998:
    // 0x1ea998: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x1ea998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_1ea99c:
    // 0x1ea99c: 0x0  nop
    ctx->pc = 0x1ea99cu;
    // NOP
label_1ea9a0:
    // 0x1ea9a0: 0x46028834  c.lt.s      $f17, $f2
    ctx->pc = 0x1ea9a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea9a4:
    // 0x1ea9a4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1ea9a8:
    if (ctx->pc == 0x1EA9A8u) {
        ctx->pc = 0x1EA9A8u;
            // 0x1ea9a8: 0x46001446  mov.s       $f17, $f2 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x1EA9ACu;
        goto label_1ea9ac;
    }
    ctx->pc = 0x1EA9A4u;
    {
        const bool branch_taken_0x1ea9a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea9a4) {
            ctx->pc = 0x1EA9A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA9A4u;
            // 0x1ea9a8: 0x46001446  mov.s       $f17, $f2 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA9B8u;
            goto label_1ea9b8;
        }
    }
    ctx->pc = 0x1EA9ACu;
label_1ea9ac:
    // 0x1ea9ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea9b0:
    if (ctx->pc == 0x1EA9B0u) {
        ctx->pc = 0x1EA9B0u;
            // 0x1ea9b0: 0xc7a100ac  lwc1        $f1, 0xAC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1EA9B4u;
        goto label_1ea9b4;
    }
    ctx->pc = 0x1EA9ACu;
    {
        const bool branch_taken_0x1ea9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA9ACu;
            // 0x1ea9b0: 0xc7a100ac  lwc1        $f1, 0xAC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9ac) {
            ctx->pc = 0x1EA9BCu;
            goto label_1ea9bc;
        }
    }
    ctx->pc = 0x1EA9B4u;
label_1ea9b4:
    // 0x1ea9b4: 0x46001446  mov.s       $f17, $f2
    ctx->pc = 0x1ea9b4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[2]);
label_1ea9b8:
    // 0x1ea9b8: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1ea9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea9bc:
    // 0x1ea9bc: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1ea9bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1ea9c0:
    // 0x1ea9c0: 0x0  nop
    ctx->pc = 0x1ea9c0u;
    // NOP
label_1ea9c4:
    // 0x1ea9c4: 0x46018034  c.lt.s      $f16, $f1
    ctx->pc = 0x1ea9c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea9c8:
    // 0x1ea9c8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1ea9cc:
    if (ctx->pc == 0x1EA9CCu) {
        ctx->pc = 0x1EA9CCu;
            // 0x1ea9cc: 0x46000c06  mov.s       $f16, $f1 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x1EA9D0u;
        goto label_1ea9d0;
    }
    ctx->pc = 0x1EA9C8u;
    {
        const bool branch_taken_0x1ea9c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea9c8) {
            ctx->pc = 0x1EA9CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA9C8u;
            // 0x1ea9cc: 0x46000c06  mov.s       $f16, $f1 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA9DCu;
            goto label_1ea9dc;
        }
    }
    ctx->pc = 0x1EA9D0u;
label_1ea9d0:
    // 0x1ea9d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea9d4:
    if (ctx->pc == 0x1EA9D4u) {
        ctx->pc = 0x1EA9D4u;
            // 0x1ea9d4: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1EA9D8u;
        goto label_1ea9d8;
    }
    ctx->pc = 0x1EA9D0u;
    {
        const bool branch_taken_0x1ea9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA9D0u;
            // 0x1ea9d4: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9d0) {
            ctx->pc = 0x1EA9E0u;
            goto label_1ea9e0;
        }
    }
    ctx->pc = 0x1EA9D8u;
label_1ea9d8:
    // 0x1ea9d8: 0x46000c06  mov.s       $f16, $f1
    ctx->pc = 0x1ea9d8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[1]);
label_1ea9dc:
    // 0x1ea9dc: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ea9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea9e0:
    // 0x1ea9e0: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1ea9e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1ea9e4:
    // 0x1ea9e4: 0x0  nop
    ctx->pc = 0x1ea9e4u;
    // NOP
label_1ea9e8:
    // 0x1ea9e8: 0x46007836  c.le.s      $f15, $f0
    ctx->pc = 0x1ea9e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea9ec:
    // 0x1ea9ec: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_1ea9f0:
    if (ctx->pc == 0x1EA9F0u) {
        ctx->pc = 0x1EA9F0u;
            // 0x1ea9f0: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1EA9F4u;
        goto label_1ea9f4;
    }
    ctx->pc = 0x1EA9ECu;
    {
        const bool branch_taken_0x1ea9ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea9ec) {
            ctx->pc = 0x1EA9F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA9ECu;
            // 0x1ea9f0: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAA00u;
            goto label_1eaa00;
        }
    }
    ctx->pc = 0x1EA9F4u;
label_1ea9f4:
    // 0x1ea9f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ea9f8:
    if (ctx->pc == 0x1EA9F8u) {
        ctx->pc = 0x1EA9FCu;
        goto label_1ea9fc;
    }
    ctx->pc = 0x1EA9F4u;
    {
        const bool branch_taken_0x1ea9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea9f4) {
            ctx->pc = 0x1EAA00u;
            goto label_1eaa00;
        }
    }
    ctx->pc = 0x1EA9FCu;
label_1ea9fc:
    // 0x1ea9fc: 0x460003c6  mov.s       $f15, $f0
    ctx->pc = 0x1ea9fcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
label_1eaa00:
    // 0x1eaa00: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eaa00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1eaa04:
    // 0x1eaa04: 0x0  nop
    ctx->pc = 0x1eaa04u;
    // NOP
label_1eaa08:
    // 0x1eaa08: 0x46077036  c.le.s      $f14, $f7
    ctx->pc = 0x1eaa08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eaa0c:
    // 0x1eaa0c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_1eaa10:
    if (ctx->pc == 0x1EAA10u) {
        ctx->pc = 0x1EAA10u;
            // 0x1eaa10: 0x46003b86  mov.s       $f14, $f7 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[7]);
        ctx->pc = 0x1EAA14u;
        goto label_1eaa14;
    }
    ctx->pc = 0x1EAA0Cu;
    {
        const bool branch_taken_0x1eaa0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eaa0c) {
            ctx->pc = 0x1EAA10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA0Cu;
            // 0x1eaa10: 0x46003b86  mov.s       $f14, $f7 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAA20u;
            goto label_1eaa20;
        }
    }
    ctx->pc = 0x1EAA14u;
label_1eaa14:
    // 0x1eaa14: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eaa18:
    if (ctx->pc == 0x1EAA18u) {
        ctx->pc = 0x1EAA1Cu;
        goto label_1eaa1c;
    }
    ctx->pc = 0x1EAA14u;
    {
        const bool branch_taken_0x1eaa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaa14) {
            ctx->pc = 0x1EAA20u;
            goto label_1eaa20;
        }
    }
    ctx->pc = 0x1EAA1Cu;
label_1eaa1c:
    // 0x1eaa1c: 0x46003b86  mov.s       $f14, $f7
    ctx->pc = 0x1eaa1cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[7]);
label_1eaa20:
    // 0x1eaa20: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1eaa20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1eaa24:
    // 0x1eaa24: 0x0  nop
    ctx->pc = 0x1eaa24u;
    // NOP
label_1eaa28:
    // 0x1eaa28: 0x46026836  c.le.s      $f13, $f2
    ctx->pc = 0x1eaa28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eaa2c:
    // 0x1eaa2c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_1eaa30:
    if (ctx->pc == 0x1EAA30u) {
        ctx->pc = 0x1EAA30u;
            // 0x1eaa30: 0x46001346  mov.s       $f13, $f2 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x1EAA34u;
        goto label_1eaa34;
    }
    ctx->pc = 0x1EAA2Cu;
    {
        const bool branch_taken_0x1eaa2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eaa2c) {
            ctx->pc = 0x1EAA30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA2Cu;
            // 0x1eaa30: 0x46001346  mov.s       $f13, $f2 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAA40u;
            goto label_1eaa40;
        }
    }
    ctx->pc = 0x1EAA34u;
label_1eaa34:
    // 0x1eaa34: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eaa38:
    if (ctx->pc == 0x1EAA38u) {
        ctx->pc = 0x1EAA3Cu;
        goto label_1eaa3c;
    }
    ctx->pc = 0x1EAA34u;
    {
        const bool branch_taken_0x1eaa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaa34) {
            ctx->pc = 0x1EAA40u;
            goto label_1eaa40;
        }
    }
    ctx->pc = 0x1EAA3Cu;
label_1eaa3c:
    // 0x1eaa3c: 0x46001346  mov.s       $f13, $f2
    ctx->pc = 0x1eaa3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[2]);
label_1eaa40:
    // 0x1eaa40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1eaa40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1eaa44:
    // 0x1eaa44: 0x0  nop
    ctx->pc = 0x1eaa44u;
    // NOP
label_1eaa48:
    // 0x1eaa48: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1eaa48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eaa4c:
    // 0x1eaa4c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_1eaa50:
    if (ctx->pc == 0x1EAA50u) {
        ctx->pc = 0x1EAA50u;
            // 0x1eaa50: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x1EAA54u;
        goto label_1eaa54;
    }
    ctx->pc = 0x1EAA4Cu;
    {
        const bool branch_taken_0x1eaa4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eaa4c) {
            ctx->pc = 0x1EAA50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA4Cu;
            // 0x1eaa50: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAA60u;
            goto label_1eaa60;
        }
    }
    ctx->pc = 0x1EAA54u;
label_1eaa54:
    // 0x1eaa54: 0x10000003  b           . + 4 + (0x3 << 2)
label_1eaa58:
    if (ctx->pc == 0x1EAA58u) {
        ctx->pc = 0x1EAA58u;
            // 0x1eaa58: 0xc7a100b0  lwc1        $f1, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1EAA5Cu;
        goto label_1eaa5c;
    }
    ctx->pc = 0x1EAA54u;
    {
        const bool branch_taken_0x1eaa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA54u;
            // 0x1eaa58: 0xc7a100b0  lwc1        $f1, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa54) {
            ctx->pc = 0x1EAA64u;
            goto label_1eaa64;
        }
    }
    ctx->pc = 0x1EAA5Cu;
label_1eaa5c:
    // 0x1eaa5c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1eaa5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_1eaa60:
    // 0x1eaa60: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1eaa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eaa64:
    // 0x1eaa64: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1eaa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaa68:
    // 0x1eaa68: 0xc7a900b8  lwc1        $f9, 0xB8($sp)
    ctx->pc = 0x1eaa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1eaa6c:
    // 0x1eaa6c: 0x46080ac0  add.s       $f11, $f1, $f8
    ctx->pc = 0x1eaa6cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
label_1eaa70:
    // 0x1eaa70: 0x460a0280  add.s       $f10, $f0, $f10
    ctx->pc = 0x1eaa70u;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
label_1eaa74:
    // 0x1eaa74: 0xc7a800bc  lwc1        $f8, 0xBC($sp)
    ctx->pc = 0x1eaa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1eaa78:
    // 0x1eaa78: 0xc7a700c0  lwc1        $f7, 0xC0($sp)
    ctx->pc = 0x1eaa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1eaa7c:
    // 0x1eaa7c: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x1eaa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1eaa80:
    // 0x1eaa80: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1eaa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eaa84:
    // 0x1eaa84: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1eaa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaa88:
    // 0x1eaa88: 0x46114a40  add.s       $f9, $f9, $f17
    ctx->pc = 0x1eaa88u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[17]);
label_1eaa8c:
    // 0x1eaa8c: 0x46104200  add.s       $f8, $f8, $f16
    ctx->pc = 0x1eaa8cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[16]);
label_1eaa90:
    // 0x1eaa90: 0x460f39c0  add.s       $f7, $f7, $f15
    ctx->pc = 0x1eaa90u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[15]);
label_1eaa94:
    // 0x1eaa94: 0x460e1080  add.s       $f2, $f2, $f14
    ctx->pc = 0x1eaa94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[14]);
label_1eaa98:
    // 0x1eaa98: 0x460d0840  add.s       $f1, $f1, $f13
    ctx->pc = 0x1eaa98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
label_1eaa9c:
    // 0x1eaa9c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1eaa9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_1eaaa0:
    // 0x1eaaa0: 0xe7ab00b0  swc1        $f11, 0xB0($sp)
    ctx->pc = 0x1eaaa0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1eaaa4:
    // 0x1eaaa4: 0xe7aa00b4  swc1        $f10, 0xB4($sp)
    ctx->pc = 0x1eaaa4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1eaaa8:
    // 0x1eaaa8: 0xe7a900b8  swc1        $f9, 0xB8($sp)
    ctx->pc = 0x1eaaa8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1eaaac:
    // 0x1eaaac: 0xe7a800bc  swc1        $f8, 0xBC($sp)
    ctx->pc = 0x1eaaacu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1eaab0:
    // 0x1eaab0: 0xe7a700c0  swc1        $f7, 0xC0($sp)
    ctx->pc = 0x1eaab0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1eaab4:
    // 0x1eaab4: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x1eaab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1eaab8:
    // 0x1eaab8: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x1eaab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1eaabc:
    // 0x1eaabc: 0x10000017  b           . + 4 + (0x17 << 2)
label_1eaac0:
    if (ctx->pc == 0x1EAAC0u) {
        ctx->pc = 0x1EAAC0u;
            // 0x1eaac0: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->pc = 0x1EAAC4u;
        goto label_1eaac4;
    }
    ctx->pc = 0x1EAABCu;
    {
        const bool branch_taken_0x1eaabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAABCu;
            // 0x1eaac0: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaabc) {
            ctx->pc = 0x1EAB1Cu;
            goto label_1eab1c;
        }
    }
    ctx->pc = 0x1EAAC4u;
label_1eaac4:
    // 0x1eaac4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1eaac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1eaac8:
    // 0x1eaac8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1eaac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1eaacc:
    // 0x1eaacc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1eaaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaad0:
    // 0x1eaad0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1eaad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1eaad4:
    // 0x1eaad4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1eaad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1eaad8:
    // 0x1eaad8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1eaad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1eaadc:
    // 0x1eaadc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1eaadcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1eaae0:
    // 0x1eaae0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1eaae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1eaae4:
    // 0x1eaae4: 0x320f809  jalr        $t9
label_1eaae8:
    if (ctx->pc == 0x1EAAE8u) {
        ctx->pc = 0x1EAAE8u;
            // 0x1eaae8: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x1EAAECu;
        goto label_1eaaec;
    }
    ctx->pc = 0x1EAAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EAAECu);
        ctx->pc = 0x1EAAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAAE4u;
            // 0x1eaae8: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EAAECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EAAECu; }
            if (ctx->pc != 0x1EAAECu) { return; }
        }
        }
    }
    ctx->pc = 0x1EAAECu;
label_1eaaec:
    // 0x1eaaec: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1eaaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eaaf0:
    // 0x1eaaf0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1eaaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaaf4:
    // 0x1eaaf4: 0xc7a600c4  lwc1        $f6, 0xC4($sp)
    ctx->pc = 0x1eaaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1eaaf8:
    // 0x1eaaf8: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x1eaaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1eaafc:
    // 0x1eaafc: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1eaafcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1eab00:
    // 0x1eab00: 0x46043101  sub.s       $f4, $f6, $f4
    ctx->pc = 0x1eab00u;
    ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
label_1eab04:
    // 0x1eab04: 0xc7a500c8  lwc1        $f5, 0xC8($sp)
    ctx->pc = 0x1eab04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1eab08:
    // 0x1eab08: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x1eab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1eab0c:
    // 0x1eab0c: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1eab0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eab10:
    // 0x1eab10: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1eab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eab14:
    // 0x1eab14: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x1eab14u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_1eab18:
    // 0x1eab18: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x1eab18u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1eab1c:
    // 0x1eab1c: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x1eab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1eab20:
    // 0x1eab20: 0x5060011f  beql        $v1, $zero, . + 4 + (0x11F << 2)
label_1eab24:
    if (ctx->pc == 0x1EAB24u) {
        ctx->pc = 0x1EAB24u;
            // 0x1eab24: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1EAB28u;
        goto label_1eab28;
    }
    ctx->pc = 0x1EAB20u;
    {
        const bool branch_taken_0x1eab20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eab20) {
            ctx->pc = 0x1EAB24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB20u;
            // 0x1eab24: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAFA0u;
            goto label_1eafa0;
        }
    }
    ctx->pc = 0x1EAB28u;
label_1eab28:
    // 0x1eab28: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x1eab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eab2c:
    // 0x1eab2c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1eab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eab30:
    // 0x1eab30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1eab30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eab34:
    // 0x1eab34: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1eab38:
    if (ctx->pc == 0x1EAB38u) {
        ctx->pc = 0x1EAB38u;
            // 0x1eab38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB3Cu;
        goto label_1eab3c;
    }
    ctx->pc = 0x1EAB34u;
    {
        const bool branch_taken_0x1eab34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eab34) {
            ctx->pc = 0x1EAB38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB34u;
            // 0x1eab38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAB48u;
            goto label_1eab48;
        }
    }
    ctx->pc = 0x1EAB3Cu;
label_1eab3c:
    // 0x1eab3c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eab40:
    if (ctx->pc == 0x1EAB40u) {
        ctx->pc = 0x1EAB40u;
            // 0x1eab40: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1EAB44u;
        goto label_1eab44;
    }
    ctx->pc = 0x1EAB3Cu;
    {
        const bool branch_taken_0x1eab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB3Cu;
            // 0x1eab40: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab3c) {
            ctx->pc = 0x1EAB48u;
            goto label_1eab48;
        }
    }
    ctx->pc = 0x1EAB44u;
label_1eab44:
    // 0x1eab44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eab44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eab48:
    // 0x1eab48: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x1eab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eab4c:
    // 0x1eab4c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1eab4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eab50:
    // 0x1eab50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1eab50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eab54:
    // 0x1eab54: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1eab58:
    if (ctx->pc == 0x1EAB58u) {
        ctx->pc = 0x1EAB58u;
            // 0x1eab58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB5Cu;
        goto label_1eab5c;
    }
    ctx->pc = 0x1EAB54u;
    {
        const bool branch_taken_0x1eab54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eab54) {
            ctx->pc = 0x1EAB58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB54u;
            // 0x1eab58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAB68u;
            goto label_1eab68;
        }
    }
    ctx->pc = 0x1EAB5Cu;
label_1eab5c:
    // 0x1eab5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eab60:
    if (ctx->pc == 0x1EAB60u) {
        ctx->pc = 0x1EAB60u;
            // 0x1eab60: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1EAB64u;
        goto label_1eab64;
    }
    ctx->pc = 0x1EAB5Cu;
    {
        const bool branch_taken_0x1eab5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB5Cu;
            // 0x1eab60: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab5c) {
            ctx->pc = 0x1EAB68u;
            goto label_1eab68;
        }
    }
    ctx->pc = 0x1EAB64u;
label_1eab64:
    // 0x1eab64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1eab64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eab68:
    // 0x1eab68: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x1eab68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eab6c:
    // 0x1eab6c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1eab6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eab70:
    // 0x1eab70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1eab70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eab74:
    // 0x1eab74: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1eab78:
    if (ctx->pc == 0x1EAB78u) {
        ctx->pc = 0x1EAB78u;
            // 0x1eab78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB7Cu;
        goto label_1eab7c;
    }
    ctx->pc = 0x1EAB74u;
    {
        const bool branch_taken_0x1eab74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eab74) {
            ctx->pc = 0x1EAB78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB74u;
            // 0x1eab78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAB88u;
            goto label_1eab88;
        }
    }
    ctx->pc = 0x1EAB7Cu;
label_1eab7c:
    // 0x1eab7c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eab80:
    if (ctx->pc == 0x1EAB80u) {
        ctx->pc = 0x1EAB80u;
            // 0x1eab80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1EAB84u;
        goto label_1eab84;
    }
    ctx->pc = 0x1EAB7Cu;
    {
        const bool branch_taken_0x1eab7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB7Cu;
            // 0x1eab80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab7c) {
            ctx->pc = 0x1EAB88u;
            goto label_1eab88;
        }
    }
    ctx->pc = 0x1EAB84u;
label_1eab84:
    // 0x1eab84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eab84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eab88:
    // 0x1eab88: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x1eab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eab8c:
    // 0x1eab8c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1eab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eab90:
    // 0x1eab90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1eab90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eab94:
    // 0x1eab94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1eab98:
    if (ctx->pc == 0x1EAB98u) {
        ctx->pc = 0x1EAB98u;
            // 0x1eab98: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EAB9Cu;
        goto label_1eab9c;
    }
    ctx->pc = 0x1EAB94u;
    {
        const bool branch_taken_0x1eab94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EAB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB94u;
            // 0x1eab98: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab94) {
            ctx->pc = 0x1EABA0u;
            goto label_1eaba0;
        }
    }
    ctx->pc = 0x1EAB9Cu;
label_1eab9c:
    // 0x1eab9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1eab9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eaba0:
    // 0x1eaba0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1eaba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_1eaba4:
    // 0x1eaba4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1eaba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1eaba8:
    // 0x1eaba8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1eaba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1eabac:
    // 0x1eabac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1eabacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1eabb0:
    // 0x1eabb0: 0xafa30394  sw          $v1, 0x394($sp)
    ctx->pc = 0x1eabb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 916), GPR_U32(ctx, 3));
label_1eabb4:
    // 0x1eabb4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1eabb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eabb8:
    // 0x1eabb8: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x1eabb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eabbc:
    // 0x1eabbc: 0xc7a20394  lwc1        $f2, 0x394($sp)
    ctx->pc = 0x1eabbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1eabc0:
    // 0x1eabc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1eabc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eabc4:
    // 0x1eabc4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1eabc8:
    if (ctx->pc == 0x1EABC8u) {
        ctx->pc = 0x1EABC8u;
            // 0x1eabc8: 0xe7a2039c  swc1        $f2, 0x39C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 924), bits); }
        ctx->pc = 0x1EABCCu;
        goto label_1eabcc;
    }
    ctx->pc = 0x1EABC4u;
    {
        const bool branch_taken_0x1eabc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EABC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EABC4u;
            // 0x1eabc8: 0xe7a2039c  swc1        $f2, 0x39C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 924), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eabc4) {
            ctx->pc = 0x1EABD4u;
            goto label_1eabd4;
        }
    }
    ctx->pc = 0x1EABCCu;
label_1eabcc:
    // 0x1eabcc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eabd0:
    if (ctx->pc == 0x1EABD0u) {
        ctx->pc = 0x1EABD0u;
            // 0x1eabd0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1EABD4u;
        goto label_1eabd4;
    }
    ctx->pc = 0x1EABCCu;
    {
        const bool branch_taken_0x1eabcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EABCCu;
            // 0x1eabd0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eabcc) {
            ctx->pc = 0x1EABD8u;
            goto label_1eabd8;
        }
    }
    ctx->pc = 0x1EABD4u;
label_1eabd4:
    // 0x1eabd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eabd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eabd8:
    // 0x1eabd8: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x1eabd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eabdc:
    // 0x1eabdc: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1eabdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eabe0:
    // 0x1eabe0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1eabe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eabe4:
    // 0x1eabe4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1eabe8:
    if (ctx->pc == 0x1EABE8u) {
        ctx->pc = 0x1EABE8u;
            // 0x1eabe8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EABECu;
        goto label_1eabec;
    }
    ctx->pc = 0x1EABE4u;
    {
        const bool branch_taken_0x1eabe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eabe4) {
            ctx->pc = 0x1EABE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EABE4u;
            // 0x1eabe8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EABF8u;
            goto label_1eabf8;
        }
    }
    ctx->pc = 0x1EABECu;
label_1eabec:
    // 0x1eabec: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eabf0:
    if (ctx->pc == 0x1EABF0u) {
        ctx->pc = 0x1EABF0u;
            // 0x1eabf0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1EABF4u;
        goto label_1eabf4;
    }
    ctx->pc = 0x1EABECu;
    {
        const bool branch_taken_0x1eabec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EABF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EABECu;
            // 0x1eabf0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eabec) {
            ctx->pc = 0x1EABF8u;
            goto label_1eabf8;
        }
    }
    ctx->pc = 0x1EABF4u;
label_1eabf4:
    // 0x1eabf4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1eabf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eabf8:
    // 0x1eabf8: 0xc6810028  lwc1        $f1, 0x28($s4)
    ctx->pc = 0x1eabf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eabfc:
    // 0x1eabfc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1eabfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eac00:
    // 0x1eac00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1eac00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eac04:
    // 0x1eac04: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1eac08:
    if (ctx->pc == 0x1EAC08u) {
        ctx->pc = 0x1EAC08u;
            // 0x1eac08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC0Cu;
        goto label_1eac0c;
    }
    ctx->pc = 0x1EAC04u;
    {
        const bool branch_taken_0x1eac04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eac04) {
            ctx->pc = 0x1EAC08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC04u;
            // 0x1eac08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAC18u;
            goto label_1eac18;
        }
    }
    ctx->pc = 0x1EAC0Cu;
label_1eac0c:
    // 0x1eac0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eac10:
    if (ctx->pc == 0x1EAC10u) {
        ctx->pc = 0x1EAC10u;
            // 0x1eac10: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1EAC14u;
        goto label_1eac14;
    }
    ctx->pc = 0x1EAC0Cu;
    {
        const bool branch_taken_0x1eac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC0Cu;
            // 0x1eac10: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac0c) {
            ctx->pc = 0x1EAC18u;
            goto label_1eac18;
        }
    }
    ctx->pc = 0x1EAC14u;
label_1eac14:
    // 0x1eac14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eac14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eac18:
    // 0x1eac18: 0xc681002c  lwc1        $f1, 0x2C($s4)
    ctx->pc = 0x1eac18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eac1c:
    // 0x1eac1c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1eac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eac20:
    // 0x1eac20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1eac20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eac24:
    // 0x1eac24: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1eac28:
    if (ctx->pc == 0x1EAC28u) {
        ctx->pc = 0x1EAC28u;
            // 0x1eac28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EAC2Cu;
        goto label_1eac2c;
    }
    ctx->pc = 0x1EAC24u;
    {
        const bool branch_taken_0x1eac24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EAC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC24u;
            // 0x1eac28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac24) {
            ctx->pc = 0x1EAC30u;
            goto label_1eac30;
        }
    }
    ctx->pc = 0x1EAC2Cu;
label_1eac2c:
    // 0x1eac2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1eac2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eac30:
    // 0x1eac30: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1eac30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1eac34:
    // 0x1eac34: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1eac34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1eac38:
    // 0x1eac38: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1eac38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1eac3c:
    // 0x1eac3c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1eac3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1eac40:
    // 0x1eac40: 0x8fa4039c  lw          $a0, 0x39C($sp)
    ctx->pc = 0x1eac40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 924)));
label_1eac44:
    // 0x1eac44: 0xafa30390  sw          $v1, 0x390($sp)
    ctx->pc = 0x1eac44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 3));
label_1eac48:
    // 0x1eac48: 0xc7a00390  lwc1        $f0, 0x390($sp)
    ctx->pc = 0x1eac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eac4c:
    // 0x1eac4c: 0xe7a00398  swc1        $f0, 0x398($sp)
    ctx->pc = 0x1eac4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 920), bits); }
label_1eac50:
    // 0x1eac50: 0x8fa30398  lw          $v1, 0x398($sp)
    ctx->pc = 0x1eac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_1eac54:
    // 0x1eac54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1eac54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1eac58:
    // 0x1eac58: 0x3063000e  andi        $v1, $v1, 0xE
    ctx->pc = 0x1eac58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)14);
label_1eac5c:
    // 0x1eac5c: 0x3863000e  xori        $v1, $v1, 0xE
    ctx->pc = 0x1eac5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)14);
label_1eac60:
    // 0x1eac60: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1eac60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1eac64:
    // 0x1eac64: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1eac64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1eac68:
    // 0x1eac68: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1eac6c:
    if (ctx->pc == 0x1EAC6Cu) {
        ctx->pc = 0x1EAC6Cu;
            // 0x1eac6c: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1EAC70u;
        goto label_1eac70;
    }
    ctx->pc = 0x1EAC68u;
    {
        const bool branch_taken_0x1eac68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eac68) {
            ctx->pc = 0x1EAC6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC68u;
            // 0x1eac6c: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAC7Cu;
            goto label_1eac7c;
        }
    }
    ctx->pc = 0x1EAC70u;
label_1eac70:
    // 0x1eac70: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_1eac74:
    if (ctx->pc == 0x1EAC74u) {
        ctx->pc = 0x1EAC74u;
            // 0x1eac74: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EAC78u;
        goto label_1eac78;
    }
    ctx->pc = 0x1EAC70u;
    {
        const bool branch_taken_0x1eac70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC70u;
            // 0x1eac74: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac70) {
            ctx->pc = 0x1EAFB8u;
            goto label_1eafb8;
        }
    }
    ctx->pc = 0x1EAC78u;
label_1eac78:
    // 0x1eac78: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1eac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eac7c:
    // 0x1eac7c: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x1eac7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1eac80:
    // 0x1eac80: 0x0  nop
    ctx->pc = 0x1eac80u;
    // NOP
label_1eac84:
    // 0x1eac84: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x1eac84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eac88:
    // 0x1eac88: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1eac8c:
    if (ctx->pc == 0x1EAC8Cu) {
        ctx->pc = 0x1EAC8Cu;
            // 0x1eac8c: 0x46000286  mov.s       $f10, $f0 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1EAC90u;
        goto label_1eac90;
    }
    ctx->pc = 0x1EAC88u;
    {
        const bool branch_taken_0x1eac88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eac88) {
            ctx->pc = 0x1EAC8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC88u;
            // 0x1eac8c: 0x46000286  mov.s       $f10, $f0 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAC9Cu;
            goto label_1eac9c;
        }
    }
    ctx->pc = 0x1EAC90u;
label_1eac90:
    // 0x1eac90: 0x10000003  b           . + 4 + (0x3 << 2)
label_1eac94:
    if (ctx->pc == 0x1EAC94u) {
        ctx->pc = 0x1EAC94u;
            // 0x1eac94: 0xc7a100a4  lwc1        $f1, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1EAC98u;
        goto label_1eac98;
    }
    ctx->pc = 0x1EAC90u;
    {
        const bool branch_taken_0x1eac90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC90u;
            // 0x1eac94: 0xc7a100a4  lwc1        $f1, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac90) {
            ctx->pc = 0x1EACA0u;
            goto label_1eaca0;
        }
    }
    ctx->pc = 0x1EAC98u;
label_1eac98:
    // 0x1eac98: 0x46000286  mov.s       $f10, $f0
    ctx->pc = 0x1eac98u;
    ctx->f[10] = FPU_MOV_S(ctx->f[0]);
label_1eac9c:
    // 0x1eac9c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1eac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eaca0:
    // 0x1eaca0: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x1eaca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1eaca4:
    // 0x1eaca4: 0x0  nop
    ctx->pc = 0x1eaca4u;
    // NOP
label_1eaca8:
    // 0x1eaca8: 0x46014834  c.lt.s      $f9, $f1
    ctx->pc = 0x1eaca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eacac:
    // 0x1eacac: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1eacb0:
    if (ctx->pc == 0x1EACB0u) {
        ctx->pc = 0x1EACB0u;
            // 0x1eacb0: 0x46000a46  mov.s       $f9, $f1 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x1EACB4u;
        goto label_1eacb4;
    }
    ctx->pc = 0x1EACACu;
    {
        const bool branch_taken_0x1eacac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eacac) {
            ctx->pc = 0x1EACB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EACACu;
            // 0x1eacb0: 0x46000a46  mov.s       $f9, $f1 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EACC0u;
            goto label_1eacc0;
        }
    }
    ctx->pc = 0x1EACB4u;
label_1eacb4:
    // 0x1eacb4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1eacb8:
    if (ctx->pc == 0x1EACB8u) {
        ctx->pc = 0x1EACB8u;
            // 0x1eacb8: 0xc7ad00a8  lwc1        $f13, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x1EACBCu;
        goto label_1eacbc;
    }
    ctx->pc = 0x1EACB4u;
    {
        const bool branch_taken_0x1eacb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EACB4u;
            // 0x1eacb8: 0xc7ad00a8  lwc1        $f13, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eacb4) {
            ctx->pc = 0x1EACC4u;
            goto label_1eacc4;
        }
    }
    ctx->pc = 0x1EACBCu;
label_1eacbc:
    // 0x1eacbc: 0x46000a46  mov.s       $f9, $f1
    ctx->pc = 0x1eacbcu;
    ctx->f[9] = FPU_MOV_S(ctx->f[1]);
label_1eacc0:
    // 0x1eacc0: 0xc7ad00a8  lwc1        $f13, 0xA8($sp)
    ctx->pc = 0x1eacc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1eacc4:
    // 0x1eacc4: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1eacc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1eacc8:
    // 0x1eacc8: 0x0  nop
    ctx->pc = 0x1eacc8u;
    // NOP
label_1eaccc:
    // 0x1eaccc: 0x460d4034  c.lt.s      $f8, $f13
    ctx->pc = 0x1eacccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eacd0:
    // 0x1eacd0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1eacd4:
    if (ctx->pc == 0x1EACD4u) {
        ctx->pc = 0x1EACD4u;
            // 0x1eacd4: 0x46006a06  mov.s       $f8, $f13 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1EACD8u;
        goto label_1eacd8;
    }
    ctx->pc = 0x1EACD0u;
    {
        const bool branch_taken_0x1eacd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eacd0) {
            ctx->pc = 0x1EACD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EACD0u;
            // 0x1eacd4: 0x46006a06  mov.s       $f8, $f13 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EACE4u;
            goto label_1eace4;
        }
    }
    ctx->pc = 0x1EACD8u;
label_1eacd8:
    // 0x1eacd8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1eacdc:
    if (ctx->pc == 0x1EACDCu) {
        ctx->pc = 0x1EACDCu;
            // 0x1eacdc: 0xc7ac00ac  lwc1        $f12, 0xAC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1EACE0u;
        goto label_1eace0;
    }
    ctx->pc = 0x1EACD8u;
    {
        const bool branch_taken_0x1eacd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EACD8u;
            // 0x1eacdc: 0xc7ac00ac  lwc1        $f12, 0xAC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eacd8) {
            ctx->pc = 0x1EACE8u;
            goto label_1eace8;
        }
    }
    ctx->pc = 0x1EACE0u;
label_1eace0:
    // 0x1eace0: 0x46006a06  mov.s       $f8, $f13
    ctx->pc = 0x1eace0u;
    ctx->f[8] = FPU_MOV_S(ctx->f[13]);
label_1eace4:
    // 0x1eace4: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1eace4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1eace8:
    // 0x1eace8: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x1eace8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1eacec:
    // 0x1eacec: 0x0  nop
    ctx->pc = 0x1eacecu;
    // NOP
label_1eacf0:
    // 0x1eacf0: 0x460c5834  c.lt.s      $f11, $f12
    ctx->pc = 0x1eacf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eacf4:
    // 0x1eacf4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1eacf8:
    if (ctx->pc == 0x1EACF8u) {
        ctx->pc = 0x1EACF8u;
            // 0x1eacf8: 0x460062c6  mov.s       $f11, $f12 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1EACFCu;
        goto label_1eacfc;
    }
    ctx->pc = 0x1EACF4u;
    {
        const bool branch_taken_0x1eacf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eacf4) {
            ctx->pc = 0x1EACF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EACF4u;
            // 0x1eacf8: 0x460062c6  mov.s       $f11, $f12 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAD08u;
            goto label_1ead08;
        }
    }
    ctx->pc = 0x1EACFCu;
label_1eacfc:
    // 0x1eacfc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ead00:
    if (ctx->pc == 0x1EAD00u) {
        ctx->pc = 0x1EAD00u;
            // 0x1ead00: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1EAD04u;
        goto label_1ead04;
    }
    ctx->pc = 0x1EACFCu;
    {
        const bool branch_taken_0x1eacfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EACFCu;
            // 0x1ead00: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eacfc) {
            ctx->pc = 0x1EAD0Cu;
            goto label_1ead0c;
        }
    }
    ctx->pc = 0x1EAD04u;
label_1ead04:
    // 0x1ead04: 0x460062c6  mov.s       $f11, $f12
    ctx->pc = 0x1ead04u;
    ctx->f[11] = FPU_MOV_S(ctx->f[12]);
label_1ead08:
    // 0x1ead08: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ead08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ead0c:
    // 0x1ead0c: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1ead0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ead10:
    // 0x1ead10: 0x0  nop
    ctx->pc = 0x1ead10u;
    // NOP
label_1ead14:
    // 0x1ead14: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x1ead14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ead18:
    // 0x1ead18: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_1ead1c:
    if (ctx->pc == 0x1EAD1Cu) {
        ctx->pc = 0x1EAD1Cu;
            // 0x1ead1c: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1EAD20u;
        goto label_1ead20;
    }
    ctx->pc = 0x1EAD18u;
    {
        const bool branch_taken_0x1ead18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ead18) {
            ctx->pc = 0x1EAD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD18u;
            // 0x1ead1c: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAD2Cu;
            goto label_1ead2c;
        }
    }
    ctx->pc = 0x1EAD20u;
label_1ead20:
    // 0x1ead20: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ead24:
    if (ctx->pc == 0x1EAD24u) {
        ctx->pc = 0x1EAD28u;
        goto label_1ead28;
    }
    ctx->pc = 0x1EAD20u;
    {
        const bool branch_taken_0x1ead20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ead20) {
            ctx->pc = 0x1EAD2Cu;
            goto label_1ead2c;
        }
    }
    ctx->pc = 0x1EAD28u;
label_1ead28:
    // 0x1ead28: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x1ead28u;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
label_1ead2c:
    // 0x1ead2c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1ead2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ead30:
    // 0x1ead30: 0x0  nop
    ctx->pc = 0x1ead30u;
    // NOP
label_1ead34:
    // 0x1ead34: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1ead34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ead38:
    // 0x1ead38: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_1ead3c:
    if (ctx->pc == 0x1EAD3Cu) {
        ctx->pc = 0x1EAD3Cu;
            // 0x1ead3c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x1EAD40u;
        goto label_1ead40;
    }
    ctx->pc = 0x1EAD38u;
    {
        const bool branch_taken_0x1ead38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ead38) {
            ctx->pc = 0x1EAD3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD38u;
            // 0x1ead3c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAD4Cu;
            goto label_1ead4c;
        }
    }
    ctx->pc = 0x1EAD40u;
label_1ead40:
    // 0x1ead40: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ead44:
    if (ctx->pc == 0x1EAD44u) {
        ctx->pc = 0x1EAD48u;
        goto label_1ead48;
    }
    ctx->pc = 0x1EAD40u;
    {
        const bool branch_taken_0x1ead40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ead40) {
            ctx->pc = 0x1EAD4Cu;
            goto label_1ead4c;
        }
    }
    ctx->pc = 0x1EAD48u;
label_1ead48:
    // 0x1ead48: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x1ead48u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_1ead4c:
    // 0x1ead4c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ead4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ead50:
    // 0x1ead50: 0x0  nop
    ctx->pc = 0x1ead50u;
    // NOP
label_1ead54:
    // 0x1ead54: 0x460d0836  c.le.s      $f1, $f13
    ctx->pc = 0x1ead54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ead58:
    // 0x1ead58: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_1ead5c:
    if (ctx->pc == 0x1EAD5Cu) {
        ctx->pc = 0x1EAD5Cu;
            // 0x1ead5c: 0x46006846  mov.s       $f1, $f13 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1EAD60u;
        goto label_1ead60;
    }
    ctx->pc = 0x1EAD58u;
    {
        const bool branch_taken_0x1ead58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ead58) {
            ctx->pc = 0x1EAD5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD58u;
            // 0x1ead5c: 0x46006846  mov.s       $f1, $f13 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAD6Cu;
            goto label_1ead6c;
        }
    }
    ctx->pc = 0x1EAD60u;
label_1ead60:
    // 0x1ead60: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ead64:
    if (ctx->pc == 0x1EAD64u) {
        ctx->pc = 0x1EAD68u;
        goto label_1ead68;
    }
    ctx->pc = 0x1EAD60u;
    {
        const bool branch_taken_0x1ead60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ead60) {
            ctx->pc = 0x1EAD6Cu;
            goto label_1ead6c;
        }
    }
    ctx->pc = 0x1EAD68u;
label_1ead68:
    // 0x1ead68: 0x46006846  mov.s       $f1, $f13
    ctx->pc = 0x1ead68u;
    ctx->f[1] = FPU_MOV_S(ctx->f[13]);
label_1ead6c:
    // 0x1ead6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ead6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ead70:
    // 0x1ead70: 0x0  nop
    ctx->pc = 0x1ead70u;
    // NOP
label_1ead74:
    // 0x1ead74: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1ead74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ead78:
    // 0x1ead78: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_1ead7c:
    if (ctx->pc == 0x1EAD7Cu) {
        ctx->pc = 0x1EAD7Cu;
            // 0x1ead7c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1EAD80u;
        goto label_1ead80;
    }
    ctx->pc = 0x1EAD78u;
    {
        const bool branch_taken_0x1ead78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ead78) {
            ctx->pc = 0x1EAD7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD78u;
            // 0x1ead7c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAD8Cu;
            goto label_1ead8c;
        }
    }
    ctx->pc = 0x1EAD80u;
label_1ead80:
    // 0x1ead80: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ead84:
    if (ctx->pc == 0x1EAD84u) {
        ctx->pc = 0x1EAD84u;
            // 0x1ead84: 0xc64d0004  lwc1        $f13, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x1EAD88u;
        goto label_1ead88;
    }
    ctx->pc = 0x1EAD80u;
    {
        const bool branch_taken_0x1ead80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD80u;
            // 0x1ead84: 0xc64d0004  lwc1        $f13, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead80) {
            ctx->pc = 0x1EAD90u;
            goto label_1ead90;
        }
    }
    ctx->pc = 0x1EAD88u;
label_1ead88:
    // 0x1ead88: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1ead88u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_1ead8c:
    // 0x1ead8c: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x1ead8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ead90:
    // 0x1ead90: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1ead90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1ead94:
    // 0x1ead94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ead94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ead98:
    // 0x1ead98: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1ead98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_1ead9c:
    // 0x1ead9c: 0x460da582  mul.s       $f22, $f20, $f13
    ctx->pc = 0x1ead9cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
label_1eada0:
    // 0x1eada0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1eada0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1eada4:
    // 0x1eada4: 0xc7ad00cc  lwc1        $f13, 0xCC($sp)
    ctx->pc = 0x1eada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1eada8:
    // 0x1eada8: 0xc7b500b0  lwc1        $f21, 0xB0($sp)
    ctx->pc = 0x1eada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1eadac:
    // 0x1eadac: 0xc7b300b4  lwc1        $f19, 0xB4($sp)
    ctx->pc = 0x1eadacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_1eadb0:
    // 0x1eadb0: 0x46166b40  add.s       $f13, $f13, $f22
    ctx->pc = 0x1eadb0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[22]);
label_1eadb4:
    // 0x1eadb4: 0xe7ad00cc  swc1        $f13, 0xCC($sp)
    ctx->pc = 0x1eadb4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1eadb8:
    // 0x1eadb8: 0x46076342  mul.s       $f13, $f12, $f7
    ctx->pc = 0x1eadb8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
label_1eadbc:
    // 0x1eadbc: 0x460b61c2  mul.s       $f7, $f12, $f11
    ctx->pc = 0x1eadbcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
label_1eadc0:
    // 0x1eadc0: 0x44825800  mtc1        $v0, $f11
    ctx->pc = 0x1eadc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1eadc4:
    // 0x1eadc4: 0xc7b200b8  lwc1        $f18, 0xB8($sp)
    ctx->pc = 0x1eadc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_1eadc8:
    // 0x1eadc8: 0xc7b100bc  lwc1        $f17, 0xBC($sp)
    ctx->pc = 0x1eadc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_1eadcc:
    // 0x1eadcc: 0xc7b000c0  lwc1        $f16, 0xC0($sp)
    ctx->pc = 0x1eadccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1eadd0:
    // 0x1eadd0: 0xc7af00c4  lwc1        $f15, 0xC4($sp)
    ctx->pc = 0x1eadd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1eadd4:
    // 0x1eadd4: 0xc7ae00c8  lwc1        $f14, 0xC8($sp)
    ctx->pc = 0x1eadd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1eadd8:
    // 0x1eadd8: 0x4616ad01  sub.s       $f20, $f21, $f22
    ctx->pc = 0x1eadd8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
label_1eaddc:
    // 0x1eaddc: 0x46169cc1  sub.s       $f19, $f19, $f22
    ctx->pc = 0x1eaddcu;
    ctx->f[19] = FPU_SUB_S(ctx->f[19], ctx->f[22]);
label_1eade0:
    // 0x1eade0: 0x46169481  sub.s       $f18, $f18, $f22
    ctx->pc = 0x1eade0u;
    ctx->f[18] = FPU_SUB_S(ctx->f[18], ctx->f[22]);
label_1eade4:
    // 0x1eade4: 0x46168c41  sub.s       $f17, $f17, $f22
    ctx->pc = 0x1eade4u;
    ctx->f[17] = FPU_SUB_S(ctx->f[17], ctx->f[22]);
label_1eade8:
    // 0x1eade8: 0x46168400  add.s       $f16, $f16, $f22
    ctx->pc = 0x1eade8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[22]);
label_1eadec:
    // 0x1eadec: 0x46167bc0  add.s       $f15, $f15, $f22
    ctx->pc = 0x1eadecu;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[22]);
label_1eadf0:
    // 0x1eadf0: 0x46167380  add.s       $f14, $f14, $f22
    ctx->pc = 0x1eadf0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[22]);
label_1eadf4:
    // 0x1eadf4: 0x460a6282  mul.s       $f10, $f12, $f10
    ctx->pc = 0x1eadf4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
label_1eadf8:
    // 0x1eadf8: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x1eadf8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
label_1eadfc:
    // 0x1eadfc: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x1eadfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_1eae00:
    // 0x1eae00: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x1eae00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_1eae04:
    // 0x1eae04: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1eae04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1eae08:
    // 0x1eae08: 0x46096242  mul.s       $f9, $f12, $f9
    ctx->pc = 0x1eae08u;
    ctx->f[9] = FPU_MUL_S(ctx->f[12], ctx->f[9]);
label_1eae0c:
    // 0x1eae0c: 0x46086202  mul.s       $f8, $f12, $f8
    ctx->pc = 0x1eae0cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
label_1eae10:
    // 0x1eae10: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x1eae10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
label_1eae14:
    // 0x1eae14: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x1eae14u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
label_1eae18:
    // 0x1eae18: 0x46065982  mul.s       $f6, $f11, $f6
    ctx->pc = 0x1eae18u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
label_1eae1c:
    // 0x1eae1c: 0x46035034  c.lt.s      $f10, $f3
    ctx->pc = 0x1eae1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eae20:
    // 0x1eae20: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1eae20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1eae24:
    // 0x1eae24: 0xe7b300b4  swc1        $f19, 0xB4($sp)
    ctx->pc = 0x1eae24u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1eae28:
    // 0x1eae28: 0xe7b200b8  swc1        $f18, 0xB8($sp)
    ctx->pc = 0x1eae28u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1eae2c:
    // 0x1eae2c: 0xe7b100bc  swc1        $f17, 0xBC($sp)
    ctx->pc = 0x1eae2cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1eae30:
    // 0x1eae30: 0xe7b000c0  swc1        $f16, 0xC0($sp)
    ctx->pc = 0x1eae30u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1eae34:
    // 0x1eae34: 0xe7af00c4  swc1        $f15, 0xC4($sp)
    ctx->pc = 0x1eae34u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1eae38:
    // 0x1eae38: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1eae3c:
    if (ctx->pc == 0x1EAE3Cu) {
        ctx->pc = 0x1EAE3Cu;
            // 0x1eae3c: 0xe7ae00c8  swc1        $f14, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x1EAE40u;
        goto label_1eae40;
    }
    ctx->pc = 0x1EAE38u;
    {
        const bool branch_taken_0x1eae38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EAE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE38u;
            // 0x1eae3c: 0xe7ae00c8  swc1        $f14, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae38) {
            ctx->pc = 0x1EAE48u;
            goto label_1eae48;
        }
    }
    ctx->pc = 0x1EAE40u;
label_1eae40:
    // 0x1eae40: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eae44:
    if (ctx->pc == 0x1EAE44u) {
        ctx->pc = 0x1EAE48u;
        goto label_1eae48;
    }
    ctx->pc = 0x1EAE40u;
    {
        const bool branch_taken_0x1eae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eae40) {
            ctx->pc = 0x1EAE4Cu;
            goto label_1eae4c;
        }
    }
    ctx->pc = 0x1EAE48u;
label_1eae48:
    // 0x1eae48: 0x46001a86  mov.s       $f10, $f3
    ctx->pc = 0x1eae48u;
    ctx->f[10] = FPU_MOV_S(ctx->f[3]);
label_1eae4c:
    // 0x1eae4c: 0x46044834  c.lt.s      $f9, $f4
    ctx->pc = 0x1eae4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eae50:
    // 0x1eae50: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1eae54:
    if (ctx->pc == 0x1EAE54u) {
        ctx->pc = 0x1EAE54u;
            // 0x1eae54: 0x46002246  mov.s       $f9, $f4 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[4]);
        ctx->pc = 0x1EAE58u;
        goto label_1eae58;
    }
    ctx->pc = 0x1EAE50u;
    {
        const bool branch_taken_0x1eae50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eae50) {
            ctx->pc = 0x1EAE54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE50u;
            // 0x1eae54: 0x46002246  mov.s       $f9, $f4 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAE64u;
            goto label_1eae64;
        }
    }
    ctx->pc = 0x1EAE58u;
label_1eae58:
    // 0x1eae58: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eae5c:
    if (ctx->pc == 0x1EAE5Cu) {
        ctx->pc = 0x1EAE60u;
        goto label_1eae60;
    }
    ctx->pc = 0x1EAE58u;
    {
        const bool branch_taken_0x1eae58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eae58) {
            ctx->pc = 0x1EAE64u;
            goto label_1eae64;
        }
    }
    ctx->pc = 0x1EAE60u;
label_1eae60:
    // 0x1eae60: 0x46002246  mov.s       $f9, $f4
    ctx->pc = 0x1eae60u;
    ctx->f[9] = FPU_MOV_S(ctx->f[4]);
label_1eae64:
    // 0x1eae64: 0x46054034  c.lt.s      $f8, $f5
    ctx->pc = 0x1eae64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eae68:
    // 0x1eae68: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1eae6c:
    if (ctx->pc == 0x1EAE6Cu) {
        ctx->pc = 0x1EAE6Cu;
            // 0x1eae6c: 0x46002a06  mov.s       $f8, $f5 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[5]);
        ctx->pc = 0x1EAE70u;
        goto label_1eae70;
    }
    ctx->pc = 0x1EAE68u;
    {
        const bool branch_taken_0x1eae68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eae68) {
            ctx->pc = 0x1EAE6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE68u;
            // 0x1eae6c: 0x46002a06  mov.s       $f8, $f5 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAE7Cu;
            goto label_1eae7c;
        }
    }
    ctx->pc = 0x1EAE70u;
label_1eae70:
    // 0x1eae70: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eae74:
    if (ctx->pc == 0x1EAE74u) {
        ctx->pc = 0x1EAE78u;
        goto label_1eae78;
    }
    ctx->pc = 0x1EAE70u;
    {
        const bool branch_taken_0x1eae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eae70) {
            ctx->pc = 0x1EAE7Cu;
            goto label_1eae7c;
        }
    }
    ctx->pc = 0x1EAE78u;
label_1eae78:
    // 0x1eae78: 0x46002a06  mov.s       $f8, $f5
    ctx->pc = 0x1eae78u;
    ctx->f[8] = FPU_MOV_S(ctx->f[5]);
label_1eae7c:
    // 0x1eae7c: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x1eae7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eae80:
    // 0x1eae80: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1eae84:
    if (ctx->pc == 0x1EAE84u) {
        ctx->pc = 0x1EAE84u;
            // 0x1eae84: 0x460031c6  mov.s       $f7, $f6 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[6]);
        ctx->pc = 0x1EAE88u;
        goto label_1eae88;
    }
    ctx->pc = 0x1EAE80u;
    {
        const bool branch_taken_0x1eae80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eae80) {
            ctx->pc = 0x1EAE84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE80u;
            // 0x1eae84: 0x460031c6  mov.s       $f7, $f6 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAE94u;
            goto label_1eae94;
        }
    }
    ctx->pc = 0x1EAE88u;
label_1eae88:
    // 0x1eae88: 0x10000003  b           . + 4 + (0x3 << 2)
label_1eae8c:
    if (ctx->pc == 0x1EAE8Cu) {
        ctx->pc = 0x1EAE8Cu;
            // 0x1eae8c: 0x460018c7  neg.s       $f3, $f3 (Delay Slot)
        ctx->f[3] = FPU_NEG_S(ctx->f[3]);
        ctx->pc = 0x1EAE90u;
        goto label_1eae90;
    }
    ctx->pc = 0x1EAE88u;
    {
        const bool branch_taken_0x1eae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE88u;
            // 0x1eae8c: 0x460018c7  neg.s       $f3, $f3 (Delay Slot)
        ctx->f[3] = FPU_NEG_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae88) {
            ctx->pc = 0x1EAE98u;
            goto label_1eae98;
        }
    }
    ctx->pc = 0x1EAE90u;
label_1eae90:
    // 0x1eae90: 0x460031c6  mov.s       $f7, $f6
    ctx->pc = 0x1eae90u;
    ctx->f[7] = FPU_MOV_S(ctx->f[6]);
label_1eae94:
    // 0x1eae94: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x1eae94u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_1eae98:
    // 0x1eae98: 0x46036836  c.le.s      $f13, $f3
    ctx->pc = 0x1eae98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eae9c:
    // 0x1eae9c: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x1eae9cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_1eaea0:
    // 0x1eaea0: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x1eaea0u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
label_1eaea4:
    // 0x1eaea4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1eaea8:
    if (ctx->pc == 0x1EAEA8u) {
        ctx->pc = 0x1EAEA8u;
            // 0x1eaea8: 0x46003187  neg.s       $f6, $f6 (Delay Slot)
        ctx->f[6] = FPU_NEG_S(ctx->f[6]);
        ctx->pc = 0x1EAEACu;
        goto label_1eaeac;
    }
    ctx->pc = 0x1EAEA4u;
    {
        const bool branch_taken_0x1eaea4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EAEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAEA4u;
            // 0x1eaea8: 0x46003187  neg.s       $f6, $f6 (Delay Slot)
        ctx->f[6] = FPU_NEG_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaea4) {
            ctx->pc = 0x1EAEB4u;
            goto label_1eaeb4;
        }
    }
    ctx->pc = 0x1EAEACu;
label_1eaeac:
    // 0x1eaeac: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eaeb0:
    if (ctx->pc == 0x1EAEB0u) {
        ctx->pc = 0x1EAEB4u;
        goto label_1eaeb4;
    }
    ctx->pc = 0x1EAEACu;
    {
        const bool branch_taken_0x1eaeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaeac) {
            ctx->pc = 0x1EAEB8u;
            goto label_1eaeb8;
        }
    }
    ctx->pc = 0x1EAEB4u;
label_1eaeb4:
    // 0x1eaeb4: 0x46001b46  mov.s       $f13, $f3
    ctx->pc = 0x1eaeb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[3]);
label_1eaeb8:
    // 0x1eaeb8: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x1eaeb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eaebc:
    // 0x1eaebc: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_1eaec0:
    if (ctx->pc == 0x1EAEC0u) {
        ctx->pc = 0x1EAEC0u;
            // 0x1eaec0: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[4]);
        ctx->pc = 0x1EAEC4u;
        goto label_1eaec4;
    }
    ctx->pc = 0x1EAEBCu;
    {
        const bool branch_taken_0x1eaebc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eaebc) {
            ctx->pc = 0x1EAEC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAEBCu;
            // 0x1eaec0: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAED0u;
            goto label_1eaed0;
        }
    }
    ctx->pc = 0x1EAEC4u;
label_1eaec4:
    // 0x1eaec4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eaec8:
    if (ctx->pc == 0x1EAEC8u) {
        ctx->pc = 0x1EAECCu;
        goto label_1eaecc;
    }
    ctx->pc = 0x1EAEC4u;
    {
        const bool branch_taken_0x1eaec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaec4) {
            ctx->pc = 0x1EAED0u;
            goto label_1eaed0;
        }
    }
    ctx->pc = 0x1EAECCu;
label_1eaecc:
    // 0x1eaecc: 0x46002086  mov.s       $f2, $f4
    ctx->pc = 0x1eaeccu;
    ctx->f[2] = FPU_MOV_S(ctx->f[4]);
label_1eaed0:
    // 0x1eaed0: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x1eaed0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eaed4:
    // 0x1eaed4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_1eaed8:
    if (ctx->pc == 0x1EAED8u) {
        ctx->pc = 0x1EAED8u;
            // 0x1eaed8: 0x46002846  mov.s       $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[5]);
        ctx->pc = 0x1EAEDCu;
        goto label_1eaedc;
    }
    ctx->pc = 0x1EAED4u;
    {
        const bool branch_taken_0x1eaed4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eaed4) {
            ctx->pc = 0x1EAED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAED4u;
            // 0x1eaed8: 0x46002846  mov.s       $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAEE8u;
            goto label_1eaee8;
        }
    }
    ctx->pc = 0x1EAEDCu;
label_1eaedc:
    // 0x1eaedc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eaee0:
    if (ctx->pc == 0x1EAEE0u) {
        ctx->pc = 0x1EAEE4u;
        goto label_1eaee4;
    }
    ctx->pc = 0x1EAEDCu;
    {
        const bool branch_taken_0x1eaedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaedc) {
            ctx->pc = 0x1EAEE8u;
            goto label_1eaee8;
        }
    }
    ctx->pc = 0x1EAEE4u;
label_1eaee4:
    // 0x1eaee4: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x1eaee4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
label_1eaee8:
    // 0x1eaee8: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x1eaee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eaeec:
    // 0x1eaeec: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_1eaef0:
    if (ctx->pc == 0x1EAEF0u) {
        ctx->pc = 0x1EAEF0u;
            // 0x1eaef0: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->pc = 0x1EAEF4u;
        goto label_1eaef4;
    }
    ctx->pc = 0x1EAEECu;
    {
        const bool branch_taken_0x1eaeec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eaeec) {
            ctx->pc = 0x1EAEF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAEECu;
            // 0x1eaef0: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAF00u;
            goto label_1eaf00;
        }
    }
    ctx->pc = 0x1EAEF4u;
label_1eaef4:
    // 0x1eaef4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1eaef8:
    if (ctx->pc == 0x1EAEF8u) {
        ctx->pc = 0x1EAEF8u;
            // 0x1eaef8: 0xc7ab00b8  lwc1        $f11, 0xB8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
        ctx->pc = 0x1EAEFCu;
        goto label_1eaefc;
    }
    ctx->pc = 0x1EAEF4u;
    {
        const bool branch_taken_0x1eaef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAEF4u;
            // 0x1eaef8: 0xc7ab00b8  lwc1        $f11, 0xB8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaef4) {
            ctx->pc = 0x1EAF04u;
            goto label_1eaf04;
        }
    }
    ctx->pc = 0x1EAEFCu;
label_1eaefc:
    // 0x1eaefc: 0x46003006  mov.s       $f0, $f6
    ctx->pc = 0x1eaefcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[6]);
label_1eaf00:
    // 0x1eaf00: 0xc7ab00b8  lwc1        $f11, 0xB8($sp)
    ctx->pc = 0x1eaf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1eaf04:
    // 0x1eaf04: 0xc7a600bc  lwc1        $f6, 0xBC($sp)
    ctx->pc = 0x1eaf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1eaf08:
    // 0x1eaf08: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x1eaf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1eaf0c:
    // 0x1eaf0c: 0xc7ac00b4  lwc1        $f12, 0xB4($sp)
    ctx->pc = 0x1eaf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1eaf10:
    // 0x1eaf10: 0x46015840  add.s       $f1, $f11, $f1
    ctx->pc = 0x1eaf10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
label_1eaf14:
    // 0x1eaf14: 0x460d1b40  add.s       $f13, $f3, $f13
    ctx->pc = 0x1eaf14u;
    ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
label_1eaf18:
    // 0x1eaf18: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x1eaf18u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_1eaf1c:
    // 0x1eaf1c: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x1eaf1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_1eaf20:
    // 0x1eaf20: 0xc7a500c0  lwc1        $f5, 0xC0($sp)
    ctx->pc = 0x1eaf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1eaf24:
    // 0x1eaf24: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x1eaf24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1eaf28:
    // 0x1eaf28: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x1eaf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1eaf2c:
    // 0x1eaf2c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1eaf2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1eaf30:
    // 0x1eaf30: 0x460a2840  add.s       $f1, $f5, $f10
    ctx->pc = 0x1eaf30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
label_1eaf34:
    // 0x1eaf34: 0x46092000  add.s       $f0, $f4, $f9
    ctx->pc = 0x1eaf34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[9]);
label_1eaf38:
    // 0x1eaf38: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x1eaf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1eaf3c:
    // 0x1eaf3c: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1eaf3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1eaf40:
    // 0x1eaf40: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x1eaf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1eaf44:
    // 0x1eaf44: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1eaf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1eaf48:
    // 0x1eaf48: 0x46081840  add.s       $f1, $f3, $f8
    ctx->pc = 0x1eaf48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
label_1eaf4c:
    // 0x1eaf4c: 0x46071000  add.s       $f0, $f2, $f7
    ctx->pc = 0x1eaf4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_1eaf50:
    // 0x1eaf50: 0xe7ad00b0  swc1        $f13, 0xB0($sp)
    ctx->pc = 0x1eaf50u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1eaf54:
    // 0x1eaf54: 0xe7ac00b4  swc1        $f12, 0xB4($sp)
    ctx->pc = 0x1eaf54u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1eaf58:
    // 0x1eaf58: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x1eaf58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1eaf5c:
    // 0x1eaf5c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1eaf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1eaf60:
    // 0x1eaf60: 0xe68d0010  swc1        $f13, 0x10($s4)
    ctx->pc = 0x1eaf60u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
label_1eaf64:
    // 0x1eaf64: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1eaf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaf68:
    // 0x1eaf68: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x1eaf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
label_1eaf6c:
    // 0x1eaf6c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1eaf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaf70:
    // 0x1eaf70: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x1eaf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_1eaf74:
    // 0x1eaf74: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1eaf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaf78:
    // 0x1eaf78: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x1eaf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
label_1eaf7c:
    // 0x1eaf7c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1eaf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaf80:
    // 0x1eaf80: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x1eaf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_1eaf84:
    // 0x1eaf84: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1eaf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaf88:
    // 0x1eaf88: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x1eaf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_1eaf8c:
    // 0x1eaf8c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1eaf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaf90:
    // 0x1eaf90: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x1eaf90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_1eaf94:
    // 0x1eaf94: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1eaf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaf98:
    // 0x1eaf98: 0xe680002c  swc1        $f0, 0x2C($s4)
    ctx->pc = 0x1eaf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
label_1eaf9c:
    // 0x1eaf9c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1eaf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eafa0:
    // 0x1eafa0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1eafa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1eafa4:
    // 0x1eafa4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1eafa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1eafa8:
    // 0x1eafa8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1eafa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1eafac:
    // 0x1eafac: 0x320f809  jalr        $t9
label_1eafb0:
    if (ctx->pc == 0x1EAFB0u) {
        ctx->pc = 0x1EAFB0u;
            // 0x1eafb0: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1EAFB4u;
        goto label_1eafb4;
    }
    ctx->pc = 0x1EAFACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EAFB4u);
        ctx->pc = 0x1EAFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAFACu;
            // 0x1eafb0: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EAFB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EAFB4u; }
            if (ctx->pc != 0x1EAFB4u) { return; }
        }
        }
    }
    ctx->pc = 0x1EAFB4u;
label_1eafb4:
    // 0x1eafb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eafb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eafb8:
    // 0x1eafb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1eafb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1eafbc:
    // 0x1eafbc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1eafbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1eafc0:
    // 0x1eafc0: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1eafc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1eafc4:
    // 0x1eafc4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1eafc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1eafc8:
    // 0x1eafc8: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1eafc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1eafcc:
    // 0x1eafcc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1eafccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1eafd0:
    // 0x1eafd0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1eafd4:
    if (ctx->pc == 0x1EAFD4u) {
        ctx->pc = 0x1EAFD4u;
            // 0x1eafd4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1EAFD8u;
        goto label_1eafd8;
    }
    ctx->pc = 0x1EAFD0u;
    {
        const bool branch_taken_0x1eafd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAFD0u;
            // 0x1eafd4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eafd0) {
            ctx->pc = 0x1EB000u;
            goto label_1eb000;
        }
    }
    ctx->pc = 0x1EAFD8u;
label_1eafd8:
    // 0x1eafd8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1eafd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1eafdc:
    // 0x1eafdc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1eafdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1eafe0:
    // 0x1eafe0: 0x2463ab30  addiu       $v1, $v1, -0x54D0
    ctx->pc = 0x1eafe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945584));
label_1eafe4:
    // 0x1eafe4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1eafe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1eafe8:
    // 0x1eafe8: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1eafe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1eafec:
    // 0x1eafec: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1eafecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1eaff0:
    // 0x1eaff0: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1eaff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1eaff4:
    // 0x1eaff4: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1eaff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1eaff8:
    // 0x1eaff8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1eaff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1eaffc:
    // 0x1eaffc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1eaffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1eb000:
    // 0x1eb000: 0x54e00050  bnel        $a3, $zero, . + 4 + (0x50 << 2)
label_1eb004:
    if (ctx->pc == 0x1EB004u) {
        ctx->pc = 0x1EB004u;
            // 0x1eb004: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1EB008u;
        goto label_1eb008;
    }
    ctx->pc = 0x1EB000u;
    {
        const bool branch_taken_0x1eb000 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb000) {
            ctx->pc = 0x1EB004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB000u;
            // 0x1eb004: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB144u;
            goto label_1eb144;
        }
    }
    ctx->pc = 0x1EB008u;
label_1eb008:
    // 0x1eb008: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x1eb008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_1eb00c:
    // 0x1eb00c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_1eb010:
    if (ctx->pc == 0x1EB010u) {
        ctx->pc = 0x1EB010u;
            // 0x1eb010: 0x51883  sra         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 2));
        ctx->pc = 0x1EB014u;
        goto label_1eb014;
    }
    ctx->pc = 0x1EB00Cu;
    {
        const bool branch_taken_0x1eb00c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1EB010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB00Cu;
            // 0x1eb010: 0x51883  sra         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb00c) {
            ctx->pc = 0x1EB01Cu;
            goto label_1eb01c;
        }
    }
    ctx->pc = 0x1EB014u;
label_1eb014:
    // 0x1eb014: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x1eb014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1eb018:
    // 0x1eb018: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1eb018u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1eb01c:
    // 0x1eb01c: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1eb01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1eb020:
    // 0x1eb020: 0x8e840034  lw          $a0, 0x34($s4)
    ctx->pc = 0x1eb020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_1eb024:
    // 0x1eb024: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1eb024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1eb028:
    // 0x1eb028: 0x8c67ea20  lw          $a3, -0x15E0($v1)
    ctx->pc = 0x1eb028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961696)));
label_1eb02c:
    // 0x1eb02c: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x1eb02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1eb030:
    // 0x1eb030: 0x34240  sll         $t0, $v1, 9
    ctx->pc = 0x1eb030u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_1eb034:
    // 0x1eb034: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x1eb034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_1eb038:
    // 0x1eb038: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x1eb038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_1eb03c:
    // 0x1eb03c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1eb03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1eb040:
    // 0x1eb040: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1eb040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1eb044:
    // 0x1eb044: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1eb044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1eb048:
    // 0x1eb048: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_1eb04c:
    if (ctx->pc == 0x1EB04Cu) {
        ctx->pc = 0x1EB04Cu;
            // 0x1eb04c: 0x641823  subu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x1EB050u;
        goto label_1eb050;
    }
    ctx->pc = 0x1EB048u;
    {
        const bool branch_taken_0x1eb048 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb048) {
            ctx->pc = 0x1EB04Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB048u;
            // 0x1eb04c: 0x641823  subu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB05Cu;
            goto label_1eb05c;
        }
    }
    ctx->pc = 0x1EB050u;
label_1eb050:
    // 0x1eb050: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eb054:
    if (ctx->pc == 0x1EB054u) {
        ctx->pc = 0x1EB054u;
            // 0x1eb054: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EB058u;
        goto label_1eb058;
    }
    ctx->pc = 0x1EB050u;
    {
        const bool branch_taken_0x1eb050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB050u;
            // 0x1eb054: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb050) {
            ctx->pc = 0x1EB05Cu;
            goto label_1eb05c;
        }
    }
    ctx->pc = 0x1EB058u;
label_1eb058:
    // 0x1eb058: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1eb058u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1eb05c:
    // 0x1eb05c: 0x68082a  slt         $at, $v1, $t0
    ctx->pc = 0x1eb05cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1eb060:
    // 0x1eb060: 0x50200026  beql        $at, $zero, . + 4 + (0x26 << 2)
label_1eb064:
    if (ctx->pc == 0x1EB064u) {
        ctx->pc = 0x1EB064u;
            // 0x1eb064: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->pc = 0x1EB068u;
        goto label_1eb068;
    }
    ctx->pc = 0x1EB060u;
    {
        const bool branch_taken_0x1eb060 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb060) {
            ctx->pc = 0x1EB064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB060u;
            // 0x1eb064: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB0FCu;
            goto label_1eb0fc;
        }
    }
    ctx->pc = 0x1EB068u;
label_1eb068:
    // 0x1eb068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eb068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb06c:
    // 0x1eb06c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1eb06cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1eb070:
    // 0x1eb070: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1eb070u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_1eb074:
    // 0x1eb074: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1eb074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1eb078:
    // 0x1eb078: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1eb078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1eb07c:
    // 0x1eb07c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1eb07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1eb080:
    // 0x1eb080: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1eb080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1eb084:
    // 0x1eb084: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1eb084u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1eb088:
    // 0x1eb088: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1eb08c:
    if (ctx->pc == 0x1EB08Cu) {
        ctx->pc = 0x1EB08Cu;
            // 0x1eb08c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1EB090u;
        goto label_1eb090;
    }
    ctx->pc = 0x1EB088u;
    {
        const bool branch_taken_0x1eb088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB088u;
            // 0x1eb08c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb088) {
            ctx->pc = 0x1EB0B8u;
            goto label_1eb0b8;
        }
    }
    ctx->pc = 0x1EB090u;
label_1eb090:
    // 0x1eb090: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1eb090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1eb094:
    // 0x1eb094: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1eb094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1eb098:
    // 0x1eb098: 0x2463ab40  addiu       $v1, $v1, -0x54C0
    ctx->pc = 0x1eb098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945600));
label_1eb09c:
    // 0x1eb09c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1eb09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1eb0a0:
    // 0x1eb0a0: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1eb0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1eb0a4:
    // 0x1eb0a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1eb0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1eb0a8:
    // 0x1eb0a8: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1eb0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1eb0ac:
    // 0x1eb0ac: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1eb0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1eb0b0:
    // 0x1eb0b0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1eb0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1eb0b4:
    // 0x1eb0b4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1eb0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1eb0b8:
    // 0x1eb0b8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x1eb0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_1eb0bc:
    // 0x1eb0bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1eb0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1eb0c0:
    // 0x1eb0c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1eb0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1eb0c4:
    // 0x1eb0c4: 0x5460004c  bnel        $v1, $zero, . + 4 + (0x4C << 2)
label_1eb0c8:
    if (ctx->pc == 0x1EB0C8u) {
        ctx->pc = 0x1EB0C8u;
            // 0x1eb0c8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x1EB0CCu;
        goto label_1eb0cc;
    }
    ctx->pc = 0x1EB0C4u;
    {
        const bool branch_taken_0x1eb0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb0c4) {
            ctx->pc = 0x1EB0C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0C4u;
            // 0x1eb0c8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB1F8u;
            goto label_1eb1f8;
        }
    }
    ctx->pc = 0x1EB0CCu;
label_1eb0cc:
    // 0x1eb0cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1eb0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1eb0d0:
    // 0x1eb0d0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x1eb0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_1eb0d4:
    // 0x1eb0d4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1eb0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1eb0d8:
    // 0x1eb0d8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1eb0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1eb0dc:
    // 0x1eb0dc: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x1eb0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1eb0e0:
    // 0x1eb0e0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1eb0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_1eb0e4:
    // 0x1eb0e4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1eb0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1eb0e8:
    // 0x1eb0e8: 0xc0a7ab4  jal         func_29EAD0
label_1eb0ec:
    if (ctx->pc == 0x1EB0ECu) {
        ctx->pc = 0x1EB0ECu;
            // 0x1eb0ec: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1EB0F0u;
        goto label_1eb0f0;
    }
    ctx->pc = 0x1EB0E8u;
    SET_GPR_U32(ctx, 31, 0x1EB0F0u);
    ctx->pc = 0x1EB0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0E8u;
            // 0x1eb0ec: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0F0u; }
        if (ctx->pc != 0x1EB0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0F0u; }
        if (ctx->pc != 0x1EB0F0u) { return; }
    }
    ctx->pc = 0x1EB0F0u;
label_1eb0f0:
    // 0x1eb0f0: 0x10000040  b           . + 4 + (0x40 << 2)
label_1eb0f4:
    if (ctx->pc == 0x1EB0F4u) {
        ctx->pc = 0x1EB0F8u;
        goto label_1eb0f8;
    }
    ctx->pc = 0x1EB0F0u;
    {
        const bool branch_taken_0x1eb0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb0f0) {
            ctx->pc = 0x1EB1F4u;
            goto label_1eb1f4;
        }
    }
    ctx->pc = 0x1EB0F8u;
label_1eb0f8:
    // 0x1eb0f8: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x1eb0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1eb0fc:
    // 0x1eb0fc: 0xc07a348  jal         func_1E8D20
label_1eb100:
    if (ctx->pc == 0x1EB100u) {
        ctx->pc = 0x1EB104u;
        goto label_1eb104;
    }
    ctx->pc = 0x1EB0FCu;
    SET_GPR_U32(ctx, 31, 0x1EB104u);
    ctx->pc = 0x1E8D20u;
    if (runtime->hasFunction(0x1E8D20u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB104u; }
        if (ctx->pc != 0x1EB104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8D20_0x1e8d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB104u; }
        if (ctx->pc != 0x1EB104u) { return; }
    }
    ctx->pc = 0x1EB104u;
label_1eb104:
    // 0x1eb104: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1eb104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eb108:
    // 0x1eb108: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1eb108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1eb10c:
    // 0x1eb10c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1eb10cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1eb110:
    // 0x1eb110: 0x320f809  jalr        $t9
label_1eb114:
    if (ctx->pc == 0x1EB114u) {
        ctx->pc = 0x1EB118u;
        goto label_1eb118;
    }
    ctx->pc = 0x1EB110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EB118u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EB118u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EB118u; }
            if (ctx->pc != 0x1EB118u) { return; }
        }
        }
    }
    ctx->pc = 0x1EB118u;
label_1eb118:
    // 0x1eb118: 0x8fa80110  lw          $t0, 0x110($sp)
    ctx->pc = 0x1eb118u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1eb11c:
    // 0x1eb11c: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1eb11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_1eb120:
    // 0x1eb120: 0x8fa90114  lw          $t1, 0x114($sp)
    ctx->pc = 0x1eb120u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_1eb124:
    // 0x1eb124: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1eb124u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1eb128:
    // 0x1eb128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb12c:
    // 0x1eb12c: 0x27a60320  addiu       $a2, $sp, 0x320
    ctx->pc = 0x1eb12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_1eb130:
    // 0x1eb130: 0xc091cc4  jal         func_247310
label_1eb134:
    if (ctx->pc == 0x1EB134u) {
        ctx->pc = 0x1EB134u;
            // 0x1eb134: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EB138u;
        goto label_1eb138;
    }
    ctx->pc = 0x1EB130u;
    SET_GPR_U32(ctx, 31, 0x1EB138u);
    ctx->pc = 0x1EB134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB130u;
            // 0x1eb134: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247310u;
    if (runtime->hasFunction(0x247310u)) {
        auto targetFn = runtime->lookupFunction(0x247310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB138u; }
        if (ctx->pc != 0x1EB138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247310_0x247310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB138u; }
        if (ctx->pc != 0x1EB138u) { return; }
    }
    ctx->pc = 0x1EB138u;
label_1eb138:
    // 0x1eb138: 0x1000000e  b           . + 4 + (0xE << 2)
label_1eb13c:
    if (ctx->pc == 0x1EB13Cu) {
        ctx->pc = 0x1EB140u;
        goto label_1eb140;
    }
    ctx->pc = 0x1EB138u;
    {
        const bool branch_taken_0x1eb138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb138) {
            ctx->pc = 0x1EB174u;
            goto label_1eb174;
        }
    }
    ctx->pc = 0x1EB140u;
label_1eb140:
    // 0x1eb140: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1eb140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eb144:
    // 0x1eb144: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1eb144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1eb148:
    // 0x1eb148: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1eb148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1eb14c:
    // 0x1eb14c: 0x320f809  jalr        $t9
label_1eb150:
    if (ctx->pc == 0x1EB150u) {
        ctx->pc = 0x1EB154u;
        goto label_1eb154;
    }
    ctx->pc = 0x1EB14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EB154u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EB154u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EB154u; }
            if (ctx->pc != 0x1EB154u) { return; }
        }
        }
    }
    ctx->pc = 0x1EB154u;
label_1eb154:
    // 0x1eb154: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1eb154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_1eb158:
    // 0x1eb158: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1eb158u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1eb15c:
    // 0x1eb15c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb160:
    // 0x1eb160: 0x27a60320  addiu       $a2, $sp, 0x320
    ctx->pc = 0x1eb160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_1eb164:
    // 0x1eb164: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1eb164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eb168:
    // 0x1eb168: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb16c:
    // 0x1eb16c: 0xc091cc4  jal         func_247310
label_1eb170:
    if (ctx->pc == 0x1EB170u) {
        ctx->pc = 0x1EB170u;
            // 0x1eb170: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EB174u;
        goto label_1eb174;
    }
    ctx->pc = 0x1EB16Cu;
    SET_GPR_U32(ctx, 31, 0x1EB174u);
    ctx->pc = 0x1EB170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB16Cu;
            // 0x1eb170: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247310u;
    if (runtime->hasFunction(0x247310u)) {
        auto targetFn = runtime->lookupFunction(0x247310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB174u; }
        if (ctx->pc != 0x1EB174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247310_0x247310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB174u; }
        if (ctx->pc != 0x1EB174u) { return; }
    }
    ctx->pc = 0x1EB174u;
label_1eb174:
    // 0x1eb174: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1eb174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1eb178:
    // 0x1eb178: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1eb178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1eb17c:
    // 0x1eb17c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1eb17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1eb180:
    // 0x1eb180: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1eb180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1eb184:
    // 0x1eb184: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1eb184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1eb188:
    // 0x1eb188: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1eb188u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1eb18c:
    // 0x1eb18c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1eb190:
    if (ctx->pc == 0x1EB190u) {
        ctx->pc = 0x1EB190u;
            // 0x1eb190: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1EB194u;
        goto label_1eb194;
    }
    ctx->pc = 0x1EB18Cu;
    {
        const bool branch_taken_0x1eb18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB18Cu;
            // 0x1eb190: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb18c) {
            ctx->pc = 0x1EB1BCu;
            goto label_1eb1bc;
        }
    }
    ctx->pc = 0x1EB194u;
label_1eb194:
    // 0x1eb194: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1eb194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1eb198:
    // 0x1eb198: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1eb198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1eb19c:
    // 0x1eb19c: 0x2463ab40  addiu       $v1, $v1, -0x54C0
    ctx->pc = 0x1eb19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945600));
label_1eb1a0:
    // 0x1eb1a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1eb1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1eb1a4:
    // 0x1eb1a4: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1eb1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1eb1a8:
    // 0x1eb1a8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1eb1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1eb1ac:
    // 0x1eb1ac: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1eb1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1eb1b0:
    // 0x1eb1b0: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1eb1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1eb1b4:
    // 0x1eb1b4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1eb1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1eb1b8:
    // 0x1eb1b8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1eb1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1eb1bc:
    // 0x1eb1bc: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x1eb1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_1eb1c0:
    // 0x1eb1c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1eb1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1eb1c4:
    // 0x1eb1c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1eb1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1eb1c8:
    // 0x1eb1c8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1eb1cc:
    if (ctx->pc == 0x1EB1CCu) {
        ctx->pc = 0x1EB1D0u;
        goto label_1eb1d0;
    }
    ctx->pc = 0x1EB1C8u;
    {
        const bool branch_taken_0x1eb1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb1c8) {
            ctx->pc = 0x1EB1F4u;
            goto label_1eb1f4;
        }
    }
    ctx->pc = 0x1EB1D0u;
label_1eb1d0:
    // 0x1eb1d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1eb1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1eb1d4:
    // 0x1eb1d4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x1eb1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_1eb1d8:
    // 0x1eb1d8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1eb1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1eb1dc:
    // 0x1eb1dc: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1eb1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1eb1e0:
    // 0x1eb1e0: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x1eb1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1eb1e4:
    // 0x1eb1e4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1eb1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_1eb1e8:
    // 0x1eb1e8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1eb1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1eb1ec:
    // 0x1eb1ec: 0xc0a7ab4  jal         func_29EAD0
label_1eb1f0:
    if (ctx->pc == 0x1EB1F0u) {
        ctx->pc = 0x1EB1F0u;
            // 0x1eb1f0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1EB1F4u;
        goto label_1eb1f4;
    }
    ctx->pc = 0x1EB1ECu;
    SET_GPR_U32(ctx, 31, 0x1EB1F4u);
    ctx->pc = 0x1EB1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB1ECu;
            // 0x1eb1f0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB1F4u; }
        if (ctx->pc != 0x1EB1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB1F4u; }
        if (ctx->pc != 0x1EB1F4u) { return; }
    }
    ctx->pc = 0x1EB1F4u;
label_1eb1f4:
    // 0x1eb1f4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1eb1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1eb1f8:
    // 0x1eb1f8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1eb1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1eb1fc:
    // 0x1eb1fc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1eb1fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1eb200:
    // 0x1eb200: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1eb200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1eb204:
    // 0x1eb204: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1eb204u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1eb208:
    // 0x1eb208: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1eb208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1eb20c:
    // 0x1eb20c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1eb20cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1eb210:
    // 0x1eb210: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1eb210u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1eb214:
    // 0x1eb214: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1eb214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1eb218:
    // 0x1eb218: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1eb218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eb21c:
    // 0x1eb21c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1eb21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb220:
    // 0x1eb220: 0x3e00008  jr          $ra
label_1eb224:
    if (ctx->pc == 0x1EB224u) {
        ctx->pc = 0x1EB224u;
            // 0x1eb224: 0x27bd03a0  addiu       $sp, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->pc = 0x1EB228u;
        goto label_1eb228;
    }
    ctx->pc = 0x1EB220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB220u;
            // 0x1eb224: 0x27bd03a0  addiu       $sp, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB228u;
label_1eb228:
    // 0x1eb228: 0x0  nop
    ctx->pc = 0x1eb228u;
    // NOP
label_1eb22c:
    // 0x1eb22c: 0x0  nop
    ctx->pc = 0x1eb22cu;
    // NOP
}
