#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CF550
// Address: 0x4cf550 - 0x4cfff0
void sub_004CF550_0x4cf550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CF550_0x4cf550");
#endif

    switch (ctx->pc) {
        case 0x4cf550u: goto label_4cf550;
        case 0x4cf554u: goto label_4cf554;
        case 0x4cf558u: goto label_4cf558;
        case 0x4cf55cu: goto label_4cf55c;
        case 0x4cf560u: goto label_4cf560;
        case 0x4cf564u: goto label_4cf564;
        case 0x4cf568u: goto label_4cf568;
        case 0x4cf56cu: goto label_4cf56c;
        case 0x4cf570u: goto label_4cf570;
        case 0x4cf574u: goto label_4cf574;
        case 0x4cf578u: goto label_4cf578;
        case 0x4cf57cu: goto label_4cf57c;
        case 0x4cf580u: goto label_4cf580;
        case 0x4cf584u: goto label_4cf584;
        case 0x4cf588u: goto label_4cf588;
        case 0x4cf58cu: goto label_4cf58c;
        case 0x4cf590u: goto label_4cf590;
        case 0x4cf594u: goto label_4cf594;
        case 0x4cf598u: goto label_4cf598;
        case 0x4cf59cu: goto label_4cf59c;
        case 0x4cf5a0u: goto label_4cf5a0;
        case 0x4cf5a4u: goto label_4cf5a4;
        case 0x4cf5a8u: goto label_4cf5a8;
        case 0x4cf5acu: goto label_4cf5ac;
        case 0x4cf5b0u: goto label_4cf5b0;
        case 0x4cf5b4u: goto label_4cf5b4;
        case 0x4cf5b8u: goto label_4cf5b8;
        case 0x4cf5bcu: goto label_4cf5bc;
        case 0x4cf5c0u: goto label_4cf5c0;
        case 0x4cf5c4u: goto label_4cf5c4;
        case 0x4cf5c8u: goto label_4cf5c8;
        case 0x4cf5ccu: goto label_4cf5cc;
        case 0x4cf5d0u: goto label_4cf5d0;
        case 0x4cf5d4u: goto label_4cf5d4;
        case 0x4cf5d8u: goto label_4cf5d8;
        case 0x4cf5dcu: goto label_4cf5dc;
        case 0x4cf5e0u: goto label_4cf5e0;
        case 0x4cf5e4u: goto label_4cf5e4;
        case 0x4cf5e8u: goto label_4cf5e8;
        case 0x4cf5ecu: goto label_4cf5ec;
        case 0x4cf5f0u: goto label_4cf5f0;
        case 0x4cf5f4u: goto label_4cf5f4;
        case 0x4cf5f8u: goto label_4cf5f8;
        case 0x4cf5fcu: goto label_4cf5fc;
        case 0x4cf600u: goto label_4cf600;
        case 0x4cf604u: goto label_4cf604;
        case 0x4cf608u: goto label_4cf608;
        case 0x4cf60cu: goto label_4cf60c;
        case 0x4cf610u: goto label_4cf610;
        case 0x4cf614u: goto label_4cf614;
        case 0x4cf618u: goto label_4cf618;
        case 0x4cf61cu: goto label_4cf61c;
        case 0x4cf620u: goto label_4cf620;
        case 0x4cf624u: goto label_4cf624;
        case 0x4cf628u: goto label_4cf628;
        case 0x4cf62cu: goto label_4cf62c;
        case 0x4cf630u: goto label_4cf630;
        case 0x4cf634u: goto label_4cf634;
        case 0x4cf638u: goto label_4cf638;
        case 0x4cf63cu: goto label_4cf63c;
        case 0x4cf640u: goto label_4cf640;
        case 0x4cf644u: goto label_4cf644;
        case 0x4cf648u: goto label_4cf648;
        case 0x4cf64cu: goto label_4cf64c;
        case 0x4cf650u: goto label_4cf650;
        case 0x4cf654u: goto label_4cf654;
        case 0x4cf658u: goto label_4cf658;
        case 0x4cf65cu: goto label_4cf65c;
        case 0x4cf660u: goto label_4cf660;
        case 0x4cf664u: goto label_4cf664;
        case 0x4cf668u: goto label_4cf668;
        case 0x4cf66cu: goto label_4cf66c;
        case 0x4cf670u: goto label_4cf670;
        case 0x4cf674u: goto label_4cf674;
        case 0x4cf678u: goto label_4cf678;
        case 0x4cf67cu: goto label_4cf67c;
        case 0x4cf680u: goto label_4cf680;
        case 0x4cf684u: goto label_4cf684;
        case 0x4cf688u: goto label_4cf688;
        case 0x4cf68cu: goto label_4cf68c;
        case 0x4cf690u: goto label_4cf690;
        case 0x4cf694u: goto label_4cf694;
        case 0x4cf698u: goto label_4cf698;
        case 0x4cf69cu: goto label_4cf69c;
        case 0x4cf6a0u: goto label_4cf6a0;
        case 0x4cf6a4u: goto label_4cf6a4;
        case 0x4cf6a8u: goto label_4cf6a8;
        case 0x4cf6acu: goto label_4cf6ac;
        case 0x4cf6b0u: goto label_4cf6b0;
        case 0x4cf6b4u: goto label_4cf6b4;
        case 0x4cf6b8u: goto label_4cf6b8;
        case 0x4cf6bcu: goto label_4cf6bc;
        case 0x4cf6c0u: goto label_4cf6c0;
        case 0x4cf6c4u: goto label_4cf6c4;
        case 0x4cf6c8u: goto label_4cf6c8;
        case 0x4cf6ccu: goto label_4cf6cc;
        case 0x4cf6d0u: goto label_4cf6d0;
        case 0x4cf6d4u: goto label_4cf6d4;
        case 0x4cf6d8u: goto label_4cf6d8;
        case 0x4cf6dcu: goto label_4cf6dc;
        case 0x4cf6e0u: goto label_4cf6e0;
        case 0x4cf6e4u: goto label_4cf6e4;
        case 0x4cf6e8u: goto label_4cf6e8;
        case 0x4cf6ecu: goto label_4cf6ec;
        case 0x4cf6f0u: goto label_4cf6f0;
        case 0x4cf6f4u: goto label_4cf6f4;
        case 0x4cf6f8u: goto label_4cf6f8;
        case 0x4cf6fcu: goto label_4cf6fc;
        case 0x4cf700u: goto label_4cf700;
        case 0x4cf704u: goto label_4cf704;
        case 0x4cf708u: goto label_4cf708;
        case 0x4cf70cu: goto label_4cf70c;
        case 0x4cf710u: goto label_4cf710;
        case 0x4cf714u: goto label_4cf714;
        case 0x4cf718u: goto label_4cf718;
        case 0x4cf71cu: goto label_4cf71c;
        case 0x4cf720u: goto label_4cf720;
        case 0x4cf724u: goto label_4cf724;
        case 0x4cf728u: goto label_4cf728;
        case 0x4cf72cu: goto label_4cf72c;
        case 0x4cf730u: goto label_4cf730;
        case 0x4cf734u: goto label_4cf734;
        case 0x4cf738u: goto label_4cf738;
        case 0x4cf73cu: goto label_4cf73c;
        case 0x4cf740u: goto label_4cf740;
        case 0x4cf744u: goto label_4cf744;
        case 0x4cf748u: goto label_4cf748;
        case 0x4cf74cu: goto label_4cf74c;
        case 0x4cf750u: goto label_4cf750;
        case 0x4cf754u: goto label_4cf754;
        case 0x4cf758u: goto label_4cf758;
        case 0x4cf75cu: goto label_4cf75c;
        case 0x4cf760u: goto label_4cf760;
        case 0x4cf764u: goto label_4cf764;
        case 0x4cf768u: goto label_4cf768;
        case 0x4cf76cu: goto label_4cf76c;
        case 0x4cf770u: goto label_4cf770;
        case 0x4cf774u: goto label_4cf774;
        case 0x4cf778u: goto label_4cf778;
        case 0x4cf77cu: goto label_4cf77c;
        case 0x4cf780u: goto label_4cf780;
        case 0x4cf784u: goto label_4cf784;
        case 0x4cf788u: goto label_4cf788;
        case 0x4cf78cu: goto label_4cf78c;
        case 0x4cf790u: goto label_4cf790;
        case 0x4cf794u: goto label_4cf794;
        case 0x4cf798u: goto label_4cf798;
        case 0x4cf79cu: goto label_4cf79c;
        case 0x4cf7a0u: goto label_4cf7a0;
        case 0x4cf7a4u: goto label_4cf7a4;
        case 0x4cf7a8u: goto label_4cf7a8;
        case 0x4cf7acu: goto label_4cf7ac;
        case 0x4cf7b0u: goto label_4cf7b0;
        case 0x4cf7b4u: goto label_4cf7b4;
        case 0x4cf7b8u: goto label_4cf7b8;
        case 0x4cf7bcu: goto label_4cf7bc;
        case 0x4cf7c0u: goto label_4cf7c0;
        case 0x4cf7c4u: goto label_4cf7c4;
        case 0x4cf7c8u: goto label_4cf7c8;
        case 0x4cf7ccu: goto label_4cf7cc;
        case 0x4cf7d0u: goto label_4cf7d0;
        case 0x4cf7d4u: goto label_4cf7d4;
        case 0x4cf7d8u: goto label_4cf7d8;
        case 0x4cf7dcu: goto label_4cf7dc;
        case 0x4cf7e0u: goto label_4cf7e0;
        case 0x4cf7e4u: goto label_4cf7e4;
        case 0x4cf7e8u: goto label_4cf7e8;
        case 0x4cf7ecu: goto label_4cf7ec;
        case 0x4cf7f0u: goto label_4cf7f0;
        case 0x4cf7f4u: goto label_4cf7f4;
        case 0x4cf7f8u: goto label_4cf7f8;
        case 0x4cf7fcu: goto label_4cf7fc;
        case 0x4cf800u: goto label_4cf800;
        case 0x4cf804u: goto label_4cf804;
        case 0x4cf808u: goto label_4cf808;
        case 0x4cf80cu: goto label_4cf80c;
        case 0x4cf810u: goto label_4cf810;
        case 0x4cf814u: goto label_4cf814;
        case 0x4cf818u: goto label_4cf818;
        case 0x4cf81cu: goto label_4cf81c;
        case 0x4cf820u: goto label_4cf820;
        case 0x4cf824u: goto label_4cf824;
        case 0x4cf828u: goto label_4cf828;
        case 0x4cf82cu: goto label_4cf82c;
        case 0x4cf830u: goto label_4cf830;
        case 0x4cf834u: goto label_4cf834;
        case 0x4cf838u: goto label_4cf838;
        case 0x4cf83cu: goto label_4cf83c;
        case 0x4cf840u: goto label_4cf840;
        case 0x4cf844u: goto label_4cf844;
        case 0x4cf848u: goto label_4cf848;
        case 0x4cf84cu: goto label_4cf84c;
        case 0x4cf850u: goto label_4cf850;
        case 0x4cf854u: goto label_4cf854;
        case 0x4cf858u: goto label_4cf858;
        case 0x4cf85cu: goto label_4cf85c;
        case 0x4cf860u: goto label_4cf860;
        case 0x4cf864u: goto label_4cf864;
        case 0x4cf868u: goto label_4cf868;
        case 0x4cf86cu: goto label_4cf86c;
        case 0x4cf870u: goto label_4cf870;
        case 0x4cf874u: goto label_4cf874;
        case 0x4cf878u: goto label_4cf878;
        case 0x4cf87cu: goto label_4cf87c;
        case 0x4cf880u: goto label_4cf880;
        case 0x4cf884u: goto label_4cf884;
        case 0x4cf888u: goto label_4cf888;
        case 0x4cf88cu: goto label_4cf88c;
        case 0x4cf890u: goto label_4cf890;
        case 0x4cf894u: goto label_4cf894;
        case 0x4cf898u: goto label_4cf898;
        case 0x4cf89cu: goto label_4cf89c;
        case 0x4cf8a0u: goto label_4cf8a0;
        case 0x4cf8a4u: goto label_4cf8a4;
        case 0x4cf8a8u: goto label_4cf8a8;
        case 0x4cf8acu: goto label_4cf8ac;
        case 0x4cf8b0u: goto label_4cf8b0;
        case 0x4cf8b4u: goto label_4cf8b4;
        case 0x4cf8b8u: goto label_4cf8b8;
        case 0x4cf8bcu: goto label_4cf8bc;
        case 0x4cf8c0u: goto label_4cf8c0;
        case 0x4cf8c4u: goto label_4cf8c4;
        case 0x4cf8c8u: goto label_4cf8c8;
        case 0x4cf8ccu: goto label_4cf8cc;
        case 0x4cf8d0u: goto label_4cf8d0;
        case 0x4cf8d4u: goto label_4cf8d4;
        case 0x4cf8d8u: goto label_4cf8d8;
        case 0x4cf8dcu: goto label_4cf8dc;
        case 0x4cf8e0u: goto label_4cf8e0;
        case 0x4cf8e4u: goto label_4cf8e4;
        case 0x4cf8e8u: goto label_4cf8e8;
        case 0x4cf8ecu: goto label_4cf8ec;
        case 0x4cf8f0u: goto label_4cf8f0;
        case 0x4cf8f4u: goto label_4cf8f4;
        case 0x4cf8f8u: goto label_4cf8f8;
        case 0x4cf8fcu: goto label_4cf8fc;
        case 0x4cf900u: goto label_4cf900;
        case 0x4cf904u: goto label_4cf904;
        case 0x4cf908u: goto label_4cf908;
        case 0x4cf90cu: goto label_4cf90c;
        case 0x4cf910u: goto label_4cf910;
        case 0x4cf914u: goto label_4cf914;
        case 0x4cf918u: goto label_4cf918;
        case 0x4cf91cu: goto label_4cf91c;
        case 0x4cf920u: goto label_4cf920;
        case 0x4cf924u: goto label_4cf924;
        case 0x4cf928u: goto label_4cf928;
        case 0x4cf92cu: goto label_4cf92c;
        case 0x4cf930u: goto label_4cf930;
        case 0x4cf934u: goto label_4cf934;
        case 0x4cf938u: goto label_4cf938;
        case 0x4cf93cu: goto label_4cf93c;
        case 0x4cf940u: goto label_4cf940;
        case 0x4cf944u: goto label_4cf944;
        case 0x4cf948u: goto label_4cf948;
        case 0x4cf94cu: goto label_4cf94c;
        case 0x4cf950u: goto label_4cf950;
        case 0x4cf954u: goto label_4cf954;
        case 0x4cf958u: goto label_4cf958;
        case 0x4cf95cu: goto label_4cf95c;
        case 0x4cf960u: goto label_4cf960;
        case 0x4cf964u: goto label_4cf964;
        case 0x4cf968u: goto label_4cf968;
        case 0x4cf96cu: goto label_4cf96c;
        case 0x4cf970u: goto label_4cf970;
        case 0x4cf974u: goto label_4cf974;
        case 0x4cf978u: goto label_4cf978;
        case 0x4cf97cu: goto label_4cf97c;
        case 0x4cf980u: goto label_4cf980;
        case 0x4cf984u: goto label_4cf984;
        case 0x4cf988u: goto label_4cf988;
        case 0x4cf98cu: goto label_4cf98c;
        case 0x4cf990u: goto label_4cf990;
        case 0x4cf994u: goto label_4cf994;
        case 0x4cf998u: goto label_4cf998;
        case 0x4cf99cu: goto label_4cf99c;
        case 0x4cf9a0u: goto label_4cf9a0;
        case 0x4cf9a4u: goto label_4cf9a4;
        case 0x4cf9a8u: goto label_4cf9a8;
        case 0x4cf9acu: goto label_4cf9ac;
        case 0x4cf9b0u: goto label_4cf9b0;
        case 0x4cf9b4u: goto label_4cf9b4;
        case 0x4cf9b8u: goto label_4cf9b8;
        case 0x4cf9bcu: goto label_4cf9bc;
        case 0x4cf9c0u: goto label_4cf9c0;
        case 0x4cf9c4u: goto label_4cf9c4;
        case 0x4cf9c8u: goto label_4cf9c8;
        case 0x4cf9ccu: goto label_4cf9cc;
        case 0x4cf9d0u: goto label_4cf9d0;
        case 0x4cf9d4u: goto label_4cf9d4;
        case 0x4cf9d8u: goto label_4cf9d8;
        case 0x4cf9dcu: goto label_4cf9dc;
        case 0x4cf9e0u: goto label_4cf9e0;
        case 0x4cf9e4u: goto label_4cf9e4;
        case 0x4cf9e8u: goto label_4cf9e8;
        case 0x4cf9ecu: goto label_4cf9ec;
        case 0x4cf9f0u: goto label_4cf9f0;
        case 0x4cf9f4u: goto label_4cf9f4;
        case 0x4cf9f8u: goto label_4cf9f8;
        case 0x4cf9fcu: goto label_4cf9fc;
        case 0x4cfa00u: goto label_4cfa00;
        case 0x4cfa04u: goto label_4cfa04;
        case 0x4cfa08u: goto label_4cfa08;
        case 0x4cfa0cu: goto label_4cfa0c;
        case 0x4cfa10u: goto label_4cfa10;
        case 0x4cfa14u: goto label_4cfa14;
        case 0x4cfa18u: goto label_4cfa18;
        case 0x4cfa1cu: goto label_4cfa1c;
        case 0x4cfa20u: goto label_4cfa20;
        case 0x4cfa24u: goto label_4cfa24;
        case 0x4cfa28u: goto label_4cfa28;
        case 0x4cfa2cu: goto label_4cfa2c;
        case 0x4cfa30u: goto label_4cfa30;
        case 0x4cfa34u: goto label_4cfa34;
        case 0x4cfa38u: goto label_4cfa38;
        case 0x4cfa3cu: goto label_4cfa3c;
        case 0x4cfa40u: goto label_4cfa40;
        case 0x4cfa44u: goto label_4cfa44;
        case 0x4cfa48u: goto label_4cfa48;
        case 0x4cfa4cu: goto label_4cfa4c;
        case 0x4cfa50u: goto label_4cfa50;
        case 0x4cfa54u: goto label_4cfa54;
        case 0x4cfa58u: goto label_4cfa58;
        case 0x4cfa5cu: goto label_4cfa5c;
        case 0x4cfa60u: goto label_4cfa60;
        case 0x4cfa64u: goto label_4cfa64;
        case 0x4cfa68u: goto label_4cfa68;
        case 0x4cfa6cu: goto label_4cfa6c;
        case 0x4cfa70u: goto label_4cfa70;
        case 0x4cfa74u: goto label_4cfa74;
        case 0x4cfa78u: goto label_4cfa78;
        case 0x4cfa7cu: goto label_4cfa7c;
        case 0x4cfa80u: goto label_4cfa80;
        case 0x4cfa84u: goto label_4cfa84;
        case 0x4cfa88u: goto label_4cfa88;
        case 0x4cfa8cu: goto label_4cfa8c;
        case 0x4cfa90u: goto label_4cfa90;
        case 0x4cfa94u: goto label_4cfa94;
        case 0x4cfa98u: goto label_4cfa98;
        case 0x4cfa9cu: goto label_4cfa9c;
        case 0x4cfaa0u: goto label_4cfaa0;
        case 0x4cfaa4u: goto label_4cfaa4;
        case 0x4cfaa8u: goto label_4cfaa8;
        case 0x4cfaacu: goto label_4cfaac;
        case 0x4cfab0u: goto label_4cfab0;
        case 0x4cfab4u: goto label_4cfab4;
        case 0x4cfab8u: goto label_4cfab8;
        case 0x4cfabcu: goto label_4cfabc;
        case 0x4cfac0u: goto label_4cfac0;
        case 0x4cfac4u: goto label_4cfac4;
        case 0x4cfac8u: goto label_4cfac8;
        case 0x4cfaccu: goto label_4cfacc;
        case 0x4cfad0u: goto label_4cfad0;
        case 0x4cfad4u: goto label_4cfad4;
        case 0x4cfad8u: goto label_4cfad8;
        case 0x4cfadcu: goto label_4cfadc;
        case 0x4cfae0u: goto label_4cfae0;
        case 0x4cfae4u: goto label_4cfae4;
        case 0x4cfae8u: goto label_4cfae8;
        case 0x4cfaecu: goto label_4cfaec;
        case 0x4cfaf0u: goto label_4cfaf0;
        case 0x4cfaf4u: goto label_4cfaf4;
        case 0x4cfaf8u: goto label_4cfaf8;
        case 0x4cfafcu: goto label_4cfafc;
        case 0x4cfb00u: goto label_4cfb00;
        case 0x4cfb04u: goto label_4cfb04;
        case 0x4cfb08u: goto label_4cfb08;
        case 0x4cfb0cu: goto label_4cfb0c;
        case 0x4cfb10u: goto label_4cfb10;
        case 0x4cfb14u: goto label_4cfb14;
        case 0x4cfb18u: goto label_4cfb18;
        case 0x4cfb1cu: goto label_4cfb1c;
        case 0x4cfb20u: goto label_4cfb20;
        case 0x4cfb24u: goto label_4cfb24;
        case 0x4cfb28u: goto label_4cfb28;
        case 0x4cfb2cu: goto label_4cfb2c;
        case 0x4cfb30u: goto label_4cfb30;
        case 0x4cfb34u: goto label_4cfb34;
        case 0x4cfb38u: goto label_4cfb38;
        case 0x4cfb3cu: goto label_4cfb3c;
        case 0x4cfb40u: goto label_4cfb40;
        case 0x4cfb44u: goto label_4cfb44;
        case 0x4cfb48u: goto label_4cfb48;
        case 0x4cfb4cu: goto label_4cfb4c;
        case 0x4cfb50u: goto label_4cfb50;
        case 0x4cfb54u: goto label_4cfb54;
        case 0x4cfb58u: goto label_4cfb58;
        case 0x4cfb5cu: goto label_4cfb5c;
        case 0x4cfb60u: goto label_4cfb60;
        case 0x4cfb64u: goto label_4cfb64;
        case 0x4cfb68u: goto label_4cfb68;
        case 0x4cfb6cu: goto label_4cfb6c;
        case 0x4cfb70u: goto label_4cfb70;
        case 0x4cfb74u: goto label_4cfb74;
        case 0x4cfb78u: goto label_4cfb78;
        case 0x4cfb7cu: goto label_4cfb7c;
        case 0x4cfb80u: goto label_4cfb80;
        case 0x4cfb84u: goto label_4cfb84;
        case 0x4cfb88u: goto label_4cfb88;
        case 0x4cfb8cu: goto label_4cfb8c;
        case 0x4cfb90u: goto label_4cfb90;
        case 0x4cfb94u: goto label_4cfb94;
        case 0x4cfb98u: goto label_4cfb98;
        case 0x4cfb9cu: goto label_4cfb9c;
        case 0x4cfba0u: goto label_4cfba0;
        case 0x4cfba4u: goto label_4cfba4;
        case 0x4cfba8u: goto label_4cfba8;
        case 0x4cfbacu: goto label_4cfbac;
        case 0x4cfbb0u: goto label_4cfbb0;
        case 0x4cfbb4u: goto label_4cfbb4;
        case 0x4cfbb8u: goto label_4cfbb8;
        case 0x4cfbbcu: goto label_4cfbbc;
        case 0x4cfbc0u: goto label_4cfbc0;
        case 0x4cfbc4u: goto label_4cfbc4;
        case 0x4cfbc8u: goto label_4cfbc8;
        case 0x4cfbccu: goto label_4cfbcc;
        case 0x4cfbd0u: goto label_4cfbd0;
        case 0x4cfbd4u: goto label_4cfbd4;
        case 0x4cfbd8u: goto label_4cfbd8;
        case 0x4cfbdcu: goto label_4cfbdc;
        case 0x4cfbe0u: goto label_4cfbe0;
        case 0x4cfbe4u: goto label_4cfbe4;
        case 0x4cfbe8u: goto label_4cfbe8;
        case 0x4cfbecu: goto label_4cfbec;
        case 0x4cfbf0u: goto label_4cfbf0;
        case 0x4cfbf4u: goto label_4cfbf4;
        case 0x4cfbf8u: goto label_4cfbf8;
        case 0x4cfbfcu: goto label_4cfbfc;
        case 0x4cfc00u: goto label_4cfc00;
        case 0x4cfc04u: goto label_4cfc04;
        case 0x4cfc08u: goto label_4cfc08;
        case 0x4cfc0cu: goto label_4cfc0c;
        case 0x4cfc10u: goto label_4cfc10;
        case 0x4cfc14u: goto label_4cfc14;
        case 0x4cfc18u: goto label_4cfc18;
        case 0x4cfc1cu: goto label_4cfc1c;
        case 0x4cfc20u: goto label_4cfc20;
        case 0x4cfc24u: goto label_4cfc24;
        case 0x4cfc28u: goto label_4cfc28;
        case 0x4cfc2cu: goto label_4cfc2c;
        case 0x4cfc30u: goto label_4cfc30;
        case 0x4cfc34u: goto label_4cfc34;
        case 0x4cfc38u: goto label_4cfc38;
        case 0x4cfc3cu: goto label_4cfc3c;
        case 0x4cfc40u: goto label_4cfc40;
        case 0x4cfc44u: goto label_4cfc44;
        case 0x4cfc48u: goto label_4cfc48;
        case 0x4cfc4cu: goto label_4cfc4c;
        case 0x4cfc50u: goto label_4cfc50;
        case 0x4cfc54u: goto label_4cfc54;
        case 0x4cfc58u: goto label_4cfc58;
        case 0x4cfc5cu: goto label_4cfc5c;
        case 0x4cfc60u: goto label_4cfc60;
        case 0x4cfc64u: goto label_4cfc64;
        case 0x4cfc68u: goto label_4cfc68;
        case 0x4cfc6cu: goto label_4cfc6c;
        case 0x4cfc70u: goto label_4cfc70;
        case 0x4cfc74u: goto label_4cfc74;
        case 0x4cfc78u: goto label_4cfc78;
        case 0x4cfc7cu: goto label_4cfc7c;
        case 0x4cfc80u: goto label_4cfc80;
        case 0x4cfc84u: goto label_4cfc84;
        case 0x4cfc88u: goto label_4cfc88;
        case 0x4cfc8cu: goto label_4cfc8c;
        case 0x4cfc90u: goto label_4cfc90;
        case 0x4cfc94u: goto label_4cfc94;
        case 0x4cfc98u: goto label_4cfc98;
        case 0x4cfc9cu: goto label_4cfc9c;
        case 0x4cfca0u: goto label_4cfca0;
        case 0x4cfca4u: goto label_4cfca4;
        case 0x4cfca8u: goto label_4cfca8;
        case 0x4cfcacu: goto label_4cfcac;
        case 0x4cfcb0u: goto label_4cfcb0;
        case 0x4cfcb4u: goto label_4cfcb4;
        case 0x4cfcb8u: goto label_4cfcb8;
        case 0x4cfcbcu: goto label_4cfcbc;
        case 0x4cfcc0u: goto label_4cfcc0;
        case 0x4cfcc4u: goto label_4cfcc4;
        case 0x4cfcc8u: goto label_4cfcc8;
        case 0x4cfcccu: goto label_4cfccc;
        case 0x4cfcd0u: goto label_4cfcd0;
        case 0x4cfcd4u: goto label_4cfcd4;
        case 0x4cfcd8u: goto label_4cfcd8;
        case 0x4cfcdcu: goto label_4cfcdc;
        case 0x4cfce0u: goto label_4cfce0;
        case 0x4cfce4u: goto label_4cfce4;
        case 0x4cfce8u: goto label_4cfce8;
        case 0x4cfcecu: goto label_4cfcec;
        case 0x4cfcf0u: goto label_4cfcf0;
        case 0x4cfcf4u: goto label_4cfcf4;
        case 0x4cfcf8u: goto label_4cfcf8;
        case 0x4cfcfcu: goto label_4cfcfc;
        case 0x4cfd00u: goto label_4cfd00;
        case 0x4cfd04u: goto label_4cfd04;
        case 0x4cfd08u: goto label_4cfd08;
        case 0x4cfd0cu: goto label_4cfd0c;
        case 0x4cfd10u: goto label_4cfd10;
        case 0x4cfd14u: goto label_4cfd14;
        case 0x4cfd18u: goto label_4cfd18;
        case 0x4cfd1cu: goto label_4cfd1c;
        case 0x4cfd20u: goto label_4cfd20;
        case 0x4cfd24u: goto label_4cfd24;
        case 0x4cfd28u: goto label_4cfd28;
        case 0x4cfd2cu: goto label_4cfd2c;
        case 0x4cfd30u: goto label_4cfd30;
        case 0x4cfd34u: goto label_4cfd34;
        case 0x4cfd38u: goto label_4cfd38;
        case 0x4cfd3cu: goto label_4cfd3c;
        case 0x4cfd40u: goto label_4cfd40;
        case 0x4cfd44u: goto label_4cfd44;
        case 0x4cfd48u: goto label_4cfd48;
        case 0x4cfd4cu: goto label_4cfd4c;
        case 0x4cfd50u: goto label_4cfd50;
        case 0x4cfd54u: goto label_4cfd54;
        case 0x4cfd58u: goto label_4cfd58;
        case 0x4cfd5cu: goto label_4cfd5c;
        case 0x4cfd60u: goto label_4cfd60;
        case 0x4cfd64u: goto label_4cfd64;
        case 0x4cfd68u: goto label_4cfd68;
        case 0x4cfd6cu: goto label_4cfd6c;
        case 0x4cfd70u: goto label_4cfd70;
        case 0x4cfd74u: goto label_4cfd74;
        case 0x4cfd78u: goto label_4cfd78;
        case 0x4cfd7cu: goto label_4cfd7c;
        case 0x4cfd80u: goto label_4cfd80;
        case 0x4cfd84u: goto label_4cfd84;
        case 0x4cfd88u: goto label_4cfd88;
        case 0x4cfd8cu: goto label_4cfd8c;
        case 0x4cfd90u: goto label_4cfd90;
        case 0x4cfd94u: goto label_4cfd94;
        case 0x4cfd98u: goto label_4cfd98;
        case 0x4cfd9cu: goto label_4cfd9c;
        case 0x4cfda0u: goto label_4cfda0;
        case 0x4cfda4u: goto label_4cfda4;
        case 0x4cfda8u: goto label_4cfda8;
        case 0x4cfdacu: goto label_4cfdac;
        case 0x4cfdb0u: goto label_4cfdb0;
        case 0x4cfdb4u: goto label_4cfdb4;
        case 0x4cfdb8u: goto label_4cfdb8;
        case 0x4cfdbcu: goto label_4cfdbc;
        case 0x4cfdc0u: goto label_4cfdc0;
        case 0x4cfdc4u: goto label_4cfdc4;
        case 0x4cfdc8u: goto label_4cfdc8;
        case 0x4cfdccu: goto label_4cfdcc;
        case 0x4cfdd0u: goto label_4cfdd0;
        case 0x4cfdd4u: goto label_4cfdd4;
        case 0x4cfdd8u: goto label_4cfdd8;
        case 0x4cfddcu: goto label_4cfddc;
        case 0x4cfde0u: goto label_4cfde0;
        case 0x4cfde4u: goto label_4cfde4;
        case 0x4cfde8u: goto label_4cfde8;
        case 0x4cfdecu: goto label_4cfdec;
        case 0x4cfdf0u: goto label_4cfdf0;
        case 0x4cfdf4u: goto label_4cfdf4;
        case 0x4cfdf8u: goto label_4cfdf8;
        case 0x4cfdfcu: goto label_4cfdfc;
        case 0x4cfe00u: goto label_4cfe00;
        case 0x4cfe04u: goto label_4cfe04;
        case 0x4cfe08u: goto label_4cfe08;
        case 0x4cfe0cu: goto label_4cfe0c;
        case 0x4cfe10u: goto label_4cfe10;
        case 0x4cfe14u: goto label_4cfe14;
        case 0x4cfe18u: goto label_4cfe18;
        case 0x4cfe1cu: goto label_4cfe1c;
        case 0x4cfe20u: goto label_4cfe20;
        case 0x4cfe24u: goto label_4cfe24;
        case 0x4cfe28u: goto label_4cfe28;
        case 0x4cfe2cu: goto label_4cfe2c;
        case 0x4cfe30u: goto label_4cfe30;
        case 0x4cfe34u: goto label_4cfe34;
        case 0x4cfe38u: goto label_4cfe38;
        case 0x4cfe3cu: goto label_4cfe3c;
        case 0x4cfe40u: goto label_4cfe40;
        case 0x4cfe44u: goto label_4cfe44;
        case 0x4cfe48u: goto label_4cfe48;
        case 0x4cfe4cu: goto label_4cfe4c;
        case 0x4cfe50u: goto label_4cfe50;
        case 0x4cfe54u: goto label_4cfe54;
        case 0x4cfe58u: goto label_4cfe58;
        case 0x4cfe5cu: goto label_4cfe5c;
        case 0x4cfe60u: goto label_4cfe60;
        case 0x4cfe64u: goto label_4cfe64;
        case 0x4cfe68u: goto label_4cfe68;
        case 0x4cfe6cu: goto label_4cfe6c;
        case 0x4cfe70u: goto label_4cfe70;
        case 0x4cfe74u: goto label_4cfe74;
        case 0x4cfe78u: goto label_4cfe78;
        case 0x4cfe7cu: goto label_4cfe7c;
        case 0x4cfe80u: goto label_4cfe80;
        case 0x4cfe84u: goto label_4cfe84;
        case 0x4cfe88u: goto label_4cfe88;
        case 0x4cfe8cu: goto label_4cfe8c;
        case 0x4cfe90u: goto label_4cfe90;
        case 0x4cfe94u: goto label_4cfe94;
        case 0x4cfe98u: goto label_4cfe98;
        case 0x4cfe9cu: goto label_4cfe9c;
        case 0x4cfea0u: goto label_4cfea0;
        case 0x4cfea4u: goto label_4cfea4;
        case 0x4cfea8u: goto label_4cfea8;
        case 0x4cfeacu: goto label_4cfeac;
        case 0x4cfeb0u: goto label_4cfeb0;
        case 0x4cfeb4u: goto label_4cfeb4;
        case 0x4cfeb8u: goto label_4cfeb8;
        case 0x4cfebcu: goto label_4cfebc;
        case 0x4cfec0u: goto label_4cfec0;
        case 0x4cfec4u: goto label_4cfec4;
        case 0x4cfec8u: goto label_4cfec8;
        case 0x4cfeccu: goto label_4cfecc;
        case 0x4cfed0u: goto label_4cfed0;
        case 0x4cfed4u: goto label_4cfed4;
        case 0x4cfed8u: goto label_4cfed8;
        case 0x4cfedcu: goto label_4cfedc;
        case 0x4cfee0u: goto label_4cfee0;
        case 0x4cfee4u: goto label_4cfee4;
        case 0x4cfee8u: goto label_4cfee8;
        case 0x4cfeecu: goto label_4cfeec;
        case 0x4cfef0u: goto label_4cfef0;
        case 0x4cfef4u: goto label_4cfef4;
        case 0x4cfef8u: goto label_4cfef8;
        case 0x4cfefcu: goto label_4cfefc;
        case 0x4cff00u: goto label_4cff00;
        case 0x4cff04u: goto label_4cff04;
        case 0x4cff08u: goto label_4cff08;
        case 0x4cff0cu: goto label_4cff0c;
        case 0x4cff10u: goto label_4cff10;
        case 0x4cff14u: goto label_4cff14;
        case 0x4cff18u: goto label_4cff18;
        case 0x4cff1cu: goto label_4cff1c;
        case 0x4cff20u: goto label_4cff20;
        case 0x4cff24u: goto label_4cff24;
        case 0x4cff28u: goto label_4cff28;
        case 0x4cff2cu: goto label_4cff2c;
        case 0x4cff30u: goto label_4cff30;
        case 0x4cff34u: goto label_4cff34;
        case 0x4cff38u: goto label_4cff38;
        case 0x4cff3cu: goto label_4cff3c;
        case 0x4cff40u: goto label_4cff40;
        case 0x4cff44u: goto label_4cff44;
        case 0x4cff48u: goto label_4cff48;
        case 0x4cff4cu: goto label_4cff4c;
        case 0x4cff50u: goto label_4cff50;
        case 0x4cff54u: goto label_4cff54;
        case 0x4cff58u: goto label_4cff58;
        case 0x4cff5cu: goto label_4cff5c;
        case 0x4cff60u: goto label_4cff60;
        case 0x4cff64u: goto label_4cff64;
        case 0x4cff68u: goto label_4cff68;
        case 0x4cff6cu: goto label_4cff6c;
        case 0x4cff70u: goto label_4cff70;
        case 0x4cff74u: goto label_4cff74;
        case 0x4cff78u: goto label_4cff78;
        case 0x4cff7cu: goto label_4cff7c;
        case 0x4cff80u: goto label_4cff80;
        case 0x4cff84u: goto label_4cff84;
        case 0x4cff88u: goto label_4cff88;
        case 0x4cff8cu: goto label_4cff8c;
        case 0x4cff90u: goto label_4cff90;
        case 0x4cff94u: goto label_4cff94;
        case 0x4cff98u: goto label_4cff98;
        case 0x4cff9cu: goto label_4cff9c;
        case 0x4cffa0u: goto label_4cffa0;
        case 0x4cffa4u: goto label_4cffa4;
        case 0x4cffa8u: goto label_4cffa8;
        case 0x4cffacu: goto label_4cffac;
        case 0x4cffb0u: goto label_4cffb0;
        case 0x4cffb4u: goto label_4cffb4;
        case 0x4cffb8u: goto label_4cffb8;
        case 0x4cffbcu: goto label_4cffbc;
        case 0x4cffc0u: goto label_4cffc0;
        case 0x4cffc4u: goto label_4cffc4;
        case 0x4cffc8u: goto label_4cffc8;
        case 0x4cffccu: goto label_4cffcc;
        case 0x4cffd0u: goto label_4cffd0;
        case 0x4cffd4u: goto label_4cffd4;
        case 0x4cffd8u: goto label_4cffd8;
        case 0x4cffdcu: goto label_4cffdc;
        case 0x4cffe0u: goto label_4cffe0;
        case 0x4cffe4u: goto label_4cffe4;
        case 0x4cffe8u: goto label_4cffe8;
        case 0x4cffecu: goto label_4cffec;
        default: break;
    }

    ctx->pc = 0x4cf550u;

label_4cf550:
    // 0x4cf550: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4cf550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4cf554:
    // 0x4cf554: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4cf554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4cf558:
    // 0x4cf558: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4cf558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4cf55c:
    // 0x4cf55c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4cf55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4cf560:
    // 0x4cf560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4cf560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4cf564:
    // 0x4cf564: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4cf564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cf568:
    // 0x4cf568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cf568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cf56c:
    // 0x4cf56c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cf56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cf570:
    // 0x4cf570: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4cf570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4cf574:
    // 0x4cf574: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4cf574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4cf578:
    // 0x4cf578: 0xc10ca68  jal         func_4329A0
label_4cf57c:
    if (ctx->pc == 0x4CF57Cu) {
        ctx->pc = 0x4CF57Cu;
            // 0x4cf57c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4CF580u;
        goto label_4cf580;
    }
    ctx->pc = 0x4CF578u;
    SET_GPR_U32(ctx, 31, 0x4CF580u);
    ctx->pc = 0x4CF57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF578u;
            // 0x4cf57c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF580u; }
        if (ctx->pc != 0x4CF580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF580u; }
        if (ctx->pc != 0x4CF580u) { return; }
    }
    ctx->pc = 0x4CF580u;
label_4cf580:
    // 0x4cf580: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4cf580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4cf584:
    // 0x4cf584: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cf584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cf588:
    // 0x4cf588: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4cf588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4cf58c:
    // 0x4cf58c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4cf58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4cf590:
    // 0x4cf590: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4cf590u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4cf594:
    // 0x4cf594: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4cf594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4cf598:
    // 0x4cf598: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4cf598u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4cf59c:
    // 0x4cf59c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4cf59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4cf5a0:
    // 0x4cf5a0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4cf5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4cf5a4:
    // 0x4cf5a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cf5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4cf5a8:
    // 0x4cf5a8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4cf5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4cf5ac:
    // 0x4cf5ac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4cf5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4cf5b0:
    // 0x4cf5b0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4cf5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4cf5b4:
    // 0x4cf5b4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4cf5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4cf5b8:
    // 0x4cf5b8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4cf5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4cf5bc:
    // 0x4cf5bc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4cf5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4cf5c0:
    // 0x4cf5c0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4cf5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4cf5c4:
    // 0x4cf5c4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4cf5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4cf5c8:
    // 0x4cf5c8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4cf5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4cf5cc:
    // 0x4cf5cc: 0xc0582cc  jal         func_160B30
label_4cf5d0:
    if (ctx->pc == 0x4CF5D0u) {
        ctx->pc = 0x4CF5D0u;
            // 0x4cf5d0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4CF5D4u;
        goto label_4cf5d4;
    }
    ctx->pc = 0x4CF5CCu;
    SET_GPR_U32(ctx, 31, 0x4CF5D4u);
    ctx->pc = 0x4CF5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF5CCu;
            // 0x4cf5d0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF5D4u; }
        if (ctx->pc != 0x4CF5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF5D4u; }
        if (ctx->pc != 0x4CF5D4u) { return; }
    }
    ctx->pc = 0x4CF5D4u;
label_4cf5d4:
    // 0x4cf5d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cf5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4cf5d8:
    // 0x4cf5d8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4cf5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4cf5dc:
    // 0x4cf5dc: 0x24631dd8  addiu       $v1, $v1, 0x1DD8
    ctx->pc = 0x4cf5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7640));
label_4cf5e0:
    // 0x4cf5e0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4cf5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4cf5e4:
    // 0x4cf5e4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4cf5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4cf5e8:
    // 0x4cf5e8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4cf5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4cf5ec:
    // 0x4cf5ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cf5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4cf5f0:
    // 0x4cf5f0: 0xac44aa20  sw          $a0, -0x55E0($v0)
    ctx->pc = 0x4cf5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945312), GPR_U32(ctx, 4));
label_4cf5f4:
    // 0x4cf5f4: 0x24631df0  addiu       $v1, $v1, 0x1DF0
    ctx->pc = 0x4cf5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7664));
label_4cf5f8:
    // 0x4cf5f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cf5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4cf5fc:
    // 0x4cf5fc: 0x24421e28  addiu       $v0, $v0, 0x1E28
    ctx->pc = 0x4cf5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7720));
label_4cf600:
    // 0x4cf600: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4cf600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4cf604:
    // 0x4cf604: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4cf604u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4cf608:
    // 0x4cf608: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4cf608u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4cf60c:
    // 0x4cf60c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4cf60cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4cf610:
    // 0x4cf610: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4cf610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4cf614:
    // 0x4cf614: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4cf614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4cf618:
    // 0x4cf618: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4cf618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4cf61c:
    // 0x4cf61c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4cf61cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4cf620:
    // 0x4cf620: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4cf620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4cf624:
    // 0x4cf624: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4cf624u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4cf628:
    // 0x4cf628: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4cf628u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4cf62c:
    // 0x4cf62c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4cf62cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4cf630:
    // 0x4cf630: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4cf630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4cf634:
    // 0x4cf634: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_4cf638:
    if (ctx->pc == 0x4CF638u) {
        ctx->pc = 0x4CF63Cu;
        goto label_4cf63c;
    }
    ctx->pc = 0x4CF634u;
    {
        const bool branch_taken_0x4cf634 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf634) {
            ctx->pc = 0x4CF6C0u;
            goto label_4cf6c0;
        }
    }
    ctx->pc = 0x4CF63Cu;
label_4cf63c:
    // 0x4cf63c: 0x1011c0  sll         $v0, $s0, 7
    ctx->pc = 0x4cf63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_4cf640:
    // 0x4cf640: 0xc040138  jal         func_1004E0
label_4cf644:
    if (ctx->pc == 0x4CF644u) {
        ctx->pc = 0x4CF644u;
            // 0x4cf644: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4CF648u;
        goto label_4cf648;
    }
    ctx->pc = 0x4CF640u;
    SET_GPR_U32(ctx, 31, 0x4CF648u);
    ctx->pc = 0x4CF644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF640u;
            // 0x4cf644: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF648u; }
        if (ctx->pc != 0x4CF648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF648u; }
        if (ctx->pc != 0x4CF648u) { return; }
    }
    ctx->pc = 0x4CF648u;
label_4cf648:
    // 0x4cf648: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4cf648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4cf64c:
    // 0x4cf64c: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x4cf64cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
label_4cf650:
    // 0x4cf650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4cf650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cf654:
    // 0x4cf654: 0x24a5f6e0  addiu       $a1, $a1, -0x920
    ctx->pc = 0x4cf654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964960));
label_4cf658:
    // 0x4cf658: 0x24c6eff0  addiu       $a2, $a2, -0x1010
    ctx->pc = 0x4cf658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963184));
label_4cf65c:
    // 0x4cf65c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x4cf65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4cf660:
    // 0x4cf660: 0xc040840  jal         func_102100
label_4cf664:
    if (ctx->pc == 0x4CF664u) {
        ctx->pc = 0x4CF664u;
            // 0x4cf664: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CF668u;
        goto label_4cf668;
    }
    ctx->pc = 0x4CF660u;
    SET_GPR_U32(ctx, 31, 0x4CF668u);
    ctx->pc = 0x4CF664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF660u;
            // 0x4cf664: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF668u; }
        if (ctx->pc != 0x4CF668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF668u; }
        if (ctx->pc != 0x4CF668u) { return; }
    }
    ctx->pc = 0x4CF668u;
label_4cf668:
    // 0x4cf668: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4cf668u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4cf66c:
    // 0x4cf66c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4cf66cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cf670:
    // 0x4cf670: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4cf670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4cf674:
    // 0x4cf674: 0xc0788fc  jal         func_1E23F0
label_4cf678:
    if (ctx->pc == 0x4CF678u) {
        ctx->pc = 0x4CF678u;
            // 0x4cf678: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CF67Cu;
        goto label_4cf67c;
    }
    ctx->pc = 0x4CF674u;
    SET_GPR_U32(ctx, 31, 0x4CF67Cu);
    ctx->pc = 0x4CF678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF674u;
            // 0x4cf678: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF67Cu; }
        if (ctx->pc != 0x4CF67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF67Cu; }
        if (ctx->pc != 0x4CF67Cu) { return; }
    }
    ctx->pc = 0x4CF67Cu;
label_4cf67c:
    // 0x4cf67c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4cf67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4cf680:
    // 0x4cf680: 0xc0788fc  jal         func_1E23F0
label_4cf684:
    if (ctx->pc == 0x4CF684u) {
        ctx->pc = 0x4CF684u;
            // 0x4cf684: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CF688u;
        goto label_4cf688;
    }
    ctx->pc = 0x4CF680u;
    SET_GPR_U32(ctx, 31, 0x4CF688u);
    ctx->pc = 0x4CF684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF680u;
            // 0x4cf684: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF688u; }
        if (ctx->pc != 0x4CF688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF688u; }
        if (ctx->pc != 0x4CF688u) { return; }
    }
    ctx->pc = 0x4CF688u;
label_4cf688:
    // 0x4cf688: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4cf688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cf68c:
    // 0x4cf68c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4cf68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4cf690:
    // 0x4cf690: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4cf690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4cf694:
    // 0x4cf694: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4cf694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4cf698:
    // 0x4cf698: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4cf698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cf69c:
    // 0x4cf69c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4cf69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4cf6a0:
    // 0x4cf6a0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4cf6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4cf6a4:
    // 0x4cf6a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4cf6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4cf6a8:
    // 0x4cf6a8: 0xc0a997c  jal         func_2A65F0
label_4cf6ac:
    if (ctx->pc == 0x4CF6ACu) {
        ctx->pc = 0x4CF6ACu;
            // 0x4cf6ac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4CF6B0u;
        goto label_4cf6b0;
    }
    ctx->pc = 0x4CF6A8u;
    SET_GPR_U32(ctx, 31, 0x4CF6B0u);
    ctx->pc = 0x4CF6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF6A8u;
            // 0x4cf6ac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF6B0u; }
        if (ctx->pc != 0x4CF6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF6B0u; }
        if (ctx->pc != 0x4CF6B0u) { return; }
    }
    ctx->pc = 0x4CF6B0u;
label_4cf6b0:
    // 0x4cf6b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4cf6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4cf6b4:
    // 0x4cf6b4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4cf6b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4cf6b8:
    // 0x4cf6b8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4cf6bc:
    if (ctx->pc == 0x4CF6BCu) {
        ctx->pc = 0x4CF6BCu;
            // 0x4cf6bc: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x4CF6C0u;
        goto label_4cf6c0;
    }
    ctx->pc = 0x4CF6B8u;
    {
        const bool branch_taken_0x4cf6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CF6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF6B8u;
            // 0x4cf6bc: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf6b8) {
            ctx->pc = 0x4CF68Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cf68c;
        }
    }
    ctx->pc = 0x4CF6C0u;
label_4cf6c0:
    // 0x4cf6c0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4cf6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4cf6c4:
    // 0x4cf6c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4cf6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4cf6c8:
    // 0x4cf6c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4cf6c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4cf6cc:
    // 0x4cf6cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4cf6ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4cf6d0:
    // 0x4cf6d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cf6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cf6d4:
    // 0x4cf6d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cf6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cf6d8:
    // 0x4cf6d8: 0x3e00008  jr          $ra
label_4cf6dc:
    if (ctx->pc == 0x4CF6DCu) {
        ctx->pc = 0x4CF6DCu;
            // 0x4cf6dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4CF6E0u;
        goto label_4cf6e0;
    }
    ctx->pc = 0x4CF6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF6D8u;
            // 0x4cf6dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CF6E0u;
label_4cf6e0:
    // 0x4cf6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cf6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4cf6e4:
    // 0x4cf6e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cf6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cf6e8:
    // 0x4cf6e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cf6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4cf6ec:
    // 0x4cf6ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4cf6ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4cf6f0:
    // 0x4cf6f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cf6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cf6f4:
    // 0x4cf6f4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4cf6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4cf6f8:
    // 0x4cf6f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4cf6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4cf6fc:
    // 0x4cf6fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cf6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4cf700:
    // 0x4cf700: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x4cf700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_4cf704:
    // 0x4cf704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4cf704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cf708:
    // 0x4cf708: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4cf708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4cf70c:
    // 0x4cf70c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cf70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cf710:
    // 0x4cf710: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x4cf710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_4cf714:
    // 0x4cf714: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4cf714u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4cf718:
    // 0x4cf718: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x4cf718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_4cf71c:
    // 0x4cf71c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4cf71cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4cf720:
    // 0x4cf720: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x4cf720u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_4cf724:
    // 0x4cf724: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x4cf724u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_4cf728:
    // 0x4cf728: 0xc04cbd8  jal         func_132F60
label_4cf72c:
    if (ctx->pc == 0x4CF72Cu) {
        ctx->pc = 0x4CF72Cu;
            // 0x4cf72c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4CF730u;
        goto label_4cf730;
    }
    ctx->pc = 0x4CF728u;
    SET_GPR_U32(ctx, 31, 0x4CF730u);
    ctx->pc = 0x4CF72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF728u;
            // 0x4cf72c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF730u; }
        if (ctx->pc != 0x4CF730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF730u; }
        if (ctx->pc != 0x4CF730u) { return; }
    }
    ctx->pc = 0x4CF730u;
label_4cf730:
    // 0x4cf730: 0xc04c968  jal         func_1325A0
label_4cf734:
    if (ctx->pc == 0x4CF734u) {
        ctx->pc = 0x4CF734u;
            // 0x4cf734: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4CF738u;
        goto label_4cf738;
    }
    ctx->pc = 0x4CF730u;
    SET_GPR_U32(ctx, 31, 0x4CF738u);
    ctx->pc = 0x4CF734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF730u;
            // 0x4cf734: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF738u; }
        if (ctx->pc != 0x4CF738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF738u; }
        if (ctx->pc != 0x4CF738u) { return; }
    }
    ctx->pc = 0x4CF738u;
label_4cf738:
    // 0x4cf738: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cf738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4cf73c:
    // 0x4cf73c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x4cf73cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_4cf740:
    // 0x4cf740: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4cf740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4cf744:
    // 0x4cf744: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x4cf744u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_4cf748:
    // 0x4cf748: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x4cf748u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_4cf74c:
    // 0x4cf74c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x4cf74cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_4cf750:
    // 0x4cf750: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4cf750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_4cf754:
    // 0x4cf754: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cf754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4cf758:
    // 0x4cf758: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x4cf758u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_4cf75c:
    // 0x4cf75c: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x4cf75cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
label_4cf760:
    // 0x4cf760: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x4cf760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
label_4cf764:
    // 0x4cf764: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x4cf764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
label_4cf768:
    // 0x4cf768: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x4cf768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
label_4cf76c:
    // 0x4cf76c: 0x24841e90  addiu       $a0, $a0, 0x1E90
    ctx->pc = 0x4cf76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
label_4cf770:
    // 0x4cf770: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x4cf770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4cf774:
    // 0x4cf774: 0x24631ed0  addiu       $v1, $v1, 0x1ED0
    ctx->pc = 0x4cf774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7888));
label_4cf778:
    // 0x4cf778: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x4cf778u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_4cf77c:
    // 0x4cf77c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4cf77cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cf780:
    // 0x4cf780: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x4cf780u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
label_4cf784:
    // 0x4cf784: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x4cf784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_4cf788:
    // 0x4cf788: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4cf788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4cf78c:
    // 0x4cf78c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4cf78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_4cf790:
    // 0x4cf790: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x4cf790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_4cf794:
    // 0x4cf794: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4cf794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4cf798:
    // 0x4cf798: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4cf798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4cf79c:
    // 0x4cf79c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x4cf79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_4cf7a0:
    // 0x4cf7a0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x4cf7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_4cf7a4:
    // 0x4cf7a4: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x4cf7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_4cf7a8:
    // 0x4cf7a8: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x4cf7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_4cf7ac:
    // 0x4cf7ac: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x4cf7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_4cf7b0:
    // 0x4cf7b0: 0xa2000078  sb          $zero, 0x78($s0)
    ctx->pc = 0x4cf7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 0));
label_4cf7b4:
    // 0x4cf7b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cf7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4cf7b8:
    // 0x4cf7b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cf7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cf7bc:
    // 0x4cf7bc: 0x3e00008  jr          $ra
label_4cf7c0:
    if (ctx->pc == 0x4CF7C0u) {
        ctx->pc = 0x4CF7C0u;
            // 0x4cf7c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4CF7C4u;
        goto label_4cf7c4;
    }
    ctx->pc = 0x4CF7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF7BCu;
            // 0x4cf7c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CF7C4u;
label_4cf7c4:
    // 0x4cf7c4: 0x0  nop
    ctx->pc = 0x4cf7c4u;
    // NOP
label_4cf7c8:
    // 0x4cf7c8: 0x0  nop
    ctx->pc = 0x4cf7c8u;
    // NOP
label_4cf7cc:
    // 0x4cf7cc: 0x0  nop
    ctx->pc = 0x4cf7ccu;
    // NOP
label_4cf7d0:
    // 0x4cf7d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4cf7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4cf7d4:
    // 0x4cf7d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cf7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4cf7d8:
    // 0x4cf7d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cf7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cf7dc:
    // 0x4cf7dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cf7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cf7e0:
    // 0x4cf7e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cf7e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cf7e4:
    // 0x4cf7e4: 0x8cc30e34  lw          $v1, 0xE34($a2)
    ctx->pc = 0x4cf7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3636)));
label_4cf7e8:
    // 0x4cf7e8: 0x8cd00d98  lw          $s0, 0xD98($a2)
    ctx->pc = 0x4cf7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3480)));
label_4cf7ec:
    // 0x4cf7ec: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x4cf7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
label_4cf7f0:
    // 0x4cf7f0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4cf7f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4cf7f4:
    // 0x4cf7f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4cf7f8:
    if (ctx->pc == 0x4CF7F8u) {
        ctx->pc = 0x4CF7F8u;
            // 0x4cf7f8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CF7FCu;
        goto label_4cf7fc;
    }
    ctx->pc = 0x4CF7F4u;
    {
        const bool branch_taken_0x4cf7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF7F4u;
            // 0x4cf7f8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf7f4) {
            ctx->pc = 0x4CF80Cu;
            goto label_4cf80c;
        }
    }
    ctx->pc = 0x4CF7FCu;
label_4cf7fc:
    // 0x4cf7fc: 0xc075eb4  jal         func_1D7AD0
label_4cf800:
    if (ctx->pc == 0x4CF800u) {
        ctx->pc = 0x4CF804u;
        goto label_4cf804;
    }
    ctx->pc = 0x4CF7FCu;
    SET_GPR_U32(ctx, 31, 0x4CF804u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF804u; }
        if (ctx->pc != 0x4CF804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF804u; }
        if (ctx->pc != 0x4CF804u) { return; }
    }
    ctx->pc = 0x4CF804u;
label_4cf804:
    // 0x4cf804: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x4cf804u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4cf808:
    // 0x4cf808: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4cf808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_4cf80c:
    // 0x4cf80c: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
label_4cf810:
    if (ctx->pc == 0x4CF810u) {
        ctx->pc = 0x4CF810u;
            // 0x4cf810: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4CF814u;
        goto label_4cf814;
    }
    ctx->pc = 0x4CF80Cu;
    {
        const bool branch_taken_0x4cf80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cf80c) {
            ctx->pc = 0x4CF810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF80Cu;
            // 0x4cf810: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CF864u;
            goto label_4cf864;
        }
    }
    ctx->pc = 0x4CF814u;
label_4cf814:
    // 0x4cf814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4cf814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cf818:
    // 0x4cf818: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4cf818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4cf81c:
    // 0x4cf81c: 0x2028004  sllv        $s0, $v0, $s0
    ctx->pc = 0x4cf81cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_4cf820:
    // 0x4cf820: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x4cf820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_4cf824:
    // 0x4cf824: 0xc0dec44  jal         func_37B110
label_4cf828:
    if (ctx->pc == 0x4CF828u) {
        ctx->pc = 0x4CF828u;
            // 0x4cf828: 0xafb0003c  sw          $s0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
        ctx->pc = 0x4CF82Cu;
        goto label_4cf82c;
    }
    ctx->pc = 0x4CF824u;
    SET_GPR_U32(ctx, 31, 0x4CF82Cu);
    ctx->pc = 0x4CF828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF824u;
            // 0x4cf828: 0xafb0003c  sw          $s0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B110u;
    if (runtime->hasFunction(0x37B110u)) {
        auto targetFn = runtime->lookupFunction(0x37B110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF82Cu; }
        if (ctx->pc != 0x4CF82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B110_0x37b110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF82Cu; }
        if (ctx->pc != 0x4CF82Cu) { return; }
    }
    ctx->pc = 0x4CF82Cu;
label_4cf82c:
    // 0x4cf82c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4cf830:
    if (ctx->pc == 0x4CF830u) {
        ctx->pc = 0x4CF834u;
        goto label_4cf834;
    }
    ctx->pc = 0x4CF82Cu;
    {
        const bool branch_taken_0x4cf82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf82c) {
            ctx->pc = 0x4CF860u;
            goto label_4cf860;
        }
    }
    ctx->pc = 0x4CF834u;
label_4cf834:
    // 0x4cf834: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x4cf834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_4cf838:
    // 0x4cf838: 0x2002027  not         $a0, $s0
    ctx->pc = 0x4cf838u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_4cf83c:
    // 0x4cf83c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4cf83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4cf840:
    // 0x4cf840: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_4cf844:
    if (ctx->pc == 0x4CF844u) {
        ctx->pc = 0x4CF844u;
            // 0x4cf844: 0xae23006c  sw          $v1, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
        ctx->pc = 0x4CF848u;
        goto label_4cf848;
    }
    ctx->pc = 0x4CF840u;
    {
        const bool branch_taken_0x4cf840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CF844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF840u;
            // 0x4cf844: 0xae23006c  sw          $v1, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf840) {
            ctx->pc = 0x4CF860u;
            goto label_4cf860;
        }
    }
    ctx->pc = 0x4CF848u;
label_4cf848:
    // 0x4cf848: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4cf848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4cf84c:
    // 0x4cf84c: 0x8e250068  lw          $a1, 0x68($s1)
    ctx->pc = 0x4cf84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4cf850:
    // 0x4cf850: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x4cf850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4cf854:
    // 0x4cf854: 0xc074678  jal         func_1D19E0
label_4cf858:
    if (ctx->pc == 0x4CF858u) {
        ctx->pc = 0x4CF858u;
            // 0x4cf858: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4CF85Cu;
        goto label_4cf85c;
    }
    ctx->pc = 0x4CF854u;
    SET_GPR_U32(ctx, 31, 0x4CF85Cu);
    ctx->pc = 0x4CF858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF854u;
            // 0x4cf858: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D19E0u;
    if (runtime->hasFunction(0x1D19E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D19E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF85Cu; }
        if (ctx->pc != 0x4CF85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D19E0_0x1d19e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF85Cu; }
        if (ctx->pc != 0x4CF85Cu) { return; }
    }
    ctx->pc = 0x4CF85Cu;
label_4cf85c:
    // 0x4cf85c: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x4cf85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_4cf860:
    // 0x4cf860: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cf860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cf864:
    // 0x4cf864: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cf864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cf868:
    // 0x4cf868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cf868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cf86c:
    // 0x4cf86c: 0x3e00008  jr          $ra
label_4cf870:
    if (ctx->pc == 0x4CF870u) {
        ctx->pc = 0x4CF870u;
            // 0x4cf870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4CF874u;
        goto label_4cf874;
    }
    ctx->pc = 0x4CF86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF86Cu;
            // 0x4cf870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CF874u;
label_4cf874:
    // 0x4cf874: 0x0  nop
    ctx->pc = 0x4cf874u;
    // NOP
label_4cf878:
    // 0x4cf878: 0x0  nop
    ctx->pc = 0x4cf878u;
    // NOP
label_4cf87c:
    // 0x4cf87c: 0x0  nop
    ctx->pc = 0x4cf87cu;
    // NOP
label_4cf880:
    // 0x4cf880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cf880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4cf884:
    // 0x4cf884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cf884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4cf888:
    // 0x4cf888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cf888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cf88c:
    // 0x4cf88c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cf88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cf890:
    // 0x4cf890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cf890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cf894:
    // 0x4cf894: 0x8cc30e34  lw          $v1, 0xE34($a2)
    ctx->pc = 0x4cf894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3636)));
label_4cf898:
    // 0x4cf898: 0x8cd00d98  lw          $s0, 0xD98($a2)
    ctx->pc = 0x4cf898u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3480)));
label_4cf89c:
    // 0x4cf89c: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x4cf89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
label_4cf8a0:
    // 0x4cf8a0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4cf8a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4cf8a4:
    // 0x4cf8a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4cf8a8:
    if (ctx->pc == 0x4CF8A8u) {
        ctx->pc = 0x4CF8A8u;
            // 0x4cf8a8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CF8ACu;
        goto label_4cf8ac;
    }
    ctx->pc = 0x4CF8A4u;
    {
        const bool branch_taken_0x4cf8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF8A4u;
            // 0x4cf8a8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf8a4) {
            ctx->pc = 0x4CF8BCu;
            goto label_4cf8bc;
        }
    }
    ctx->pc = 0x4CF8ACu;
label_4cf8ac:
    // 0x4cf8ac: 0xc075eb4  jal         func_1D7AD0
label_4cf8b0:
    if (ctx->pc == 0x4CF8B0u) {
        ctx->pc = 0x4CF8B4u;
        goto label_4cf8b4;
    }
    ctx->pc = 0x4CF8ACu;
    SET_GPR_U32(ctx, 31, 0x4CF8B4u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF8B4u; }
        if (ctx->pc != 0x4CF8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF8B4u; }
        if (ctx->pc != 0x4CF8B4u) { return; }
    }
    ctx->pc = 0x4CF8B4u;
label_4cf8b4:
    // 0x4cf8b4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x4cf8b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4cf8b8:
    // 0x4cf8b8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4cf8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_4cf8bc:
    // 0x4cf8bc: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
label_4cf8c0:
    if (ctx->pc == 0x4CF8C0u) {
        ctx->pc = 0x4CF8C0u;
            // 0x4cf8c0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4CF8C4u;
        goto label_4cf8c4;
    }
    ctx->pc = 0x4CF8BCu;
    {
        const bool branch_taken_0x4cf8bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cf8bc) {
            ctx->pc = 0x4CF8C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF8BCu;
            // 0x4cf8c0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CF934u;
            goto label_4cf934;
        }
    }
    ctx->pc = 0x4CF8C4u;
label_4cf8c4:
    // 0x4cf8c4: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x4cf8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_4cf8c8:
    // 0x4cf8c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4cf8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cf8cc:
    // 0x4cf8cc: 0x2048004  sllv        $s0, $a0, $s0
    ctx->pc = 0x4cf8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
label_4cf8d0:
    // 0x4cf8d0: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4cf8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_4cf8d4:
    // 0x4cf8d4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_4cf8d8:
    if (ctx->pc == 0x4CF8D8u) {
        ctx->pc = 0x4CF8DCu;
        goto label_4cf8dc;
    }
    ctx->pc = 0x4CF8D4u;
    {
        const bool branch_taken_0x4cf8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cf8d4) {
            ctx->pc = 0x4CF930u;
            goto label_4cf930;
        }
    }
    ctx->pc = 0x4CF8DCu;
label_4cf8dc:
    // 0x4cf8dc: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x4cf8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_4cf8e0:
    // 0x4cf8e0: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
label_4cf8e4:
    if (ctx->pc == 0x4CF8E4u) {
        ctx->pc = 0x4CF8E4u;
            // 0x4cf8e4: 0x8e23006c  lw          $v1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->pc = 0x4CF8E8u;
        goto label_4cf8e8;
    }
    ctx->pc = 0x4CF8E0u;
    {
        const bool branch_taken_0x4cf8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cf8e0) {
            ctx->pc = 0x4CF8E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF8E0u;
            // 0x4cf8e4: 0x8e23006c  lw          $v1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CF928u;
            goto label_4cf928;
        }
    }
    ctx->pc = 0x4CF8E8u;
label_4cf8e8:
    // 0x4cf8e8: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x4cf8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4cf8ec:
    // 0x4cf8ec: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
label_4cf8f0:
    if (ctx->pc == 0x4CF8F0u) {
        ctx->pc = 0x4CF8F0u;
            // 0x4cf8f0: 0x3c0440a0  lui         $a0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
        ctx->pc = 0x4CF8F4u;
        goto label_4cf8f4;
    }
    ctx->pc = 0x4CF8ECu;
    {
        const bool branch_taken_0x4cf8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cf8ec) {
            ctx->pc = 0x4CF8F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF8ECu;
            // 0x4cf8f0: 0x3c0440a0  lui         $a0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CF918u;
            goto label_4cf918;
        }
    }
    ctx->pc = 0x4CF8F4u;
label_4cf8f4:
    // 0x4cf8f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4cf8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4cf8f8:
    // 0x4cf8f8: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x4cf8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_4cf8fc:
    // 0x4cf8fc: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x4cf8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4cf900:
    // 0x4cf900: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x4cf900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4cf904:
    // 0x4cf904: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4cf904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4cf908:
    // 0x4cf908: 0x320f809  jalr        $t9
label_4cf90c:
    if (ctx->pc == 0x4CF90Cu) {
        ctx->pc = 0x4CF90Cu;
            // 0x4cf90c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4CF910u;
        goto label_4cf910;
    }
    ctx->pc = 0x4CF908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CF910u);
        ctx->pc = 0x4CF90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF908u;
            // 0x4cf90c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CF910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CF910u; }
            if (ctx->pc != 0x4CF910u) { return; }
        }
        }
    }
    ctx->pc = 0x4CF910u;
label_4cf910:
    // 0x4cf910: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x4cf910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_4cf914:
    // 0x4cf914: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x4cf914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
label_4cf918:
    // 0x4cf918: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cf918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cf91c:
    // 0x4cf91c: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x4cf91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
label_4cf920:
    // 0x4cf920: 0xa2230078  sb          $v1, 0x78($s1)
    ctx->pc = 0x4cf920u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 3));
label_4cf924:
    // 0x4cf924: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x4cf924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_4cf928:
    // 0x4cf928: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4cf928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_4cf92c:
    // 0x4cf92c: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x4cf92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
label_4cf930:
    // 0x4cf930: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cf930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cf934:
    // 0x4cf934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cf934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cf938:
    // 0x4cf938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cf938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cf93c:
    // 0x4cf93c: 0x3e00008  jr          $ra
label_4cf940:
    if (ctx->pc == 0x4CF940u) {
        ctx->pc = 0x4CF940u;
            // 0x4cf940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CF944u;
        goto label_4cf944;
    }
    ctx->pc = 0x4CF93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF93Cu;
            // 0x4cf940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CF944u;
label_4cf944:
    // 0x4cf944: 0x0  nop
    ctx->pc = 0x4cf944u;
    // NOP
label_4cf948:
    // 0x4cf948: 0x0  nop
    ctx->pc = 0x4cf948u;
    // NOP
label_4cf94c:
    // 0x4cf94c: 0x0  nop
    ctx->pc = 0x4cf94cu;
    // NOP
label_4cf950:
    // 0x4cf950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cf950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4cf954:
    // 0x4cf954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cf954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4cf958:
    // 0x4cf958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cf958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cf95c:
    // 0x4cf95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cf95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cf960:
    // 0x4cf960: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x4cf960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4cf964:
    // 0x4cf964: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_4cf968:
    if (ctx->pc == 0x4CF968u) {
        ctx->pc = 0x4CF968u;
            // 0x4cf968: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x4CF96Cu;
        goto label_4cf96c;
    }
    ctx->pc = 0x4CF964u;
    {
        const bool branch_taken_0x4cf964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf964) {
            ctx->pc = 0x4CF968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF964u;
            // 0x4cf968: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CF98Cu;
            goto label_4cf98c;
        }
    }
    ctx->pc = 0x4CF96Cu;
label_4cf96c:
    // 0x4cf96c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4cf970:
    if (ctx->pc == 0x4CF970u) {
        ctx->pc = 0x4CF970u;
            // 0x4cf970: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4CF974u;
        goto label_4cf974;
    }
    ctx->pc = 0x4CF96Cu;
    {
        const bool branch_taken_0x4cf96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf96c) {
            ctx->pc = 0x4CF970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF96Cu;
            // 0x4cf970: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CF988u;
            goto label_4cf988;
        }
    }
    ctx->pc = 0x4CF974u;
label_4cf974:
    // 0x4cf974: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cf974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cf978:
    // 0x4cf978: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4cf978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4cf97c:
    // 0x4cf97c: 0x320f809  jalr        $t9
label_4cf980:
    if (ctx->pc == 0x4CF980u) {
        ctx->pc = 0x4CF980u;
            // 0x4cf980: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CF984u;
        goto label_4cf984;
    }
    ctx->pc = 0x4CF97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CF984u);
        ctx->pc = 0x4CF980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF97Cu;
            // 0x4cf980: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CF984u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CF984u; }
            if (ctx->pc != 0x4CF984u) { return; }
        }
        }
    }
    ctx->pc = 0x4CF984u;
label_4cf984:
    // 0x4cf984: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4cf984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4cf988:
    // 0x4cf988: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x4cf988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4cf98c:
    // 0x4cf98c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4cf990:
    if (ctx->pc == 0x4CF990u) {
        ctx->pc = 0x4CF990u;
            // 0x4cf990: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x4CF994u;
        goto label_4cf994;
    }
    ctx->pc = 0x4CF98Cu;
    {
        const bool branch_taken_0x4cf98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf98c) {
            ctx->pc = 0x4CF990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF98Cu;
            // 0x4cf990: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CF9A8u;
            goto label_4cf9a8;
        }
    }
    ctx->pc = 0x4CF994u;
label_4cf994:
    // 0x4cf994: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cf994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cf998:
    // 0x4cf998: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4cf998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4cf99c:
    // 0x4cf99c: 0x320f809  jalr        $t9
label_4cf9a0:
    if (ctx->pc == 0x4CF9A0u) {
        ctx->pc = 0x4CF9A0u;
            // 0x4cf9a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CF9A4u;
        goto label_4cf9a4;
    }
    ctx->pc = 0x4CF99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CF9A4u);
        ctx->pc = 0x4CF9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF99Cu;
            // 0x4cf9a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CF9A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CF9A4u; }
            if (ctx->pc != 0x4CF9A4u) { return; }
        }
        }
    }
    ctx->pc = 0x4CF9A4u;
label_4cf9a4:
    // 0x4cf9a4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x4cf9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_4cf9a8:
    // 0x4cf9a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cf9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4cf9ac:
    // 0x4cf9ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cf9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cf9b0:
    // 0x4cf9b0: 0x3e00008  jr          $ra
label_4cf9b4:
    if (ctx->pc == 0x4CF9B4u) {
        ctx->pc = 0x4CF9B4u;
            // 0x4cf9b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4CF9B8u;
        goto label_4cf9b8;
    }
    ctx->pc = 0x4CF9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF9B0u;
            // 0x4cf9b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CF9B8u;
label_4cf9b8:
    // 0x4cf9b8: 0x0  nop
    ctx->pc = 0x4cf9b8u;
    // NOP
label_4cf9bc:
    // 0x4cf9bc: 0x0  nop
    ctx->pc = 0x4cf9bcu;
    // NOP
label_4cf9c0:
    // 0x4cf9c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4cf9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4cf9c4:
    // 0x4cf9c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cf9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4cf9c8:
    // 0x4cf9c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4cf9c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cf9cc:
    // 0x4cf9cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cf9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cf9d0:
    // 0x4cf9d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cf9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cf9d4:
    // 0x4cf9d4: 0xc4830030  lwc1        $f3, 0x30($a0)
    ctx->pc = 0x4cf9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4cf9d8:
    // 0x4cf9d8: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x4cf9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4cf9dc:
    // 0x4cf9dc: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x4cf9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cf9e0:
    // 0x4cf9e0: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x4cf9e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cf9e4:
    // 0x4cf9e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_4cf9e8:
    if (ctx->pc == 0x4CF9E8u) {
        ctx->pc = 0x4CF9E8u;
            // 0x4cf9e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CF9ECu;
        goto label_4cf9ec;
    }
    ctx->pc = 0x4CF9E4u;
    {
        const bool branch_taken_0x4cf9e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4CF9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF9E4u;
            // 0x4cf9e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf9e4) {
            ctx->pc = 0x4CF9F8u;
            goto label_4cf9f8;
        }
    }
    ctx->pc = 0x4CF9ECu;
label_4cf9ec:
    // 0x4cf9ec: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x4cf9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_4cf9f0:
    // 0x4cf9f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4cf9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4cf9f4:
    // 0x4cf9f4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4cf9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4cf9f8:
    // 0x4cf9f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4cf9f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cf9fc:
    // 0x4cf9fc: 0x0  nop
    ctx->pc = 0x4cf9fcu;
    // NOP
label_4cfa00:
    // 0x4cfa00: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x4cfa00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cfa04:
    // 0x4cfa04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_4cfa08:
    if (ctx->pc == 0x4CFA08u) {
        ctx->pc = 0x4CFA0Cu;
        goto label_4cfa0c;
    }
    ctx->pc = 0x4CFA04u;
    {
        const bool branch_taken_0x4cfa04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cfa04) {
            ctx->pc = 0x4CFA18u;
            goto label_4cfa18;
        }
    }
    ctx->pc = 0x4CFA0Cu;
label_4cfa0c:
    // 0x4cfa0c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x4cfa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_4cfa10:
    // 0x4cfa10: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4cfa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4cfa14:
    // 0x4cfa14: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4cfa14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4cfa18:
    // 0x4cfa18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4cfa18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cfa1c:
    // 0x4cfa1c: 0x0  nop
    ctx->pc = 0x4cfa1cu;
    // NOP
label_4cfa20:
    // 0x4cfa20: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4cfa20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cfa24:
    // 0x4cfa24: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_4cfa28:
    if (ctx->pc == 0x4CFA28u) {
        ctx->pc = 0x4CFA2Cu;
        goto label_4cfa2c;
    }
    ctx->pc = 0x4CFA24u;
    {
        const bool branch_taken_0x4cfa24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cfa24) {
            ctx->pc = 0x4CFA38u;
            goto label_4cfa38;
        }
    }
    ctx->pc = 0x4CFA2Cu;
label_4cfa2c:
    // 0x4cfa2c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x4cfa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_4cfa30:
    // 0x4cfa30: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4cfa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4cfa34:
    // 0x4cfa34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4cfa34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4cfa38:
    // 0x4cfa38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cfa38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4cfa3c:
    // 0x4cfa3c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4cfa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4cfa40:
    // 0x4cfa40: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4cfa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4cfa44:
    // 0x4cfa44: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x4cfa44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4cfa48:
    // 0x4cfa48: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x4cfa48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4cfa4c:
    // 0x4cfa4c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4cfa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4cfa50:
    // 0x4cfa50: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x4cfa50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_4cfa54:
    // 0x4cfa54: 0xc0a7a88  jal         func_29EA20
label_4cfa58:
    if (ctx->pc == 0x4CFA58u) {
        ctx->pc = 0x4CFA58u;
            // 0x4cfa58: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x4CFA5Cu;
        goto label_4cfa5c;
    }
    ctx->pc = 0x4CFA54u;
    SET_GPR_U32(ctx, 31, 0x4CFA5Cu);
    ctx->pc = 0x4CFA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFA54u;
            // 0x4cfa58: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFA5Cu; }
        if (ctx->pc != 0x4CFA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFA5Cu; }
        if (ctx->pc != 0x4CFA5Cu) { return; }
    }
    ctx->pc = 0x4CFA5Cu;
label_4cfa5c:
    // 0x4cfa5c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4cfa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4cfa60:
    // 0x4cfa60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4cfa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cfa64:
    // 0x4cfa64: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4cfa68:
    if (ctx->pc == 0x4CFA68u) {
        ctx->pc = 0x4CFA68u;
            // 0x4cfa68: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4CFA6Cu;
        goto label_4cfa6c;
    }
    ctx->pc = 0x4CFA64u;
    {
        const bool branch_taken_0x4cfa64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFA64u;
            // 0x4cfa68: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfa64) {
            ctx->pc = 0x4CFA7Cu;
            goto label_4cfa7c;
        }
    }
    ctx->pc = 0x4CFA6Cu;
label_4cfa6c:
    // 0x4cfa6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4cfa6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4cfa70:
    // 0x4cfa70: 0xc0804bc  jal         func_2012F0
label_4cfa74:
    if (ctx->pc == 0x4CFA74u) {
        ctx->pc = 0x4CFA74u;
            // 0x4cfa74: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4CFA78u;
        goto label_4cfa78;
    }
    ctx->pc = 0x4CFA70u;
    SET_GPR_U32(ctx, 31, 0x4CFA78u);
    ctx->pc = 0x4CFA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFA70u;
            // 0x4cfa74: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFA78u; }
        if (ctx->pc != 0x4CFA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFA78u; }
        if (ctx->pc != 0x4CFA78u) { return; }
    }
    ctx->pc = 0x4CFA78u;
label_4cfa78:
    // 0x4cfa78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4cfa78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cfa7c:
    // 0x4cfa7c: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4cfa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
label_4cfa80:
    // 0x4cfa80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4cfa84:
    // 0x4cfa84: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4cfa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4cfa88:
    // 0x4cfa88: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x4cfa88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_4cfa8c:
    // 0x4cfa8c: 0xc0a7a88  jal         func_29EA20
label_4cfa90:
    if (ctx->pc == 0x4CFA90u) {
        ctx->pc = 0x4CFA90u;
            // 0x4cfa90: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x4CFA94u;
        goto label_4cfa94;
    }
    ctx->pc = 0x4CFA8Cu;
    SET_GPR_U32(ctx, 31, 0x4CFA94u);
    ctx->pc = 0x4CFA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFA8Cu;
            // 0x4cfa90: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFA94u; }
        if (ctx->pc != 0x4CFA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFA94u; }
        if (ctx->pc != 0x4CFA94u) { return; }
    }
    ctx->pc = 0x4CFA94u;
label_4cfa94:
    // 0x4cfa94: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x4cfa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_4cfa98:
    // 0x4cfa98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4cfa98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cfa9c:
    // 0x4cfa9c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4cfaa0:
    if (ctx->pc == 0x4CFAA0u) {
        ctx->pc = 0x4CFAA0u;
            // 0x4cfaa0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4CFAA4u;
        goto label_4cfaa4;
    }
    ctx->pc = 0x4CFA9Cu;
    {
        const bool branch_taken_0x4cfa9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFA9Cu;
            // 0x4cfaa0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfa9c) {
            ctx->pc = 0x4CFAD0u;
            goto label_4cfad0;
        }
    }
    ctx->pc = 0x4CFAA4u;
label_4cfaa4:
    // 0x4cfaa4: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x4cfaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4cfaa8:
    // 0x4cfaa8: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x4cfaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_4cfaac:
    // 0x4cfaac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cfaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cfab0:
    // 0x4cfab0: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x4cfab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_4cfab4:
    // 0x4cfab4: 0xc08afe0  jal         func_22BF80
label_4cfab8:
    if (ctx->pc == 0x4CFAB8u) {
        ctx->pc = 0x4CFAB8u;
            // 0x4cfab8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4CFABCu;
        goto label_4cfabc;
    }
    ctx->pc = 0x4CFAB4u;
    SET_GPR_U32(ctx, 31, 0x4CFABCu);
    ctx->pc = 0x4CFAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFAB4u;
            // 0x4cfab8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFABCu; }
        if (ctx->pc != 0x4CFABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFABCu; }
        if (ctx->pc != 0x4CFABCu) { return; }
    }
    ctx->pc = 0x4CFABCu;
label_4cfabc:
    // 0x4cfabc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cfabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cfac0:
    // 0x4cfac0: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x4cfac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_4cfac4:
    // 0x4cfac4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4cfac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4cfac8:
    // 0x4cfac8: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x4cfac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_4cfacc:
    // 0x4cfacc: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x4cfaccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_4cfad0:
    // 0x4cfad0: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x4cfad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
label_4cfad4:
    // 0x4cfad4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cfad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4cfad8:
    // 0x4cfad8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4cfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4cfadc:
    // 0x4cfadc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4cfadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4cfae0:
    // 0x4cfae0: 0xc08c798  jal         func_231E60
label_4cfae4:
    if (ctx->pc == 0x4CFAE4u) {
        ctx->pc = 0x4CFAE4u;
            // 0x4cfae4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFAE8u;
        goto label_4cfae8;
    }
    ctx->pc = 0x4CFAE0u;
    SET_GPR_U32(ctx, 31, 0x4CFAE8u);
    ctx->pc = 0x4CFAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFAE0u;
            // 0x4cfae4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFAE8u; }
        if (ctx->pc != 0x4CFAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFAE8u; }
        if (ctx->pc != 0x4CFAE8u) { return; }
    }
    ctx->pc = 0x4CFAE8u;
label_4cfae8:
    // 0x4cfae8: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x4cfae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4cfaec:
    // 0x4cfaec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4cfaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4cfaf0:
    // 0x4cfaf0: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x4cfaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4cfaf4:
    // 0x4cfaf4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4cfaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4cfaf8:
    // 0x4cfaf8: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x4cfaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cfafc:
    // 0x4cfafc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x4cfafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cfb00:
    // 0x4cfb00: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x4cfb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_4cfb04:
    // 0x4cfb04: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x4cfb04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_4cfb08:
    // 0x4cfb08: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x4cfb08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_4cfb0c:
    // 0x4cfb0c: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x4cfb0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_4cfb10:
    // 0x4cfb10: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x4cfb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4cfb14:
    // 0x4cfb14: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x4cfb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cfb18:
    // 0x4cfb18: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x4cfb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cfb1c:
    // 0x4cfb1c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x4cfb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4cfb20:
    // 0x4cfb20: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x4cfb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_4cfb24:
    // 0x4cfb24: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x4cfb24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4cfb28:
    // 0x4cfb28: 0xc0a3830  jal         func_28E0C0
label_4cfb2c:
    if (ctx->pc == 0x4CFB2Cu) {
        ctx->pc = 0x4CFB2Cu;
            // 0x4cfb2c: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x4CFB30u;
        goto label_4cfb30;
    }
    ctx->pc = 0x4CFB28u;
    SET_GPR_U32(ctx, 31, 0x4CFB30u);
    ctx->pc = 0x4CFB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFB28u;
            // 0x4cfb2c: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFB30u; }
        if (ctx->pc != 0x4CFB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFB30u; }
        if (ctx->pc != 0x4CFB30u) { return; }
    }
    ctx->pc = 0x4CFB30u;
label_4cfb30:
    // 0x4cfb30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cfb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cfb34:
    // 0x4cfb34: 0xc08af10  jal         func_22BC40
label_4cfb38:
    if (ctx->pc == 0x4CFB38u) {
        ctx->pc = 0x4CFB38u;
            // 0x4cfb38: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CFB3Cu;
        goto label_4cfb3c;
    }
    ctx->pc = 0x4CFB34u;
    SET_GPR_U32(ctx, 31, 0x4CFB3Cu);
    ctx->pc = 0x4CFB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFB34u;
            // 0x4cfb38: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFB3Cu; }
        if (ctx->pc != 0x4CFB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFB3Cu; }
        if (ctx->pc != 0x4CFB3Cu) { return; }
    }
    ctx->pc = 0x4CFB3Cu;
label_4cfb3c:
    // 0x4cfb3c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x4cfb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_4cfb40:
    // 0x4cfb40: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4cfb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4cfb44:
    // 0x4cfb44: 0x24637b10  addiu       $v1, $v1, 0x7B10
    ctx->pc = 0x4cfb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31504));
label_4cfb48:
    // 0x4cfb48: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4cfb48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4cfb4c:
    // 0x4cfb4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4cfb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4cfb50:
    // 0x4cfb50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4cfb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cfb54:
    // 0x4cfb54: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x4cfb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_4cfb58:
    // 0x4cfb58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cfb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cfb5c:
    // 0x4cfb5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cfb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cfb60:
    // 0x4cfb60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cfb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cfb64:
    // 0x4cfb64: 0x3e00008  jr          $ra
label_4cfb68:
    if (ctx->pc == 0x4CFB68u) {
        ctx->pc = 0x4CFB68u;
            // 0x4cfb68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4CFB6Cu;
        goto label_4cfb6c;
    }
    ctx->pc = 0x4CFB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CFB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFB64u;
            // 0x4cfb68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CFB6Cu;
label_4cfb6c:
    // 0x4cfb6c: 0x0  nop
    ctx->pc = 0x4cfb6cu;
    // NOP
label_4cfb70:
    // 0x4cfb70: 0x3e00008  jr          $ra
label_4cfb74:
    if (ctx->pc == 0x4CFB74u) {
        ctx->pc = 0x4CFB74u;
            // 0x4cfb74: 0x24020898  addiu       $v0, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->pc = 0x4CFB78u;
        goto label_4cfb78;
    }
    ctx->pc = 0x4CFB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CFB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFB70u;
            // 0x4cfb74: 0x24020898  addiu       $v0, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CFB78u;
label_4cfb78:
    // 0x4cfb78: 0x0  nop
    ctx->pc = 0x4cfb78u;
    // NOP
label_4cfb7c:
    // 0x4cfb7c: 0x0  nop
    ctx->pc = 0x4cfb7cu;
    // NOP
label_4cfb80:
    // 0x4cfb80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4cfb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4cfb84:
    // 0x4cfb84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4cfb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4cfb88:
    // 0x4cfb88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4cfb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4cfb8c:
    // 0x4cfb8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4cfb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4cfb90:
    // 0x4cfb90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4cfb90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cfb94:
    // 0x4cfb94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4cfb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4cfb98:
    // 0x4cfb98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cfb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cfb9c:
    // 0x4cfb9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cfb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cfba0:
    // 0x4cfba0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4cfba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4cfba4:
    // 0x4cfba4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4cfba8:
    if (ctx->pc == 0x4CFBA8u) {
        ctx->pc = 0x4CFBA8u;
            // 0x4cfba8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFBACu;
        goto label_4cfbac;
    }
    ctx->pc = 0x4CFBA4u;
    {
        const bool branch_taken_0x4cfba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFBA4u;
            // 0x4cfba8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfba4) {
            ctx->pc = 0x4CFBE8u;
            goto label_4cfbe8;
        }
    }
    ctx->pc = 0x4CFBACu;
label_4cfbac:
    // 0x4cfbac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4cfbacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cfbb0:
    // 0x4cfbb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4cfbb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cfbb4:
    // 0x4cfbb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4cfbb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cfbb8:
    // 0x4cfbb8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4cfbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4cfbbc:
    // 0x4cfbbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4cfbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4cfbc0:
    // 0x4cfbc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4cfbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4cfbc4:
    // 0x4cfbc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cfbc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cfbc8:
    // 0x4cfbc8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4cfbc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4cfbcc:
    // 0x4cfbcc: 0x320f809  jalr        $t9
label_4cfbd0:
    if (ctx->pc == 0x4CFBD0u) {
        ctx->pc = 0x4CFBD4u;
        goto label_4cfbd4;
    }
    ctx->pc = 0x4CFBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CFBD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CFBD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CFBD4u; }
            if (ctx->pc != 0x4CFBD4u) { return; }
        }
        }
    }
    ctx->pc = 0x4CFBD4u;
label_4cfbd4:
    // 0x4cfbd4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4cfbd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4cfbd8:
    // 0x4cfbd8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4cfbd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4cfbdc:
    // 0x4cfbdc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4cfbdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4cfbe0:
    // 0x4cfbe0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4cfbe4:
    if (ctx->pc == 0x4CFBE4u) {
        ctx->pc = 0x4CFBE4u;
            // 0x4cfbe4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4CFBE8u;
        goto label_4cfbe8;
    }
    ctx->pc = 0x4CFBE0u;
    {
        const bool branch_taken_0x4cfbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CFBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFBE0u;
            // 0x4cfbe4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfbe0) {
            ctx->pc = 0x4CFBB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cfbb8;
        }
    }
    ctx->pc = 0x4CFBE8u;
label_4cfbe8:
    // 0x4cfbe8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4cfbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4cfbec:
    // 0x4cfbec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4cfbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4cfbf0:
    // 0x4cfbf0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4cfbf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4cfbf4:
    // 0x4cfbf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4cfbf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4cfbf8:
    // 0x4cfbf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4cfbf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4cfbfc:
    // 0x4cfbfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cfbfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cfc00:
    // 0x4cfc00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cfc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cfc04:
    // 0x4cfc04: 0x3e00008  jr          $ra
label_4cfc08:
    if (ctx->pc == 0x4CFC08u) {
        ctx->pc = 0x4CFC08u;
            // 0x4cfc08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4CFC0Cu;
        goto label_4cfc0c;
    }
    ctx->pc = 0x4CFC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CFC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFC04u;
            // 0x4cfc08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CFC0Cu;
label_4cfc0c:
    // 0x4cfc0c: 0x0  nop
    ctx->pc = 0x4cfc0cu;
    // NOP
label_4cfc10:
    // 0x4cfc10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cfc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4cfc14:
    // 0x4cfc14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4cfc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cfc18:
    // 0x4cfc18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cfc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4cfc1c:
    // 0x4cfc1c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4cfc1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4cfc20:
    // 0x4cfc20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cfc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cfc24:
    // 0x4cfc24: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4cfc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4cfc28:
    // 0x4cfc28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4cfc28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4cfc2c:
    // 0x4cfc2c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4cfc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4cfc30:
    // 0x4cfc30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4cfc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4cfc34:
    // 0x4cfc34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4cfc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4cfc38:
    // 0x4cfc38: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4cfc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4cfc3c:
    // 0x4cfc3c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4cfc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cfc40:
    // 0x4cfc40: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4cfc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4cfc44:
    // 0x4cfc44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4cfc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4cfc48:
    // 0x4cfc48: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4cfc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4cfc4c:
    // 0x4cfc4c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4cfc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4cfc50:
    // 0x4cfc50: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4cfc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4cfc54:
    // 0x4cfc54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4cfc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4cfc58:
    // 0x4cfc58: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4cfc58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4cfc5c:
    // 0x4cfc5c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4cfc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4cfc60:
    // 0x4cfc60: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4cfc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4cfc64:
    // 0x4cfc64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4cfc64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4cfc68:
    // 0x4cfc68: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4cfc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4cfc6c:
    // 0x4cfc6c: 0xc0a997c  jal         func_2A65F0
label_4cfc70:
    if (ctx->pc == 0x4CFC70u) {
        ctx->pc = 0x4CFC70u;
            // 0x4cfc70: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4CFC74u;
        goto label_4cfc74;
    }
    ctx->pc = 0x4CFC6Cu;
    SET_GPR_U32(ctx, 31, 0x4CFC74u);
    ctx->pc = 0x4CFC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFC6Cu;
            // 0x4cfc70: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFC74u; }
        if (ctx->pc != 0x4CFC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFC74u; }
        if (ctx->pc != 0x4CFC74u) { return; }
    }
    ctx->pc = 0x4CFC74u;
label_4cfc74:
    // 0x4cfc74: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4cfc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4cfc78:
    // 0x4cfc78: 0xc0d879c  jal         func_361E70
label_4cfc7c:
    if (ctx->pc == 0x4CFC7Cu) {
        ctx->pc = 0x4CFC7Cu;
            // 0x4cfc7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFC80u;
        goto label_4cfc80;
    }
    ctx->pc = 0x4CFC78u;
    SET_GPR_U32(ctx, 31, 0x4CFC80u);
    ctx->pc = 0x4CFC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFC78u;
            // 0x4cfc7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFC80u; }
        if (ctx->pc != 0x4CFC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFC80u; }
        if (ctx->pc != 0x4CFC80u) { return; }
    }
    ctx->pc = 0x4CFC80u;
label_4cfc80:
    // 0x4cfc80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cfc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4cfc84:
    // 0x4cfc84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cfc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cfc88:
    // 0x4cfc88: 0x3e00008  jr          $ra
label_4cfc8c:
    if (ctx->pc == 0x4CFC8Cu) {
        ctx->pc = 0x4CFC8Cu;
            // 0x4cfc8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CFC90u;
        goto label_4cfc90;
    }
    ctx->pc = 0x4CFC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CFC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFC88u;
            // 0x4cfc8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CFC90u;
label_4cfc90:
    // 0x4cfc90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cfc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4cfc94:
    // 0x4cfc94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cfc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4cfc98:
    // 0x4cfc98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cfc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cfc9c:
    // 0x4cfc9c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4cfc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4cfca0:
    // 0x4cfca0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4cfca4:
    if (ctx->pc == 0x4CFCA4u) {
        ctx->pc = 0x4CFCA4u;
            // 0x4cfca4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFCA8u;
        goto label_4cfca8;
    }
    ctx->pc = 0x4CFCA0u;
    {
        const bool branch_taken_0x4cfca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFCA0u;
            // 0x4cfca4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfca0) {
            ctx->pc = 0x4CFDC0u;
            goto label_4cfdc0;
        }
    }
    ctx->pc = 0x4CFCA8u;
label_4cfca8:
    // 0x4cfca8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4cfca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4cfcac:
    // 0x4cfcac: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4cfcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4cfcb0:
    // 0x4cfcb0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4cfcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4cfcb4:
    // 0x4cfcb4: 0xc075128  jal         func_1D44A0
label_4cfcb8:
    if (ctx->pc == 0x4CFCB8u) {
        ctx->pc = 0x4CFCB8u;
            // 0x4cfcb8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4CFCBCu;
        goto label_4cfcbc;
    }
    ctx->pc = 0x4CFCB4u;
    SET_GPR_U32(ctx, 31, 0x4CFCBCu);
    ctx->pc = 0x4CFCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFCB4u;
            // 0x4cfcb8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFCBCu; }
        if (ctx->pc != 0x4CFCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFCBCu; }
        if (ctx->pc != 0x4CFCBCu) { return; }
    }
    ctx->pc = 0x4CFCBCu;
label_4cfcbc:
    // 0x4cfcbc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4cfcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4cfcc0:
    // 0x4cfcc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cfcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4cfcc4:
    // 0x4cfcc4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4cfcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4cfcc8:
    // 0x4cfcc8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4cfcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4cfccc:
    // 0x4cfccc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4cfcccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4cfcd0:
    // 0x4cfcd0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4cfcd4:
    if (ctx->pc == 0x4CFCD4u) {
        ctx->pc = 0x4CFCD4u;
            // 0x4cfcd4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4CFCD8u;
        goto label_4cfcd8;
    }
    ctx->pc = 0x4CFCD0u;
    {
        const bool branch_taken_0x4cfcd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFCD0u;
            // 0x4cfcd4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfcd0) {
            ctx->pc = 0x4CFCE0u;
            goto label_4cfce0;
        }
    }
    ctx->pc = 0x4CFCD8u;
label_4cfcd8:
    // 0x4cfcd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cfcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4cfcdc:
    // 0x4cfcdc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4cfcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4cfce0:
    // 0x4cfce0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4cfce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cfce4:
    // 0x4cfce4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cfce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4cfce8:
    // 0x4cfce8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4cfce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4cfcec:
    // 0x4cfcec: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4cfcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4cfcf0:
    // 0x4cfcf0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4cfcf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4cfcf4:
    // 0x4cfcf4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4cfcf8:
    if (ctx->pc == 0x4CFCF8u) {
        ctx->pc = 0x4CFCF8u;
            // 0x4cfcf8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4CFCFCu;
        goto label_4cfcfc;
    }
    ctx->pc = 0x4CFCF4u;
    {
        const bool branch_taken_0x4cfcf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cfcf4) {
            ctx->pc = 0x4CFCF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFCF4u;
            // 0x4cfcf8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CFD08u;
            goto label_4cfd08;
        }
    }
    ctx->pc = 0x4CFCFCu;
label_4cfcfc:
    // 0x4cfcfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cfcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4cfd00:
    // 0x4cfd00: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4cfd00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4cfd04:
    // 0x4cfd04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4cfd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cfd08:
    // 0x4cfd08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cfd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4cfd0c:
    // 0x4cfd0c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4cfd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4cfd10:
    // 0x4cfd10: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4cfd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4cfd14:
    // 0x4cfd14: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4cfd14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4cfd18:
    // 0x4cfd18: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4cfd1c:
    if (ctx->pc == 0x4CFD1Cu) {
        ctx->pc = 0x4CFD1Cu;
            // 0x4cfd1c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4CFD20u;
        goto label_4cfd20;
    }
    ctx->pc = 0x4CFD18u;
    {
        const bool branch_taken_0x4cfd18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cfd18) {
            ctx->pc = 0x4CFD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFD18u;
            // 0x4cfd1c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CFD2Cu;
            goto label_4cfd2c;
        }
    }
    ctx->pc = 0x4CFD20u;
label_4cfd20:
    // 0x4cfd20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4cfd24:
    // 0x4cfd24: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4cfd24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4cfd28:
    // 0x4cfd28: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4cfd28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4cfd2c:
    // 0x4cfd2c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4cfd2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4cfd30:
    // 0x4cfd30: 0x320f809  jalr        $t9
label_4cfd34:
    if (ctx->pc == 0x4CFD34u) {
        ctx->pc = 0x4CFD34u;
            // 0x4cfd34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFD38u;
        goto label_4cfd38;
    }
    ctx->pc = 0x4CFD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CFD38u);
        ctx->pc = 0x4CFD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFD30u;
            // 0x4cfd34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CFD38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CFD38u; }
            if (ctx->pc != 0x4CFD38u) { return; }
        }
        }
    }
    ctx->pc = 0x4CFD38u;
label_4cfd38:
    // 0x4cfd38: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4cfd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4cfd3c:
    // 0x4cfd3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4cfd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4cfd40:
    // 0x4cfd40: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4cfd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4cfd44:
    // 0x4cfd44: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4cfd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4cfd48:
    // 0x4cfd48: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4cfd48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4cfd4c:
    // 0x4cfd4c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4cfd4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4cfd50:
    // 0x4cfd50: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4cfd54:
    if (ctx->pc == 0x4CFD54u) {
        ctx->pc = 0x4CFD54u;
            // 0x4cfd54: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4CFD58u;
        goto label_4cfd58;
    }
    ctx->pc = 0x4CFD50u;
    {
        const bool branch_taken_0x4cfd50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cfd50) {
            ctx->pc = 0x4CFD54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFD50u;
            // 0x4cfd54: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CFD64u;
            goto label_4cfd64;
        }
    }
    ctx->pc = 0x4CFD58u;
label_4cfd58:
    // 0x4cfd58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4cfd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4cfd5c:
    // 0x4cfd5c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4cfd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4cfd60:
    // 0x4cfd60: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4cfd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4cfd64:
    // 0x4cfd64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4cfd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4cfd68:
    // 0x4cfd68: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4cfd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4cfd6c:
    // 0x4cfd6c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4cfd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4cfd70:
    // 0x4cfd70: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4cfd70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4cfd74:
    // 0x4cfd74: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4cfd74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4cfd78:
    // 0x4cfd78: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4cfd7c:
    if (ctx->pc == 0x4CFD7Cu) {
        ctx->pc = 0x4CFD80u;
        goto label_4cfd80;
    }
    ctx->pc = 0x4CFD78u;
    {
        const bool branch_taken_0x4cfd78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cfd78) {
            ctx->pc = 0x4CFD88u;
            goto label_4cfd88;
        }
    }
    ctx->pc = 0x4CFD80u;
label_4cfd80:
    // 0x4cfd80: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4cfd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4cfd84:
    // 0x4cfd84: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4cfd84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4cfd88:
    // 0x4cfd88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4cfd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4cfd8c:
    // 0x4cfd8c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4cfd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4cfd90:
    // 0x4cfd90: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4cfd90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4cfd94:
    // 0x4cfd94: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4cfd98:
    if (ctx->pc == 0x4CFD98u) {
        ctx->pc = 0x4CFD9Cu;
        goto label_4cfd9c;
    }
    ctx->pc = 0x4CFD94u;
    {
        const bool branch_taken_0x4cfd94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cfd94) {
            ctx->pc = 0x4CFDA4u;
            goto label_4cfda4;
        }
    }
    ctx->pc = 0x4CFD9Cu;
label_4cfd9c:
    // 0x4cfd9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4cfd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4cfda0:
    // 0x4cfda0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4cfda0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4cfda4:
    // 0x4cfda4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4cfda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4cfda8:
    // 0x4cfda8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4cfda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4cfdac:
    // 0x4cfdac: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4cfdacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4cfdb0:
    // 0x4cfdb0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4cfdb4:
    if (ctx->pc == 0x4CFDB4u) {
        ctx->pc = 0x4CFDB4u;
            // 0x4cfdb4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4CFDB8u;
        goto label_4cfdb8;
    }
    ctx->pc = 0x4CFDB0u;
    {
        const bool branch_taken_0x4cfdb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cfdb0) {
            ctx->pc = 0x4CFDB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFDB0u;
            // 0x4cfdb4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CFDC4u;
            goto label_4cfdc4;
        }
    }
    ctx->pc = 0x4CFDB8u;
label_4cfdb8:
    // 0x4cfdb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4cfdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4cfdbc:
    // 0x4cfdbc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4cfdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4cfdc0:
    // 0x4cfdc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cfdc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4cfdc4:
    // 0x4cfdc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cfdc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cfdc8:
    // 0x4cfdc8: 0x3e00008  jr          $ra
label_4cfdcc:
    if (ctx->pc == 0x4CFDCCu) {
        ctx->pc = 0x4CFDCCu;
            // 0x4cfdcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4CFDD0u;
        goto label_4cfdd0;
    }
    ctx->pc = 0x4CFDC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CFDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFDC8u;
            // 0x4cfdcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CFDD0u;
label_4cfdd0:
    // 0x4cfdd0: 0x8133bfc  j           func_4CEFF0
label_4cfdd4:
    if (ctx->pc == 0x4CFDD4u) {
        ctx->pc = 0x4CFDD4u;
            // 0x4cfdd4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4CFDD8u;
        goto label_4cfdd8;
    }
    ctx->pc = 0x4CFDD0u;
    ctx->pc = 0x4CFDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFDD0u;
            // 0x4cfdd4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CEFF0u;
    {
        auto targetFn = runtime->lookupFunction(0x4CEFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CFDD8u;
label_4cfdd8:
    // 0x4cfdd8: 0x0  nop
    ctx->pc = 0x4cfdd8u;
    // NOP
label_4cfddc:
    // 0x4cfddc: 0x0  nop
    ctx->pc = 0x4cfddcu;
    // NOP
label_4cfde0:
    // 0x4cfde0: 0x8133ce8  j           func_4CF3A0
label_4cfde4:
    if (ctx->pc == 0x4CFDE4u) {
        ctx->pc = 0x4CFDE4u;
            // 0x4cfde4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4CFDE8u;
        goto label_4cfde8;
    }
    ctx->pc = 0x4CFDE0u;
    ctx->pc = 0x4CFDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFDE0u;
            // 0x4cfde4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CF3A0u;
    {
        auto targetFn = runtime->lookupFunction(0x4CF3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CFDE8u;
label_4cfde8:
    // 0x4cfde8: 0x0  nop
    ctx->pc = 0x4cfde8u;
    // NOP
label_4cfdec:
    // 0x4cfdec: 0x0  nop
    ctx->pc = 0x4cfdecu;
    // NOP
label_4cfdf0:
    // 0x4cfdf0: 0x8133ba4  j           func_4CEE90
label_4cfdf4:
    if (ctx->pc == 0x4CFDF4u) {
        ctx->pc = 0x4CFDF4u;
            // 0x4cfdf4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4CFDF8u;
        goto label_4cfdf8;
    }
    ctx->pc = 0x4CFDF0u;
    ctx->pc = 0x4CFDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFDF0u;
            // 0x4cfdf4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CEE90u;
    if (runtime->hasFunction(0x4CEE90u)) {
        auto targetFn = runtime->lookupFunction(0x4CEE90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004CEE90_0x4cee90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4CFDF8u;
label_4cfdf8:
    // 0x4cfdf8: 0x0  nop
    ctx->pc = 0x4cfdf8u;
    // NOP
label_4cfdfc:
    // 0x4cfdfc: 0x0  nop
    ctx->pc = 0x4cfdfcu;
    // NOP
label_4cfe00:
    // 0x4cfe00: 0x8133b80  j           func_4CEE00
label_4cfe04:
    if (ctx->pc == 0x4CFE04u) {
        ctx->pc = 0x4CFE04u;
            // 0x4cfe04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4CFE08u;
        goto label_4cfe08;
    }
    ctx->pc = 0x4CFE00u;
    ctx->pc = 0x4CFE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFE00u;
            // 0x4cfe04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CEE00u;
    {
        auto targetFn = runtime->lookupFunction(0x4CEE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CFE08u;
label_4cfe08:
    // 0x4cfe08: 0x0  nop
    ctx->pc = 0x4cfe08u;
    // NOP
label_4cfe0c:
    // 0x4cfe0c: 0x0  nop
    ctx->pc = 0x4cfe0cu;
    // NOP
label_4cfe10:
    // 0x4cfe10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4cfe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4cfe14:
    // 0x4cfe14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4cfe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4cfe18:
    // 0x4cfe18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4cfe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4cfe1c:
    // 0x4cfe1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cfe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cfe20:
    // 0x4cfe20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4cfe20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cfe24:
    // 0x4cfe24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cfe24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cfe28:
    // 0x4cfe28: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
label_4cfe2c:
    if (ctx->pc == 0x4CFE2Cu) {
        ctx->pc = 0x4CFE2Cu;
            // 0x4cfe2c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFE30u;
        goto label_4cfe30;
    }
    ctx->pc = 0x4CFE28u;
    {
        const bool branch_taken_0x4cfe28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFE28u;
            // 0x4cfe2c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfe28) {
            ctx->pc = 0x4CFED0u;
            goto label_4cfed0;
        }
    }
    ctx->pc = 0x4CFE30u;
label_4cfe30:
    // 0x4cfe30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cfe30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4cfe34:
    // 0x4cfe34: 0x24421ee0  addiu       $v0, $v0, 0x1EE0
    ctx->pc = 0x4cfe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7904));
label_4cfe38:
    // 0x4cfe38: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
label_4cfe3c:
    if (ctx->pc == 0x4CFE3Cu) {
        ctx->pc = 0x4CFE3Cu;
            // 0x4cfe3c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4CFE40u;
        goto label_4cfe40;
    }
    ctx->pc = 0x4CFE38u;
    {
        const bool branch_taken_0x4cfe38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFE38u;
            // 0x4cfe3c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfe38) {
            ctx->pc = 0x4CFEB8u;
            goto label_4cfeb8;
        }
    }
    ctx->pc = 0x4CFE40u;
label_4cfe40:
    // 0x4cfe40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cfe40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cfe44:
    // 0x4cfe44: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4cfe44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4cfe48:
    // 0x4cfe48: 0x24424be0  addiu       $v0, $v0, 0x4BE0
    ctx->pc = 0x4cfe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19424));
label_4cfe4c:
    // 0x4cfe4c: 0x2484bdc0  addiu       $a0, $a0, -0x4240
    ctx->pc = 0x4cfe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
label_4cfe50:
    // 0x4cfe50: 0xc0ad6c4  jal         func_2B5B10
label_4cfe54:
    if (ctx->pc == 0x4CFE54u) {
        ctx->pc = 0x4CFE54u;
            // 0x4cfe54: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4CFE58u;
        goto label_4cfe58;
    }
    ctx->pc = 0x4CFE50u;
    SET_GPR_U32(ctx, 31, 0x4CFE58u);
    ctx->pc = 0x4CFE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFE50u;
            // 0x4cfe54: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFE58u; }
        if (ctx->pc != 0x4CFE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFE58u; }
        if (ctx->pc != 0x4CFE58u) { return; }
    }
    ctx->pc = 0x4CFE58u;
label_4cfe58:
    // 0x4cfe58: 0xc0c05c4  jal         func_301710
label_4cfe5c:
    if (ctx->pc == 0x4CFE5Cu) {
        ctx->pc = 0x4CFE60u;
        goto label_4cfe60;
    }
    ctx->pc = 0x4CFE58u;
    SET_GPR_U32(ctx, 31, 0x4CFE60u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFE60u; }
        if (ctx->pc != 0x4CFE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFE60u; }
        if (ctx->pc != 0x4CFE60u) { return; }
    }
    ctx->pc = 0x4CFE60u;
label_4cfe60:
    // 0x4cfe60: 0xc077318  jal         func_1DCC60
label_4cfe64:
    if (ctx->pc == 0x4CFE64u) {
        ctx->pc = 0x4CFE64u;
            // 0x4cfe64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFE68u;
        goto label_4cfe68;
    }
    ctx->pc = 0x4CFE60u;
    SET_GPR_U32(ctx, 31, 0x4CFE68u);
    ctx->pc = 0x4CFE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFE60u;
            // 0x4cfe64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFE68u; }
        if (ctx->pc != 0x4CFE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFE68u; }
        if (ctx->pc != 0x4CFE68u) { return; }
    }
    ctx->pc = 0x4CFE68u;
label_4cfe68:
    // 0x4cfe68: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4cfe68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4cfe6c:
    // 0x4cfe6c: 0xc0c58f4  jal         func_3163D0
label_4cfe70:
    if (ctx->pc == 0x4CFE70u) {
        ctx->pc = 0x4CFE70u;
            // 0x4cfe70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFE74u;
        goto label_4cfe74;
    }
    ctx->pc = 0x4CFE6Cu;
    SET_GPR_U32(ctx, 31, 0x4CFE74u);
    ctx->pc = 0x4CFE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFE6Cu;
            // 0x4cfe70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3163D0u;
    if (runtime->hasFunction(0x3163D0u)) {
        auto targetFn = runtime->lookupFunction(0x3163D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFE74u; }
        if (ctx->pc != 0x4CFE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003163D0_0x3163d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFE74u; }
        if (ctx->pc != 0x4CFE74u) { return; }
    }
    ctx->pc = 0x4CFE74u;
label_4cfe74:
    // 0x4cfe74: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x4cfe74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4cfe78:
    // 0x4cfe78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4cfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cfe7c:
    // 0x4cfe7c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4cfe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cfe80:
    // 0x4cfe80: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_4cfe84:
    if (ctx->pc == 0x4CFE84u) {
        ctx->pc = 0x4CFE84u;
            // 0x4cfe84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFE88u;
        goto label_4cfe88;
    }
    ctx->pc = 0x4CFE80u;
    {
        const bool branch_taken_0x4cfe80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4cfe80) {
            ctx->pc = 0x4CFE84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFE80u;
            // 0x4cfe84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CFEB0u;
            goto label_4cfeb0;
        }
    }
    ctx->pc = 0x4CFE88u;
label_4cfe88:
    // 0x4cfe88: 0x9242005b  lbu         $v0, 0x5B($s2)
    ctx->pc = 0x4cfe88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 91)));
label_4cfe8c:
    // 0x4cfe8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4cfe90:
    if (ctx->pc == 0x4CFE90u) {
        ctx->pc = 0x4CFE94u;
        goto label_4cfe94;
    }
    ctx->pc = 0x4CFE8Cu;
    {
        const bool branch_taken_0x4cfe8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cfe8c) {
            ctx->pc = 0x4CFEACu;
            goto label_4cfeac;
        }
    }
    ctx->pc = 0x4CFE94u;
label_4cfe94:
    // 0x4cfe94: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4cfe94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4cfe98:
    // 0x4cfe98: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x4cfe98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_4cfe9c:
    // 0x4cfe9c: 0x320f809  jalr        $t9
label_4cfea0:
    if (ctx->pc == 0x4CFEA0u) {
        ctx->pc = 0x4CFEA0u;
            // 0x4cfea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFEA4u;
        goto label_4cfea4;
    }
    ctx->pc = 0x4CFE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CFEA4u);
        ctx->pc = 0x4CFEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFE9Cu;
            // 0x4cfea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CFEA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CFEA4u; }
            if (ctx->pc != 0x4CFEA4u) { return; }
        }
        }
    }
    ctx->pc = 0x4CFEA4u;
label_4cfea4:
    // 0x4cfea4: 0xc074708  jal         func_1D1C20
label_4cfea8:
    if (ctx->pc == 0x4CFEA8u) {
        ctx->pc = 0x4CFEA8u;
            // 0x4cfea8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4CFEACu;
        goto label_4cfeac;
    }
    ctx->pc = 0x4CFEA4u;
    SET_GPR_U32(ctx, 31, 0x4CFEACu);
    ctx->pc = 0x4CFEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFEA4u;
            // 0x4cfea8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C20u;
    if (runtime->hasFunction(0x1D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x1D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFEACu; }
        if (ctx->pc != 0x4CFEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1C20_0x1d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFEACu; }
        if (ctx->pc != 0x4CFEACu) { return; }
    }
    ctx->pc = 0x4CFEACu;
label_4cfeac:
    // 0x4cfeac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cfeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4cfeb0:
    // 0x4cfeb0: 0xc075bf8  jal         func_1D6FE0
label_4cfeb4:
    if (ctx->pc == 0x4CFEB4u) {
        ctx->pc = 0x4CFEB4u;
            // 0x4cfeb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFEB8u;
        goto label_4cfeb8;
    }
    ctx->pc = 0x4CFEB0u;
    SET_GPR_U32(ctx, 31, 0x4CFEB8u);
    ctx->pc = 0x4CFEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFEB0u;
            // 0x4cfeb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFEB8u; }
        if (ctx->pc != 0x4CFEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFEB8u; }
        if (ctx->pc != 0x4CFEB8u) { return; }
    }
    ctx->pc = 0x4CFEB8u;
label_4cfeb8:
    // 0x4cfeb8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4cfeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4cfebc:
    // 0x4cfebc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4cfebcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4cfec0:
    // 0x4cfec0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4cfec4:
    if (ctx->pc == 0x4CFEC4u) {
        ctx->pc = 0x4CFEC4u;
            // 0x4cfec4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFEC8u;
        goto label_4cfec8;
    }
    ctx->pc = 0x4CFEC0u;
    {
        const bool branch_taken_0x4cfec0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4cfec0) {
            ctx->pc = 0x4CFEC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFEC0u;
            // 0x4cfec4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CFED4u;
            goto label_4cfed4;
        }
    }
    ctx->pc = 0x4CFEC8u;
label_4cfec8:
    // 0x4cfec8: 0xc0400a8  jal         func_1002A0
label_4cfecc:
    if (ctx->pc == 0x4CFECCu) {
        ctx->pc = 0x4CFECCu;
            // 0x4cfecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFED0u;
        goto label_4cfed0;
    }
    ctx->pc = 0x4CFEC8u;
    SET_GPR_U32(ctx, 31, 0x4CFED0u);
    ctx->pc = 0x4CFECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFEC8u;
            // 0x4cfecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFED0u; }
        if (ctx->pc != 0x4CFED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFED0u; }
        if (ctx->pc != 0x4CFED0u) { return; }
    }
    ctx->pc = 0x4CFED0u;
label_4cfed0:
    // 0x4cfed0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4cfed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4cfed4:
    // 0x4cfed4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4cfed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4cfed8:
    // 0x4cfed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4cfed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4cfedc:
    // 0x4cfedc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cfedcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cfee0:
    // 0x4cfee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cfee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cfee4:
    // 0x4cfee4: 0x3e00008  jr          $ra
label_4cfee8:
    if (ctx->pc == 0x4CFEE8u) {
        ctx->pc = 0x4CFEE8u;
            // 0x4cfee8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4CFEECu;
        goto label_4cfeec;
    }
    ctx->pc = 0x4CFEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CFEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFEE4u;
            // 0x4cfee8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CFEECu;
label_4cfeec:
    // 0x4cfeec: 0x0  nop
    ctx->pc = 0x4cfeecu;
    // NOP
label_4cfef0:
    // 0x4cfef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cfef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4cfef4:
    // 0x4cfef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cfef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4cfef8:
    // 0x4cfef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cfef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cfefc:
    // 0x4cfefc: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x4cfefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_4cff00:
    // 0x4cff00: 0x8c420d58  lw          $v0, 0xD58($v0)
    ctx->pc = 0x4cff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3416)));
label_4cff04:
    // 0x4cff04: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x4cff04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_4cff08:
    // 0x4cff08: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4cff08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4cff0c:
    // 0x4cff0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_4cff10:
    if (ctx->pc == 0x4CFF10u) {
        ctx->pc = 0x4CFF10u;
            // 0x4cff10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFF14u;
        goto label_4cff14;
    }
    ctx->pc = 0x4CFF0Cu;
    {
        const bool branch_taken_0x4cff0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFF0Cu;
            // 0x4cff10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cff0c) {
            ctx->pc = 0x4CFF3Cu;
            goto label_4cff3c;
        }
    }
    ctx->pc = 0x4CFF14u;
label_4cff14:
    // 0x4cff14: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x4cff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4cff18:
    // 0x4cff18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4cff18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cff1c:
    // 0x4cff1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4cff1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cff20:
    // 0x4cff20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4cff20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4cff24:
    // 0x4cff24: 0xc0bc8b4  jal         func_2F22D0
label_4cff28:
    if (ctx->pc == 0x4CFF28u) {
        ctx->pc = 0x4CFF28u;
            // 0x4cff28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFF2Cu;
        goto label_4cff2c;
    }
    ctx->pc = 0x4CFF24u;
    SET_GPR_U32(ctx, 31, 0x4CFF2Cu);
    ctx->pc = 0x4CFF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFF24u;
            // 0x4cff28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F22D0u;
    if (runtime->hasFunction(0x2F22D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFF2Cu; }
        if (ctx->pc != 0x4CFF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F22D0_0x2f22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFF2Cu; }
        if (ctx->pc != 0x4CFF2Cu) { return; }
    }
    ctx->pc = 0x4CFF2Cu;
label_4cff2c:
    // 0x4cff2c: 0xc0cd670  jal         func_3359C0
label_4cff30:
    if (ctx->pc == 0x4CFF30u) {
        ctx->pc = 0x4CFF30u;
            // 0x4cff30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFF34u;
        goto label_4cff34;
    }
    ctx->pc = 0x4CFF2Cu;
    SET_GPR_U32(ctx, 31, 0x4CFF34u);
    ctx->pc = 0x4CFF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFF2Cu;
            // 0x4cff30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3359C0u;
    if (runtime->hasFunction(0x3359C0u)) {
        auto targetFn = runtime->lookupFunction(0x3359C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFF34u; }
        if (ctx->pc != 0x4CFF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003359C0_0x3359c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFF34u; }
        if (ctx->pc != 0x4CFF34u) { return; }
    }
    ctx->pc = 0x4CFF34u;
label_4cff34:
    // 0x4cff34: 0x10000004  b           . + 4 + (0x4 << 2)
label_4cff38:
    if (ctx->pc == 0x4CFF38u) {
        ctx->pc = 0x4CFF38u;
            // 0x4cff38: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4CFF3Cu;
        goto label_4cff3c;
    }
    ctx->pc = 0x4CFF34u;
    {
        const bool branch_taken_0x4cff34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFF34u;
            // 0x4cff38: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cff34) {
            ctx->pc = 0x4CFF48u;
            goto label_4cff48;
        }
    }
    ctx->pc = 0x4CFF3Cu;
label_4cff3c:
    // 0x4cff3c: 0xc0cd634  jal         func_3358D0
label_4cff40:
    if (ctx->pc == 0x4CFF40u) {
        ctx->pc = 0x4CFF44u;
        goto label_4cff44;
    }
    ctx->pc = 0x4CFF3Cu;
    SET_GPR_U32(ctx, 31, 0x4CFF44u);
    ctx->pc = 0x3358D0u;
    if (runtime->hasFunction(0x3358D0u)) {
        auto targetFn = runtime->lookupFunction(0x3358D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFF44u; }
        if (ctx->pc != 0x4CFF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003358D0_0x3358d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFF44u; }
        if (ctx->pc != 0x4CFF44u) { return; }
    }
    ctx->pc = 0x4CFF44u;
label_4cff44:
    // 0x4cff44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cff44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4cff48:
    // 0x4cff48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cff48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cff4c:
    // 0x4cff4c: 0x3e00008  jr          $ra
label_4cff50:
    if (ctx->pc == 0x4CFF50u) {
        ctx->pc = 0x4CFF50u;
            // 0x4cff50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4CFF54u;
        goto label_4cff54;
    }
    ctx->pc = 0x4CFF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CFF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFF4Cu;
            // 0x4cff50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CFF54u;
label_4cff54:
    // 0x4cff54: 0x0  nop
    ctx->pc = 0x4cff54u;
    // NOP
label_4cff58:
    // 0x4cff58: 0x0  nop
    ctx->pc = 0x4cff58u;
    // NOP
label_4cff5c:
    // 0x4cff5c: 0x0  nop
    ctx->pc = 0x4cff5cu;
    // NOP
label_4cff60:
    // 0x4cff60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4cff64:
    // 0x4cff64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4cff68:
    // 0x4cff68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cff6c:
    // 0x4cff6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cff70:
    // 0x4cff70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cff70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cff74:
    // 0x4cff74: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4cff78:
    if (ctx->pc == 0x4CFF78u) {
        ctx->pc = 0x4CFF78u;
            // 0x4cff78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFF7Cu;
        goto label_4cff7c;
    }
    ctx->pc = 0x4CFF74u;
    {
        const bool branch_taken_0x4cff74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFF74u;
            // 0x4cff78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cff74) {
            ctx->pc = 0x4CFFD0u;
            goto label_4cffd0;
        }
    }
    ctx->pc = 0x4CFF7Cu;
label_4cff7c:
    // 0x4cff7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4cff80:
    // 0x4cff80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cff80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4cff84:
    // 0x4cff84: 0x24631f20  addiu       $v1, $v1, 0x1F20
    ctx->pc = 0x4cff84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7968));
label_4cff88:
    // 0x4cff88: 0x24421f58  addiu       $v0, $v0, 0x1F58
    ctx->pc = 0x4cff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8024));
label_4cff8c:
    // 0x4cff8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4cff90:
    // 0x4cff90: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4cff94:
    if (ctx->pc == 0x4CFF94u) {
        ctx->pc = 0x4CFF94u;
            // 0x4cff94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4CFF98u;
        goto label_4cff98;
    }
    ctx->pc = 0x4CFF90u;
    {
        const bool branch_taken_0x4cff90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFF90u;
            // 0x4cff94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cff90) {
            ctx->pc = 0x4CFFB8u;
            goto label_4cffb8;
        }
    }
    ctx->pc = 0x4CFF98u;
label_4cff98:
    // 0x4cff98: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cff98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4cff9c:
    // 0x4cff9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4cffa0:
    // 0x4cffa0: 0x24631fd0  addiu       $v1, $v1, 0x1FD0
    ctx->pc = 0x4cffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8144));
label_4cffa4:
    // 0x4cffa4: 0x24422008  addiu       $v0, $v0, 0x2008
    ctx->pc = 0x4cffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8200));
label_4cffa8:
    // 0x4cffa8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4cffac:
    // 0x4cffac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4cffacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cffb0:
    // 0x4cffb0: 0xc133ffc  jal         func_4CFFF0
label_4cffb4:
    if (ctx->pc == 0x4CFFB4u) {
        ctx->pc = 0x4CFFB4u;
            // 0x4cffb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4CFFB8u;
        goto label_4cffb8;
    }
    ctx->pc = 0x4CFFB0u;
    SET_GPR_U32(ctx, 31, 0x4CFFB8u);
    ctx->pc = 0x4CFFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFFB0u;
            // 0x4cffb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CFFF0u;
    if (runtime->hasFunction(0x4CFFF0u)) {
        auto targetFn = runtime->lookupFunction(0x4CFFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFFB8u; }
        if (ctx->pc != 0x4CFFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CFFF0_0x4cfff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFFB8u; }
        if (ctx->pc != 0x4CFFB8u) { return; }
    }
    ctx->pc = 0x4CFFB8u;
label_4cffb8:
    // 0x4cffb8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4cffb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4cffbc:
    // 0x4cffbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4cffbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4cffc0:
    // 0x4cffc0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4cffc4:
    if (ctx->pc == 0x4CFFC4u) {
        ctx->pc = 0x4CFFC4u;
            // 0x4cffc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFFC8u;
        goto label_4cffc8;
    }
    ctx->pc = 0x4CFFC0u;
    {
        const bool branch_taken_0x4cffc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4cffc0) {
            ctx->pc = 0x4CFFC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFFC0u;
            // 0x4cffc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CFFD4u;
            goto label_4cffd4;
        }
    }
    ctx->pc = 0x4CFFC8u;
label_4cffc8:
    // 0x4cffc8: 0xc0400a8  jal         func_1002A0
label_4cffcc:
    if (ctx->pc == 0x4CFFCCu) {
        ctx->pc = 0x4CFFCCu;
            // 0x4cffcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CFFD0u;
        goto label_4cffd0;
    }
    ctx->pc = 0x4CFFC8u;
    SET_GPR_U32(ctx, 31, 0x4CFFD0u);
    ctx->pc = 0x4CFFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFFC8u;
            // 0x4cffcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFFD0u; }
        if (ctx->pc != 0x4CFFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CFFD0u; }
        if (ctx->pc != 0x4CFFD0u) { return; }
    }
    ctx->pc = 0x4CFFD0u;
label_4cffd0:
    // 0x4cffd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4cffd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cffd4:
    // 0x4cffd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cffd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cffd8:
    // 0x4cffd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cffd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cffdc:
    // 0x4cffdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cffdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cffe0:
    // 0x4cffe0: 0x3e00008  jr          $ra
label_4cffe4:
    if (ctx->pc == 0x4CFFE4u) {
        ctx->pc = 0x4CFFE4u;
            // 0x4cffe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CFFE8u;
        goto label_4cffe8;
    }
    ctx->pc = 0x4CFFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CFFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CFFE0u;
            // 0x4cffe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CFFE8u;
label_4cffe8:
    // 0x4cffe8: 0x0  nop
    ctx->pc = 0x4cffe8u;
    // NOP
label_4cffec:
    // 0x4cffec: 0x0  nop
    ctx->pc = 0x4cffecu;
    // NOP
}
