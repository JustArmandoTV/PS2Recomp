#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EF510
// Address: 0x3ef510 - 0x3efd20
void sub_003EF510_0x3ef510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF510_0x3ef510");
#endif

    switch (ctx->pc) {
        case 0x3ef510u: goto label_3ef510;
        case 0x3ef514u: goto label_3ef514;
        case 0x3ef518u: goto label_3ef518;
        case 0x3ef51cu: goto label_3ef51c;
        case 0x3ef520u: goto label_3ef520;
        case 0x3ef524u: goto label_3ef524;
        case 0x3ef528u: goto label_3ef528;
        case 0x3ef52cu: goto label_3ef52c;
        case 0x3ef530u: goto label_3ef530;
        case 0x3ef534u: goto label_3ef534;
        case 0x3ef538u: goto label_3ef538;
        case 0x3ef53cu: goto label_3ef53c;
        case 0x3ef540u: goto label_3ef540;
        case 0x3ef544u: goto label_3ef544;
        case 0x3ef548u: goto label_3ef548;
        case 0x3ef54cu: goto label_3ef54c;
        case 0x3ef550u: goto label_3ef550;
        case 0x3ef554u: goto label_3ef554;
        case 0x3ef558u: goto label_3ef558;
        case 0x3ef55cu: goto label_3ef55c;
        case 0x3ef560u: goto label_3ef560;
        case 0x3ef564u: goto label_3ef564;
        case 0x3ef568u: goto label_3ef568;
        case 0x3ef56cu: goto label_3ef56c;
        case 0x3ef570u: goto label_3ef570;
        case 0x3ef574u: goto label_3ef574;
        case 0x3ef578u: goto label_3ef578;
        case 0x3ef57cu: goto label_3ef57c;
        case 0x3ef580u: goto label_3ef580;
        case 0x3ef584u: goto label_3ef584;
        case 0x3ef588u: goto label_3ef588;
        case 0x3ef58cu: goto label_3ef58c;
        case 0x3ef590u: goto label_3ef590;
        case 0x3ef594u: goto label_3ef594;
        case 0x3ef598u: goto label_3ef598;
        case 0x3ef59cu: goto label_3ef59c;
        case 0x3ef5a0u: goto label_3ef5a0;
        case 0x3ef5a4u: goto label_3ef5a4;
        case 0x3ef5a8u: goto label_3ef5a8;
        case 0x3ef5acu: goto label_3ef5ac;
        case 0x3ef5b0u: goto label_3ef5b0;
        case 0x3ef5b4u: goto label_3ef5b4;
        case 0x3ef5b8u: goto label_3ef5b8;
        case 0x3ef5bcu: goto label_3ef5bc;
        case 0x3ef5c0u: goto label_3ef5c0;
        case 0x3ef5c4u: goto label_3ef5c4;
        case 0x3ef5c8u: goto label_3ef5c8;
        case 0x3ef5ccu: goto label_3ef5cc;
        case 0x3ef5d0u: goto label_3ef5d0;
        case 0x3ef5d4u: goto label_3ef5d4;
        case 0x3ef5d8u: goto label_3ef5d8;
        case 0x3ef5dcu: goto label_3ef5dc;
        case 0x3ef5e0u: goto label_3ef5e0;
        case 0x3ef5e4u: goto label_3ef5e4;
        case 0x3ef5e8u: goto label_3ef5e8;
        case 0x3ef5ecu: goto label_3ef5ec;
        case 0x3ef5f0u: goto label_3ef5f0;
        case 0x3ef5f4u: goto label_3ef5f4;
        case 0x3ef5f8u: goto label_3ef5f8;
        case 0x3ef5fcu: goto label_3ef5fc;
        case 0x3ef600u: goto label_3ef600;
        case 0x3ef604u: goto label_3ef604;
        case 0x3ef608u: goto label_3ef608;
        case 0x3ef60cu: goto label_3ef60c;
        case 0x3ef610u: goto label_3ef610;
        case 0x3ef614u: goto label_3ef614;
        case 0x3ef618u: goto label_3ef618;
        case 0x3ef61cu: goto label_3ef61c;
        case 0x3ef620u: goto label_3ef620;
        case 0x3ef624u: goto label_3ef624;
        case 0x3ef628u: goto label_3ef628;
        case 0x3ef62cu: goto label_3ef62c;
        case 0x3ef630u: goto label_3ef630;
        case 0x3ef634u: goto label_3ef634;
        case 0x3ef638u: goto label_3ef638;
        case 0x3ef63cu: goto label_3ef63c;
        case 0x3ef640u: goto label_3ef640;
        case 0x3ef644u: goto label_3ef644;
        case 0x3ef648u: goto label_3ef648;
        case 0x3ef64cu: goto label_3ef64c;
        case 0x3ef650u: goto label_3ef650;
        case 0x3ef654u: goto label_3ef654;
        case 0x3ef658u: goto label_3ef658;
        case 0x3ef65cu: goto label_3ef65c;
        case 0x3ef660u: goto label_3ef660;
        case 0x3ef664u: goto label_3ef664;
        case 0x3ef668u: goto label_3ef668;
        case 0x3ef66cu: goto label_3ef66c;
        case 0x3ef670u: goto label_3ef670;
        case 0x3ef674u: goto label_3ef674;
        case 0x3ef678u: goto label_3ef678;
        case 0x3ef67cu: goto label_3ef67c;
        case 0x3ef680u: goto label_3ef680;
        case 0x3ef684u: goto label_3ef684;
        case 0x3ef688u: goto label_3ef688;
        case 0x3ef68cu: goto label_3ef68c;
        case 0x3ef690u: goto label_3ef690;
        case 0x3ef694u: goto label_3ef694;
        case 0x3ef698u: goto label_3ef698;
        case 0x3ef69cu: goto label_3ef69c;
        case 0x3ef6a0u: goto label_3ef6a0;
        case 0x3ef6a4u: goto label_3ef6a4;
        case 0x3ef6a8u: goto label_3ef6a8;
        case 0x3ef6acu: goto label_3ef6ac;
        case 0x3ef6b0u: goto label_3ef6b0;
        case 0x3ef6b4u: goto label_3ef6b4;
        case 0x3ef6b8u: goto label_3ef6b8;
        case 0x3ef6bcu: goto label_3ef6bc;
        case 0x3ef6c0u: goto label_3ef6c0;
        case 0x3ef6c4u: goto label_3ef6c4;
        case 0x3ef6c8u: goto label_3ef6c8;
        case 0x3ef6ccu: goto label_3ef6cc;
        case 0x3ef6d0u: goto label_3ef6d0;
        case 0x3ef6d4u: goto label_3ef6d4;
        case 0x3ef6d8u: goto label_3ef6d8;
        case 0x3ef6dcu: goto label_3ef6dc;
        case 0x3ef6e0u: goto label_3ef6e0;
        case 0x3ef6e4u: goto label_3ef6e4;
        case 0x3ef6e8u: goto label_3ef6e8;
        case 0x3ef6ecu: goto label_3ef6ec;
        case 0x3ef6f0u: goto label_3ef6f0;
        case 0x3ef6f4u: goto label_3ef6f4;
        case 0x3ef6f8u: goto label_3ef6f8;
        case 0x3ef6fcu: goto label_3ef6fc;
        case 0x3ef700u: goto label_3ef700;
        case 0x3ef704u: goto label_3ef704;
        case 0x3ef708u: goto label_3ef708;
        case 0x3ef70cu: goto label_3ef70c;
        case 0x3ef710u: goto label_3ef710;
        case 0x3ef714u: goto label_3ef714;
        case 0x3ef718u: goto label_3ef718;
        case 0x3ef71cu: goto label_3ef71c;
        case 0x3ef720u: goto label_3ef720;
        case 0x3ef724u: goto label_3ef724;
        case 0x3ef728u: goto label_3ef728;
        case 0x3ef72cu: goto label_3ef72c;
        case 0x3ef730u: goto label_3ef730;
        case 0x3ef734u: goto label_3ef734;
        case 0x3ef738u: goto label_3ef738;
        case 0x3ef73cu: goto label_3ef73c;
        case 0x3ef740u: goto label_3ef740;
        case 0x3ef744u: goto label_3ef744;
        case 0x3ef748u: goto label_3ef748;
        case 0x3ef74cu: goto label_3ef74c;
        case 0x3ef750u: goto label_3ef750;
        case 0x3ef754u: goto label_3ef754;
        case 0x3ef758u: goto label_3ef758;
        case 0x3ef75cu: goto label_3ef75c;
        case 0x3ef760u: goto label_3ef760;
        case 0x3ef764u: goto label_3ef764;
        case 0x3ef768u: goto label_3ef768;
        case 0x3ef76cu: goto label_3ef76c;
        case 0x3ef770u: goto label_3ef770;
        case 0x3ef774u: goto label_3ef774;
        case 0x3ef778u: goto label_3ef778;
        case 0x3ef77cu: goto label_3ef77c;
        case 0x3ef780u: goto label_3ef780;
        case 0x3ef784u: goto label_3ef784;
        case 0x3ef788u: goto label_3ef788;
        case 0x3ef78cu: goto label_3ef78c;
        case 0x3ef790u: goto label_3ef790;
        case 0x3ef794u: goto label_3ef794;
        case 0x3ef798u: goto label_3ef798;
        case 0x3ef79cu: goto label_3ef79c;
        case 0x3ef7a0u: goto label_3ef7a0;
        case 0x3ef7a4u: goto label_3ef7a4;
        case 0x3ef7a8u: goto label_3ef7a8;
        case 0x3ef7acu: goto label_3ef7ac;
        case 0x3ef7b0u: goto label_3ef7b0;
        case 0x3ef7b4u: goto label_3ef7b4;
        case 0x3ef7b8u: goto label_3ef7b8;
        case 0x3ef7bcu: goto label_3ef7bc;
        case 0x3ef7c0u: goto label_3ef7c0;
        case 0x3ef7c4u: goto label_3ef7c4;
        case 0x3ef7c8u: goto label_3ef7c8;
        case 0x3ef7ccu: goto label_3ef7cc;
        case 0x3ef7d0u: goto label_3ef7d0;
        case 0x3ef7d4u: goto label_3ef7d4;
        case 0x3ef7d8u: goto label_3ef7d8;
        case 0x3ef7dcu: goto label_3ef7dc;
        case 0x3ef7e0u: goto label_3ef7e0;
        case 0x3ef7e4u: goto label_3ef7e4;
        case 0x3ef7e8u: goto label_3ef7e8;
        case 0x3ef7ecu: goto label_3ef7ec;
        case 0x3ef7f0u: goto label_3ef7f0;
        case 0x3ef7f4u: goto label_3ef7f4;
        case 0x3ef7f8u: goto label_3ef7f8;
        case 0x3ef7fcu: goto label_3ef7fc;
        case 0x3ef800u: goto label_3ef800;
        case 0x3ef804u: goto label_3ef804;
        case 0x3ef808u: goto label_3ef808;
        case 0x3ef80cu: goto label_3ef80c;
        case 0x3ef810u: goto label_3ef810;
        case 0x3ef814u: goto label_3ef814;
        case 0x3ef818u: goto label_3ef818;
        case 0x3ef81cu: goto label_3ef81c;
        case 0x3ef820u: goto label_3ef820;
        case 0x3ef824u: goto label_3ef824;
        case 0x3ef828u: goto label_3ef828;
        case 0x3ef82cu: goto label_3ef82c;
        case 0x3ef830u: goto label_3ef830;
        case 0x3ef834u: goto label_3ef834;
        case 0x3ef838u: goto label_3ef838;
        case 0x3ef83cu: goto label_3ef83c;
        case 0x3ef840u: goto label_3ef840;
        case 0x3ef844u: goto label_3ef844;
        case 0x3ef848u: goto label_3ef848;
        case 0x3ef84cu: goto label_3ef84c;
        case 0x3ef850u: goto label_3ef850;
        case 0x3ef854u: goto label_3ef854;
        case 0x3ef858u: goto label_3ef858;
        case 0x3ef85cu: goto label_3ef85c;
        case 0x3ef860u: goto label_3ef860;
        case 0x3ef864u: goto label_3ef864;
        case 0x3ef868u: goto label_3ef868;
        case 0x3ef86cu: goto label_3ef86c;
        case 0x3ef870u: goto label_3ef870;
        case 0x3ef874u: goto label_3ef874;
        case 0x3ef878u: goto label_3ef878;
        case 0x3ef87cu: goto label_3ef87c;
        case 0x3ef880u: goto label_3ef880;
        case 0x3ef884u: goto label_3ef884;
        case 0x3ef888u: goto label_3ef888;
        case 0x3ef88cu: goto label_3ef88c;
        case 0x3ef890u: goto label_3ef890;
        case 0x3ef894u: goto label_3ef894;
        case 0x3ef898u: goto label_3ef898;
        case 0x3ef89cu: goto label_3ef89c;
        case 0x3ef8a0u: goto label_3ef8a0;
        case 0x3ef8a4u: goto label_3ef8a4;
        case 0x3ef8a8u: goto label_3ef8a8;
        case 0x3ef8acu: goto label_3ef8ac;
        case 0x3ef8b0u: goto label_3ef8b0;
        case 0x3ef8b4u: goto label_3ef8b4;
        case 0x3ef8b8u: goto label_3ef8b8;
        case 0x3ef8bcu: goto label_3ef8bc;
        case 0x3ef8c0u: goto label_3ef8c0;
        case 0x3ef8c4u: goto label_3ef8c4;
        case 0x3ef8c8u: goto label_3ef8c8;
        case 0x3ef8ccu: goto label_3ef8cc;
        case 0x3ef8d0u: goto label_3ef8d0;
        case 0x3ef8d4u: goto label_3ef8d4;
        case 0x3ef8d8u: goto label_3ef8d8;
        case 0x3ef8dcu: goto label_3ef8dc;
        case 0x3ef8e0u: goto label_3ef8e0;
        case 0x3ef8e4u: goto label_3ef8e4;
        case 0x3ef8e8u: goto label_3ef8e8;
        case 0x3ef8ecu: goto label_3ef8ec;
        case 0x3ef8f0u: goto label_3ef8f0;
        case 0x3ef8f4u: goto label_3ef8f4;
        case 0x3ef8f8u: goto label_3ef8f8;
        case 0x3ef8fcu: goto label_3ef8fc;
        case 0x3ef900u: goto label_3ef900;
        case 0x3ef904u: goto label_3ef904;
        case 0x3ef908u: goto label_3ef908;
        case 0x3ef90cu: goto label_3ef90c;
        case 0x3ef910u: goto label_3ef910;
        case 0x3ef914u: goto label_3ef914;
        case 0x3ef918u: goto label_3ef918;
        case 0x3ef91cu: goto label_3ef91c;
        case 0x3ef920u: goto label_3ef920;
        case 0x3ef924u: goto label_3ef924;
        case 0x3ef928u: goto label_3ef928;
        case 0x3ef92cu: goto label_3ef92c;
        case 0x3ef930u: goto label_3ef930;
        case 0x3ef934u: goto label_3ef934;
        case 0x3ef938u: goto label_3ef938;
        case 0x3ef93cu: goto label_3ef93c;
        case 0x3ef940u: goto label_3ef940;
        case 0x3ef944u: goto label_3ef944;
        case 0x3ef948u: goto label_3ef948;
        case 0x3ef94cu: goto label_3ef94c;
        case 0x3ef950u: goto label_3ef950;
        case 0x3ef954u: goto label_3ef954;
        case 0x3ef958u: goto label_3ef958;
        case 0x3ef95cu: goto label_3ef95c;
        case 0x3ef960u: goto label_3ef960;
        case 0x3ef964u: goto label_3ef964;
        case 0x3ef968u: goto label_3ef968;
        case 0x3ef96cu: goto label_3ef96c;
        case 0x3ef970u: goto label_3ef970;
        case 0x3ef974u: goto label_3ef974;
        case 0x3ef978u: goto label_3ef978;
        case 0x3ef97cu: goto label_3ef97c;
        case 0x3ef980u: goto label_3ef980;
        case 0x3ef984u: goto label_3ef984;
        case 0x3ef988u: goto label_3ef988;
        case 0x3ef98cu: goto label_3ef98c;
        case 0x3ef990u: goto label_3ef990;
        case 0x3ef994u: goto label_3ef994;
        case 0x3ef998u: goto label_3ef998;
        case 0x3ef99cu: goto label_3ef99c;
        case 0x3ef9a0u: goto label_3ef9a0;
        case 0x3ef9a4u: goto label_3ef9a4;
        case 0x3ef9a8u: goto label_3ef9a8;
        case 0x3ef9acu: goto label_3ef9ac;
        case 0x3ef9b0u: goto label_3ef9b0;
        case 0x3ef9b4u: goto label_3ef9b4;
        case 0x3ef9b8u: goto label_3ef9b8;
        case 0x3ef9bcu: goto label_3ef9bc;
        case 0x3ef9c0u: goto label_3ef9c0;
        case 0x3ef9c4u: goto label_3ef9c4;
        case 0x3ef9c8u: goto label_3ef9c8;
        case 0x3ef9ccu: goto label_3ef9cc;
        case 0x3ef9d0u: goto label_3ef9d0;
        case 0x3ef9d4u: goto label_3ef9d4;
        case 0x3ef9d8u: goto label_3ef9d8;
        case 0x3ef9dcu: goto label_3ef9dc;
        case 0x3ef9e0u: goto label_3ef9e0;
        case 0x3ef9e4u: goto label_3ef9e4;
        case 0x3ef9e8u: goto label_3ef9e8;
        case 0x3ef9ecu: goto label_3ef9ec;
        case 0x3ef9f0u: goto label_3ef9f0;
        case 0x3ef9f4u: goto label_3ef9f4;
        case 0x3ef9f8u: goto label_3ef9f8;
        case 0x3ef9fcu: goto label_3ef9fc;
        case 0x3efa00u: goto label_3efa00;
        case 0x3efa04u: goto label_3efa04;
        case 0x3efa08u: goto label_3efa08;
        case 0x3efa0cu: goto label_3efa0c;
        case 0x3efa10u: goto label_3efa10;
        case 0x3efa14u: goto label_3efa14;
        case 0x3efa18u: goto label_3efa18;
        case 0x3efa1cu: goto label_3efa1c;
        case 0x3efa20u: goto label_3efa20;
        case 0x3efa24u: goto label_3efa24;
        case 0x3efa28u: goto label_3efa28;
        case 0x3efa2cu: goto label_3efa2c;
        case 0x3efa30u: goto label_3efa30;
        case 0x3efa34u: goto label_3efa34;
        case 0x3efa38u: goto label_3efa38;
        case 0x3efa3cu: goto label_3efa3c;
        case 0x3efa40u: goto label_3efa40;
        case 0x3efa44u: goto label_3efa44;
        case 0x3efa48u: goto label_3efa48;
        case 0x3efa4cu: goto label_3efa4c;
        case 0x3efa50u: goto label_3efa50;
        case 0x3efa54u: goto label_3efa54;
        case 0x3efa58u: goto label_3efa58;
        case 0x3efa5cu: goto label_3efa5c;
        case 0x3efa60u: goto label_3efa60;
        case 0x3efa64u: goto label_3efa64;
        case 0x3efa68u: goto label_3efa68;
        case 0x3efa6cu: goto label_3efa6c;
        case 0x3efa70u: goto label_3efa70;
        case 0x3efa74u: goto label_3efa74;
        case 0x3efa78u: goto label_3efa78;
        case 0x3efa7cu: goto label_3efa7c;
        case 0x3efa80u: goto label_3efa80;
        case 0x3efa84u: goto label_3efa84;
        case 0x3efa88u: goto label_3efa88;
        case 0x3efa8cu: goto label_3efa8c;
        case 0x3efa90u: goto label_3efa90;
        case 0x3efa94u: goto label_3efa94;
        case 0x3efa98u: goto label_3efa98;
        case 0x3efa9cu: goto label_3efa9c;
        case 0x3efaa0u: goto label_3efaa0;
        case 0x3efaa4u: goto label_3efaa4;
        case 0x3efaa8u: goto label_3efaa8;
        case 0x3efaacu: goto label_3efaac;
        case 0x3efab0u: goto label_3efab0;
        case 0x3efab4u: goto label_3efab4;
        case 0x3efab8u: goto label_3efab8;
        case 0x3efabcu: goto label_3efabc;
        case 0x3efac0u: goto label_3efac0;
        case 0x3efac4u: goto label_3efac4;
        case 0x3efac8u: goto label_3efac8;
        case 0x3efaccu: goto label_3efacc;
        case 0x3efad0u: goto label_3efad0;
        case 0x3efad4u: goto label_3efad4;
        case 0x3efad8u: goto label_3efad8;
        case 0x3efadcu: goto label_3efadc;
        case 0x3efae0u: goto label_3efae0;
        case 0x3efae4u: goto label_3efae4;
        case 0x3efae8u: goto label_3efae8;
        case 0x3efaecu: goto label_3efaec;
        case 0x3efaf0u: goto label_3efaf0;
        case 0x3efaf4u: goto label_3efaf4;
        case 0x3efaf8u: goto label_3efaf8;
        case 0x3efafcu: goto label_3efafc;
        case 0x3efb00u: goto label_3efb00;
        case 0x3efb04u: goto label_3efb04;
        case 0x3efb08u: goto label_3efb08;
        case 0x3efb0cu: goto label_3efb0c;
        case 0x3efb10u: goto label_3efb10;
        case 0x3efb14u: goto label_3efb14;
        case 0x3efb18u: goto label_3efb18;
        case 0x3efb1cu: goto label_3efb1c;
        case 0x3efb20u: goto label_3efb20;
        case 0x3efb24u: goto label_3efb24;
        case 0x3efb28u: goto label_3efb28;
        case 0x3efb2cu: goto label_3efb2c;
        case 0x3efb30u: goto label_3efb30;
        case 0x3efb34u: goto label_3efb34;
        case 0x3efb38u: goto label_3efb38;
        case 0x3efb3cu: goto label_3efb3c;
        case 0x3efb40u: goto label_3efb40;
        case 0x3efb44u: goto label_3efb44;
        case 0x3efb48u: goto label_3efb48;
        case 0x3efb4cu: goto label_3efb4c;
        case 0x3efb50u: goto label_3efb50;
        case 0x3efb54u: goto label_3efb54;
        case 0x3efb58u: goto label_3efb58;
        case 0x3efb5cu: goto label_3efb5c;
        case 0x3efb60u: goto label_3efb60;
        case 0x3efb64u: goto label_3efb64;
        case 0x3efb68u: goto label_3efb68;
        case 0x3efb6cu: goto label_3efb6c;
        case 0x3efb70u: goto label_3efb70;
        case 0x3efb74u: goto label_3efb74;
        case 0x3efb78u: goto label_3efb78;
        case 0x3efb7cu: goto label_3efb7c;
        case 0x3efb80u: goto label_3efb80;
        case 0x3efb84u: goto label_3efb84;
        case 0x3efb88u: goto label_3efb88;
        case 0x3efb8cu: goto label_3efb8c;
        case 0x3efb90u: goto label_3efb90;
        case 0x3efb94u: goto label_3efb94;
        case 0x3efb98u: goto label_3efb98;
        case 0x3efb9cu: goto label_3efb9c;
        case 0x3efba0u: goto label_3efba0;
        case 0x3efba4u: goto label_3efba4;
        case 0x3efba8u: goto label_3efba8;
        case 0x3efbacu: goto label_3efbac;
        case 0x3efbb0u: goto label_3efbb0;
        case 0x3efbb4u: goto label_3efbb4;
        case 0x3efbb8u: goto label_3efbb8;
        case 0x3efbbcu: goto label_3efbbc;
        case 0x3efbc0u: goto label_3efbc0;
        case 0x3efbc4u: goto label_3efbc4;
        case 0x3efbc8u: goto label_3efbc8;
        case 0x3efbccu: goto label_3efbcc;
        case 0x3efbd0u: goto label_3efbd0;
        case 0x3efbd4u: goto label_3efbd4;
        case 0x3efbd8u: goto label_3efbd8;
        case 0x3efbdcu: goto label_3efbdc;
        case 0x3efbe0u: goto label_3efbe0;
        case 0x3efbe4u: goto label_3efbe4;
        case 0x3efbe8u: goto label_3efbe8;
        case 0x3efbecu: goto label_3efbec;
        case 0x3efbf0u: goto label_3efbf0;
        case 0x3efbf4u: goto label_3efbf4;
        case 0x3efbf8u: goto label_3efbf8;
        case 0x3efbfcu: goto label_3efbfc;
        case 0x3efc00u: goto label_3efc00;
        case 0x3efc04u: goto label_3efc04;
        case 0x3efc08u: goto label_3efc08;
        case 0x3efc0cu: goto label_3efc0c;
        case 0x3efc10u: goto label_3efc10;
        case 0x3efc14u: goto label_3efc14;
        case 0x3efc18u: goto label_3efc18;
        case 0x3efc1cu: goto label_3efc1c;
        case 0x3efc20u: goto label_3efc20;
        case 0x3efc24u: goto label_3efc24;
        case 0x3efc28u: goto label_3efc28;
        case 0x3efc2cu: goto label_3efc2c;
        case 0x3efc30u: goto label_3efc30;
        case 0x3efc34u: goto label_3efc34;
        case 0x3efc38u: goto label_3efc38;
        case 0x3efc3cu: goto label_3efc3c;
        case 0x3efc40u: goto label_3efc40;
        case 0x3efc44u: goto label_3efc44;
        case 0x3efc48u: goto label_3efc48;
        case 0x3efc4cu: goto label_3efc4c;
        case 0x3efc50u: goto label_3efc50;
        case 0x3efc54u: goto label_3efc54;
        case 0x3efc58u: goto label_3efc58;
        case 0x3efc5cu: goto label_3efc5c;
        case 0x3efc60u: goto label_3efc60;
        case 0x3efc64u: goto label_3efc64;
        case 0x3efc68u: goto label_3efc68;
        case 0x3efc6cu: goto label_3efc6c;
        case 0x3efc70u: goto label_3efc70;
        case 0x3efc74u: goto label_3efc74;
        case 0x3efc78u: goto label_3efc78;
        case 0x3efc7cu: goto label_3efc7c;
        case 0x3efc80u: goto label_3efc80;
        case 0x3efc84u: goto label_3efc84;
        case 0x3efc88u: goto label_3efc88;
        case 0x3efc8cu: goto label_3efc8c;
        case 0x3efc90u: goto label_3efc90;
        case 0x3efc94u: goto label_3efc94;
        case 0x3efc98u: goto label_3efc98;
        case 0x3efc9cu: goto label_3efc9c;
        case 0x3efca0u: goto label_3efca0;
        case 0x3efca4u: goto label_3efca4;
        case 0x3efca8u: goto label_3efca8;
        case 0x3efcacu: goto label_3efcac;
        case 0x3efcb0u: goto label_3efcb0;
        case 0x3efcb4u: goto label_3efcb4;
        case 0x3efcb8u: goto label_3efcb8;
        case 0x3efcbcu: goto label_3efcbc;
        case 0x3efcc0u: goto label_3efcc0;
        case 0x3efcc4u: goto label_3efcc4;
        case 0x3efcc8u: goto label_3efcc8;
        case 0x3efcccu: goto label_3efccc;
        case 0x3efcd0u: goto label_3efcd0;
        case 0x3efcd4u: goto label_3efcd4;
        case 0x3efcd8u: goto label_3efcd8;
        case 0x3efcdcu: goto label_3efcdc;
        case 0x3efce0u: goto label_3efce0;
        case 0x3efce4u: goto label_3efce4;
        case 0x3efce8u: goto label_3efce8;
        case 0x3efcecu: goto label_3efcec;
        case 0x3efcf0u: goto label_3efcf0;
        case 0x3efcf4u: goto label_3efcf4;
        case 0x3efcf8u: goto label_3efcf8;
        case 0x3efcfcu: goto label_3efcfc;
        case 0x3efd00u: goto label_3efd00;
        case 0x3efd04u: goto label_3efd04;
        case 0x3efd08u: goto label_3efd08;
        case 0x3efd0cu: goto label_3efd0c;
        case 0x3efd10u: goto label_3efd10;
        case 0x3efd14u: goto label_3efd14;
        case 0x3efd18u: goto label_3efd18;
        case 0x3efd1cu: goto label_3efd1c;
        default: break;
    }

    ctx->pc = 0x3ef510u;

label_3ef510:
    // 0x3ef510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ef510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ef514:
    // 0x3ef514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ef514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ef518:
    // 0x3ef518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ef518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ef51c:
    // 0x3ef51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ef51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ef520:
    // 0x3ef520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ef520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ef524:
    // 0x3ef524: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_3ef528:
    if (ctx->pc == 0x3EF528u) {
        ctx->pc = 0x3EF528u;
            // 0x3ef528: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF52Cu;
        goto label_3ef52c;
    }
    ctx->pc = 0x3EF524u;
    {
        const bool branch_taken_0x3ef524 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF524u;
            // 0x3ef528: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef524) {
            ctx->pc = 0x3EF568u;
            goto label_3ef568;
        }
    }
    ctx->pc = 0x3EF52Cu;
label_3ef52c:
    // 0x3ef52c: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x3ef52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3ef530:
    // 0x3ef530: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ef534:
    if (ctx->pc == 0x3EF534u) {
        ctx->pc = 0x3EF538u;
        goto label_3ef538;
    }
    ctx->pc = 0x3EF530u;
    {
        const bool branch_taken_0x3ef530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef530) {
            ctx->pc = 0x3EF540u;
            goto label_3ef540;
        }
    }
    ctx->pc = 0x3EF538u;
label_3ef538:
    // 0x3ef538: 0xc07507c  jal         func_1D41F0
label_3ef53c:
    if (ctx->pc == 0x3EF53Cu) {
        ctx->pc = 0x3EF53Cu;
            // 0x3ef53c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x3EF540u;
        goto label_3ef540;
    }
    ctx->pc = 0x3EF538u;
    SET_GPR_U32(ctx, 31, 0x3EF540u);
    ctx->pc = 0x3EF53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF538u;
            // 0x3ef53c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF540u; }
        if (ctx->pc != 0x3EF540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF540u; }
        if (ctx->pc != 0x3EF540u) { return; }
    }
    ctx->pc = 0x3EF540u;
label_3ef540:
    // 0x3ef540: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_3ef544:
    if (ctx->pc == 0x3EF544u) {
        ctx->pc = 0x3EF544u;
            // 0x3ef544: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3EF548u;
        goto label_3ef548;
    }
    ctx->pc = 0x3EF540u;
    {
        const bool branch_taken_0x3ef540 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef540) {
            ctx->pc = 0x3EF544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF540u;
            // 0x3ef544: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EF554u;
            goto label_3ef554;
        }
    }
    ctx->pc = 0x3EF548u;
label_3ef548:
    // 0x3ef548: 0xc07507c  jal         func_1D41F0
label_3ef54c:
    if (ctx->pc == 0x3EF54Cu) {
        ctx->pc = 0x3EF54Cu;
            // 0x3ef54c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x3EF550u;
        goto label_3ef550;
    }
    ctx->pc = 0x3EF548u;
    SET_GPR_U32(ctx, 31, 0x3EF550u);
    ctx->pc = 0x3EF54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF548u;
            // 0x3ef54c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF550u; }
        if (ctx->pc != 0x3EF550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF550u; }
        if (ctx->pc != 0x3EF550u) { return; }
    }
    ctx->pc = 0x3EF550u;
label_3ef550:
    // 0x3ef550: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3ef550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3ef554:
    // 0x3ef554: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ef554u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3ef558:
    // 0x3ef558: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3ef55c:
    if (ctx->pc == 0x3EF55Cu) {
        ctx->pc = 0x3EF55Cu;
            // 0x3ef55c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF560u;
        goto label_3ef560;
    }
    ctx->pc = 0x3EF558u;
    {
        const bool branch_taken_0x3ef558 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3ef558) {
            ctx->pc = 0x3EF55Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF558u;
            // 0x3ef55c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EF56Cu;
            goto label_3ef56c;
        }
    }
    ctx->pc = 0x3EF560u;
label_3ef560:
    // 0x3ef560: 0xc0400a8  jal         func_1002A0
label_3ef564:
    if (ctx->pc == 0x3EF564u) {
        ctx->pc = 0x3EF564u;
            // 0x3ef564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF568u;
        goto label_3ef568;
    }
    ctx->pc = 0x3EF560u;
    SET_GPR_U32(ctx, 31, 0x3EF568u);
    ctx->pc = 0x3EF564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF560u;
            // 0x3ef564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF568u; }
        if (ctx->pc != 0x3EF568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF568u; }
        if (ctx->pc != 0x3EF568u) { return; }
    }
    ctx->pc = 0x3EF568u;
label_3ef568:
    // 0x3ef568: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ef568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ef56c:
    // 0x3ef56c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ef56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef570:
    // 0x3ef570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ef570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ef574:
    // 0x3ef574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ef574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef578:
    // 0x3ef578: 0x3e00008  jr          $ra
label_3ef57c:
    if (ctx->pc == 0x3EF57Cu) {
        ctx->pc = 0x3EF57Cu;
            // 0x3ef57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3EF580u;
        goto label_3ef580;
    }
    ctx->pc = 0x3EF578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF578u;
            // 0x3ef57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EF580u;
label_3ef580:
    // 0x3ef580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ef580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ef584:
    // 0x3ef584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ef584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ef588:
    // 0x3ef588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ef588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ef58c:
    // 0x3ef58c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ef58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ef590:
    // 0x3ef590: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ef590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ef594:
    // 0x3ef594: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_3ef598:
    if (ctx->pc == 0x3EF598u) {
        ctx->pc = 0x3EF598u;
            // 0x3ef598: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF59Cu;
        goto label_3ef59c;
    }
    ctx->pc = 0x3EF594u;
    {
        const bool branch_taken_0x3ef594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF594u;
            // 0x3ef598: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef594) {
            ctx->pc = 0x3EF65Cu;
            goto label_3ef65c;
        }
    }
    ctx->pc = 0x3EF59Cu;
label_3ef59c:
    // 0x3ef59c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3ef59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3ef5a0:
    // 0x3ef5a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3ef5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3ef5a4:
    // 0x3ef5a4: 0x24639fa0  addiu       $v1, $v1, -0x6060
    ctx->pc = 0x3ef5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942624));
label_3ef5a8:
    // 0x3ef5a8: 0x24429fe0  addiu       $v0, $v0, -0x6020
    ctx->pc = 0x3ef5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942688));
label_3ef5ac:
    // 0x3ef5ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3ef5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3ef5b0:
    // 0x3ef5b0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3ef5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3ef5b4:
    // 0x3ef5b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ef5b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ef5b8:
    // 0x3ef5b8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ef5b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ef5bc:
    // 0x3ef5bc: 0x320f809  jalr        $t9
label_3ef5c0:
    if (ctx->pc == 0x3EF5C0u) {
        ctx->pc = 0x3EF5C4u;
        goto label_3ef5c4;
    }
    ctx->pc = 0x3EF5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EF5C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EF5C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EF5C4u; }
            if (ctx->pc != 0x3EF5C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3EF5C4u;
label_3ef5c4:
    // 0x3ef5c4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_3ef5c8:
    if (ctx->pc == 0x3EF5C8u) {
        ctx->pc = 0x3EF5C8u;
            // 0x3ef5c8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x3EF5CCu;
        goto label_3ef5cc;
    }
    ctx->pc = 0x3EF5C4u;
    {
        const bool branch_taken_0x3ef5c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef5c4) {
            ctx->pc = 0x3EF5C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF5C4u;
            // 0x3ef5c8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EF648u;
            goto label_3ef648;
        }
    }
    ctx->pc = 0x3EF5CCu;
label_3ef5cc:
    // 0x3ef5cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3ef5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3ef5d0:
    // 0x3ef5d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3ef5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3ef5d4:
    // 0x3ef5d4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x3ef5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_3ef5d8:
    // 0x3ef5d8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x3ef5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_3ef5dc:
    // 0x3ef5dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3ef5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3ef5e0:
    // 0x3ef5e0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3ef5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3ef5e4:
    // 0x3ef5e4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x3ef5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_3ef5e8:
    // 0x3ef5e8: 0xc0aecc4  jal         func_2BB310
label_3ef5ec:
    if (ctx->pc == 0x3EF5ECu) {
        ctx->pc = 0x3EF5ECu;
            // 0x3ef5ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3EF5F0u;
        goto label_3ef5f0;
    }
    ctx->pc = 0x3EF5E8u;
    SET_GPR_U32(ctx, 31, 0x3EF5F0u);
    ctx->pc = 0x3EF5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF5E8u;
            // 0x3ef5ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF5F0u; }
        if (ctx->pc != 0x3EF5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF5F0u; }
        if (ctx->pc != 0x3EF5F0u) { return; }
    }
    ctx->pc = 0x3EF5F0u;
label_3ef5f0:
    // 0x3ef5f0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3ef5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_3ef5f4:
    // 0x3ef5f4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x3ef5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3ef5f8:
    // 0x3ef5f8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3ef5fc:
    if (ctx->pc == 0x3EF5FCu) {
        ctx->pc = 0x3EF5FCu;
            // 0x3ef5fc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x3EF600u;
        goto label_3ef600;
    }
    ctx->pc = 0x3EF5F8u;
    {
        const bool branch_taken_0x3ef5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef5f8) {
            ctx->pc = 0x3EF5FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF5F8u;
            // 0x3ef5fc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EF614u;
            goto label_3ef614;
        }
    }
    ctx->pc = 0x3EF600u;
label_3ef600:
    // 0x3ef600: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3ef600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3ef604:
    // 0x3ef604: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3ef604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3ef608:
    // 0x3ef608: 0x320f809  jalr        $t9
label_3ef60c:
    if (ctx->pc == 0x3EF60Cu) {
        ctx->pc = 0x3EF60Cu;
            // 0x3ef60c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3EF610u;
        goto label_3ef610;
    }
    ctx->pc = 0x3EF608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EF610u);
        ctx->pc = 0x3EF60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF608u;
            // 0x3ef60c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EF610u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EF610u; }
            if (ctx->pc != 0x3EF610u) { return; }
        }
        }
    }
    ctx->pc = 0x3EF610u;
label_3ef610:
    // 0x3ef610: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3ef610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3ef614:
    // 0x3ef614: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3ef614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ef618:
    // 0x3ef618: 0xc0aec9c  jal         func_2BB270
label_3ef61c:
    if (ctx->pc == 0x3EF61Cu) {
        ctx->pc = 0x3EF61Cu;
            // 0x3ef61c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x3EF620u;
        goto label_3ef620;
    }
    ctx->pc = 0x3EF618u;
    SET_GPR_U32(ctx, 31, 0x3EF620u);
    ctx->pc = 0x3EF61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF618u;
            // 0x3ef61c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF620u; }
        if (ctx->pc != 0x3EF620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF620u; }
        if (ctx->pc != 0x3EF620u) { return; }
    }
    ctx->pc = 0x3EF620u;
label_3ef620:
    // 0x3ef620: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x3ef620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_3ef624:
    // 0x3ef624: 0xc0aec88  jal         func_2BB220
label_3ef628:
    if (ctx->pc == 0x3EF628u) {
        ctx->pc = 0x3EF628u;
            // 0x3ef628: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3EF62Cu;
        goto label_3ef62c;
    }
    ctx->pc = 0x3EF624u;
    SET_GPR_U32(ctx, 31, 0x3EF62Cu);
    ctx->pc = 0x3EF628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF624u;
            // 0x3ef628: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF62Cu; }
        if (ctx->pc != 0x3EF62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF62Cu; }
        if (ctx->pc != 0x3EF62Cu) { return; }
    }
    ctx->pc = 0x3EF62Cu;
label_3ef62c:
    // 0x3ef62c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3ef62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_3ef630:
    // 0x3ef630: 0xc0aec0c  jal         func_2BB030
label_3ef634:
    if (ctx->pc == 0x3EF634u) {
        ctx->pc = 0x3EF634u;
            // 0x3ef634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF638u;
        goto label_3ef638;
    }
    ctx->pc = 0x3EF630u;
    SET_GPR_U32(ctx, 31, 0x3EF638u);
    ctx->pc = 0x3EF634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF630u;
            // 0x3ef634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF638u; }
        if (ctx->pc != 0x3EF638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF638u; }
        if (ctx->pc != 0x3EF638u) { return; }
    }
    ctx->pc = 0x3EF638u;
label_3ef638:
    // 0x3ef638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ef638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ef63c:
    // 0x3ef63c: 0xc0aeaa8  jal         func_2BAAA0
label_3ef640:
    if (ctx->pc == 0x3EF640u) {
        ctx->pc = 0x3EF640u;
            // 0x3ef640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF644u;
        goto label_3ef644;
    }
    ctx->pc = 0x3EF63Cu;
    SET_GPR_U32(ctx, 31, 0x3EF644u);
    ctx->pc = 0x3EF640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF63Cu;
            // 0x3ef640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF644u; }
        if (ctx->pc != 0x3EF644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF644u; }
        if (ctx->pc != 0x3EF644u) { return; }
    }
    ctx->pc = 0x3EF644u;
label_3ef644:
    // 0x3ef644: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3ef644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3ef648:
    // 0x3ef648: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ef648u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3ef64c:
    // 0x3ef64c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3ef650:
    if (ctx->pc == 0x3EF650u) {
        ctx->pc = 0x3EF650u;
            // 0x3ef650: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF654u;
        goto label_3ef654;
    }
    ctx->pc = 0x3EF64Cu;
    {
        const bool branch_taken_0x3ef64c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3ef64c) {
            ctx->pc = 0x3EF650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF64Cu;
            // 0x3ef650: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EF660u;
            goto label_3ef660;
        }
    }
    ctx->pc = 0x3EF654u;
label_3ef654:
    // 0x3ef654: 0xc0400a8  jal         func_1002A0
label_3ef658:
    if (ctx->pc == 0x3EF658u) {
        ctx->pc = 0x3EF658u;
            // 0x3ef658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF65Cu;
        goto label_3ef65c;
    }
    ctx->pc = 0x3EF654u;
    SET_GPR_U32(ctx, 31, 0x3EF65Cu);
    ctx->pc = 0x3EF658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF654u;
            // 0x3ef658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF65Cu; }
        if (ctx->pc != 0x3EF65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF65Cu; }
        if (ctx->pc != 0x3EF65Cu) { return; }
    }
    ctx->pc = 0x3EF65Cu;
label_3ef65c:
    // 0x3ef65c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ef65cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ef660:
    // 0x3ef660: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ef660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef664:
    // 0x3ef664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ef664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ef668:
    // 0x3ef668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ef668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef66c:
    // 0x3ef66c: 0x3e00008  jr          $ra
label_3ef670:
    if (ctx->pc == 0x3EF670u) {
        ctx->pc = 0x3EF670u;
            // 0x3ef670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3EF674u;
        goto label_3ef674;
    }
    ctx->pc = 0x3EF66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF66Cu;
            // 0x3ef670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EF674u;
label_3ef674:
    // 0x3ef674: 0x0  nop
    ctx->pc = 0x3ef674u;
    // NOP
label_3ef678:
    // 0x3ef678: 0x0  nop
    ctx->pc = 0x3ef678u;
    // NOP
label_3ef67c:
    // 0x3ef67c: 0x0  nop
    ctx->pc = 0x3ef67cu;
    // NOP
label_3ef680:
    // 0x3ef680: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x3ef680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_3ef684:
    // 0x3ef684: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ef684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ef688:
    // 0x3ef688: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3ef688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3ef68c:
    // 0x3ef68c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3ef68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3ef690:
    // 0x3ef690: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3ef690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3ef694:
    // 0x3ef694: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3ef694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3ef698:
    // 0x3ef698: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3ef698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3ef69c:
    // 0x3ef69c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ef69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3ef6a0:
    // 0x3ef6a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ef6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3ef6a4:
    // 0x3ef6a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ef6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3ef6a8:
    // 0x3ef6a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ef6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ef6ac:
    // 0x3ef6ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ef6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3ef6b0:
    // 0x3ef6b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3ef6b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3ef6b4:
    // 0x3ef6b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ef6b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3ef6b8:
    // 0x3ef6b8: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x3ef6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3ef6bc:
    // 0x3ef6bc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3ef6bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3ef6c0:
    // 0x3ef6c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ef6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ef6c4:
    // 0x3ef6c4: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_3ef6c8:
    if (ctx->pc == 0x3EF6C8u) {
        ctx->pc = 0x3EF6C8u;
            // 0x3ef6c8: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF6CCu;
        goto label_3ef6cc;
    }
    ctx->pc = 0x3EF6C4u;
    {
        const bool branch_taken_0x3ef6c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3EF6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF6C4u;
            // 0x3ef6c8: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef6c4) {
            ctx->pc = 0x3EF708u;
            goto label_3ef708;
        }
    }
    ctx->pc = 0x3EF6CCu;
label_3ef6cc:
    // 0x3ef6cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ef6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ef6d0:
    // 0x3ef6d0: 0x50a30185  beql        $a1, $v1, . + 4 + (0x185 << 2)
label_3ef6d4:
    if (ctx->pc == 0x3EF6D4u) {
        ctx->pc = 0x3EF6D4u;
            // 0x3ef6d4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3EF6D8u;
        goto label_3ef6d8;
    }
    ctx->pc = 0x3EF6D0u;
    {
        const bool branch_taken_0x3ef6d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ef6d0) {
            ctx->pc = 0x3EF6D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF6D0u;
            // 0x3ef6d4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EFCE8u;
            goto label_3efce8;
        }
    }
    ctx->pc = 0x3EF6D8u;
label_3ef6d8:
    // 0x3ef6d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ef6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ef6dc:
    // 0x3ef6dc: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3ef6e0:
    if (ctx->pc == 0x3EF6E0u) {
        ctx->pc = 0x3EF6E0u;
            // 0x3ef6e0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3EF6E4u;
        goto label_3ef6e4;
    }
    ctx->pc = 0x3EF6DCu;
    {
        const bool branch_taken_0x3ef6dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ef6dc) {
            ctx->pc = 0x3EF6E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF6DCu;
            // 0x3ef6e0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EF6ECu;
            goto label_3ef6ec;
        }
    }
    ctx->pc = 0x3EF6E4u;
label_3ef6e4:
    // 0x3ef6e4: 0x1000017f  b           . + 4 + (0x17F << 2)
label_3ef6e8:
    if (ctx->pc == 0x3EF6E8u) {
        ctx->pc = 0x3EF6ECu;
        goto label_3ef6ec;
    }
    ctx->pc = 0x3EF6E4u;
    {
        const bool branch_taken_0x3ef6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef6e4) {
            ctx->pc = 0x3EFCE4u;
            goto label_3efce4;
        }
    }
    ctx->pc = 0x3EF6ECu;
label_3ef6ec:
    // 0x3ef6ec: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x3ef6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_3ef6f0:
    // 0x3ef6f0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3ef6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3ef6f4:
    // 0x3ef6f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ef6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ef6f8:
    // 0x3ef6f8: 0x320f809  jalr        $t9
label_3ef6fc:
    if (ctx->pc == 0x3EF6FCu) {
        ctx->pc = 0x3EF6FCu;
            // 0x3ef6fc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3EF700u;
        goto label_3ef700;
    }
    ctx->pc = 0x3EF6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EF700u);
        ctx->pc = 0x3EF6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF6F8u;
            // 0x3ef6fc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EF700u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EF700u; }
            if (ctx->pc != 0x3EF700u) { return; }
        }
        }
    }
    ctx->pc = 0x3EF700u;
label_3ef700:
    // 0x3ef700: 0x10000178  b           . + 4 + (0x178 << 2)
label_3ef704:
    if (ctx->pc == 0x3EF704u) {
        ctx->pc = 0x3EF708u;
        goto label_3ef708;
    }
    ctx->pc = 0x3EF700u;
    {
        const bool branch_taken_0x3ef700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef700) {
            ctx->pc = 0x3EFCE4u;
            goto label_3efce4;
        }
    }
    ctx->pc = 0x3EF708u;
label_3ef708:
    // 0x3ef708: 0x8ede0070  lw          $fp, 0x70($s6)
    ctx->pc = 0x3ef708u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_3ef70c:
    // 0x3ef70c: 0x13c00175  beqz        $fp, . + 4 + (0x175 << 2)
label_3ef710:
    if (ctx->pc == 0x3EF710u) {
        ctx->pc = 0x3EF714u;
        goto label_3ef714;
    }
    ctx->pc = 0x3EF70Cu;
    {
        const bool branch_taken_0x3ef70c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef70c) {
            ctx->pc = 0x3EFCE4u;
            goto label_3efce4;
        }
    }
    ctx->pc = 0x3EF714u;
label_3ef714:
    // 0x3ef714: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3ef714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3ef718:
    // 0x3ef718: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3ef718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3ef71c:
    // 0x3ef71c: 0x8c77e378  lw          $s7, -0x1C88($v1)
    ctx->pc = 0x3ef71cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3ef720:
    // 0x3ef720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ef720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef724:
    // 0x3ef724: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x3ef724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3ef728:
    // 0x3ef728: 0x26d10084  addiu       $s1, $s6, 0x84
    ctx->pc = 0x3ef728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_3ef72c:
    // 0x3ef72c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3ef72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3ef730:
    // 0x3ef730: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3ef730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3ef734:
    // 0x3ef734: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ef734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3ef738:
    // 0x3ef738: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x3ef738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3ef73c:
    // 0x3ef73c: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x3ef73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_3ef740:
    // 0x3ef740: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x3ef740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_3ef744:
    // 0x3ef744: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x3ef744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3ef748:
    // 0x3ef748: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3ef748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3ef74c:
    // 0x3ef74c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3ef74cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3ef750:
    // 0x3ef750: 0x8ec20084  lw          $v0, 0x84($s6)
    ctx->pc = 0x3ef750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 132)));
label_3ef754:
    // 0x3ef754: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3ef754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3ef758:
    // 0x3ef758: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3ef758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ef75c:
    // 0x3ef75c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3ef75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3ef760:
    // 0x3ef760: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3ef760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3ef764:
    // 0x3ef764: 0xc04e4a4  jal         func_139290
label_3ef768:
    if (ctx->pc == 0x3EF768u) {
        ctx->pc = 0x3EF768u;
            // 0x3ef768: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x3EF76Cu;
        goto label_3ef76c;
    }
    ctx->pc = 0x3EF764u;
    SET_GPR_U32(ctx, 31, 0x3EF76Cu);
    ctx->pc = 0x3EF768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF764u;
            // 0x3ef768: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF76Cu; }
        if (ctx->pc != 0x3EF76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF76Cu; }
        if (ctx->pc != 0x3EF76Cu) { return; }
    }
    ctx->pc = 0x3EF76Cu;
label_3ef76c:
    // 0x3ef76c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3ef76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3ef770:
    // 0x3ef770: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ef770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3ef774:
    // 0x3ef774: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x3ef774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_3ef778:
    // 0x3ef778: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x3ef778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_3ef77c:
    // 0x3ef77c: 0xc04e738  jal         func_139CE0
label_3ef780:
    if (ctx->pc == 0x3EF780u) {
        ctx->pc = 0x3EF780u;
            // 0x3ef780: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x3EF784u;
        goto label_3ef784;
    }
    ctx->pc = 0x3EF77Cu;
    SET_GPR_U32(ctx, 31, 0x3EF784u);
    ctx->pc = 0x3EF780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF77Cu;
            // 0x3ef780: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF784u; }
        if (ctx->pc != 0x3EF784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF784u; }
        if (ctx->pc != 0x3EF784u) { return; }
    }
    ctx->pc = 0x3EF784u;
label_3ef784:
    // 0x3ef784: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3ef784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3ef788:
    // 0x3ef788: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3ef788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3ef78c:
    // 0x3ef78c: 0xc474a2a8  lwc1        $f20, -0x5D58($v1)
    ctx->pc = 0x3ef78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294943400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ef790:
    // 0x3ef790: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3ef790u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef794:
    // 0x3ef794: 0xc455a2a8  lwc1        $f21, -0x5D58($v0)
    ctx->pc = 0x3ef794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ef798:
    // 0x3ef798: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ef798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef79c:
    // 0x3ef79c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3ef79cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ef7a0:
    // 0x3ef7a0: 0xafb7018c  sw          $s7, 0x18C($sp)
    ctx->pc = 0x3ef7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 23));
label_3ef7a4:
    // 0x3ef7a4: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x3ef7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_3ef7a8:
    // 0x3ef7a8: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x3ef7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_3ef7ac:
    // 0x3ef7ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3ef7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3ef7b0:
    // 0x3ef7b0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3ef7b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ef7b4:
    // 0x3ef7b4: 0xc0d639c  jal         func_358E70
label_3ef7b8:
    if (ctx->pc == 0x3EF7B8u) {
        ctx->pc = 0x3EF7B8u;
            // 0x3ef7b8: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->pc = 0x3EF7BCu;
        goto label_3ef7bc;
    }
    ctx->pc = 0x3EF7B4u;
    SET_GPR_U32(ctx, 31, 0x3EF7BCu);
    ctx->pc = 0x3EF7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF7B4u;
            // 0x3ef7b8: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF7BCu; }
        if (ctx->pc != 0x3EF7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF7BCu; }
        if (ctx->pc != 0x3EF7BCu) { return; }
    }
    ctx->pc = 0x3EF7BCu;
label_3ef7bc:
    // 0x3ef7bc: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_3ef7c0:
    if (ctx->pc == 0x3EF7C0u) {
        ctx->pc = 0x3EF7C4u;
        goto label_3ef7c4;
    }
    ctx->pc = 0x3EF7BCu;
    {
        const bool branch_taken_0x3ef7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef7bc) {
            ctx->pc = 0x3EF8D8u;
            goto label_3ef8d8;
        }
    }
    ctx->pc = 0x3EF7C4u;
label_3ef7c4:
    // 0x3ef7c4: 0xc0d1c14  jal         func_347050
label_3ef7c8:
    if (ctx->pc == 0x3EF7C8u) {
        ctx->pc = 0x3EF7C8u;
            // 0x3ef7c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF7CCu;
        goto label_3ef7cc;
    }
    ctx->pc = 0x3EF7C4u;
    SET_GPR_U32(ctx, 31, 0x3EF7CCu);
    ctx->pc = 0x3EF7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF7C4u;
            // 0x3ef7c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF7CCu; }
        if (ctx->pc != 0x3EF7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF7CCu; }
        if (ctx->pc != 0x3EF7CCu) { return; }
    }
    ctx->pc = 0x3EF7CCu;
label_3ef7cc:
    // 0x3ef7cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ef7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef7d0:
    // 0x3ef7d0: 0xc04f278  jal         func_13C9E0
label_3ef7d4:
    if (ctx->pc == 0x3EF7D4u) {
        ctx->pc = 0x3EF7D4u;
            // 0x3ef7d4: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x3EF7D8u;
        goto label_3ef7d8;
    }
    ctx->pc = 0x3EF7D0u;
    SET_GPR_U32(ctx, 31, 0x3EF7D8u);
    ctx->pc = 0x3EF7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF7D0u;
            // 0x3ef7d4: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF7D8u; }
        if (ctx->pc != 0x3EF7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF7D8u; }
        if (ctx->pc != 0x3EF7D8u) { return; }
    }
    ctx->pc = 0x3EF7D8u;
label_3ef7d8:
    // 0x3ef7d8: 0xc0d1c10  jal         func_347040
label_3ef7dc:
    if (ctx->pc == 0x3EF7DCu) {
        ctx->pc = 0x3EF7DCu;
            // 0x3ef7dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF7E0u;
        goto label_3ef7e0;
    }
    ctx->pc = 0x3EF7D8u;
    SET_GPR_U32(ctx, 31, 0x3EF7E0u);
    ctx->pc = 0x3EF7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF7D8u;
            // 0x3ef7dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF7E0u; }
        if (ctx->pc != 0x3EF7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF7E0u; }
        if (ctx->pc != 0x3EF7E0u) { return; }
    }
    ctx->pc = 0x3EF7E0u;
label_3ef7e0:
    // 0x3ef7e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ef7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef7e4:
    // 0x3ef7e4: 0xc04ce80  jal         func_133A00
label_3ef7e8:
    if (ctx->pc == 0x3EF7E8u) {
        ctx->pc = 0x3EF7E8u;
            // 0x3ef7e8: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x3EF7ECu;
        goto label_3ef7ec;
    }
    ctx->pc = 0x3EF7E4u;
    SET_GPR_U32(ctx, 31, 0x3EF7ECu);
    ctx->pc = 0x3EF7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF7E4u;
            // 0x3ef7e8: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF7ECu; }
        if (ctx->pc != 0x3EF7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF7ECu; }
        if (ctx->pc != 0x3EF7ECu) { return; }
    }
    ctx->pc = 0x3EF7ECu;
label_3ef7ec:
    // 0x3ef7ec: 0xc0d4108  jal         func_350420
label_3ef7f0:
    if (ctx->pc == 0x3EF7F0u) {
        ctx->pc = 0x3EF7F4u;
        goto label_3ef7f4;
    }
    ctx->pc = 0x3EF7ECu;
    SET_GPR_U32(ctx, 31, 0x3EF7F4u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF7F4u; }
        if (ctx->pc != 0x3EF7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF7F4u; }
        if (ctx->pc != 0x3EF7F4u) { return; }
    }
    ctx->pc = 0x3EF7F4u;
label_3ef7f4:
    // 0x3ef7f4: 0xc0b36b4  jal         func_2CDAD0
label_3ef7f8:
    if (ctx->pc == 0x3EF7F8u) {
        ctx->pc = 0x3EF7F8u;
            // 0x3ef7f8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF7FCu;
        goto label_3ef7fc;
    }
    ctx->pc = 0x3EF7F4u;
    SET_GPR_U32(ctx, 31, 0x3EF7FCu);
    ctx->pc = 0x3EF7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF7F4u;
            // 0x3ef7f8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF7FCu; }
        if (ctx->pc != 0x3EF7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF7FCu; }
        if (ctx->pc != 0x3EF7FCu) { return; }
    }
    ctx->pc = 0x3EF7FCu;
label_3ef7fc:
    // 0x3ef7fc: 0xc0b9c64  jal         func_2E7190
label_3ef800:
    if (ctx->pc == 0x3EF800u) {
        ctx->pc = 0x3EF800u;
            // 0x3ef800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF804u;
        goto label_3ef804;
    }
    ctx->pc = 0x3EF7FCu;
    SET_GPR_U32(ctx, 31, 0x3EF804u);
    ctx->pc = 0x3EF800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF7FCu;
            // 0x3ef800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF804u; }
        if (ctx->pc != 0x3EF804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF804u; }
        if (ctx->pc != 0x3EF804u) { return; }
    }
    ctx->pc = 0x3EF804u;
label_3ef804:
    // 0x3ef804: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3ef804u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef808:
    // 0x3ef808: 0xc0d4104  jal         func_350410
label_3ef80c:
    if (ctx->pc == 0x3EF80Cu) {
        ctx->pc = 0x3EF80Cu;
            // 0x3ef80c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF810u;
        goto label_3ef810;
    }
    ctx->pc = 0x3EF808u;
    SET_GPR_U32(ctx, 31, 0x3EF810u);
    ctx->pc = 0x3EF80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF808u;
            // 0x3ef80c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF810u; }
        if (ctx->pc != 0x3EF810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF810u; }
        if (ctx->pc != 0x3EF810u) { return; }
    }
    ctx->pc = 0x3EF810u;
label_3ef810:
    // 0x3ef810: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3ef810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ef814:
    // 0x3ef814: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ef814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ef818:
    // 0x3ef818: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3ef818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ef81c:
    // 0x3ef81c: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x3ef81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3ef820:
    // 0x3ef820: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3ef820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef824:
    // 0x3ef824: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ef824u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef828:
    // 0x3ef828: 0xc0d40ac  jal         func_3502B0
label_3ef82c:
    if (ctx->pc == 0x3EF82Cu) {
        ctx->pc = 0x3EF82Cu;
            // 0x3ef82c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3EF830u;
        goto label_3ef830;
    }
    ctx->pc = 0x3EF828u;
    SET_GPR_U32(ctx, 31, 0x3EF830u);
    ctx->pc = 0x3EF82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF828u;
            // 0x3ef82c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF830u; }
        if (ctx->pc != 0x3EF830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF830u; }
        if (ctx->pc != 0x3EF830u) { return; }
    }
    ctx->pc = 0x3EF830u;
label_3ef830:
    // 0x3ef830: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3ef830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3ef834:
    // 0x3ef834: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_3ef838:
    if (ctx->pc == 0x3EF838u) {
        ctx->pc = 0x3EF838u;
            // 0x3ef838: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x3EF83Cu;
        goto label_3ef83c;
    }
    ctx->pc = 0x3EF834u;
    {
        const bool branch_taken_0x3ef834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF834u;
            // 0x3ef838: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef834) {
            ctx->pc = 0x3EF8D8u;
            goto label_3ef8d8;
        }
    }
    ctx->pc = 0x3EF83Cu;
label_3ef83c:
    // 0x3ef83c: 0x924200d8  lbu         $v0, 0xD8($s2)
    ctx->pc = 0x3ef83cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 216)));
label_3ef840:
    // 0x3ef840: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3ef844:
    if (ctx->pc == 0x3EF844u) {
        ctx->pc = 0x3EF848u;
        goto label_3ef848;
    }
    ctx->pc = 0x3EF840u;
    {
        const bool branch_taken_0x3ef840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ef840) {
            ctx->pc = 0x3EF858u;
            goto label_3ef858;
        }
    }
    ctx->pc = 0x3EF848u;
label_3ef848:
    // 0x3ef848: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x3ef848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_3ef84c:
    // 0x3ef84c: 0xc04cce8  jal         func_1333A0
label_3ef850:
    if (ctx->pc == 0x3EF850u) {
        ctx->pc = 0x3EF850u;
            // 0x3ef850: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x3EF854u;
        goto label_3ef854;
    }
    ctx->pc = 0x3EF84Cu;
    SET_GPR_U32(ctx, 31, 0x3EF854u);
    ctx->pc = 0x3EF850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF84Cu;
            // 0x3ef850: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF854u; }
        if (ctx->pc != 0x3EF854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF854u; }
        if (ctx->pc != 0x3EF854u) { return; }
    }
    ctx->pc = 0x3EF854u;
label_3ef854:
    // 0x3ef854: 0x0  nop
    ctx->pc = 0x3ef854u;
    // NOP
label_3ef858:
    // 0x3ef858: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x3ef858u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ef85c:
    // 0x3ef85c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3ef85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3ef860:
    // 0x3ef860: 0x27a6018c  addiu       $a2, $sp, 0x18C
    ctx->pc = 0x3ef860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_3ef864:
    // 0x3ef864: 0xc0fbf5c  jal         func_3EFD70
label_3ef868:
    if (ctx->pc == 0x3EF868u) {
        ctx->pc = 0x3EF868u;
            // 0x3ef868: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF86Cu;
        goto label_3ef86c;
    }
    ctx->pc = 0x3EF864u;
    SET_GPR_U32(ctx, 31, 0x3EF86Cu);
    ctx->pc = 0x3EF868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF864u;
            // 0x3ef868: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EFD70u;
    if (runtime->hasFunction(0x3EFD70u)) {
        auto targetFn = runtime->lookupFunction(0x3EFD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF86Cu; }
        if (ctx->pc != 0x3EF86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EFD70_0x3efd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF86Cu; }
        if (ctx->pc != 0x3EF86Cu) { return; }
    }
    ctx->pc = 0x3EF86Cu;
label_3ef86c:
    // 0x3ef86c: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x3ef86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_3ef870:
    // 0x3ef870: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x3ef870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_3ef874:
    // 0x3ef874: 0xc04e4a4  jal         func_139290
label_3ef878:
    if (ctx->pc == 0x3EF878u) {
        ctx->pc = 0x3EF878u;
            // 0x3ef878: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF87Cu;
        goto label_3ef87c;
    }
    ctx->pc = 0x3EF874u;
    SET_GPR_U32(ctx, 31, 0x3EF87Cu);
    ctx->pc = 0x3EF878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF874u;
            // 0x3ef878: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF87Cu; }
        if (ctx->pc != 0x3EF87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF87Cu; }
        if (ctx->pc != 0x3EF87Cu) { return; }
    }
    ctx->pc = 0x3EF87Cu;
label_3ef87c:
    // 0x3ef87c: 0xc0dd4bc  jal         func_3752F0
label_3ef880:
    if (ctx->pc == 0x3EF880u) {
        ctx->pc = 0x3EF880u;
            // 0x3ef880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF884u;
        goto label_3ef884;
    }
    ctx->pc = 0x3EF87Cu;
    SET_GPR_U32(ctx, 31, 0x3EF884u);
    ctx->pc = 0x3EF880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF87Cu;
            // 0x3ef880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3752F0u;
    if (runtime->hasFunction(0x3752F0u)) {
        auto targetFn = runtime->lookupFunction(0x3752F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF884u; }
        if (ctx->pc != 0x3EF884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003752F0_0x3752f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF884u; }
        if (ctx->pc != 0x3EF884u) { return; }
    }
    ctx->pc = 0x3EF884u;
label_3ef884:
    // 0x3ef884: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ef884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ef888:
    // 0x3ef888: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_3ef88c:
    if (ctx->pc == 0x3EF88Cu) {
        ctx->pc = 0x3EF890u;
        goto label_3ef890;
    }
    ctx->pc = 0x3EF888u;
    {
        const bool branch_taken_0x3ef888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ef888) {
            ctx->pc = 0x3EF8A0u;
            goto label_3ef8a0;
        }
    }
    ctx->pc = 0x3EF890u;
label_3ef890:
    // 0x3ef890: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x3ef890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_3ef894:
    // 0x3ef894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ef894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ef898:
    // 0x3ef898: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x3ef898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_3ef89c:
    // 0x3ef89c: 0x0  nop
    ctx->pc = 0x3ef89cu;
    // NOP
label_3ef8a0:
    // 0x3ef8a0: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x3ef8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_3ef8a4:
    // 0x3ef8a4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x3ef8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3ef8a8:
    // 0x3ef8a8: 0xc04cd60  jal         func_133580
label_3ef8ac:
    if (ctx->pc == 0x3EF8ACu) {
        ctx->pc = 0x3EF8ACu;
            // 0x3ef8ac: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x3EF8B0u;
        goto label_3ef8b0;
    }
    ctx->pc = 0x3EF8A8u;
    SET_GPR_U32(ctx, 31, 0x3EF8B0u);
    ctx->pc = 0x3EF8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF8A8u;
            // 0x3ef8ac: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF8B0u; }
        if (ctx->pc != 0x3EF8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF8B0u; }
        if (ctx->pc != 0x3EF8B0u) { return; }
    }
    ctx->pc = 0x3EF8B0u;
label_3ef8b0:
    // 0x3ef8b0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3ef8b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ef8b4:
    // 0x3ef8b4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3ef8b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3ef8b8:
    // 0x3ef8b8: 0x320f809  jalr        $t9
label_3ef8bc:
    if (ctx->pc == 0x3EF8BCu) {
        ctx->pc = 0x3EF8BCu;
            // 0x3ef8bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF8C0u;
        goto label_3ef8c0;
    }
    ctx->pc = 0x3EF8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EF8C0u);
        ctx->pc = 0x3EF8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF8B8u;
            // 0x3ef8bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EF8C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EF8C0u; }
            if (ctx->pc != 0x3EF8C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3EF8C0u;
label_3ef8c0:
    // 0x3ef8c0: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x3ef8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_3ef8c4:
    // 0x3ef8c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ef8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ef8c8:
    // 0x3ef8c8: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x3ef8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_3ef8cc:
    // 0x3ef8cc: 0xc054fd4  jal         func_153F50
label_3ef8d0:
    if (ctx->pc == 0x3EF8D0u) {
        ctx->pc = 0x3EF8D0u;
            // 0x3ef8d0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF8D4u;
        goto label_3ef8d4;
    }
    ctx->pc = 0x3EF8CCu;
    SET_GPR_U32(ctx, 31, 0x3EF8D4u);
    ctx->pc = 0x3EF8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF8CCu;
            // 0x3ef8d0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF8D4u; }
        if (ctx->pc != 0x3EF8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF8D4u; }
        if (ctx->pc != 0x3EF8D4u) { return; }
    }
    ctx->pc = 0x3EF8D4u;
label_3ef8d4:
    // 0x3ef8d4: 0x0  nop
    ctx->pc = 0x3ef8d4u;
    // NOP
label_3ef8d8:
    // 0x3ef8d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3ef8d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3ef8dc:
    // 0x3ef8dc: 0x29e102b  sltu        $v0, $s4, $fp
    ctx->pc = 0x3ef8dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3ef8e0:
    // 0x3ef8e0: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
label_3ef8e4:
    if (ctx->pc == 0x3EF8E4u) {
        ctx->pc = 0x3EF8E4u;
            // 0x3ef8e4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x3EF8E8u;
        goto label_3ef8e8;
    }
    ctx->pc = 0x3EF8E0u;
    {
        const bool branch_taken_0x3ef8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF8E0u;
            // 0x3ef8e4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef8e0) {
            ctx->pc = 0x3EF79Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ef79c;
        }
    }
    ctx->pc = 0x3EF8E8u;
label_3ef8e8:
    // 0x3ef8e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ef8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3ef8ec:
    // 0x3ef8ec: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x3ef8ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_3ef8f0:
    // 0x3ef8f0: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_3ef8f4:
    if (ctx->pc == 0x3EF8F4u) {
        ctx->pc = 0x3EF8F4u;
            // 0x3ef8f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3EF8F8u;
        goto label_3ef8f8;
    }
    ctx->pc = 0x3EF8F0u;
    {
        const bool branch_taken_0x3ef8f0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3EF8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF8F0u;
            // 0x3ef8f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef8f0) {
            ctx->pc = 0x3EF918u;
            goto label_3ef918;
        }
    }
    ctx->pc = 0x3EF8F8u;
label_3ef8f8:
    // 0x3ef8f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3ef8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3ef8fc:
    // 0x3ef8fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ef8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3ef900:
    // 0x3ef900: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x3ef900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_3ef904:
    // 0x3ef904: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3ef904u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3ef908:
    // 0x3ef908: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x3ef908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_3ef90c:
    // 0x3ef90c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ef90cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef910:
    // 0x3ef910: 0xc055d28  jal         func_1574A0
label_3ef914:
    if (ctx->pc == 0x3EF914u) {
        ctx->pc = 0x3EF914u;
            // 0x3ef914: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF918u;
        goto label_3ef918;
    }
    ctx->pc = 0x3EF910u;
    SET_GPR_U32(ctx, 31, 0x3EF918u);
    ctx->pc = 0x3EF914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF910u;
            // 0x3ef914: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF918u; }
        if (ctx->pc != 0x3EF918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF918u; }
        if (ctx->pc != 0x3EF918u) { return; }
    }
    ctx->pc = 0x3EF918u;
label_3ef918:
    // 0x3ef918: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3ef918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3ef91c:
    // 0x3ef91c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3ef91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3ef920:
    // 0x3ef920: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3ef920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3ef924:
    // 0x3ef924: 0xc04e4a4  jal         func_139290
label_3ef928:
    if (ctx->pc == 0x3EF928u) {
        ctx->pc = 0x3EF928u;
            // 0x3ef928: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF92Cu;
        goto label_3ef92c;
    }
    ctx->pc = 0x3EF924u;
    SET_GPR_U32(ctx, 31, 0x3EF92Cu);
    ctx->pc = 0x3EF928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF924u;
            // 0x3ef928: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF92Cu; }
        if (ctx->pc != 0x3EF92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF92Cu; }
        if (ctx->pc != 0x3EF92Cu) { return; }
    }
    ctx->pc = 0x3EF92Cu;
label_3ef92c:
    // 0x3ef92c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3ef92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3ef930:
    // 0x3ef930: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ef930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3ef934:
    // 0x3ef934: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x3ef934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_3ef938:
    // 0x3ef938: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x3ef938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_3ef93c:
    // 0x3ef93c: 0xc04e738  jal         func_139CE0
label_3ef940:
    if (ctx->pc == 0x3EF940u) {
        ctx->pc = 0x3EF940u;
            // 0x3ef940: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x3EF944u;
        goto label_3ef944;
    }
    ctx->pc = 0x3EF93Cu;
    SET_GPR_U32(ctx, 31, 0x3EF944u);
    ctx->pc = 0x3EF940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF93Cu;
            // 0x3ef940: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF944u; }
        if (ctx->pc != 0x3EF944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF944u; }
        if (ctx->pc != 0x3EF944u) { return; }
    }
    ctx->pc = 0x3EF944u;
label_3ef944:
    // 0x3ef944: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ef944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef948:
    // 0x3ef948: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ef948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef94c:
    // 0x3ef94c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3ef94cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ef950:
    // 0x3ef950: 0xafb70188  sw          $s7, 0x188($sp)
    ctx->pc = 0x3ef950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 23));
label_3ef954:
    // 0x3ef954: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x3ef954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_3ef958:
    // 0x3ef958: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x3ef958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_3ef95c:
    // 0x3ef95c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3ef95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3ef960:
    // 0x3ef960: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x3ef960u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ef964:
    // 0x3ef964: 0xc0dd4bc  jal         func_3752F0
label_3ef968:
    if (ctx->pc == 0x3EF968u) {
        ctx->pc = 0x3EF968u;
            // 0x3ef968: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF96Cu;
        goto label_3ef96c;
    }
    ctx->pc = 0x3EF964u;
    SET_GPR_U32(ctx, 31, 0x3EF96Cu);
    ctx->pc = 0x3EF968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF964u;
            // 0x3ef968: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3752F0u;
    if (runtime->hasFunction(0x3752F0u)) {
        auto targetFn = runtime->lookupFunction(0x3752F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF96Cu; }
        if (ctx->pc != 0x3EF96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003752F0_0x3752f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF96Cu; }
        if (ctx->pc != 0x3EF96Cu) { return; }
    }
    ctx->pc = 0x3EF96Cu;
label_3ef96c:
    // 0x3ef96c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ef96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ef970:
    // 0x3ef970: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
label_3ef974:
    if (ctx->pc == 0x3EF974u) {
        ctx->pc = 0x3EF978u;
        goto label_3ef978;
    }
    ctx->pc = 0x3EF970u;
    {
        const bool branch_taken_0x3ef970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ef970) {
            ctx->pc = 0x3EFA08u;
            goto label_3efa08;
        }
    }
    ctx->pc = 0x3EF978u;
label_3ef978:
    // 0x3ef978: 0x928200d8  lbu         $v0, 0xD8($s4)
    ctx->pc = 0x3ef978u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 216)));
label_3ef97c:
    // 0x3ef97c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_3ef980:
    if (ctx->pc == 0x3EF980u) {
        ctx->pc = 0x3EF984u;
        goto label_3ef984;
    }
    ctx->pc = 0x3EF97Cu;
    {
        const bool branch_taken_0x3ef97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ef97c) {
            ctx->pc = 0x3EFA08u;
            goto label_3efa08;
        }
    }
    ctx->pc = 0x3EF984u;
label_3ef984:
    // 0x3ef984: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ef984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ef988:
    // 0x3ef988: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ef988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ef98c:
    // 0x3ef98c: 0xc0fbf58  jal         func_3EFD60
label_3ef990:
    if (ctx->pc == 0x3EF990u) {
        ctx->pc = 0x3EF990u;
            // 0x3ef990: 0xa28500d8  sb          $a1, 0xD8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 216), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x3EF994u;
        goto label_3ef994;
    }
    ctx->pc = 0x3EF98Cu;
    SET_GPR_U32(ctx, 31, 0x3EF994u);
    ctx->pc = 0x3EF990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF98Cu;
            // 0x3ef990: 0xa28500d8  sb          $a1, 0xD8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 216), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EFD60u;
    if (runtime->hasFunction(0x3EFD60u)) {
        auto targetFn = runtime->lookupFunction(0x3EFD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF994u; }
        if (ctx->pc != 0x3EF994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EFD60_0x3efd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF994u; }
        if (ctx->pc != 0x3EF994u) { return; }
    }
    ctx->pc = 0x3EF994u;
label_3ef994:
    // 0x3ef994: 0xc0775b8  jal         func_1DD6E0
label_3ef998:
    if (ctx->pc == 0x3EF998u) {
        ctx->pc = 0x3EF99Cu;
        goto label_3ef99c;
    }
    ctx->pc = 0x3EF994u;
    SET_GPR_U32(ctx, 31, 0x3EF99Cu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF99Cu; }
        if (ctx->pc != 0x3EF99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF99Cu; }
        if (ctx->pc != 0x3EF99Cu) { return; }
    }
    ctx->pc = 0x3EF99Cu;
label_3ef99c:
    // 0x3ef99c: 0xc077244  jal         func_1DC910
label_3ef9a0:
    if (ctx->pc == 0x3EF9A0u) {
        ctx->pc = 0x3EF9A0u;
            // 0x3ef9a0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3EF9A4u;
        goto label_3ef9a4;
    }
    ctx->pc = 0x3EF99Cu;
    SET_GPR_U32(ctx, 31, 0x3EF9A4u);
    ctx->pc = 0x3EF9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF99Cu;
            // 0x3ef9a0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC910u;
    if (runtime->hasFunction(0x1DC910u)) {
        auto targetFn = runtime->lookupFunction(0x1DC910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF9A4u; }
        if (ctx->pc != 0x3EF9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC910_0x1dc910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF9A4u; }
        if (ctx->pc != 0x3EF9A4u) { return; }
    }
    ctx->pc = 0x3EF9A4u;
label_3ef9a4:
    // 0x3ef9a4: 0xae820134  sw          $v0, 0x134($s4)
    ctx->pc = 0x3ef9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
label_3ef9a8:
    // 0x3ef9a8: 0xc0d1c10  jal         func_347040
label_3ef9ac:
    if (ctx->pc == 0x3EF9ACu) {
        ctx->pc = 0x3EF9ACu;
            // 0x3ef9ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF9B0u;
        goto label_3ef9b0;
    }
    ctx->pc = 0x3EF9A8u;
    SET_GPR_U32(ctx, 31, 0x3EF9B0u);
    ctx->pc = 0x3EF9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF9A8u;
            // 0x3ef9ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF9B0u; }
        if (ctx->pc != 0x3EF9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF9B0u; }
        if (ctx->pc != 0x3EF9B0u) { return; }
    }
    ctx->pc = 0x3EF9B0u;
label_3ef9b0:
    // 0x3ef9b0: 0x8e840140  lw          $a0, 0x140($s4)
    ctx->pc = 0x3ef9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
label_3ef9b4:
    // 0x3ef9b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3ef9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef9b8:
    // 0x3ef9b8: 0xc122d2c  jal         func_48B4B0
label_3ef9bc:
    if (ctx->pc == 0x3EF9BCu) {
        ctx->pc = 0x3EF9BCu;
            // 0x3ef9bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF9C0u;
        goto label_3ef9c0;
    }
    ctx->pc = 0x3EF9B8u;
    SET_GPR_U32(ctx, 31, 0x3EF9C0u);
    ctx->pc = 0x3EF9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF9B8u;
            // 0x3ef9bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF9C0u; }
        if (ctx->pc != 0x3EF9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF9C0u; }
        if (ctx->pc != 0x3EF9C0u) { return; }
    }
    ctx->pc = 0x3EF9C0u;
label_3ef9c0:
    // 0x3ef9c0: 0x8e820148  lw          $v0, 0x148($s4)
    ctx->pc = 0x3ef9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
label_3ef9c4:
    // 0x3ef9c4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_3ef9c8:
    if (ctx->pc == 0x3EF9C8u) {
        ctx->pc = 0x3EF9CCu;
        goto label_3ef9cc;
    }
    ctx->pc = 0x3EF9C4u;
    {
        const bool branch_taken_0x3ef9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ef9c4) {
            ctx->pc = 0x3EFA08u;
            goto label_3efa08;
        }
    }
    ctx->pc = 0x3EF9CCu;
label_3ef9cc:
    // 0x3ef9cc: 0xc0d1c10  jal         func_347040
label_3ef9d0:
    if (ctx->pc == 0x3EF9D0u) {
        ctx->pc = 0x3EF9D0u;
            // 0x3ef9d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF9D4u;
        goto label_3ef9d4;
    }
    ctx->pc = 0x3EF9CCu;
    SET_GPR_U32(ctx, 31, 0x3EF9D4u);
    ctx->pc = 0x3EF9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF9CCu;
            // 0x3ef9d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF9D4u; }
        if (ctx->pc != 0x3EF9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF9D4u; }
        if (ctx->pc != 0x3EF9D4u) { return; }
    }
    ctx->pc = 0x3EF9D4u;
label_3ef9d4:
    // 0x3ef9d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ef9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef9d8:
    // 0x3ef9d8: 0xc0fbf4c  jal         func_3EFD30
label_3ef9dc:
    if (ctx->pc == 0x3EF9DCu) {
        ctx->pc = 0x3EF9DCu;
            // 0x3ef9dc: 0x26840150  addiu       $a0, $s4, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
        ctx->pc = 0x3EF9E0u;
        goto label_3ef9e0;
    }
    ctx->pc = 0x3EF9D8u;
    SET_GPR_U32(ctx, 31, 0x3EF9E0u);
    ctx->pc = 0x3EF9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF9D8u;
            // 0x3ef9dc: 0x26840150  addiu       $a0, $s4, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EFD30u;
    if (runtime->hasFunction(0x3EFD30u)) {
        auto targetFn = runtime->lookupFunction(0x3EFD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF9E0u; }
        if (ctx->pc != 0x3EF9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EFD30_0x3efd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF9E0u; }
        if (ctx->pc != 0x3EF9E0u) { return; }
    }
    ctx->pc = 0x3EF9E0u;
label_3ef9e0:
    // 0x3ef9e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ef9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ef9e4:
    // 0x3ef9e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3ef9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ef9e8:
    // 0x3ef9e8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3ef9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3ef9ec:
    // 0x3ef9ec: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x3ef9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_3ef9f0:
    // 0x3ef9f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ef9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef9f4:
    // 0x3ef9f4: 0x26870150  addiu       $a3, $s4, 0x150
    ctx->pc = 0x3ef9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
label_3ef9f8:
    // 0x3ef9f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ef9f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef9fc:
    // 0x3ef9fc: 0xc0bb0e8  jal         func_2EC3A0
label_3efa00:
    if (ctx->pc == 0x3EFA00u) {
        ctx->pc = 0x3EFA00u;
            // 0x3efa00: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3EFA04u;
        goto label_3efa04;
    }
    ctx->pc = 0x3EF9FCu;
    SET_GPR_U32(ctx, 31, 0x3EFA04u);
    ctx->pc = 0x3EFA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF9FCu;
            // 0x3efa00: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFA04u; }
        if (ctx->pc != 0x3EFA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFA04u; }
        if (ctx->pc != 0x3EFA04u) { return; }
    }
    ctx->pc = 0x3EFA04u;
label_3efa04:
    // 0x3efa04: 0xae820148  sw          $v0, 0x148($s4)
    ctx->pc = 0x3efa04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 2));
label_3efa08:
    // 0x3efa08: 0x8e350008  lw          $s5, 0x8($s1)
    ctx->pc = 0x3efa08u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3efa0c:
    // 0x3efa0c: 0xc04e738  jal         func_139CE0
label_3efa10:
    if (ctx->pc == 0x3EFA10u) {
        ctx->pc = 0x3EFA10u;
            // 0x3efa10: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x3EFA14u;
        goto label_3efa14;
    }
    ctx->pc = 0x3EFA0Cu;
    SET_GPR_U32(ctx, 31, 0x3EFA14u);
    ctx->pc = 0x3EFA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFA0Cu;
            // 0x3efa10: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFA14u; }
        if (ctx->pc != 0x3EFA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFA14u; }
        if (ctx->pc != 0x3EFA14u) { return; }
    }
    ctx->pc = 0x3EFA14u;
label_3efa14:
    // 0x3efa14: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3efa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3efa18:
    // 0x3efa18: 0xc04cce8  jal         func_1333A0
label_3efa1c:
    if (ctx->pc == 0x3EFA1Cu) {
        ctx->pc = 0x3EFA1Cu;
            // 0x3efa1c: 0x268500e0  addiu       $a1, $s4, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
        ctx->pc = 0x3EFA20u;
        goto label_3efa20;
    }
    ctx->pc = 0x3EFA18u;
    SET_GPR_U32(ctx, 31, 0x3EFA20u);
    ctx->pc = 0x3EFA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFA18u;
            // 0x3efa1c: 0x268500e0  addiu       $a1, $s4, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFA20u; }
        if (ctx->pc != 0x3EFA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFA20u; }
        if (ctx->pc != 0x3EFA20u) { return; }
    }
    ctx->pc = 0x3EFA20u;
label_3efa20:
    // 0x3efa20: 0xc0775b8  jal         func_1DD6E0
label_3efa24:
    if (ctx->pc == 0x3EFA24u) {
        ctx->pc = 0x3EFA28u;
        goto label_3efa28;
    }
    ctx->pc = 0x3EFA20u;
    SET_GPR_U32(ctx, 31, 0x3EFA28u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFA28u; }
        if (ctx->pc != 0x3EFA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFA28u; }
        if (ctx->pc != 0x3EFA28u) { return; }
    }
    ctx->pc = 0x3EFA28u;
label_3efa28:
    // 0x3efa28: 0xc077244  jal         func_1DC910
label_3efa2c:
    if (ctx->pc == 0x3EFA2Cu) {
        ctx->pc = 0x3EFA2Cu;
            // 0x3efa2c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3EFA30u;
        goto label_3efa30;
    }
    ctx->pc = 0x3EFA28u;
    SET_GPR_U32(ctx, 31, 0x3EFA30u);
    ctx->pc = 0x3EFA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFA28u;
            // 0x3efa2c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC910u;
    if (runtime->hasFunction(0x1DC910u)) {
        auto targetFn = runtime->lookupFunction(0x1DC910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFA30u; }
        if (ctx->pc != 0x3EFA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC910_0x1dc910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFA30u; }
        if (ctx->pc != 0x3EFA30u) { return; }
    }
    ctx->pc = 0x3EFA30u;
label_3efa30:
    // 0x3efa30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3efa30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3efa34:
    // 0x3efa34: 0x8e820134  lw          $v0, 0x134($s4)
    ctx->pc = 0x3efa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 308)));
label_3efa38:
    // 0x3efa38: 0x10500065  beq         $v0, $s0, . + 4 + (0x65 << 2)
label_3efa3c:
    if (ctx->pc == 0x3EFA3Cu) {
        ctx->pc = 0x3EFA40u;
        goto label_3efa40;
    }
    ctx->pc = 0x3EFA38u;
    {
        const bool branch_taken_0x3efa38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3efa38) {
            ctx->pc = 0x3EFBD0u;
            goto label_3efbd0;
        }
    }
    ctx->pc = 0x3EFA40u;
label_3efa40:
    // 0x3efa40: 0xc0fbf48  jal         func_3EFD20
label_3efa44:
    if (ctx->pc == 0x3EFA44u) {
        ctx->pc = 0x3EFA44u;
            // 0x3efa44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EFA48u;
        goto label_3efa48;
    }
    ctx->pc = 0x3EFA40u;
    SET_GPR_U32(ctx, 31, 0x3EFA48u);
    ctx->pc = 0x3EFA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFA40u;
            // 0x3efa44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EFD20u;
    if (runtime->hasFunction(0x3EFD20u)) {
        auto targetFn = runtime->lookupFunction(0x3EFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFA48u; }
        if (ctx->pc != 0x3EFA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EFD20_0x3efd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFA48u; }
        if (ctx->pc != 0x3EFA48u) { return; }
    }
    ctx->pc = 0x3EFA48u;
label_3efa48:
    // 0x3efa48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3efa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3efa4c:
    // 0x3efa4c: 0x10430036  beq         $v0, $v1, . + 4 + (0x36 << 2)
label_3efa50:
    if (ctx->pc == 0x3EFA50u) {
        ctx->pc = 0x3EFA54u;
        goto label_3efa54;
    }
    ctx->pc = 0x3EFA4Cu;
    {
        const bool branch_taken_0x3efa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3efa4c) {
            ctx->pc = 0x3EFB28u;
            goto label_3efb28;
        }
    }
    ctx->pc = 0x3EFA54u;
label_3efa54:
    // 0x3efa54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3efa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3efa58:
    // 0x3efa58: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
label_3efa5c:
    if (ctx->pc == 0x3EFA5Cu) {
        ctx->pc = 0x3EFA60u;
        goto label_3efa60;
    }
    ctx->pc = 0x3EFA58u;
    {
        const bool branch_taken_0x3efa58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3efa58) {
            ctx->pc = 0x3EFAD8u;
            goto label_3efad8;
        }
    }
    ctx->pc = 0x3EFA60u;
label_3efa60:
    // 0x3efa60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3efa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3efa64:
    // 0x3efa64: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_3efa68:
    if (ctx->pc == 0x3EFA68u) {
        ctx->pc = 0x3EFA6Cu;
        goto label_3efa6c;
    }
    ctx->pc = 0x3EFA64u;
    {
        const bool branch_taken_0x3efa64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3efa64) {
            ctx->pc = 0x3EFA80u;
            goto label_3efa80;
        }
    }
    ctx->pc = 0x3EFA6Cu;
label_3efa6c:
    // 0x3efa6c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_3efa70:
    if (ctx->pc == 0x3EFA70u) {
        ctx->pc = 0x3EFA74u;
        goto label_3efa74;
    }
    ctx->pc = 0x3EFA6Cu;
    {
        const bool branch_taken_0x3efa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efa6c) {
            ctx->pc = 0x3EFBC8u;
            goto label_3efbc8;
        }
    }
    ctx->pc = 0x3EFA74u;
label_3efa74:
    // 0x3efa74: 0x10000054  b           . + 4 + (0x54 << 2)
label_3efa78:
    if (ctx->pc == 0x3EFA78u) {
        ctx->pc = 0x3EFA7Cu;
        goto label_3efa7c;
    }
    ctx->pc = 0x3EFA74u;
    {
        const bool branch_taken_0x3efa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efa74) {
            ctx->pc = 0x3EFBC8u;
            goto label_3efbc8;
        }
    }
    ctx->pc = 0x3EFA7Cu;
label_3efa7c:
    // 0x3efa7c: 0x0  nop
    ctx->pc = 0x3efa7cu;
    // NOP
label_3efa80:
    // 0x3efa80: 0xc681012c  lwc1        $f1, 0x12C($s4)
    ctx->pc = 0x3efa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3efa84:
    // 0x3efa84: 0xc6800120  lwc1        $f0, 0x120($s4)
    ctx->pc = 0x3efa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3efa88:
    // 0x3efa88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3efa88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3efa8c:
    // 0x3efa8c: 0xe6800120  swc1        $f0, 0x120($s4)
    ctx->pc = 0x3efa8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 288), bits); }
label_3efa90:
    // 0x3efa90: 0xc0775b8  jal         func_1DD6E0
label_3efa94:
    if (ctx->pc == 0x3EFA94u) {
        ctx->pc = 0x3EFA94u;
            // 0x3efa94: 0xe6800124  swc1        $f0, 0x124($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 292), bits); }
        ctx->pc = 0x3EFA98u;
        goto label_3efa98;
    }
    ctx->pc = 0x3EFA90u;
    SET_GPR_U32(ctx, 31, 0x3EFA98u);
    ctx->pc = 0x3EFA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFA90u;
            // 0x3efa94: 0xe6800124  swc1        $f0, 0x124($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 292), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFA98u; }
        if (ctx->pc != 0x3EFA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFA98u; }
        if (ctx->pc != 0x3EFA98u) { return; }
    }
    ctx->pc = 0x3EFA98u;
label_3efa98:
    // 0x3efa98: 0xc0775b4  jal         func_1DD6D0
label_3efa9c:
    if (ctx->pc == 0x3EFA9Cu) {
        ctx->pc = 0x3EFA9Cu;
            // 0x3efa9c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3EFAA0u;
        goto label_3efaa0;
    }
    ctx->pc = 0x3EFA98u;
    SET_GPR_U32(ctx, 31, 0x3EFAA0u);
    ctx->pc = 0x3EFA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFA98u;
            // 0x3efa9c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFAA0u; }
        if (ctx->pc != 0x3EFAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFAA0u; }
        if (ctx->pc != 0x3EFAA0u) { return; }
    }
    ctx->pc = 0x3EFAA0u;
label_3efaa0:
    // 0x3efaa0: 0xc6820128  lwc1        $f2, 0x128($s4)
    ctx->pc = 0x3efaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3efaa4:
    // 0x3efaa4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3efaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3efaa8:
    // 0x3efaa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3efaa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3efaac:
    // 0x3efaac: 0x0  nop
    ctx->pc = 0x3efaacu;
    // NOP
label_3efab0:
    // 0x3efab0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3efab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3efab4:
    // 0x3efab4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3efab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3efab8:
    // 0x3efab8: 0x45010043  bc1t        . + 4 + (0x43 << 2)
label_3efabc:
    if (ctx->pc == 0x3EFABCu) {
        ctx->pc = 0x3EFABCu;
            // 0x3efabc: 0xe6800128  swc1        $f0, 0x128($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 296), bits); }
        ctx->pc = 0x3EFAC0u;
        goto label_3efac0;
    }
    ctx->pc = 0x3EFAB8u;
    {
        const bool branch_taken_0x3efab8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EFABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFAB8u;
            // 0x3efabc: 0xe6800128  swc1        $f0, 0x128($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efab8) {
            ctx->pc = 0x3EFBC8u;
            goto label_3efbc8;
        }
    }
    ctx->pc = 0x3EFAC0u;
label_3efac0:
    // 0x3efac0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3efac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3efac4:
    // 0x3efac4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3efac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3efac8:
    // 0x3efac8: 0xc0fbf58  jal         func_3EFD60
label_3efacc:
    if (ctx->pc == 0x3EFACCu) {
        ctx->pc = 0x3EFACCu;
            // 0x3efacc: 0xae800128  sw          $zero, 0x128($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 0));
        ctx->pc = 0x3EFAD0u;
        goto label_3efad0;
    }
    ctx->pc = 0x3EFAC8u;
    SET_GPR_U32(ctx, 31, 0x3EFAD0u);
    ctx->pc = 0x3EFACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFAC8u;
            // 0x3efacc: 0xae800128  sw          $zero, 0x128($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EFD60u;
    if (runtime->hasFunction(0x3EFD60u)) {
        auto targetFn = runtime->lookupFunction(0x3EFD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFAD0u; }
        if (ctx->pc != 0x3EFAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EFD60_0x3efd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFAD0u; }
        if (ctx->pc != 0x3EFAD0u) { return; }
    }
    ctx->pc = 0x3EFAD0u;
label_3efad0:
    // 0x3efad0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_3efad4:
    if (ctx->pc == 0x3EFAD4u) {
        ctx->pc = 0x3EFAD8u;
        goto label_3efad8;
    }
    ctx->pc = 0x3EFAD0u;
    {
        const bool branch_taken_0x3efad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efad0) {
            ctx->pc = 0x3EFBC8u;
            goto label_3efbc8;
        }
    }
    ctx->pc = 0x3EFAD8u;
label_3efad8:
    // 0x3efad8: 0xc6800120  lwc1        $f0, 0x120($s4)
    ctx->pc = 0x3efad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3efadc:
    // 0x3efadc: 0xc0775b8  jal         func_1DD6E0
label_3efae0:
    if (ctx->pc == 0x3EFAE0u) {
        ctx->pc = 0x3EFAE0u;
            // 0x3efae0: 0xe6800124  swc1        $f0, 0x124($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 292), bits); }
        ctx->pc = 0x3EFAE4u;
        goto label_3efae4;
    }
    ctx->pc = 0x3EFADCu;
    SET_GPR_U32(ctx, 31, 0x3EFAE4u);
    ctx->pc = 0x3EFAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFADCu;
            // 0x3efae0: 0xe6800124  swc1        $f0, 0x124($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 292), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFAE4u; }
        if (ctx->pc != 0x3EFAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFAE4u; }
        if (ctx->pc != 0x3EFAE4u) { return; }
    }
    ctx->pc = 0x3EFAE4u;
label_3efae4:
    // 0x3efae4: 0xc0775b4  jal         func_1DD6D0
label_3efae8:
    if (ctx->pc == 0x3EFAE8u) {
        ctx->pc = 0x3EFAE8u;
            // 0x3efae8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3EFAECu;
        goto label_3efaec;
    }
    ctx->pc = 0x3EFAE4u;
    SET_GPR_U32(ctx, 31, 0x3EFAECu);
    ctx->pc = 0x3EFAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFAE4u;
            // 0x3efae8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFAECu; }
        if (ctx->pc != 0x3EFAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFAECu; }
        if (ctx->pc != 0x3EFAECu) { return; }
    }
    ctx->pc = 0x3EFAECu;
label_3efaec:
    // 0x3efaec: 0xc6820128  lwc1        $f2, 0x128($s4)
    ctx->pc = 0x3efaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3efaf0:
    // 0x3efaf0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3efaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_3efaf4:
    // 0x3efaf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3efaf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3efaf8:
    // 0x3efaf8: 0x0  nop
    ctx->pc = 0x3efaf8u;
    // NOP
label_3efafc:
    // 0x3efafc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3efafcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3efb00:
    // 0x3efb00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3efb00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3efb04:
    // 0x3efb04: 0x45010030  bc1t        . + 4 + (0x30 << 2)
label_3efb08:
    if (ctx->pc == 0x3EFB08u) {
        ctx->pc = 0x3EFB08u;
            // 0x3efb08: 0xe6800128  swc1        $f0, 0x128($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 296), bits); }
        ctx->pc = 0x3EFB0Cu;
        goto label_3efb0c;
    }
    ctx->pc = 0x3EFB04u;
    {
        const bool branch_taken_0x3efb04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EFB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFB04u;
            // 0x3efb08: 0xe6800128  swc1        $f0, 0x128($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efb04) {
            ctx->pc = 0x3EFBC8u;
            goto label_3efbc8;
        }
    }
    ctx->pc = 0x3EFB0Cu;
label_3efb0c:
    // 0x3efb0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3efb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3efb10:
    // 0x3efb10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3efb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3efb14:
    // 0x3efb14: 0xc0fbf58  jal         func_3EFD60
label_3efb18:
    if (ctx->pc == 0x3EFB18u) {
        ctx->pc = 0x3EFB18u;
            // 0x3efb18: 0xae800128  sw          $zero, 0x128($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 0));
        ctx->pc = 0x3EFB1Cu;
        goto label_3efb1c;
    }
    ctx->pc = 0x3EFB14u;
    SET_GPR_U32(ctx, 31, 0x3EFB1Cu);
    ctx->pc = 0x3EFB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFB14u;
            // 0x3efb18: 0xae800128  sw          $zero, 0x128($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EFD60u;
    if (runtime->hasFunction(0x3EFD60u)) {
        auto targetFn = runtime->lookupFunction(0x3EFD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFB1Cu; }
        if (ctx->pc != 0x3EFB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EFD60_0x3efd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFB1Cu; }
        if (ctx->pc != 0x3EFB1Cu) { return; }
    }
    ctx->pc = 0x3EFB1Cu;
label_3efb1c:
    // 0x3efb1c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_3efb20:
    if (ctx->pc == 0x3EFB20u) {
        ctx->pc = 0x3EFB24u;
        goto label_3efb24;
    }
    ctx->pc = 0x3EFB1Cu;
    {
        const bool branch_taken_0x3efb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efb1c) {
            ctx->pc = 0x3EFBC8u;
            goto label_3efbc8;
        }
    }
    ctx->pc = 0x3EFB24u;
label_3efb24:
    // 0x3efb24: 0x0  nop
    ctx->pc = 0x3efb24u;
    // NOP
label_3efb28:
    // 0x3efb28: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x3efb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_3efb2c:
    // 0x3efb2c: 0xc6820130  lwc1        $f2, 0x130($s4)
    ctx->pc = 0x3efb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3efb30:
    // 0x3efb30: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3efb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3efb34:
    // 0x3efb34: 0xc6810120  lwc1        $f1, 0x120($s4)
    ctx->pc = 0x3efb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3efb38:
    // 0x3efb38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3efb38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3efb3c:
    // 0x3efb3c: 0x0  nop
    ctx->pc = 0x3efb3cu;
    // NOP
label_3efb40:
    // 0x3efb40: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3efb40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3efb44:
    // 0x3efb44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3efb44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3efb48:
    // 0x3efb48: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3efb4c:
    if (ctx->pc == 0x3EFB4Cu) {
        ctx->pc = 0x3EFB4Cu;
            // 0x3efb4c: 0xe6810120  swc1        $f1, 0x120($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 288), bits); }
        ctx->pc = 0x3EFB50u;
        goto label_3efb50;
    }
    ctx->pc = 0x3EFB48u;
    {
        const bool branch_taken_0x3efb48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EFB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFB48u;
            // 0x3efb4c: 0xe6810120  swc1        $f1, 0x120($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efb48) {
            ctx->pc = 0x3EFB58u;
            goto label_3efb58;
        }
    }
    ctx->pc = 0x3EFB50u;
label_3efb50:
    // 0x3efb50: 0x10000003  b           . + 4 + (0x3 << 2)
label_3efb54:
    if (ctx->pc == 0x3EFB54u) {
        ctx->pc = 0x3EFB54u;
            // 0x3efb54: 0xe6800124  swc1        $f0, 0x124($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 292), bits); }
        ctx->pc = 0x3EFB58u;
        goto label_3efb58;
    }
    ctx->pc = 0x3EFB50u;
    {
        const bool branch_taken_0x3efb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFB50u;
            // 0x3efb54: 0xe6800124  swc1        $f0, 0x124($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efb50) {
            ctx->pc = 0x3EFB60u;
            goto label_3efb60;
        }
    }
    ctx->pc = 0x3EFB58u;
label_3efb58:
    // 0x3efb58: 0xe6810124  swc1        $f1, 0x124($s4)
    ctx->pc = 0x3efb58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 292), bits); }
label_3efb5c:
    // 0x3efb5c: 0x0  nop
    ctx->pc = 0x3efb5cu;
    // NOP
label_3efb60:
    // 0x3efb60: 0xc0775b8  jal         func_1DD6E0
label_3efb64:
    if (ctx->pc == 0x3EFB64u) {
        ctx->pc = 0x3EFB68u;
        goto label_3efb68;
    }
    ctx->pc = 0x3EFB60u;
    SET_GPR_U32(ctx, 31, 0x3EFB68u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFB68u; }
        if (ctx->pc != 0x3EFB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFB68u; }
        if (ctx->pc != 0x3EFB68u) { return; }
    }
    ctx->pc = 0x3EFB68u;
label_3efb68:
    // 0x3efb68: 0xc0775b4  jal         func_1DD6D0
label_3efb6c:
    if (ctx->pc == 0x3EFB6Cu) {
        ctx->pc = 0x3EFB6Cu;
            // 0x3efb6c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3EFB70u;
        goto label_3efb70;
    }
    ctx->pc = 0x3EFB68u;
    SET_GPR_U32(ctx, 31, 0x3EFB70u);
    ctx->pc = 0x3EFB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFB68u;
            // 0x3efb6c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFB70u; }
        if (ctx->pc != 0x3EFB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFB70u; }
        if (ctx->pc != 0x3EFB70u) { return; }
    }
    ctx->pc = 0x3EFB70u;
label_3efb70:
    // 0x3efb70: 0xc6820128  lwc1        $f2, 0x128($s4)
    ctx->pc = 0x3efb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3efb74:
    // 0x3efb74: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3efb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3efb78:
    // 0x3efb78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3efb78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3efb7c:
    // 0x3efb7c: 0x0  nop
    ctx->pc = 0x3efb7cu;
    // NOP
label_3efb80:
    // 0x3efb80: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3efb80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3efb84:
    // 0x3efb84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3efb84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3efb88:
    // 0x3efb88: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_3efb8c:
    if (ctx->pc == 0x3EFB8Cu) {
        ctx->pc = 0x3EFB8Cu;
            // 0x3efb8c: 0xe6800128  swc1        $f0, 0x128($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 296), bits); }
        ctx->pc = 0x3EFB90u;
        goto label_3efb90;
    }
    ctx->pc = 0x3EFB88u;
    {
        const bool branch_taken_0x3efb88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EFB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFB88u;
            // 0x3efb8c: 0xe6800128  swc1        $f0, 0x128($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efb88) {
            ctx->pc = 0x3EFBC8u;
            goto label_3efbc8;
        }
    }
    ctx->pc = 0x3EFB90u;
label_3efb90:
    // 0x3efb90: 0xae800128  sw          $zero, 0x128($s4)
    ctx->pc = 0x3efb90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 0));
label_3efb94:
    // 0x3efb94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3efb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3efb98:
    // 0x3efb98: 0xae800124  sw          $zero, 0x124($s4)
    ctx->pc = 0x3efb98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 0));
label_3efb9c:
    // 0x3efb9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3efb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3efba0:
    // 0x3efba0: 0xc0fbf58  jal         func_3EFD60
label_3efba4:
    if (ctx->pc == 0x3EFBA4u) {
        ctx->pc = 0x3EFBA4u;
            // 0x3efba4: 0xae800120  sw          $zero, 0x120($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 0));
        ctx->pc = 0x3EFBA8u;
        goto label_3efba8;
    }
    ctx->pc = 0x3EFBA0u;
    SET_GPR_U32(ctx, 31, 0x3EFBA8u);
    ctx->pc = 0x3EFBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFBA0u;
            // 0x3efba4: 0xae800120  sw          $zero, 0x120($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EFD60u;
    if (runtime->hasFunction(0x3EFD60u)) {
        auto targetFn = runtime->lookupFunction(0x3EFD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFBA8u; }
        if (ctx->pc != 0x3EFBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EFD60_0x3efd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFBA8u; }
        if (ctx->pc != 0x3EFBA8u) { return; }
    }
    ctx->pc = 0x3EFBA8u;
label_3efba8:
    // 0x3efba8: 0x8e840148  lw          $a0, 0x148($s4)
    ctx->pc = 0x3efba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
label_3efbac:
    // 0x3efbac: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3efbb0:
    if (ctx->pc == 0x3EFBB0u) {
        ctx->pc = 0x3EFBB4u;
        goto label_3efbb4;
    }
    ctx->pc = 0x3EFBACu;
    {
        const bool branch_taken_0x3efbac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efbac) {
            ctx->pc = 0x3EFBC8u;
            goto label_3efbc8;
        }
    }
    ctx->pc = 0x3EFBB4u;
label_3efbb4:
    // 0x3efbb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3efbb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3efbb8:
    // 0x3efbb8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3efbb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3efbbc:
    // 0x3efbbc: 0x320f809  jalr        $t9
label_3efbc0:
    if (ctx->pc == 0x3EFBC0u) {
        ctx->pc = 0x3EFBC0u;
            // 0x3efbc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EFBC4u;
        goto label_3efbc4;
    }
    ctx->pc = 0x3EFBBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EFBC4u);
        ctx->pc = 0x3EFBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFBBCu;
            // 0x3efbc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EFBC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EFBC4u; }
            if (ctx->pc != 0x3EFBC4u) { return; }
        }
        }
    }
    ctx->pc = 0x3EFBC4u;
label_3efbc4:
    // 0x3efbc4: 0xae800148  sw          $zero, 0x148($s4)
    ctx->pc = 0x3efbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 0));
label_3efbc8:
    // 0x3efbc8: 0xae900134  sw          $s0, 0x134($s4)
    ctx->pc = 0x3efbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 16));
label_3efbcc:
    // 0x3efbcc: 0x0  nop
    ctx->pc = 0x3efbccu;
    // NOP
label_3efbd0:
    // 0x3efbd0: 0xc0d4108  jal         func_350420
label_3efbd4:
    if (ctx->pc == 0x3EFBD4u) {
        ctx->pc = 0x3EFBD8u;
        goto label_3efbd8;
    }
    ctx->pc = 0x3EFBD0u;
    SET_GPR_U32(ctx, 31, 0x3EFBD8u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFBD8u; }
        if (ctx->pc != 0x3EFBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFBD8u; }
        if (ctx->pc != 0x3EFBD8u) { return; }
    }
    ctx->pc = 0x3EFBD8u;
label_3efbd8:
    // 0x3efbd8: 0xc0b36b4  jal         func_2CDAD0
label_3efbdc:
    if (ctx->pc == 0x3EFBDCu) {
        ctx->pc = 0x3EFBDCu;
            // 0x3efbdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EFBE0u;
        goto label_3efbe0;
    }
    ctx->pc = 0x3EFBD8u;
    SET_GPR_U32(ctx, 31, 0x3EFBE0u);
    ctx->pc = 0x3EFBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFBD8u;
            // 0x3efbdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFBE0u; }
        if (ctx->pc != 0x3EFBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFBE0u; }
        if (ctx->pc != 0x3EFBE0u) { return; }
    }
    ctx->pc = 0x3EFBE0u;
label_3efbe0:
    // 0x3efbe0: 0xc0b9c64  jal         func_2E7190
label_3efbe4:
    if (ctx->pc == 0x3EFBE4u) {
        ctx->pc = 0x3EFBE4u;
            // 0x3efbe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EFBE8u;
        goto label_3efbe8;
    }
    ctx->pc = 0x3EFBE0u;
    SET_GPR_U32(ctx, 31, 0x3EFBE8u);
    ctx->pc = 0x3EFBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFBE0u;
            // 0x3efbe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFBE8u; }
        if (ctx->pc != 0x3EFBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFBE8u; }
        if (ctx->pc != 0x3EFBE8u) { return; }
    }
    ctx->pc = 0x3EFBE8u;
label_3efbe8:
    // 0x3efbe8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3efbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3efbec:
    // 0x3efbec: 0xc0d4104  jal         func_350410
label_3efbf0:
    if (ctx->pc == 0x3EFBF0u) {
        ctx->pc = 0x3EFBF0u;
            // 0x3efbf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EFBF4u;
        goto label_3efbf4;
    }
    ctx->pc = 0x3EFBECu;
    SET_GPR_U32(ctx, 31, 0x3EFBF4u);
    ctx->pc = 0x3EFBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFBECu;
            // 0x3efbf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFBF4u; }
        if (ctx->pc != 0x3EFBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFBF4u; }
        if (ctx->pc != 0x3EFBF4u) { return; }
    }
    ctx->pc = 0x3EFBF4u;
label_3efbf4:
    // 0x3efbf4: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x3efbf4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3efbf8:
    // 0x3efbf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3efbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3efbfc:
    // 0x3efbfc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3efbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3efc00:
    // 0x3efc00: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x3efc00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3efc04:
    // 0x3efc04: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3efc04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3efc08:
    // 0x3efc08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3efc08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3efc0c:
    // 0x3efc0c: 0xc0d40ac  jal         func_3502B0
label_3efc10:
    if (ctx->pc == 0x3EFC10u) {
        ctx->pc = 0x3EFC10u;
            // 0x3efc10: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3EFC14u;
        goto label_3efc14;
    }
    ctx->pc = 0x3EFC0Cu;
    SET_GPR_U32(ctx, 31, 0x3EFC14u);
    ctx->pc = 0x3EFC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFC0Cu;
            // 0x3efc10: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFC14u; }
        if (ctx->pc != 0x3EFC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFC14u; }
        if (ctx->pc != 0x3EFC14u) { return; }
    }
    ctx->pc = 0x3EFC14u;
label_3efc14:
    // 0x3efc14: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3efc14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3efc18:
    // 0x3efc18: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_3efc1c:
    if (ctx->pc == 0x3EFC1Cu) {
        ctx->pc = 0x3EFC1Cu;
            // 0x3efc1c: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x3EFC20u;
        goto label_3efc20;
    }
    ctx->pc = 0x3EFC18u;
    {
        const bool branch_taken_0x3efc18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFC18u;
            // 0x3efc1c: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efc18) {
            ctx->pc = 0x3EFCA8u;
            goto label_3efca8;
        }
    }
    ctx->pc = 0x3EFC20u;
label_3efc20:
    // 0x3efc20: 0xc6800124  lwc1        $f0, 0x124($s4)
    ctx->pc = 0x3efc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3efc24:
    // 0x3efc24: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x3efc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_3efc28:
    // 0x3efc28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3efc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3efc2c:
    // 0x3efc2c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x3efc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3efc30:
    // 0x3efc30: 0x27a60188  addiu       $a2, $sp, 0x188
    ctx->pc = 0x3efc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_3efc34:
    // 0x3efc34: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x3efc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
label_3efc38:
    // 0x3efc38: 0xc6800120  lwc1        $f0, 0x120($s4)
    ctx->pc = 0x3efc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3efc3c:
    // 0x3efc3c: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x3efc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_3efc40:
    // 0x3efc40: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x3efc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
label_3efc44:
    // 0x3efc44: 0xc6800124  lwc1        $f0, 0x124($s4)
    ctx->pc = 0x3efc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3efc48:
    // 0x3efc48: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x3efc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_3efc4c:
    // 0x3efc4c: 0xc0fbf5c  jal         func_3EFD70
label_3efc50:
    if (ctx->pc == 0x3EFC50u) {
        ctx->pc = 0x3EFC50u;
            // 0x3efc50: 0xe44000bc  swc1        $f0, 0xBC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
        ctx->pc = 0x3EFC54u;
        goto label_3efc54;
    }
    ctx->pc = 0x3EFC4Cu;
    SET_GPR_U32(ctx, 31, 0x3EFC54u);
    ctx->pc = 0x3EFC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFC4Cu;
            // 0x3efc50: 0xe44000bc  swc1        $f0, 0xBC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EFD70u;
    if (runtime->hasFunction(0x3EFD70u)) {
        auto targetFn = runtime->lookupFunction(0x3EFD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFC54u; }
        if (ctx->pc != 0x3EFC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EFD70_0x3efd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFC54u; }
        if (ctx->pc != 0x3EFC54u) { return; }
    }
    ctx->pc = 0x3EFC54u;
label_3efc54:
    // 0x3efc54: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x3efc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_3efc58:
    // 0x3efc58: 0x8ea50028  lw          $a1, 0x28($s5)
    ctx->pc = 0x3efc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_3efc5c:
    // 0x3efc5c: 0xc04e4a4  jal         func_139290
label_3efc60:
    if (ctx->pc == 0x3EFC60u) {
        ctx->pc = 0x3EFC60u;
            // 0x3efc60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EFC64u;
        goto label_3efc64;
    }
    ctx->pc = 0x3EFC5Cu;
    SET_GPR_U32(ctx, 31, 0x3EFC64u);
    ctx->pc = 0x3EFC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFC5Cu;
            // 0x3efc60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFC64u; }
        if (ctx->pc != 0x3EFC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFC64u; }
        if (ctx->pc != 0x3EFC64u) { return; }
    }
    ctx->pc = 0x3EFC64u;
label_3efc64:
    // 0x3efc64: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x3efc64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3efc68:
    // 0x3efc68: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3efc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3efc6c:
    // 0x3efc6c: 0xc04cd60  jal         func_133580
label_3efc70:
    if (ctx->pc == 0x3EFC70u) {
        ctx->pc = 0x3EFC70u;
            // 0x3efc70: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x3EFC74u;
        goto label_3efc74;
    }
    ctx->pc = 0x3EFC6Cu;
    SET_GPR_U32(ctx, 31, 0x3EFC74u);
    ctx->pc = 0x3EFC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFC6Cu;
            // 0x3efc70: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFC74u; }
        if (ctx->pc != 0x3EFC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFC74u; }
        if (ctx->pc != 0x3EFC74u) { return; }
    }
    ctx->pc = 0x3EFC74u;
label_3efc74:
    // 0x3efc74: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3efc74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3efc78:
    // 0x3efc78: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3efc78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3efc7c:
    // 0x3efc7c: 0x320f809  jalr        $t9
label_3efc80:
    if (ctx->pc == 0x3EFC80u) {
        ctx->pc = 0x3EFC80u;
            // 0x3efc80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EFC84u;
        goto label_3efc84;
    }
    ctx->pc = 0x3EFC7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EFC84u);
        ctx->pc = 0x3EFC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFC7Cu;
            // 0x3efc80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EFC84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EFC84u; }
            if (ctx->pc != 0x3EFC84u) { return; }
        }
        }
    }
    ctx->pc = 0x3EFC84u;
label_3efc84:
    // 0x3efc84: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x3efc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_3efc88:
    // 0x3efc88: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3efc88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3efc8c:
    // 0x3efc8c: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x3efc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_3efc90:
    // 0x3efc90: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3efc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3efc94:
    // 0x3efc94: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x3efc94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3efc98:
    // 0x3efc98: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x3efc98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_3efc9c:
    // 0x3efc9c: 0xc04cfcc  jal         func_133F30
label_3efca0:
    if (ctx->pc == 0x3EFCA0u) {
        ctx->pc = 0x3EFCA0u;
            // 0x3efca0: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EFCA4u;
        goto label_3efca4;
    }
    ctx->pc = 0x3EFC9Cu;
    SET_GPR_U32(ctx, 31, 0x3EFCA4u);
    ctx->pc = 0x3EFCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFC9Cu;
            // 0x3efca0: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFCA4u; }
        if (ctx->pc != 0x3EFCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFCA4u; }
        if (ctx->pc != 0x3EFCA4u) { return; }
    }
    ctx->pc = 0x3EFCA4u;
label_3efca4:
    // 0x3efca4: 0x0  nop
    ctx->pc = 0x3efca4u;
    // NOP
label_3efca8:
    // 0x3efca8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3efca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3efcac:
    // 0x3efcac: 0x25e182b  sltu        $v1, $s2, $fp
    ctx->pc = 0x3efcacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3efcb0:
    // 0x3efcb0: 0x1460ff26  bnez        $v1, . + 4 + (-0xDA << 2)
label_3efcb4:
    if (ctx->pc == 0x3EFCB4u) {
        ctx->pc = 0x3EFCB4u;
            // 0x3efcb4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3EFCB8u;
        goto label_3efcb8;
    }
    ctx->pc = 0x3EFCB0u;
    {
        const bool branch_taken_0x3efcb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EFCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFCB0u;
            // 0x3efcb4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efcb0) {
            ctx->pc = 0x3EF94Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ef94c;
        }
    }
    ctx->pc = 0x3EFCB8u;
label_3efcb8:
    // 0x3efcb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3efcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3efcbc:
    // 0x3efcbc: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x3efcbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3efcc0:
    // 0x3efcc0: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_3efcc4:
    if (ctx->pc == 0x3EFCC4u) {
        ctx->pc = 0x3EFCC4u;
            // 0x3efcc4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x3EFCC8u;
        goto label_3efcc8;
    }
    ctx->pc = 0x3EFCC0u;
    {
        const bool branch_taken_0x3efcc0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3EFCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFCC0u;
            // 0x3efcc4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efcc0) {
            ctx->pc = 0x3EFCE4u;
            goto label_3efce4;
        }
    }
    ctx->pc = 0x3EFCC8u;
label_3efcc8:
    // 0x3efcc8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3efcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3efccc:
    // 0x3efccc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3efcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3efcd0:
    // 0x3efcd0: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x3efcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_3efcd4:
    // 0x3efcd4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3efcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3efcd8:
    // 0x3efcd8: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x3efcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_3efcdc:
    // 0x3efcdc: 0xc055990  jal         func_156640
label_3efce0:
    if (ctx->pc == 0x3EFCE0u) {
        ctx->pc = 0x3EFCE0u;
            // 0x3efce0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EFCE4u;
        goto label_3efce4;
    }
    ctx->pc = 0x3EFCDCu;
    SET_GPR_U32(ctx, 31, 0x3EFCE4u);
    ctx->pc = 0x3EFCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFCDCu;
            // 0x3efce0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFCE4u; }
        if (ctx->pc != 0x3EFCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EFCE4u; }
        if (ctx->pc != 0x3EFCE4u) { return; }
    }
    ctx->pc = 0x3EFCE4u;
label_3efce4:
    // 0x3efce4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3efce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3efce8:
    // 0x3efce8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3efce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3efcec:
    // 0x3efcec: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3efcecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3efcf0:
    // 0x3efcf0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3efcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3efcf4:
    // 0x3efcf4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3efcf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3efcf8:
    // 0x3efcf8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3efcf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3efcfc:
    // 0x3efcfc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3efcfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3efd00:
    // 0x3efd00: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3efd00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3efd04:
    // 0x3efd04: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3efd04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3efd08:
    // 0x3efd08: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3efd08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3efd0c:
    // 0x3efd0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3efd0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3efd10:
    // 0x3efd10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3efd10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3efd14:
    // 0x3efd14: 0x3e00008  jr          $ra
label_3efd18:
    if (ctx->pc == 0x3EFD18u) {
        ctx->pc = 0x3EFD18u;
            // 0x3efd18: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x3EFD1Cu;
        goto label_3efd1c;
    }
    ctx->pc = 0x3EFD14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EFD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFD14u;
            // 0x3efd18: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EFD1Cu;
label_3efd1c:
    // 0x3efd1c: 0x0  nop
    ctx->pc = 0x3efd1cu;
    // NOP
}
