#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BA450
// Address: 0x4ba450 - 0x4bb240
void sub_004BA450_0x4ba450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BA450_0x4ba450");
#endif

    switch (ctx->pc) {
        case 0x4ba450u: goto label_4ba450;
        case 0x4ba454u: goto label_4ba454;
        case 0x4ba458u: goto label_4ba458;
        case 0x4ba45cu: goto label_4ba45c;
        case 0x4ba460u: goto label_4ba460;
        case 0x4ba464u: goto label_4ba464;
        case 0x4ba468u: goto label_4ba468;
        case 0x4ba46cu: goto label_4ba46c;
        case 0x4ba470u: goto label_4ba470;
        case 0x4ba474u: goto label_4ba474;
        case 0x4ba478u: goto label_4ba478;
        case 0x4ba47cu: goto label_4ba47c;
        case 0x4ba480u: goto label_4ba480;
        case 0x4ba484u: goto label_4ba484;
        case 0x4ba488u: goto label_4ba488;
        case 0x4ba48cu: goto label_4ba48c;
        case 0x4ba490u: goto label_4ba490;
        case 0x4ba494u: goto label_4ba494;
        case 0x4ba498u: goto label_4ba498;
        case 0x4ba49cu: goto label_4ba49c;
        case 0x4ba4a0u: goto label_4ba4a0;
        case 0x4ba4a4u: goto label_4ba4a4;
        case 0x4ba4a8u: goto label_4ba4a8;
        case 0x4ba4acu: goto label_4ba4ac;
        case 0x4ba4b0u: goto label_4ba4b0;
        case 0x4ba4b4u: goto label_4ba4b4;
        case 0x4ba4b8u: goto label_4ba4b8;
        case 0x4ba4bcu: goto label_4ba4bc;
        case 0x4ba4c0u: goto label_4ba4c0;
        case 0x4ba4c4u: goto label_4ba4c4;
        case 0x4ba4c8u: goto label_4ba4c8;
        case 0x4ba4ccu: goto label_4ba4cc;
        case 0x4ba4d0u: goto label_4ba4d0;
        case 0x4ba4d4u: goto label_4ba4d4;
        case 0x4ba4d8u: goto label_4ba4d8;
        case 0x4ba4dcu: goto label_4ba4dc;
        case 0x4ba4e0u: goto label_4ba4e0;
        case 0x4ba4e4u: goto label_4ba4e4;
        case 0x4ba4e8u: goto label_4ba4e8;
        case 0x4ba4ecu: goto label_4ba4ec;
        case 0x4ba4f0u: goto label_4ba4f0;
        case 0x4ba4f4u: goto label_4ba4f4;
        case 0x4ba4f8u: goto label_4ba4f8;
        case 0x4ba4fcu: goto label_4ba4fc;
        case 0x4ba500u: goto label_4ba500;
        case 0x4ba504u: goto label_4ba504;
        case 0x4ba508u: goto label_4ba508;
        case 0x4ba50cu: goto label_4ba50c;
        case 0x4ba510u: goto label_4ba510;
        case 0x4ba514u: goto label_4ba514;
        case 0x4ba518u: goto label_4ba518;
        case 0x4ba51cu: goto label_4ba51c;
        case 0x4ba520u: goto label_4ba520;
        case 0x4ba524u: goto label_4ba524;
        case 0x4ba528u: goto label_4ba528;
        case 0x4ba52cu: goto label_4ba52c;
        case 0x4ba530u: goto label_4ba530;
        case 0x4ba534u: goto label_4ba534;
        case 0x4ba538u: goto label_4ba538;
        case 0x4ba53cu: goto label_4ba53c;
        case 0x4ba540u: goto label_4ba540;
        case 0x4ba544u: goto label_4ba544;
        case 0x4ba548u: goto label_4ba548;
        case 0x4ba54cu: goto label_4ba54c;
        case 0x4ba550u: goto label_4ba550;
        case 0x4ba554u: goto label_4ba554;
        case 0x4ba558u: goto label_4ba558;
        case 0x4ba55cu: goto label_4ba55c;
        case 0x4ba560u: goto label_4ba560;
        case 0x4ba564u: goto label_4ba564;
        case 0x4ba568u: goto label_4ba568;
        case 0x4ba56cu: goto label_4ba56c;
        case 0x4ba570u: goto label_4ba570;
        case 0x4ba574u: goto label_4ba574;
        case 0x4ba578u: goto label_4ba578;
        case 0x4ba57cu: goto label_4ba57c;
        case 0x4ba580u: goto label_4ba580;
        case 0x4ba584u: goto label_4ba584;
        case 0x4ba588u: goto label_4ba588;
        case 0x4ba58cu: goto label_4ba58c;
        case 0x4ba590u: goto label_4ba590;
        case 0x4ba594u: goto label_4ba594;
        case 0x4ba598u: goto label_4ba598;
        case 0x4ba59cu: goto label_4ba59c;
        case 0x4ba5a0u: goto label_4ba5a0;
        case 0x4ba5a4u: goto label_4ba5a4;
        case 0x4ba5a8u: goto label_4ba5a8;
        case 0x4ba5acu: goto label_4ba5ac;
        case 0x4ba5b0u: goto label_4ba5b0;
        case 0x4ba5b4u: goto label_4ba5b4;
        case 0x4ba5b8u: goto label_4ba5b8;
        case 0x4ba5bcu: goto label_4ba5bc;
        case 0x4ba5c0u: goto label_4ba5c0;
        case 0x4ba5c4u: goto label_4ba5c4;
        case 0x4ba5c8u: goto label_4ba5c8;
        case 0x4ba5ccu: goto label_4ba5cc;
        case 0x4ba5d0u: goto label_4ba5d0;
        case 0x4ba5d4u: goto label_4ba5d4;
        case 0x4ba5d8u: goto label_4ba5d8;
        case 0x4ba5dcu: goto label_4ba5dc;
        case 0x4ba5e0u: goto label_4ba5e0;
        case 0x4ba5e4u: goto label_4ba5e4;
        case 0x4ba5e8u: goto label_4ba5e8;
        case 0x4ba5ecu: goto label_4ba5ec;
        case 0x4ba5f0u: goto label_4ba5f0;
        case 0x4ba5f4u: goto label_4ba5f4;
        case 0x4ba5f8u: goto label_4ba5f8;
        case 0x4ba5fcu: goto label_4ba5fc;
        case 0x4ba600u: goto label_4ba600;
        case 0x4ba604u: goto label_4ba604;
        case 0x4ba608u: goto label_4ba608;
        case 0x4ba60cu: goto label_4ba60c;
        case 0x4ba610u: goto label_4ba610;
        case 0x4ba614u: goto label_4ba614;
        case 0x4ba618u: goto label_4ba618;
        case 0x4ba61cu: goto label_4ba61c;
        case 0x4ba620u: goto label_4ba620;
        case 0x4ba624u: goto label_4ba624;
        case 0x4ba628u: goto label_4ba628;
        case 0x4ba62cu: goto label_4ba62c;
        case 0x4ba630u: goto label_4ba630;
        case 0x4ba634u: goto label_4ba634;
        case 0x4ba638u: goto label_4ba638;
        case 0x4ba63cu: goto label_4ba63c;
        case 0x4ba640u: goto label_4ba640;
        case 0x4ba644u: goto label_4ba644;
        case 0x4ba648u: goto label_4ba648;
        case 0x4ba64cu: goto label_4ba64c;
        case 0x4ba650u: goto label_4ba650;
        case 0x4ba654u: goto label_4ba654;
        case 0x4ba658u: goto label_4ba658;
        case 0x4ba65cu: goto label_4ba65c;
        case 0x4ba660u: goto label_4ba660;
        case 0x4ba664u: goto label_4ba664;
        case 0x4ba668u: goto label_4ba668;
        case 0x4ba66cu: goto label_4ba66c;
        case 0x4ba670u: goto label_4ba670;
        case 0x4ba674u: goto label_4ba674;
        case 0x4ba678u: goto label_4ba678;
        case 0x4ba67cu: goto label_4ba67c;
        case 0x4ba680u: goto label_4ba680;
        case 0x4ba684u: goto label_4ba684;
        case 0x4ba688u: goto label_4ba688;
        case 0x4ba68cu: goto label_4ba68c;
        case 0x4ba690u: goto label_4ba690;
        case 0x4ba694u: goto label_4ba694;
        case 0x4ba698u: goto label_4ba698;
        case 0x4ba69cu: goto label_4ba69c;
        case 0x4ba6a0u: goto label_4ba6a0;
        case 0x4ba6a4u: goto label_4ba6a4;
        case 0x4ba6a8u: goto label_4ba6a8;
        case 0x4ba6acu: goto label_4ba6ac;
        case 0x4ba6b0u: goto label_4ba6b0;
        case 0x4ba6b4u: goto label_4ba6b4;
        case 0x4ba6b8u: goto label_4ba6b8;
        case 0x4ba6bcu: goto label_4ba6bc;
        case 0x4ba6c0u: goto label_4ba6c0;
        case 0x4ba6c4u: goto label_4ba6c4;
        case 0x4ba6c8u: goto label_4ba6c8;
        case 0x4ba6ccu: goto label_4ba6cc;
        case 0x4ba6d0u: goto label_4ba6d0;
        case 0x4ba6d4u: goto label_4ba6d4;
        case 0x4ba6d8u: goto label_4ba6d8;
        case 0x4ba6dcu: goto label_4ba6dc;
        case 0x4ba6e0u: goto label_4ba6e0;
        case 0x4ba6e4u: goto label_4ba6e4;
        case 0x4ba6e8u: goto label_4ba6e8;
        case 0x4ba6ecu: goto label_4ba6ec;
        case 0x4ba6f0u: goto label_4ba6f0;
        case 0x4ba6f4u: goto label_4ba6f4;
        case 0x4ba6f8u: goto label_4ba6f8;
        case 0x4ba6fcu: goto label_4ba6fc;
        case 0x4ba700u: goto label_4ba700;
        case 0x4ba704u: goto label_4ba704;
        case 0x4ba708u: goto label_4ba708;
        case 0x4ba70cu: goto label_4ba70c;
        case 0x4ba710u: goto label_4ba710;
        case 0x4ba714u: goto label_4ba714;
        case 0x4ba718u: goto label_4ba718;
        case 0x4ba71cu: goto label_4ba71c;
        case 0x4ba720u: goto label_4ba720;
        case 0x4ba724u: goto label_4ba724;
        case 0x4ba728u: goto label_4ba728;
        case 0x4ba72cu: goto label_4ba72c;
        case 0x4ba730u: goto label_4ba730;
        case 0x4ba734u: goto label_4ba734;
        case 0x4ba738u: goto label_4ba738;
        case 0x4ba73cu: goto label_4ba73c;
        case 0x4ba740u: goto label_4ba740;
        case 0x4ba744u: goto label_4ba744;
        case 0x4ba748u: goto label_4ba748;
        case 0x4ba74cu: goto label_4ba74c;
        case 0x4ba750u: goto label_4ba750;
        case 0x4ba754u: goto label_4ba754;
        case 0x4ba758u: goto label_4ba758;
        case 0x4ba75cu: goto label_4ba75c;
        case 0x4ba760u: goto label_4ba760;
        case 0x4ba764u: goto label_4ba764;
        case 0x4ba768u: goto label_4ba768;
        case 0x4ba76cu: goto label_4ba76c;
        case 0x4ba770u: goto label_4ba770;
        case 0x4ba774u: goto label_4ba774;
        case 0x4ba778u: goto label_4ba778;
        case 0x4ba77cu: goto label_4ba77c;
        case 0x4ba780u: goto label_4ba780;
        case 0x4ba784u: goto label_4ba784;
        case 0x4ba788u: goto label_4ba788;
        case 0x4ba78cu: goto label_4ba78c;
        case 0x4ba790u: goto label_4ba790;
        case 0x4ba794u: goto label_4ba794;
        case 0x4ba798u: goto label_4ba798;
        case 0x4ba79cu: goto label_4ba79c;
        case 0x4ba7a0u: goto label_4ba7a0;
        case 0x4ba7a4u: goto label_4ba7a4;
        case 0x4ba7a8u: goto label_4ba7a8;
        case 0x4ba7acu: goto label_4ba7ac;
        case 0x4ba7b0u: goto label_4ba7b0;
        case 0x4ba7b4u: goto label_4ba7b4;
        case 0x4ba7b8u: goto label_4ba7b8;
        case 0x4ba7bcu: goto label_4ba7bc;
        case 0x4ba7c0u: goto label_4ba7c0;
        case 0x4ba7c4u: goto label_4ba7c4;
        case 0x4ba7c8u: goto label_4ba7c8;
        case 0x4ba7ccu: goto label_4ba7cc;
        case 0x4ba7d0u: goto label_4ba7d0;
        case 0x4ba7d4u: goto label_4ba7d4;
        case 0x4ba7d8u: goto label_4ba7d8;
        case 0x4ba7dcu: goto label_4ba7dc;
        case 0x4ba7e0u: goto label_4ba7e0;
        case 0x4ba7e4u: goto label_4ba7e4;
        case 0x4ba7e8u: goto label_4ba7e8;
        case 0x4ba7ecu: goto label_4ba7ec;
        case 0x4ba7f0u: goto label_4ba7f0;
        case 0x4ba7f4u: goto label_4ba7f4;
        case 0x4ba7f8u: goto label_4ba7f8;
        case 0x4ba7fcu: goto label_4ba7fc;
        case 0x4ba800u: goto label_4ba800;
        case 0x4ba804u: goto label_4ba804;
        case 0x4ba808u: goto label_4ba808;
        case 0x4ba80cu: goto label_4ba80c;
        case 0x4ba810u: goto label_4ba810;
        case 0x4ba814u: goto label_4ba814;
        case 0x4ba818u: goto label_4ba818;
        case 0x4ba81cu: goto label_4ba81c;
        case 0x4ba820u: goto label_4ba820;
        case 0x4ba824u: goto label_4ba824;
        case 0x4ba828u: goto label_4ba828;
        case 0x4ba82cu: goto label_4ba82c;
        case 0x4ba830u: goto label_4ba830;
        case 0x4ba834u: goto label_4ba834;
        case 0x4ba838u: goto label_4ba838;
        case 0x4ba83cu: goto label_4ba83c;
        case 0x4ba840u: goto label_4ba840;
        case 0x4ba844u: goto label_4ba844;
        case 0x4ba848u: goto label_4ba848;
        case 0x4ba84cu: goto label_4ba84c;
        case 0x4ba850u: goto label_4ba850;
        case 0x4ba854u: goto label_4ba854;
        case 0x4ba858u: goto label_4ba858;
        case 0x4ba85cu: goto label_4ba85c;
        case 0x4ba860u: goto label_4ba860;
        case 0x4ba864u: goto label_4ba864;
        case 0x4ba868u: goto label_4ba868;
        case 0x4ba86cu: goto label_4ba86c;
        case 0x4ba870u: goto label_4ba870;
        case 0x4ba874u: goto label_4ba874;
        case 0x4ba878u: goto label_4ba878;
        case 0x4ba87cu: goto label_4ba87c;
        case 0x4ba880u: goto label_4ba880;
        case 0x4ba884u: goto label_4ba884;
        case 0x4ba888u: goto label_4ba888;
        case 0x4ba88cu: goto label_4ba88c;
        case 0x4ba890u: goto label_4ba890;
        case 0x4ba894u: goto label_4ba894;
        case 0x4ba898u: goto label_4ba898;
        case 0x4ba89cu: goto label_4ba89c;
        case 0x4ba8a0u: goto label_4ba8a0;
        case 0x4ba8a4u: goto label_4ba8a4;
        case 0x4ba8a8u: goto label_4ba8a8;
        case 0x4ba8acu: goto label_4ba8ac;
        case 0x4ba8b0u: goto label_4ba8b0;
        case 0x4ba8b4u: goto label_4ba8b4;
        case 0x4ba8b8u: goto label_4ba8b8;
        case 0x4ba8bcu: goto label_4ba8bc;
        case 0x4ba8c0u: goto label_4ba8c0;
        case 0x4ba8c4u: goto label_4ba8c4;
        case 0x4ba8c8u: goto label_4ba8c8;
        case 0x4ba8ccu: goto label_4ba8cc;
        case 0x4ba8d0u: goto label_4ba8d0;
        case 0x4ba8d4u: goto label_4ba8d4;
        case 0x4ba8d8u: goto label_4ba8d8;
        case 0x4ba8dcu: goto label_4ba8dc;
        case 0x4ba8e0u: goto label_4ba8e0;
        case 0x4ba8e4u: goto label_4ba8e4;
        case 0x4ba8e8u: goto label_4ba8e8;
        case 0x4ba8ecu: goto label_4ba8ec;
        case 0x4ba8f0u: goto label_4ba8f0;
        case 0x4ba8f4u: goto label_4ba8f4;
        case 0x4ba8f8u: goto label_4ba8f8;
        case 0x4ba8fcu: goto label_4ba8fc;
        case 0x4ba900u: goto label_4ba900;
        case 0x4ba904u: goto label_4ba904;
        case 0x4ba908u: goto label_4ba908;
        case 0x4ba90cu: goto label_4ba90c;
        case 0x4ba910u: goto label_4ba910;
        case 0x4ba914u: goto label_4ba914;
        case 0x4ba918u: goto label_4ba918;
        case 0x4ba91cu: goto label_4ba91c;
        case 0x4ba920u: goto label_4ba920;
        case 0x4ba924u: goto label_4ba924;
        case 0x4ba928u: goto label_4ba928;
        case 0x4ba92cu: goto label_4ba92c;
        case 0x4ba930u: goto label_4ba930;
        case 0x4ba934u: goto label_4ba934;
        case 0x4ba938u: goto label_4ba938;
        case 0x4ba93cu: goto label_4ba93c;
        case 0x4ba940u: goto label_4ba940;
        case 0x4ba944u: goto label_4ba944;
        case 0x4ba948u: goto label_4ba948;
        case 0x4ba94cu: goto label_4ba94c;
        case 0x4ba950u: goto label_4ba950;
        case 0x4ba954u: goto label_4ba954;
        case 0x4ba958u: goto label_4ba958;
        case 0x4ba95cu: goto label_4ba95c;
        case 0x4ba960u: goto label_4ba960;
        case 0x4ba964u: goto label_4ba964;
        case 0x4ba968u: goto label_4ba968;
        case 0x4ba96cu: goto label_4ba96c;
        case 0x4ba970u: goto label_4ba970;
        case 0x4ba974u: goto label_4ba974;
        case 0x4ba978u: goto label_4ba978;
        case 0x4ba97cu: goto label_4ba97c;
        case 0x4ba980u: goto label_4ba980;
        case 0x4ba984u: goto label_4ba984;
        case 0x4ba988u: goto label_4ba988;
        case 0x4ba98cu: goto label_4ba98c;
        case 0x4ba990u: goto label_4ba990;
        case 0x4ba994u: goto label_4ba994;
        case 0x4ba998u: goto label_4ba998;
        case 0x4ba99cu: goto label_4ba99c;
        case 0x4ba9a0u: goto label_4ba9a0;
        case 0x4ba9a4u: goto label_4ba9a4;
        case 0x4ba9a8u: goto label_4ba9a8;
        case 0x4ba9acu: goto label_4ba9ac;
        case 0x4ba9b0u: goto label_4ba9b0;
        case 0x4ba9b4u: goto label_4ba9b4;
        case 0x4ba9b8u: goto label_4ba9b8;
        case 0x4ba9bcu: goto label_4ba9bc;
        case 0x4ba9c0u: goto label_4ba9c0;
        case 0x4ba9c4u: goto label_4ba9c4;
        case 0x4ba9c8u: goto label_4ba9c8;
        case 0x4ba9ccu: goto label_4ba9cc;
        case 0x4ba9d0u: goto label_4ba9d0;
        case 0x4ba9d4u: goto label_4ba9d4;
        case 0x4ba9d8u: goto label_4ba9d8;
        case 0x4ba9dcu: goto label_4ba9dc;
        case 0x4ba9e0u: goto label_4ba9e0;
        case 0x4ba9e4u: goto label_4ba9e4;
        case 0x4ba9e8u: goto label_4ba9e8;
        case 0x4ba9ecu: goto label_4ba9ec;
        case 0x4ba9f0u: goto label_4ba9f0;
        case 0x4ba9f4u: goto label_4ba9f4;
        case 0x4ba9f8u: goto label_4ba9f8;
        case 0x4ba9fcu: goto label_4ba9fc;
        case 0x4baa00u: goto label_4baa00;
        case 0x4baa04u: goto label_4baa04;
        case 0x4baa08u: goto label_4baa08;
        case 0x4baa0cu: goto label_4baa0c;
        case 0x4baa10u: goto label_4baa10;
        case 0x4baa14u: goto label_4baa14;
        case 0x4baa18u: goto label_4baa18;
        case 0x4baa1cu: goto label_4baa1c;
        case 0x4baa20u: goto label_4baa20;
        case 0x4baa24u: goto label_4baa24;
        case 0x4baa28u: goto label_4baa28;
        case 0x4baa2cu: goto label_4baa2c;
        case 0x4baa30u: goto label_4baa30;
        case 0x4baa34u: goto label_4baa34;
        case 0x4baa38u: goto label_4baa38;
        case 0x4baa3cu: goto label_4baa3c;
        case 0x4baa40u: goto label_4baa40;
        case 0x4baa44u: goto label_4baa44;
        case 0x4baa48u: goto label_4baa48;
        case 0x4baa4cu: goto label_4baa4c;
        case 0x4baa50u: goto label_4baa50;
        case 0x4baa54u: goto label_4baa54;
        case 0x4baa58u: goto label_4baa58;
        case 0x4baa5cu: goto label_4baa5c;
        case 0x4baa60u: goto label_4baa60;
        case 0x4baa64u: goto label_4baa64;
        case 0x4baa68u: goto label_4baa68;
        case 0x4baa6cu: goto label_4baa6c;
        case 0x4baa70u: goto label_4baa70;
        case 0x4baa74u: goto label_4baa74;
        case 0x4baa78u: goto label_4baa78;
        case 0x4baa7cu: goto label_4baa7c;
        case 0x4baa80u: goto label_4baa80;
        case 0x4baa84u: goto label_4baa84;
        case 0x4baa88u: goto label_4baa88;
        case 0x4baa8cu: goto label_4baa8c;
        case 0x4baa90u: goto label_4baa90;
        case 0x4baa94u: goto label_4baa94;
        case 0x4baa98u: goto label_4baa98;
        case 0x4baa9cu: goto label_4baa9c;
        case 0x4baaa0u: goto label_4baaa0;
        case 0x4baaa4u: goto label_4baaa4;
        case 0x4baaa8u: goto label_4baaa8;
        case 0x4baaacu: goto label_4baaac;
        case 0x4baab0u: goto label_4baab0;
        case 0x4baab4u: goto label_4baab4;
        case 0x4baab8u: goto label_4baab8;
        case 0x4baabcu: goto label_4baabc;
        case 0x4baac0u: goto label_4baac0;
        case 0x4baac4u: goto label_4baac4;
        case 0x4baac8u: goto label_4baac8;
        case 0x4baaccu: goto label_4baacc;
        case 0x4baad0u: goto label_4baad0;
        case 0x4baad4u: goto label_4baad4;
        case 0x4baad8u: goto label_4baad8;
        case 0x4baadcu: goto label_4baadc;
        case 0x4baae0u: goto label_4baae0;
        case 0x4baae4u: goto label_4baae4;
        case 0x4baae8u: goto label_4baae8;
        case 0x4baaecu: goto label_4baaec;
        case 0x4baaf0u: goto label_4baaf0;
        case 0x4baaf4u: goto label_4baaf4;
        case 0x4baaf8u: goto label_4baaf8;
        case 0x4baafcu: goto label_4baafc;
        case 0x4bab00u: goto label_4bab00;
        case 0x4bab04u: goto label_4bab04;
        case 0x4bab08u: goto label_4bab08;
        case 0x4bab0cu: goto label_4bab0c;
        case 0x4bab10u: goto label_4bab10;
        case 0x4bab14u: goto label_4bab14;
        case 0x4bab18u: goto label_4bab18;
        case 0x4bab1cu: goto label_4bab1c;
        case 0x4bab20u: goto label_4bab20;
        case 0x4bab24u: goto label_4bab24;
        case 0x4bab28u: goto label_4bab28;
        case 0x4bab2cu: goto label_4bab2c;
        case 0x4bab30u: goto label_4bab30;
        case 0x4bab34u: goto label_4bab34;
        case 0x4bab38u: goto label_4bab38;
        case 0x4bab3cu: goto label_4bab3c;
        case 0x4bab40u: goto label_4bab40;
        case 0x4bab44u: goto label_4bab44;
        case 0x4bab48u: goto label_4bab48;
        case 0x4bab4cu: goto label_4bab4c;
        case 0x4bab50u: goto label_4bab50;
        case 0x4bab54u: goto label_4bab54;
        case 0x4bab58u: goto label_4bab58;
        case 0x4bab5cu: goto label_4bab5c;
        case 0x4bab60u: goto label_4bab60;
        case 0x4bab64u: goto label_4bab64;
        case 0x4bab68u: goto label_4bab68;
        case 0x4bab6cu: goto label_4bab6c;
        case 0x4bab70u: goto label_4bab70;
        case 0x4bab74u: goto label_4bab74;
        case 0x4bab78u: goto label_4bab78;
        case 0x4bab7cu: goto label_4bab7c;
        case 0x4bab80u: goto label_4bab80;
        case 0x4bab84u: goto label_4bab84;
        case 0x4bab88u: goto label_4bab88;
        case 0x4bab8cu: goto label_4bab8c;
        case 0x4bab90u: goto label_4bab90;
        case 0x4bab94u: goto label_4bab94;
        case 0x4bab98u: goto label_4bab98;
        case 0x4bab9cu: goto label_4bab9c;
        case 0x4baba0u: goto label_4baba0;
        case 0x4baba4u: goto label_4baba4;
        case 0x4baba8u: goto label_4baba8;
        case 0x4babacu: goto label_4babac;
        case 0x4babb0u: goto label_4babb0;
        case 0x4babb4u: goto label_4babb4;
        case 0x4babb8u: goto label_4babb8;
        case 0x4babbcu: goto label_4babbc;
        case 0x4babc0u: goto label_4babc0;
        case 0x4babc4u: goto label_4babc4;
        case 0x4babc8u: goto label_4babc8;
        case 0x4babccu: goto label_4babcc;
        case 0x4babd0u: goto label_4babd0;
        case 0x4babd4u: goto label_4babd4;
        case 0x4babd8u: goto label_4babd8;
        case 0x4babdcu: goto label_4babdc;
        case 0x4babe0u: goto label_4babe0;
        case 0x4babe4u: goto label_4babe4;
        case 0x4babe8u: goto label_4babe8;
        case 0x4babecu: goto label_4babec;
        case 0x4babf0u: goto label_4babf0;
        case 0x4babf4u: goto label_4babf4;
        case 0x4babf8u: goto label_4babf8;
        case 0x4babfcu: goto label_4babfc;
        case 0x4bac00u: goto label_4bac00;
        case 0x4bac04u: goto label_4bac04;
        case 0x4bac08u: goto label_4bac08;
        case 0x4bac0cu: goto label_4bac0c;
        case 0x4bac10u: goto label_4bac10;
        case 0x4bac14u: goto label_4bac14;
        case 0x4bac18u: goto label_4bac18;
        case 0x4bac1cu: goto label_4bac1c;
        case 0x4bac20u: goto label_4bac20;
        case 0x4bac24u: goto label_4bac24;
        case 0x4bac28u: goto label_4bac28;
        case 0x4bac2cu: goto label_4bac2c;
        case 0x4bac30u: goto label_4bac30;
        case 0x4bac34u: goto label_4bac34;
        case 0x4bac38u: goto label_4bac38;
        case 0x4bac3cu: goto label_4bac3c;
        case 0x4bac40u: goto label_4bac40;
        case 0x4bac44u: goto label_4bac44;
        case 0x4bac48u: goto label_4bac48;
        case 0x4bac4cu: goto label_4bac4c;
        case 0x4bac50u: goto label_4bac50;
        case 0x4bac54u: goto label_4bac54;
        case 0x4bac58u: goto label_4bac58;
        case 0x4bac5cu: goto label_4bac5c;
        case 0x4bac60u: goto label_4bac60;
        case 0x4bac64u: goto label_4bac64;
        case 0x4bac68u: goto label_4bac68;
        case 0x4bac6cu: goto label_4bac6c;
        case 0x4bac70u: goto label_4bac70;
        case 0x4bac74u: goto label_4bac74;
        case 0x4bac78u: goto label_4bac78;
        case 0x4bac7cu: goto label_4bac7c;
        case 0x4bac80u: goto label_4bac80;
        case 0x4bac84u: goto label_4bac84;
        case 0x4bac88u: goto label_4bac88;
        case 0x4bac8cu: goto label_4bac8c;
        case 0x4bac90u: goto label_4bac90;
        case 0x4bac94u: goto label_4bac94;
        case 0x4bac98u: goto label_4bac98;
        case 0x4bac9cu: goto label_4bac9c;
        case 0x4baca0u: goto label_4baca0;
        case 0x4baca4u: goto label_4baca4;
        case 0x4baca8u: goto label_4baca8;
        case 0x4bacacu: goto label_4bacac;
        case 0x4bacb0u: goto label_4bacb0;
        case 0x4bacb4u: goto label_4bacb4;
        case 0x4bacb8u: goto label_4bacb8;
        case 0x4bacbcu: goto label_4bacbc;
        case 0x4bacc0u: goto label_4bacc0;
        case 0x4bacc4u: goto label_4bacc4;
        case 0x4bacc8u: goto label_4bacc8;
        case 0x4bacccu: goto label_4baccc;
        case 0x4bacd0u: goto label_4bacd0;
        case 0x4bacd4u: goto label_4bacd4;
        case 0x4bacd8u: goto label_4bacd8;
        case 0x4bacdcu: goto label_4bacdc;
        case 0x4bace0u: goto label_4bace0;
        case 0x4bace4u: goto label_4bace4;
        case 0x4bace8u: goto label_4bace8;
        case 0x4bacecu: goto label_4bacec;
        case 0x4bacf0u: goto label_4bacf0;
        case 0x4bacf4u: goto label_4bacf4;
        case 0x4bacf8u: goto label_4bacf8;
        case 0x4bacfcu: goto label_4bacfc;
        case 0x4bad00u: goto label_4bad00;
        case 0x4bad04u: goto label_4bad04;
        case 0x4bad08u: goto label_4bad08;
        case 0x4bad0cu: goto label_4bad0c;
        case 0x4bad10u: goto label_4bad10;
        case 0x4bad14u: goto label_4bad14;
        case 0x4bad18u: goto label_4bad18;
        case 0x4bad1cu: goto label_4bad1c;
        case 0x4bad20u: goto label_4bad20;
        case 0x4bad24u: goto label_4bad24;
        case 0x4bad28u: goto label_4bad28;
        case 0x4bad2cu: goto label_4bad2c;
        case 0x4bad30u: goto label_4bad30;
        case 0x4bad34u: goto label_4bad34;
        case 0x4bad38u: goto label_4bad38;
        case 0x4bad3cu: goto label_4bad3c;
        case 0x4bad40u: goto label_4bad40;
        case 0x4bad44u: goto label_4bad44;
        case 0x4bad48u: goto label_4bad48;
        case 0x4bad4cu: goto label_4bad4c;
        case 0x4bad50u: goto label_4bad50;
        case 0x4bad54u: goto label_4bad54;
        case 0x4bad58u: goto label_4bad58;
        case 0x4bad5cu: goto label_4bad5c;
        case 0x4bad60u: goto label_4bad60;
        case 0x4bad64u: goto label_4bad64;
        case 0x4bad68u: goto label_4bad68;
        case 0x4bad6cu: goto label_4bad6c;
        case 0x4bad70u: goto label_4bad70;
        case 0x4bad74u: goto label_4bad74;
        case 0x4bad78u: goto label_4bad78;
        case 0x4bad7cu: goto label_4bad7c;
        case 0x4bad80u: goto label_4bad80;
        case 0x4bad84u: goto label_4bad84;
        case 0x4bad88u: goto label_4bad88;
        case 0x4bad8cu: goto label_4bad8c;
        case 0x4bad90u: goto label_4bad90;
        case 0x4bad94u: goto label_4bad94;
        case 0x4bad98u: goto label_4bad98;
        case 0x4bad9cu: goto label_4bad9c;
        case 0x4bada0u: goto label_4bada0;
        case 0x4bada4u: goto label_4bada4;
        case 0x4bada8u: goto label_4bada8;
        case 0x4badacu: goto label_4badac;
        case 0x4badb0u: goto label_4badb0;
        case 0x4badb4u: goto label_4badb4;
        case 0x4badb8u: goto label_4badb8;
        case 0x4badbcu: goto label_4badbc;
        case 0x4badc0u: goto label_4badc0;
        case 0x4badc4u: goto label_4badc4;
        case 0x4badc8u: goto label_4badc8;
        case 0x4badccu: goto label_4badcc;
        case 0x4badd0u: goto label_4badd0;
        case 0x4badd4u: goto label_4badd4;
        case 0x4badd8u: goto label_4badd8;
        case 0x4baddcu: goto label_4baddc;
        case 0x4bade0u: goto label_4bade0;
        case 0x4bade4u: goto label_4bade4;
        case 0x4bade8u: goto label_4bade8;
        case 0x4badecu: goto label_4badec;
        case 0x4badf0u: goto label_4badf0;
        case 0x4badf4u: goto label_4badf4;
        case 0x4badf8u: goto label_4badf8;
        case 0x4badfcu: goto label_4badfc;
        case 0x4bae00u: goto label_4bae00;
        case 0x4bae04u: goto label_4bae04;
        case 0x4bae08u: goto label_4bae08;
        case 0x4bae0cu: goto label_4bae0c;
        case 0x4bae10u: goto label_4bae10;
        case 0x4bae14u: goto label_4bae14;
        case 0x4bae18u: goto label_4bae18;
        case 0x4bae1cu: goto label_4bae1c;
        case 0x4bae20u: goto label_4bae20;
        case 0x4bae24u: goto label_4bae24;
        case 0x4bae28u: goto label_4bae28;
        case 0x4bae2cu: goto label_4bae2c;
        case 0x4bae30u: goto label_4bae30;
        case 0x4bae34u: goto label_4bae34;
        case 0x4bae38u: goto label_4bae38;
        case 0x4bae3cu: goto label_4bae3c;
        case 0x4bae40u: goto label_4bae40;
        case 0x4bae44u: goto label_4bae44;
        case 0x4bae48u: goto label_4bae48;
        case 0x4bae4cu: goto label_4bae4c;
        case 0x4bae50u: goto label_4bae50;
        case 0x4bae54u: goto label_4bae54;
        case 0x4bae58u: goto label_4bae58;
        case 0x4bae5cu: goto label_4bae5c;
        case 0x4bae60u: goto label_4bae60;
        case 0x4bae64u: goto label_4bae64;
        case 0x4bae68u: goto label_4bae68;
        case 0x4bae6cu: goto label_4bae6c;
        case 0x4bae70u: goto label_4bae70;
        case 0x4bae74u: goto label_4bae74;
        case 0x4bae78u: goto label_4bae78;
        case 0x4bae7cu: goto label_4bae7c;
        case 0x4bae80u: goto label_4bae80;
        case 0x4bae84u: goto label_4bae84;
        case 0x4bae88u: goto label_4bae88;
        case 0x4bae8cu: goto label_4bae8c;
        case 0x4bae90u: goto label_4bae90;
        case 0x4bae94u: goto label_4bae94;
        case 0x4bae98u: goto label_4bae98;
        case 0x4bae9cu: goto label_4bae9c;
        case 0x4baea0u: goto label_4baea0;
        case 0x4baea4u: goto label_4baea4;
        case 0x4baea8u: goto label_4baea8;
        case 0x4baeacu: goto label_4baeac;
        case 0x4baeb0u: goto label_4baeb0;
        case 0x4baeb4u: goto label_4baeb4;
        case 0x4baeb8u: goto label_4baeb8;
        case 0x4baebcu: goto label_4baebc;
        case 0x4baec0u: goto label_4baec0;
        case 0x4baec4u: goto label_4baec4;
        case 0x4baec8u: goto label_4baec8;
        case 0x4baeccu: goto label_4baecc;
        case 0x4baed0u: goto label_4baed0;
        case 0x4baed4u: goto label_4baed4;
        case 0x4baed8u: goto label_4baed8;
        case 0x4baedcu: goto label_4baedc;
        case 0x4baee0u: goto label_4baee0;
        case 0x4baee4u: goto label_4baee4;
        case 0x4baee8u: goto label_4baee8;
        case 0x4baeecu: goto label_4baeec;
        case 0x4baef0u: goto label_4baef0;
        case 0x4baef4u: goto label_4baef4;
        case 0x4baef8u: goto label_4baef8;
        case 0x4baefcu: goto label_4baefc;
        case 0x4baf00u: goto label_4baf00;
        case 0x4baf04u: goto label_4baf04;
        case 0x4baf08u: goto label_4baf08;
        case 0x4baf0cu: goto label_4baf0c;
        case 0x4baf10u: goto label_4baf10;
        case 0x4baf14u: goto label_4baf14;
        case 0x4baf18u: goto label_4baf18;
        case 0x4baf1cu: goto label_4baf1c;
        case 0x4baf20u: goto label_4baf20;
        case 0x4baf24u: goto label_4baf24;
        case 0x4baf28u: goto label_4baf28;
        case 0x4baf2cu: goto label_4baf2c;
        case 0x4baf30u: goto label_4baf30;
        case 0x4baf34u: goto label_4baf34;
        case 0x4baf38u: goto label_4baf38;
        case 0x4baf3cu: goto label_4baf3c;
        case 0x4baf40u: goto label_4baf40;
        case 0x4baf44u: goto label_4baf44;
        case 0x4baf48u: goto label_4baf48;
        case 0x4baf4cu: goto label_4baf4c;
        case 0x4baf50u: goto label_4baf50;
        case 0x4baf54u: goto label_4baf54;
        case 0x4baf58u: goto label_4baf58;
        case 0x4baf5cu: goto label_4baf5c;
        case 0x4baf60u: goto label_4baf60;
        case 0x4baf64u: goto label_4baf64;
        case 0x4baf68u: goto label_4baf68;
        case 0x4baf6cu: goto label_4baf6c;
        case 0x4baf70u: goto label_4baf70;
        case 0x4baf74u: goto label_4baf74;
        case 0x4baf78u: goto label_4baf78;
        case 0x4baf7cu: goto label_4baf7c;
        case 0x4baf80u: goto label_4baf80;
        case 0x4baf84u: goto label_4baf84;
        case 0x4baf88u: goto label_4baf88;
        case 0x4baf8cu: goto label_4baf8c;
        case 0x4baf90u: goto label_4baf90;
        case 0x4baf94u: goto label_4baf94;
        case 0x4baf98u: goto label_4baf98;
        case 0x4baf9cu: goto label_4baf9c;
        case 0x4bafa0u: goto label_4bafa0;
        case 0x4bafa4u: goto label_4bafa4;
        case 0x4bafa8u: goto label_4bafa8;
        case 0x4bafacu: goto label_4bafac;
        case 0x4bafb0u: goto label_4bafb0;
        case 0x4bafb4u: goto label_4bafb4;
        case 0x4bafb8u: goto label_4bafb8;
        case 0x4bafbcu: goto label_4bafbc;
        case 0x4bafc0u: goto label_4bafc0;
        case 0x4bafc4u: goto label_4bafc4;
        case 0x4bafc8u: goto label_4bafc8;
        case 0x4bafccu: goto label_4bafcc;
        case 0x4bafd0u: goto label_4bafd0;
        case 0x4bafd4u: goto label_4bafd4;
        case 0x4bafd8u: goto label_4bafd8;
        case 0x4bafdcu: goto label_4bafdc;
        case 0x4bafe0u: goto label_4bafe0;
        case 0x4bafe4u: goto label_4bafe4;
        case 0x4bafe8u: goto label_4bafe8;
        case 0x4bafecu: goto label_4bafec;
        case 0x4baff0u: goto label_4baff0;
        case 0x4baff4u: goto label_4baff4;
        case 0x4baff8u: goto label_4baff8;
        case 0x4baffcu: goto label_4baffc;
        case 0x4bb000u: goto label_4bb000;
        case 0x4bb004u: goto label_4bb004;
        case 0x4bb008u: goto label_4bb008;
        case 0x4bb00cu: goto label_4bb00c;
        case 0x4bb010u: goto label_4bb010;
        case 0x4bb014u: goto label_4bb014;
        case 0x4bb018u: goto label_4bb018;
        case 0x4bb01cu: goto label_4bb01c;
        case 0x4bb020u: goto label_4bb020;
        case 0x4bb024u: goto label_4bb024;
        case 0x4bb028u: goto label_4bb028;
        case 0x4bb02cu: goto label_4bb02c;
        case 0x4bb030u: goto label_4bb030;
        case 0x4bb034u: goto label_4bb034;
        case 0x4bb038u: goto label_4bb038;
        case 0x4bb03cu: goto label_4bb03c;
        case 0x4bb040u: goto label_4bb040;
        case 0x4bb044u: goto label_4bb044;
        case 0x4bb048u: goto label_4bb048;
        case 0x4bb04cu: goto label_4bb04c;
        case 0x4bb050u: goto label_4bb050;
        case 0x4bb054u: goto label_4bb054;
        case 0x4bb058u: goto label_4bb058;
        case 0x4bb05cu: goto label_4bb05c;
        case 0x4bb060u: goto label_4bb060;
        case 0x4bb064u: goto label_4bb064;
        case 0x4bb068u: goto label_4bb068;
        case 0x4bb06cu: goto label_4bb06c;
        case 0x4bb070u: goto label_4bb070;
        case 0x4bb074u: goto label_4bb074;
        case 0x4bb078u: goto label_4bb078;
        case 0x4bb07cu: goto label_4bb07c;
        case 0x4bb080u: goto label_4bb080;
        case 0x4bb084u: goto label_4bb084;
        case 0x4bb088u: goto label_4bb088;
        case 0x4bb08cu: goto label_4bb08c;
        case 0x4bb090u: goto label_4bb090;
        case 0x4bb094u: goto label_4bb094;
        case 0x4bb098u: goto label_4bb098;
        case 0x4bb09cu: goto label_4bb09c;
        case 0x4bb0a0u: goto label_4bb0a0;
        case 0x4bb0a4u: goto label_4bb0a4;
        case 0x4bb0a8u: goto label_4bb0a8;
        case 0x4bb0acu: goto label_4bb0ac;
        case 0x4bb0b0u: goto label_4bb0b0;
        case 0x4bb0b4u: goto label_4bb0b4;
        case 0x4bb0b8u: goto label_4bb0b8;
        case 0x4bb0bcu: goto label_4bb0bc;
        case 0x4bb0c0u: goto label_4bb0c0;
        case 0x4bb0c4u: goto label_4bb0c4;
        case 0x4bb0c8u: goto label_4bb0c8;
        case 0x4bb0ccu: goto label_4bb0cc;
        case 0x4bb0d0u: goto label_4bb0d0;
        case 0x4bb0d4u: goto label_4bb0d4;
        case 0x4bb0d8u: goto label_4bb0d8;
        case 0x4bb0dcu: goto label_4bb0dc;
        case 0x4bb0e0u: goto label_4bb0e0;
        case 0x4bb0e4u: goto label_4bb0e4;
        case 0x4bb0e8u: goto label_4bb0e8;
        case 0x4bb0ecu: goto label_4bb0ec;
        case 0x4bb0f0u: goto label_4bb0f0;
        case 0x4bb0f4u: goto label_4bb0f4;
        case 0x4bb0f8u: goto label_4bb0f8;
        case 0x4bb0fcu: goto label_4bb0fc;
        case 0x4bb100u: goto label_4bb100;
        case 0x4bb104u: goto label_4bb104;
        case 0x4bb108u: goto label_4bb108;
        case 0x4bb10cu: goto label_4bb10c;
        case 0x4bb110u: goto label_4bb110;
        case 0x4bb114u: goto label_4bb114;
        case 0x4bb118u: goto label_4bb118;
        case 0x4bb11cu: goto label_4bb11c;
        case 0x4bb120u: goto label_4bb120;
        case 0x4bb124u: goto label_4bb124;
        case 0x4bb128u: goto label_4bb128;
        case 0x4bb12cu: goto label_4bb12c;
        case 0x4bb130u: goto label_4bb130;
        case 0x4bb134u: goto label_4bb134;
        case 0x4bb138u: goto label_4bb138;
        case 0x4bb13cu: goto label_4bb13c;
        case 0x4bb140u: goto label_4bb140;
        case 0x4bb144u: goto label_4bb144;
        case 0x4bb148u: goto label_4bb148;
        case 0x4bb14cu: goto label_4bb14c;
        case 0x4bb150u: goto label_4bb150;
        case 0x4bb154u: goto label_4bb154;
        case 0x4bb158u: goto label_4bb158;
        case 0x4bb15cu: goto label_4bb15c;
        case 0x4bb160u: goto label_4bb160;
        case 0x4bb164u: goto label_4bb164;
        case 0x4bb168u: goto label_4bb168;
        case 0x4bb16cu: goto label_4bb16c;
        case 0x4bb170u: goto label_4bb170;
        case 0x4bb174u: goto label_4bb174;
        case 0x4bb178u: goto label_4bb178;
        case 0x4bb17cu: goto label_4bb17c;
        case 0x4bb180u: goto label_4bb180;
        case 0x4bb184u: goto label_4bb184;
        case 0x4bb188u: goto label_4bb188;
        case 0x4bb18cu: goto label_4bb18c;
        case 0x4bb190u: goto label_4bb190;
        case 0x4bb194u: goto label_4bb194;
        case 0x4bb198u: goto label_4bb198;
        case 0x4bb19cu: goto label_4bb19c;
        case 0x4bb1a0u: goto label_4bb1a0;
        case 0x4bb1a4u: goto label_4bb1a4;
        case 0x4bb1a8u: goto label_4bb1a8;
        case 0x4bb1acu: goto label_4bb1ac;
        case 0x4bb1b0u: goto label_4bb1b0;
        case 0x4bb1b4u: goto label_4bb1b4;
        case 0x4bb1b8u: goto label_4bb1b8;
        case 0x4bb1bcu: goto label_4bb1bc;
        case 0x4bb1c0u: goto label_4bb1c0;
        case 0x4bb1c4u: goto label_4bb1c4;
        case 0x4bb1c8u: goto label_4bb1c8;
        case 0x4bb1ccu: goto label_4bb1cc;
        case 0x4bb1d0u: goto label_4bb1d0;
        case 0x4bb1d4u: goto label_4bb1d4;
        case 0x4bb1d8u: goto label_4bb1d8;
        case 0x4bb1dcu: goto label_4bb1dc;
        case 0x4bb1e0u: goto label_4bb1e0;
        case 0x4bb1e4u: goto label_4bb1e4;
        case 0x4bb1e8u: goto label_4bb1e8;
        case 0x4bb1ecu: goto label_4bb1ec;
        case 0x4bb1f0u: goto label_4bb1f0;
        case 0x4bb1f4u: goto label_4bb1f4;
        case 0x4bb1f8u: goto label_4bb1f8;
        case 0x4bb1fcu: goto label_4bb1fc;
        case 0x4bb200u: goto label_4bb200;
        case 0x4bb204u: goto label_4bb204;
        case 0x4bb208u: goto label_4bb208;
        case 0x4bb20cu: goto label_4bb20c;
        case 0x4bb210u: goto label_4bb210;
        case 0x4bb214u: goto label_4bb214;
        case 0x4bb218u: goto label_4bb218;
        case 0x4bb21cu: goto label_4bb21c;
        case 0x4bb220u: goto label_4bb220;
        case 0x4bb224u: goto label_4bb224;
        case 0x4bb228u: goto label_4bb228;
        case 0x4bb22cu: goto label_4bb22c;
        case 0x4bb230u: goto label_4bb230;
        case 0x4bb234u: goto label_4bb234;
        case 0x4bb238u: goto label_4bb238;
        case 0x4bb23cu: goto label_4bb23c;
        default: break;
    }

    ctx->pc = 0x4ba450u;

label_4ba450:
    // 0x4ba450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ba450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ba454:
    // 0x4ba454: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ba454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4ba458:
    // 0x4ba458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ba458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ba45c:
    // 0x4ba45c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ba45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ba460:
    // 0x4ba460: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4ba460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ba464:
    // 0x4ba464: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ba464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ba468:
    // 0x4ba468: 0xc0e9fdc  jal         func_3A7F70
label_4ba46c:
    if (ctx->pc == 0x4BA46Cu) {
        ctx->pc = 0x4BA46Cu;
            // 0x4ba46c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4BA470u;
        goto label_4ba470;
    }
    ctx->pc = 0x4BA468u;
    SET_GPR_U32(ctx, 31, 0x4BA470u);
    ctx->pc = 0x4BA46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA468u;
            // 0x4ba46c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F70u;
    if (runtime->hasFunction(0x3A7F70u)) {
        auto targetFn = runtime->lookupFunction(0x3A7F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA470u; }
        if (ctx->pc != 0x4BA470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A7F70_0x3a7f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA470u; }
        if (ctx->pc != 0x4BA470u) { return; }
    }
    ctx->pc = 0x4BA470u;
label_4ba470:
    // 0x4ba470: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ba470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ba474:
    // 0x4ba474: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4ba474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ba478:
    // 0x4ba478: 0x24630de0  addiu       $v1, $v1, 0xDE0
    ctx->pc = 0x4ba478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3552));
label_4ba47c:
    // 0x4ba47c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ba47cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ba480:
    // 0x4ba480: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x4ba480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
label_4ba484:
    // 0x4ba484: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_4ba488:
    if (ctx->pc == 0x4BA488u) {
        ctx->pc = 0x4BA48Cu;
        goto label_4ba48c;
    }
    ctx->pc = 0x4BA484u;
    {
        const bool branch_taken_0x4ba484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ba484) {
            ctx->pc = 0x4BA508u;
            goto label_4ba508;
        }
    }
    ctx->pc = 0x4BA48Cu;
label_4ba48c:
    // 0x4ba48c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4ba48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ba490:
    // 0x4ba490: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_4ba494:
    if (ctx->pc == 0x4BA494u) {
        ctx->pc = 0x4BA498u;
        goto label_4ba498;
    }
    ctx->pc = 0x4BA490u;
    {
        const bool branch_taken_0x4ba490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ba490) {
            ctx->pc = 0x4BA508u;
            goto label_4ba508;
        }
    }
    ctx->pc = 0x4BA498u;
label_4ba498:
    // 0x4ba498: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4ba498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ba49c:
    // 0x4ba49c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_4ba4a0:
    if (ctx->pc == 0x4BA4A0u) {
        ctx->pc = 0x4BA4A4u;
        goto label_4ba4a4;
    }
    ctx->pc = 0x4BA49Cu;
    {
        const bool branch_taken_0x4ba49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ba49c) {
            ctx->pc = 0x4BA4E0u;
            goto label_4ba4e0;
        }
    }
    ctx->pc = 0x4BA4A4u;
label_4ba4a4:
    // 0x4ba4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ba4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ba4a8:
    // 0x4ba4a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_4ba4ac:
    if (ctx->pc == 0x4BA4ACu) {
        ctx->pc = 0x4BA4B0u;
        goto label_4ba4b0;
    }
    ctx->pc = 0x4BA4A8u;
    {
        const bool branch_taken_0x4ba4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ba4a8) {
            ctx->pc = 0x4BA4B8u;
            goto label_4ba4b8;
        }
    }
    ctx->pc = 0x4BA4B0u;
label_4ba4b0:
    // 0x4ba4b0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4ba4b4:
    if (ctx->pc == 0x4BA4B4u) {
        ctx->pc = 0x4BA4B4u;
            // 0x4ba4b4: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4BA4B8u;
        goto label_4ba4b8;
    }
    ctx->pc = 0x4BA4B0u;
    {
        const bool branch_taken_0x4ba4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA4B0u;
            // 0x4ba4b4: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba4b0) {
            ctx->pc = 0x4BA530u;
            goto label_4ba530;
        }
    }
    ctx->pc = 0x4BA4B8u;
label_4ba4b8:
    // 0x4ba4b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ba4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ba4bc:
    // 0x4ba4bc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4ba4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4ba4c0:
    // 0x4ba4c0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4ba4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4ba4c4:
    // 0x4ba4c4: 0x246365c0  addiu       $v1, $v1, 0x65C0
    ctx->pc = 0x4ba4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26048));
label_4ba4c8:
    // 0x4ba4c8: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x4ba4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_4ba4cc:
    // 0x4ba4cc: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x4ba4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4ba4d0:
    // 0x4ba4d0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4ba4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4ba4d4:
    // 0x4ba4d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ba4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ba4d8:
    // 0x4ba4d8: 0x10000014  b           . + 4 + (0x14 << 2)
label_4ba4dc:
    if (ctx->pc == 0x4BA4DCu) {
        ctx->pc = 0x4BA4DCu;
            // 0x4ba4dc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BA4E0u;
        goto label_4ba4e0;
    }
    ctx->pc = 0x4BA4D8u;
    {
        const bool branch_taken_0x4ba4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA4D8u;
            // 0x4ba4dc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba4d8) {
            ctx->pc = 0x4BA52Cu;
            goto label_4ba52c;
        }
    }
    ctx->pc = 0x4BA4E0u;
label_4ba4e0:
    // 0x4ba4e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ba4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ba4e4:
    // 0x4ba4e4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4ba4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4ba4e8:
    // 0x4ba4e8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4ba4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4ba4ec:
    // 0x4ba4ec: 0x246367a0  addiu       $v1, $v1, 0x67A0
    ctx->pc = 0x4ba4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26528));
label_4ba4f0:
    // 0x4ba4f0: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x4ba4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_4ba4f4:
    // 0x4ba4f4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x4ba4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4ba4f8:
    // 0x4ba4f8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4ba4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4ba4fc:
    // 0x4ba4fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ba4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ba500:
    // 0x4ba500: 0x1000000a  b           . + 4 + (0xA << 2)
label_4ba504:
    if (ctx->pc == 0x4BA504u) {
        ctx->pc = 0x4BA504u;
            // 0x4ba504: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BA508u;
        goto label_4ba508;
    }
    ctx->pc = 0x4BA500u;
    {
        const bool branch_taken_0x4ba500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA500u;
            // 0x4ba504: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba500) {
            ctx->pc = 0x4BA52Cu;
            goto label_4ba52c;
        }
    }
    ctx->pc = 0x4BA508u;
label_4ba508:
    // 0x4ba508: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ba508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ba50c:
    // 0x4ba50c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4ba50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4ba510:
    // 0x4ba510: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4ba510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4ba514:
    // 0x4ba514: 0x24636980  addiu       $v1, $v1, 0x6980
    ctx->pc = 0x4ba514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27008));
label_4ba518:
    // 0x4ba518: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x4ba518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_4ba51c:
    // 0x4ba51c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x4ba51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4ba520:
    // 0x4ba520: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4ba520u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4ba524:
    // 0x4ba524: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ba524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ba528:
    // 0x4ba528: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x4ba528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ba52c:
    // 0x4ba52c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x4ba52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4ba530:
    // 0x4ba530: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x4ba530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_4ba534:
    // 0x4ba534: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x4ba534u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4ba538:
    // 0x4ba538: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4ba538u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4ba53c:
    // 0x4ba53c: 0xc04f3f4  jal         func_13CFD0
label_4ba540:
    if (ctx->pc == 0x4BA540u) {
        ctx->pc = 0x4BA540u;
            // 0x4ba540: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4BA544u;
        goto label_4ba544;
    }
    ctx->pc = 0x4BA53Cu;
    SET_GPR_U32(ctx, 31, 0x4BA544u);
    ctx->pc = 0x4BA540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA53Cu;
            // 0x4ba540: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA544u; }
        if (ctx->pc != 0x4BA544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA544u; }
        if (ctx->pc != 0x4BA544u) { return; }
    }
    ctx->pc = 0x4BA544u;
label_4ba544:
    // 0x4ba544: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x4ba544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_4ba548:
    // 0x4ba548: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x4ba548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_4ba54c:
    // 0x4ba54c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x4ba54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_4ba550:
    // 0x4ba550: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x4ba550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ba554:
    // 0x4ba554: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4ba554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4ba558:
    // 0x4ba558: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x4ba558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ba55c:
    // 0x4ba55c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x4ba55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ba560:
    // 0x4ba560: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4ba560u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4ba564:
    // 0x4ba564: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x4ba564u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_4ba568:
    // 0x4ba568: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4ba568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_4ba56c:
    // 0x4ba56c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ba56cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_4ba570:
    // 0x4ba570: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ba570u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4ba574:
    // 0x4ba574: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ba574u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ba578:
    // 0x4ba578: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x4ba578u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4ba57c:
    // 0x4ba57c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x4ba57cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_4ba580:
    // 0x4ba580: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x4ba580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_4ba584:
    // 0x4ba584: 0xc04ce30  jal         func_1338C0
label_4ba588:
    if (ctx->pc == 0x4BA588u) {
        ctx->pc = 0x4BA588u;
            // 0x4ba588: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA58Cu;
        goto label_4ba58c;
    }
    ctx->pc = 0x4BA584u;
    SET_GPR_U32(ctx, 31, 0x4BA58Cu);
    ctx->pc = 0x4BA588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA584u;
            // 0x4ba588: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA58Cu; }
        if (ctx->pc != 0x4BA58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA58Cu; }
        if (ctx->pc != 0x4BA58Cu) { return; }
    }
    ctx->pc = 0x4BA58Cu;
label_4ba58c:
    // 0x4ba58c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x4ba58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4ba590:
    // 0x4ba590: 0xc04ce78  jal         func_1339E0
label_4ba594:
    if (ctx->pc == 0x4BA594u) {
        ctx->pc = 0x4BA594u;
            // 0x4ba594: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x4BA598u;
        goto label_4ba598;
    }
    ctx->pc = 0x4BA590u;
    SET_GPR_U32(ctx, 31, 0x4BA598u);
    ctx->pc = 0x4BA594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA590u;
            // 0x4ba594: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1339E0u;
    if (runtime->hasFunction(0x1339E0u)) {
        auto targetFn = runtime->lookupFunction(0x1339E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA598u; }
        if (ctx->pc != 0x4BA598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001339E0_0x1339e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA598u; }
        if (ctx->pc != 0x4BA598u) { return; }
    }
    ctx->pc = 0x4BA598u;
label_4ba598:
    // 0x4ba598: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ba598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ba59c:
    // 0x4ba59c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ba59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4ba5a0:
    // 0x4ba5a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ba5a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ba5a4:
    // 0x4ba5a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ba5a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ba5a8:
    // 0x4ba5a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ba5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ba5ac:
    // 0x4ba5ac: 0x3e00008  jr          $ra
label_4ba5b0:
    if (ctx->pc == 0x4BA5B0u) {
        ctx->pc = 0x4BA5B0u;
            // 0x4ba5b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4BA5B4u;
        goto label_4ba5b4;
    }
    ctx->pc = 0x4BA5ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BA5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA5ACu;
            // 0x4ba5b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BA5B4u;
label_4ba5b4:
    // 0x4ba5b4: 0x0  nop
    ctx->pc = 0x4ba5b4u;
    // NOP
label_4ba5b8:
    // 0x4ba5b8: 0x0  nop
    ctx->pc = 0x4ba5b8u;
    // NOP
label_4ba5bc:
    // 0x4ba5bc: 0x0  nop
    ctx->pc = 0x4ba5bcu;
    // NOP
label_4ba5c0:
    // 0x4ba5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ba5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ba5c4:
    // 0x4ba5c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ba5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ba5c8:
    // 0x4ba5c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ba5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ba5cc:
    // 0x4ba5cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ba5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ba5d0:
    // 0x4ba5d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ba5d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ba5d4:
    // 0x4ba5d4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4ba5d8:
    if (ctx->pc == 0x4BA5D8u) {
        ctx->pc = 0x4BA5D8u;
            // 0x4ba5d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA5DCu;
        goto label_4ba5dc;
    }
    ctx->pc = 0x4BA5D4u;
    {
        const bool branch_taken_0x4ba5d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA5D4u;
            // 0x4ba5d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba5d4) {
            ctx->pc = 0x4BA608u;
            goto label_4ba608;
        }
    }
    ctx->pc = 0x4BA5DCu;
label_4ba5dc:
    // 0x4ba5dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ba5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ba5e0:
    // 0x4ba5e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ba5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ba5e4:
    // 0x4ba5e4: 0x24420e00  addiu       $v0, $v0, 0xE00
    ctx->pc = 0x4ba5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3584));
label_4ba5e8:
    // 0x4ba5e8: 0xc0ccf5c  jal         func_333D70
label_4ba5ec:
    if (ctx->pc == 0x4BA5ECu) {
        ctx->pc = 0x4BA5ECu;
            // 0x4ba5ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4BA5F0u;
        goto label_4ba5f0;
    }
    ctx->pc = 0x4BA5E8u;
    SET_GPR_U32(ctx, 31, 0x4BA5F0u);
    ctx->pc = 0x4BA5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA5E8u;
            // 0x4ba5ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x333D70u;
    if (runtime->hasFunction(0x333D70u)) {
        auto targetFn = runtime->lookupFunction(0x333D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA5F0u; }
        if (ctx->pc != 0x4BA5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00333D70_0x333d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA5F0u; }
        if (ctx->pc != 0x4BA5F0u) { return; }
    }
    ctx->pc = 0x4BA5F0u;
label_4ba5f0:
    // 0x4ba5f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4ba5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4ba5f4:
    // 0x4ba5f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ba5f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ba5f8:
    // 0x4ba5f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4ba5fc:
    if (ctx->pc == 0x4BA5FCu) {
        ctx->pc = 0x4BA5FCu;
            // 0x4ba5fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA600u;
        goto label_4ba600;
    }
    ctx->pc = 0x4BA5F8u;
    {
        const bool branch_taken_0x4ba5f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ba5f8) {
            ctx->pc = 0x4BA5FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA5F8u;
            // 0x4ba5fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BA60Cu;
            goto label_4ba60c;
        }
    }
    ctx->pc = 0x4BA600u;
label_4ba600:
    // 0x4ba600: 0xc0400a8  jal         func_1002A0
label_4ba604:
    if (ctx->pc == 0x4BA604u) {
        ctx->pc = 0x4BA604u;
            // 0x4ba604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA608u;
        goto label_4ba608;
    }
    ctx->pc = 0x4BA600u;
    SET_GPR_U32(ctx, 31, 0x4BA608u);
    ctx->pc = 0x4BA604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA600u;
            // 0x4ba604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA608u; }
        if (ctx->pc != 0x4BA608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA608u; }
        if (ctx->pc != 0x4BA608u) { return; }
    }
    ctx->pc = 0x4BA608u;
label_4ba608:
    // 0x4ba608: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ba608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ba60c:
    // 0x4ba60c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ba60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ba610:
    // 0x4ba610: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ba610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ba614:
    // 0x4ba614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ba614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ba618:
    // 0x4ba618: 0x3e00008  jr          $ra
label_4ba61c:
    if (ctx->pc == 0x4BA61Cu) {
        ctx->pc = 0x4BA61Cu;
            // 0x4ba61c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4BA620u;
        goto label_4ba620;
    }
    ctx->pc = 0x4BA618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BA61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA618u;
            // 0x4ba61c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BA620u;
label_4ba620:
    // 0x4ba620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ba620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ba624:
    // 0x4ba624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ba624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ba628:
    // 0x4ba628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ba628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ba62c:
    // 0x4ba62c: 0xc0cc978  jal         func_3325E0
label_4ba630:
    if (ctx->pc == 0x4BA630u) {
        ctx->pc = 0x4BA630u;
            // 0x4ba630: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA634u;
        goto label_4ba634;
    }
    ctx->pc = 0x4BA62Cu;
    SET_GPR_U32(ctx, 31, 0x4BA634u);
    ctx->pc = 0x4BA630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA62Cu;
            // 0x4ba630: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3325E0u;
    if (runtime->hasFunction(0x3325E0u)) {
        auto targetFn = runtime->lookupFunction(0x3325E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA634u; }
        if (ctx->pc != 0x4BA634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003325E0_0x3325e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA634u; }
        if (ctx->pc != 0x4BA634u) { return; }
    }
    ctx->pc = 0x4BA634u;
label_4ba634:
    // 0x4ba634: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ba634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ba638:
    // 0x4ba638: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4ba638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4ba63c:
    // 0x4ba63c: 0x90640078  lbu         $a0, 0x78($v1)
    ctx->pc = 0x4ba63cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
label_4ba640:
    // 0x4ba640: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4ba644:
    if (ctx->pc == 0x4BA644u) {
        ctx->pc = 0x4BA644u;
            // 0x4ba644: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4BA648u;
        goto label_4ba648;
    }
    ctx->pc = 0x4BA640u;
    {
        const bool branch_taken_0x4ba640 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4ba640) {
            ctx->pc = 0x4BA644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA640u;
            // 0x4ba644: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BA654u;
            goto label_4ba654;
        }
    }
    ctx->pc = 0x4BA648u;
label_4ba648:
    // 0x4ba648: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4ba648u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba64c:
    // 0x4ba64c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4ba650:
    if (ctx->pc == 0x4BA650u) {
        ctx->pc = 0x4BA650u;
            // 0x4ba650: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4BA654u;
        goto label_4ba654;
    }
    ctx->pc = 0x4BA64Cu;
    {
        const bool branch_taken_0x4ba64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA64Cu;
            // 0x4ba650: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba64c) {
            ctx->pc = 0x4BA66Cu;
            goto label_4ba66c;
        }
    }
    ctx->pc = 0x4BA654u;
label_4ba654:
    // 0x4ba654: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4ba654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4ba658:
    // 0x4ba658: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4ba658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4ba65c:
    // 0x4ba65c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4ba65cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba660:
    // 0x4ba660: 0x0  nop
    ctx->pc = 0x4ba660u;
    // NOP
label_4ba664:
    // 0x4ba664: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x4ba664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_4ba668:
    // 0x4ba668: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x4ba668u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_4ba66c:
    // 0x4ba66c: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x4ba66cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_4ba670:
    // 0x4ba670: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4ba670u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ba674:
    // 0x4ba674: 0x0  nop
    ctx->pc = 0x4ba674u;
    // NOP
label_4ba678:
    // 0x4ba678: 0x460408c3  div.s       $f3, $f1, $f4
    ctx->pc = 0x4ba678u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[4];
label_4ba67c:
    // 0x4ba67c: 0x3c044682  lui         $a0, 0x4682
    ctx->pc = 0x4ba67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18050 << 16));
label_4ba680:
    // 0x4ba680: 0x34853555  ori         $a1, $a0, 0x3555
    ctx->pc = 0x4ba680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13653);
label_4ba684:
    // 0x4ba684: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x4ba684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_4ba688:
    // 0x4ba688: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x4ba688u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[1];
label_4ba68c:
    // 0x4ba68c: 0xe4640014  swc1        $f4, 0x14($v1)
    ctx->pc = 0x4ba68cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_4ba690:
    // 0x4ba690: 0xe4630018  swc1        $f3, 0x18($v1)
    ctx->pc = 0x4ba690u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_4ba694:
    // 0x4ba694: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x4ba694u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_4ba698:
    // 0x4ba698: 0xe463001c  swc1        $f3, 0x1C($v1)
    ctx->pc = 0x4ba698u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_4ba69c:
    // 0x4ba69c: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x4ba69cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_4ba6a0:
    // 0x4ba6a0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4ba6a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_4ba6a4:
    // 0x4ba6a4: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x4ba6a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_4ba6a8:
    // 0x4ba6a8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4ba6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ba6ac:
    // 0x4ba6ac: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x4ba6acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ba6b0:
    // 0x4ba6b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4ba6b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba6b4:
    // 0x4ba6b4: 0x0  nop
    ctx->pc = 0x4ba6b4u;
    // NOP
label_4ba6b8:
    // 0x4ba6b8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4ba6b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4ba6bc:
    // 0x4ba6bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ba6bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4ba6c0:
    // 0x4ba6c0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x4ba6c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4ba6c4:
    // 0x4ba6c4: 0x0  nop
    ctx->pc = 0x4ba6c4u;
    // NOP
label_4ba6c8:
    // 0x4ba6c8: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x4ba6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
label_4ba6cc:
    // 0x4ba6cc: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x4ba6ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ba6d0:
    // 0x4ba6d0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_4ba6d4:
    if (ctx->pc == 0x4BA6D4u) {
        ctx->pc = 0x4BA6D4u;
            // 0x4ba6d4: 0x90660078  lbu         $a2, 0x78($v1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
        ctx->pc = 0x4BA6D8u;
        goto label_4ba6d8;
    }
    ctx->pc = 0x4BA6D0u;
    {
        const bool branch_taken_0x4ba6d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BA6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA6D0u;
            // 0x4ba6d4: 0x90660078  lbu         $a2, 0x78($v1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba6d0) {
            ctx->pc = 0x4BA6E8u;
            goto label_4ba6e8;
        }
    }
    ctx->pc = 0x4BA6D8u;
label_4ba6d8:
    // 0x4ba6d8: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ba6d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ba6dc:
    // 0x4ba6dc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4ba6dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4ba6e0:
    // 0x4ba6e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_4ba6e4:
    if (ctx->pc == 0x4BA6E4u) {
        ctx->pc = 0x4BA6E4u;
            // 0x4ba6e4: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4BA6E8u;
        goto label_4ba6e8;
    }
    ctx->pc = 0x4BA6E0u;
    {
        const bool branch_taken_0x4ba6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA6E0u;
            // 0x4ba6e4: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba6e0) {
            ctx->pc = 0x4BA704u;
            goto label_4ba704;
        }
    }
    ctx->pc = 0x4BA6E8u;
label_4ba6e8:
    // 0x4ba6e8: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x4ba6e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_4ba6ec:
    // 0x4ba6ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4ba6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4ba6f0:
    // 0x4ba6f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ba6f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ba6f4:
    // 0x4ba6f4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4ba6f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4ba6f8:
    // 0x4ba6f8: 0x0  nop
    ctx->pc = 0x4ba6f8u;
    // NOP
label_4ba6fc:
    // 0x4ba6fc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4ba6fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4ba700:
    // 0x4ba700: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4ba700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4ba704:
    // 0x4ba704: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4ba704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4ba708:
    // 0x4ba708: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4ba708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ba70c:
    // 0x4ba70c: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x4ba70cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4ba710:
    // 0x4ba710: 0x2812  mflo        $a1
    ctx->pc = 0x4ba710u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_4ba714:
    // 0x4ba714: 0xa0650079  sb          $a1, 0x79($v1)
    ctx->pc = 0x4ba714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 121), (uint8_t)GPR_U32(ctx, 5));
label_4ba718:
    // 0x4ba718: 0x8e050cc4  lw          $a1, 0xCC4($s0)
    ctx->pc = 0x4ba718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3268)));
label_4ba71c:
    // 0x4ba71c: 0x50a40039  beql        $a1, $a0, . + 4 + (0x39 << 2)
label_4ba720:
    if (ctx->pc == 0x4BA720u) {
        ctx->pc = 0x4BA720u;
            // 0x4ba720: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4BA724u;
        goto label_4ba724;
    }
    ctx->pc = 0x4BA71Cu;
    {
        const bool branch_taken_0x4ba71c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x4ba71c) {
            ctx->pc = 0x4BA720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA71Cu;
            // 0x4ba720: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BA804u;
            goto label_4ba804;
        }
    }
    ctx->pc = 0x4BA724u;
label_4ba724:
    // 0x4ba724: 0x90640078  lbu         $a0, 0x78($v1)
    ctx->pc = 0x4ba724u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
label_4ba728:
    // 0x4ba728: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x4ba728u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_4ba72c:
    // 0x4ba72c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4ba730:
    if (ctx->pc == 0x4BA730u) {
        ctx->pc = 0x4BA730u;
            // 0x4ba730: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4BA734u;
        goto label_4ba734;
    }
    ctx->pc = 0x4BA72Cu;
    {
        const bool branch_taken_0x4ba72c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4ba72c) {
            ctx->pc = 0x4BA730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA72Cu;
            // 0x4ba730: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BA740u;
            goto label_4ba740;
        }
    }
    ctx->pc = 0x4BA734u;
label_4ba734:
    // 0x4ba734: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4ba734u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba738:
    // 0x4ba738: 0x10000007  b           . + 4 + (0x7 << 2)
label_4ba73c:
    if (ctx->pc == 0x4BA73Cu) {
        ctx->pc = 0x4BA73Cu;
            // 0x4ba73c: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4BA740u;
        goto label_4ba740;
    }
    ctx->pc = 0x4BA738u;
    {
        const bool branch_taken_0x4ba738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA738u;
            // 0x4ba73c: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba738) {
            ctx->pc = 0x4BA758u;
            goto label_4ba758;
        }
    }
    ctx->pc = 0x4BA740u;
label_4ba740:
    // 0x4ba740: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4ba740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4ba744:
    // 0x4ba744: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4ba744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4ba748:
    // 0x4ba748: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4ba748u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba74c:
    // 0x4ba74c: 0x0  nop
    ctx->pc = 0x4ba74cu;
    // NOP
label_4ba750:
    // 0x4ba750: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x4ba750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_4ba754:
    // 0x4ba754: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x4ba754u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_4ba758:
    // 0x4ba758: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x4ba758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_4ba75c:
    // 0x4ba75c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4ba75cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ba760:
    // 0x4ba760: 0x0  nop
    ctx->pc = 0x4ba760u;
    // NOP
label_4ba764:
    // 0x4ba764: 0x460408c3  div.s       $f3, $f1, $f4
    ctx->pc = 0x4ba764u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[4];
label_4ba768:
    // 0x4ba768: 0x3c044682  lui         $a0, 0x4682
    ctx->pc = 0x4ba768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18050 << 16));
label_4ba76c:
    // 0x4ba76c: 0x34853555  ori         $a1, $a0, 0x3555
    ctx->pc = 0x4ba76cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13653);
label_4ba770:
    // 0x4ba770: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x4ba770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_4ba774:
    // 0x4ba774: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x4ba774u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[1];
label_4ba778:
    // 0x4ba778: 0xe4640014  swc1        $f4, 0x14($v1)
    ctx->pc = 0x4ba778u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_4ba77c:
    // 0x4ba77c: 0xe4630018  swc1        $f3, 0x18($v1)
    ctx->pc = 0x4ba77cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_4ba780:
    // 0x4ba780: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x4ba780u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_4ba784:
    // 0x4ba784: 0xe463001c  swc1        $f3, 0x1C($v1)
    ctx->pc = 0x4ba784u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_4ba788:
    // 0x4ba788: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x4ba788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_4ba78c:
    // 0x4ba78c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4ba78cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_4ba790:
    // 0x4ba790: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x4ba790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_4ba794:
    // 0x4ba794: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4ba794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ba798:
    // 0x4ba798: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x4ba798u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ba79c:
    // 0x4ba79c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4ba79cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba7a0:
    // 0x4ba7a0: 0x0  nop
    ctx->pc = 0x4ba7a0u;
    // NOP
label_4ba7a4:
    // 0x4ba7a4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4ba7a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4ba7a8:
    // 0x4ba7a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ba7a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4ba7ac:
    // 0x4ba7ac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x4ba7acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4ba7b0:
    // 0x4ba7b0: 0x0  nop
    ctx->pc = 0x4ba7b0u;
    // NOP
label_4ba7b4:
    // 0x4ba7b4: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x4ba7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
label_4ba7b8:
    // 0x4ba7b8: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x4ba7b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ba7bc:
    // 0x4ba7bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_4ba7c0:
    if (ctx->pc == 0x4BA7C0u) {
        ctx->pc = 0x4BA7C0u;
            // 0x4ba7c0: 0x90660078  lbu         $a2, 0x78($v1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
        ctx->pc = 0x4BA7C4u;
        goto label_4ba7c4;
    }
    ctx->pc = 0x4BA7BCu;
    {
        const bool branch_taken_0x4ba7bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BA7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA7BCu;
            // 0x4ba7c0: 0x90660078  lbu         $a2, 0x78($v1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba7bc) {
            ctx->pc = 0x4BA7D4u;
            goto label_4ba7d4;
        }
    }
    ctx->pc = 0x4BA7C4u;
label_4ba7c4:
    // 0x4ba7c4: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ba7c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ba7c8:
    // 0x4ba7c8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4ba7c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4ba7cc:
    // 0x4ba7cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_4ba7d0:
    if (ctx->pc == 0x4BA7D0u) {
        ctx->pc = 0x4BA7D0u;
            // 0x4ba7d0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4BA7D4u;
        goto label_4ba7d4;
    }
    ctx->pc = 0x4BA7CCu;
    {
        const bool branch_taken_0x4ba7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA7CCu;
            // 0x4ba7d0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba7cc) {
            ctx->pc = 0x4BA7F0u;
            goto label_4ba7f0;
        }
    }
    ctx->pc = 0x4BA7D4u;
label_4ba7d4:
    // 0x4ba7d4: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x4ba7d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_4ba7d8:
    // 0x4ba7d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4ba7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4ba7dc:
    // 0x4ba7dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ba7dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ba7e0:
    // 0x4ba7e0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4ba7e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4ba7e4:
    // 0x4ba7e4: 0x0  nop
    ctx->pc = 0x4ba7e4u;
    // NOP
label_4ba7e8:
    // 0x4ba7e8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4ba7e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4ba7ec:
    // 0x4ba7ec: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4ba7ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4ba7f0:
    // 0x4ba7f0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x4ba7f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4ba7f4:
    // 0x4ba7f4: 0xc4001a  div         $zero, $a2, $a0
    ctx->pc = 0x4ba7f4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4ba7f8:
    // 0x4ba7f8: 0x2012  mflo        $a0
    ctx->pc = 0x4ba7f8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_4ba7fc:
    // 0x4ba7fc: 0xa0640079  sb          $a0, 0x79($v1)
    ctx->pc = 0x4ba7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 121), (uint8_t)GPR_U32(ctx, 4));
label_4ba800:
    // 0x4ba800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ba800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ba804:
    // 0x4ba804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ba804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ba808:
    // 0x4ba808: 0x3e00008  jr          $ra
label_4ba80c:
    if (ctx->pc == 0x4BA80Cu) {
        ctx->pc = 0x4BA80Cu;
            // 0x4ba80c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4BA810u;
        goto label_4ba810;
    }
    ctx->pc = 0x4BA808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BA80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA808u;
            // 0x4ba80c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BA810u;
label_4ba810:
    // 0x4ba810: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4ba810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4ba814:
    // 0x4ba814: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4ba814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4ba818:
    // 0x4ba818: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4ba818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4ba81c:
    // 0x4ba81c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ba81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ba820:
    // 0x4ba820: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4ba820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ba824:
    // 0x4ba824: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ba824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ba828:
    // 0x4ba828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ba828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ba82c:
    // 0x4ba82c: 0xc0cc888  jal         func_332220
label_4ba830:
    if (ctx->pc == 0x4BA830u) {
        ctx->pc = 0x4BA830u;
            // 0x4ba830: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4BA834u;
        goto label_4ba834;
    }
    ctx->pc = 0x4BA82Cu;
    SET_GPR_U32(ctx, 31, 0x4BA834u);
    ctx->pc = 0x4BA830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA82Cu;
            // 0x4ba830: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x332220u;
    if (runtime->hasFunction(0x332220u)) {
        auto targetFn = runtime->lookupFunction(0x332220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA834u; }
        if (ctx->pc != 0x4BA834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00332220_0x332220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA834u; }
        if (ctx->pc != 0x4BA834u) { return; }
    }
    ctx->pc = 0x4BA834u;
label_4ba834:
    // 0x4ba834: 0xa2800c76  sb          $zero, 0xC76($s4)
    ctx->pc = 0x4ba834u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3190), (uint8_t)GPR_U32(ctx, 0));
label_4ba838:
    // 0x4ba838: 0x8e840cf8  lw          $a0, 0xCF8($s4)
    ctx->pc = 0x4ba838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3320)));
label_4ba83c:
    // 0x4ba83c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_4ba840:
    if (ctx->pc == 0x4BA840u) {
        ctx->pc = 0x4BA840u;
            // 0x4ba840: 0x8e840cfc  lw          $a0, 0xCFC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3324)));
        ctx->pc = 0x4BA844u;
        goto label_4ba844;
    }
    ctx->pc = 0x4BA83Cu;
    {
        const bool branch_taken_0x4ba83c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ba83c) {
            ctx->pc = 0x4BA840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA83Cu;
            // 0x4ba840: 0x8e840cfc  lw          $a0, 0xCFC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3324)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BA85Cu;
            goto label_4ba85c;
        }
    }
    ctx->pc = 0x4BA844u;
label_4ba844:
    // 0x4ba844: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ba844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ba848:
    // 0x4ba848: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ba848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ba84c:
    // 0x4ba84c: 0x320f809  jalr        $t9
label_4ba850:
    if (ctx->pc == 0x4BA850u) {
        ctx->pc = 0x4BA850u;
            // 0x4ba850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA854u;
        goto label_4ba854;
    }
    ctx->pc = 0x4BA84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BA854u);
        ctx->pc = 0x4BA850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA84Cu;
            // 0x4ba850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BA854u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BA854u; }
            if (ctx->pc != 0x4BA854u) { return; }
        }
        }
    }
    ctx->pc = 0x4BA854u;
label_4ba854:
    // 0x4ba854: 0xae800cf8  sw          $zero, 0xCF8($s4)
    ctx->pc = 0x4ba854u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3320), GPR_U32(ctx, 0));
label_4ba858:
    // 0x4ba858: 0x8e840cfc  lw          $a0, 0xCFC($s4)
    ctx->pc = 0x4ba858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3324)));
label_4ba85c:
    // 0x4ba85c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_4ba860:
    if (ctx->pc == 0x4BA860u) {
        ctx->pc = 0x4BA860u;
            // 0x4ba860: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA864u;
        goto label_4ba864;
    }
    ctx->pc = 0x4BA85Cu;
    {
        const bool branch_taken_0x4ba85c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ba85c) {
            ctx->pc = 0x4BA860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA85Cu;
            // 0x4ba860: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BA87Cu;
            goto label_4ba87c;
        }
    }
    ctx->pc = 0x4BA864u;
label_4ba864:
    // 0x4ba864: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ba864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ba868:
    // 0x4ba868: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ba868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ba86c:
    // 0x4ba86c: 0x320f809  jalr        $t9
label_4ba870:
    if (ctx->pc == 0x4BA870u) {
        ctx->pc = 0x4BA870u;
            // 0x4ba870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA874u;
        goto label_4ba874;
    }
    ctx->pc = 0x4BA86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BA874u);
        ctx->pc = 0x4BA870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA86Cu;
            // 0x4ba870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BA874u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BA874u; }
            if (ctx->pc != 0x4BA874u) { return; }
        }
        }
    }
    ctx->pc = 0x4BA874u;
label_4ba874:
    // 0x4ba874: 0xae800cfc  sw          $zero, 0xCFC($s4)
    ctx->pc = 0x4ba874u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3324), GPR_U32(ctx, 0));
label_4ba878:
    // 0x4ba878: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4ba878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ba87c:
    // 0x4ba87c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x4ba87cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ba880:
    // 0x4ba880: 0xac600cc8  sw          $zero, 0xCC8($v1)
    ctx->pc = 0x4ba880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3272), GPR_U32(ctx, 0));
label_4ba884:
    // 0x4ba884: 0x8e820ce8  lw          $v0, 0xCE8($s4)
    ctx->pc = 0x4ba884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3304)));
label_4ba888:
    // 0x4ba888: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x4ba888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4ba88c:
    // 0x4ba88c: 0xac620cd0  sw          $v0, 0xCD0($v1)
    ctx->pc = 0x4ba88cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3280), GPR_U32(ctx, 2));
label_4ba890:
    // 0x4ba890: 0x8e820ce8  lw          $v0, 0xCE8($s4)
    ctx->pc = 0x4ba890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3304)));
label_4ba894:
    // 0x4ba894: 0x70441018  mult1       $v0, $v0, $a0
    ctx->pc = 0x4ba894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4ba898:
    // 0x4ba898: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4ba898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4ba89c:
    // 0x4ba89c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4ba89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4ba8a0:
    // 0x4ba8a0: 0xac620cd8  sw          $v0, 0xCD8($v1)
    ctx->pc = 0x4ba8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3288), GPR_U32(ctx, 2));
label_4ba8a4:
    // 0x4ba8a4: 0xac600cec  sw          $zero, 0xCEC($v1)
    ctx->pc = 0x4ba8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3308), GPR_U32(ctx, 0));
label_4ba8a8:
    // 0x4ba8a8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x4ba8a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_4ba8ac:
    // 0x4ba8ac: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4ba8b0:
    if (ctx->pc == 0x4BA8B0u) {
        ctx->pc = 0x4BA8B0u;
            // 0x4ba8b0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x4BA8B4u;
        goto label_4ba8b4;
    }
    ctx->pc = 0x4BA8ACu;
    {
        const bool branch_taken_0x4ba8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA8ACu;
            // 0x4ba8b0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba8ac) {
            ctx->pc = 0x4BA880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ba880;
        }
    }
    ctx->pc = 0x4BA8B4u;
label_4ba8b4:
    // 0x4ba8b4: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x4ba8b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_4ba8b8:
    // 0x4ba8b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4ba8b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ba8bc:
    // 0x4ba8bc: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x4ba8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_4ba8c0:
    // 0x4ba8c0: 0x8e830ce8  lw          $v1, 0xCE8($s4)
    ctx->pc = 0x4ba8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3304)));
label_4ba8c4:
    // 0x4ba8c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ba8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ba8c8:
    // 0x4ba8c8: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x4ba8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4ba8cc:
    // 0x4ba8cc: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x4ba8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_4ba8d0:
    // 0x4ba8d0: 0x223001b  divu        $zero, $s1, $v1
    ctx->pc = 0x4ba8d0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_4ba8d4:
    // 0x4ba8d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4ba8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ba8d8:
    // 0x4ba8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ba8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ba8dc:
    // 0x4ba8dc: 0x26130440  addiu       $s3, $s0, 0x440
    ctx->pc = 0x4ba8dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
label_4ba8e0:
    // 0x4ba8e0: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x4ba8e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_4ba8e4:
    // 0x4ba8e4: 0x1812  mflo        $v1
    ctx->pc = 0x4ba8e4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4ba8e8:
    // 0x4ba8e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ba8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4ba8ec:
    // 0x4ba8ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ba8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ba8f0:
    // 0x4ba8f0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4ba8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4ba8f4:
    // 0x4ba8f4: 0x320f809  jalr        $t9
label_4ba8f8:
    if (ctx->pc == 0x4BA8F8u) {
        ctx->pc = 0x4BA8F8u;
            // 0x4ba8f8: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->pc = 0x4BA8FCu;
        goto label_4ba8fc;
    }
    ctx->pc = 0x4BA8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BA8FCu);
        ctx->pc = 0x4BA8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA8F4u;
            // 0x4ba8f8: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BA8FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BA8FCu; }
            if (ctx->pc != 0x4BA8FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4BA8FCu;
label_4ba8fc:
    // 0x4ba8fc: 0x8e850968  lw          $a1, 0x968($s4)
    ctx->pc = 0x4ba8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2408)));
label_4ba900:
    // 0x4ba900: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4ba900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4ba904:
    // 0x4ba904: 0x24636dd0  addiu       $v1, $v1, 0x6DD0
    ctx->pc = 0x4ba904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28112));
label_4ba908:
    // 0x4ba908: 0x8e020d6c  lw          $v0, 0xD6C($s0)
    ctx->pc = 0x4ba908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_4ba90c:
    // 0x4ba90c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4ba90cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4ba910:
    // 0x4ba910: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4ba910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4ba914:
    // 0x4ba914: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4ba914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ba918:
    // 0x4ba918: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x4ba918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_4ba91c:
    // 0x4ba91c: 0x8e050d6c  lw          $a1, 0xD6C($s0)
    ctx->pc = 0x4ba91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_4ba920:
    // 0x4ba920: 0x8e060d70  lw          $a2, 0xD70($s0)
    ctx->pc = 0x4ba920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_4ba924:
    // 0x4ba924: 0xc0753f0  jal         func_1D4FC0
label_4ba928:
    if (ctx->pc == 0x4BA928u) {
        ctx->pc = 0x4BA928u;
            // 0x4ba928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA92Cu;
        goto label_4ba92c;
    }
    ctx->pc = 0x4BA924u;
    SET_GPR_U32(ctx, 31, 0x4BA92Cu);
    ctx->pc = 0x4BA928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA924u;
            // 0x4ba928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4FC0u;
    if (runtime->hasFunction(0x1D4FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA92Cu; }
        if (ctx->pc != 0x4BA92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4FC0_0x1d4fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA92Cu; }
        if (ctx->pc != 0x4BA92Cu) { return; }
    }
    ctx->pc = 0x4BA92Cu;
label_4ba92c:
    // 0x4ba92c: 0xc0754e0  jal         func_1D5380
label_4ba930:
    if (ctx->pc == 0x4BA930u) {
        ctx->pc = 0x4BA930u;
            // 0x4ba930: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA934u;
        goto label_4ba934;
    }
    ctx->pc = 0x4BA92Cu;
    SET_GPR_U32(ctx, 31, 0x4BA934u);
    ctx->pc = 0x4BA930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA92Cu;
            // 0x4ba930: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5380u;
    if (runtime->hasFunction(0x1D5380u)) {
        auto targetFn = runtime->lookupFunction(0x1D5380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA934u; }
        if (ctx->pc != 0x4BA934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5380_0x1d5380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA934u; }
        if (ctx->pc != 0x4BA934u) { return; }
    }
    ctx->pc = 0x4BA934u;
label_4ba934:
    // 0x4ba934: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x4ba934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_4ba938:
    // 0x4ba938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ba938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ba93c:
    // 0x4ba93c: 0xae030db8  sw          $v1, 0xDB8($s0)
    ctx->pc = 0x4ba93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 3));
label_4ba940:
    // 0x4ba940: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4ba940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4ba944:
    // 0x4ba944: 0x8e030d60  lw          $v1, 0xD60($s0)
    ctx->pc = 0x4ba944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_4ba948:
    // 0x4ba948: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x4ba948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_4ba94c:
    // 0x4ba94c: 0xa20211a1  sb          $v0, 0x11A1($s0)
    ctx->pc = 0x4ba94cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4513), (uint8_t)GPR_U32(ctx, 2));
label_4ba950:
    // 0x4ba950: 0x8e82077c  lw          $v0, 0x77C($s4)
    ctx->pc = 0x4ba950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1916)));
label_4ba954:
    // 0x4ba954: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x4ba954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4ba958:
    // 0x4ba958: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_4ba95c:
    if (ctx->pc == 0x4BA95Cu) {
        ctx->pc = 0x4BA95Cu;
            // 0x4ba95c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4BA960u;
        goto label_4ba960;
    }
    ctx->pc = 0x4BA958u;
    {
        const bool branch_taken_0x4ba958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA958u;
            // 0x4ba95c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba958) {
            ctx->pc = 0x4BA8C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ba8c0;
        }
    }
    ctx->pc = 0x4BA960u;
label_4ba960:
    // 0x4ba960: 0x26840db0  addiu       $a0, $s4, 0xDB0
    ctx->pc = 0x4ba960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3504));
label_4ba964:
    // 0x4ba964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ba964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ba968:
    // 0x4ba968: 0xc04a576  jal         func_1295D8
label_4ba96c:
    if (ctx->pc == 0x4BA96Cu) {
        ctx->pc = 0x4BA96Cu;
            // 0x4ba96c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4BA970u;
        goto label_4ba970;
    }
    ctx->pc = 0x4BA968u;
    SET_GPR_U32(ctx, 31, 0x4BA970u);
    ctx->pc = 0x4BA96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA968u;
            // 0x4ba96c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA970u; }
        if (ctx->pc != 0x4BA970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA970u; }
        if (ctx->pc != 0x4BA970u) { return; }
    }
    ctx->pc = 0x4BA970u;
label_4ba970:
    // 0x4ba970: 0xa2800db2  sb          $zero, 0xDB2($s4)
    ctx->pc = 0x4ba970u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3506), (uint8_t)GPR_U32(ctx, 0));
label_4ba974:
    // 0x4ba974: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4ba974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4ba978:
    // 0x4ba978: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4ba978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ba97c:
    // 0x4ba97c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ba97cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ba980:
    // 0x4ba980: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ba980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ba984:
    // 0x4ba984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ba984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ba988:
    // 0x4ba988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ba988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ba98c:
    // 0x4ba98c: 0x3e00008  jr          $ra
label_4ba990:
    if (ctx->pc == 0x4BA990u) {
        ctx->pc = 0x4BA990u;
            // 0x4ba990: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4BA994u;
        goto label_4ba994;
    }
    ctx->pc = 0x4BA98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BA990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA98Cu;
            // 0x4ba990: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BA994u;
label_4ba994:
    // 0x4ba994: 0x0  nop
    ctx->pc = 0x4ba994u;
    // NOP
label_4ba998:
    // 0x4ba998: 0x0  nop
    ctx->pc = 0x4ba998u;
    // NOP
label_4ba99c:
    // 0x4ba99c: 0x0  nop
    ctx->pc = 0x4ba99cu;
    // NOP
label_4ba9a0:
    // 0x4ba9a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ba9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ba9a4:
    // 0x4ba9a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ba9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4ba9a8:
    // 0x4ba9a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ba9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ba9ac:
    // 0x4ba9ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ba9acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ba9b0:
    // 0x4ba9b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ba9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ba9b4:
    // 0x4ba9b4: 0x26440838  addiu       $a0, $s2, 0x838
    ctx->pc = 0x4ba9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2104));
label_4ba9b8:
    // 0x4ba9b8: 0xc0bc6ec  jal         func_2F1BB0
label_4ba9bc:
    if (ctx->pc == 0x4BA9BCu) {
        ctx->pc = 0x4BA9BCu;
            // 0x4ba9bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4BA9C0u;
        goto label_4ba9c0;
    }
    ctx->pc = 0x4BA9B8u;
    SET_GPR_U32(ctx, 31, 0x4BA9C0u);
    ctx->pc = 0x4BA9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA9B8u;
            // 0x4ba9bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BB0u;
    if (runtime->hasFunction(0x2F1BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA9C0u; }
        if (ctx->pc != 0x4BA9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BB0_0x2f1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA9C0u; }
        if (ctx->pc != 0x4BA9C0u) { return; }
    }
    ctx->pc = 0x4BA9C0u;
label_4ba9c0:
    // 0x4ba9c0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4ba9c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ba9c4:
    // 0x4ba9c4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4ba9c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4ba9c8:
    // 0x4ba9c8: 0x320f809  jalr        $t9
label_4ba9cc:
    if (ctx->pc == 0x4BA9CCu) {
        ctx->pc = 0x4BA9CCu;
            // 0x4ba9cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA9D0u;
        goto label_4ba9d0;
    }
    ctx->pc = 0x4BA9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BA9D0u);
        ctx->pc = 0x4BA9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA9C8u;
            // 0x4ba9cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BA9D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BA9D0u; }
            if (ctx->pc != 0x4BA9D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4BA9D0u;
label_4ba9d0:
    // 0x4ba9d0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4ba9d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ba9d4:
    // 0x4ba9d4: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4ba9d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4ba9d8:
    // 0x4ba9d8: 0x320f809  jalr        $t9
label_4ba9dc:
    if (ctx->pc == 0x4BA9DCu) {
        ctx->pc = 0x4BA9DCu;
            // 0x4ba9dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA9E0u;
        goto label_4ba9e0;
    }
    ctx->pc = 0x4BA9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BA9E0u);
        ctx->pc = 0x4BA9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA9D8u;
            // 0x4ba9dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BA9E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BA9E0u; }
            if (ctx->pc != 0x4BA9E0u) { return; }
        }
        }
    }
    ctx->pc = 0x4BA9E0u;
label_4ba9e0:
    // 0x4ba9e0: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_4ba9e4:
    if (ctx->pc == 0x4BA9E4u) {
        ctx->pc = 0x4BA9E4u;
            // 0x4ba9e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA9E8u;
        goto label_4ba9e8;
    }
    ctx->pc = 0x4BA9E0u;
    {
        const bool branch_taken_0x4ba9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ba9e0) {
            ctx->pc = 0x4BA9E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA9E0u;
            // 0x4ba9e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BAA50u;
            goto label_4baa50;
        }
    }
    ctx->pc = 0x4BA9E8u;
label_4ba9e8:
    // 0x4ba9e8: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x4ba9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_4ba9ec:
    // 0x4ba9ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4ba9ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ba9f0:
    // 0x4ba9f0: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x4ba9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_4ba9f4:
    // 0x4ba9f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4ba9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4ba9f8:
    // 0x4ba9f8: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x4ba9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_4ba9fc:
    // 0x4ba9fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4ba9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_4baa00:
    // 0x4baa00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4baa04:
    if (ctx->pc == 0x4BAA04u) {
        ctx->pc = 0x4BAA08u;
        goto label_4baa08;
    }
    ctx->pc = 0x4BAA00u;
    {
        const bool branch_taken_0x4baa00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4baa00) {
            ctx->pc = 0x4BAA10u;
            goto label_4baa10;
        }
    }
    ctx->pc = 0x4BAA08u;
label_4baa08:
    // 0x4baa08: 0xc07634c  jal         func_1D8D30
label_4baa0c:
    if (ctx->pc == 0x4BAA0Cu) {
        ctx->pc = 0x4BAA10u;
        goto label_4baa10;
    }
    ctx->pc = 0x4BAA08u;
    SET_GPR_U32(ctx, 31, 0x4BAA10u);
    ctx->pc = 0x1D8D30u;
    if (runtime->hasFunction(0x1D8D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAA10u; }
        if (ctx->pc != 0x4BAA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8D30_0x1d8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAA10u; }
        if (ctx->pc != 0x4BAA10u) { return; }
    }
    ctx->pc = 0x4BAA10u;
label_4baa10:
    // 0x4baa10: 0x8e420780  lw          $v0, 0x780($s2)
    ctx->pc = 0x4baa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1920)));
label_4baa14:
    // 0x4baa14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4baa14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4baa18:
    // 0x4baa18: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4baa18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4baa1c:
    // 0x4baa1c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4baa20:
    if (ctx->pc == 0x4BAA20u) {
        ctx->pc = 0x4BAA20u;
            // 0x4baa20: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4BAA24u;
        goto label_4baa24;
    }
    ctx->pc = 0x4BAA1Cu;
    {
        const bool branch_taken_0x4baa1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BAA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAA1Cu;
            // 0x4baa20: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baa1c) {
            ctx->pc = 0x4BA9F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ba9f4;
        }
    }
    ctx->pc = 0x4BAA24u;
label_4baa24:
    // 0x4baa24: 0xc0cc24c  jal         func_330930
label_4baa28:
    if (ctx->pc == 0x4BAA28u) {
        ctx->pc = 0x4BAA28u;
            // 0x4baa28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BAA2Cu;
        goto label_4baa2c;
    }
    ctx->pc = 0x4BAA24u;
    SET_GPR_U32(ctx, 31, 0x4BAA2Cu);
    ctx->pc = 0x4BAA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAA24u;
            // 0x4baa28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x330930u;
    if (runtime->hasFunction(0x330930u)) {
        auto targetFn = runtime->lookupFunction(0x330930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAA2Cu; }
        if (ctx->pc != 0x4BAA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330930_0x330930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAA2Cu; }
        if (ctx->pc != 0x4BAA2Cu) { return; }
    }
    ctx->pc = 0x4BAA2Cu;
label_4baa2c:
    // 0x4baa2c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x4baa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4baa30:
    // 0x4baa30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4baa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4baa34:
    // 0x4baa34: 0xae420cb4  sw          $v0, 0xCB4($s2)
    ctx->pc = 0x4baa34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3252), GPR_U32(ctx, 2));
label_4baa38:
    // 0x4baa38: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4baa38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4baa3c:
    // 0x4baa3c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4baa3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4baa40:
    // 0x4baa40: 0x320f809  jalr        $t9
label_4baa44:
    if (ctx->pc == 0x4BAA44u) {
        ctx->pc = 0x4BAA44u;
            // 0x4baa44: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x4BAA48u;
        goto label_4baa48;
    }
    ctx->pc = 0x4BAA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BAA48u);
        ctx->pc = 0x4BAA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAA40u;
            // 0x4baa44: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BAA48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BAA48u; }
            if (ctx->pc != 0x4BAA48u) { return; }
        }
        }
    }
    ctx->pc = 0x4BAA48u;
label_4baa48:
    // 0x4baa48: 0x10000004  b           . + 4 + (0x4 << 2)
label_4baa4c:
    if (ctx->pc == 0x4BAA4Cu) {
        ctx->pc = 0x4BAA4Cu;
            // 0x4baa4c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4BAA50u;
        goto label_4baa50;
    }
    ctx->pc = 0x4BAA48u;
    {
        const bool branch_taken_0x4baa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAA48u;
            // 0x4baa4c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baa48) {
            ctx->pc = 0x4BAA5Cu;
            goto label_4baa5c;
        }
    }
    ctx->pc = 0x4BAA50u;
label_4baa50:
    // 0x4baa50: 0xc0cb814  jal         func_32E050
label_4baa54:
    if (ctx->pc == 0x4BAA54u) {
        ctx->pc = 0x4BAA58u;
        goto label_4baa58;
    }
    ctx->pc = 0x4BAA50u;
    SET_GPR_U32(ctx, 31, 0x4BAA58u);
    ctx->pc = 0x32E050u;
    if (runtime->hasFunction(0x32E050u)) {
        auto targetFn = runtime->lookupFunction(0x32E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAA58u; }
        if (ctx->pc != 0x4BAA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032E050_0x32e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAA58u; }
        if (ctx->pc != 0x4BAA58u) { return; }
    }
    ctx->pc = 0x4BAA58u;
label_4baa58:
    // 0x4baa58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4baa58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4baa5c:
    // 0x4baa5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4baa5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4baa60:
    // 0x4baa60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4baa60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4baa64:
    // 0x4baa64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4baa64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4baa68:
    // 0x4baa68: 0x3e00008  jr          $ra
label_4baa6c:
    if (ctx->pc == 0x4BAA6Cu) {
        ctx->pc = 0x4BAA6Cu;
            // 0x4baa6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4BAA70u;
        goto label_4baa70;
    }
    ctx->pc = 0x4BAA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BAA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAA68u;
            // 0x4baa6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BAA70u;
label_4baa70:
    // 0x4baa70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4baa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4baa74:
    // 0x4baa74: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4baa74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4baa78:
    // 0x4baa78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4baa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4baa7c:
    // 0x4baa7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4baa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4baa80:
    // 0x4baa80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4baa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4baa84:
    // 0x4baa84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4baa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4baa88:
    // 0x4baa88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4baa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4baa8c:
    // 0x4baa8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4baa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4baa90:
    // 0x4baa90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4baa90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4baa94:
    // 0x4baa94: 0x8c670ec8  lw          $a3, 0xEC8($v1)
    ctx->pc = 0x4baa94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_4baa98:
    // 0x4baa98: 0x8c860cf4  lw          $a2, 0xCF4($a0)
    ctx->pc = 0x4baa98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3316)));
label_4baa9c:
    // 0x4baa9c: 0x8c830968  lw          $v1, 0x968($a0)
    ctx->pc = 0x4baa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_4baaa0:
    // 0x4baaa0: 0x8cf00008  lw          $s0, 0x8($a3)
    ctx->pc = 0x4baaa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4baaa4:
    // 0x4baaa4: 0x10c50062  beq         $a2, $a1, . + 4 + (0x62 << 2)
label_4baaa8:
    if (ctx->pc == 0x4BAAA8u) {
        ctx->pc = 0x4BAAA8u;
            // 0x4baaa8: 0x2472ffff  addiu       $s2, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->pc = 0x4BAAACu;
        goto label_4baaac;
    }
    ctx->pc = 0x4BAAA4u;
    {
        const bool branch_taken_0x4baaa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x4BAAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAAA4u;
            // 0x4baaa8: 0x2472ffff  addiu       $s2, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baaa4) {
            ctx->pc = 0x4BAC30u;
            goto label_4bac30;
        }
    }
    ctx->pc = 0x4BAAACu;
label_4baaac:
    // 0x4baaac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4baaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4baab0:
    // 0x4baab0: 0x50c30028  beql        $a2, $v1, . + 4 + (0x28 << 2)
label_4baab4:
    if (ctx->pc == 0x4BAAB4u) {
        ctx->pc = 0x4BAAB4u;
            // 0x4baab4: 0x8c85078c  lw          $a1, 0x78C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1932)));
        ctx->pc = 0x4BAAB8u;
        goto label_4baab8;
    }
    ctx->pc = 0x4BAAB0u;
    {
        const bool branch_taken_0x4baab0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4baab0) {
            ctx->pc = 0x4BAAB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAAB0u;
            // 0x4baab4: 0x8c85078c  lw          $a1, 0x78C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1932)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BAB54u;
            goto label_4bab54;
        }
    }
    ctx->pc = 0x4BAAB8u;
label_4baab8:
    // 0x4baab8: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
label_4baabc:
    if (ctx->pc == 0x4BAABCu) {
        ctx->pc = 0x4BAABCu;
            // 0x4baabc: 0x8c83078c  lw          $v1, 0x78C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1932)));
        ctx->pc = 0x4BAAC0u;
        goto label_4baac0;
    }
    ctx->pc = 0x4BAAB8u;
    {
        const bool branch_taken_0x4baab8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4baab8) {
            ctx->pc = 0x4BAABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAAB8u;
            // 0x4baabc: 0x8c83078c  lw          $v1, 0x78C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1932)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BAAC8u;
            goto label_4baac8;
        }
    }
    ctx->pc = 0x4BAAC0u;
label_4baac0:
    // 0x4baac0: 0x10000086  b           . + 4 + (0x86 << 2)
label_4baac4:
    if (ctx->pc == 0x4BAAC4u) {
        ctx->pc = 0x4BAAC4u;
            // 0x4baac4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4BAAC8u;
        goto label_4baac8;
    }
    ctx->pc = 0x4BAAC0u;
    {
        const bool branch_taken_0x4baac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAAC0u;
            // 0x4baac4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baac0) {
            ctx->pc = 0x4BACDCu;
            goto label_4bacdc;
        }
    }
    ctx->pc = 0x4BAAC8u;
label_4baac8:
    // 0x4baac8: 0x14650083  bne         $v1, $a1, . + 4 + (0x83 << 2)
label_4baacc:
    if (ctx->pc == 0x4BAACCu) {
        ctx->pc = 0x4BAAD0u;
        goto label_4baad0;
    }
    ctx->pc = 0x4BAAC8u;
    {
        const bool branch_taken_0x4baac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x4baac8) {
            ctx->pc = 0x4BACD8u;
            goto label_4bacd8;
        }
    }
    ctx->pc = 0x4BAAD0u;
label_4baad0:
    // 0x4baad0: 0x90830db0  lbu         $v1, 0xDB0($a0)
    ctx->pc = 0x4baad0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3504)));
label_4baad4:
    // 0x4baad4: 0x10600080  beqz        $v1, . + 4 + (0x80 << 2)
label_4baad8:
    if (ctx->pc == 0x4BAAD8u) {
        ctx->pc = 0x4BAADCu;
        goto label_4baadc;
    }
    ctx->pc = 0x4BAAD4u;
    {
        const bool branch_taken_0x4baad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4baad4) {
            ctx->pc = 0x4BACD8u;
            goto label_4bacd8;
        }
    }
    ctx->pc = 0x4BAADCu;
label_4baadc:
    // 0x4baadc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4baadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4baae0:
    // 0x4baae0: 0x8c420e88  lw          $v0, 0xE88($v0)
    ctx->pc = 0x4baae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3720)));
label_4baae4:
    // 0x4baae4: 0xc0ca6b4  jal         func_329AD0
label_4baae8:
    if (ctx->pc == 0x4BAAE8u) {
        ctx->pc = 0x4BAAE8u;
            // 0x4baae8: 0x8c440d78  lw          $a0, 0xD78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
        ctx->pc = 0x4BAAECu;
        goto label_4baaec;
    }
    ctx->pc = 0x4BAAE4u;
    SET_GPR_U32(ctx, 31, 0x4BAAECu);
    ctx->pc = 0x4BAAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAAE4u;
            // 0x4baae8: 0x8c440d78  lw          $a0, 0xD78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329AD0u;
    if (runtime->hasFunction(0x329AD0u)) {
        auto targetFn = runtime->lookupFunction(0x329AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAAECu; }
        if (ctx->pc != 0x4BAAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329AD0_0x329ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAAECu; }
        if (ctx->pc != 0x4BAAECu) { return; }
    }
    ctx->pc = 0x4BAAECu;
label_4baaec:
    // 0x4baaec: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x4baaecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4baaf0:
    // 0x4baaf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4baaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4baaf4:
    // 0x4baaf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4baaf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4baaf8:
    // 0x4baaf8: 0xc1205c8  jal         func_481720
label_4baafc:
    if (ctx->pc == 0x4BAAFCu) {
        ctx->pc = 0x4BAAFCu;
            // 0x4baafc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BAB00u;
        goto label_4bab00;
    }
    ctx->pc = 0x4BAAF8u;
    SET_GPR_U32(ctx, 31, 0x4BAB00u);
    ctx->pc = 0x4BAAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAAF8u;
            // 0x4baafc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481720u;
    if (runtime->hasFunction(0x481720u)) {
        auto targetFn = runtime->lookupFunction(0x481720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAB00u; }
        if (ctx->pc != 0x4BAB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481720_0x481720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAB00u; }
        if (ctx->pc != 0x4BAB00u) { return; }
    }
    ctx->pc = 0x4BAB00u;
label_4bab00:
    // 0x4bab00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bab00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bab04:
    // 0x4bab04: 0x3403ea60  ori         $v1, $zero, 0xEA60
    ctx->pc = 0x4bab04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_4bab08:
    // 0x4bab08: 0x8c420e88  lw          $v0, 0xE88($v0)
    ctx->pc = 0x4bab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3720)));
label_4bab0c:
    // 0x4bab0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bab10:
    // 0x4bab10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4bab10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bab14:
    // 0x4bab14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4bab14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bab18:
    // 0x4bab18: 0x8c420d78  lw          $v0, 0xD78($v0)
    ctx->pc = 0x4bab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
label_4bab1c:
    // 0x4bab1c: 0x90480011  lbu         $t0, 0x11($v0)
    ctx->pc = 0x4bab1cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
label_4bab20:
    // 0x4bab20: 0x94490012  lhu         $t1, 0x12($v0)
    ctx->pc = 0x4bab20u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
label_4bab24:
    // 0x4bab24: 0x83940  sll         $a3, $t0, 5
    ctx->pc = 0x4bab24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_4bab28:
    // 0x4bab28: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x4bab28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_4bab2c:
    // 0x4bab2c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4bab2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4bab30:
    // 0x4bab30: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x4bab30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4bab34:
    // 0x4bab34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bab34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bab38:
    // 0x4bab38: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4bab38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4bab3c:
    // 0x4bab3c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4bab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4bab40:
    // 0x4bab40: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x4bab40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_4bab44:
    // 0x4bab44: 0xc120550  jal         func_481540
label_4bab48:
    if (ctx->pc == 0x4BAB48u) {
        ctx->pc = 0x4BAB48u;
            // 0x4bab48: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BAB4Cu;
        goto label_4bab4c;
    }
    ctx->pc = 0x4BAB44u;
    SET_GPR_U32(ctx, 31, 0x4BAB4Cu);
    ctx->pc = 0x4BAB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAB44u;
            // 0x4bab48: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481540u;
    if (runtime->hasFunction(0x481540u)) {
        auto targetFn = runtime->lookupFunction(0x481540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAB4Cu; }
        if (ctx->pc != 0x4BAB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481540_0x481540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAB4Cu; }
        if (ctx->pc != 0x4BAB4Cu) { return; }
    }
    ctx->pc = 0x4BAB4Cu;
label_4bab4c:
    // 0x4bab4c: 0x10000062  b           . + 4 + (0x62 << 2)
label_4bab50:
    if (ctx->pc == 0x4BAB50u) {
        ctx->pc = 0x4BAB54u;
        goto label_4bab54;
    }
    ctx->pc = 0x4BAB4Cu;
    {
        const bool branch_taken_0x4bab4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bab4c) {
            ctx->pc = 0x4BACD8u;
            goto label_4bacd8;
        }
    }
    ctx->pc = 0x4BAB54u;
label_4bab54:
    // 0x4bab54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4bab54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4bab58:
    // 0x4bab58: 0x14a3005f  bne         $a1, $v1, . + 4 + (0x5F << 2)
label_4bab5c:
    if (ctx->pc == 0x4BAB5Cu) {
        ctx->pc = 0x4BAB60u;
        goto label_4bab60;
    }
    ctx->pc = 0x4BAB58u;
    {
        const bool branch_taken_0x4bab58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x4bab58) {
            ctx->pc = 0x4BACD8u;
            goto label_4bacd8;
        }
    }
    ctx->pc = 0x4BAB60u;
label_4bab60:
    // 0x4bab60: 0x90830db0  lbu         $v1, 0xDB0($a0)
    ctx->pc = 0x4bab60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3504)));
label_4bab64:
    // 0x4bab64: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_4bab68:
    if (ctx->pc == 0x4BAB68u) {
        ctx->pc = 0x4BAB6Cu;
        goto label_4bab6c;
    }
    ctx->pc = 0x4BAB64u;
    {
        const bool branch_taken_0x4bab64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bab64) {
            ctx->pc = 0x4BACD8u;
            goto label_4bacd8;
        }
    }
    ctx->pc = 0x4BAB6Cu;
label_4bab6c:
    // 0x4bab6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bab70:
    // 0x4bab70: 0x8c420e8c  lw          $v0, 0xE8C($v0)
    ctx->pc = 0x4bab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3724)));
label_4bab74:
    // 0x4bab74: 0xc0ca6b4  jal         func_329AD0
label_4bab78:
    if (ctx->pc == 0x4BAB78u) {
        ctx->pc = 0x4BAB78u;
            // 0x4bab78: 0x8c440d78  lw          $a0, 0xD78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
        ctx->pc = 0x4BAB7Cu;
        goto label_4bab7c;
    }
    ctx->pc = 0x4BAB74u;
    SET_GPR_U32(ctx, 31, 0x4BAB7Cu);
    ctx->pc = 0x4BAB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAB74u;
            // 0x4bab78: 0x8c440d78  lw          $a0, 0xD78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329AD0u;
    if (runtime->hasFunction(0x329AD0u)) {
        auto targetFn = runtime->lookupFunction(0x329AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAB7Cu; }
        if (ctx->pc != 0x4BAB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329AD0_0x329ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAB7Cu; }
        if (ctx->pc != 0x4BAB7Cu) { return; }
    }
    ctx->pc = 0x4BAB7Cu;
label_4bab7c:
    // 0x4bab7c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x4bab7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4bab80:
    // 0x4bab80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bab80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bab84:
    // 0x4bab84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4bab84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bab88:
    // 0x4bab88: 0xc1205c8  jal         func_481720
label_4bab8c:
    if (ctx->pc == 0x4BAB8Cu) {
        ctx->pc = 0x4BAB8Cu;
            // 0x4bab8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BAB90u;
        goto label_4bab90;
    }
    ctx->pc = 0x4BAB88u;
    SET_GPR_U32(ctx, 31, 0x4BAB90u);
    ctx->pc = 0x4BAB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAB88u;
            // 0x4bab8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481720u;
    if (runtime->hasFunction(0x481720u)) {
        auto targetFn = runtime->lookupFunction(0x481720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAB90u; }
        if (ctx->pc != 0x4BAB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481720_0x481720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAB90u; }
        if (ctx->pc != 0x4BAB90u) { return; }
    }
    ctx->pc = 0x4BAB90u;
label_4bab90:
    // 0x4bab90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bab90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bab94:
    // 0x4bab94: 0x3403ea60  ori         $v1, $zero, 0xEA60
    ctx->pc = 0x4bab94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_4bab98:
    // 0x4bab98: 0x8c420e88  lw          $v0, 0xE88($v0)
    ctx->pc = 0x4bab98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3720)));
label_4bab9c:
    // 0x4bab9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bab9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4baba0:
    // 0x4baba0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4baba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4baba4:
    // 0x4baba4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4baba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4baba8:
    // 0x4baba8: 0x8c420d78  lw          $v0, 0xD78($v0)
    ctx->pc = 0x4baba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
label_4babac:
    // 0x4babac: 0x90480011  lbu         $t0, 0x11($v0)
    ctx->pc = 0x4babacu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
label_4babb0:
    // 0x4babb0: 0x94490012  lhu         $t1, 0x12($v0)
    ctx->pc = 0x4babb0u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
label_4babb4:
    // 0x4babb4: 0x83940  sll         $a3, $t0, 5
    ctx->pc = 0x4babb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_4babb8:
    // 0x4babb8: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x4babb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_4babbc:
    // 0x4babbc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4babbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4babc0:
    // 0x4babc0: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x4babc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4babc4:
    // 0x4babc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4babc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4babc8:
    // 0x4babc8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4babc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4babcc:
    // 0x4babcc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4babccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4babd0:
    // 0x4babd0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x4babd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_4babd4:
    // 0x4babd4: 0xc120550  jal         func_481540
label_4babd8:
    if (ctx->pc == 0x4BABD8u) {
        ctx->pc = 0x4BABD8u;
            // 0x4babd8: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BABDCu;
        goto label_4babdc;
    }
    ctx->pc = 0x4BABD4u;
    SET_GPR_U32(ctx, 31, 0x4BABDCu);
    ctx->pc = 0x4BABD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BABD4u;
            // 0x4babd8: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481540u;
    if (runtime->hasFunction(0x481540u)) {
        auto targetFn = runtime->lookupFunction(0x481540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BABDCu; }
        if (ctx->pc != 0x4BABDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481540_0x481540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BABDCu; }
        if (ctx->pc != 0x4BABDCu) { return; }
    }
    ctx->pc = 0x4BABDCu;
label_4babdc:
    // 0x4babdc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4babdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4babe0:
    // 0x4babe0: 0x3403ea60  ori         $v1, $zero, 0xEA60
    ctx->pc = 0x4babe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_4babe4:
    // 0x4babe4: 0x8c420e8c  lw          $v0, 0xE8C($v0)
    ctx->pc = 0x4babe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3724)));
label_4babe8:
    // 0x4babe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4babe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4babec:
    // 0x4babec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4babecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4babf0:
    // 0x4babf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4babf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4babf4:
    // 0x4babf4: 0x8c420d78  lw          $v0, 0xD78($v0)
    ctx->pc = 0x4babf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
label_4babf8:
    // 0x4babf8: 0x90480011  lbu         $t0, 0x11($v0)
    ctx->pc = 0x4babf8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
label_4babfc:
    // 0x4babfc: 0x94490012  lhu         $t1, 0x12($v0)
    ctx->pc = 0x4babfcu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
label_4bac00:
    // 0x4bac00: 0x83940  sll         $a3, $t0, 5
    ctx->pc = 0x4bac00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_4bac04:
    // 0x4bac04: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x4bac04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_4bac08:
    // 0x4bac08: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4bac08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4bac0c:
    // 0x4bac0c: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x4bac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4bac10:
    // 0x4bac10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bac10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bac14:
    // 0x4bac14: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4bac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4bac18:
    // 0x4bac18: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4bac18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4bac1c:
    // 0x4bac1c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x4bac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_4bac20:
    // 0x4bac20: 0xc120550  jal         func_481540
label_4bac24:
    if (ctx->pc == 0x4BAC24u) {
        ctx->pc = 0x4BAC24u;
            // 0x4bac24: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BAC28u;
        goto label_4bac28;
    }
    ctx->pc = 0x4BAC20u;
    SET_GPR_U32(ctx, 31, 0x4BAC28u);
    ctx->pc = 0x4BAC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAC20u;
            // 0x4bac24: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481540u;
    if (runtime->hasFunction(0x481540u)) {
        auto targetFn = runtime->lookupFunction(0x481540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAC28u; }
        if (ctx->pc != 0x4BAC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481540_0x481540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAC28u; }
        if (ctx->pc != 0x4BAC28u) { return; }
    }
    ctx->pc = 0x4BAC28u;
label_4bac28:
    // 0x4bac28: 0x1000002b  b           . + 4 + (0x2B << 2)
label_4bac2c:
    if (ctx->pc == 0x4BAC2Cu) {
        ctx->pc = 0x4BAC30u;
        goto label_4bac30;
    }
    ctx->pc = 0x4BAC28u;
    {
        const bool branch_taken_0x4bac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bac28) {
            ctx->pc = 0x4BACD8u;
            goto label_4bacd8;
        }
    }
    ctx->pc = 0x4BAC30u;
label_4bac30:
    // 0x4bac30: 0x8c83078c  lw          $v1, 0x78C($a0)
    ctx->pc = 0x4bac30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1932)));
label_4bac34:
    // 0x4bac34: 0x14650028  bne         $v1, $a1, . + 4 + (0x28 << 2)
label_4bac38:
    if (ctx->pc == 0x4BAC38u) {
        ctx->pc = 0x4BAC3Cu;
        goto label_4bac3c;
    }
    ctx->pc = 0x4BAC34u;
    {
        const bool branch_taken_0x4bac34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x4bac34) {
            ctx->pc = 0x4BACD8u;
            goto label_4bacd8;
        }
    }
    ctx->pc = 0x4BAC3Cu;
label_4bac3c:
    // 0x4bac3c: 0x90820db0  lbu         $v0, 0xDB0($a0)
    ctx->pc = 0x4bac3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3504)));
label_4bac40:
    // 0x4bac40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4bac44:
    if (ctx->pc == 0x4BAC44u) {
        ctx->pc = 0x4BAC44u;
            // 0x4bac44: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BAC48u;
        goto label_4bac48;
    }
    ctx->pc = 0x4BAC40u;
    {
        const bool branch_taken_0x4bac40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAC40u;
            // 0x4bac44: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bac40) {
            ctx->pc = 0x4BAC50u;
            goto label_4bac50;
        }
    }
    ctx->pc = 0x4BAC48u;
label_4bac48:
    // 0x4bac48: 0x10000005  b           . + 4 + (0x5 << 2)
label_4bac4c:
    if (ctx->pc == 0x4BAC4Cu) {
        ctx->pc = 0x4BAC4Cu;
            // 0x4bac4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BAC50u;
        goto label_4bac50;
    }
    ctx->pc = 0x4BAC48u;
    {
        const bool branch_taken_0x4bac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAC48u;
            // 0x4bac4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bac48) {
            ctx->pc = 0x4BAC60u;
            goto label_4bac60;
        }
    }
    ctx->pc = 0x4BAC50u;
label_4bac50:
    // 0x4bac50: 0x90820db1  lbu         $v0, 0xDB1($a0)
    ctx->pc = 0x4bac50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3505)));
label_4bac54:
    // 0x4bac54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4bac58:
    if (ctx->pc == 0x4BAC58u) {
        ctx->pc = 0x4BAC5Cu;
        goto label_4bac5c;
    }
    ctx->pc = 0x4BAC54u;
    {
        const bool branch_taken_0x4bac54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bac54) {
            ctx->pc = 0x4BAC60u;
            goto label_4bac60;
        }
    }
    ctx->pc = 0x4BAC5Cu;
label_4bac5c:
    // 0x4bac5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4bac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4bac60:
    // 0x4bac60: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bac60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bac64:
    // 0x4bac64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bac64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bac68:
    // 0x4bac68: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x4bac68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_4bac6c:
    // 0x4bac6c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x4bac6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bac70:
    // 0x4bac70: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4bac70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4bac74:
    // 0x4bac74: 0xc0ca6b4  jal         func_329AD0
label_4bac78:
    if (ctx->pc == 0x4BAC78u) {
        ctx->pc = 0x4BAC78u;
            // 0x4bac78: 0x8c440d78  lw          $a0, 0xD78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
        ctx->pc = 0x4BAC7Cu;
        goto label_4bac7c;
    }
    ctx->pc = 0x4BAC74u;
    SET_GPR_U32(ctx, 31, 0x4BAC7Cu);
    ctx->pc = 0x4BAC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAC74u;
            // 0x4bac78: 0x8c440d78  lw          $a0, 0xD78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329AD0u;
    if (runtime->hasFunction(0x329AD0u)) {
        auto targetFn = runtime->lookupFunction(0x329AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAC7Cu; }
        if (ctx->pc != 0x4BAC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329AD0_0x329ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAC7Cu; }
        if (ctx->pc != 0x4BAC7Cu) { return; }
    }
    ctx->pc = 0x4BAC7Cu;
label_4bac7c:
    // 0x4bac7c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x4bac7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4bac80:
    // 0x4bac80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bac84:
    // 0x4bac84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4bac84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bac88:
    // 0x4bac88: 0xc1205c8  jal         func_481720
label_4bac8c:
    if (ctx->pc == 0x4BAC8Cu) {
        ctx->pc = 0x4BAC8Cu;
            // 0x4bac8c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4BAC90u;
        goto label_4bac90;
    }
    ctx->pc = 0x4BAC88u;
    SET_GPR_U32(ctx, 31, 0x4BAC90u);
    ctx->pc = 0x4BAC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAC88u;
            // 0x4bac8c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481720u;
    if (runtime->hasFunction(0x481720u)) {
        auto targetFn = runtime->lookupFunction(0x481720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAC90u; }
        if (ctx->pc != 0x4BAC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481720_0x481720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAC90u; }
        if (ctx->pc != 0x4BAC90u) { return; }
    }
    ctx->pc = 0x4BAC90u;
label_4bac90:
    // 0x4bac90: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4bac90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4bac94:
    // 0x4bac94: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x4bac94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_4bac98:
    // 0x4bac98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bac98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bac9c:
    // 0x4bac9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4bac9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4baca0:
    // 0x4baca0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4baca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4baca4:
    // 0x4baca4: 0x8c630d78  lw          $v1, 0xD78($v1)
    ctx->pc = 0x4baca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3448)));
label_4baca8:
    // 0x4baca8: 0x90680011  lbu         $t0, 0x11($v1)
    ctx->pc = 0x4baca8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
label_4bacac:
    // 0x4bacac: 0x94690012  lhu         $t1, 0x12($v1)
    ctx->pc = 0x4bacacu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
label_4bacb0:
    // 0x4bacb0: 0x83940  sll         $a3, $t0, 5
    ctx->pc = 0x4bacb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_4bacb4:
    // 0x4bacb4: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x4bacb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_4bacb8:
    // 0x4bacb8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x4bacb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4bacbc:
    // 0x4bacbc: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x4bacbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4bacc0:
    // 0x4bacc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bacc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bacc4:
    // 0x4bacc4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4bacc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4bacc8:
    // 0x4bacc8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4bacc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4baccc:
    // 0x4baccc: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x4bacccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_4bacd0:
    // 0x4bacd0: 0xc120550  jal         func_481540
label_4bacd4:
    if (ctx->pc == 0x4BACD4u) {
        ctx->pc = 0x4BACD4u;
            // 0x4bacd4: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BACD8u;
        goto label_4bacd8;
    }
    ctx->pc = 0x4BACD0u;
    SET_GPR_U32(ctx, 31, 0x4BACD8u);
    ctx->pc = 0x4BACD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BACD0u;
            // 0x4bacd4: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481540u;
    if (runtime->hasFunction(0x481540u)) {
        auto targetFn = runtime->lookupFunction(0x481540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BACD8u; }
        if (ctx->pc != 0x4BACD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481540_0x481540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BACD8u; }
        if (ctx->pc != 0x4BACD8u) { return; }
    }
    ctx->pc = 0x4BACD8u;
label_4bacd8:
    // 0x4bacd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4bacd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4bacdc:
    // 0x4bacdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bacdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bace0:
    // 0x4bace0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bace0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bace4:
    // 0x4bace4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bace4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bace8:
    // 0x4bace8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bace8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bacec:
    // 0x4bacec: 0x3e00008  jr          $ra
label_4bacf0:
    if (ctx->pc == 0x4BACF0u) {
        ctx->pc = 0x4BACF0u;
            // 0x4bacf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4BACF4u;
        goto label_4bacf4;
    }
    ctx->pc = 0x4BACECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BACF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BACECu;
            // 0x4bacf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BACF4u;
label_4bacf4:
    // 0x4bacf4: 0x0  nop
    ctx->pc = 0x4bacf4u;
    // NOP
label_4bacf8:
    // 0x4bacf8: 0x0  nop
    ctx->pc = 0x4bacf8u;
    // NOP
label_4bacfc:
    // 0x4bacfc: 0x0  nop
    ctx->pc = 0x4bacfcu;
    // NOP
label_4bad00:
    // 0x4bad00: 0x3e00008  jr          $ra
label_4bad04:
    if (ctx->pc == 0x4BAD04u) {
        ctx->pc = 0x4BAD08u;
        goto label_4bad08;
    }
    ctx->pc = 0x4BAD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BAD08u;
label_4bad08:
    // 0x4bad08: 0x0  nop
    ctx->pc = 0x4bad08u;
    // NOP
label_4bad0c:
    // 0x4bad0c: 0x0  nop
    ctx->pc = 0x4bad0cu;
    // NOP
label_4bad10:
    // 0x4bad10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4bad10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4bad14:
    // 0x4bad14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4bad14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bad18:
    // 0x4bad18: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4bad18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4bad1c:
    // 0x4bad1c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4bad1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4bad20:
    // 0x4bad20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4bad20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4bad24:
    // 0x4bad24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4bad24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4bad28:
    // 0x4bad28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bad28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bad2c:
    // 0x4bad2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bad2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bad30:
    // 0x4bad30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bad30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bad34:
    // 0x4bad34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bad34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bad38:
    // 0x4bad38: 0x8c830cb4  lw          $v1, 0xCB4($a0)
    ctx->pc = 0x4bad38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_4bad3c:
    // 0x4bad3c: 0xac830cb8  sw          $v1, 0xCB8($a0)
    ctx->pc = 0x4bad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3256), GPR_U32(ctx, 3));
label_4bad40:
    // 0x4bad40: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x4bad40u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4bad44:
    // 0x4bad44: 0x10c50128  beq         $a2, $a1, . + 4 + (0x128 << 2)
label_4bad48:
    if (ctx->pc == 0x4BAD48u) {
        ctx->pc = 0x4BAD48u;
            // 0x4bad48: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BAD4Cu;
        goto label_4bad4c;
    }
    ctx->pc = 0x4BAD44u;
    {
        const bool branch_taken_0x4bad44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x4BAD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAD44u;
            // 0x4bad48: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bad44) {
            ctx->pc = 0x4BB1E8u;
            goto label_4bb1e8;
        }
    }
    ctx->pc = 0x4BAD4Cu;
label_4bad4c:
    // 0x4bad4c: 0x50c00121  beql        $a2, $zero, . + 4 + (0x121 << 2)
label_4bad50:
    if (ctx->pc == 0x4BAD50u) {
        ctx->pc = 0x4BAD50u;
            // 0x4bad50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4BAD54u;
        goto label_4bad54;
    }
    ctx->pc = 0x4BAD4Cu;
    {
        const bool branch_taken_0x4bad4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bad4c) {
            ctx->pc = 0x4BAD50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAD4Cu;
            // 0x4bad50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BB1D4u;
            goto label_4bb1d4;
        }
    }
    ctx->pc = 0x4BAD54u;
label_4bad54:
    // 0x4bad54: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x4bad54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_4bad58:
    // 0x4bad58: 0x50c30119  beql        $a2, $v1, . + 4 + (0x119 << 2)
label_4bad5c:
    if (ctx->pc == 0x4BAD5Cu) {
        ctx->pc = 0x4BAD5Cu;
            // 0x4bad5c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4BAD60u;
        goto label_4bad60;
    }
    ctx->pc = 0x4BAD58u;
    {
        const bool branch_taken_0x4bad58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4bad58) {
            ctx->pc = 0x4BAD5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAD58u;
            // 0x4bad5c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BB1C0u;
            goto label_4bb1c0;
        }
    }
    ctx->pc = 0x4BAD60u;
label_4bad60:
    // 0x4bad60: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x4bad60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_4bad64:
    // 0x4bad64: 0x50c300e1  beql        $a2, $v1, . + 4 + (0xE1 << 2)
label_4bad68:
    if (ctx->pc == 0x4BAD68u) {
        ctx->pc = 0x4BAD68u;
            // 0x4bad68: 0x92a30db2  lbu         $v1, 0xDB2($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3506)));
        ctx->pc = 0x4BAD6Cu;
        goto label_4bad6c;
    }
    ctx->pc = 0x4BAD64u;
    {
        const bool branch_taken_0x4bad64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4bad64) {
            ctx->pc = 0x4BAD68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAD64u;
            // 0x4bad68: 0x92a30db2  lbu         $v1, 0xDB2($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3506)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BB0ECu;
            goto label_4bb0ec;
        }
    }
    ctx->pc = 0x4BAD6Cu;
label_4bad6c:
    // 0x4bad6c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x4bad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4bad70:
    // 0x4bad70: 0x50c300ac  beql        $a2, $v1, . + 4 + (0xAC << 2)
label_4bad74:
    if (ctx->pc == 0x4BAD74u) {
        ctx->pc = 0x4BAD74u;
            // 0x4bad74: 0x92a30db2  lbu         $v1, 0xDB2($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3506)));
        ctx->pc = 0x4BAD78u;
        goto label_4bad78;
    }
    ctx->pc = 0x4BAD70u;
    {
        const bool branch_taken_0x4bad70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4bad70) {
            ctx->pc = 0x4BAD74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAD70u;
            // 0x4bad74: 0x92a30db2  lbu         $v1, 0xDB2($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3506)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BB024u;
            goto label_4bb024;
        }
    }
    ctx->pc = 0x4BAD78u;
label_4bad78:
    // 0x4bad78: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x4bad78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_4bad7c:
    // 0x4bad7c: 0x10c20012  beq         $a2, $v0, . + 4 + (0x12 << 2)
label_4bad80:
    if (ctx->pc == 0x4BAD80u) {
        ctx->pc = 0x4BAD84u;
        goto label_4bad84;
    }
    ctx->pc = 0x4BAD7Cu;
    {
        const bool branch_taken_0x4bad7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bad7c) {
            ctx->pc = 0x4BADC8u;
            goto label_4badc8;
        }
    }
    ctx->pc = 0x4BAD84u;
label_4bad84:
    // 0x4bad84: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x4bad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4bad88:
    // 0x4bad88: 0x50c20003  beql        $a2, $v0, . + 4 + (0x3 << 2)
label_4bad8c:
    if (ctx->pc == 0x4BAD8Cu) {
        ctx->pc = 0x4BAD8Cu;
            // 0x4bad8c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4BAD90u;
        goto label_4bad90;
    }
    ctx->pc = 0x4BAD88u;
    {
        const bool branch_taken_0x4bad88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bad88) {
            ctx->pc = 0x4BAD8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAD88u;
            // 0x4bad8c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BAD98u;
            goto label_4bad98;
        }
    }
    ctx->pc = 0x4BAD90u;
label_4bad90:
    // 0x4bad90: 0x1000011c  b           . + 4 + (0x11C << 2)
label_4bad94:
    if (ctx->pc == 0x4BAD94u) {
        ctx->pc = 0x4BAD98u;
        goto label_4bad98;
    }
    ctx->pc = 0x4BAD90u;
    {
        const bool branch_taken_0x4bad90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bad90) {
            ctx->pc = 0x4BB204u;
            goto label_4bb204;
        }
    }
    ctx->pc = 0x4BAD98u;
label_4bad98:
    // 0x4bad98: 0xaea20cb4  sw          $v0, 0xCB4($s5)
    ctx->pc = 0x4bad98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3252), GPR_U32(ctx, 2));
label_4bad9c:
    // 0x4bad9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bad9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bada0:
    // 0x4bada0: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x4bada0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_4bada4:
    // 0x4bada4: 0x320f809  jalr        $t9
label_4bada8:
    if (ctx->pc == 0x4BADA8u) {
        ctx->pc = 0x4BADACu;
        goto label_4badac;
    }
    ctx->pc = 0x4BADA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BADACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BADACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BADACu; }
            if (ctx->pc != 0x4BADACu) { return; }
        }
        }
    }
    ctx->pc = 0x4BADACu;
label_4badac:
    // 0x4badac: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4badacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4badb0:
    // 0x4badb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4badb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4badb4:
    // 0x4badb4: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x4badb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_4badb8:
    // 0x4badb8: 0x320f809  jalr        $t9
label_4badbc:
    if (ctx->pc == 0x4BADBCu) {
        ctx->pc = 0x4BADBCu;
            // 0x4badbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BADC0u;
        goto label_4badc0;
    }
    ctx->pc = 0x4BADB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BADC0u);
        ctx->pc = 0x4BADBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BADB8u;
            // 0x4badbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BADC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BADC0u; }
            if (ctx->pc != 0x4BADC0u) { return; }
        }
        }
    }
    ctx->pc = 0x4BADC0u;
label_4badc0:
    // 0x4badc0: 0x10000113  b           . + 4 + (0x113 << 2)
label_4badc4:
    if (ctx->pc == 0x4BADC4u) {
        ctx->pc = 0x4BADC4u;
            // 0x4badc4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x4BADC8u;
        goto label_4badc8;
    }
    ctx->pc = 0x4BADC0u;
    {
        const bool branch_taken_0x4badc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BADC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BADC0u;
            // 0x4badc4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4badc0) {
            ctx->pc = 0x4BB210u;
            goto label_4bb210;
        }
    }
    ctx->pc = 0x4BADC8u;
label_4badc8:
    // 0x4badc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4badc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4badcc:
    // 0x4badcc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4badccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4badd0:
    // 0x4badd0: 0x8c430ec8  lw          $v1, 0xEC8($v0)
    ctx->pc = 0x4badd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_4badd4:
    // 0x4badd4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4badd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4badd8:
    // 0x4badd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4badd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4baddc:
    // 0x4baddc: 0x8c760008  lw          $s6, 0x8($v1)
    ctx->pc = 0x4baddcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4bade0:
    // 0x4bade0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4bade0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4bade4:
    // 0x4bade4: 0x2442a9b0  addiu       $v0, $v0, -0x5650
    ctx->pc = 0x4bade4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945200));
label_4bade8:
    // 0x4bade8: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x4bade8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_4badec:
    // 0x4badec: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x4badecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4badf0:
    // 0x4badf0: 0xa2a50db2  sb          $a1, 0xDB2($s5)
    ctx->pc = 0x4badf0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3506), (uint8_t)GPR_U32(ctx, 5));
label_4badf4:
    // 0x4badf4: 0x8ea30cf4  lw          $v1, 0xCF4($s5)
    ctx->pc = 0x4badf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3316)));
label_4badf8:
    // 0x4badf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4badf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4badfc:
    // 0x4badfc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x4badfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bae00:
    // 0x4bae00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4bae00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4bae04:
    // 0x4bae04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4bae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4bae08:
    // 0x4bae08: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4bae08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4bae0c:
    // 0x4bae0c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4bae0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4bae10:
    // 0x4bae10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bae10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4bae14:
    // 0x4bae14: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4bae14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4bae18:
    // 0x4bae18: 0x320f809  jalr        $t9
label_4bae1c:
    if (ctx->pc == 0x4BAE1Cu) {
        ctx->pc = 0x4BAE1Cu;
            // 0x4bae1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BAE20u;
        goto label_4bae20;
    }
    ctx->pc = 0x4BAE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BAE20u);
        ctx->pc = 0x4BAE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAE18u;
            // 0x4bae1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BAE20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BAE20u; }
            if (ctx->pc != 0x4BAE20u) { return; }
        }
        }
    }
    ctx->pc = 0x4BAE20u;
label_4bae20:
    // 0x4bae20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4bae20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4bae24:
    // 0x4bae24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bae24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bae28:
    // 0x4bae28: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x4bae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_4bae2c:
    // 0x4bae2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bae30:
    // 0x4bae30: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x4bae30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4bae34:
    // 0x4bae34: 0x82020e3f  lb          $v0, 0xE3F($s0)
    ctx->pc = 0x4bae34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3647)));
label_4bae38:
    // 0x4bae38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4bae3c:
    if (ctx->pc == 0x4BAE3Cu) {
        ctx->pc = 0x4BAE40u;
        goto label_4bae40;
    }
    ctx->pc = 0x4BAE38u;
    {
        const bool branch_taken_0x4bae38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bae38) {
            ctx->pc = 0x4BAE50u;
            goto label_4bae50;
        }
    }
    ctx->pc = 0x4BAE40u;
label_4bae40:
    // 0x4bae40: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x4bae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_4bae44:
    // 0x4bae44: 0xa0400db0  sb          $zero, 0xDB0($v0)
    ctx->pc = 0x4bae44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3504), (uint8_t)GPR_U32(ctx, 0));
label_4bae48:
    // 0x4bae48: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4bae4c:
    if (ctx->pc == 0x4BAE4Cu) {
        ctx->pc = 0x4BAE4Cu;
            // 0x4bae4c: 0x24440db0  addiu       $a0, $v0, 0xDB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3504));
        ctx->pc = 0x4BAE50u;
        goto label_4bae50;
    }
    ctx->pc = 0x4BAE48u;
    {
        const bool branch_taken_0x4bae48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAE48u;
            // 0x4bae4c: 0x24440db0  addiu       $a0, $v0, 0xDB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bae48) {
            ctx->pc = 0x4BAEC8u;
            goto label_4baec8;
        }
    }
    ctx->pc = 0x4BAE50u;
label_4bae50:
    // 0x4bae50: 0x8e030d98  lw          $v1, 0xD98($s0)
    ctx->pc = 0x4bae50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4bae54:
    // 0x4bae54: 0x8ea20780  lw          $v0, 0x780($s5)
    ctx->pc = 0x4bae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
label_4bae58:
    // 0x4bae58: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x4bae58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4bae5c:
    // 0x4bae5c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_4bae60:
    if (ctx->pc == 0x4BAE60u) {
        ctx->pc = 0x4BAE64u;
        goto label_4bae64;
    }
    ctx->pc = 0x4BAE5Cu;
    {
        const bool branch_taken_0x4bae5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bae5c) {
            ctx->pc = 0x4BAE90u;
            goto label_4bae90;
        }
    }
    ctx->pc = 0x4BAE64u;
label_4bae64:
    // 0x4bae64: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
label_4bae68:
    if (ctx->pc == 0x4BAE68u) {
        ctx->pc = 0x4BAE6Cu;
        goto label_4bae6c;
    }
    ctx->pc = 0x4BAE64u;
    {
        const bool branch_taken_0x4bae64 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bae64) {
            ctx->pc = 0x4BAE88u;
            goto label_4bae88;
        }
    }
    ctx->pc = 0x4BAE6Cu;
label_4bae6c:
    // 0x4bae6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4bae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4bae70:
    // 0x4bae70: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4bae70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4bae74:
    // 0x4bae74: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x4bae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4bae78:
    // 0x4bae78: 0x8c44018c  lw          $a0, 0x18C($v0)
    ctx->pc = 0x4bae78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_4bae7c:
    // 0x4bae7c: 0xc05d85a  jal         func_176168
label_4bae80:
    if (ctx->pc == 0x4BAE80u) {
        ctx->pc = 0x4BAE80u;
            // 0x4bae80: 0x24a56f40  addiu       $a1, $a1, 0x6F40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28480));
        ctx->pc = 0x4BAE84u;
        goto label_4bae84;
    }
    ctx->pc = 0x4BAE7Cu;
    SET_GPR_U32(ctx, 31, 0x4BAE84u);
    ctx->pc = 0x4BAE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAE7Cu;
            // 0x4bae80: 0x24a56f40  addiu       $a1, $a1, 0x6F40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAE84u; }
        if (ctx->pc != 0x4BAE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAE84u; }
        if (ctx->pc != 0x4BAE84u) { return; }
    }
    ctx->pc = 0x4BAE84u;
label_4bae84:
    // 0x4bae84: 0x0  nop
    ctx->pc = 0x4bae84u;
    // NOP
label_4bae88:
    // 0x4bae88: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4bae88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bae8c:
    // 0x4bae8c: 0x0  nop
    ctx->pc = 0x4bae8cu;
    // NOP
label_4bae90:
    // 0x4bae90: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x4bae90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_4bae94:
    // 0x4bae94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bae98:
    // 0x4bae98: 0x24640db0  addiu       $a0, $v1, 0xDB0
    ctx->pc = 0x4bae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3504));
label_4bae9c:
    // 0x4bae9c: 0xa0620db0  sb          $v0, 0xDB0($v1)
    ctx->pc = 0x4bae9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3504), (uint8_t)GPR_U32(ctx, 2));
label_4baea0:
    // 0x4baea0: 0x8ea30cf4  lw          $v1, 0xCF4($s5)
    ctx->pc = 0x4baea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3316)));
label_4baea4:
    // 0x4baea4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4baea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4baea8:
    // 0x4baea8: 0x2442a9c0  addiu       $v0, $v0, -0x5640
    ctx->pc = 0x4baea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945216));
label_4baeac:
    // 0x4baeac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4baeacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4baeb0:
    // 0x4baeb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4baeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4baeb4:
    // 0x4baeb4: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x4baeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4baeb8:
    // 0x4baeb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4baeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4baebc:
    // 0x4baebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4baebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4baec0:
    // 0x4baec0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4baec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4baec4:
    // 0x4baec4: 0x0  nop
    ctx->pc = 0x4baec4u;
    // NOP
label_4baec8:
    // 0x4baec8: 0x8e030d98  lw          $v1, 0xD98($s0)
    ctx->pc = 0x4baec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4baecc:
    // 0x4baecc: 0x8ea20780  lw          $v0, 0x780($s5)
    ctx->pc = 0x4baeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
label_4baed0:
    // 0x4baed0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x4baed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4baed4:
    // 0x4baed4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_4baed8:
    if (ctx->pc == 0x4BAED8u) {
        ctx->pc = 0x4BAEDCu;
        goto label_4baedc;
    }
    ctx->pc = 0x4BAED4u;
    {
        const bool branch_taken_0x4baed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4baed4) {
            ctx->pc = 0x4BAF30u;
            goto label_4baf30;
        }
    }
    ctx->pc = 0x4BAEDCu;
label_4baedc:
    // 0x4baedc: 0x8e030d70  lw          $v1, 0xD70($s0)
    ctx->pc = 0x4baedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_4baee0:
    // 0x4baee0: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x4baee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_4baee4:
    // 0x4baee4: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x4baee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4baee8:
    // 0x4baee8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_4baeec:
    if (ctx->pc == 0x4BAEECu) {
        ctx->pc = 0x4BAEF0u;
        goto label_4baef0;
    }
    ctx->pc = 0x4BAEE8u;
    {
        const bool branch_taken_0x4baee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4baee8) {
            ctx->pc = 0x4BAEF8u;
            goto label_4baef8;
        }
    }
    ctx->pc = 0x4BAEF0u;
label_4baef0:
    // 0x4baef0: 0x1000000d  b           . + 4 + (0xD << 2)
label_4baef4:
    if (ctx->pc == 0x4BAEF4u) {
        ctx->pc = 0x4BAEF8u;
        goto label_4baef8;
    }
    ctx->pc = 0x4BAEF0u;
    {
        const bool branch_taken_0x4baef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4baef0) {
            ctx->pc = 0x4BAF28u;
            goto label_4baf28;
        }
    }
    ctx->pc = 0x4BAEF8u;
label_4baef8:
    // 0x4baef8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4baef8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4baefc:
    // 0x4baefc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4baf00:
    if (ctx->pc == 0x4BAF00u) {
        ctx->pc = 0x4BAF04u;
        goto label_4baf04;
    }
    ctx->pc = 0x4BAEFCu;
    {
        const bool branch_taken_0x4baefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4baefc) {
            ctx->pc = 0x4BAF18u;
            goto label_4baf18;
        }
    }
    ctx->pc = 0x4BAF04u;
label_4baf04:
    // 0x4baf04: 0x8e020e00  lw          $v0, 0xE00($s0)
    ctx->pc = 0x4baf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3584)));
label_4baf08:
    // 0x4baf08: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4baf08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4baf0c:
    // 0x4baf0c: 0x10000008  b           . + 4 + (0x8 << 2)
label_4baf10:
    if (ctx->pc == 0x4BAF10u) {
        ctx->pc = 0x4BAF10u;
            // 0x4baf10: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BAF14u;
        goto label_4baf14;
    }
    ctx->pc = 0x4BAF0Cu;
    {
        const bool branch_taken_0x4baf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAF0Cu;
            // 0x4baf10: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baf0c) {
            ctx->pc = 0x4BAF30u;
            goto label_4baf30;
        }
    }
    ctx->pc = 0x4BAF14u;
label_4baf14:
    // 0x4baf14: 0x0  nop
    ctx->pc = 0x4baf14u;
    // NOP
label_4baf18:
    // 0x4baf18: 0x8e020e00  lw          $v0, 0xE00($s0)
    ctx->pc = 0x4baf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3584)));
label_4baf1c:
    // 0x4baf1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_4baf20:
    if (ctx->pc == 0x4BAF20u) {
        ctx->pc = 0x4BAF20u;
            // 0x4baf20: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BAF24u;
        goto label_4baf24;
    }
    ctx->pc = 0x4BAF1Cu;
    {
        const bool branch_taken_0x4baf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAF1Cu;
            // 0x4baf20: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baf1c) {
            ctx->pc = 0x4BAF30u;
            goto label_4baf30;
        }
    }
    ctx->pc = 0x4BAF24u;
label_4baf24:
    // 0x4baf24: 0x0  nop
    ctx->pc = 0x4baf24u;
    // NOP
label_4baf28:
    // 0x4baf28: 0x8e020e00  lw          $v0, 0xE00($s0)
    ctx->pc = 0x4baf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3584)));
label_4baf2c:
    // 0x4baf2c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x4baf2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4baf30:
    // 0x4baf30: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4baf30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4baf34:
    // 0x4baf34: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x4baf34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4baf38:
    // 0x4baf38: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
label_4baf3c:
    if (ctx->pc == 0x4BAF3Cu) {
        ctx->pc = 0x4BAF3Cu;
            // 0x4baf3c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4BAF40u;
        goto label_4baf40;
    }
    ctx->pc = 0x4BAF38u;
    {
        const bool branch_taken_0x4baf38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BAF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAF38u;
            // 0x4baf3c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baf38) {
            ctx->pc = 0x4BAE0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bae0c;
        }
    }
    ctx->pc = 0x4BAF40u;
label_4baf40:
    // 0x4baf40: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4baf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4baf44:
    // 0x4baf44: 0xc120640  jal         func_481900
label_4baf48:
    if (ctx->pc == 0x4BAF48u) {
        ctx->pc = 0x4BAF48u;
            // 0x4baf48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BAF4Cu;
        goto label_4baf4c;
    }
    ctx->pc = 0x4BAF44u;
    SET_GPR_U32(ctx, 31, 0x4BAF4Cu);
    ctx->pc = 0x4BAF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAF44u;
            // 0x4baf48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481900u;
    if (runtime->hasFunction(0x481900u)) {
        auto targetFn = runtime->lookupFunction(0x481900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAF4Cu; }
        if (ctx->pc != 0x4BAF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481900_0x481900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAF4Cu; }
        if (ctx->pc != 0x4BAF4Cu) { return; }
    }
    ctx->pc = 0x4BAF4Cu;
label_4baf4c:
    // 0x4baf4c: 0xc040180  jal         func_100600
label_4baf50:
    if (ctx->pc == 0x4BAF50u) {
        ctx->pc = 0x4BAF50u;
            // 0x4baf50: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->pc = 0x4BAF54u;
        goto label_4baf54;
    }
    ctx->pc = 0x4BAF4Cu;
    SET_GPR_U32(ctx, 31, 0x4BAF54u);
    ctx->pc = 0x4BAF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAF4Cu;
            // 0x4baf50: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAF54u; }
        if (ctx->pc != 0x4BAF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAF54u; }
        if (ctx->pc != 0x4BAF54u) { return; }
    }
    ctx->pc = 0x4BAF54u;
label_4baf54:
    // 0x4baf54: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_4baf58:
    if (ctx->pc == 0x4BAF58u) {
        ctx->pc = 0x4BAF58u;
            // 0x4baf58: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BAF5Cu;
        goto label_4baf5c;
    }
    ctx->pc = 0x4BAF54u;
    {
        const bool branch_taken_0x4baf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAF54u;
            // 0x4baf58: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baf54) {
            ctx->pc = 0x4BAFE4u;
            goto label_4bafe4;
        }
    }
    ctx->pc = 0x4BAF5Cu;
label_4baf5c:
    // 0x4baf5c: 0x8eb10cf4  lw          $s1, 0xCF4($s5)
    ctx->pc = 0x4baf5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3316)));
label_4baf60:
    // 0x4baf60: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4baf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4baf64:
    // 0x4baf64: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4baf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4baf68:
    // 0x4baf68: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x4baf68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_4baf6c:
    // 0x4baf6c: 0x2463a9b0  addiu       $v1, $v1, -0x5650
    ctx->pc = 0x4baf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945200));
label_4baf70:
    // 0x4baf70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4baf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4baf74:
    // 0x4baf74: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x4baf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_4baf78:
    // 0x4baf78: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4baf78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4baf7c:
    // 0x4baf7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4baf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4baf80:
    // 0x4baf80: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4baf80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4baf84:
    // 0x4baf84: 0xc10ca68  jal         func_4329A0
label_4baf88:
    if (ctx->pc == 0x4BAF88u) {
        ctx->pc = 0x4BAF88u;
            // 0x4baf88: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4BAF8Cu;
        goto label_4baf8c;
    }
    ctx->pc = 0x4BAF84u;
    SET_GPR_U32(ctx, 31, 0x4BAF8Cu);
    ctx->pc = 0x4BAF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAF84u;
            // 0x4baf88: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAF8Cu; }
        if (ctx->pc != 0x4BAF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAF8Cu; }
        if (ctx->pc != 0x4BAF8Cu) { return; }
    }
    ctx->pc = 0x4BAF8Cu;
label_4baf8c:
    // 0x4baf8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4baf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4baf90:
    // 0x4baf90: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x4baf90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_4baf94:
    // 0x4baf94: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4baf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4baf98:
    // 0x4baf98: 0x26a40db0  addiu       $a0, $s5, 0xDB0
    ctx->pc = 0x4baf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3504));
label_4baf9c:
    // 0x4baf9c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4baf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4bafa0:
    // 0x4bafa0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bafa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4bafa4:
    // 0x4bafa4: 0x2442c190  addiu       $v0, $v0, -0x3E70
    ctx->pc = 0x4bafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951312));
label_4bafa8:
    // 0x4bafa8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4bafa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4bafac:
    // 0x4bafac: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4bafacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4bafb0:
    // 0x4bafb0: 0xa2420070  sb          $v0, 0x70($s2)
    ctx->pc = 0x4bafb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 2));
label_4bafb4:
    // 0x4bafb4: 0x26a20db2  addiu       $v0, $s5, 0xDB2
    ctx->pc = 0x4bafb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3506));
label_4bafb8:
    // 0x4bafb8: 0xa2400071  sb          $zero, 0x71($s2)
    ctx->pc = 0x4bafb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 0));
label_4bafbc:
    // 0x4bafbc: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x4bafbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
label_4bafc0:
    // 0x4bafc0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4bafc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4bafc4:
    // 0x4bafc4: 0xae440084  sw          $a0, 0x84($s2)
    ctx->pc = 0x4bafc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 4));
label_4bafc8:
    // 0x4bafc8: 0x2442a9c0  addiu       $v0, $v0, -0x5640
    ctx->pc = 0x4bafc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945216));
label_4bafcc:
    // 0x4bafcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bafccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bafd0:
    // 0x4bafd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bafd4:
    // 0x4bafd4: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x4bafd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
label_4bafd8:
    // 0x4bafd8: 0xae50008c  sw          $s0, 0x8C($s2)
    ctx->pc = 0x4bafd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 16));
label_4bafdc:
    // 0x4bafdc: 0xc128de4  jal         func_4A3790
label_4bafe0:
    if (ctx->pc == 0x4BAFE0u) {
        ctx->pc = 0x4BAFE0u;
            // 0x4bafe0: 0xae400090  sw          $zero, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
        ctx->pc = 0x4BAFE4u;
        goto label_4bafe4;
    }
    ctx->pc = 0x4BAFDCu;
    SET_GPR_U32(ctx, 31, 0x4BAFE4u);
    ctx->pc = 0x4BAFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAFDCu;
            // 0x4bafe0: 0xae400090  sw          $zero, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A3790u;
    if (runtime->hasFunction(0x4A3790u)) {
        auto targetFn = runtime->lookupFunction(0x4A3790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAFE4u; }
        if (ctx->pc != 0x4BAFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A3790_0x4a3790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BAFE4u; }
        if (ctx->pc != 0x4BAFE4u) { return; }
    }
    ctx->pc = 0x4BAFE4u;
label_4bafe4:
    // 0x4bafe4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_4bafe8:
    if (ctx->pc == 0x4BAFE8u) {
        ctx->pc = 0x4BAFE8u;
            // 0x4bafe8: 0xaeb20cfc  sw          $s2, 0xCFC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3324), GPR_U32(ctx, 18));
        ctx->pc = 0x4BAFECu;
        goto label_4bafec;
    }
    ctx->pc = 0x4BAFE4u;
    {
        const bool branch_taken_0x4bafe4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAFE4u;
            // 0x4bafe8: 0xaeb20cfc  sw          $s2, 0xCFC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3324), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bafe4) {
            ctx->pc = 0x4BB008u;
            goto label_4bb008;
        }
    }
    ctx->pc = 0x4BAFECu;
label_4bafec:
    // 0x4bafec: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4bafecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4baff0:
    // 0x4baff0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4baff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4baff4:
    // 0x4baff4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4baff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4baff8:
    // 0x4baff8: 0x320f809  jalr        $t9
label_4baffc:
    if (ctx->pc == 0x4BAFFCu) {
        ctx->pc = 0x4BAFFCu;
            // 0x4baffc: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x4BB000u;
        goto label_4bb000;
    }
    ctx->pc = 0x4BAFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BB000u);
        ctx->pc = 0x4BAFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BAFF8u;
            // 0x4baffc: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BB000u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BB000u; }
            if (ctx->pc != 0x4BB000u) { return; }
        }
        }
    }
    ctx->pc = 0x4BB000u;
label_4bb000:
    // 0x4bb000: 0x10000082  b           . + 4 + (0x82 << 2)
label_4bb004:
    if (ctx->pc == 0x4BB004u) {
        ctx->pc = 0x4BB008u;
        goto label_4bb008;
    }
    ctx->pc = 0x4BB000u;
    {
        const bool branch_taken_0x4bb000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb000) {
            ctx->pc = 0x4BB20Cu;
            goto label_4bb20c;
        }
    }
    ctx->pc = 0x4BB008u;
label_4bb008:
    // 0x4bb008: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4bb008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4bb00c:
    // 0x4bb00c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bb00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4bb010:
    // 0x4bb010: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4bb010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4bb014:
    // 0x4bb014: 0x320f809  jalr        $t9
label_4bb018:
    if (ctx->pc == 0x4BB018u) {
        ctx->pc = 0x4BB018u;
            // 0x4bb018: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x4BB01Cu;
        goto label_4bb01c;
    }
    ctx->pc = 0x4BB014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BB01Cu);
        ctx->pc = 0x4BB018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB014u;
            // 0x4bb018: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BB01Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BB01Cu; }
            if (ctx->pc != 0x4BB01Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4BB01Cu;
label_4bb01c:
    // 0x4bb01c: 0x1000007b  b           . + 4 + (0x7B << 2)
label_4bb020:
    if (ctx->pc == 0x4BB020u) {
        ctx->pc = 0x4BB024u;
        goto label_4bb024;
    }
    ctx->pc = 0x4BB01Cu;
    {
        const bool branch_taken_0x4bb01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb01c) {
            ctx->pc = 0x4BB20Cu;
            goto label_4bb20c;
        }
    }
    ctx->pc = 0x4BB024u;
label_4bb024:
    // 0x4bb024: 0x14600079  bnez        $v1, . + 4 + (0x79 << 2)
label_4bb028:
    if (ctx->pc == 0x4BB028u) {
        ctx->pc = 0x4BB02Cu;
        goto label_4bb02c;
    }
    ctx->pc = 0x4BB024u;
    {
        const bool branch_taken_0x4bb024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bb024) {
            ctx->pc = 0x4BB20Cu;
            goto label_4bb20c;
        }
    }
    ctx->pc = 0x4BB02Cu;
label_4bb02c:
    // 0x4bb02c: 0x8ea40cfc  lw          $a0, 0xCFC($s5)
    ctx->pc = 0x4bb02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3324)));
label_4bb030:
    // 0x4bb030: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_4bb034:
    if (ctx->pc == 0x4BB034u) {
        ctx->pc = 0x4BB034u;
            // 0x4bb034: 0x92a30758  lbu         $v1, 0x758($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1880)));
        ctx->pc = 0x4BB038u;
        goto label_4bb038;
    }
    ctx->pc = 0x4BB030u;
    {
        const bool branch_taken_0x4bb030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb030) {
            ctx->pc = 0x4BB034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB030u;
            // 0x4bb034: 0x92a30758  lbu         $v1, 0x758($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1880)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BB050u;
            goto label_4bb050;
        }
    }
    ctx->pc = 0x4BB038u;
label_4bb038:
    // 0x4bb038: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bb038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bb03c:
    // 0x4bb03c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4bb03cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4bb040:
    // 0x4bb040: 0x320f809  jalr        $t9
label_4bb044:
    if (ctx->pc == 0x4BB044u) {
        ctx->pc = 0x4BB044u;
            // 0x4bb044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB048u;
        goto label_4bb048;
    }
    ctx->pc = 0x4BB040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BB048u);
        ctx->pc = 0x4BB044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB040u;
            // 0x4bb044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BB048u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BB048u; }
            if (ctx->pc != 0x4BB048u) { return; }
        }
        }
    }
    ctx->pc = 0x4BB048u;
label_4bb048:
    // 0x4bb048: 0xaea00cfc  sw          $zero, 0xCFC($s5)
    ctx->pc = 0x4bb048u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3324), GPR_U32(ctx, 0));
label_4bb04c:
    // 0x4bb04c: 0x92a30758  lbu         $v1, 0x758($s5)
    ctx->pc = 0x4bb04cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1880)));
label_4bb050:
    // 0x4bb050: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4bb050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4bb054:
    // 0x4bb054: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x4bb054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_4bb058:
    // 0x4bb058: 0xaea20cb4  sw          $v0, 0xCB4($s5)
    ctx->pc = 0x4bb058u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3252), GPR_U32(ctx, 2));
label_4bb05c:
    // 0x4bb05c: 0x3167c  dsll32      $v0, $v1, 25
    ctx->pc = 0x4bb05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 25));
label_4bb060:
    // 0x4bb060: 0xc040180  jal         func_100600
label_4bb064:
    if (ctx->pc == 0x4BB064u) {
        ctx->pc = 0x4BB064u;
            // 0x4bb064: 0x287be  dsrl32      $s0, $v0, 30 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 30));
        ctx->pc = 0x4BB068u;
        goto label_4bb068;
    }
    ctx->pc = 0x4BB060u;
    SET_GPR_U32(ctx, 31, 0x4BB068u);
    ctx->pc = 0x4BB064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB060u;
            // 0x4bb064: 0x287be  dsrl32      $s0, $v0, 30 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB068u; }
        if (ctx->pc != 0x4BB068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB068u; }
        if (ctx->pc != 0x4BB068u) { return; }
    }
    ctx->pc = 0x4BB068u;
label_4bb068:
    // 0x4bb068: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_4bb06c:
    if (ctx->pc == 0x4BB06Cu) {
        ctx->pc = 0x4BB06Cu;
            // 0x4bb06c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB070u;
        goto label_4bb070;
    }
    ctx->pc = 0x4BB068u;
    {
        const bool branch_taken_0x4bb068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB068u;
            // 0x4bb06c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb068) {
            ctx->pc = 0x4BB0D0u;
            goto label_4bb0d0;
        }
    }
    ctx->pc = 0x4BB070u;
label_4bb070:
    // 0x4bb070: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4bb070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4bb074:
    // 0x4bb074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bb074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bb078:
    // 0x4bb078: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x4bb078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
label_4bb07c:
    // 0x4bb07c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4bb07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4bb080:
    // 0x4bb080: 0xc10ca68  jal         func_4329A0
label_4bb084:
    if (ctx->pc == 0x4BB084u) {
        ctx->pc = 0x4BB084u;
            // 0x4bb084: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB088u;
        goto label_4bb088;
    }
    ctx->pc = 0x4BB080u;
    SET_GPR_U32(ctx, 31, 0x4BB088u);
    ctx->pc = 0x4BB084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB080u;
            // 0x4bb084: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB088u; }
        if (ctx->pc != 0x4BB088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB088u; }
        if (ctx->pc != 0x4BB088u) { return; }
    }
    ctx->pc = 0x4BB088u;
label_4bb088:
    // 0x4bb088: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4bb088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4bb08c:
    // 0x4bb08c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4bb08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4bb090:
    // 0x4bb090: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4bb090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4bb094:
    // 0x4bb094: 0x24638350  addiu       $v1, $v1, -0x7CB0
    ctx->pc = 0x4bb094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935376));
label_4bb098:
    // 0x4bb098: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4bb098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4bb09c:
    // 0x4bb09c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4bb09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bb0a0:
    // 0x4bb0a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bb0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4bb0a4:
    // 0x4bb0a4: 0x26a20ca8  addiu       $v0, $s5, 0xCA8
    ctx->pc = 0x4bb0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3240));
label_4bb0a8:
    // 0x4bb0a8: 0xa2300054  sb          $s0, 0x54($s1)
    ctx->pc = 0x4bb0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 16));
label_4bb0ac:
    // 0x4bb0ac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4bb0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4bb0b0:
    // 0x4bb0b0: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x4bb0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_4bb0b4:
    // 0x4bb0b4: 0xa224005c  sb          $a0, 0x5C($s1)
    ctx->pc = 0x4bb0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 4));
label_4bb0b8:
    // 0x4bb0b8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4bb0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4bb0bc:
    // 0x4bb0bc: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x4bb0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
label_4bb0c0:
    // 0x4bb0c0: 0xa220005d  sb          $zero, 0x5D($s1)
    ctx->pc = 0x4bb0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 93), (uint8_t)GPR_U32(ctx, 0));
label_4bb0c4:
    // 0x4bb0c4: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x4bb0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4bb0c8:
    // 0x4bb0c8: 0xc073234  jal         func_1CC8D0
label_4bb0cc:
    if (ctx->pc == 0x4BB0CCu) {
        ctx->pc = 0x4BB0CCu;
            // 0x4bb0cc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x4BB0D0u;
        goto label_4bb0d0;
    }
    ctx->pc = 0x4BB0C8u;
    SET_GPR_U32(ctx, 31, 0x4BB0D0u);
    ctx->pc = 0x4BB0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB0C8u;
            // 0x4bb0cc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB0D0u; }
        if (ctx->pc != 0x4BB0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB0D0u; }
        if (ctx->pc != 0x4BB0D0u) { return; }
    }
    ctx->pc = 0x4BB0D0u;
label_4bb0d0:
    // 0x4bb0d0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4bb0d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4bb0d4:
    // 0x4bb0d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bb0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4bb0d8:
    // 0x4bb0d8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4bb0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4bb0dc:
    // 0x4bb0dc: 0x320f809  jalr        $t9
label_4bb0e0:
    if (ctx->pc == 0x4BB0E0u) {
        ctx->pc = 0x4BB0E0u;
            // 0x4bb0e0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x4BB0E4u;
        goto label_4bb0e4;
    }
    ctx->pc = 0x4BB0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BB0E4u);
        ctx->pc = 0x4BB0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB0DCu;
            // 0x4bb0e0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BB0E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BB0E4u; }
            if (ctx->pc != 0x4BB0E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4BB0E4u;
label_4bb0e4:
    // 0x4bb0e4: 0x10000049  b           . + 4 + (0x49 << 2)
label_4bb0e8:
    if (ctx->pc == 0x4BB0E8u) {
        ctx->pc = 0x4BB0ECu;
        goto label_4bb0ec;
    }
    ctx->pc = 0x4BB0E4u;
    {
        const bool branch_taken_0x4bb0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb0e4) {
            ctx->pc = 0x4BB20Cu;
            goto label_4bb20c;
        }
    }
    ctx->pc = 0x4BB0ECu;
label_4bb0ec:
    // 0x4bb0ec: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
label_4bb0f0:
    if (ctx->pc == 0x4BB0F0u) {
        ctx->pc = 0x4BB0F4u;
        goto label_4bb0f4;
    }
    ctx->pc = 0x4BB0ECu;
    {
        const bool branch_taken_0x4bb0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bb0ec) {
            ctx->pc = 0x4BB20Cu;
            goto label_4bb20c;
        }
    }
    ctx->pc = 0x4BB0F4u;
label_4bb0f4:
    // 0x4bb0f4: 0x8ea40cfc  lw          $a0, 0xCFC($s5)
    ctx->pc = 0x4bb0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3324)));
label_4bb0f8:
    // 0x4bb0f8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_4bb0fc:
    if (ctx->pc == 0x4BB0FCu) {
        ctx->pc = 0x4BB0FCu;
            // 0x4bb0fc: 0x92a30758  lbu         $v1, 0x758($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1880)));
        ctx->pc = 0x4BB100u;
        goto label_4bb100;
    }
    ctx->pc = 0x4BB0F8u;
    {
        const bool branch_taken_0x4bb0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb0f8) {
            ctx->pc = 0x4BB0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB0F8u;
            // 0x4bb0fc: 0x92a30758  lbu         $v1, 0x758($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1880)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BB118u;
            goto label_4bb118;
        }
    }
    ctx->pc = 0x4BB100u;
label_4bb100:
    // 0x4bb100: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bb100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bb104:
    // 0x4bb104: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4bb104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4bb108:
    // 0x4bb108: 0x320f809  jalr        $t9
label_4bb10c:
    if (ctx->pc == 0x4BB10Cu) {
        ctx->pc = 0x4BB10Cu;
            // 0x4bb10c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB110u;
        goto label_4bb110;
    }
    ctx->pc = 0x4BB108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BB110u);
        ctx->pc = 0x4BB10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB108u;
            // 0x4bb10c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BB110u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BB110u; }
            if (ctx->pc != 0x4BB110u) { return; }
        }
        }
    }
    ctx->pc = 0x4BB110u;
label_4bb110:
    // 0x4bb110: 0xaea00cfc  sw          $zero, 0xCFC($s5)
    ctx->pc = 0x4bb110u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3324), GPR_U32(ctx, 0));
label_4bb114:
    // 0x4bb114: 0x92a30758  lbu         $v1, 0x758($s5)
    ctx->pc = 0x4bb114u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1880)));
label_4bb118:
    // 0x4bb118: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4bb118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4bb11c:
    // 0x4bb11c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bb11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4bb120:
    // 0x4bb120: 0xaea20cb4  sw          $v0, 0xCB4($s5)
    ctx->pc = 0x4bb120u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3252), GPR_U32(ctx, 2));
label_4bb124:
    // 0x4bb124: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4bb124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4bb128:
    // 0x4bb128: 0x3167c  dsll32      $v0, $v1, 25
    ctx->pc = 0x4bb128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 25));
label_4bb12c:
    // 0x4bb12c: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x4bb12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_4bb130:
    // 0x4bb130: 0x320f809  jalr        $t9
label_4bb134:
    if (ctx->pc == 0x4BB134u) {
        ctx->pc = 0x4BB134u;
            // 0x4bb134: 0x287be  dsrl32      $s0, $v0, 30 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 30));
        ctx->pc = 0x4BB138u;
        goto label_4bb138;
    }
    ctx->pc = 0x4BB130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BB138u);
        ctx->pc = 0x4BB134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB130u;
            // 0x4bb134: 0x287be  dsrl32      $s0, $v0, 30 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 30));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BB138u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BB138u; }
            if (ctx->pc != 0x4BB138u) { return; }
        }
        }
    }
    ctx->pc = 0x4BB138u;
label_4bb138:
    // 0x4bb138: 0xc040180  jal         func_100600
label_4bb13c:
    if (ctx->pc == 0x4BB13Cu) {
        ctx->pc = 0x4BB13Cu;
            // 0x4bb13c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x4BB140u;
        goto label_4bb140;
    }
    ctx->pc = 0x4BB138u;
    SET_GPR_U32(ctx, 31, 0x4BB140u);
    ctx->pc = 0x4BB13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB138u;
            // 0x4bb13c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB140u; }
        if (ctx->pc != 0x4BB140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB140u; }
        if (ctx->pc != 0x4BB140u) { return; }
    }
    ctx->pc = 0x4BB140u;
label_4bb140:
    // 0x4bb140: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_4bb144:
    if (ctx->pc == 0x4BB144u) {
        ctx->pc = 0x4BB144u;
            // 0x4bb144: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB148u;
        goto label_4bb148;
    }
    ctx->pc = 0x4BB140u;
    {
        const bool branch_taken_0x4bb140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB140u;
            // 0x4bb144: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb140) {
            ctx->pc = 0x4BB1A4u;
            goto label_4bb1a4;
        }
    }
    ctx->pc = 0x4BB148u;
label_4bb148:
    // 0x4bb148: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4bb148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4bb14c:
    // 0x4bb14c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bb14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bb150:
    // 0x4bb150: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x4bb150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
label_4bb154:
    // 0x4bb154: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4bb154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4bb158:
    // 0x4bb158: 0xc10ca68  jal         func_4329A0
label_4bb15c:
    if (ctx->pc == 0x4BB15Cu) {
        ctx->pc = 0x4BB15Cu;
            // 0x4bb15c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB160u;
        goto label_4bb160;
    }
    ctx->pc = 0x4BB158u;
    SET_GPR_U32(ctx, 31, 0x4BB160u);
    ctx->pc = 0x4BB15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB158u;
            // 0x4bb15c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB160u; }
        if (ctx->pc != 0x4BB160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB160u; }
        if (ctx->pc != 0x4BB160u) { return; }
    }
    ctx->pc = 0x4BB160u;
label_4bb160:
    // 0x4bb160: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4bb160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4bb164:
    // 0x4bb164: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4bb164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4bb168:
    // 0x4bb168: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4bb168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4bb16c:
    // 0x4bb16c: 0x24428350  addiu       $v0, $v0, -0x7CB0
    ctx->pc = 0x4bb16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935376));
label_4bb170:
    // 0x4bb170: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bb170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4bb174:
    // 0x4bb174: 0x26a40ca8  addiu       $a0, $s5, 0xCA8
    ctx->pc = 0x4bb174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3240));
label_4bb178:
    // 0x4bb178: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4bb178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4bb17c:
    // 0x4bb17c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4bb17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4bb180:
    // 0x4bb180: 0xa2300054  sb          $s0, 0x54($s1)
    ctx->pc = 0x4bb180u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 16));
label_4bb184:
    // 0x4bb184: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4bb184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4bb188:
    // 0x4bb188: 0xae240058  sw          $a0, 0x58($s1)
    ctx->pc = 0x4bb188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 4));
label_4bb18c:
    // 0x4bb18c: 0xa220005c  sb          $zero, 0x5C($s1)
    ctx->pc = 0x4bb18cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 0));
label_4bb190:
    // 0x4bb190: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x4bb190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
label_4bb194:
    // 0x4bb194: 0xa220005d  sb          $zero, 0x5D($s1)
    ctx->pc = 0x4bb194u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 93), (uint8_t)GPR_U32(ctx, 0));
label_4bb198:
    // 0x4bb198: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x4bb198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4bb19c:
    // 0x4bb19c: 0xc073234  jal         func_1CC8D0
label_4bb1a0:
    if (ctx->pc == 0x4BB1A0u) {
        ctx->pc = 0x4BB1A0u;
            // 0x4bb1a0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x4BB1A4u;
        goto label_4bb1a4;
    }
    ctx->pc = 0x4BB19Cu;
    SET_GPR_U32(ctx, 31, 0x4BB1A4u);
    ctx->pc = 0x4BB1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB19Cu;
            // 0x4bb1a0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB1A4u; }
        if (ctx->pc != 0x4BB1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB1A4u; }
        if (ctx->pc != 0x4BB1A4u) { return; }
    }
    ctx->pc = 0x4BB1A4u;
label_4bb1a4:
    // 0x4bb1a4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4bb1a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4bb1a8:
    // 0x4bb1a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bb1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4bb1ac:
    // 0x4bb1ac: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4bb1acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4bb1b0:
    // 0x4bb1b0: 0x320f809  jalr        $t9
label_4bb1b4:
    if (ctx->pc == 0x4BB1B4u) {
        ctx->pc = 0x4BB1B4u;
            // 0x4bb1b4: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x4BB1B8u;
        goto label_4bb1b8;
    }
    ctx->pc = 0x4BB1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BB1B8u);
        ctx->pc = 0x4BB1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB1B0u;
            // 0x4bb1b4: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BB1B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BB1B8u; }
            if (ctx->pc != 0x4BB1B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4BB1B8u;
label_4bb1b8:
    // 0x4bb1b8: 0x10000014  b           . + 4 + (0x14 << 2)
label_4bb1bc:
    if (ctx->pc == 0x4BB1BCu) {
        ctx->pc = 0x4BB1C0u;
        goto label_4bb1c0;
    }
    ctx->pc = 0x4BB1B8u;
    {
        const bool branch_taken_0x4bb1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb1b8) {
            ctx->pc = 0x4BB20Cu;
            goto label_4bb20c;
        }
    }
    ctx->pc = 0x4BB1C0u;
label_4bb1c0:
    // 0x4bb1c0: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x4bb1c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_4bb1c4:
    // 0x4bb1c4: 0x320f809  jalr        $t9
label_4bb1c8:
    if (ctx->pc == 0x4BB1C8u) {
        ctx->pc = 0x4BB1CCu;
        goto label_4bb1cc;
    }
    ctx->pc = 0x4BB1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BB1CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BB1CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BB1CCu; }
            if (ctx->pc != 0x4BB1CCu) { return; }
        }
        }
    }
    ctx->pc = 0x4BB1CCu;
label_4bb1cc:
    // 0x4bb1cc: 0x1000000f  b           . + 4 + (0xF << 2)
label_4bb1d0:
    if (ctx->pc == 0x4BB1D0u) {
        ctx->pc = 0x4BB1D4u;
        goto label_4bb1d4;
    }
    ctx->pc = 0x4BB1CCu;
    {
        const bool branch_taken_0x4bb1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb1cc) {
            ctx->pc = 0x4BB20Cu;
            goto label_4bb20c;
        }
    }
    ctx->pc = 0x4BB1D4u;
label_4bb1d4:
    // 0x4bb1d4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4bb1d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4bb1d8:
    // 0x4bb1d8: 0x320f809  jalr        $t9
label_4bb1dc:
    if (ctx->pc == 0x4BB1DCu) {
        ctx->pc = 0x4BB1E0u;
        goto label_4bb1e0;
    }
    ctx->pc = 0x4BB1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BB1E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BB1E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BB1E0u; }
            if (ctx->pc != 0x4BB1E0u) { return; }
        }
        }
    }
    ctx->pc = 0x4BB1E0u;
label_4bb1e0:
    // 0x4bb1e0: 0x1000000a  b           . + 4 + (0xA << 2)
label_4bb1e4:
    if (ctx->pc == 0x4BB1E4u) {
        ctx->pc = 0x4BB1E8u;
        goto label_4bb1e8;
    }
    ctx->pc = 0x4BB1E0u;
    {
        const bool branch_taken_0x4bb1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb1e0) {
            ctx->pc = 0x4BB20Cu;
            goto label_4bb20c;
        }
    }
    ctx->pc = 0x4BB1E8u;
label_4bb1e8:
    // 0x4bb1e8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4bb1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4bb1ec:
    // 0x4bb1ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4bb1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4bb1f0:
    // 0x4bb1f0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4bb1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4bb1f4:
    // 0x4bb1f4: 0xc057b7c  jal         func_15EDF0
label_4bb1f8:
    if (ctx->pc == 0x4BB1F8u) {
        ctx->pc = 0x4BB1F8u;
            // 0x4bb1f8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4BB1FCu;
        goto label_4bb1fc;
    }
    ctx->pc = 0x4BB1F4u;
    SET_GPR_U32(ctx, 31, 0x4BB1FCu);
    ctx->pc = 0x4BB1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB1F4u;
            // 0x4bb1f8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB1FCu; }
        if (ctx->pc != 0x4BB1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB1FCu; }
        if (ctx->pc != 0x4BB1FCu) { return; }
    }
    ctx->pc = 0x4BB1FCu;
label_4bb1fc:
    // 0x4bb1fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_4bb200:
    if (ctx->pc == 0x4BB200u) {
        ctx->pc = 0x4BB204u;
        goto label_4bb204;
    }
    ctx->pc = 0x4BB1FCu;
    {
        const bool branch_taken_0x4bb1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb1fc) {
            ctx->pc = 0x4BB20Cu;
            goto label_4bb20c;
        }
    }
    ctx->pc = 0x4BB204u;
label_4bb204:
    // 0x4bb204: 0xc0cb834  jal         func_32E0D0
label_4bb208:
    if (ctx->pc == 0x4BB208u) {
        ctx->pc = 0x4BB20Cu;
        goto label_4bb20c;
    }
    ctx->pc = 0x4BB204u;
    SET_GPR_U32(ctx, 31, 0x4BB20Cu);
    ctx->pc = 0x32E0D0u;
    if (runtime->hasFunction(0x32E0D0u)) {
        auto targetFn = runtime->lookupFunction(0x32E0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB20Cu; }
        if (ctx->pc != 0x4BB20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032E0D0_0x32e0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB20Cu; }
        if (ctx->pc != 0x4BB20Cu) { return; }
    }
    ctx->pc = 0x4BB20Cu;
label_4bb20c:
    // 0x4bb20c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4bb20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4bb210:
    // 0x4bb210: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4bb210u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4bb214:
    // 0x4bb214: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4bb214u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4bb218:
    // 0x4bb218: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4bb218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4bb21c:
    // 0x4bb21c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bb21cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bb220:
    // 0x4bb220: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bb220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bb224:
    // 0x4bb224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bb224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bb228:
    // 0x4bb228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bb228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bb22c:
    // 0x4bb22c: 0x3e00008  jr          $ra
label_4bb230:
    if (ctx->pc == 0x4BB230u) {
        ctx->pc = 0x4BB230u;
            // 0x4bb230: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4BB234u;
        goto label_4bb234;
    }
    ctx->pc = 0x4BB22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BB230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB22Cu;
            // 0x4bb230: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BB234u;
label_4bb234:
    // 0x4bb234: 0x0  nop
    ctx->pc = 0x4bb234u;
    // NOP
label_4bb238:
    // 0x4bb238: 0x0  nop
    ctx->pc = 0x4bb238u;
    // NOP
label_4bb23c:
    // 0x4bb23c: 0x0  nop
    ctx->pc = 0x4bb23cu;
    // NOP
}
